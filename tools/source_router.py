#!/usr/bin/env python3
"""
Clean C++ Source & Header Router for OpenRBX-2014 (`ROBLOXSTUDIO`).

Maps every function address (`0x00401000`..`0x00e0f3a3`) in `RobloxStudioBeta.exe`
to its real Roblox subsystem `.cpp` implementation file, `.h` header file, C++ namespace,
and class name (`namespace RBX { ... }`), matching the exact repository structure of
`Asphaltian/OpenRBX`:
  - `Client/App/v8world/Ball.cpp` + `Client/App/include/v8world/Ball.h`
  - `Client/App/v8datamodel/Workspace.cpp` + `Client/App/include/v8datamodel/Workspace.h`
  - `Client/Network/ProfiledRakPeer.cpp` + `Client/Network/include/Network/ProfiledRakPeer.h`
  - `Client/Rendering/GfxCore/D3D9/DeviceD3D9.cpp` + `Client/Rendering/GfxCore/D3D9/DeviceD3D9.h`
  - `Client/RobloxStudio/RobloxDocManager.cpp` + `Client/RobloxStudio/RobloxDocManager.h`
"""

import bisect
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
VTABLES_PATH = ROOT / "data" / "rtti_vtables_2014.json"
SOURCE_TREE_PATH = ROOT / "data" / "source_tree_2014.txt"
OPENRBX_2007_CLIENT = ROOT.parent / "OpenRBX" / "Client"

_ROUTER_CACHE = None

GENERIC_BASE_CLASSES = {
    "Instance",
    "DescribedBase",
    "Object",
    "Reflection",
    "FactoryProduct",
    "DescribedCreatable",
    "DescribedNonCreatable",
    "NonReplicated",
    "Creatable",
    "Service",
    "sp_counted_base",
    "sp_counted_impl_p",
    "sp_counted_impl_pd",
    "noncopyable",
    "noncopyable_",
    "enable_shared_from_this",
}


def extract_clean_class(mangled: str) -> tuple[list[str], str]:
    """
    Extracts `(namespaces_list, class_name)` from an MSVC RTTI type descriptor name,
    unwrapping `DescribedCreatable<T, ...>`, `FactoryProduct<T, ...>`, `boost::detail::sp_counted_impl_p<T>`, etc.
    """
    s = re.sub(r"^\.\?A[UV]", "", mangled).rstrip("@")

    # 1. Direct non-template class: e.g. Ball@RBX@@ or ProfiledRakPeer@Network@RBX@@
    if "?" not in s:
        parts = [p for p in s.split("@") if p and not p.startswith("?A0x")]
        parts = [re.sub(r"[^A-Za-z0-9_]", "_", p) for p in parts if p]
        if not parts:
            return (["RBX"], "Engine")
        if len(parts) == 1:
            return ([], parts[0])
        cls_name = parts[0]
        ns = list(reversed(parts[1:]))
        # Keep at most 2 clean namespace levels (e.g. RBX::Network, RBX::Graphics)
        if len(ns) > 2 and ns[0] in ("RBX", "G3D", "rbx", "RakNet"):
            ns = ns[:2]
        elif len(ns) > 2:
            ns = ns[:2]
        return (ns, cls_name)

    # 2. Template-wrapped RBX class with sub-namespace: V<Class>@<Sub>@RBX@@
    for m in re.finditer(r"[VU]([A-Za-z_][A-Za-z0-9_]*)@([A-Za-z_][A-Za-z0-9_]*)@RBX@@", mangled):
        cls_name, sub_ns = m.group(1), m.group(2)
        if cls_name not in GENERIC_BASE_CLASSES and sub_ns not in GENERIC_BASE_CLASSES:
            return (["RBX", sub_ns], cls_name)

    # 3. Template-wrapped RBX class: V<Class>@RBX@@
    for m in re.finditer(r"[VU]([A-Za-z_][A-Za-z0-9_]*)@RBX@@", mangled):
        cls_name = m.group(1)
        if cls_name not in GENERIC_BASE_CLASSES:
            return (["RBX"], cls_name)

    # 4. Back-referenced RBX namespace inside template: V<Class>@<Sub>@2@ or V<Class>@2@
    for m in re.finditer(r"[VU]([A-Za-z_][A-Za-z0-9_]*)@([A-Za-z_][A-Za-z0-9_]*)@[123]@", mangled):
        cls_name, sub_ns = m.group(1), m.group(2)
        if cls_name not in GENERIC_BASE_CLASSES and "RBX" in mangled:
            return (["RBX", sub_ns], cls_name)

    for m in re.finditer(r"[VU]([A-Za-z_][A-Za-z0-9_]*)@[123]@", mangled):
        cls_name = m.group(1)
        if cls_name not in GENERIC_BASE_CLASSES and "RBX" in mangled:
            return (["RBX"], cls_name)

    # 5. Template-wrapped G3D class
    for m in re.finditer(r"[VU]([A-Za-z_][A-Za-z0-9_]*)@G3D@@", mangled):
        return (["G3D"], m.group(1))

    # 6. Outer template name fallback
    m_outer = re.search(r"\?\$([A-Za-z_][A-Za-z0-9_]*)@", mangled)
    if m_outer:
        cls_name = m_outer.group(1)
        if "RBX" in mangled:
            return (["RBX"], cls_name)
        if "G3D" in mangled:
            return (["G3D"], cls_name)
        if "rbx" in mangled:
            return (["RBX"], cls_name)

    return (["RBX"], "Instance")


