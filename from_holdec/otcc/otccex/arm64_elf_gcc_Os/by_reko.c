// subject_bss.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

byte g_b12068 = 0x00;
up32 g_dw1206C = 0x00;
// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000000D24: void _fini()
void _fini()
{
}

// subject_got.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

up32 * g_ptr11FA0 = &g_dw1206C;
<anonymous> * g_ptr11FA8 = null;
word64 g_qw11FB0 = 0x00;
word64 g_qw11FC0 = 0x00;
<anonymous> * g_ptr11FD8 = null;
<anonymous> * g_ptr11FE0 = null;
// subject_got_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_ptr12000 = &g_t0840;
<anonymous> * g_ptr12008 = &g_t0840;
<anonymous> * g_ptr12010 = &g_t0840;
<anonymous> * g_ptr12018 = &g_t0840;
<anonymous> * g_ptr12020 = &g_t0840;
<anonymous> * g_ptr12028 = &g_t0840;
<anonymous> * g_ptr12030 = &g_t0840;
<anonymous> * g_ptr12038 = &g_t0840;
<anonymous> * g_ptr12040 = &g_t0840;
<anonymous> * g_ptr12048 = &g_t0840;
<anonymous> * g_ptr12050 = &g_t0840;
// subject_init_array.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_a11D88[] = 
	{
	};
// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000000828: Register word64 _init(Register out ptr64 x30Out)
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

word64 g_qw11D98 = 0x00;
// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> g_t0840 = <code>;
// 0000000000000860: void fn0000000000000860()
// Called from:
//      main
void fn0000000000000860()
{
	g_ptr12000();
}

// 0000000000000870: void fn0000000000000870()
// Called from:
//      __do_global_dtors_aux
void fn0000000000000870()
{
	g_ptr12008();
}

// 0000000000000880: void fn0000000000000880()
// Called from:
//      main
void fn0000000000000880()
{
	g_ptr12010();
}

// 0000000000000890: void fn0000000000000890()
// Called from:
//      print_num
void fn0000000000000890()
{
	g_ptr12018();
}

// 00000000000008A0: void fn00000000000008A0()
// Called from:
//      _start
void fn00000000000008A0()
{
	g_ptr12020();
}

// 00000000000008C0: void fn00000000000008C0()
// Called from:
//      _start
void fn00000000000008C0()
{
	g_ptr12030();
}

// 00000000000008E0: void fn00000000000008E0()
// Called from:
//      print_num
void fn00000000000008E0()
{
	g_ptr12040();
}

// 00000000000008F0: void fn00000000000008F0()
// Called from:
//      main
//      help
void fn00000000000008F0()
{
	g_ptr12048();
}

