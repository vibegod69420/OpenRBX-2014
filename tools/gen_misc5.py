import sys, pathlib, re, subprocess
sys.path.insert(0, 'tools')
import verify_tu

sizes = verify_tu.load_function_sizes()
done = set()
for f in pathlib.Path('Client').rglob('*.cpp'):
    if f.name == 'misc_thunks5.cpp':
        continue
    for a, k, n in verify_tu.parse_annotations_in_cpp(f):
        done.add(a)

F = {k: [] for k in ('frameget', 'vtailmemframe', 'globalbool', 'memberbool',
                     'vtailmem', 'push1', 'vtailbarrier', 'leacall', 'stringget', 'condvtail')}

for a, sz in sorted(sizes.items()):
    if a in done:
        continue
    b = verify_tu.get_original_function_bytes(a, sz)
    if len(b) != sz:
        continue
    if sz == 12 and b[:3] == b'\x55\x8b\xec' and b[3] == 0x8b and b[4] == 0x49 and b[6] == 0x5d and b[7] == 0xe9:
        F['frameget'].append((a, b[5]))
    elif sz == 12 and b[:3] == b'\x55\x8b\xec' and b[3] == 0x8b and b[4] == 0x49 and b[6:8] == b'\x8b\x01' and b[8] == 0x5d and b[9:11] == b'\xff\x60':
        F['vtailmemframe'].append((a, b[5], b[11]))
    elif sz == 12 and b[:4] == b'\x33\xc0\x39\x05' and b[8:11] == b'\x0f\x94\xc0' and b[11] == 0xc3:
        F['globalbool'].append(a)
    elif sz == 12 and b[:4] == b'\x33\xc0\x39\x81' and b[8:11] == b'\x0f\x95\xc0' and b[11] == 0xc3:
        F['memberbool'].append((a, int.from_bytes(b[4:8], 'little')))
    elif sz == 11 and b[:2] == b'\x8b\x89' and b[6:8] == b'\x8b\x01' and b[8:10] == b'\xff\x60':
        F['vtailmem'].append((a, int.from_bytes(b[2:6], 'little'), b[10]))
    elif sz == 10 and b[:2] == b'\x6a\x01' and b[2] == 0xe8 and b[7:] == b'\xc2\x04\x00':
        F['push1'].append(a)
    elif sz == 10 and b[:4] == b'\x8b\x01\x8b\x80' and b[8:10] == b'\xff\xe0':
        F['vtailbarrier'].append((a, int.from_bytes(b[4:8], 'little')))
    elif sz == 10 and b[:2] == b'\x8d\x41' and b[3] == 0x50 and b[4] == 0xe8 and b[9] == 0xc3:
        F['leacall'].append((a, b[2]))
    elif sz == 12 and b[:4] == b'\x83\x79\x20\x10' and b[4:7] == b'\x8d\x41\x0c' and b[7:9] == b'\x72\x02' and b[9:11] == b'\x8b\x00':
        F['stringget'].append(a)
    elif sz == 12 and b[:4] == b'\x80\x79\x28\x00' and b[4:6] == b'\x74\x05' and b[6:8] == b'\x8b\x01' and b[8:10] == b'\xff\x60':
        F['condvtail'].append((a, b[2], b[10]))

for k, v in F.items():
    print(k, len(v))


