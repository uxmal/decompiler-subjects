// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 0000000000400864: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 0000000000400468: Register word64 _init(Register out ptr64 x30Out)
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

// 00000000004004A0: void fn00000000004004A0()
// Called from:
//      _start
void fn00000000004004A0()
{
	g_ptr411000();
}

// 00000000004004C0: void fn00000000004004C0()
// Called from:
//      _start
void fn00000000004004C0()
{
	g_ptr411010();
}

// 00000000004004D0: void fn00000000004004D0()
// Called from:
//      main
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

#include "subject_text.h"

// 00000000004004F0: void _start()
void _start()
{
	fn00000000004004A0();
	fn00000000004004C0();
}

// 0000000000400538: void call_weak_fn()
// Called from:
//      _init
void call_weak_fn()
{
	if (g_qw410FE0 == 0x00)
		return;
	word64 x17_12;
	g_ptr411008();
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

// 0000000000400640: void main()
void main()
{
	fn00000000004004D0();
	fn00000000004004E0();
	fn00000000004004D0();
	fn00000000004004D0();
	int64 qwLoc28_161 = 0x00;
	while (qwLoc28_161 - qwLoc30 <= 0x00)
	{
		while (true)
		{
			word16 wLoc2E_188 = SLICE(qwLoc30, word16, 16);
			word16 wLoc2A_189 = SLICE(qwLoc30, word16, 48);
			if ((word32) wLoc1E > 0x28)
				break;
			qwLoc30 = SEQ(wLoc2A_189, (word16) ((word32) ((word32) wLoc1C > (word32) wLoc1E) & 0x01), wLoc2E_188, (int16) (wLoc1A + wLoc1E));
		}
		++qwLoc28_161;
	}
	fn00000000004004E0();
}

// 00000000004007E8: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
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

// 0000000000400860: void __libc_csu_fini()
void __libc_csu_fini()
{
}

