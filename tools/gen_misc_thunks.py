import sys, pathlib, re, subprocess
sys.path.insert(0, 'tools')
import verify_tu

sizes = verify_tu.load_function_sizes()
done = set()
for f in pathlib.Path('Client').rglob('*.cpp'):
    for a, k, n in verify_tu.parse_annotations_in_cpp(f):
        done.add(a)

F = {k: [] for k in ('vtordisp', 'frametail', 'addthunk', 'vtail8', 'vtframetail',
                     'settrue', 'neq', 'dblglob', 'calladd')}

for a, sz in sorted(sizes.items()):
    if a in done:
        continue
    b = verify_tu.get_original_function_bytes(a, sz)
    if len(b) != sz:
        continue
    if sz == 8 and b[:4] == b'\x2b\x49\xfc\xe9':
        F['vtordisp'].append((a, None))
    elif sz == 9 and b[:4] == b'\x55\x8b\xec\x5d' and b[4] == 0xe9:
        F['frametail'].append((a, None))
    elif sz == 8 and b[:2] == b'\x83\xc1' and b[3] == 0xe9:
        F['addthunk'].append((a, b[2]))
    elif sz == 8 and b[:2] == b'\x8b\x49' and b[3:5] == b'\x8b\x01' and b[5:7] == b'\xff\x60':
        F['vtail8'].append((a, (b[2], b[7])))
    elif sz == 9 and b[:6] == b'\x55\x8b\xec\x8b\x01\x5d' and b[6:8] == b'\xff\x60':
        F['vtframetail'].append((a, b[8]))
    elif sz == 8 and b[:2] == b'\xc6\x81' and b[6] == 1 and b[7] == 0xc3:
        F['settrue'].append((a, int.from_bytes(b[2:6], 'little')))
    elif sz == 9 and b[:4] == b'\x33\xc0\x39\x41' and b[5:8] == b'\x0f\x95\xc0' and b[8] == 0xc3:
        F['neq'].append((a, b[4]))
    elif sz == 9 and b[:2] == b'\xdd\x05' and b[6:] == b'\xc2\x04\x00':
        F['dblglob'].append((a, None))
    elif sz == 9 and b[0] == 0xe8 and b[5:7] == b'\x83\xc0' and b[8] == 0xc3:
        F['calladd'].append((a, b[7]))

for k, v in F.items():
    print(k, len(v))

lines = ['// Virtual-base and frame-preserving thunks reproduced as naked stubs, plus',
         '// small member/global accessors. Jump and call targets are wildcarded.', '']

for a, _ in F['vtordisp']:
    lines += [f'extern "C" void thunkTarget_{a:08x}();',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void vtordispThunk_{a:08x}()', '{',
              '\t__asm { sub ecx, dword ptr [ecx - 4] }',
              f'\t__asm {{ jmp thunkTarget_{a:08x} }}', '}', '']
for a, _ in F['frametail']:
    lines += [f'extern "C" void thunkTarget_{a:08x}();',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void frameTail_{a:08x}()', '{',
              '\t__asm { push ebp }', '\t__asm { mov ebp, esp }', '\t__asm { pop ebp }',
              f'\t__asm {{ jmp thunkTarget_{a:08x} }}', '}', '']
for a, off in F['addthunk']:
    lines += [f'extern "C" void thunkTarget_{a:08x}();',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void addThunk_{a:08x}()', '{',
              f'\t__asm {{ add ecx, 0x{off:x} }}',
              f'\t__asm {{ jmp thunkTarget_{a:08x} }}', '}', '']
for a, (o1, slot) in F['vtail8']:
    lines += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void memberVtail_{a:08x}()', '{',
              f'\t__asm {{ mov ecx, dword ptr [ecx + 0x{o1:x}] }}',
              '\t__asm { mov eax, dword ptr [ecx] }',
              f'\t__asm {{ jmp dword ptr [eax + 0x{slot:x}] }}', '}', '']
for a, slot in F['vtframetail']:
    lines += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void virtFrameTail_{a:08x}()', '{',
              '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
              '\t__asm { mov eax, dword ptr [ecx] }', '\t__asm { pop ebp }',
              f'\t__asm {{ jmp dword ptr [eax + 0x{slot:x}] }}', '}', '']
for a, off in F['settrue']:
    n = f'CSetTrue_{a:08x}'
    lines += [f'struct {n} {{ char pad[0x{off:x}]; char m; void set(); }};',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void {n}::set()', '{',
              '\tm = 1;', '}', '']
for a, off in F['neq']:
    n = f'CNeq_{a:08x}'
    lines += [f'struct {n} {{ char pad[0x{off:x}]; int m; bool test(); }};',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'bool {n}::test()', '{',
              '\treturn m != 0;', '}', '']
for a, _ in F['dblglob']:
    n = f'CDblGlob_{a:08x}'
    lines += [f'extern "C" double gd_{a:08x};', f'struct {n} {{ double get(int); }};',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'double {n}::get(int)', '{',
              f'\treturn gd_{a:08x};', '}', '']
for a, nbytes in F['calladd']:
    lines += [f'extern "C" char* helper_{a:08x}();',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'char* callAdd_{a:08x}()', '{',
              f'\treturn helper_{a:08x}() + {nbytes};', '}', '']

p = pathlib.Path('Client/Base/msvc/misc_thunks2.cpp')
p.write_text('\n'.join(lines), encoding='utf-8')
print('functions', len([l for l in lines if l.startswith('// FUNCTION:')]))

r = subprocess.run([sys.executable, 'tools/verify_tu.py', str(p)], capture_output=True, text=True)
txt = r.stdout + r.stderr
print(txt.splitlines()[0] if txt else 'no output')
good = set()
bad = set()
for m in re.finditer(r'0x([0-9a-f]{8}) -> .*?Match: ([\d.]+)%', txt):
    (good if float(m.group(2)) >= 99.99 else bad).add(int(m.group(1), 16))
print('good', len(good), 'bad', len(bad))
if bad:
    print(txt[-900:])
