// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 0000000000000D8C: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 00000000000007E8: Register word64 _init(Register out ptr64 x30Out)
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

// 0000000000000820: void fn0000000000000820()
// Called from:
//      dumpline
void fn0000000000000820()
{
	g_ptr12000();
}

// 0000000000000830: void fn0000000000000830()
// Called from:
//      hexdump
void fn0000000000000830()
{
	g_ptr12008();
}

// 0000000000000840: void fn0000000000000840()
// Called from:
//      __do_global_dtors_aux
void fn0000000000000840()
{
	g_ptr12010();
}

// 0000000000000850: void fn0000000000000850()
// Called from:
//      dumpline
void fn0000000000000850()
{
	g_ptr12018();
}

// 0000000000000860: void fn0000000000000860()
// Called from:
//      hexdump
void fn0000000000000860()
{
	g_ptr12020();
}

// 0000000000000870: void fn0000000000000870()
// Called from:
//      hexdump
void fn0000000000000870()
{
	g_ptr12028();
}

// 0000000000000880: void fn0000000000000880()
// Called from:
//      _start
void fn0000000000000880()
{
	g_ptr12030();
}

// 00000000000008A0: void fn00000000000008A0()
// Called from:
//      _start
void fn00000000000008A0()
{
	g_ptr12040();
}

// 00000000000008B0: void fn00000000000008B0()
// Called from:
//      dumpline
void fn00000000000008B0()
{
	g_ptr12048();
}

// 00000000000008C0: void fn00000000000008C0()
// Called from:
//      hexdump
void fn00000000000008C0()
{
	g_ptr12050();
}

// 00000000000008D0: void fn00000000000008D0()
// Called from:
//      hexdump
void fn00000000000008D0()
{
	g_ptr12058();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 00000000000008E0: void _start()
void _start()
{
	fn0000000000000880();
	fn00000000000008A0();
	call_weak_fn();
}

// 0000000000000918: void call_weak_fn()
// Called from:
//      _init
//      _start
void call_weak_fn()
{
	if (g_qw11FC0 == 0x00)
		return;
	word64 x17_12;
	g_ptr12038();
}

// 0000000000000930: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (0x00012077 - 0x00012070 <= 0x0E)
		return;
	<anonymous> * x1_13 = g_ptr11FB0;
	if (x1_13 == null)
		return;
	x1_13();
}

// 0000000000000968: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 0x00012070 - 0x00012070;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_13 = g_ptr11FE0;
	if (x2_13 == null)
		return;
	word64 x2_17;
	x2_13();
}

// 00000000000009A8: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b12070 == 0x00)
	{
		if (g_qw11FB8 != 0x00)
			fn0000000000000840();
		deregister_tm_clones();
		g_b12070 = 0x01;
	}
}

// 00000000000009F0: void frame_dummy(Register word64 x29, Register word64 x30)
void frame_dummy(word64 x29, word64 x30)
{
	if (g_qw11DB8 != 0x00)
	{
		<anonymous> * x1_8 = g_ptr11FD8;
		if (x1_8 != null)
		{
			x1_8();
			register_tm_clones();
			return;
		}
	}
	register_tm_clones();
}

