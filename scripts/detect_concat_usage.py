#!/usr/bin/env python3
"""Detect CONCAT macro usage and classify likely intent.

Outputs JSON report to outpost_recompiled_c/docs/artifacts/concat_usage_report.json
"""

from __future__ import annotations

import argparse
import json
import re
from pathlib import Path
from typing import Iterable

CONCAT_RE = re.compile(r"\b(CONCAT\d+)\s*\(")
HEX_RE = re.compile(r"^0x[0-9a-fA-F]+$")
DEC_RE = re.compile(r"^[0-9]+$")
SEG_LIKE_RE = re.compile(r"^(?:in_[A-Z]{2,3}|unaff_[A-Z]{2,3}|[A-Za-z_][A-Za-z0-9_]*)$")


def iter_c_files(src_root: Path) -> Iterable[Path]:
    yield from src_root.rglob("*.c")


def line_number_for_offset(text: str, offset: int) -> int:
    return text.count("\n", 0, offset) + 1


def extract_call(text: str, start_open_paren: int) -> tuple[str, int]:
    depth = 0
    i = start_open_paren
    while i < len(text):
        ch = text[i]
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
            if depth == 0:
                return text[start_open_paren + 1 : i], i + 1
        i += 1
    return text[start_open_paren + 1 :], len(text)


def split_top_level_args(arg_text: str) -> list[str]:
    args: list[str] = []
    depth = 0
    start = 0
    for i, ch in enumerate(arg_text):
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
        elif ch == "," and depth == 0:
            args.append(arg_text[start:i].strip())
            start = i + 1
    last = arg_text[start:].strip()
    if last:
        args.append(last)
    return args


def classify_concat(macro: str, args: list[str]) -> str:
    if macro == "CONCAT22" and len(args) == 2:
        a0, a1 = args[0], args[1]
        if ("in_" in a0 or "unaff_" in a0) and (
            "&" in a1 or "local_" in a1 or "stack" in a1
        ):
            return "seg_offset_pointer_likely"
        if SEG_LIKE_RE.match(a0) and not (HEX_RE.match(a1) or DEC_RE.match(a1)):
            return "seg_offset_pointer_possible"
    if macro in {"CONCAT11", "CONCAT22", "CONCAT44", "CONCAT88"} and len(args) == 2:
        if (HEX_RE.match(args[0]) or DEC_RE.match(args[0])) and (
            HEX_RE.match(args[1]) or DEC_RE.match(args[1])
        ):
            return "bit_combine_likely"
        return "bit_or_pointer_unknown"
    return "unknown"


def build_report(repo_root: Path, src_root: Path) -> dict:
    findings = []
    class_counts: dict[str, int] = {}
    macro_counts: dict[str, int] = {}

    for path in iter_c_files(src_root):
        text = path.read_text(encoding="utf-8", errors="ignore")
        rel = path.relative_to(repo_root).as_posix()
        for m in CONCAT_RE.finditer(text):
            macro = m.group(1)
            args_text, end = extract_call(text, m.end() - 1)
            args = split_top_level_args(args_text)
            classification = classify_concat(macro, args)
            class_counts[classification] = class_counts.get(classification, 0) + 1
            macro_counts[macro] = macro_counts.get(macro, 0) + 1
            findings.append(
                {
                    "file": rel,
                    "line": line_number_for_offset(text, m.start()),
                    "macro": macro,
                    "args": args,
                    "classification": classification,
                    "snippet": text[m.start() : min(end, m.start() + 220)].replace(
                        "\n", " "
                    ),
                }
            )

    findings.sort(key=lambda x: (x["file"], x["line"]))

    return {
        "schema_version": 1,
        "artifact": "concat_usage",
        "source_root": src_root.as_posix(),
        "summary": {
            "total_concat_calls": len(findings),
            "macro_frequency": dict(
                sorted(macro_counts.items(), key=lambda kv: (-kv[1], kv[0]))
            ),
            "classification_frequency": dict(
                sorted(class_counts.items(), key=lambda kv: (-kv[1], kv[0]))
            ),
        },
        "findings": findings,
    }


def main() -> int:
    default_repo = Path(__file__).resolve().parents[1]
    parser = argparse.ArgumentParser(description="Detect CONCAT usage patterns")
    parser.add_argument("--repo-root", type=Path, default=default_repo)
    parser.add_argument("--src-root", type=Path, default=None)
    parser.add_argument(
        "--out",
        type=Path,
        default=default_repo
        / "outpost_recompiled_c"
        / "docs"
        / "artifacts"
        / "concat_usage_report.json",
    )
    args = parser.parse_args()

    repo_root = args.repo_root.resolve()
    src_root = (args.src_root or (repo_root / "outpost_recompiled_c" / "src")).resolve()
    out_path = args.out.resolve()

    report = build_report(repo_root=repo_root, src_root=src_root)
    out_path.parent.mkdir(parents=True, exist_ok=True)
    out_path.write_text(json.dumps(report, indent=2), encoding="utf-8")

    print(f"Wrote {out_path}")
    print("total_concat_calls=", report["summary"]["total_concat_calls"])
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
