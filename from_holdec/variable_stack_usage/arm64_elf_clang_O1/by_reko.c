// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 0000000000400794: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 0000000000400418: Register word64 _init(Register out ptr64 x30Out)
// Called from:
//      __libc_csu_init
word64 _init(ptr64 & x30Out)
{
	call_weak_fn();
	x30Out = qwArg00;
	return x30;
}

// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_plt.h"

// 0000000000400450: void fn0000000000400450()
// Called from:
//      _start
void fn0000000000400450()
{
	g_ptr411000();
}

// 0000000000400480: void fn0000000000400480()
// Called from:
//      _start
void fn0000000000400480()
{
	g_ptr411018();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 0000000000400490: void _start()
void _start()
{
	fn0000000000400450();
	fn0000000000400480();
}

// 00000000004004D8: void call_weak_fn()
// Called from:
//      _init
void call_weak_fn()
{
	if (g_qw410FE0 == 0x00)
		return;
	word64 x17_12;
	g_ptr411010();
}

// 00000000004004F0: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (0x00411037 - 0x00411030 <= 0x0E)
		return;
	<anonymous> * x1_12 = g_ptr400528;
	if (x1_12 == null)
		return;
	x1_12();
}

// 0000000000400530: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 0x00411030 - 0x00411030;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_12 = g_ptr400568;
	if (x2_12 == null)
		return;
	word64 x2_16;
	x2_12();
}

// 0000000000400570: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b411030 == 0x00)
	{
		deregister_tm_clones();
		g_b411030 = 0x01;
	}
}

// 00000000004005A0: void frame_dummy(Register word64 x29, Register word64 x30)
void frame_dummy(word64 x29, word64 x30)
{
	if (g_qw410DF0 != 0x00)
	{
		<anonymous> * x1_7 = g_ptr4005D8;
		if (x1_7 != null)
		{
			x1_7();
			register_tm_clones();
			return;
		}
	}
	register_tm_clones();
}

// 00000000004005E0: Register ptr64 use(Register (ptr64 word32) x0)
// Called from:
//      with_array
//      with_alloca
ptr64 use(word32 * x0)
{
	g_dw411034 += *x0;
	return 0x00411000;
}

// 00000000004005F8: Register word64 fill(Register word64 x1)
// Called from:
//      with_array
//      with_alloca
word64 fill(word64 x1)
{
	word32 x1_32_32_10 = SLICE(x1, word32, 32);
	__sbfiz(x1, 2);
	word64 x1_11 = SEQ(x1_32_32_10, 0x78);
	word64 x1_13;
	g_ptr411008();
	return x1_13;
}

// 0000000000400604: void with_array(Sequence ui64 x9_32_32_w0, Register word32 x1_32_32)
// Called from:
//      main
void with_array(ui64 x9_32_32_w0, word32 x1_32_32)
{
	word32 w0 = (word32) x9_32_32_w0;
	fill(SEQ(x1_32_32, w0));
	use(fp - 0x1C);
	use(fp + ~0x27 - ((x9_32_32_w0 << 2) + 0x0F & 0x00));
	use(fp - 0x20);
}

// 0000000000400678: Register word64 with_alloca(Sequence word64 x8_32_32_w0, Register word32 x1_32_32, Register out ptr64 x9Out, Register out ptr64 x19Out)
// Called from:
//      main
word64 with_alloca(word64 x8_32_32_w0, word32 x1_32_32, ptr64 & x9Out, ptr64 & x19Out)
{
	word32 w0 = (word32) x8_32_32_w0;
	word32 * x19_27 = fp + ~0x27 - (__sbfiz(x8_32_32_w0, 2) + 0x0F & 0x00);
	word64 x1_35 = fill(SEQ(x1_32_32, w0));
	use(fp - 0x1C);
	use(x19_27);
	x9Out = use(fp - 0x20);
	x19Out = qwLoc10;
	return x1_35;
}

// 00000000004006E8: void main(Sequence word64 x8_32_32_w0, Register word32 x1_32_32)
void main(word64 x8_32_32_w0, word32 x1_32_32)
{
	word64 x19_27;
	word64 x9_31;
	with_array(SEQ(SLICE(x9_31, word32, 32), (word32) x19_27), SLICE(with_alloca(x8_32_32_w0, x1_32_32, out x9_31, out x19_27), word32, 32));
}

// 0000000000400718: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
void __libc_csu_init(word32 w0, word64 x1, word64 x2, word64 x24)
{
	word32 x24_32_32_104 = SLICE(x24, word32, 32);
	int64 x20_26 = 4263400 - 0x00410DE0;
	<anonymous> * x21_24[] = g_a410DE0;
	word64 x22_34 = x2;
	word64 x23_38 = x1;
	word64 x30_44;
	word64 x29_43 = _init(out x30_44);
	int64 x20_45 = x20_26 >> 3;
	if (x20_26 >> 3 != 0x00)
	{
		int64 x19_46 = 0x00;
		word64 x24_151 = SEQ(x24_32_32_104, w0);
		do
		{
			word64 x3_76;
			x21_24[x19_46]();
			int64 x31_81 = x20_45 - x19_46;
		} while (x31_81 != 0x00);
	}
}

// 0000000000400790: void __libc_csu_fini()
void __libc_csu_fini()
{
}

