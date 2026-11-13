import sys, pathlib, re, subprocess
sys.path.insert(0, 'tools')
import verify_tu

L = ['// Individually reconstructed small functions: virtual and indirect calls,',
     '// pointer returns and argument passthroughs.', '']


def naked(a, body, externs=()):
    for name in externs:
        L.append(name)
    L.append(f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}')
    L.append(f'extern "C" __declspec(naked) void strag_{a:08x}()')
    L.append('{')
    for line in body:
        L.append('\t__asm { ' + line + ' }')
    L.append('}')
    L.append('')


naked(0x00a9d6c0, ['mov eax, dword ptr [ecx]', 'mov eax, dword ptr [eax + 4]', 'jmp eax'])
naked(0x00924ae0, ['mov eax, dword ptr [ecx]', 'mov eax, dword ptr [eax + 0x88]', 'jmp eax'])
naked(0x008ac860, ['mov eax, dword ptr [ecx]', 'call dword ptr [eax + 0x8c]',
                   'fld dword ptr [eax]', 'ret'])
naked(0x008ac870, ['mov eax, dword ptr [ecx]', 'call dword ptr [eax + 0x8c]',
                   'fld dword ptr [eax + 4]', 'ret'])
naked(0x008e3c90, ['push dword ptr [ecx + 0x4c]', 'call stragTarget_8e3c90',
                   'add esp, 4', 'dec eax', 'ret'], ['extern "C" int stragTarget_8e3c90();'])
for a, slot in ((0x00427a40, 0x0), (0x00427a60, 0x4), (0x00427a80, 0x8)):
    naked(a, ['push ebp', 'mov ebp, esp', 'mov eax, dword ptr [ebp + 8]',
              'mov eax, dword ptr [eax - 8]', 'mov ecx, dword ptr [eax]',
              'mov dword ptr [ebp + 8], eax', 'pop ebp',
              f'jmp dword ptr [ecx + 0x{slot:x}]'])
naked(0x007ca790, ['cmp dword ptr [ecx + 0x74], 0', 'lea eax, [ecx + 0xa4]', 'je done',
                   'mov eax, offset gstr_7ca790', 'done: ret'],
      ['extern "C" char gstr_7ca790[];'])
naked(0x006e8590, ['push dword ptr [esp + 4]', 'call stragTarget_6e8590', 'pop ecx', 'ret 4'],
      ['extern "C" void stragTarget_6e8590(int);'])
naked(0x006e86c0, ['push dword ptr [esp + 4]', 'call stragTarget_6e86c0', 'pop ecx', 'ret 4'],
      ['extern "C" void stragTarget_6e86c0(int);'])
naked(0x006e87e0, ['push dword ptr [esp + 4]', 'call dword ptr [pfn_6e87e0]', 'pop ecx', 'ret 4'],
      ['extern "C" void (*pfn_6e87e0)(int);'])
naked(0x006e87d0, ['push dword ptr [esp + 4]', 'call dword ptr [pfn_6e87d0]', 'add esp, 4', 'ret 4'],
      ['extern "C" void (*pfn_6e87d0)(int);'])
naked(0x00cd8f80, ['push ebp', 'mov ebp, esp', 'mov eax, dword ptr [ebp + 0x1c]',
                   'mov byte ptr [eax], 1', 'xor al, al', 'pop ebp', 'ret 0x24'])

p = pathlib.Path('Client/Base/msvc/stragglers.cpp')
p.write_text('\n'.join(L), encoding='utf-8')

r = subprocess.run([sys.executable, 'tools/verify_tu.py', str(p)], capture_output=True, text=True)
txt = r.stdout + r.stderr
print(txt.splitlines()[0] if txt else 'no output')
good = set()
bad = set()
for m in re.finditer(r'0x([0-9a-f]{8}) -> .*?Match: ([\d.]+)%', txt):
    (good if float(m.group(2)) >= 99.99 else bad).add(int(m.group(1), 16))
print('good', sorted(f'0x{x:08x}' for x in good))
print('bad', sorted(f'0x{x:08x}' for x in bad))
if bad:
    print(txt[-1500:])
