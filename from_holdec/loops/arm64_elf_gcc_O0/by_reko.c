// subject_bss.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

byte g_b11038 = 0x00;
// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 00000000000008FC: void _fini()
void _fini()
{
}

// subject_got.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_ptr10FB0 = null;
word64 g_qw10FB8 = 0x00;
word64 g_qw10FC0 = 0x00;
<anonymous> * g_ptr10FD8 = null;
<anonymous> * g_ptr10FE0 = null;
// subject_got_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_ptr11000 = &g_t0680;
<anonymous> * g_ptr11008 = &g_t0680;
<anonymous> * g_ptr11010 = &g_t0680;
<anonymous> * g_ptr11018 = &g_t0680;
<anonymous> * g_ptr11020 = &g_t0680;
// subject_init_array.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_a10DA8[] = 
	{
	};
// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000000660: Register word64 _init(Register out ptr64 x30Out)
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

word64 g_qw10DB8 = 0x00;
// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> g_t0680 = <code>;
// 00000000000006A0: void fn00000000000006A0()
// Called from:
//      __do_global_dtors_aux
void fn00000000000006A0()
{
	g_ptr11000();
}

// 00000000000006B0: void fn00000000000006B0()
// Called from:
//      _start
void fn00000000000006B0()
{
	g_ptr11008();
}

// 00000000000006D0: void fn00000000000006D0()
// Called from:
//      _start
void fn00000000000006D0()
{
	g_ptr11018();
}

// 00000000000006E0: void fn00000000000006E0()
// Called from:
//      forever
void fn00000000000006E0()
{
	g_ptr11020();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 00000000000006F0: void _start()
void _start()
{
	fn00000000000006B0();
	fn00000000000006D0();
	call_weak_fn();
}

// 0000000000000728: void call_weak_fn()
// Called from:
//      _init
//      _start
void call_weak_fn()
{
	if (g_qw10FC0 == 0x00)
		return;
	word64 x17_12;
	g_ptr11010();
}

// 0000000000000740: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (69695 - 69688 <= 0x0E)
		return;
	<anonymous> * x1_13 = g_ptr10FB0;
	if (x1_13 == null)
		return;
	x1_13();
}

// 0000000000000778: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 69688 - 69688;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_13 = g_ptr10FE0;
	if (x2_13 == null)
		return;
	word64 x2_17;
	x2_13();
}

// 00000000000007B8: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b11038 == 0x00)
	{
		if (g_qw10FB8 != 0x00)
			fn00000000000006A0();
		deregister_tm_clones();
		g_b11038 = 0x01;
	}
}

// 0000000000000800: void frame_dummy(Register word64 x29, Register word64 x30)
void frame_dummy(word64 x29, word64 x30)
{
	if (g_qw10DB8 != 0x00)
	{
		<anonymous> * x1_8 = g_ptr10FD8;
		if (x1_8 != null)
		{
			x1_8();
			register_tm_clones();
			return;
		}
	}
	register_tm_clones();
}

// 0000000000000838: void forever()
// Called from:
//      main
void forever()
{
	while (true)
		fn00000000000006E0();
}

// 0000000000000868: void main()
void main()
{
	forever();
}

// 0000000000000880: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
void __libc_csu_init(word32 w0, word64 x1, word64 x2, word64 x24)
{
	word32 x24_32_32_104 = SLICE(x24, word32, 32);
	int64 x20_26 = 0x00010DB0 - 0x00010DA8;
	<anonymous> * x21_24[] = g_a10DA8;
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

// 00000000000008F8: void __libc_csu_fini()
void __libc_csu_fini()
{
}

