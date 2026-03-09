#!/usr/bin/env python3
"""Detect hex constants and classify likely semantic categories.

Outputs JSON report to outpost_recompiled_c/docs/artifacts/hex_constants_report.json
"""

from __future__ import annotations

import argparse
import json
import re
from pathlib import Path
from typing import Any, Iterable

HEX_RE = re.compile(r"\b0x[0-9A-Fa-f]{3,8}\b")

WM_MAP = {
    0x000F: "WM_PAINT",
    0x0010: "WM_CLOSE",
    0x0012: "WM_QUIT",
    0x0014: "WM_ERASEBKGND",
    0x0018: "WM_SHOWWINDOW",
    0x0020: "WM_SETCURSOR",
    0x0046: "WM_WINDOWPOSCHANGING",
    0x0047: "WM_WINDOWPOSCHANGED",
    0x004E: "WM_NOTIFY",
    0x0100: "WM_KEYDOWN",
    0x0101: "WM_KEYUP",
    0x0102: "WM_CHAR",
    0x0110: "WM_INITDIALOG",
    0x0111: "WM_COMMAND",
    0x0112: "WM_SYSCOMMAND",
    0x0113: "WM_TIMER",
    0x0114: "WM_HSCROLL",
    0x0115: "WM_VSCROLL",
    0x0133: "WM_CTLCOLOREDIT",
    0x0134: "WM_CTLCOLORLISTBOX",
    0x0135: "WM_CTLCOLORBTN",
    0x0138: "WM_CTLCOLORSTATIC",
}


def iter_c_files(src_root: Path) -> Iterable[Path]:
    yield from src_root.rglob("*.c")


def line_number_for_offset(text: str, offset: int) -> int:
    return text.count("\n", 0, offset) + 1


def collect_int_values(obj: Any, out: set[int]) -> None:
    if isinstance(obj, bool):
        return
    if isinstance(obj, int):
        out.add(obj)
        return
    if isinstance(obj, str):
        s = obj.strip()
        if s.startswith("0x"):
            try:
                out.add(int(s, 16))
            except ValueError:
                pass
        elif s.isdigit():
            out.add(int(s))
        return
    if isinstance(obj, dict):
        for k, v in obj.items():
            collect_int_values(k, out)
            collect_int_values(v, out)
        return
    if isinstance(obj, list):
        for item in obj:
            collect_int_values(item, out)


def classify(value: int, ui_ids: set[int]) -> tuple[str, str | None]:
    if value in WM_MAP:
        return "win16_message", WM_MAP[value]
    if value in ui_ids:
        return "ui_control_id", "resources/ui_control_ids.json"
    if 0x1000 <= value <= 0x1FFF:
        return "likely_resource_id", None
    if 0x7F00 <= value <= 0x7FFF:
        return "likely_system_resource_or_cursor", None
    return "unknown", None


def load_ui_control_ids(path: Path) -> set[int]:
    if not path.exists():
        return set()
    try:
        payload = json.loads(path.read_text(encoding="utf-8", errors="ignore"))
    except Exception:
        return set()
    out: set[int] = set()
    collect_int_values(payload, out)
    return out


def build_report(repo_root: Path, src_root: Path, ui_ids_path: Path) -> dict:
    findings = []
    classification_counts: dict[str, int] = {}
    const_counts: dict[str, int] = {}

    ui_ids = load_ui_control_ids(ui_ids_path)

    for path in iter_c_files(src_root):
        text = path.read_text(encoding="utf-8", errors="ignore")
        rel = path.relative_to(repo_root).as_posix()
        for m in HEX_RE.finditer(text):
            token = m.group(0)
            value = int(token, 16)
            cls, hint = classify(value, ui_ids)
            findings.append(
                {
                    "file": rel,
                    "line": line_number_for_offset(text, m.start()),
                    "token": token.lower(),
                    "value": value,
                    "classification": cls,
                    "symbolic_hint": hint,
                }
            )
            classification_counts[cls] = classification_counts.get(cls, 0) + 1
            const_counts[token.lower()] = const_counts.get(token.lower(), 0) + 1

    findings.sort(key=lambda x: (x["file"], x["line"], x["token"]))

    top_constants = [
        {
            "token": token,
            "count": count,
            "value": int(token, 16),
            "classification": classify(int(token, 16), ui_ids)[0],
            "symbolic_hint": classify(int(token, 16), ui_ids)[1],
        }
        for token, count in sorted(const_counts.items(), key=lambda kv: (-kv[1], kv[0]))
    ]

    return {
        "schema_version": 1,
        "artifact": "hex_constants",
        "source_root": src_root.as_posix(),
        "ui_control_ids_path": ui_ids_path.as_posix(),
        "summary": {
            "total_hex_occurrences": len(findings),
            "unique_hex_constants": len(const_counts),
            "classification_frequency": dict(
                sorted(classification_counts.items(), key=lambda kv: (-kv[1], kv[0]))
            ),
            "top_constants": top_constants[:300],
        },
        "findings": findings,
    }


def main() -> int:
    default_repo = Path(__file__).resolve().parents[1]
    parser = argparse.ArgumentParser(
        description="Detect and classify hex constants in C source"
    )
    parser.add_argument("--repo-root", type=Path, default=default_repo)
    parser.add_argument("--src-root", type=Path, default=None)
    parser.add_argument(
        "--ui-control-ids",
        type=Path,
        default=default_repo / "resources" / "ui_control_ids.json",
    )
    parser.add_argument(
        "--out",
        type=Path,
        default=default_repo
        / "outpost_recompiled_c"
        / "docs"
        / "artifacts"
        / "hex_constants_report.json",
    )
    args = parser.parse_args()

    repo_root = args.repo_root.resolve()
    src_root = (args.src_root or (repo_root / "outpost_recompiled_c" / "src")).resolve()
    ui_ids_path = args.ui_control_ids.resolve()
    out_path = args.out.resolve()

    report = build_report(
        repo_root=repo_root, src_root=src_root, ui_ids_path=ui_ids_path
    )
    out_path.parent.mkdir(parents=True, exist_ok=True)
    out_path.write_text(json.dumps(report, indent=2), encoding="utf-8")

    print(f"Wrote {out_path}")
    print(
        "total_hex_occurrences=",
        report["summary"]["total_hex_occurrences"],
        "unique_hex_constants=",
        report["summary"]["unique_hex_constants"],
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
