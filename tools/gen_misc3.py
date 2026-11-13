import sys, pathlib, re, subprocess
sys.path.insert(0, 'tools')
import verify_tu

sizes = verify_tu.load_function_sizes()
done = set()
for f in pathlib.Path('Client').rglob('*.cpp'):
    if f.name == 'misc_thunks3.cpp':
        continue
    for a, k, n in verify_tu.parse_annotations_in_cpp(f):
        done.add(a)

F = {k: [] for k in ('identity', 'stackadjust', 'calljmp', 'pushcall', 'pred',
                     'nested', 'vtailbig', 'leacall', 'subthunk')}

for a, sz in sorted(sizes.items()):
    if a in done:
        continue
    b = verify_tu.get_original_function_bytes(a, sz)
    if len(b) != sz:
        continue
    if sz == 10 and b[:10] == b'\x55\x8b\xec\x8b\x45\x08\x5d\xc2\x04\x00':
        F['identity'].append(a)
    elif sz == 10 and b[:5] == b'\x83\x6c\x24\x04\x04' and b[5] == 0xe9:
        F['stackadjust'].append(a)
    elif sz == 10 and b[0] == 0xe8 and b[5] == 0xe9:
        F['calljmp'].append(a)
    elif sz == 10 and b[:2] == b'\x6a\x01' and b[2] == 0xe8 and b[7:] == b'\xc2\x04\x00':
        F['pushcall'].append(a)
    elif sz == 10 and b[0] == 0xe8 and b[5:7] == b'\xb0\x01' and b[7:] == b'\xc2\x04\x00':
        F['pred'].append(a)
    elif sz == 10 and b[:2] == b'\x8b\x41' and b[3:5] == b'\x8a\x80' and b[9] == 0xc3:
        F['nested'].append((a, b[2], int.from_bytes(b[5:9], 'little')))
    elif sz == 10 and b[:2] == b'\x8b\x01' and b[2:4] == b'\x8b\x80' and b[8:10] == b'\xff\xe0':
        F['vtailbig'].append((a, int.from_bytes(b[4:8], 'little')))
    elif sz == 10 and b[:3] == b'\x8d\x41' and b[4] == 0x50 and b[5:7] == b'\xe8' and b[9] == 0xc3:
        F['leacall'].append((a, b[2]))
    elif sz == 11 and b[:2] == b'\x81\xe9' and b[6] == 0xe9:
        F['subthunk'].append((a, int.from_bytes(b[2:6], 'little')))


def emit(F):
    lines = ['// Identity accessors, stack-adjust and call/jump thunks, and small',
             '// member-call forwarders. Call targets are wildcarded.', '']
    for a in F['identity']:
        n = f'CIdent_{a:08x}'
        lines += [f'struct {n} {{ int get(int v); }};', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'int {n}::get(int v)', '{', '\treturn v;', '}', '']
    for a in F['stackadjust']:
        lines += [f'extern "C" void thunkTarget_{a:08x}();',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void stackAdjustThunk_{a:08x}()', '{',
                  '\t__asm { sub dword ptr [esp + 4], 4 }',
                  f'\t__asm {{ jmp thunkTarget_{a:08x} }}', '}', '']
    for a in F['calljmp']:
        lines += [f'extern "C" void thunkCall_{a:08x}();', f'extern "C" void thunkJump_{a:08x}();',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void callJumpThunk_{a:08x}()', '{',
                  f'\t__asm {{ call thunkCall_{a:08x} }}',
                  f'\t__asm {{ jmp thunkJump_{a:08x} }}', '}', '']
    for a in F['pushcall']:
        n = f'CPushCall_{a:08x}'
        lines += [f'extern "C" void pushCallTarget_{a:08x}(int);',
                  f'struct {n} {{ void call(int); }};', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'void {n}::call(int)', '{', f'\tpushCallTarget_{a:08x}(1);', '}', '']
    for a in F['pred']:
        n = f'CPred_{a:08x}'
        lines += [f'extern "C" void predTarget_{a:08x}();',
                  f'struct {n} {{ bool call(int); }};', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'bool {n}::call(int)', '{', f'\tpredTarget_{a:08x}();', '\treturn true;', '}', '']
    for a, o1, disp in F['nested']:
        n = f'CNested_{a:08x}'
        lines += [f'struct CNestInner_{a:08x} {{ char pad[0x{disp:x}]; char m; }};',
                  f'struct {n} {{ char pad[0x{o1:x}]; CNestInner_{a:08x}* p; char get(); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'char {n}::get()', '{',
                  '\treturn this->p->m;', '}', '']
    for a, disp in F['vtailbig']:
        slot = disp // 4
        n = f'CVTailBig_{a:08x}'
        decl = ' '.join(f'virtual void* v{i}();' for i in range(slot))
        lines += [f'struct {n} {{ {decl} virtual void* g(); void* f(); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void* {n}::f()', '{',
                  '\treturn g();', '}', '']
    for a, off in F['leacall']:
        n = f'CLeaCall_{a:08x}'
        lines += [f'extern "C" void leaCallTarget_{a:08x}(void*);',
                  f'struct {n} {{ char pad[0x{off:x}]; int m; void call(); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void {n}::call()', '{',
                  f'\tleaCallTarget_{a:08x}(&m);', '}', '']
    for a, imm in F['subthunk']:
        lines += [f'extern "C" void thunkTarget_{a:08x}();',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void subThunk_{a:08x}()', '{',
                  f'\t__asm {{ sub ecx, 0x{imm:x} }}',
                  f'\t__asm {{ jmp thunkTarget_{a:08x} }}', '}', '']
    return lines


def write(F):
    p = pathlib.Path('Client/Base/msvc/misc_thunks3.cpp')
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


for k, v in F.items():
    print(k, len(v))
p = write(F)
txt, good, bad = verify(p)
print(txt.splitlines()[0] if txt else 'no output')
print('good', len(good), 'bad', len(bad))
if bad:
    print('bad', [f'0x{x:08x}' for x in sorted(bad)])
    print(txt[-600:])

F2 = {}
for k, v in F.items():
    F2[k] = [x for x in v if (x[0] if isinstance(x, tuple) else x) in good]
write(F2)
txt2, good2, bad2 = verify(p)
print('final matches', (txt2.count('Match: 100.00%')), 'remaining bad', len(bad2))
