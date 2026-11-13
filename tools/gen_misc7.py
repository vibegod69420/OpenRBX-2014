import sys, pathlib, re, subprocess
sys.path.insert(0, 'tools')
import verify_tu

sizes = verify_tu.load_function_sizes()
done = set()
for f in pathlib.Path('Client').rglob('*.cpp'):
    if f.name == 'misc_thunks7.cpp':
        continue
    for a, k, n in verify_tu.parse_annotations_in_cpp(f):
        done.add(a)

F = {k: [] for k in ('vtor2', 'frameget32', 'frameadd32', 'vtailnestframe', 'float0',
                     'passthru', 'addcall', 'globalbytecall', 'vcallarg', 'memberpush',
                     'bytearray', 'movcalladd', 'cmpglobal', 'nullcall', 'globfn')}

for a, sz in sorted(sizes.items()):
    if a in done:
        continue
    b = verify_tu.get_original_function_bytes(a, sz)
    if len(b) != sz:
        continue
    if sz == 14 and b[:5] == b'\x2b\x49\xfc\x81\xe9' and b[9] == 0xe9:
        F['vtor2'].append((a, int.from_bytes(b[5:9], 'little')))
    elif sz == 15 and b[:5] == b'\x55\x8b\xec\x8b\x89' and b[9] == 0x5d and b[10] == 0xe9:
        F['frameget32'].append((a, int.from_bytes(b[5:9], 'little')))
    elif sz == 15 and b[:5] == b'\x55\x8b\xec\x81\xc1' and b[9] == 0x5d and b[10] == 0xe9:
        F['frameadd32'].append((a, int.from_bytes(b[5:9], 'little')))
    elif sz == 14 and b[:5] == b'\x55\x8b\xec\x8b\x49' and b[6:8] == b'\x8b\x01' and b[8:10] == b'\x8b\x40' and b[11] == 0x5d:
        F['vtailnestframe'].append((a, b[5], b[10]))
    elif sz == 14 and b[:6] == b'\xd9\xee\x51\xd9\x1c\x24' and b[11:14] == b'\xc2\x04\x00':
        F['float0'].append(a)
    elif sz == 13 and b[:4] == b'\xff\x74\x24\x04' and b[4] == 0xe8 and b[9] == 0x59 and b[10:13] == b'\xc2\x04\x00':
        F['passthru'].append(a)
    elif sz == 14 and b[:2] == b'\x81\xc1' and b[6] == 0xe8 and b[11:14] == b'\xc2\x04\x00':
        F['addcall'].append((a, int.from_bytes(b[2:6], 'little')))
    elif sz == 15 and b[0] == 0xc6 and b[1] == 0x05 and b[6] == 0x01 and b[7] == 0xe8:
        F['globalbytecall'].append(a)
    elif sz == 15 and b[:5] == b'\x55\x8b\xec\x8b\x01' and b[5:7] == b'\xff\x75' and b[8:10] == b'\xff\x50' and b[11] == 0x5d:
        F['vcallarg'].append((a, b[7], b[10]))
    elif sz == 14 and b[:2] == b'\xff\x71' and b[3] == 0xe8 and b[8:11] == b'\x83\xc4\x04' and b[11:14] == b'\xc2\x04\x00':
        F['memberpush'].append((a, b[2]))
    elif sz == 14 and b[:6] == b'\x55\x8b\xec\x8b\x45\x08' and b[6] == 0x8a and b[7] == 0x44 and b[8] == 0x08 and b[10] == 0x5d:
        F['bytearray'].append((a, b[9]))
    elif sz == 15 and b[:2] == b'\x8b\x89' and b[6] == 0xe8 and b[11] == 0x83 and b[12] == 0xc0 and b[14] == 0xc3:
        F['movcalladd'].append((a, int.from_bytes(b[2:6], 'little')))
    elif sz == 14 and b[:2] == b'\x80\xb9' and b[6] == 0x00 and b[7:9] == b'\x0f\x85' and b[13] == 0xc3:
        F['cmpglobal'].append((a, int.from_bytes(b[2:6], 'little')))
    elif sz == 15 and b[:2] == b'\x8b\x89' and b[6:8] == b'\x85\xc9' and b[8:10] == b'\x0f\x85' and b[14] == 0xc3:
        F['nullcall'].append((a, int.from_bytes(b[2:6], 'little')))
    elif sz == 12 and b[0] == 0xa1 and b[5:8] == b'\x85\xc0\x74' and b[9:11] == b'\xff\xe0':
        F['globfn'].append(a)

for k, v in F.items():
    print(k, len(v))