// 0000000000000900: void fn0000000000000900()
// Called from:
//      main
//      print_num
void fn0000000000000900()
{
	g_ptr12050();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000000910: void main(Register up32 w0, Register word32 w1, Register word64 x21, Register word64 x30)
void main(up32 w0, word32 w1, word64 x21, word64 x30)
{
	word32 x21_32_32_100 = SLICE(x21, word32, 32);
	word32 w19_29 = (word32) (int64) w1;
	if (w0 <= 0x03)
	{
		int32 w0_32 = null[(int64) (w19_29 + 0x04) / 4];
		fn0000000000000880();
		up32 * x22_40 = g_ptr11FA0;
		*x22_40 = 0x0A;
		if (w0 == 0x03)
		{
			up32 w0_45 = null[(int64) (w19_29 + 0x08) / 4];
			fn0000000000000880();
			*x22_40 = w0_45;
			if (w0_45 > 0x24)
			{
				fn0000000000000860();
				return;
			}
		}
		fn00000000000008F0();
		word64 x19_60;
		struct Eq_66 * x20_61;
		Eq_67 w0_59 = fib(w0_32, out x19_60, out x20_61);
		int32 * x20_67 = x20_61->ptr0FA0;
		word64 x29_77;
		word64 x30_78;
		word32 w3_269;
		word32 w4_270;
		word64 x31_271;
		print_num(w0_59, *x20_67, out w3_269, out w4_270, out x29_77, out x30_78, out x31_271);
		fn0000000000000900();
		fn00000000000008F0();
		if (w0_32 > 0x0C)
			fn00000000000008F0();
		else
		{
			<anonymous> * x1_98 = (int64) (word32) 0x0B80;
			int32 * x20_107;
			word64 x0_108;
			x1_98();
			word32 w3_122;
			word32 w4_123;
			word64 x31_131;
			word64 x30_273;
			word64 x29_272;
			word64 x2_128 = print_num((word32) x0_108, *x20_107, out w3_122, out w4_123, out x29_272, out x30_273, out x31_131);
		}
		fn0000000000000900();
	}
	else
		help(x30, x30);
}

// 0000000000000A3C: void _start()
void _start()
{
	fn00000000000008A0();
	fn00000000000008C0();
	call_weak_fn();
}

// 0000000000000A74: void call_weak_fn()
// Called from:
//      _init
//      _start
void call_weak_fn()
{
	if (g_qw11FC0 == 0x00)
		return;
	word64 x17_12;
	g_ptr12028();
}

// 0000000000000A88: void deregister_tm_clones()
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

// 0000000000000AC0: void register_tm_clones()
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

// 0000000000000B00: void __do_global_dtors_aux()
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

// 0000000000000B48: void frame_dummy(Register word64 x29, Register word64 x30)
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

// 0000000000000B80: void fact(Register int32 w0)
void fact(int32 w0)
{
	int32 w1_13;
	for (w1_13 = 0x02; w1_13 <= w0; ++w1_13)
		;
}

// 0000000000000BA4: Register int32 fib(Register int32 w0, Register out ptr64 x19Out, Register out ptr64 x20Out)
// Called from:
//      main
//      fib
int32 fib(int32 w0, ptr64 & x19Out, ptr64 & x20Out)
{
	word32 x20_32_32_55 = SLICE(x20, word32, 32);
	int32 w19_17 = w0;
	word64 x20_71 = SEQ(x20_32_32_55, 0x00);
	while (true)
	{
		word32 w20_22 = (word32) x20_71;
		if (w19_17 <= 0x02)
			break;
		w19_17 = (word32) x19_46;
		word64 x19_46;
		word64 x20_47;
		x20_71 = SEQ(SLICE(x20_47, word32, 32), (word32) fib(w19_17 - 0x01, out x19_46, out x20_47) + (word32) x20_47);
	}
	x19Out = qwLoc10;
	x20Out = x19;
	return w20_22 + 0x01;
}

// 0000000000000BE4: Register (ptr64 Eq_267) print_num(Register Eq_67 w0, Register int32 w1, Register out Eq_89 w3Out, Register out Eq_67 w4Out, Register out ptr64 x29Out, Register out ptr64 x30Out, Register out Eq_93 x31Out)
// Called from:
//      main
struct Eq_267 * print_num(Eq_67 w0, int32 w1, union Eq_89 & w3Out, union Eq_67 & w4Out, ptr64 & x29Out, ptr64 & x30Out, union Eq_93 & x31Out)
{
	fn0000000000000890();
	Eq_67 w20_17 = w0;
	struct Eq_267 * x2_117 = (struct Eq_267 *) 0x0101;
	while (true)
	{
		Eq_67 w4_34 = w20_17 / w1;
		int32 w20_37 = w20_17 - w4_34 * w1;
		Eq_89 w3_43 = w20_37 < 0x0A ? w20_37 + 0x30 : w20_37 + 0x57;
		x2_117->bFFFFFFFF = (byte) w3_43;
		word32 w2_35 = (word32) x2_117;
		w20_17 = w4_34;
		if (w4_34 == 0x00)
			break;
		++x2_117;
	}
	int64 x20_49 = (int64) w2_35;
	int64 x20_52 = x20_49 - 0x01;
	int64 x22_53 = x20_49 - 0x01 - (uint64) (w2_35 - 0x0100);
	while (true)
	{
		Eq_93 x31_56 = x20_52 - x22_53;
		if (x31_56 == 0x00)
			break;
		fn0000000000000900();
		x20_52 += -1;
	}
	fn00000000000008E0();
	w3Out = w3_43;
	w4Out = w4_34;
	x29Out = x30;
	x30Out = qwLoc20;
	x31Out = x31_56;
	return x2_117;
}

// 0000000000000C80: void help(Register word64 x30, Stack word64 qwArg00)
// Called from:
//      main
void help(word64 x30, word64 qwArg00)
{
	fn00000000000008F0();
	word32 w0_26 = (word32) 3404;
	g_ptr12038();
}

// 0000000000000CA8: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
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

// 0000000000000D20: void __libc_csu_fini()
void __libc_csu_fini()
{
}

