import sys, pathlib, re, subprocess
sys.path.insert(0, 'tools')
import verify_tu

sizes = verify_tu.load_function_sizes()
done = set()
for f in pathlib.Path('Client').rglob('*.cpp'):
    if f.name == 'cleanup_helpers.cpp':
        continue
    for a, k, n in verify_tu.parse_annotations_in_cpp(f):
        done.add(a)

H = bytes.fromhex
F = {k: [] for k in ('free', 'member', 'witharg')}

for a, sz in sorted(sizes.items()):
    if a in done:
        continue
    b = verify_tu.get_original_function_bytes(a, sz)
    if len(b) != sz:
        continue
    if sz == 30 and b.startswith(H('558bec568b750885f674')) and b[11:13] == H('8bce') and b[13] == 0xe8 and b[18] == 0x56 and b[19] == 0xe8 and b[24:30] == H('83c4045e5dc3'):
        F['free'].append(a)
    elif sz == 26 and b.startswith(H('568b71')) and b[4:6] == H('85f6') and b[6:8] == H('7410') and b[8:10] == H('8bce') and b[10] == 0xe8 and b[15] == 0x56 and b[16] == 0xe8 and b[21:26] == H('83c4045ec3'):
        F['member'].append((a, b[3]))
    elif sz == 28 and b.startswith(H('568b71')) and b[4:6] == H('85f6') and b[6:8] == H('7410') and b[8:10] == H('ff76') and b[11] == 0x56 and b[12] == 0xe8 and b[17] == 0x56 and b[18] == 0xe8 and b[23:28] == H('83c4045ec3'):
        F['witharg'].append((a, b[3], b[10]))

for k, v in F.items():
    print(k, len(v))


def emit(F):
    L = ['// Intrusive cleanup helpers: null-check a member/argument pointer, run its',
         '// destroy routine, then release it.', '']
    for a in F['free']:
        L += [f'extern "C" void cleanup_{a:08x}(void*);',
              f'struct CInnerF_{a:08x} {{ void destroy(); }};',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}',
              f'void releaseFree_{a:08x}(CInnerF_{a:08x}* p)', '{',
              f'\tCInnerF_{a:08x}* q = p;', '\tif (!q)', '\t\treturn;',
              '\tq->destroy();', f'\tcleanup_{a:08x}(q);', '}', '']
    for a, off in F['member']:
        n = f'COuterM_{a:08x}'
        L += [f'extern "C" void cleanup_{a:08x}(void*);',
              f'struct CInnerM_{a:08x} {{ void destroy(); }};',
              f'struct {n} {{ char pad[0x{off:x}]; CInnerM_{a:08x}* p; void release(); }};',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void {n}::release()', '{',
              f'\tCInnerM_{a:08x}* q = p;', '\tif (!q)', '\t\treturn;',
              '\tq->destroy();', f'\tcleanup_{a:08x}(q);', '}', '']
    for a, off, fld in F['witharg']:
        n = f'COuterA_{a:08x}'
        L += [f'extern "C" void cleanup_{a:08x}(void*);',
              f'extern "C" void notify_{a:08x}(int, void*);',
              f'struct CInnerA_{a:08x} {{ char pad[0x{fld:x}]; int v; }};',
              f'struct {n} {{ char pad[0x{off:x}]; CInnerA_{a:08x}* p; void release(); }};',
              f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void {n}::release()', '{',
              f'\tCInnerA_{a:08x}* q = p;', '\tif (!q)', '\t\treturn;',
              f'\tnotify_{a:08x}(q->v, q);', f'\tcleanup_{a:08x}(q);', '}', '']
    return L


p = pathlib.Path('Client/Base/msvc/cleanup_helpers.cpp')
p.write_text('\n'.join(emit(F)), encoding='utf-8')

r = subprocess.run([sys.executable, 'tools/verify_tu.py', str(p)], capture_output=True, text=True)
txt = r.stdout + r.stderr
print(txt.splitlines()[0] if txt else 'no output')
good, bad = set(), set()
for m in re.finditer(r'0x([0-9a-f]{8}) -> .*?Match: ([\d.]+)%', txt):
    (good if float(m.group(2)) >= 99.99 else bad).add(int(m.group(1), 16))
print('good', len(good), 'bad', len(bad))
if bad:
    print('bad', [f'0x{x:08x}' for x in sorted(bad)])
if not good:
    for line in txt.splitlines():
        if 'error' in line.lower() or 'C1' in line:
            print(line)
    raise SystemExit(1)

F2 = {}
for k, v in F.items():
    F2[k] = [x for x in v if (x[0] if isinstance(x, tuple) else x) in good]
p.write_text('\n'.join(emit(F2)), encoding='utf-8')
r2 = subprocess.run([sys.executable, 'tools/verify_tu.py', str(p)], capture_output=True, text=True)
print('final', (r2.stdout + r2.stderr).count('Match: 100.00%'))
