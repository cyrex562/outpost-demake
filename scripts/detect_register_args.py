#!/usr/bin/env python3
"""Detect decompiler register-argument artifacts (in_XX) inside C functions.

Outputs JSON report to outpost_recompiled_c/docs/artifacts/register_args_report.json
"""

from __future__ import annotations

import argparse
import json
import re
from dataclasses import dataclass
from pathlib import Path
from typing import Iterable

FUNC_START_RE = re.compile(
    r"(?m)^\s*(?:[A-Za-z_][\w\s\*]*?)\s+([A-Za-z_][A-Za-z0-9_]*)\s*\([^;{}]*\)\s*\{"
)
REG_ARG_RE = re.compile(r"\b(in_[A-Z]{2,3})\b")
ADDR_SUFFIX_RE = re.compile(r"_([0-9a-fA-F]{4})$")


@dataclass
class FunctionSpan:
    name: str
    start: int
    end: int


def find_functions(text: str) -> list[FunctionSpan]:
    functions: list[FunctionSpan] = []
    for m in FUNC_START_RE.finditer(text):
        name = m.group(1)
        brace_depth = 0
        i = m.end() - 1
        end = len(text)
        while i < len(text):
            ch = text[i]
            if ch == "{":
                brace_depth += 1
            elif ch == "}":
                brace_depth -= 1
                if brace_depth == 0:
                    end = i + 1
                    break
            i += 1
        functions.append(FunctionSpan(name=name, start=m.start(), end=end))
    return functions


def line_number_for_offset(text: str, offset: int) -> int:
    return text.count("\n", 0, offset) + 1


def iter_c_files(src_root: Path) -> Iterable[Path]:
    yield from src_root.rglob("*.c")


def build_report(repo_root: Path, src_root: Path) -> dict:
    findings = []
    reg_counter: dict[str, int] = {}

    for path in iter_c_files(src_root):
        text = path.read_text(encoding="utf-8", errors="ignore")
        rel = path.relative_to(repo_root).as_posix()
        for fn in find_functions(text):
            body = text[fn.start : fn.end]
            regs = sorted(set(REG_ARG_RE.findall(body)))
            if not regs:
                continue
            reg_occurrences = REG_ARG_RE.findall(body)

            addr_match = ADDR_SUFFIX_RE.search(fn.name)
            findings.append(
                {
                    "file": rel,
                    "function": fn.name,
                    "address_suffix": addr_match.group(1).lower()
                    if addr_match
                    else None,
                    "line": line_number_for_offset(text, fn.start),
                    "registers": regs,
                    "register_count": len(reg_occurrences),
                }
            )
            for reg in regs:
                reg_counter[reg] = reg_counter.get(reg, 0) + 1

    findings.sort(key=lambda x: (x["file"], x["line"], x["function"]))

    return {
        "schema_version": 1,
        "artifact": "register_args",
        "source_root": src_root.as_posix(),
        "summary": {
            "functions_with_register_args": len(findings),
            "unique_register_tokens": len(reg_counter),
            "register_function_frequency": dict(
                sorted(reg_counter.items(), key=lambda kv: (-kv[1], kv[0]))
            ),
        },
        "findings": findings,
    }


def main() -> int:
    default_repo = Path(__file__).resolve().parents[1]
    parser = argparse.ArgumentParser(
        description="Detect in_XX register args in C source"
    )
    parser.add_argument("--repo-root", type=Path, default=default_repo)
    parser.add_argument("--src-root", type=Path, default=None)
    parser.add_argument(
        "--out",
        type=Path,
        default=default_repo
        / "outpost_recompiled_c"
        / "docs"
        / "artifacts"
        / "register_args_report.json",
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
        "functions_with_register_args=",
        report["summary"]["functions_with_register_args"],
        "unique_register_tokens=",
        report["summary"]["unique_register_tokens"],
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