def _load_known_source_paths() -> dict[str, str]:
    """
    Maps lowercase class/stem name -> canonical relative `.cpp` path (`Client/.../<Class>.cpp`)
    from both the 2014 binary's `__FILE__` strings and the 2007 `OpenRBX` repository.
    """
    stem_to_cpp: dict[str, str] = {}

    # 1. 2007 OpenRBX Client tree
    if OPENRBX_2007_CLIENT.exists():
        for p in sorted(OPENRBX_2007_CLIENT.rglob("*.cpp")):
            rel = "Client/" + str(p.relative_to(OPENRBX_2007_CLIENT)).replace("\\", "/")
            if "boost_" in rel or "zlib" in rel:
                continue
            stem = p.stem.lower()
            stem_to_cpp[stem] = rel

    # 2. 2014 source_tree_2014.txt (takes precedence over 2007 paths)
    if SOURCE_TREE_PATH.exists():
        for line in SOURCE_TREE_PATH.read_text(encoding="utf-8", errors="ignore").splitlines():
            line = line.strip().replace("\\", "/")
            idx = line.find("Client/")
            if idx == -1:
                continue
            rel = line[idx:]
            p = Path(rel)
            if p.suffix.lower() == ".cpp":
                # Normalize directory casing to match OpenRBX style
                rel_norm = _normalize_client_cpp_path(rel)
                stem_to_cpp[p.stem.lower().replace(".", "_")] = rel_norm
                stem_to_cpp[p.stem.lower()] = rel_norm
            elif p.suffix.lower() in (".h", ".hpp", ".inl"):
                stem = p.stem.lower().split(".")[0]
                if stem not in stem_to_cpp:
                    cpp_guess = _header_to_cpp_path(rel)
                    if cpp_guess:
                        stem_to_cpp[stem] = cpp_guess

    return stem_to_cpp


def _normalize_client_cpp_path(rel_cpp: str) -> str:
    rel_cpp = rel_cpp.replace("\\", "/")
    replacements = [
        ("Client/App/V8World/", "Client/App/v8world/"),
        ("Client/App/v8World/", "Client/App/v8world/"),
        ("Client/App/V8DataModel/", "Client/App/v8datamodel/"),
        ("Client/App/V8Kernel/", "Client/App/v8kernel/"),
        ("Client/App/V8Tree/", "Client/App/v8tree/"),
        ("Client/App/V8Xml/", "Client/App/v8xml/"),
        ("Client/App/Util/", "Client/App/util/"),
        ("Client/App/Tool/", "Client/App/tool/"),
        ("Client/App/Gui/", "Client/App/gui/"),
        ("Client/App/Humanoid/", "Client/App/humanoid/"),
        ("Client/App/Reflection/", "Client/App/reflection/"),
        ("Client/App/Script/", "Client/App/script/"),
        ("Client/App/Security/", "Client/App/security/"),
        ("Client/App/Voxel/", "Client/App/voxel/"),
    ]
    for old, new in replacements:
        if rel_cpp.startswith(old):
            rel_cpp = new + rel_cpp[len(old) :]
    return rel_cpp


