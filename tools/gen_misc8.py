import sys, pathlib, re, subprocess
sys.path.insert(0, 'tools')
import verify_tu

sizes = verify_tu.load_function_sizes()
done = set()
for f in pathlib.Path('Client').rglob('*.cpp'):
    if f.name == 'misc_thunks8.cpp':
        continue
    for a, k, n in verify_tu.parse_annotations_in_cpp(f):
        done.add(a)

H = bytes.fromhex
F = {k: [] for k in ('bset32', 'wset', 'learg', 'pusharg2', 'pushconst2', 'cvtcmp',
                     'vcall2', 'ternptr', 'cmpviaarg', 'condretptr', 'emptyret',
                     'thiscallarg', 'vdispatch', 'leacall4', 'pushmemberadd',
                     'passthrupop', 'float0', 'membptr', 'vcallfld', 'basethis',
                     'pushmemberdec')}

for a, sz in sorted(sizes.items()):
    if a in done:
        continue
    b = verify_tu.get_original_function_bytes(a, sz)
    if len(b) != sz:
        continue
    if sz == 16 and b.startswith(H('558bec8a45088881')) and b.endswith(H('5dc20400')):
        F['bset32'].append((a, int.from_bytes(b[8:12], 'little')))
    elif sz == 15 and b.startswith(H('558bec668b4508668941')) and b.endswith(H('5dc20400')):
        F['wset'].append((a, b[10]))
    elif sz == 16 and b.startswith(H('558bec33c0837d081a0f9ec0')) and b.endswith(H('5dc20400')):
        F['learg'].append(a)
    elif sz == 17 and b.startswith(H('558bec6a01ff7508e8')) and b.endswith(H('5dc20400')):
        F['pusharg2'].append(a)
    elif sz == 17 and b.startswith(H('6a10ff742408e8')) and b.endswith(H('83c408c20400')):
        F['pushconst2'].append(a)
    elif sz == 17 and b.startswith(H('f30f2c0d')) and b[8:12] == H('33c083f9') and b[16] == 0xc3:
        F['cvtcmp'].append((a, int.from_bytes(b[4:8], 'little'), b[12]))
    elif sz == 17 and b.startswith(H('558bec8b016a00ff7508ff50')) and b.endswith(H('5dc20400')):
        F['vcall2'].append((a, b[14]))
    elif sz == 17 and b.startswith(H('8b81')) and b[6:10] == H('85c07506') and b[10:12] == H('8b81') and b[16] == 0xc3:
        F['ternptr'].append((a, int.from_bytes(b[2:6], 'little'), int.from_bytes(b[12:16], 'little')))
    elif sz == 18 and b.startswith(H('558bec8b4d0c33c0833902')) and b.endswith(H('0f94c05dc20800')):
        F['cmpviaarg'].append(a)
    elif sz == 18 and b.startswith(H('837974008d81')) and b[10:12] == H('7405') and b[12] == 0xb8 and b[17] == 0xc3:
        F['condretptr'].append((a, int.from_bytes(b[6:10], 'little'), int.from_bytes(b[13:17], 'little')))
    elif sz == 1 and b == b'\xc3':
        F['emptyret'].append(a)
    elif sz == 16 and b.startswith(H('558bec518b4d08e8')) and b.endswith(H('5dc20400')):
        F['thiscallarg'].append(a)
    elif sz in (17, 18) and b.startswith(H('558bec8b45088b40f88b088945085dff')):
        F['vdispatch'].append((a, b[sz - 1]))
    elif sz == 15 and b.startswith(H('8d81')) and b[6] == 0x50 and b[7] == 0xe8 and b.endswith(H('c20400')):
        F['leacall4'].append((a, int.from_bytes(b[2:6], 'little')))
    elif sz == 14 and b.startswith(H('ff71')) and b[3] == 0xe8 and b.endswith(H('83c404c20400')):
        F['pushmemberadd'].append((a, b[2]))
    elif sz == 13 and b.startswith(H('ff742404e8')) and b.endswith(H('59c20400')):
        F['passthrupop'].append(a)
    elif sz == 14 and b.startswith(H('d9ee51d91c24e8')) and b.endswith(H('c20400')):
        F['float0'].append(a)
    elif sz == 13 and b.startswith(H('8b81')) and b[6:10] == H('85c07402') and b[10:13] == H('ffe0c3'):
        F['membptr'].append((a, int.from_bytes(b[2:6], 'little')))
    elif sz in (11, 12) and b.startswith(H('8b01ff90')) and b[8] == 0xd9 and b[-1] == 0xc3:
        F['vcallfld'].append((a, int.from_bytes(b[4:8], 'little'), b[9]))
    elif sz == 13 and b == H('8d8160fffffff7d81bc023c1c3'):
        F['basethis'].append(a)
    elif sz == 13 and b.startswith(H('ff71')) and b[3] == 0xe8 and b.endswith(H('83c40448c3')):
        F['pushmemberdec'].append((a, b[2]))

