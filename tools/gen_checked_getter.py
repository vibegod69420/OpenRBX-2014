import sys, pathlib, re, subprocess
sys.path.insert(0, 'tools')
import verify_tu

sizes = verify_tu.load_function_sizes()
done = set()
for f in pathlib.Path('Client').rglob('*.cpp'):
    if f.name == 'checked_getters.cpp':
        continue
    for a, k, n in verify_tu.parse_annotations_in_cpp(f):
        done.add(a)

cands = []
for a, sz in sorted(sizes.items()):
    if a in done or sz != 79:
        continue
    b = verify_tu.get_original_function_bytes(a, sz)
    if len(b) != 79:
        continue
    if b[0:3] != b'\x56\x8b\xf1' or b[3:5] != b'\x83\x7e' or b[6] != 0 or b[7] != 0x75:
        continue
    if b[9] != 0x6a or b[11] != 0x68 or b[16] != 0x68 or b[21:23] != b'\xff\x15':
        continue
    if b[27:30] != b'\x83\xc4\x0c' or b[30:32] != b'\x8b\x46':
        continue
    if b[33:35] != b'\x83\x78' or b[36] != 0 or b[37] != 0x74:
        continue
    if b[39:41] != b'\x85\xc0' or b[41] != 0x75:
        continue
    if b[43] != 0x6a or b[45] != 0x68 or b[50] != 0x68 or b[55:57] != b'\xff\x15':
        continue
    if b[61:64] != b'\x83\xc4\x0c' or b[64:66] != b'\x8b\x46':
        continue
    if b[67] != 0x5e or b[68:70] != b'\x8b\x40' or b[71] != 0xc3:
        continue
    this_off = b[5]
    field = b[35]
    if b[70] != field:
        continue
    cands.append((a, this_off, field, b[10], int.from_bytes(b[12:16], 'little'),
                  int.from_bytes(b[17:21], 'little'), int.from_bytes(b[23:27], 'little'),
                  int.from_bytes(b[72:76], 'little')))

print('candidates', len(cands))

L = ['// Asserted reference getters: assert the holder pointer, return the referenced',
     '// object, or a shared empty object when the reference is null.',
     'extern "C" __declspec(dllimport) void rbxAssertFail(const char*, const char*, int);', '']
for a, this_off, field, line, filep, expr, imp, empty in cands:
    n = f'CRef_{a:08x}'
    ni = f'CRefNode_{a:08x}'
    L += [f'extern "C" char gEmpty_{a:08x}[];',
          f'struct {ni} {{ char pad[0x{field:x}]; void* f; }};',
          f'struct {n} {{ char pad[0x{this_off:x}]; {ni}* m; void* get(); }};',
          f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}', f'void* {n}::get()', '{',
          '\tif (!m)', f'\t\trbxAssertFail("m", __FILE__, 0x{line:x});',
          '\tif (m->f) {', '\t\tif (!m)', f'\t\t\trbxAssertFail("m", __FILE__, 0x{line:x});',
          '\t\treturn m->f;', '\t}', f'\treturn (void*)gEmpty_{a:08x};', '}', '']

p = pathlib.Path('Client/Base/msvc/checked_getters.cpp')
p.write_text('\n'.join(L), encoding='utf-8')

r = subprocess.run([sys.executable, 'tools/verify_tu.py', str(p)], capture_output=True, text=True)
txt = r.stdout + r.stderr
print(txt.splitlines()[0] if txt else 'no output')
good, bad = set(), set()
for m in re.finditer(r'0x([0-9a-f]{8}) -> .*?Match: ([\d.]+)%', txt):
    (good if float(m.group(2)) >= 99.99 else bad).add(int(m.group(1), 16))
print('good', len(good), 'bad', len(bad))
if bad:
    print('bad', [f'0x{x:08x}' for x in sorted(bad)][:10])
    print(txt[-1200:])
if not good:
    for line in txt.splitlines():
        if 'error' in line.lower():
            print(line)
    raise SystemExit(1)
