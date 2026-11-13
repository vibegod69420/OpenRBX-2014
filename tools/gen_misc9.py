import sys, pathlib, re, subprocess
sys.path.insert(0, 'tools')
import verify_tu

sizes = verify_tu.load_function_sizes()
done = set()
for f in pathlib.Path('Client').rglob('*.cpp'):
    if f.name == 'misc_thunks9.cpp':
        continue
    for a, k, n in verify_tu.parse_annotations_in_cpp(f):
        done.add(a)

H = bytes.fromhex
F = {k: [] for k in ('pusharg2', 'pushconst2', 'vcall2', 'condcall', 'retarg', 'retarg2',
                     'movcallret1', 'condbuf', 'condvtail8', 'pushconstcall', 'ternnested',
                     'floatglob', 'addskip', 'negchain', 'iatcall')}

for a, sz in sorted(sizes.items()):
    if a in done:
        continue
    b = verify_tu.get_original_function_bytes(a, sz)
    if len(b) != sz:
        continue
    if sz == 17 and b.startswith(H('558bec6a01ff7508e8')) and b.endswith(H('5dc20400')):
        F['pusharg2'].append(a)
    elif sz == 17 and b.startswith(H('6a10ff742408e8')) and b.endswith(H('83c408c20400')):
        F['pushconst2'].append(a)
    elif sz == 17 and b.startswith(H('558bec8b016a00ff7508ff50')) and b.endswith(H('5dc20400')):
        F['vcall2'].append((a, b[14]))
    elif sz == 18 and b.startswith(H('558bec837d08007405e8')) and b.endswith(H('5dc20800')):
        F['condcall'].append(a)
    elif sz == 18 and b.startswith(H('558becff7508e8')) and b.endswith(H('8b45085dc20400')):
        F['retarg'].append(a)
    elif sz == 18 and b.startswith(H('558bec8b4d08e8')) and b.endswith(H('8b45085dc20800')):
        F['retarg2'].append(a)
    elif sz == 19 and b.startswith(H('8b89')) and b[6] == 0xe8 and b.endswith(H('b801000000c20400')):
        F['movcallret1'].append((a, int.from_bytes(b[2:6], 'little')))
    elif sz == 20 and b.startswith(H('83791000740bff71088d4910e8')) and b.endswith(H('c20400')):
        F['condbuf'].append(a)
    elif sz == 20 and b.startswith(H('558bec8b493885c974068b015dff60')) and b.endswith(H('5dc20800')):
        F['condvtail8'].append((a, b[15]))
    elif sz == 20 and b.startswith(H('558bec8b4d086a3fe8')) and b.endswith(H('8b45085dc20400')):
        F['pushconstcall'].append(a)
    elif sz == 20 and b.startswith(H('8b81')) and b[6:10] == H('85c07407') and b[10:12] == H('8b80') and b[17:20] == H('33c0c3'):
        F['ternnested'].append((a, int.from_bytes(b[2:6], 'little'), int.from_bytes(b[12:16], 'little')))
    elif sz == 18 and b.startswith(H('d905')) and b[6:10] == H('51d91c24') and b[10] == 0xe8 and b.endswith(H('c20400')):
        F['floatglob'].append((a, int.from_bytes(b[2:6], 'little')))
    elif sz == 18 and b.startswith(H('83c110e8')) and b[8:10] == H('33c9') and b[10:14] == H('83787801') and b[14:17] == H('0f94c0') and b[17] == 0xc3:
        F['addskip'].append(a)
    elif sz == 13 and b[:2] == H('8b41') and b[3:5] == H('8b80') and b[9:11] == H('8b40') and b[12] == 0xc3:
        F['negchain'].append((a, b[2], int.from_bytes(b[5:9], 'little'), b[11]))
    elif sz == 14 and b.startswith(H('568bf1ff15')) and b[10:14] == H('2b46185e') and b[14:15] == b'':
        pass
    elif sz == 14 and b.startswith(H('568bf1ff15')) and b[9:12] == H('2b4618') and b[12] == 0x5e and b[13] == 0xc3:
        F['iatcall'].append(a)

