import sys, pathlib, re, subprocess
sys.path.insert(0, 'tools')
import verify_tu

sizes = verify_tu.load_function_sizes()
done = set()
for f in pathlib.Path('Client').rglob('*.cpp'):
    if f.name == 'misc_thunks4.cpp':
        continue
    for a, k, n in verify_tu.parse_annotations_in_cpp(f):
        done.add(a)

F = {k: [] for k in ('vtordispadd', 'callmov', 'frameget', 'frameadd', 'getjmp',
                     'vcallpush', 'globalfn', 'charzero', 'pushcall')}

for a, sz in sorted(sizes.items()):
    if a in done:
        continue
    b = verify_tu.get_original_function_bytes(a, sz)
    if len(b) != sz:
        continue
    if sz == 11 and b[:4] == b'\x2b\x49\xfc\x83' and b[4] == 0xe9 and b[6] == 0xe9:
        F['vtordispadd'].append((a, b[5]))
    elif sz == 12 and b[0] == 0xe8 and b[5:7] == b'\x8b\xc8' and b[7] == 0xe9:
        F['callmov'].append(a)
    elif sz == 12 and b[:6] == b'\x55\x8b\xec\x8b\x49' and b[7] == 0x5d and b[8] == 0xe9:
        F['frameget'].append((a, b[6]))
    elif sz == 12 and b[:5] == b'\x55\x8b\xec\x83\xc1' and b[6] == 0x5d and b[7] == 0xe9:
        F['frameadd'].append((a, b[5]))
    elif sz == 11 and b[:2] == b'\x8b\x89' and b[6] == 0xe9:
        F['getjmp'].append((a, int.from_bytes(b[2:6], 'little')))
    elif sz == 10 and b[:2] == b'\x8b\x41' and b[3] == 0x50 and b[4:6] == b'\x8b\x08' and b[6:8] == b'\xff\x51' and b[9] == 0xc3:
        F['vcallpush'].append((a, b[2], b[8]))
    elif sz == 11 and b[0] == 0xa1 and b[5:8] == b'\x85\xc0\x74' and b[9:11] == b'\xff\xe0':
        F['globalfn'].append(a)
    elif sz == 10 and b[:2] == b'\x8a\x49' and b[2:5] == b'\x33\xc0\x84' and b[5:8] == b'\x0f\x94\xc0':
        F['charzero'].append((a, b[2]))
    elif sz == 10 and b[:2] == b'\x6a\x01' and b[2] == 0xe8 and b[7:] == b'\xc2\x04\x00':
        F['pushcall'].append(a)

for k, v in F.items():
    print(k, len(v))


def emit(F):
    lines = ['// Combined virtual-base/offset thunks, frame-preserving this adjustments',
             '// and small forwarders. Targets and displacements are wildcarded.', '']
    for a, off in F['vtordispadd']:
        lines += [f'extern "C" void thunkTarget_{a:08x}();', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void vtordispAdd_{a:08x}()', '{',
                  '\t__asm { sub ecx, dword ptr [ecx - 4] }',
                  f'\t__asm {{ sub ecx, 0x{off:x} }}',
                  f'\t__asm {{ jmp thunkTarget_{a:08x} }}', '}', '']
    for a in F['callmov']:
        lines += [f'extern "C" void thunkCall_{a:08x}();', f'extern "C" void thunkJump_{a:08x}();',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void callMovThunk_{a:08x}()', '{',
                  f'\t__asm {{ call thunkCall_{a:08x} }}', '\t__asm { mov ecx, eax }',
                  f'\t__asm {{ jmp thunkJump_{a:08x} }}', '}', '']
    for a, off in F['frameget']:
        lines += [f'extern "C" void thunkTarget_{a:08x}();', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void frameGetTail_{a:08x}()', '{',
                  '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
                  f'\t__asm {{ mov ecx, dword ptr [ecx + 0x{off:x}] }}',
                  '\t__asm { pop ebp }', f'\t__asm {{ jmp thunkTarget_{a:08x} }}', '}', '']
    for a, off in F['frameadd']:
        lines += [f'extern "C" void thunkTarget_{a:08x}();', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void frameAddTail_{a:08x}()', '{',
                  '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
                  f'\t__asm {{ add ecx, 0x{off:x} }}',
                  '\t__asm { pop ebp }', f'\t__asm {{ jmp thunkTarget_{a:08x} }}', '}', '']
    for a, goff in F['getjmp']:
        lines += [f'extern "C" void thunkTarget_{a:08x}();', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void getTail_{a:08x}()', '{',
                  f'\t__asm {{ mov ecx, dword ptr [ecx + 0x{goff:x}] }}',
                  f'\t__asm {{ jmp thunkTarget_{a:08x} }}', '}', '']
    for a, off, slot in F['vcallpush']:
        lines += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void vcallPush_{a:08x}()', '{',
                  f'\t__asm {{ mov eax, dword ptr [ecx + 0x{off:x}] }}',
                  '\t__asm { push eax }',
                  '\t__asm { mov ecx, dword ptr [eax] }',
                  f'\t__asm {{ call dword ptr [ecx + 0x{slot:x}] }}',
                  '\t__asm { ret }', '}', '']
    for a in F['globalfn']:
        lines += [f'extern "C" void (*gfn_{a:08x})();', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'void globalCall_{a:08x}()', '{',
                  f'\tif (gfn_{a:08x})', f'\t\tgfn_{a:08x}();', '}', '']
    for a, off in F['charzero']:
        n = f'CCharZero_{a:08x}'
        lines += [f'struct {n} {{ char pad[0x{off:x}]; char m; bool zero(); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'bool {n}::zero()', '{',
                  '\treturn m == 0;', '}', '']
    for a in F['pushcall']:
        n = f'CPushCall4_{a:08x}'
        lines += [f'extern "C" void pushCallTarget_{a:08x}(int);',
                  f'struct {n} {{ void call(int); }};', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'void {n}::call(int)', '{', f'\tpushCallTarget_{a:08x}(1);', '}', '']
    return lines


def write(F):
    p = pathlib.Path('Client/Base/msvc/misc_thunks4.cpp')
    p.write_text('\n'.join(emit(F)), encoding='utf-8')
    return p


def verify(p):
    r = subprocess.run([sys.executable, 'tools/verify_tu.py', str(p)], capture_output=True, text=True)
    txt = r.stdout + r.stderr
    good = set()
    bad = set()
    for m in re.finditer(r'0x([0-9a-f]{8}) -> .*?Match: ([\d.]+)%', txt):
        (good if float(m.group(2)) >= 99.99 else bad).add(int(m.group(1), 16))
    return txt, good, bad


p = write(F)
txt, good, bad = verify(p)
print(txt.splitlines()[0] if txt else 'no output')
print('good', len(good), 'bad', len(bad))
if bad:
    print('bad', [f'0x{x:08x}' for x in sorted(bad)])
    print(txt[-800:])

F2 = {}
for k, v in F.items():
    F2[k] = [x for x in v if (x[0] if isinstance(x, tuple) else x) in good]
write(F2)
txt2, good2, bad2 = verify(p)
print('final matches', txt2.count('Match: 100.00%'), 'remaining bad', len(bad2))