def emit(F):
    lines = ['// 13-15 byte thunk variants: combined vtordisp/offset, disp32 this',
             '// adjustments, argument pass-through and indirect calls.', '']
    for a, imm in F['vtor2']:
        lines += [f'extern "C" void thunkTarget_{a:08x}();', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void vtor2_{a:08x}()', '{',
                  '\t__asm { sub ecx, dword ptr [ecx - 4] }',
                  f'\t__asm {{ sub ecx, 0x{imm:x} }}',
                  f'\t__asm {{ jmp thunkTarget_{a:08x} }}', '}', '']
    for a, off in F['frameget32']:
        lines += [f'extern "C" void thunkTarget_{a:08x}();', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void frameGet32_{a:08x}()', '{',
                  '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
                  f'\t__asm {{ mov ecx, dword ptr [ecx + 0x{off:x}] }}',
                  '\t__asm { pop ebp }', f'\t__asm {{ jmp thunkTarget_{a:08x} }}', '}', '']
    for a, off in F['frameadd32']:
        lines += [f'extern "C" void thunkTarget_{a:08x}();', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void frameAdd32_{a:08x}()', '{',
                  '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
                  f'\t__asm {{ add ecx, 0x{off:x} }}',
                  '\t__asm { pop ebp }', f'\t__asm {{ jmp thunkTarget_{a:08x} }}', '}', '']
    for a, off, slot in F['vtailnestframe']:
        lines += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void vtailNestFrame_{a:08x}()', '{',
                  '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
                  f'\t__asm {{ mov ecx, dword ptr [ecx + 0x{off:x}] }}',
                  '\t__asm { mov eax, dword ptr [ecx] }',
                  f'\t__asm {{ mov eax, dword ptr [eax + 0x{slot:x}] }}',
                  '\t__asm { pop ebp }', '\t__asm { jmp eax }', '}', '']
    for a in F['float0']:
        n = f'CFloat0_{a:08x}'
        lines += [f'extern "C" void floatTarget0_{a:08x}(float);',
                  f'struct {n} {{ void call(int); }};', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'void {n}::call(int)', '{', f'\tfloatTarget0_{a:08x}(0.0f);', '}', '']
    for a in F['passthru']:
        n = f'CPass_{a:08x}'
        lines += [f'extern "C" void passTarget_{a:08x}(int);',
                  f'struct {n} {{ void call(int); }};', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'void {n}::call(int v)', '{', f'\tpassTarget_{a:08x}(v);', '}', '']
    for a, imm in F['addcall']:
        lines += [f'extern "C" void callTarget_{a:08x}();',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void addCall_{a:08x}()', '{',
                  f'\t__asm {{ add ecx, 0x{imm:x} }}',
                  f'\t__asm {{ call callTarget_{a:08x} }}',
                  '\t__asm { ret 4 }', '}', '']
    for a in F['globalbytecall']:
        lines += [f'extern "C" unsigned char gbyte_{a:08x};', f'extern "C" void gcall_{a:08x}();',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void gbyteCall_{a:08x}()', '{',
                  f'\tgbyte_{a:08x} = 1;', f'\tgcall_{a:08x}();', '}', '']
    for a, arg, slot in F['vcallarg']:
        lines += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void vcallArg_{a:08x}()', '{',
                  '\t__asm { push ebp }', '\t__asm { mov ebp, esp }',
                  '\t__asm { mov eax, dword ptr [ecx] }',
                  f'\t__asm {{ push dword ptr [ebp + 0x{arg:x}] }}',
                  f'\t__asm {{ call dword ptr [eax + 0x{slot:x}] }}',
                  '\t__asm { pop ebp }', '\t__asm { ret 8 }', '}', '']
    for a, off in F['memberpush']:
        lines += [f'extern "C" void memberPushTarget_{a:08x}(int);',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void memberPush_{a:08x}()', '{',
                  f'\t__asm {{ push dword ptr [ecx + 0x{off:x}] }}',
                  f'\t__asm {{ call memberPushTarget_{a:08x} }}',
                  '\t__asm { add esp, 4 }', '\t__asm { ret 4 }', '}', '']
    for a, off in F['bytearray']:
        n = f'CByteArr_{a:08x}'
        lines += [f'struct {n} {{ char pad[0x{off:x}]; char arr[8]; char get(int i); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'char {n}::get(int i)', '{',
                  '\treturn arr[i];', '}', '']
    for a, moff in F['movcalladd']:
        lines += [f'extern "C" int callAdd2Target_{a:08x}();',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void movCallAdd_{a:08x}()', '{',
                  f'\t__asm {{ mov ecx, dword ptr [ecx + 0x{moff:x}] }}',
                  f'\t__asm {{ call callAdd2Target_{a:08x} }}',
                  '\t__asm { add eax, 0x24 }', '\t__asm { ret }', '}', '']
    for a, off in F['cmpglobal']:
        lines += [f'extern "C" void condTarget_{a:08x}();', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void condGlobalByte_{a:08x}()', '{',
                  f'\t__asm {{ cmp byte ptr [ecx + 0x{off:x}], 0 }}',
                  f'\t__asm {{ jne condTarget_{a:08x} }}',
                  '\t__asm { ret }', '}', '']
    for a, off in F['nullcall']:
        lines += [f'extern "C" void nullTarget_{a:08x}();', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void nullCall_{a:08x}()', '{',
                  f'\t__asm {{ mov ecx, dword ptr [ecx + 0x{off:x}] }}',
                  '\t__asm { test ecx, ecx }',
                  f'\t__asm {{ jne nullTarget_{a:08x} }}',
                  '\t__asm { ret }', '}', '']
    for a in F['globfn']:
        lines += [f'extern "C" void (*gfn2_{a:08x})();', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'extern "C" __declspec(naked) void globFn_{a:08x}()', '{',
                  f'\t__asm {{ mov eax, dword ptr [gfn2_{a:08x}] }}',
                  '\t__asm { test eax, eax }',
                  '\t__asm { je done }',
                  '\t__asm { jmp eax }',
                  '\t__asm { done: ret }', '}', '']
    return lines


def write(F):
    p = pathlib.Path('Client/Base/msvc/misc_thunks7.cpp')
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
