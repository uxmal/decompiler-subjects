// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 0000000000000DD4: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 0000000000000830: Register word64 _init(Register out ptr64 x30Out)
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

// 0000000000000870: void fn0000000000000870()
// Called from:
//      __do_global_dtors_aux
void fn0000000000000870()
{
	g_ptr12000();
}

// 0000000000000880: void fn0000000000000880()
// Called from:
//      main
void fn0000000000000880()
{
	g_ptr12008();
}

// 0000000000000890: void fn0000000000000890()
// Called from:
//      print_num
void fn0000000000000890()
{
	g_ptr12010();
}

// 00000000000008A0: void fn00000000000008A0()
// Called from:
//      _start
void fn00000000000008A0()
{
	g_ptr12018();
}

// 00000000000008C0: void fn00000000000008C0()
// Called from:
//      _start
void fn00000000000008C0()
{
	g_ptr12028();
}

// 00000000000008D0: void fn00000000000008D0()
// Called from:
//      main
//      help
void fn00000000000008D0()
{
	g_ptr12030();
}

// 00000000000008E0: void fn00000000000008E0()
// Called from:
//      print_num
void fn00000000000008E0()
{
	g_ptr12038();
}

// 00000000000008F0: void fn00000000000008F0()
// Called from:
//      main
void fn00000000000008F0()
{
	g_ptr12040();
}

// 0000000000000900: void fn0000000000000900()
// Called from:
//      main
//      help
void fn0000000000000900()
{
	g_ptr12048();
}

// 0000000000000910: void fn0000000000000910()
// Called from:
//      main
//      print_num
void fn0000000000000910()
{
	g_ptr12050();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 0000000000000920: void main(Register up32 w0, Register word32 w1, Register word64 x20, Register word64 x22)
void main(up32 w0, word32 w1, word64 x20, word64 x22)
{
	word32 x20_32_32_160 = SLICE(x20, word32, 32);
	word32 x22_32_32_166 = SLICE(x22, word32, 32);
	union Eq_56 * x19_105 = (int64) w1;
	word32 w19_31 = (word32) x19_105;
	if (w0 > 0x03)
	{
		fn0000000000000900();
		fn00000000000008D0();
		return;
	}
	int32 w0_35 = null[(int64) (w19_31 + 0x04) / 4];
	fn0000000000000880();
	union Eq_56 * x23_38 = g_ptr11FA0;
	*x23_38 = (union Eq_56 *) 0x0A;
	word64 x20_106 = SEQ(x20_32_32_160, w0);
	if (w0 == 0x03)
	{
		x19_105 = (int64) (w19_31 + 0x08);
		Eq_56 w0_46 = *x19_105;
		fn0000000000000880();
		*x23_38 = (union Eq_56 *) w0_46;
		if (w0_46 > 0x24)
		{
			fn00000000000008F0();
			return;
		}
	}
	word64 x30_130;
	word64 x29_129;
	fn0000000000000900();
	if (w0_35 > 0x02)
	{
		int32 w1_101 = w0_35;
		word32 w2_100 = 0x00;
		do
		{
			w1_101 -= 0x02;
			w2_100 += fib(w1_101 - 0x01, out x19_105, out x20_106);
		} while (w1_101 > 0x02);
		word64 x31_355;
		word32 w3_353;
		word64 x4_354;
		print_num(w2_100 + 0x01, *g_ptr11FA0, out w3_353, out x4_354, out x29_129, out x30_130, out x31_355);
		fn0000000000000910();
		fn0000000000000900();
		if (w0_35 > 0x0C)
		{
			fn0000000000000900();
l0000000000000A1C:
			fn0000000000000910();
			return;
		}
	}
	else
	{
		word32 w3_350;
		word64 x4_351;
		word64 x31_352;
		print_num(0x01, *g_ptr11FA0, out w3_350, out x4_351, out x29_129, out x30_130, out x31_352);
		fn0000000000000910();
		fn0000000000000900();
	}
	<anonymous> * x1_153 = (int64) (word32) 0x0C08;
	word64 x0_177;
	struct Eq_165 * x21_178;
	word64 x2_182;
	word64 x3_183;
	x1_153();
	word32 w3_196;
	word64 x4_202;
	word64 x31_203;
	word64 x29_356;
	word64 x30_357;
	word64 x2_293 = SEQ(SLICE(x2_182, word32, 32), print_num((word32) x0_177, *x21_178->ptr0FA0, out w3_196, out x4_202, out x29_356, out x30_357, out x31_203));
	word64 x3_302 = SEQ(SLICE(x3_183, word32, 32), w3_196);
	goto l0000000000000A1C;
}

// 0000000000000AC0: void _start()
void _start()
{
	fn00000000000008A0();
	fn00000000000008C0();
	call_weak_fn();
}

// 0000000000000AF8: void call_weak_fn()
// Called from:
//      _init
//      _start
void call_weak_fn()
{
	if (g_qw11FC0 == 0x00)
		return;
	word64 x17_12;
	g_ptr12020();
}

// 0000000000000B10: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (73839 - 73832 <= 0x0E)
		return;
	<anonymous> * x1_13 = g_ptr11FA8;
	if (x1_13 == null)
		return;
	x1_13();
}

