// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 000000000040069C: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 00000000004003D8: Register word64 _init(Register out ptr64 x30Out)
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

// 0000000000400410: void fn0000000000400410()
// Called from:
//      _start
void fn0000000000400410()
{
	g_ptr411000();
}

// 0000000000400430: void fn0000000000400430()
// Called from:
//      _start
void fn0000000000400430()
{
	g_ptr411010();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 0000000000400440: void _start()
void _start()
{
	fn0000000000400410();
	fn0000000000400430();
}

// 0000000000400488: void call_weak_fn()
// Called from:
//      _init
void call_weak_fn()
{
	if (g_qw410FE0 == 0x00)
		return;
	word64 x17_12;
	g_ptr411008();
}

// 00000000004004A0: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (0x0041102F - 0x00411028 <= 0x0E)
		return;
	<anonymous> * x1_12 = g_ptr4004D8;
	if (x1_12 == null)
		return;
	x1_12();
}

// 00000000004004E0: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 0x00411028 - 0x00411028;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_12 = g_ptr400518;
	if (x2_12 == null)
		return;
	word64 x2_16;
	x2_12();
}

// 0000000000400520: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b411028 == 0x00)
	{
		deregister_tm_clones();
		g_b411028 = 0x01;
	}
}

// 0000000000400550: void frame_dummy(Register word64 x29, Register word64 x30)
void frame_dummy(word64 x29, word64 x30)
{
	if (g_qw410DF0 != 0x00)
	{
		<anonymous> * x1_7 = g_ptr400588;
		if (x1_7 != null)
		{
			x1_7();
			register_tm_clones();
			return;
		}
	}
	register_tm_clones();
}

// 0000000000400590: void main()
void main()
{
}

// 0000000000400598: void enter()
void enter()
{
}

// 000000000040059C: void leave()
void leave()
{
}

// 00000000004005A0: void loop1()
void loop1()
{
	g_dw411030 = 0x00;
	ui64 x9_28 = 0x00;
	do
	{
		g_a411034[x9_31 * 4] = (word32) x9_31;
		x9_28 = x9_31 + 0x01;
		x9_31 = x9_28;
	} while (x9_31 != 99);
	g_dw411030 = 100;
}

// 00000000004005D0: void loop2()
void loop2()
{
	int32 w8_30 = (word32) (int64) g_dw411018;
	int32 w11_11 = g_dw41102C;
	do
	{
		w11_11 = w11_42 < 100 ? w11_42 : 0x00;
		w11_42 = w11_11;
	} while (w11_42 < 100 || w8_30 < 100);
	g_dw41102C = 0x00;
}

// 0000000000400620: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
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

// 0000000000400698: void __libc_csu_fini()
void __libc_csu_fini()
{
}

