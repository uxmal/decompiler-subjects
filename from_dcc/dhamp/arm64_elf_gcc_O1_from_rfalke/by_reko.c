// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 0000000000000F34: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 00000000000007A0: Register word64 _init(Register out ptr64 x30Out)
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

// 00000000000007E0: void fn00000000000007E0()
// Called from:
//      mcopy
void fn00000000000007E0()
{
	g_ptr12000();
}

// 00000000000007F0: void fn00000000000007F0()
// Called from:
//      __do_global_dtors_aux
void fn00000000000007F0()
{
	g_ptr12008();
}

// 0000000000000800: void fn0000000000000800()
// Called from:
//      mcopy
void fn0000000000000800()
{
	g_ptr12010();
}

// 0000000000000810: void fn0000000000000810()
// Called from:
//      mcopy
void fn0000000000000810()
{
	g_ptr12018();
}

// 0000000000000820: void fn0000000000000820()
// Called from:
//      _start
void fn0000000000000820()
{
	g_ptr12020();
}

// 0000000000000840: void fn0000000000000840()
// Called from:
//      _start
void fn0000000000000840()
{
	g_ptr12030();
}

// 0000000000000850: void fn0000000000000850()
// Called from:
//      mcopy
void fn0000000000000850()
{
	g_ptr12038();
}

// 0000000000000860: void fn0000000000000860()
// Called from:
//      mcopy
//      main
void fn0000000000000860()
{
	g_ptr12040();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 0000000000000870: void _start()
void _start()
{
	fn0000000000000820();
	fn0000000000000840();
	call_weak_fn();
}

// 00000000000008A8: void call_weak_fn()
// Called from:
//      _init
//      _start
void call_weak_fn()
{
	if (g_qw11FB8 == 0x00)
		return;
	word64 x17_12;
	g_ptr12028();
}

// 00000000000008C0: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (73831 - 0x00012060 <= 0x0E)
		return;
	<anonymous> * x1_13 = g_ptr11FA8;
	if (x1_13 == null)
		return;
	x1_13();
}

// 00000000000008F8: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 0x00012060 - 0x00012060;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_13 = g_ptr11FE0;
	if (x2_13 == null)
		return;
	word64 x2_17;
	x2_13();
}

// 0000000000000938: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b12060 == 0x00)
	{
		if (g_qw11FB0 != 0x00)
			fn00000000000007F0();
		deregister_tm_clones();
		g_b12060 = 0x01;
	}
}

