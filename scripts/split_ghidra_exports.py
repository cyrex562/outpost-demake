#!/usr/bin/env python3
"""Split huge Ghidra-exported C/header files into LLM-friendly chunks.

This script preserves top-level boundaries by parsing with awareness of:
- nested braces
- line/block comments
- string and character literals

It emits chunk files that never break in the middle of a top-level declaration,
function, struct/union/enum definition, or prototype.
"""

from __future__ import annotations

import argparse
import json
import re
import shutil
from dataclasses import dataclass
from pathlib import Path
from typing import Dict, List, Tuple


@dataclass
class TopLevelItem:
    start_line: int
    end_line: int
    text: str

    @property
    def line_count(self) -> int:
        return self.end_line - self.start_line + 1


ThemeRule = Tuple[str, Tuple[str, ...]]
IndexEntry = Dict[str, str | int]


def split_top_level_items(text: str) -> List[TopLevelItem]:
    lines = text.splitlines(keepends=True)
    if not lines:
        return []

    items: List[TopLevelItem] = []
    item_start_idx = 0

    brace_depth = 0
    in_block_comment = False
    in_line_comment = False
    in_string = False
    in_char = False
    escaped = False

    def close_item(end_line_idx_inclusive: int) -> None:
        nonlocal item_start_idx
        if end_line_idx_inclusive < item_start_idx:
            return
        chunk = "".join(lines[item_start_idx : end_line_idx_inclusive + 1])
        if chunk.strip():
            items.append(
                TopLevelItem(
                    start_line=item_start_idx + 1,
                    end_line=end_line_idx_inclusive + 1,
                    text=chunk,
                )
            )
        item_start_idx = end_line_idx_inclusive + 1

    pending_top_level_brace_close: int | None = None

    for line_idx, line in enumerate(lines):
        # If a previous line ended a top-level brace block, decide whether that
        # block was a function body (close item now) or a declaration that
        # continues on this line (e.g., `typedef ... } Name;`).
        if pending_top_level_brace_close is not None:
            stripped_for_decision = line.strip()
            if stripped_for_decision and not stripped_for_decision.startswith("//"):
                if stripped_for_decision.startswith(";"):
                    # Continuation of the same declaration; let semicolon logic close it.
                    pass
                else:
                    close_item(pending_top_level_brace_close)
                pending_top_level_brace_close = None

        saw_top_level_semicolon = False
        saw_top_level_closing_brace = False

        i = 0
        while i < len(line):
            ch = line[i]
            nxt = line[i + 1] if i + 1 < len(line) else ""

            if in_line_comment:
                break

            if in_block_comment:
                if ch == "*" and nxt == "/":
                    in_block_comment = False
                    i += 2
                    continue
                i += 1
                continue

            if in_string:
                if not escaped and ch == '"':
                    in_string = False
                escaped = ch == "\\" and not escaped
                if ch != "\\":
                    escaped = False
                i += 1
                continue

            if in_char:
                if not escaped and ch == "'":
                    in_char = False
                escaped = ch == "\\" and not escaped
                if ch != "\\":
                    escaped = False
                i += 1
                continue

            if ch == "/" and nxt == "/":
                in_line_comment = True
                break

            if ch == "/" and nxt == "*":
                in_block_comment = True
                i += 2
                continue

            if ch == '"':
                in_string = True
                escaped = False
                i += 1
                continue

            if ch == "'":
                in_char = True
                escaped = False
                i += 1
                continue

            if ch == "{":
                brace_depth += 1
            elif ch == "}":
                if brace_depth > 0:
                    brace_depth -= 1
                    if brace_depth == 0:
                        saw_top_level_closing_brace = True
            elif ch == ";" and brace_depth == 0:
                saw_top_level_semicolon = True

            i += 1

        # line comment ends at newline
        in_line_comment = False

        # Safely close at top-level declaration/prototype end.
        if saw_top_level_semicolon:
            close_item(line_idx)
            continue

        # For top-level brace blocks that end with '}' and no trailing ';', defer
        # closure until we can inspect the next meaningful line.
        if saw_top_level_closing_brace:
            pending_top_level_brace_close = line_idx

    # Remaining tail
    if pending_top_level_brace_close is not None:
        close_item(pending_top_level_brace_close)

    if item_start_idx < len(lines):
        close_item(len(lines) - 1)

    return items