// 0000000000000B48: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 73832 - 73832;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_13 = g_ptr11FE0;
	if (x2_13 == null)
		return;
	word64 x2_17;
	x2_13();
}

// 0000000000000B88: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b12068 == 0x00)
	{
		if (g_qw11FB0 != 0x00)
			fn0000000000000870();
		deregister_tm_clones();
		g_b12068 = 0x01;
	}
}

// 0000000000000BD0: void frame_dummy(Register word64 x29, Register word64 x30)
void frame_dummy(word64 x29, word64 x30)
{
	if (g_qw11D98 != 0x00)
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

// 0000000000000C08: void fact(Register int32 w0)
void fact(int32 w0)
{
	if (w0 <= 0x01)
		return;
	int32 w1_11 = 0x02;
	do
		++w1_11;
	while (w1_11 != w0 + 0x01);
}

// 0000000000000C38: Register int32 fib(Register int32 w0, Register out (ptr64 Eq_56) x19Out, Register out (ptr64 Eq_56) x20Out)
// Called from:
//      main
//      fib
int32 fib(int32 w0, union Eq_56 & x19Out, union Eq_56 & x20Out)
{
	if (w0 <= 0x02)
	{
		x19Out = x19;
		x20Out = x20;
		return 0x01;
	}
	else
	{
		int32 w19_20 = w0;
		do
		{
			w19_20 = (word32) x19_35;
			word64 x19_35;
			word64 x20_36;
			word32 w20_39 = (word32) x20_36 + fib(w19_20 - 0x01, out x19_35, out x20_36);
		} while (w19_20 > 0x02);
		x19Out = qwLoc10;
		x20Out = x19;
		return w20_39 + 0x01;
	}
}

// 0000000000000C88: Register word32 print_num(Register int32 w0, Register Eq_56 w1, Register out Eq_97 w3Out, Register out ptr64 x4Out, Register out ptr64 x29Out, Register out ptr64 x30Out, Register out Eq_101 x31Out)
// Called from:
//      main
word32 print_num(int32 w0, Eq_56 w1, union Eq_97 & w3Out, ptr64 & x4Out, ptr64 & x29Out, ptr64 & x30Out, union Eq_101 & x31Out)
{
	fn0000000000000890();
	int32 w20_17 = w0;
	struct Eq_317 * x0_147 = (struct Eq_317 *) 0x0101;
	while (true)
	{
		word32 w0_36 = (word32) x0_147;
		int64 x19_37 = (int64) w0_36;
		int32 w2_35 = w20_17 / w1;
		Eq_97 w3_41 = w20_17 - w2_35 * w1;
		word32 w2_47 = w3_41 < 0x0A ? (word32) w3_41.u0 + 48 : (word32) w3_41.u0 + 87;
		x0_147->bFFFFFFFF = (byte) w2_47;
		int32 x0_32_32_38 = SLICE(x0_147, word32, 32);
		word32 w19_52 = (word32) x19_37;
		ptr64 x4_40 = x0_147 + 1;
		w20_17 = w2_35;
		if (w2_35 == 0x00)
			break;
		++x0_147;
	}
	if (w19_52 != 0x0100)
	{
		int64 x19_58 = x19_37 - 0x01;
		int64 x20_60 = x19_37 - 0x02 - SEQ(x0_32_32_38, ~0x0100 + w0_36);
		do
		{
			fn0000000000000910();
			x19_58 += -1;
			x31 = x19_58 - x20_60;
		} while (x31 != 0x00);
	}
	fn00000000000008E0();
	w3Out = w3_41;
	x4Out = x4_40;
	x29Out = x30;
	x30Out = qwLoc20;
	x31Out = x31;
	return w2_47;
}

// 0000000000000D30: void help()
void help()
{
	fn0000000000000900();
	fn00000000000008D0();
}

// 0000000000000D58: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
void __libc_csu_init(word32 w0, word64 x1, word64 x2, word64 x24)
{
	word32 x24_32_32_104 = SLICE(x24, word32, 32);
	int64 x20_26 = 0x00011D90 - 0x00011D88;
	<anonymous> * x21_24[] = g_a11D88;
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

// 0000000000000DD0: void __libc_csu_fini()
void __libc_csu_fini()
{
}