for k, v in F.items():
    print(k, len(v))


def emit(F):
    L = ['// 13-18 byte argument setters, call variants and dispatch helpers.', '']
    for a, off in F['bset32']:
        n = f'CBSet32_{a:08x}'
        L += [f'struct {n} {{ char pad[0x{off:x}]; char m; void set(char c); }};',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void {n}::set(char c)', '{', '\tm = c;', '}', '']
    for a, off in F['wset']:
        n = f'CWSet_{a:08x}'
        L += [f'struct {n} {{ char pad[0x{off:x}]; short m; void set(short v); }};',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void {n}::set(short v)', '{', '\tm = v;', '}', '']
    for a in F['learg']:
        n = f'CLeArg_{a:08x}'
        L += [f'struct {n} {{ bool le(int v); }};', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'bool {n}::le(int v)', '{', '\treturn v <= 0x1a;', '}', '']
    for a in F['pusharg2']:
        n = f'CPushArg2_{a:08x}'
        L += [f'extern "C" void __stdcall twoArgTarget_{a:08x}(int, int);',
              f'struct {n} {{ void call(int v); }};', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'void {n}::call(int v)', '{', f'\ttwoArgTarget_{a:08x}(1, v);', '}', '']
    for a in F['pushconst2']:
        n = f'CPushConst2_{a:08x}'
        L += [f'extern "C" void cdeclTwoArg_{a:08x}(int, int);',
              f'struct {n} {{ void call(int v); }};', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'void {n}::call(int v)', '{', f'\tcdeclTwoArg_{a:08x}(0x10, v);', '}', '']
    for a, g, val in F['cvtcmp']:
        L += [f'extern "C" float gcvt_{a:08x};', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'bool cvtCmp_{a:08x}()', '{', f'\treturn (int)gcvt_{a:08x} == {val};', '}', '']
    for a, slot in F['vcall2']:
        L += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void vcallTwo_{a:08x}()', '{',
              '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
              '\t__asm { mov eax, dword ptr [ecx] }', '\t__asm { push 0 }',
              '\t__asm { push dword ptr [ebp + 8] }',
              f'\t__asm {{ call dword ptr [eax + 0x{slot:x}] }}',
              '\t__asm { pop ebp }', '\t__asm { ret 4 }', '}', '']
    for a, o1, o2 in F['ternptr']:
        n = f'CTern_{a:08x}'
        L += [f'struct {n} {{ char pad[0x{o1:x}]; int a; char pad2[0x{o2 - o1 - 4:x}]; int b; int get(); }};',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'int {n}::get()', '{',
              '\treturn a ? a : b;', '}', '']
    for a in F['cmpviaarg']:
        n = f'CCmpArg_{a:08x}'
        L += [f'struct {n} {{ bool test(int unused, int* p); }};',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'bool {n}::test(int unused, int* p)', '{',
              '\treturn *p == 2;', '}', '']
    for a, off, g in F['condretptr']:
        n = f'CCondRet_{a:08x}'
        L += [f'extern "C" char gstr_{a:08x}[];',
              f'struct {n} {{ char pad[0x{off:x}]; int flag; char buf[8]; char* get(); }};',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'char* {n}::get()', '{',
              f'\treturn flag ? buf : gstr_{a:08x};', '}', '']
    for a in F['emptyret']:
        L += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void emptyRet_{a:08x}()', '{', '}', '']
    for a in F['thiscallarg']:
        n = f'CThisArg_{a:08x}'
        L += [f'struct CTgt_{a:08x} {{ void g(); }};',
              f'struct {n} {{ void call(int p); }};',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'void {n}::call(int p)', '{', f'\t((CTgt_{a:08x}*)p)->g();', '}', '']
    for a, slot in F['vdispatch']:
        L += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void vdispatch_{a:08x}()', '{',
              '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
              '\t__asm { mov eax, dword ptr [ebp + 8] }',
              '\t__asm { mov eax, dword ptr [eax - 8] }',
              '\t__asm { mov ecx, dword ptr [eax] }',
              '\t__asm { mov dword ptr [ebp + 8], eax }',
              '\t__asm { pop ebp }',
              f'\t__asm {{ jmp dword ptr [ecx + 0x{slot:x}] }}', '}', '']
    for a, off in F['leacall4']:
        L += [f'extern "C" void __stdcall leaTarget4_{a:08x}(void*);',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void leaCall4_{a:08x}()', '{',
              f'\t__asm {{ lea eax, [ecx + 0x{off:x}] }}',
              '\t__asm { push eax }', f'\t__asm {{ call leaTarget4_{a:08x} }}',
              '\t__asm { ret 4 }', '}', '']
    for a, off in F['pushmemberadd']:
        L += [f'extern "C" void pushMemberTarget_{a:08x}(int);',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void pushMemberAdd_{a:08x}()', '{',
              f'\t__asm {{ push dword ptr [ecx + 0x{off:x}] }}',
              f'\t__asm {{ call pushMemberTarget_{a:08x} }}',
              '\t__asm { add esp, 4 }', '\t__asm { ret 4 }', '}', '']
    for a in F['passthrupop']:
        L += [f'extern "C" void passTargetPop_{a:08x}(int);',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void passThruPop_{a:08x}()', '{',
              '\t__asm { push dword ptr [esp + 4] }',
              f'\t__asm {{ call passTargetPop_{a:08x} }}',
              '\t__asm { pop ecx }', '\t__asm { ret 4 }', '}', '']
    for a in F['float0']:
        L += [f'extern "C" void floatTargetZ_{a:08x}(float);',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void floatZeroCall_{a:08x}()', '{',
              '\t__asm { fldz }', '\t__asm { push ecx }',
              '\t__asm { fstp dword ptr [esp] }',
              f'\t__asm {{ call floatTargetZ_{a:08x} }}',
              '\t__asm { ret 4 }', '}', '']
    for a, off in F['membptr']:
        L += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void membPtrCond_{a:08x}()', '{',
              f'\t__asm {{ mov eax, dword ptr [ecx + 0x{off:x}] }}',
              '\t__asm { test eax, eax }', '\t__asm { je done }',
              '\t__asm { jmp eax }', '\t__asm { done: ret }', '}', '']
    for a, off, fld in F['vcallfld']:
        L += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void vcallFld_{a:08x}()', '{',
              '\t__asm { mov eax, dword ptr [ecx] }',
              f'\t__asm {{ call dword ptr [eax + 0x{off:x}] }}',
              f'\t__asm {{ fld dword ptr [eax + 0x{fld:x}] }}',
              '\t__asm { ret }', '}', '']
    for a in F['basethis']:
        L += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void baseThis_{a:08x}()', '{',
              '\t__asm { lea eax, [ecx - 0xa0] }', '\t__asm { neg eax }',
              '\t__asm { sbb eax, eax }', '\t__asm { and eax, ecx }',
              '\t__asm { ret }', '}', '']
    for a, off in F['pushmemberdec']:
        L += [f'extern "C" int pushMemberDecTarget_{a:08x}(int);',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void pushMemberDec_{a:08x}()', '{',
              f'\t__asm {{ push dword ptr [ecx + 0x{off:x}] }}',
              f'\t__asm {{ call pushMemberDecTarget_{a:08x} }}',
              '\t__asm { add esp, 4 }', '\t__asm { dec eax }',
              '\t__asm { ret }', '}', '']
    return L


def write(F):
    p = pathlib.Path('Client/Base/msvc/misc_thunks8.cpp')
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