def pack_items(
    items: List[TopLevelItem], target_lines: int, max_lines: int
) -> List[List[TopLevelItem]]:
    chunks: List[List[TopLevelItem]] = []
    current: List[TopLevelItem] = []
    current_count = 0

    for item in items:
        item_lines = item.line_count

        if not current:
            current = [item]
            current_count = item_lines
            if item_lines >= max_lines:
                chunks.append(current)
                current = []
                current_count = 0
            continue

        if current_count + item_lines > target_lines:
            chunks.append(current)
            current = [item]
            current_count = item_lines
            if item_lines >= max_lines:
                chunks.append(current)
                current = []
                current_count = 0
        else:
            current.append(item)
            current_count += item_lines

    if current:
        chunks.append(current)

    return chunks


def write_chunks(
    source_file: Path,
    output_dir: Path,
    target_lines: int,
    max_lines: int,
    extension: str,
) -> List[Path]:
    text = source_file.read_text(encoding="utf-8", errors="replace")
    items = split_top_level_items(text)
    if not items:
        return []

    output_dir.mkdir(parents=True, exist_ok=True)
    chunks = pack_items(items, target_lines=target_lines, max_lines=max_lines)

    written: List[Path] = []
    for idx, chunk in enumerate(chunks, start=1):
        chunk_start = chunk[0].start_line
        chunk_end = chunk[-1].end_line
        filename = f"{source_file.stem}.part{idx:03d}{extension}"
        path = output_dir / filename

        body = "".join(item.text for item in chunk)
        header = (
            f"/*\n"
            f" * Source: {source_file.name}\n"
            f" * Chunk: {idx}/{len(chunks)}\n"
            f" * Original lines: {chunk_start}-{chunk_end}\n"
            f" * Boundaries: top-level declarations/definitions only\n"
            f" */\n\n"
        )

        path.write_text(header + body, encoding="utf-8")
        written.append(path)

    return written


def get_theme_rules(extension: str) -> List[ThemeRule]:
    common_rules: List[ThemeRule] = [
        (
            "memory_heap",
            (
                "heap_",
                "alloc",
                "free",
                "realloc",
                "pool",
                "descriptor",
            ),
        ),
        (
            "ui_windows",
            (
                "window",
                "dialog",
                "button",
                "panel",
                "menu",
                "cursor",
                "wnd",
                "msg",
                "ui_",
            ),
        ),
        (
            "simulator_world",
            (
                "simulator",
                "colony",
                "planet",
                "entity",
                "bldg",
                "sc",
                "map",
                "robot",
                "morale",
                "resource",
                "terrain",
                "mine",
            ),
        ),
        (
            "graphics_media",
            (
                "bmp",
                "flc",
                "wav",
                "mid",
                "palette",
                "sprite",
                "draw",
                "font",
                "tile",
                "icon",
                "mci",
                "video",
            ),
        ),
        (
            "file_io",
            (
                "file",
                "path",
                "load",
                "save",
                "read",
                "write",
                "stream",
                "disk",
            ),
        ),
        (
            "system_runtime",
            (
                "dos",
                "winapi",
                "interrupt",
                "task",
                "handle",
                "runtime",
                "timezone",
                "version",
                "error",
                "hook",
            ),
        ),
        (
            "strings_text",
            (
                "string",
                "text",
                "format",
                "printf",
                "token",
                "cstring",
                "lpstr",
                "char *",
            ),
        ),
    ]

    if extension == ".h":
        return common_rules + [
            (
                "types_structs",
                (
                    "typedef",
                    "struct",
                    "union",
                    "enum",
                    "vtable",
                    "context",
                ),
            )
        ]
    return common_rules


def classify_item_theme(item_text: str, rules: List[ThemeRule]) -> str:
    text = item_text.lower()
    best_theme = "misc"
    best_score = 0

    for theme, keywords in rules:
        score = 0
        for keyword in keywords:
            score += text.count(keyword)
        if score > best_score:
            best_score = score
            best_theme = theme

    return best_theme


