#!/usr/bin/env python3
"""Detect Ghidra-generated global symbols and extract embedded addresses.

Outputs JSON report to outpost_recompiled_c/docs/artifacts/ghidra_globals_report.json
"""

from __future__ import annotations

import argparse
import json
import re
from pathlib import Path
from typing import Iterable

PATTERNS = {
    "ptr_dat": re.compile(r"\b_?PTR_DAT_[0-9A-Fa-f_]+\b"),
    "dat": re.compile(r"\b_?DAT_[0-9A-Fa-f_]+\b"),
    "string_symbol": re.compile(r"\bs_[^\s,;()]+\b"),
}
TRAILING_ADDR_RE = re.compile(r"([0-9A-Fa-f]{4})_([0-9A-Fa-f]{4})$")


def iter_c_files(src_root: Path) -> Iterable[Path]:
    yield from src_root.rglob("*.c")


def line_number_for_offset(text: str, offset: int) -> int:
    return text.count("\n", 0, offset) + 1


def parse_address(symbol: str) -> str | None:
    m = TRAILING_ADDR_RE.search(symbol)
    if not m:
        return None
    return f"{m.group(1).lower()}:{m.group(2).lower()}"


def build_report(repo_root: Path, src_root: Path) -> dict:
    findings = []
    symbol_counts: dict[str, int] = {}
    class_counts: dict[str, int] = {}

    for path in iter_c_files(src_root):
        text = path.read_text(encoding="utf-8", errors="ignore")
        rel = path.relative_to(repo_root).as_posix()

        for cls, rx in PATTERNS.items():
            for m in rx.finditer(text):
                symbol = m.group(0)
                findings.append(
                    {
                        "file": rel,
                        "line": line_number_for_offset(text, m.start()),
                        "symbol": symbol,
                        "class": cls,
                        "address": parse_address(symbol),
                    }
                )
                symbol_counts[symbol] = symbol_counts.get(symbol, 0) + 1
                class_counts[cls] = class_counts.get(cls, 0) + 1

    findings.sort(key=lambda x: (x["file"], x["line"], x["symbol"]))

    top_symbols = [
        {"symbol": k, "count": v, "address": parse_address(k)}
        for k, v in sorted(symbol_counts.items(), key=lambda kv: (-kv[1], kv[0]))
    ]

    return {
        "schema_version": 1,
        "artifact": "ghidra_globals",
        "source_root": src_root.as_posix(),
        "summary": {
            "total_occurrences": len(findings),
            "unique_symbols": len(symbol_counts),
            "class_frequency": dict(
                sorted(class_counts.items(), key=lambda kv: (-kv[1], kv[0]))
            ),
            "top_symbols": top_symbols[:200],
        },
        "findings": findings,
    }


def main() -> int:
    default_repo = Path(__file__).resolve().parents[1]
    parser = argparse.ArgumentParser(description="Detect Ghidra global symbol usage")
    parser.add_argument("--repo-root", type=Path, default=default_repo)
    parser.add_argument("--src-root", type=Path, default=None)
    parser.add_argument(
        "--out",
        type=Path,
        default=default_repo
        / "outpost_recompiled_c"
        / "docs"
        / "artifacts"
        / "ghidra_globals_report.json",
    )
    args = parser.parse_args()

    repo_root = args.repo_root.resolve()
    src_root = (args.src_root or (repo_root / "outpost_recompiled_c" / "src")).resolve()
    out_path = args.out.resolve()

    report = build_report(repo_root=repo_root, src_root=src_root)
    out_path.parent.mkdir(parents=True, exist_ok=True)
    out_path.write_text(json.dumps(report, indent=2), encoding="utf-8")

    print(f"Wrote {out_path}")
    print(
        "unique_symbols=",
        report["summary"]["unique_symbols"],
        "total_occurrences=",
        report["summary"]["total_occurrences"],
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
