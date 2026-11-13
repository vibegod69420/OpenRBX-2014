import sys, pathlib, re, subprocess
sys.path.insert(0, 'tools')
import verify_tu

sizes = verify_tu.load_function_sizes()
done = set()
for f in pathlib.Path('Client').rglob('*.cpp'):
    if f.name == 'misc_thunks6.cpp':
        continue
    for a, k, n in verify_tu.parse_annotations_in_cpp(f):
        done.add(a)

F = {k: [] for k in ('gset', 'gbool', 'bset', 'pushimm', 'nfloat', 'chain3',
                     'cmpimm', 'charcmp', 'lea2', 'vtailnested')}

for a, sz in sorted(sizes.items()):
    if a in done:
        continue
    b = verify_tu.get_original_function_bytes(a, sz)
    if len(b) != sz:
        continue
    if sz == 13 and b[:2] == b'\xc7\x05' and b[10:13] == b'\xc2\x04\x00':
        F['gset'].append((a, int.from_bytes(b[6:10], 'little')))
    elif sz == 13 and b[:4] == b'\x33\xc0\x83\x3d' and b[9:12] == b'\x0f\x94\xc0' and b[12] == 0xc3:
        F['gbool'].append((a, b[8]))
    elif sz == 13 and b[0:3] == b'\x55\x8b\xec' and b[3] == 0x8a and b[4] == 0x45 and b[5] == 0x08 and b[6] == 0x88 and b[7] == 0x41 and b[9] == 0x5d and b[10] == 0xc2:
        F['bset'].append((a, b[8]))
    elif sz == 13 and b[0] == 0x68 and b[5] == 0xe8 and b[10:13] == b'\xc2\x04\x00':
        F['pushimm'].append((a, int.from_bytes(b[1:5], 'little')))
    elif sz == 13 and b[:2] == b'\x8b\x81' and b[6:8] == b'\xd9\x80' and b[12] == 0xc3:
        F['nfloat'].append((a, int.from_bytes(b[2:6], 'little'), int.from_bytes(b[8:12], 'little')))
    elif sz == 13 and b[:2] == b'\x8b\x41' and b[3:5] == b'\x8b\x80' and b[9:11] == b'\x8b\x40' and b[12] == 0xc3:
        F['chain3'].append((a, b[2], int.from_bytes(b[5:9], 'little'), b[11]))
    elif sz == 13 and b[:4] == b'\x33\xc0\x83\xb9' and b[9:12] in (b'\x0f\x94\xc0', b'\x0f\x95\xc0', b'\x0f\x9d\xc0') and b[12] == 0xc3:
        F['cmpimm'].append((a, int.from_bytes(b[4:8], 'little'), b[8], b[10]))
    elif sz == 11 and b[:2] == b'\x8a\x49' and b[3:5] == b'\x33\xc0' and b[5:7] == b'\x84\xc9' and b[7:10] == b'\x0f\x94\xc0':
        F['charcmp'].append((a, b[2]))
    elif sz == 13 and b[:2] == b'\x8d\x81' and b[6] == 0x50 and b[7] == 0xe8 and b[12] == 0xc3:
        F['lea2'].append((a, int.from_bytes(b[2:6], 'little')))
    elif sz == 13 and b[:2] == b'\x8b\x89' and b[6:8] == b'\x8b\x01' and b[8:10] == b'\x8b\x40' and b[11:13] == b'\xff\xe0':
        F['vtailnested'].append((a, int.from_bytes(b[2:6], 'little'), b[10]))

for k, v in F.items():
    print(k, len(v))


def emit(F):
    lines = ['// Global constant setters and predicates, byte-argument setters,',
             '// nested member getters and immediate comparisons.', '']
    for a, val in F['gset']:
        n = f'CGSet_{a:08x}'
        lines += [f'extern "C" int gval_{a:08x};', f'struct {n} {{ void set(int); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void {n}::set(int)', '{',
                  f'\tgval_{a:08x} = 0x{val:x};', '}', '']
    for a, val in F['gbool']:
        lines += [f'extern "C" int gflag_{a:08x};', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'bool gbool_{a:08x}()', '{', f'\treturn gflag_{a:08x} == {val};', '}', '']
    for a, off in F['bset']:
        n = f'CBSet_{a:08x}'
        lines += [f'struct {n} {{ char pad[0x{off:x}]; char m; void set(char c); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void {n}::set(char c)', '{',
                  '\tm = c;', '}', '']
    for a, val in F['pushimm']:
        n = f'CPushImm_{a:08x}'
        lines += [f'extern "C" void __stdcall pushImmTarget_{a:08x}(int);',
                  f'struct {n} {{ void call(int); }};', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'void {n}::call(int)', '{', f'\tpushImmTarget_{a:08x}(0x{val:x});', '}', '']
    for a, o1, disp in F['nfloat']:
        n = f'CNFloat_{a:08x}'
        lines += [f'struct CFInner_{a:08x} {{ char pad[0x{disp:x}]; float f; }};',
                  f'struct {n} {{ char pad[0x{o1:x}]; CFInner_{a:08x}* p; float get(); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'float {n}::get()', '{',
                  '\treturn this->p->f;', '}', '']
    for a, o0, o1, o2 in F['chain3']:
        n = f'CChain_{a:08x}'
        lines += [f'struct CChainQ_{a:08x} {{ char pad[0x{o2:x}]; int v; }};',
                  f'struct CChainP_{a:08x} {{ char pad[0x{o1:x}]; CChainQ_{a:08x}* q; }};',
                  f'struct {n} {{ char pad[0x{o0:x}]; CChainP_{a:08x}* p; int get(); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'int {n}::get()', '{',
                  '\treturn this->p->q->v;', '}', '']
    for a, disp, val, op in F['cmpimm']:
        n = f'CCmp_{a:08x}'
        expr = {0x94: '==', 0x95: '!=', 0x9d: '>='}[op]
        lines += [f'struct {n} {{ char pad[0x{disp:x}]; int m; bool test(); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'bool {n}::test()', '{',
                  f'\treturn m {expr} {val};', '}', '']
    for a, off in F['charcmp']:
        n = f'CCharCmp_{a:08x}'
        lines += [f'struct {n} {{ char pad[0x{off:x}]; char m; bool test(); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'bool {n}::test()', '{',
                  '\treturn m == 0;', '}', '']
    for a, off in F['lea2']:
        n = f'CLea2_{a:08x}'
        lines += [f'extern "C" void __stdcall leaTarget2_{a:08x}(void*);',
                  f'struct {n} {{ char pad[0x{off:x}]; char m; void call(); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void {n}::call()', '{',
                  f'\tleaTarget2_{a:08x}(&m);', '}', '']
    for a, off, slot in F['vtailnested']:
        lines += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void vtailNested_{a:08x}()', '{',
                  f'\t__asm {{ mov ecx, dword ptr [ecx + 0x{off:x}] }}',
                  '\t__asm { mov eax, dword ptr [ecx] }',
                  f'\t__asm {{ mov eax, dword ptr [eax + 0x{slot:x}] }}',
                  '\t__asm { jmp eax }', '}', '']
    return lines


def write(F):
    p = pathlib.Path('Client/Base/msvc/misc_thunks6.cpp')
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
        if 'error' in line.lower():
            print(line)
    raise SystemExit('compile failed')

F2 = {}
for k, v in F.items():
    F2[k] = [x for x in v if (x[0] if isinstance(x, tuple) else x) in good]
write(F2)
txt2, good2, bad2 = verify(p)
print('final matches', txt2.count('Match: 100.00%'), 'remaining bad', len(bad2))