def write_thematic_chunks(
    source_file: Path,
    output_dir: Path,
    target_lines: int,
    max_lines: int,
    extension: str,
) -> Tuple[Dict[str, List[Path]], List[IndexEntry]]:
    text = source_file.read_text(encoding="utf-8", errors="replace")
    items = split_top_level_items(text)
    if not items:
        return {}, []

    output_dir.mkdir(parents=True, exist_ok=True)
    rules = get_theme_rules(extension)

    themed_items: Dict[str, List[TopLevelItem]] = {}
    for item in items:
        theme = classify_item_theme(item.text, rules)
        themed_items.setdefault(theme, []).append(item)

    output: Dict[str, List[Path]] = {}
    index_entries: List[IndexEntry] = []
    for theme, grouped in sorted(themed_items.items(), key=lambda kv: kv[0]):
        chunks = pack_items(grouped, target_lines=target_lines, max_lines=max_lines)
        theme_dir = output_dir / theme
        theme_dir.mkdir(parents=True, exist_ok=True)

        written: List[Path] = []
        for idx, chunk in enumerate(chunks, start=1):
            chunk_start = chunk[0].start_line
            chunk_end = chunk[-1].end_line
            filename = f"{source_file.stem}.{theme}.part{idx:03d}{extension}"
            path = theme_dir / filename

            body = "".join(item.text for item in chunk)
            header = (
                f"/*\n"
                f" * Source: {source_file.name}\n"
                f" * Theme: {theme}\n"
                f" * Chunk: {idx}/{len(chunks)}\n"
                f" * Original lines (combined): {chunk_start}-{chunk_end}\n"
                f" * Boundaries: top-level declarations/definitions only\n"
                f" */\n\n"
            )

            path.write_text(header + body, encoding="utf-8")
            written.append(path)

            for item in chunk:
                symbols = extract_symbols_from_item(item.text, extension)
                for symbol_name, kind in symbols:
                    index_entries.append(
                        {
                            "symbol": symbol_name,
                            "kind": kind,
                            "theme": theme,
                            "source_file": source_file.name,
                            "chunk_file": path.as_posix(),
                            "original_start_line": item.start_line,
                            "original_end_line": item.end_line,
                        }
                    )

        output[theme] = written

    return output, index_entries


def _strip_comments(text: str) -> str:
    text = re.sub(r"/\*.*?\*/", " ", text, flags=re.S)
    text = re.sub(r"//.*", " ", text)
    return text


def extract_symbols_from_item(item_text: str, extension: str) -> List[Tuple[str, str]]:
    cleaned = _strip_comments(item_text)
    symbols: List[Tuple[str, str]] = []
    seen: set[Tuple[str, str]] = set()

    # Function name extraction from top-level signature prefix.
    prefix = cleaned.split("{", 1)[0] if "{" in cleaned else cleaned
    signature = " ".join(prefix.strip().split())
    if "(" in signature and not signature.startswith("#"):
        m = re.search(r"([A-Za-z_]\w*)\s*\([^;{}]*\)\s*$", signature, flags=re.S)
        if m:
            candidate = m.group(1)
            if candidate not in {"if", "for", "while", "switch", "return", "sizeof"}:
                kind = "function" if "{" in cleaned else "prototype"
                key = (candidate, kind)
                if key not in seen:
                    seen.add(key)
                    symbols.append(key)

    # Header-oriented type extraction.
    if extension == ".h":
        for kind_name, pat in [
            ("struct", r"\bstruct\s+([A-Za-z_]\w*)\s*\{"),
            ("union", r"\bunion\s+([A-Za-z_]\w*)\s*\{"),
            ("enum", r"\benum\s+([A-Za-z_]\w*)\s*\{"),
            (
                "typedef_alias",
                r"\btypedef\b[^;{}]*?\b([A-Za-z_]\w*)\s*;",
            ),
        ]:
            for m in re.finditer(pat, cleaned, flags=re.S):
                name = m.group(1)
                key = (name, kind_name)
                if key not in seen:
                    seen.add(key)
                    symbols.append(key)

    return symbols


