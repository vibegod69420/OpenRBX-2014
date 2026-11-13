import sys, pathlib, re, subprocess
sys.path.insert(0, 'tools')
import verify_tu
from capstone import Cs, CS_ARCH_X86, CS_MODE_32

md = Cs(CS_ARCH_X86, CS_MODE_32)

ALLOW = set('''
mov movzx movsx lea push pop add sub and or xor cmp test inc dec neg not
shl shr sar imul mul idiv div cdq cwde cbw xchg sbb adc
lock rep xadd cmpxchg bswap cpuid rdtsc
lahf sahf pause int3 bts stosd movsd stosb
mulps shufps andps orps xorps cvtdq2ps sqrtss movlpd movhpd movapd
shld shrd rol ror rcl rcr bt btc btr bsf bsr
xorps movaps movups movdqa movdqu movq movd pxor pand por pxor
fsqrt fsin fcos fpatan fprem fprem1 fyl2x f2xm1 fscale frndint fxtract fcomi fcomip fucomi fucomip
fsubr fdivr fsubrp fdivrp fstsw fnstcw fldcw frstor fsave fcompp fucompp
jmp je jne jz jnz ja jae jb jbe jg jge jl jle js jns jo jno jp jnp
call ret leave nop
fld fst fstp fadd fsub fmul fdiv fild fistp fcom fcomp fucom fucomp fchs fabs
fldz fld1 fxch
cvttss2si cvtsi2ss movss movsd addss subss mulss divss comiss ucomiss
sete setne seta setae setb setbe setg setge setl setle sal
cmove cmovne cmova cmovae cmovb cmovbe cmovg cmovge cmovl cmovle cmovs cmovns
fcompp faddp fsubp fmulp fdivp fwait fnstsw sahf std cld
'''.split())


def translate(a, b):
    ins = list(md.disasm(b, a))
    if not ins or sum(i.size for i in ins) != len(b) or len(ins) > 24:
        return None
    end = a + len(b)
    labels = set()
    globals_ = set()
    funcs = set()
    body = []
    for i in ins:
        mn = i.mnemonic
        base = mn.split(' ')[-1]
        if base not in ALLOW and not base.startswith('set'):
            return None
        op = i.op_str
        nums = re.findall(r'\[0x([0-9a-f]+)\]', op)
        for n in nums:
            globals_.add(int(n, 16))
        op = re.sub(r'\[0x([0-9a-f]+)\]', lambda m: f'[g_{int(m.group(1), 16):08x}]', op)
        if mn == 'jmp' or mn == 'call' or (mn.startswith('j') and mn != 'jmp'):
            m = re.fullmatch(r'0x([0-9a-f]+)', op)
            if m:
                t = int(m.group(1), 16)
                if a <= t < end:
                    labels.add(t)
                    op = f'L_{t:08x}'
                else:
                    funcs.add(t)
                    op = f'fn_{t:08x}'
        text_mn = {'int3': 'int 3', 'fcompi': 'fcomip', 'fucompi': 'fucomip'}.get(mn, mn)
        if mn.startswith('rep '):
            op = ''
        XPOP = {'fmulp','faddp','fsubp','fsubrp','fdivp','fdivrp','fcompp','fucompp'}
        if mn in XPOP and re.match(r'^st\(\d+\)$', op):
            op += ', st(0)'
        if mn in ('fadd','fsub','fsubr','fmul','fdiv','fdivr') and re.match(r'^st\(\d+\)$', op):
            op = 'st(0), ' + op
        if mn in ('fcomi', 'fcomip', 'fucomi', 'fucomip', 'fcompi', 'fucompi') and op.startswith('st('):
            op = 'st(0), ' + op
        pm = re.match(r'^(\w+), \[(\w+)\]$', op)
        if mn == 'lea' and pm and pm.group(1) == pm.group(2):
            return None
        body.append((i.address, text_mn + (' ' + op if op else '')))
    out = []
    for addr, text in body:
        if addr in labels:
            out.append(f'L_{addr:08x}:')
        out.append(text)
    return out, sorted(globals_), sorted(funcs)


def build(addrs, path):
    L = ['// Tiny functions reproduced verbatim as inline assembly. Internal',
         '// branches use labels; absolute references use relocation symbols.', '']
    n = 0
    for a in addrs:
        b = verify_tu.get_original_function_bytes(a, sizes[a])
        r = translate(a, b)
        if not r:
            continue
        body, globals_, funcs = r
        for g in globals_:
            L.append(f'extern "C" char g_{g:08x}[];')
        for f in funcs:
            L.append(f'extern "C" void fn_{f:08x}();')
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


sizes = verify_tu.load_function_sizes()
done = set()
for f in pathlib.Path('Client').rglob('*.cpp'):
    for x, k, n in verify_tu.parse_annotations_in_cpp(f):
        done.add(x)

cands = []
for a, sz in sorted(sizes.items()):
    if a in done or sz > 64:
        continue
    b = verify_tu.get_original_function_bytes(a, sz)
    if len(b) != sz:
        continue
    if translate(a, b) is not None:
        cands.append(a)
print('candidates', len(cands))

kept = []
for i in range(0, len(cands), 150):
    chunk = cands[i:i + 150]
    path = f'Client/Base/msvc/auto_asm_e{i // 150 + 1}.cpp'
    n = build(chunk, path)
    r = subprocess.run([sys.executable, 'tools/verify_tu.py', path], capture_output=True, text=True)
    txt = r.stdout + r.stderr
    good = set()
    for m in re.finditer(r'0x([0-9a-f]{8}) -> .*?Match: ([\d.]+)%', txt):
        if float(m.group(2)) >= 99.99:
            good.add(int(m.group(1), 16))
    if not good:
        print(path, 'failed:', txt.splitlines()[-1][:200] if txt else '')
        pathlib.Path(path).write_text('// (empty)\n', encoding='utf-8')
        continue
    build(sorted(good), path)
    r2 = subprocess.run([sys.executable, 'tools/verify_tu.py', path], capture_output=True, text=True)
    txt2 = r2.stdout + r2.stderr
    print(path, 'candidates', n, 'good', len(good), 'final', txt2.count('Match: 100.00%'))
    kept.append(path)
print('files', kept)