// 0000000000000A28: Register ptr64 dumpline(Register ptr64 x0, Register int32 w2, Register ptr64 x5, Register out ptr64 x29Out)
// Called from:
//      hexdump
ptr64 dumpline(ptr64 x0, int32 w2, ptr64 x5, ptr64 & x29Out)
{
	word32 x5_32_32 = SLICE(x5, word32, 32);
	word32 w0_115;
	int32 w21_105;
	int64 x8_116;
	ptr64 x5_134;
	fn0000000000000850();
	int32 w19_125 = w2 <= 0x10 ? w2 : 0x10;
	if (w19_125 > 0x00)
	{
		ui32 w21_55 = 0x00;
		do
		{
			fn0000000000000850();
			w21_55 += 0x03;
		} while (w21_55 != w19_125 * 0x03);
		w21_105 = w19_125 + 0x01;
		if (w19_125 > 0x0F)
		{
			fn0000000000000820();
			w0_115 = SLICE(fp + ~0x47, word32, 0);
			x8_116 = (int64) w0_115;
			Mem92[fp + ~0x47 + x8_116:word32] = Mem33[0x0000000000000DC0<p64>:word32];
			goto l0000000000000B10;
		}
	}
	else
		w21_105 = 0x01;
	word32 w23_98 = g_dw0DB8;
	do
	{
		fn0000000000000820();
		Mem104[fp + ~0x47 + (fp + ~0x47):word32] = w23_98;
		++w21_105;
	} while (w21_105 <= 0x10);
	fn0000000000000820();
	w0_115 = SLICE(fp + ~0x47, word32, 0);
	x8_116 = (int64) w0_115;
	Mem120[fp + ~0x47 + x8_116:word32] = Mem104[0x0000000000000DC0<p64>:word32];
	x5_134 = x5;
	if (w19_125 <= 0x00)
	{
		w19_125 = 0x00;
		goto l0000000000000B54;
	}
l0000000000000B10:
	word64 x5_133 = SEQ(x5_32_32, w19_125 - 0x01);
	x5_134 = x5_133 + 0x01;
	int64 x1_399 = 0x00;
	do
	{
		word32 w2_147 = (word32) (x0 + x1_403);
		Mem155[fp + ~0x47 + CONVERT(SLICE(x1_403, word32, 0) + w0_115, word32, int64):byte] = SLICE(CONVERT(SLICE(w2_147 - 0x20, uint8, 0), uint8, uint32) <=u 0x5E ? w2_147 : 0x2E, byte, 0);
		x1_399 = x1_403 + 0x01;
		x1_403 = x1_399;
	} while (x1_403 + 0x01 - (x5_133 + 0x01) != 0x00);
	if (w19_125 > 0x0F)
	{
l0000000000000B74:
		Mem193[fp + ~0x47 + (x8_116 + CONVERT(w19_125, word32, int64)):word16] = SLICE(CONVERT(Mem190[0x0000000000000DC8<p64>:word16], word16, word32), word16, 0);
		fn00000000000008B0();
		x29Out = x30;
		return x5_134;
	}
l0000000000000B54:
	do
	{
		++w19_125;
		Mem175[fp + ~0x47 + CONVERT((w19_125 - 0x01) + w0_115, word32, int64):byte] = 0x20;
	} while (w19_125 <= 0x0F);
	goto l0000000000000B74;
}

// 0000000000000BDC: Register word64 hexdump(Register word64 x0, Register ptr64 x5, Register out ptr64 x5Out, Register out ptr64 x19Out, Register out ptr64 x20Out, Register out ptr64 x21Out)
// Called from:
//      main
word64 hexdump(word64 x0, ptr64 x5, ptr64 & x5Out, ptr64 & x19Out, ptr64 & x20Out, ptr64 & x21Out)
{
	word64 x0_157;
	fn00000000000008D0();
	if (0x00 != 0x00)
	{
		fn0000000000000870();
		if (x0 != 0x00)
		{
			up64 x19_50 = 0x00;
			if (qwLoc58 != 0x00)
			{
				do
				{
					fn00000000000008C0();
					int32 w0_65 = (word32) (fp + ~0x07);
					word32 w20_90 = (word32) (fp + ~0x07);
					if (w0_65 == 0x00)
						break;
					struct Eq_290 * x29_77;
					x5 = dumpline(fp + ~0x07, w0_65, x5, out x29_77);
					x19_50 += (int64) w20_90;
				} while (x29_77->qw0070 - x19_50 > 0x00);
			}
			fn0000000000000860();
			x0_157 = SEQ(SLICE(x0, word32, 32), 0x00);
		}
		else
		{
			fn0000000000000830();
			x0_157 = SEQ(SLICE(x0, word32, 32), 0x01);
		}
	}
	else
	{
		fn0000000000000830();
		x0_157 = SEQ(SLICE(x0, word32, 32), 0x01);
	}
	x5Out = x5;
	x19Out = qwLocC0;
	x20Out = x19;
	x21Out = x20;
	return x0_157;
}

// 0000000000000CB4: void main(Register int32 w0, Register word64 x1, Register ptr64 x5)
void main(int32 w0, word64 x1, ptr64 x5)
{
	if (w0 > 0x01)
	{
		word64 * x19_23 = x1 + 0x08;
		do
		{
			ui64 x21_42;
			word64 x20_139;
			hexdump(*x19_23, x5, out x5, out x19_23, out x20_139, out x21_42);
		} while (x19_23 - x21_42 != 0x00);
	}
}

// 0000000000000D10: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
void __libc_csu_init(word32 w0, word64 x1, word64 x2, word64 x24)
{
	word32 x24_32_32_104 = SLICE(x24, word32, 32);
	int64 x20_26 = 0x00011DB0 - 0x00011DA8;
	<anonymous> * x21_24[] = g_a11DA8;
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

// 0000000000000D88: void __libc_csu_fini()
void __libc_csu_fini()
{
}