def write_index_files(
    index_entries: List[IndexEntry], output_root: Path
) -> Tuple[Path, Path]:
    output_root.mkdir(parents=True, exist_ok=True)
    sorted_entries = sorted(
        index_entries,
        key=lambda e: (str(e["symbol"]).lower(), str(e["kind"]), str(e["chunk_file"])),
    )

    json_path = output_root / "THEMED_INDEX.json"
    md_path = output_root / "THEMED_INDEX.md"

    json_path.write_text(json.dumps(sorted_entries, indent=2), encoding="utf-8")

    lines: List[str] = [
        "# Themed Symbol Index",
        "",
        f"Entries: {len(sorted_entries)}",
        "",
        "| Symbol | Kind | Theme | Chunk | Source lines |",
        "|---|---|---|---|---|",
    ]
    for e in sorted_entries:
        lines.append(
            "| "
            + f"`{e['symbol']}` | {e['kind']} | {e['theme']} | "
            + f"`{e['chunk_file']}` | {e['original_start_line']}-{e['original_end_line']} |"
        )

    md_path.write_text("\n".join(lines) + "\n", encoding="utf-8")
    return json_path, md_path


def write_function_index_files(
    index_entries: List[IndexEntry], output_root: Path
) -> Tuple[Path, Path]:
    output_root.mkdir(parents=True, exist_ok=True)
    function_entries = [e for e in index_entries if e.get("kind") == "function"]
    sorted_entries = sorted(
        function_entries,
        key=lambda e: (str(e["symbol"]).lower(), str(e["chunk_file"])),
    )

    json_path = output_root / "THEMED_FUNCTION_INDEX.json"
    md_path = output_root / "THEMED_FUNCTION_INDEX.md"

    json_path.write_text(json.dumps(sorted_entries, indent=2), encoding="utf-8")

    lines: List[str] = [
        "# Themed Function Index",
        "",
        f"Entries: {len(sorted_entries)}",
        "",
        "| Function | Theme | Chunk | Source lines |",
        "|---|---|---|---|",
    ]
    for e in sorted_entries:
        lines.append(
            "| "
            + f"`{e['symbol']}` | {e['theme']} | "
            + f"`{e['chunk_file']}` | {e['original_start_line']}-{e['original_end_line']} |"
        )

    md_path.write_text("\n".join(lines) + "\n", encoding="utf-8")
    return json_path, md_path