// 0000000000000980: void frame_dummy(Register word64 x29, Register word64 x30)
void frame_dummy(word64 x29, word64 x30)
{
	if (g_qw11DB0 != 0x00)
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

// 00000000000009B8: void sq(Register word64 x0)
void sq(word64 x0)
{
	if (x0 != 0x00)
	{
		word64 x3_6 = g_qw12058;
		word64 x1_11 = x3_6 - 0x02;
		do
			x1_11 -= 0x02;
		while (x1_11 - (x3_6 - 18002) != 0x00);
		g_qw12058 = x3_6 - 18000;
	}
	else
	{
		word64 x2_33 = g_qw12058;
		word64 x0_34 = x2_33;
		do
			x0_34 += 0x02;
		while (x0_34 - (x2_33 + 18000) != 0x00);
		g_qw12058 = x2_33 + 18000;
	}
}

// 0000000000000A60: void sroot(Register real64 d0)
void sroot(real64 d0)
{
	real64 d1_14 = d0 * 0.5;
	if (d0 > (d0 * 0.5) * g_r0AB8)
	{
		real64 d4_12 = g_r0AB8;
		do
		{
			real64 d3_15 = d0 / d1_14;
			real64 d2_16 = d3_15 - d1_14;
			if (d2_16 < 0.0)
				d2_16 = -d2_16;
			real64 d1_22 = d3_15 + d1_14;
			d1_14 = d1_22 * 0.5;
		} while (d1_22 * 0.5 * d4_12 < d2_16);
	}
}

// 0000000000000AC0: void abs(Register real64 d0)
void abs(real64 d0)
{
}

// 0000000000000AD4: void dply()
void dply()
{
	word32 w0_3;
	for (w0_3 = 100; w0_3 != 0x00; --w0_3)
		;
}

// 0000000000000B44: Register int32 fib(Register int32 w0, Register out ptr64 x19Out, Register out ptr64 x20Out)
// Called from:
//      fib
int32 fib(int32 w0, ptr64 & x19Out, ptr64 & x20Out)
{
	if (w0 > 0x02)
	{
		word64 x19_27;
		word64 x20_81;
		fib(w0 - 0x01, out x19_27, out x20_81);
		word64 x20_40;
		word64 x19_82;
		int32 w0_43 = (word32) x20_40 + fib((word32) x19_27 - 0x02, out x19_82, out x20_40);
		x19Out = qwLoc10;
		x20Out = x19;
		return w0_43;
	}
	else
	{
		x19Out = x19;
		x20Out = x20;
		return 0x01;
	}
}

// 0000000000000B88: Register word32 mstrcmp(Register (arr byte) x0, Register (arr byte) x1)
// Called from:
//      stest
word32 mstrcmp(byte x0[], byte x1[])
{
	word32 w3_18 = (word32) x0[0];
	word32 w4_21 = (word32) x1[0];
	if (w3_18 != w4_21)
		return w3_18 - w4_21;
	if (w3_18 == 0x00)
		return 0x00;
	int64 x2_13 = 0x01;
	do
	{
		w3_18 = (word32) x0[x2_13];
		w4_21 = (word32) x1[x2_13];
		if (w3_18 != w4_21)
			return w3_18 - w4_21;
		++x2_13;
	} while (w3_18 != 0x00);
	return 0x00;
}

// 0000000000000BD0: void mstrcpy(Register (arr byte) x0, Register ptr64 x1)
// Called from:
//      stest
//      mcopy
void mstrcpy(byte x0[], ptr64 x1)
{
	int64 x2_11 = 0x00;
	do
	{
		word32 w3_8 = (word32) (x1 + x2_11);
		x0[x2_11] = (byte) w3_8;
		++x2_11;
	} while (w3_8 != 0x00);
}

// 0000000000000BE8: void stest(Register (ptr64 (arr byte)) x0, Register (ptr64 (arr byte)) x1)
void stest(byte (* x0)[], byte (* x1)[])
{
	word32 w19_32;
	for (w19_32 = 9000; w19_32 != 0x00; --w19_32)
	{
		mstrcpy(x0, 0x0F58);
		mstrcpy(x1, 0x0F70);
		mstrcmp(x0, x1);
	}
}

// 0000000000000C64: void mcopy(Register (ptr64 byte) x19)
void mcopy(byte * x19)
{
	mstrcpy(fp + ~0x5F, 0x0F88);
	fn0000000000000810();
	word32 w21_34 = 999;
	if (4000 == 0x00)
	{
		fn0000000000000860();
		fn00000000000007E0();
l0000000000000CBC:
		do
		{
			fn0000000000000850();
			x19 = x19_133 + 1;
			x19_133 = x19;
		} while ((word32) *x19_133 != 0x00);
l0000000000000CCC:
		--w21_34;
		if (w21_34 == 0x00)
		{
			fn0000000000000800();
			return;
		}
	}
	if ((word32) bLoc60 != 0x00)
	{
		x19 = fp + ~0x5E;
		goto l0000000000000CBC;
	}
	goto l0000000000000CCC;
}

// 0000000000000D00: void intest()
void intest()
{
	word32 w1_10;
	for (w1_10 = 1000; w1_10 != 0x00; --w1_10)
	{
		word32 w0_4;
		for (w0_4 = 0x01; w0_4 != 0x0167; w0_4 += 0x02)
			;
	}
}

// 0000000000000D24: void main(Register word64 x19, Register word64 x23, Register word64 x25, Register word64 x30)
void main(word64 x19, word64 x23, word64 x25, word64 x30)
{
	word32 x19_32_32_83 = SLICE(x19, word32, 32);
	fn0000000000000860();
	int32 w19_35 = 0x01;
	word64 x22_39 = g_qw11FD0;
	while (true)
	{
		up32 w0_42 = w19_35 - 0x01;
		word64 x19_84 = SEQ(x19_32_32_83, w19_35);
		if (w0_42 <= 0x05)
			break;
		if (w19_35 > 0x05)
		{
			fn0000000000000860();
			return;
		}
		++w19_35;
	}
	<anonymous> * x0_78 = 3500 + (int64) ((int8) ((word32) (&g_t0F4C)[(uint64) w0_42]));
	x0_78();
}

// 0000000000000EB8: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
void __libc_csu_init(word32 w0, word64 x1, word64 x2, word64 x24)
{
	word32 x24_32_32_104 = SLICE(x24, word32, 32);
	int64 x20_26 = 0x00011DA8 - 0x00011DA0;
	<anonymous> * x21_24[] = g_a11DA0;
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

// 0000000000000F30: void __libc_csu_fini()
void __libc_csu_fini()
{
}