def emit(F):
    lines = ['// Frame-preserving this adjustments, virtual tails through members,',
             '// boolean predicates and small string/pointer getters.', '',
             '#include <intrin.h>', '']
    for a, off in F['frameget']:
        lines += [f'extern "C" void thunkTarget_{a:08x}();', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void frameGetTail_{a:08x}()', '{',
                  '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
                  f'\t__asm {{ mov ecx, dword ptr [ecx + 0x{off:x}] }}',
                  '\t__asm { pop ebp }', f'\t__asm {{ jmp thunkTarget_{a:08x} }}', '}', '']
    for a, off, slot in F['vtailmemframe']:
        lines += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void vtailMemFrame_{a:08x}()', '{',
                  '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
                  f'\t__asm {{ mov ecx, dword ptr [ecx + 0x{off:x}] }}',
                  '\t__asm { mov eax, dword ptr [ecx] }', '\t__asm { pop ebp }',
                  f'\t__asm {{ jmp dword ptr [eax + 0x{slot:x}] }}', '}', '']
    for a in F['globalbool']:
        lines += [f'extern "C" int gbool_{a:08x};', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'bool globalBool_{a:08x}()', '{', f'\treturn gbool_{a:08x} == 0;', '}', '']
    for a, disp in F['memberbool']:
        n = f'CMemberBool_{a:08x}'
        lines += [f'struct {n} {{ char pad[0x{disp:x}]; int m; bool test(); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'bool {n}::test()', '{',
                  '\treturn m != 0;', '}', '']
    for a, off, slot in F['vtailmem']:
        lines += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void vtailMem_{a:08x}()', '{',
                  f'\t__asm {{ mov ecx, dword ptr [ecx + 0x{off:x}] }}',
                  '\t__asm { mov eax, dword ptr [ecx] }',
                  f'\t__asm {{ jmp dword ptr [eax + 0x{slot:x}] }}', '}', '']
    for a in F['push1']:
        n = f'CPush1_{a:08x}'
        lines += [f'extern "C" void __stdcall pushOneTarget_{a:08x}(int);',
                  f'struct {n} {{ void call(int); }};', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'void {n}::call(int)', '{', f'\tpushOneTarget_{a:08x}(1);', '}', '']
    for a, disp in F['vtailbarrier']:
        slot = disp // 4
        n = f'CVTailB_{a:08x}'
        decl = ' '.join(f'virtual void* v{i}();' for i in range(slot))
        lines += [f'struct {n} {{ {decl} virtual void* g(); void* f(); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void* {n}::f()', '{',
                  '\tvoid* r = g();', '\t_ReadWriteBarrier();', '\treturn r;', '}', '']
    for a, off in F['leacall']:
        n = f'CLeaCall_{a:08x}'
        lines += [f'extern "C" void __stdcall leaCallTarget_{a:08x}(void*);',
                  f'struct {n} {{ char pad[0x{off:x}]; char m; void call(); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void {n}::call()', '{',
                  f'\tleaCallTarget_{a:08x}(&m);', '}', '']
    for a in F['stringget']:
        lines += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void stringGet_{a:08x}()', '{',
                  '\t__asm { cmp dword ptr [ecx + 0x20], 0x10 }',
                  '\t__asm { lea eax, [ecx + 0xc] }',
                  '\t__asm { jb done }',
                  '\t__asm { mov eax, dword ptr [eax] }',
                  '\t__asm { done: ret }', '}', '']
    for a, off, slot in F['condvtail']:
        lines += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void condVtail_{a:08x}()', '{',
                  f'\t__asm {{ cmp byte ptr [ecx + 0x{off:x}], 0 }}',
                  '\t__asm { je done }',
                  '\t__asm { mov eax, dword ptr [ecx] }',
                  f'\t__asm {{ jmp dword ptr [eax + 0x{slot:x}] }}',
                  '\t__asm { done: ret }', '}', '']
    return lines


def write(F):
    p = pathlib.Path('Client/Base/msvc/misc_thunks5.cpp')
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
if not good:
    for line in txt.splitlines():
        if 'error' in line.lower() or 'cannot' in line.lower():
            print(line)
    raise SystemExit('compile or verification failed; file left as generated')

F2 = {}
for k, v in F.items():
    F2[k] = [x for x in v if (x[0] if isinstance(x, tuple) else x) in good]
write(F2)
txt2, good2, bad2 = verify(p)
print('final matches', txt2.count('Match: 100.00%'), 'remaining bad', len(bad2))