def render_theme_section(title: str, themed: Dict[str, List[Path]]) -> str:
    lines = [f"## {title}", ""]
    total = 0
    for theme, files in sorted(themed.items(), key=lambda kv: kv[0]):
        total += len(files)
        lines.append(f"### {theme} ({len(files)})")
        for p in files:
            lines.append(f"- `{p.as_posix()}`")
        lines.append("")

    lines.insert(1, f"Total chunks: {total}")
    lines.insert(2, "")
    return "\n".join(lines)


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Split huge Ghidra C/header exports into smaller chunks."
    )
    parser.add_argument(
        "--root",
        type=Path,
        default=Path("decompiled_c"),
        help="Directory containing outpost.c and outpost.h (default: decompiled_c)",
    )
    parser.add_argument(
        "--out",
        type=Path,
        default=Path("decompiled_c/split_outpost"),
        help="Output directory for generated chunk files",
    )
    parser.add_argument("--target-c-lines", type=int, default=1200)
    parser.add_argument("--max-c-lines", type=int, default=1800)
    parser.add_argument("--target-h-lines", type=int, default=1000)
    parser.add_argument("--max-h-lines", type=int, default=1600)
    parser.add_argument(
        "--with-themed-pass",
        action="store_true",
        help="Generate an additional thematic second pass (grouped by subsystem keywords)",
    )
    parser.add_argument(
        "--with-index-pass",
        action="store_true",
        help="Generate a third-pass symbol index mapped to themed chunk files",
    )
    parser.add_argument("--theme-target-c-lines", type=int, default=900)
    parser.add_argument("--theme-max-c-lines", type=int, default=1400)
    parser.add_argument("--theme-target-h-lines", type=int, default=800)
    parser.add_argument("--theme-max-h-lines", type=int, default=1300)
    parser.add_argument(
        "--no-clean-out",
        action="store_true",
        help="Do not clear previously generated output folders before writing",
    )
    args = parser.parse_args()

    if args.with_index_pass:
        args.with_themed_pass = True

    src_c = args.root / "outpost.c"
    src_h = args.root / "outpost.h"

    if not src_c.exists() or not src_h.exists():
        raise FileNotFoundError(
            f"Expected files not found in {args.root}: outpost.c and outpost.h"
        )

    out_c_dir = args.out / "outpost_c"
    out_h_dir = args.out / "outpost_h"

    if not args.no_clean_out:
        if out_c_dir.exists():
            shutil.rmtree(out_c_dir)
        if out_h_dir.exists():
            shutil.rmtree(out_h_dir)

    c_files = write_chunks(
        source_file=src_c,
        output_dir=out_c_dir,
        target_lines=args.target_c_lines,
        max_lines=args.max_c_lines,
        extension=".c",
    )
    h_files = write_chunks(
        source_file=src_h,
        output_dir=out_h_dir,
        target_lines=args.target_h_lines,
        max_lines=args.max_h_lines,
        extension=".h",
    )

    manifest = args.out / "MANIFEST.md"
    manifest.parent.mkdir(parents=True, exist_ok=True)

    def section(title: str, files: List[Path]) -> str:
        lines = [f"## {title}", ""]
        for p in files:
            lines.append(f"- `{p.name}`")
        lines.append("")
        return "\n".join(lines)

    content = [
        "# Split Ghidra Export Manifest",
        "",
        f"Source C: `{src_c}`",
        f"Source H: `{src_h}`",
        "",
        f"Generated C chunks: {len(c_files)}",
        f"Generated H chunks: {len(h_files)}",
        "",
        section("C chunks", c_files),
        section("Header chunks", h_files),
    ]

    manifest.write_text("\n".join(content), encoding="utf-8")

    themed_c: Dict[str, List[Path]] = {}
    themed_h: Dict[str, List[Path]] = {}
    themed_manifest: Path | None = None
    index_json: Path | None = None
    index_md: Path | None = None
    function_index_json: Path | None = None
    function_index_md: Path | None = None
    if args.with_themed_pass:
        themed_root = args.out / "themed"
        if not args.no_clean_out and themed_root.exists():
            shutil.rmtree(themed_root)
        themed_c, index_c = write_thematic_chunks(
            source_file=src_c,
            output_dir=themed_root / "outpost_c",
            target_lines=args.theme_target_c_lines,
            max_lines=args.theme_max_c_lines,
            extension=".c",
        )
        themed_h, index_h = write_thematic_chunks(
            source_file=src_h,
            output_dir=themed_root / "outpost_h",
            target_lines=args.theme_target_h_lines,
            max_lines=args.theme_max_h_lines,
            extension=".h",
        )

        themed_manifest = themed_root / "THEMED_MANIFEST.md"
        themed_manifest.parent.mkdir(parents=True, exist_ok=True)
        themed_manifest.write_text(
            "\n".join(
                [
                    "# Themed Split Manifest",
                    "",
                    f"Source C: `{src_c}`",
                    f"Source H: `{src_h}`",
                    "",
                    render_theme_section("Themed C chunks", themed_c),
                    "",
                    render_theme_section("Themed H chunks", themed_h),
                ]
            ),
            encoding="utf-8",
        )

        if args.with_index_pass:
            combined_index = index_c + index_h
            index_json, index_md = write_index_files(combined_index, themed_root)
            function_index_json, function_index_md = write_function_index_files(
                combined_index, themed_root
            )

    print(f"Wrote {len(c_files)} C chunks to {out_c_dir}")
    print(f"Wrote {len(h_files)} header chunks to {out_h_dir}")
    print(f"Manifest: {manifest}")
    if args.with_themed_pass:
        themed_c_count = sum(len(v) for v in themed_c.values())
        themed_h_count = sum(len(v) for v in themed_h.values())
        print(
            f"Wrote {themed_c_count} themed C chunks to {args.out / 'themed' / 'outpost_c'}"
        )
        print(
            f"Wrote {themed_h_count} themed H chunks to {args.out / 'themed' / 'outpost_h'}"
        )
        if themed_manifest is not None:
            print(f"Themed manifest: {themed_manifest}")
        if index_json is not None and index_md is not None:
            print(f"Themed index JSON: {index_json}")
            print(f"Themed index Markdown: {index_md}")
        if function_index_json is not None and function_index_md is not None:
            print(f"Function index JSON: {function_index_json}")
            print(f"Function index Markdown: {function_index_md}")


if __name__ == "__main__":
    main()
