// subject_bss.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

byte g_b411038 = 0x00;
Eq_96 g_a41103C[] = 
	{
	};
word32 g_dw41143C = 0x00;
// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 00000000004008B4: void _fini()
void _fini()
{
}

// subject_got.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

word64 g_qw410FE0 = 0x00;
// subject_got_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_ptr411000 = &g_t400480;
<anonymous> * g_ptr411008 = &g_t400480;
<anonymous> * g_ptr411010 = &g_t400480;
<anonymous> * g_ptr411018 = &g_t400480;
<anonymous> * g_ptr411020 = &g_t400480;
// subject_init_array.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_a410DE0[] = 
	{
	};
// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000400460: Register word64 _init(Register out ptr64 x30Out)
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

word64 g_qw410DF0 = 0x00;
// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> g_t400480 = <code>;
// 00000000004004A0: void fn00000000004004A0()
// Called from:
//      main
void fn00000000004004A0()
{
	g_ptr411000();
}

// 00000000004004B0: void fn00000000004004B0()
// Called from:
//      _start
void fn00000000004004B0()
{
	g_ptr411008();
}

// 00000000004004D0: void fn00000000004004D0()
// Called from:
//      _start
void fn00000000004004D0()
{
	g_ptr411018();
}

// 00000000004004E0: void fn00000000004004E0()
// Called from:
//      main
void fn00000000004004E0()
{
	g_ptr411020();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 00000000004004F0: void _start()
void _start()
{
	fn00000000004004B0();
	fn00000000004004D0();
}

// 0000000000400538: void call_weak_fn()
// Called from:
//      _init
void call_weak_fn()
{
	if (g_qw410FE0 == 0x00)
		return;
	word64 x17_12;
	g_ptr411010();
}

// 0000000000400550: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (4263999 - 0x00411038 <= 0x0E)
		return;
	<anonymous> * x1_12 = g_ptr400588;
	if (x1_12 == null)
		return;
	x1_12();
}

<anonymous> * g_ptr400588 = null;
// 0000000000400590: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 0x00411038 - 0x00411038;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_12 = g_ptr4005C8;
	if (x2_12 == null)
		return;
	word64 x2_16;
	x2_12();
}

<anonymous> * g_ptr4005C8 = null;
// 00000000004005D0: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b411038 == 0x00)
	{
		deregister_tm_clones();
		g_b411038 = 0x01;
	}
}

// 0000000000400600: void frame_dummy(Register word64 x29, Register word64 x30)
void frame_dummy(word64 x29, word64 x30)
{
	if (g_qw410DF0 != 0x00)
	{
		<anonymous> * x1_7 = g_ptr400638;
		if (x1_7 != null)
		{
			x1_7();
			register_tm_clones();
			return;
		}
	}
	register_tm_clones();
}

<anonymous> * g_ptr400638 = null;
// 0000000000400640: void rc_crc32(Register ptr64 x1, Register ptr64 x2)
// Called from:
//      main
void rc_crc32(ptr64 x1, ptr64 x2)
{
	if (g_dw41143C == 0x00)
	{
		Eq_96 dwLoc24_111 = 0x00;
		while (dwLoc24_111 < 0x0100)
		{
			Eq_96 dwLoc1C_128 = dwLoc24_111;
			int32 dwLoc28_129;
			for (dwLoc28_129 = 0x00; dwLoc28_129 < 0x08; ++dwLoc28_129)
			{
				if ((dwLoc1C_128 & 0x01) != 0x00)
					dwLoc1C_128 = dwLoc1C_128 >> 1 ^ 0x8320;
				else
					dwLoc1C_128 >>= 1;
			}
			*((char *) g_a41103C + (int64) dwLoc32 * 0x00) = (union Eq_96 *) dwLoc1C_128;
			dwLoc24_111 = (word32) dwLoc24_111.u0 + 1;
		}
		g_dw41143C = 0x01;
	}
	up64 x10_31 = x1 + x2;
	ptr64 qwLoc30_121 = x1;
	while (qwLoc30_121 - x10_31 < 0x00)
		++qwLoc30_121;
}

// 00000000004007BC: void main()
void main()
{
	fn00000000004004A0();
	rc_crc32(0x004008C8, 0x004008C8);
	fn00000000004004E0();
}

// 0000000000400838: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
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

// 00000000004008B0: void __libc_csu_fini()
void __libc_csu_fini()
{
}