def _header_to_cpp_path(rel_h: str) -> str:
    rel_h = rel_h.replace("\\", "/")
    m = re.match(r"Client/App/[Ii]nclude/([^/]+)/([^/]+)\.(?:h|hpp|inl)$", rel_h)
    if m:
        sub, stem = m.group(1).lower(), m.group(2).split(".")[0]
        return f"Client/App/{sub}/{stem}.cpp"
    m2 = re.match(r"Client/Network/include/Network/([^/]+)\.(?:h|hpp)$", rel_h)
    if m2:
        return f"Client/Network/{m2.group(1)}.cpp"
    return ""


def resolve_cpp_and_header_paths(namespaces: list[str], class_name: str, known_paths: dict[str, str]) -> tuple[str, str, str]:
    """
    Returns `(rel_cpp_path, rel_h_path, include_directive)` for `(namespaces, class_name)`.
    """
    clean_cls = re.sub(r"[^A-Za-z0-9_]", "", class_name) or "Instance"
    low = clean_cls.lower()
    ns_str = "::".join(namespaces)

    # Check known 2014/2007 paths first
    if low in known_paths:
        cpp_rel = known_paths[low]
    elif ns_str.startswith("RBX::Network") or any(
        k in clean_cls for k in ("RakPeer", "Replicator", "Packet", "PhysicsSender", "PhysicsReceiver", "Network", "Player", "Peer", "Streamer")
    ):
        cpp_rel = f"Client/Network/{clean_cls}.cpp"
    elif ns_str.startswith("RBX::Graphics"):
        if clean_cls.endswith("D3D9"):
            cpp_rel = f"Client/Rendering/GfxCore/D3D9/{clean_cls}.cpp"
        elif clean_cls.endswith("GL") or clean_cls.endswith("GLWin32"):
            cpp_rel = f"Client/Rendering/GfxCore/GL/{clean_cls}.cpp"
        elif clean_cls in (
            "Device",
            "DeviceContext",
            "Geometry",
            "GeometryBuffer",
            "VertexBuffer",
            "IndexBuffer",
            "VertexLayout",
            "Texture",
            "Framebuffer",
            "Renderbuffer",
            "Resource",
            "ShaderProgram",
            "VertexShader",
            "FragmentShader",
        ):
            cpp_rel = f"Client/Rendering/GfxCore/{clean_cls}.cpp"
        else:
            cpp_rel = f"Client/Rendering/GfxRender/{clean_cls}.cpp"
    elif ns_str.startswith("G3D"):
        cpp_rel = f"Client/Rendering/g3d/G3Dcpp/{clean_cls}.cpp"
    elif ns_str.startswith("RBX::Reflection") or "Descriptor" in clean_cls or "Property" in clean_cls:
        cpp_rel = f"Client/App/reflection/{clean_cls}.cpp"
    elif ns_str.startswith("RBX::Lua") or ns_str.startswith("RBX::Script") or clean_cls.startswith(("Lua", "Script")):
        cpp_rel = f"Client/App/script/{clean_cls}.cpp"
    elif ns_str.startswith("RBX::Voxel") or ns_str.startswith("RBX::Cell") or "Voxel" in clean_cls:
        cpp_rel = f"Client/App/voxel/{clean_cls}.cpp"
    elif ns_str.startswith("RBX::Tasks") or "TaskScheduler" in clean_cls or clean_cls in ("CEvent", "ProcessPerfCounter"):
        cpp_rel = f"Client/Base/rbx/{clean_cls}.cpp"
    elif ns_str.startswith("RBX::HUMAN") or clean_cls in (
        "Balancing",
        "FallingDown",
        "Flying",
        "Freefall",
        "GettingUp",
        "Humanoid",
        "HumanoidState",
        "Jumping",
        "Running",
        "RunningBase",
        "MovingNoPhysicsBase",
        "Seated",
        "Swimming",
        "Strafing",
        "Climbing",
        "Dead",
        "PlatformStanding",
        "Ragdoll",
    ):
        cpp_rel = f"Client/App/humanoid/{clean_cls}.cpp"
    elif clean_cls.startswith("bt") or any(k in clean_cls for k in ("Body", "SimBody", "Connector", "Link", "Cofm", "Kernel")):
        cpp_rel = f"Client/App/v8kernel/{clean_cls}.cpp"
    elif not namespaces or (
        namespaces[0] not in ("RBX", "G3D", "rbx")
        and (
            clean_cls.startswith(("Roblox", "Qt", "DocDock", "DocTab", "Authoring", "Debugger", "Insert", "PairRbx", "Mobile"))
            or clean_cls.endswith(("Widget", "Dialog", "Window", "Doc", "View", "Manager", "Action"))
        )
    ):
        cpp_rel = f"Client/RobloxStudio/{clean_cls}.cpp"
    elif any(
        k in clean_cls
        for k in (
            "Joint",
            "Primitive",
            "Clump",
            "Assembly",
            "Contact",
            "Poly",
            "Stage",
            "Edge",
            "Motor",
            "Buoyancy",
            "Spatial",
            "Geometry",
            "Ball",
            "Block",
            "Cylinder",
            "Wedge",
            "TriangleMesh",
            "MegaClusterPoly",
        )
    ):
        cpp_rel = f"Client/App/v8world/{clean_cls}.cpp"
    elif any(k in clean_cls for k in ("Dragger", "DragTool", "MoveTool", "RotateTool", "DropTool", "NullTool", "ToolsArrow", "ToolsSurface")):
        cpp_rel = f"Client/App/tool/{clean_cls}.cpp"
    elif clean_cls in ("Instance", "Service", "Verb", "EnumProperty"):
        cpp_rel = f"Client/App/v8tree/{clean_cls}.cpp"
    elif clean_cls in ("XmlElement", "XmlSerializer", "SerializerV2", "SerializerBinary", "WebParser"):
        cpp_rel = f"Client/App/v8xml/{clean_cls}.cpp"
    else:
        cpp_rel = f"Client/App/v8datamodel/{clean_cls}.cpp"

    # Compute corresponding .h path and #include directive
    cpp_path = Path(cpp_rel)
    parts = cpp_path.parts
    stem = cpp_path.stem
    if len(parts) >= 4 and parts[0] == "Client" and parts[1] == "App":
        sub = parts[2]
        h_rel = f"Client/App/include/{sub}/{stem}.h"
        inc = f"{sub}/{stem}.h"
    elif len(parts) >= 3 and parts[0] == "Client" and parts[1] == "Network":
        h_rel = f"Client/Network/include/Network/{stem}.h"
        inc = f"Network/{stem}.h"
    elif len(parts) >= 4 and parts[0] == "Client" and parts[1] == "Base":
        sub = parts[2]
        h_rel = f"Client/Base/include/{sub}/{stem}.h"
        inc = f"{sub}/{stem}.h"
    elif len(parts) >= 4 and parts[0] == "Client" and parts[1] == "Rendering" and parts[2] == "g3d":
        h_rel = f"Client/Rendering/g3d/include/G3D/{stem}.h"
        inc = f"G3D/{stem}.h"
    else:
        h_rel = str(cpp_path.with_suffix(".h")).replace("\\", "/")
        inc = f"{stem}.h"

    return cpp_rel, h_rel, inc


