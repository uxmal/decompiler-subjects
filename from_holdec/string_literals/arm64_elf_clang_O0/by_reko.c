// subject_bss.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

byte g_b414058 = 0x00;
// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000401CFC: void _fini()
void _fini()
{
}

// subject_got.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

word64 g_qw413FE0 = 0x00;
// subject_got_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_ptr414000 = &g_t400580;
<anonymous> * g_ptr414008 = &g_t400580;
<anonymous> * g_ptr414010 = &g_t400580;
<anonymous> * g_ptr414018 = &g_t400580;
<anonymous> * g_ptr414020 = &g_t400580;
<anonymous> * g_ptr414028 = &g_t400580;
<anonymous> * g_ptr414030 = &g_t400580;
<anonymous> * g_ptr414038 = &g_t400580;
<anonymous> * g_ptr414040 = &g_t400580;
// subject_init_array.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_a413DE0[] = 
	{
	};
// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000400560: Register word64 _init(Register out ptr64 x30Out)
// Called from:
//      __libc_csu_init
word64 _init(ptr64 & x30Out)
{
	call_weak_fn();
	x30Out = qwArg00;
	return x30;
}

// subject_jcr.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

word64 g_qw413DF0 = 0x00;
// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> g_t400580 = <code>;
// 00000000004005A0: void fn00000000004005A0()
// Called from:
//      main
void fn00000000004005A0()
{
	g_ptr414000();
}

// 00000000004005B0: void fn00000000004005B0()
// Called from:
//      main
void fn00000000004005B0()
{
	g_ptr414008();
}

// 00000000004005C0: void fn00000000004005C0()
// Called from:
//      _start
void fn00000000004005C0()
{
	g_ptr414010();
}

// 00000000004005E0: void fn00000000004005E0()
// Called from:
//      _start
void fn00000000004005E0()
{
	g_ptr414020();
}

// 00000000004005F0: void fn00000000004005F0()
// Called from:
//      main
void fn00000000004005F0()
{
	g_ptr414028();
}

// 0000000000400600: void fn0000000000400600()
// Called from:
//      main
void fn0000000000400600()
{
	g_ptr414030();
}

// 0000000000400610: void fn0000000000400610()
// Called from:
//      main
void fn0000000000400610()
{
	g_ptr414038();
}

// 0000000000400620: void fn0000000000400620()
// Called from:
//      main
void fn0000000000400620()
{
	g_ptr414040();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000400630: void _start()
void _start()
{
	fn00000000004005C0();
	fn00000000004005E0();
}

// 0000000000400678: void call_weak_fn()
// Called from:
//      _init
void call_weak_fn()
{
	if (g_qw413FE0 == 0x00)
		return;
	word64 x17_12;
	g_ptr414018();
}

// 0000000000400690: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (0x0041405F - 0x00414058 <= 0x0E)
		return;
	<anonymous> * x1_12 = g_ptr4006C8;
	if (x1_12 == null)
		return;
	x1_12();
}

<anonymous> * g_ptr4006C8 = null;
// 00000000004006D0: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 0x00414058 - 0x00414058;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_12 = g_ptr400708;
	if (x2_12 == null)
		return;
	word64 x2_16;
	x2_12();
}

<anonymous> * g_ptr400708 = null;
// 0000000000400710: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b414058 == 0x00)
	{
		deregister_tm_clones();
		g_b414058 = 0x01;
	}
}

// 0000000000400740: void frame_dummy(Register word64 x29, Register word64 x30)
void frame_dummy(word64 x29, word64 x30)
{
	if (g_qw413DF0 != 0x00)
	{
		<anonymous> * x1_7 = g_ptr400778;
		if (x1_7 != null)
		{
			x1_7();
			register_tm_clones();
			return;
		}
	}
	register_tm_clones();
}

<anonymous> * g_ptr400778 = null;
// 0000000000400780: void main()
void main()
{
	fn0000000000400600();
	fn0000000000400620();
	fn0000000000400600();
	fn0000000000400620();
	fn00000000004005B0();
	fn0000000000400610();
	fn0000000000400610();
	fn00000000004005A0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
	fn00000000004005F0();
}

// 0000000000401C80: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
void __libc_csu_init(word32 w0, word64 x1, word64 x2, word64 x24)
{
	word32 x24_32_32_104 = SLICE(x24, word32, 32);
	int64 x20_26 = 4275688 - 0x00413DE0;
	<anonymous> * x21_24[] = g_a413DE0;
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

// 0000000000401CF8: void __libc_csu_fini()
void __libc_csu_fini()
{
}

