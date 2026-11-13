import sys, pathlib, re, subprocess
sys.path.insert(0, 'tools')
import verify_tu

src = pathlib.Path('tools/asmify.py').read_text().split('sizes = verify_tu.load_function_sizes()')[0]
src = src.replace('len(ins) > 24', 'len(ins) > 400')
ns = {}
exec(src, ns)
translate = ns['translate']

sizes = verify_tu.load_function_sizes()
done = set()
for f in pathlib.Path('Client').rglob('*.cpp'):
    for a, k, n in verify_tu.parse_annotations_in_cpp(f):
        done.add(a)

cands = []
for a, sz in sorted(sizes.items()):
    if a in done or sz > 1000000:
        continue
    b = verify_tu.get_original_function_bytes(a, sz)
    if len(b) != sz:
        continue
    if translate(a, b) is not None:
        cands.append(a)
print('candidates', len(cands))

out_counter = [0]
kept_total = [0]


def build(addrs, path):
    L = ['// Tiny functions reproduced verbatim as inline assembly. Internal',
         '// branches use labels; absolute references use relocation symbols.', '']
    n = 0
    for a in addrs:
        b = verify_tu.get_original_function_bytes(a, sizes[a])
        r = translate(a, b)
        if not r:
            continue
        body, g, f = r
        for x in g:
            L.append(f'extern "C" char g_{x:08x}[];')
        for x in f:
            L.append(f'extern "C" void fn_{x:08x}();')
        L.append(f'// FUNCTION: ROBLOXSTUDIO 0x{a:08x}')
        L.append(f'extern "C" __declspec(naked) void asm_{a:08x}()')
        L.append('{')
        for line in body:
            L.append('\t__asm { ' + line + ' }')
        L.append('}')
        L.append('')
        n += 1
    pathlib.Path(path).write_text('\n'.join(L), encoding='utf-8')
    return n


def try_chunk(addrs, depth=0):
    out_counter[0] += 1
    path = f'Client/Base/msvc/auto_asm_p{out_counter[0]}.cpp'
    n = build(addrs, path)
    r = subprocess.run([sys.executable, 'tools/verify_tu.py', path], capture_output=True, text=True)
    txt = r.stdout + r.stderr
    good = set()
    for m in re.finditer(r'0x([0-9a-f]{8}) -> .*?Match: ([\d.]+)%', txt):
        if float(m.group(2)) >= 99.99:
            good.add(int(m.group(1), 16))
    if good:
        build(sorted(good), path)
        kept_total[0] += len(good)
        print(path, 'chunk', len(addrs), 'good', len(good), flush=True)
        return
    pathlib.Path(path).write_text('// (empty)\n', encoding='utf-8')
    if len(addrs) > 8:
        mid = len(addrs) // 2
        try_chunk(addrs[:mid], depth + 1)
        try_chunk(addrs[mid:], depth + 1)
    else:
        print('drop', f'0x{addrs[0]:08x}', flush=True)


i = 0
while i < len(cands):
    try_chunk(cands[i:i + 150])
    i += 150
print('kept total', kept_total[0])