class SourceRouter:
    def __init__(self):
        self.known_paths = _load_known_source_paths()
        self.addr_to_vtable_entries: dict[int, list[dict]] = {}
        self.sorted_anchors: list[tuple[int, dict]] = []
        self._build_index()

    def _build_index(self):
        if not VTABLES_PATH.exists():
            return
        vtables = json.loads(VTABLES_PATH.read_text(encoding="utf-8"))

        # First pass: collect all addresses per (namespaces, class_name) to compute class median address
        class_addrs: dict[tuple[tuple[str, ...], str], list[int]] = {}
        raw_entries = []

        for vt in vtables:
            mangled = vt["class_mangled"]
            # Skip pure std:: / boost:: exception boilerplate so functions bind to real RBX/G3D/Studio classes
            is_boilerplate = any(
                k in mangled
                for k in (
                    "exception_detail@boost",
                    "error_category@std",
                    "basic_stringbuf@",
                    "basic_stringstream@",
                    "bad_weak_ptr@boost",
                    "bad_alloc@std",
                    "bad_exception@std",
                    "runtime_error@std",
                    "bad_function_call@boost",
                    "system_error@system@boost",
                    "thread_exception@boost",
                    "thread_resource_error@boost",
                    "sp_counted_base@detail@boost",
                    "filesystem_error@filesystem@boost",
                )
            )
            ns, cls_name = extract_clean_class(mangled)
            key = (tuple(ns), cls_name)
            slots = [int(s, 16) for s in vt["slots"]]
            for slot_idx, addr in enumerate(slots):
                if not is_boilerplate:
                    class_addrs.setdefault(key, []).append(addr)
                raw_entries.append((addr, slot_idx, vt["vtable_va"], mangled, ns, cls_name, len(slots), is_boilerplate))

        # Compute median address in .text for each class so shared vtable slots pick the locally-defined class
        class_median: dict[tuple[tuple[str, ...], str], int] = {}
        for key, addrs in class_addrs.items():
            s_addrs = sorted(addrs)
            class_median[key] = s_addrs[len(s_addrs) // 2]

        for addr, slot_idx, vt_va, mangled, ns, cls_name, n_slots, is_boilerplate in raw_entries:
            cpp_rel, h_rel, inc = resolve_cpp_and_header_paths(ns, cls_name, self.known_paths)
            info = {
                "namespaces": ns,
                "class_name": cls_name,
                "qualified_class": "::".join(ns + [cls_name]) if ns else cls_name,
                "vtable_va": vt_va,
                "slot": slot_idx,
                "total_slots": n_slots,
                "raw_rtti": mangled,
                "cpp_rel": cpp_rel,
                "h_rel": h_rel,
                "include": inc,
                "is_boilerplate": is_boilerplate,
                "median_dist": abs(addr - class_median.get((tuple(ns), cls_name), addr)),
            }
            self.addr_to_vtable_entries.setdefault(addr, []).append(info)

        # Sort candidates per address so the primary owning class is first
        anchor_map: dict[int, dict] = {}
        for addr, entries in self.addr_to_vtable_entries.items():
            entries.sort(
                key=lambda e: (
                    1 if e["is_boilerplate"] else 0,
                    0 if e["namespaces"] and e["namespaces"][0] in ("RBX", "G3D") else 1,
                    e["median_dist"],
                    e["total_slots"],
                )
            )
            best = entries[0]
            if not best["is_boilerplate"]:
                anchor_map[addr] = best

        self.sorted_anchors = sorted(anchor_map.items(), key=lambda x: x[0])
        self._anchor_addrs = [a for a, _ in self.sorted_anchors]

    def route_address(self, addr: int) -> dict:
        """
        Routes any `.text` function address `addr` to its owning class, `.cpp` file, and `.h` file.
        """
        if addr in self.addr_to_vtable_entries:
            best = dict(self.addr_to_vtable_entries[addr][0])
            if not best.get("is_boilerplate"):
                best["is_vtable_member"] = True
                return best

        # Nearest neighbor in .text (same .obj translation unit)
        if self.sorted_anchors:
            idx = bisect.bisect_left(self._anchor_addrs, addr)
            candidates = []
            if idx < len(self.sorted_anchors):
                a_right, info_right = self.sorted_anchors[idx]
                candidates.append((abs(addr - a_right), info_right))
            if idx > 0:
                a_left, info_left = self.sorted_anchors[idx - 1]
                candidates.append((abs(addr - a_left), info_left))
            candidates.sort(key=lambda x: x[0])
            best = dict(candidates[0][1])
            best["is_vtable_member"] = False
            best["slot"] = None
            return best

        cpp_rel, h_rel, inc = resolve_cpp_and_header_paths(["RBX"], "Workspace", self.known_paths)
        return {
            "namespaces": ["RBX"],
            "class_name": "Workspace",
            "qualified_class": "RBX::Workspace",
            "vtable_va": "0x00000000",
            "slot": None,
            "total_slots": 0,
            "raw_rtti": "",
            "cpp_rel": cpp_rel,
            "h_rel": h_rel,
            "include": inc,
            "is_vtable_member": False,
        }


def get_router() -> SourceRouter:
    global _ROUTER_CACHE
    if _ROUTER_CACHE is None:
        _ROUTER_CACHE = SourceRouter()
    return _ROUTER_CACHE


def ensure_class_header_and_cpp(
    route: dict,
    method_decl: str | None = None,
    field_decl: str | None = None,
    helper_decl: str | None = None,
) -> tuple[Path, Path]:
    """
    Ensures the target `.h` header file and `.cpp` source file exist with clean
    `namespace ... { class ClassName { ... }; }` scaffolding (matching `Asphaltian/OpenRBX`),
    and idempotently injects `field_decl` (inside the class's layout union), `method_decl`
    (inside `public:`), and `helper_decl` (before the class).
    """
    cpp_path = ROOT / route["cpp_rel"]
    h_path = ROOT / route["h_rel"]
    cpp_path.parent.mkdir(parents=True, exist_ok=True)
    h_path.parent.mkdir(parents=True, exist_ok=True)

    namespaces = route["namespaces"]
    cls_name = route["class_name"]
    vt_va = route.get("vtable_va", "")
    inc = route["include"]

    ns_open = "\n".join(f"namespace {ns} {{" for ns in namespaces)
    ns_close = "\n".join(f"}} // namespace {ns}" for ns in reversed(namespaces))

    if not h_path.exists():
        guard = re.sub(r"[^A-Za-z0-9_]", "_", route["h_rel"]).upper()
        vt_comment = f"// VTABLE: ROBLOXSTUDIO {vt_va}\n" if vt_va and vt_va != "0x00000000" else ""
        h_content = (
            f"#ifndef {guard}\n"
            f"#define {guard}\n\n"
            f'#include "decomp.h"\n\n'
            f"{ns_open}\n\n"
            f"// AUTO-GENERATED HELPERS\n\n"
            f"{vt_comment}"
            f"class {cls_name}\n"
            f"{{\n"
            f"public:\n"
            f"\tunion\n"
            f"\t{{\n"
            f"\t\tint _vtable_or_head;\n"
            f"\t\t// AUTO-GENERATED FIELDS\n"
            f"\t}};\n\n"
            f"\t// AUTO-GENERATED METHODS\n"
            f"}};\n\n"
            f"{ns_close}\n\n"
            f"#endif // {guard}\n"
        )
        h_path.write_text(h_content, encoding="utf-8")

    h_text = h_path.read_text(encoding="utf-8")
    modified_h = False

    if helper_decl and helper_decl.strip() not in h_text:
        marker = "// AUTO-GENERATED HELPERS"
        if marker in h_text:
            h_text = h_text.replace(marker, f"{ helper_decl.strip() }\n{marker}", 1)
            modified_h = True

    if field_decl and field_decl.strip() not in h_text:
        marker = "// AUTO-GENERATED FIELDS"
        if marker in h_text:
            h_text = h_text.replace(marker, f"{field_decl.strip()}\n\t\t{marker}", 1)
            modified_h = True

    if method_decl and method_decl.strip() not in h_text:
        marker = "// AUTO-GENERATED METHODS"
        if marker in h_text:
            h_text = h_text.replace(marker, f"{method_decl.strip()}\n\t{marker}", 1)
            modified_h = True

    if modified_h:
        h_path.write_text(h_text, encoding="utf-8")

    if not cpp_path.exists():
        cpp_content = (
            f'#include "{inc}"\n\n'
            f'#include "decomp.h"\n\n'
            f"{ns_open}\n\n"
            f"// AUTO-GENERATED IMPLEMENTATIONS\n\n"
            f"{ns_close}\n"
        )
        cpp_path.write_text(cpp_content, encoding="utf-8")

    return cpp_path, h_path


def append_method_to_cpp(cpp_path: Path, method_impl: str) -> str:
    """
    Inserts `method_impl` cleanly inside the namespace block of `cpp_path`
    (right before `// AUTO-GENERATED IMPLEMENTATIONS`), returning the previous file content
    so the caller can roll back if needed.
    """
    prev_text = cpp_path.read_text(encoding="utf-8")
    marker = "// AUTO-GENERATED IMPLEMENTATIONS"
    if marker in prev_text:
        new_text = prev_text.replace(marker, f"{method_impl.strip()}\n\n{marker}", 1)
    else:
        new_text = prev_text.rstrip() + "\n\n" + method_impl.strip() + "\n"
    cpp_path.write_text(new_text, encoding="utf-8")
    return prev_text


if __name__ == "__main__":
    router = get_router()
    print(f"Loaded {len(router.addr_to_vtable_entries)} unique vtable function addresses and {len(router.sorted_anchors)} .text anchors.")
    for sample_addr in (0x00CF2180, 0x00CF2110, 0x00CEA7A0, 0x00CE9230, 0x005E06E0, 0x005DBA40):
        r = router.route_address(sample_addr)
        print(f"  0x{sample_addr:08x} -> {r['qualified_class']} | {r['cpp_rel']} | {r['h_rel']} (slot={r['slot']})")
