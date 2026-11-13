import sys, pathlib, re, subprocess
sys.path.insert(0, 'tools')
import verify_tu
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

md = Cs(CS_ARCH_X86, CS_MODE_32)
sizes = verify_tu.load_function_sizes()
done = set()
for p in pathlib.Path('Client').rglob('*.cpp'):
    for a, k, n in verify_tu.parse_annotations_in_cpp(p):
        done.add(a)

cands = []
for a, sz in sorted(sizes.items()):
    if a in done or sz > 24:
        continue
    b = verify_tu.get_original_function_bytes(a, sz)
    if len(b) != sz:
        continue
    ins = list(md.disasm(b, a))
    if [i.mnemonic for i in ins] != ['push', 'mov', 'mov', 'mov', 'pop', 'ret']:
        continue
    cands.append((a, [i.op_str for i in ins]))

lines = ['// Argument dereference getter, table lookup and setters that store their',
         '// argument into a member or a global.', '']

for a, o in cands:
    o2, o3 = o[2], o[3]
    if o2 == 'eax, dword ptr [ebp + 8]' and o3 == 'eax, dword ptr [eax]':
        lines += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'int getDeref_{a:08x}(int* p)', '{',
                  '\treturn *p;', '}', '']
        continue
    if o3.startswith('al, byte ptr [eax + eax*2 + '):
        lines += [f'extern "C" char table_{a:08x}[];', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                  f'char getTable_{a:08x}(int i)', '{', f'\treturn table_{a:08x}[i * 3];', '}', '']
        continue
    if o3 == 'dword ptr [eax], 0':
        lines += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void clearPtr_{a:08x}(int* p)', '{',
                  '\t*p = 0;', '}', '']
        continue
    om = re.match(r'dword ptr \[ecx(?: \+ (0x[0-9a-f]+))?\], (eax|al|ax)$', o3)
    if om and o2 in ('eax, dword ptr [ebp + 8]', 'al, byte ptr [ebp + 8]', 'ax, word ptr [ebp + 8]'):
        off = int(om.group(1), 16) if om.group(1) else 0
        typ = 'int' if o2.startswith('eax,') else ('char' if o2.startswith('al,') else 'short')
        pad = '' if off == 0 else f'char pad[0x{off:x}]; '
        n = f'CArgSet_{a:08x}'
        lines += [f'struct {n} {{ {pad}{typ} m; void set({typ} v); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void {n}::set({typ} v)', '{',
                  '\tm = v;', '}', '']
        continue
    og = re.match(r'(dword|byte) ptr \[(0x[0-9a-f]+)\], (eax|al)$', o3)
    if og and o2 in ('eax, dword ptr [ebp + 8]', 'al, byte ptr [ebp + 8]'):
        typ = 'int' if og.group(1) == 'dword' else 'char'
        n = f'CGlobSet_{a:08x}'
        lines += [f'extern "C" {typ} gv_{a:08x};', f'struct {n} {{ void set({typ} v); }};',
                  f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void {n}::set({typ} v)', '{',
                  f'\tgv_{a:08x} = v;', '}', '']

p = pathlib.Path('Client/Base/msvc/arg_setters.cpp')
p.write_text('\n'.join(lines), encoding='utf-8')
print('functions', sum(1 for l in lines if l.startswith('// FUNCTION:')))
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

# keep only verified annotations
keep = []
for a, o in cands:
    if a in good:
        keep.append(a)
# rebuild with only good addresses
lines2 = ['// Argument dereference getter, table lookup and setters that store their',
          '// argument into a member or a global.', '']
goodset = set(keep)
for a, o in cands:
    if a not in goodset:
        continue
    o2, o3 = o[2], o[3]
    if o2 == 'eax, dword ptr [ebp + 8]' and o3 == 'eax, dword ptr [eax]':
        lines2 += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'int getDeref_{a:08x}(int* p)', '{',
                   '\treturn *p;', '}', '']
        continue
    if o3.startswith('al, byte ptr [eax + eax*2 + '):
        lines2 += [f'extern "C" char table_{a:08x}[];', f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
                   f'char getTable_{a:08x}(int i)', '{', f'\treturn table_{a:08x}[i * 3];', '}', '']
        continue
    if o3 == 'dword ptr [eax], 0':
        lines2 += [f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void clearPtr_{a:08x}(int* p)', '{',
                   '\t*p = 0;', '}', '']
        continue
    om = re.match(r'dword ptr \[ecx(?: \+ (0x[0-9a-f]+))?\], (eax|al|ax)$', o3)
    if om and o2 in ('eax, dword ptr [ebp + 8]', 'al, byte ptr [ebp + 8]', 'ax, word ptr [ebp + 8]'):
        off = int(om.group(1), 16) if om.group(1) else 0
        typ = 'int' if o2.startswith('eax,') else ('char' if o2.startswith('al,') else 'short')
        pad = '' if off == 0 else f'char pad[0x{off:x}]; '
        n = f'CArgSet_{a:08x}'
        lines2 += [f'struct {n} {{ {pad}{typ} m; void set({typ} v); }};',
                   f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void {n}::set({typ} v)', '{',
                   '\tm = v;', '}', '']
        continue
    og = re.match(r'(dword|byte) ptr \[(0x[0-9a-f]+)\], (eax|al)$', o3)
    if og and o2 in ('eax, dword ptr [ebp + 8]', 'al, byte ptr [ebp + 8]'):
        typ = 'int' if og.group(1) == 'dword' else 'char'
        n = f'CGlobSet_{a:08x}'
        lines2 += [f'extern "C" {typ} gv_{a:08x};', f'struct {n} {{ void set({typ} v); }};',
                   f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void {n}::set({typ} v)', '{',
                   f'\tgv_{a:08x} = v;', '}', '']
p.write_text('\n'.join(lines2), encoding='utf-8')
r2 = subprocess.run([sys.executable, 'tools/verify_tu.py', str(p)], capture_output=True, text=True)
print('matches', (r2.stdout + r2.stderr).count('Match: 100.00%'))