for k, v in F.items():
    print(k, len(v))


def emit(F):
    L = ['// 14-20 byte call variants, conditional dispatches and getters.', '']
    for a in F['pusharg2']:
        L += [f'extern "C" void __stdcall twoArgTarget9_{a:08x}(int, int);',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void pushArg2_{a:08x}()', '{',
              '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
              '\t__asm { push 1 }', '\t__asm { push dword ptr [ebp + 8] }',
              f'\t__asm {{ call twoArgTarget9_{a:08x} }}',
              '\t__asm { pop ebp }', '\t__asm { ret 4 }', '}', '']
    for a in F['pushconst2']:
        L += [f'extern "C" void cdeclTwoArg9_{a:08x}(int, int);',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void pushConst2_{a:08x}()', '{',
              '\t__asm { push 0x10 }', '\t__asm { push dword ptr [esp + 8] }',
              f'\t__asm {{ call cdeclTwoArg9_{a:08x} }}',
              '\t__asm { add esp, 8 }', '\t__asm { ret 4 }', '}', '']
    for a, slot in F['vcall2']:
        L += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void vcallTwo9_{a:08x}()', '{',
              '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
              '\t__asm { mov eax, dword ptr [ecx] }', '\t__asm { push 0 }',
              '\t__asm { push dword ptr [ebp + 8] }',
              f'\t__asm {{ call dword ptr [eax + 0x{slot:x}] }}',
              '\t__asm { pop ebp }', '\t__asm { ret 4 }', '}', '']
    for a in F['condcall']:
        L += [f'extern "C" void condTarget9_{a:08x}();', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void condCall9_{a:08x}()', '{',
              '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
              '\t__asm { cmp dword ptr [ebp + 8], 0 }', '\t__asm { je done }',
              f'\t__asm {{ call condTarget9_{a:08x} }}',
              '\t__asm { done: pop ebp }', '\t__asm { ret 8 }', '}', '']
    for a in F['retarg']:
        L += [f'extern "C" void retArgTarget9_{a:08x}(int);',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void retArg9_{a:08x}()', '{',
              '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
              '\t__asm { push dword ptr [ebp + 8] }',
              f'\t__asm {{ call retArgTarget9_{a:08x} }}',
              '\t__asm { mov eax, dword ptr [ebp + 8] }',
              '\t__asm { pop ebp }', '\t__asm { ret 4 }', '}', '']
    for a in F['retarg2']:
        L += [f'extern "C" void retArg2Target9_{a:08x}();',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void retArg2_{a:08x}()', '{',
              '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
              '\t__asm { mov ecx, dword ptr [ebp + 8] }',
              f'\t__asm {{ call retArg2Target9_{a:08x} }}',
              '\t__asm { mov eax, dword ptr [ebp + 8] }',
              '\t__asm { pop ebp }', '\t__asm { ret 8 }', '}', '']
    for a, off in F['movcallret1']:
        L += [f'extern "C" void movCallTarget9_{a:08x}();',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void movCallRet1_{a:08x}()', '{',
              f'\t__asm {{ mov ecx, dword ptr [ecx + 0x{off:x}] }}',
              f'\t__asm {{ call movCallTarget9_{a:08x} }}',
              '\t__asm { mov eax, 1 }', '\t__asm { ret 4 }', '}', '']
    for a in F['condbuf']:
        L += [f'extern "C" void condBufTarget9_{a:08x}();',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void condBufCall9_{a:08x}()', '{',
              '\t__asm { cmp dword ptr [ecx + 0x10], 0 }', '\t__asm { je done }',
              '\t__asm { push dword ptr [ecx + 8] }', '\t__asm { lea ecx, [ecx + 0x10] }',
              f'\t__asm {{ call condBufTarget9_{a:08x} }}',
              '\t__asm { done: ret 4 }', '}', '']
    for a, slot in F['condvtail8']:
        L += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void condVtail8_{a:08x}()', '{',
              '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
              '\t__asm { mov ecx, dword ptr [ecx + 0x38] }',
              '\t__asm { test ecx, ecx }', '\t__asm { je skip }',
              '\t__asm { mov eax, dword ptr [ecx] }', '\t__asm { pop ebp }',
              f'\t__asm {{ jmp dword ptr [eax + 0x{slot:x}] }}',
              '\t__asm { skip: pop ebp }', '\t__asm { ret 8 }', '}', '']
    for a in F['pushconstcall']:
        L += [f'extern "C" void pushConstCallTarget_{a:08x}();',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void pushConstCall9_{a:08x}()', '{',
              '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
              '\t__asm { mov ecx, dword ptr [ebp + 8] }', '\t__asm { push 0x3f }',
              f'\t__asm {{ call pushConstCallTarget_{a:08x} }}',
              '\t__asm { mov eax, dword ptr [ebp + 8] }',
              '\t__asm { pop ebp }', '\t__asm { ret 4 }', '}', '']
    for a, off, off2 in F['ternnested']:
        L += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void ternNested_{a:08x}()', '{',
              f'\t__asm {{ mov eax, dword ptr [ecx + 0x{off:x}] }}',
              '\t__asm { test eax, eax }', '\t__asm { je zero }',
              f'\t__asm {{ mov eax, dword ptr [eax + 0x{off2:x}] }}',
              '\t__asm { ret }', '\t__asm { zero: xor eax, eax }',
              '\t__asm { ret }', '}', '']
    for a, goff in F['floatglob']:
        L += [f'extern "C" float gfloat9_{a:08x};', f'extern "C" void floatGlobTarget_{a:08x}(float);',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void floatGlobCall_{a:08x}()', '{',
              f'\t__asm {{ fld dword ptr [gfloat9_{a:08x}] }}',
              '\t__asm { push ecx }', '\t__asm { fstp dword ptr [esp] }',
              f'\t__asm {{ call floatGlobTarget_{a:08x} }}',
              '\t__asm { ret 4 }', '}', '']
    for a in F['addskip']:
        L += [f'extern "C" int addSkipTarget_{a:08x}();',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void addSkip_{a:08x}()', '{',
              '\t__asm { add ecx, 0x10 }',
              f'\t__asm {{ call addSkipTarget_{a:08x} }}',
              '\t__asm { xor ecx, ecx }',
              '\t__asm { cmp dword ptr [eax + 0x78], 1 }',
              '\t__asm { sete al }', '\t__asm { ret }', '}', '']
    for a, off, d1, d2 in F['negchain']:
        L += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void negChain_{a:08x}()', '{',
              f'\t__asm {{ mov eax, dword ptr [ecx - 0x{-off & 0xff:x}] }}',
              f'\t__asm {{ mov eax, dword ptr [eax + 0x{d1:x}] }}',
              f'\t__asm {{ mov eax, dword ptr [eax + 0x{d2:x}] }}',
              '\t__asm { ret }', '}', '']
    for a in F['iatcall']:
        L += [f'extern "C" int (*pfn9_{a:08x})();',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'extern "C" __declspec(naked) void iatCall9_{a:08x}()', '{',
              '\t__asm { push esi }', '\t__asm { mov esi, ecx }',
              f'\t__asm {{ call dword ptr [pfn9_{a:08x}] }}',
              '\t__asm { sub eax, dword ptr [esi + 0x18] }',
              '\t__asm { pop esi }', '\t__asm { ret }', '}', '']
    return L


def write(F):
    p = pathlib.Path('Client/Base/msvc/misc_thunks9.cpp')
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
