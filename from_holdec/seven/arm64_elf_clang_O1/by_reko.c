// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 0000000000400764: void _fini()
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

// 0000000000400470: void fn0000000000400470()
// Called from:
//      _start
void fn0000000000400470()
{
	g_ptr411010();
}

// 0000000000400480: void fn0000000000400480()
// Called from:
//      main
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
	fn0000000000400470();
}

// 00000000004004D8: void call_weak_fn()
// Called from:
//      _init
void call_weak_fn()
{
	if (g_qw410FE0 == 0x00)
		return;
	word64 x17_12;
	g_ptr411008();
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

// 00000000004005E0: Register uint32 test_1(Sequence ui64 x8_32_32_w0, Register ui32 x9_32_32, Register out ptr64 x8Out, Register out Eq_89 x9Out)
// Called from:
//      main
uint32 test_1(ui64 x8_32_32_w0, ui32 x9_32_32, ptr64 & x8Out, union Eq_89 & x9Out)
{
	uint32 w0 = (word32) x8_32_32_w0;
	uint64 x8_10 = x8_32_32_w0 * SEQ(x9_32_32, 0x4925);
	word32 w8_12 = (word32) (x8_10 >> 32);
	uint32 w9_13 = w0 - w8_12;
	uint32 w8_14 = w8_12 + (w9_13 >> 1);
	x8Out = SEQ(SLICE(x8_10 >> 32, word32, 32), w8_14);
	x9Out = SEQ(x9_32_32, w9_13);
	return w8_14 >> 2;
}

// 0000000000400604: Register uint32 test_2(Sequence ui64 x8_32_32_w0, Register ui32 x9_32_32, Register out ptr64 x8Out, Register out Eq_115 x9Out)
// Called from:
//      main
uint32 test_2(ui64 x8_32_32_w0, ui32 x9_32_32, ptr64 & x8Out, union Eq_115 & x9Out)
{
	uint32 w0 = (word32) x8_32_32_w0;
	uint64 x8_10 = x8_32_32_w0 * SEQ(x9_32_32, 0x4925);
	word32 w8_12 = (word32) (x8_10 >> 32);
	uint32 w9_13 = w0 - w8_12;
	uint32 w8_14 = w8_12 + (w9_13 >> 1);
	x8Out = SEQ(SLICE(x8_10 >> 32, word32, 32), w8_14);
	x9Out = SEQ(x9_32_32, w9_13);
	return w8_14 >> 2;
}

// 0000000000400628: Register uint64 test_3(Sequence ui64 x8_32_32_w0, Register word32 x9_32_32, Register out Eq_140 x8Out, Register out Eq_141 x9Out)
// Called from:
//      main
uint64 test_3(ui64 x8_32_32_w0, word32 x9_32_32, union Eq_140 & x8Out, union Eq_141 & x9Out)
{
	Eq_141 x9_9 = SEQ(x9_32_32, 0x4925);
	Eq_140 x8_10 = x8_32_32_w0 * x9_9;
	x8Out = x8_10;
	x9Out = x9_9;
	return x8_10 >> 32;
}

// 0000000000400640: void main(Register word32 x8_32_32, Register ui32 x9_32_32)
void main(word32 x8_32_32, ui32 x9_32_32)
{
	up32 w24_30 = 0x00;
	ui64 x8_191 = SEQ(x8_32_32, 0x00);
	do
	{
		up32 w8_33 = (word32) x8_191;
		word64 x8_40;
		word64 x9_41;
		word32 w0_39 = test_1(x8_191, x9_32_32, out x8_40, out x9_41);
		word64 x8_48;
		word64 x9_49;
		word32 w0_47 = test_2(SEQ(SLICE(x8_40, word32, 32), w8_33), SLICE(x9_41, word32, 32), out x8_48, out x9_49);
		word64 x8_56;
		word64 x9_57;
		word32 w0_58 = (word32) test_3(SEQ(SLICE(x8_48, word32, 32), w8_33), SLICE(x9_49, word32, 32), out x8_56, out x9_57);
		word32 x8_32_32_116 = SLICE(x8_56, word32, 32);
		x9_32_32 = SLICE(x9_57, word32, 32);
		if (w0_47 - w0_39 != 0x00 || w0_58 != w0_39)
			fn0000000000400480();
		w24_30 = w8_33;
		x8_191 = SEQ(x8_32_32_116, w8_33 + 0x4240);
		w24_194 = w24_30;
	} while (w8_33 >= w24_194);
}

// 00000000004006E8: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
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

// 0000000000400760: void __libc_csu_fini()
void __libc_csu_fini()
{
}

