// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 0000000000002284: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 0000000000000660: Register word64 _init(Register out ptr64 x30Out)
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

// 00000000000006A0: void fn00000000000006A0()
// Called from:
//      __do_global_dtors_aux
void fn00000000000006A0()
{
	g_ptr13000();
}

// 00000000000006B0: void fn00000000000006B0()
// Called from:
//      _start
void fn00000000000006B0()
{
	g_ptr13008();
}

// 00000000000006D0: void fn00000000000006D0()
// Called from:
//      _start
void fn00000000000006D0()
{
	g_ptr13018();
}

// 00000000000006E0: void fn00000000000006E0()
// Called from:
//      main
//      use
//      use_int
//      read_floats
//      basic_operations
//      compare_floats
//      constants
void fn00000000000006E0()
{
	g_ptr13020();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 00000000000006F0: void main()
void main()
{
	fn00000000000006E0();
	fn00000000000006E0();
}

// 000000000000073C: void _start()
void _start()
{
	fn00000000000006B0();
	fn00000000000006D0();
	call_weak_fn();
}

// 0000000000000774: void call_weak_fn()
// Called from:
//      _init
//      _start
void call_weak_fn()
{
	if (g_qw12FC0 == 0x00)
		return;
	word64 x17_12;
	g_ptr13010();
}

// 0000000000000788: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (77959 - 0x00013080 <= 0x0E)
		return;
	<anonymous> * x1_13 = g_ptr12FB0;
	if (x1_13 == null)
		return;
	x1_13();
}

// 00000000000007C0: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 0x00013080 - 0x00013080;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_13 = g_ptr12FE0;
	if (x2_13 == null)
		return;
	word64 x2_17;
	x2_13();
}

// 0000000000000800: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b13080 == 0x00)
	{
		if (g_qw12FB8 != 0x00)
			fn00000000000006A0();
		deregister_tm_clones();
		g_b13080 = 0x01;
	}
}

// 0000000000000848: void frame_dummy(Register word64 x29, Register word64 x30)
void frame_dummy(word64 x29, word64 x30)
{
	if (g_qw12DB8 != 0x00)
	{
		<anonymous> * x1_8 = g_ptr12FD8;
		if (x1_8 != null)
		{
			x1_8();
			register_tm_clones();
			return;
		}
	}
	register_tm_clones();
}

// 0000000000000880: void use()
void use()
{
	fn00000000000006E0();
}

// 0000000000000890: void use_int()
void use_int()
{
	fn00000000000006E0();
}

// 00000000000008A0: void read_ints()
void read_ints()
{
}

// 0000000000000908: void write_ints()
void write_ints()
{
}

// 0000000000000930: void read_floats(Register word64 x4, Register word64 q0_64_64, Register word64 sysreg3_3_4_4_0, Register word64 sysreg3_3_4_4_1)
void read_floats(word64 x4, word64 q0_64_64, word64 sysreg3_3_4_4_0, word64 sysreg3_3_4_4_1)
{
	__extenddftf2(x4, (real64) (real32) g_r13058 + 0x00 + g_t13060, q0_64_64, sysreg3_3_4_4_0, sysreg3_3_4_4_1);
	__addtf3();
}

// 0000000000000988: void write_floats(Register word64 x4, Register Eq_112 d0, Register word64 q0_64_64, Register word64 sysreg3_3_4_4_0, Register word64 sysreg3_3_4_4_1)
void write_floats(word64 x4, Eq_112 d0, word64 q0_64_64, word64 sysreg3_3_4_4_0, word64 sysreg3_3_4_4_1)
{
	g_r13058 = (real32) (real64) d0;
	g_t13060 = d0;
	g_ow13070 = SEQ(q0_64_64, __extenddftf2(x4, d0, q0_64_64, sysreg3_3_4_4_0, sysreg3_3_4_4_1));
}

// 00000000000009C0: void converting_between_floats_f1()
void converting_between_floats_f1()
{
	g_r13058 = (real32) (real64) g_t13060;
}

// 00000000000009D8: void converting_between_floats_f2()
void converting_between_floats_f2()
{
	__trunctfsf2();
}

// 0000000000000A08: void converting_between_floats_d1()
void converting_between_floats_d1()
{
	g_t13060.u1 = (real64) (real32) g_r13058;
}

// 0000000000000A20: void converting_between_floats_d2()
void converting_between_floats_d2()
{
	__trunctfdf2();
}

// 0000000000000A50: void converting_between_floats_l1(Register word32 x0_32_32, Register word32 x2_32_32, Register (ptr64 Eq_165) q0_64_64, Register word64 sysreg3_3_4_4_0, Register word64 sysreg3_3_4_4_1)
void converting_between_floats_l1(word32 x0_32_32, word32 x2_32_32, struct Eq_165 * q0_64_64, word64 sysreg3_3_4_4_0, word64 sysreg3_3_4_4_1)
{
	g_ow13070 = (word128) __extendsftf2(SEQ(x0_32_32, g_r13058), x2_32_32, q0_64_64, sysreg3_3_4_4_0, sysreg3_3_4_4_1);
}

// 0000000000000A80: void converting_between_floats_l2(Register word64 x4, Register word64 q0_64_64, Register word64 sysreg3_3_4_4_0, Register word64 sysreg3_3_4_4_1)
void converting_between_floats_l2(word64 x4, word64 q0_64_64, word64 sysreg3_3_4_4_0, word64 sysreg3_3_4_4_1)
{
	g_ow13070 = SEQ(q0_64_64, __extenddftf2(x4, g_t13060, q0_64_64, sysreg3_3_4_4_0, sysreg3_3_4_4_1));
}

// 0000000000000AB0: void basic_operations()
void basic_operations()
{
	fn00000000000006E0();
	fn00000000000006E0();
	fn00000000000006E0();
	fn00000000000006E0();
	fn00000000000006E0();
	fn00000000000006E0();
	fn00000000000006E0();
}

// 0000000000000B38: void compare_floats()
void compare_floats()
{
	fn00000000000006E0();
	fn00000000000006E0();
}

// 0000000000000BD0: void constants()
void constants()
{
	fn00000000000006E0();
	fn00000000000006E0();
	fn00000000000006E0();
	fn00000000000006E0();
	fn00000000000006E0();
}

// 0000000000000C60: void __addtf3()
// Called from:
//      read_floats
void __addtf3()
{
}

// 0000000000001908: Register word64 __extendsftf2(Sequence Eq_112 x0_32_32_s0, Register word32 x2_32_32, Register (ptr64 Eq_165) q0_64_64, Register word64 sysreg3_3_4_4_0, Register word64 sysreg3_3_4_4_1)
// Called from:
//      converting_between_floats_l1
word64 __extendsftf2(Eq_112 x0_32_32_s0, word32 x2_32_32, struct Eq_165 * q0_64_64, word64 sysreg3_3_4_4_0, word64 sysreg3_3_4_4_1)
{
	Eq_112 x1_72;
	Eq_112 x4_21;
	__mrs(sysreg3_3_4_4_0);
	Eq_112 x1_9 = __ubfm(x0_32_32_s0, 23, 23);
	Eq_112 x4_10 = __ubfm(x0_32_32_s0, 0, 0);
	Eq_112 x0_12 = __ubfm(x0_32_32_s0, 31, 31);
	ui32 w4_14 = (word32) x4_10;
	word32 w1_66 = (word32) x1_9;
	word32 x1_32_32_73 = SLICE(x1_9, word32, 32);
	word32 x1_32_32_75 = SLICE(x1_9, word32, 32);
	word32 x4_32_32_28 = SLICE(x4_10, word32, 32);
	word32 x0_32_32_51 = SLICE(x0_12, word32, 32);
	Eq_112 x2_19 = SEQ(x2_32_32, w4_14);
	if (((word64) x1_9 + 1 & 0x00) > 0x01)
	{
		x4_21 = x2_19 << 25;
		x1_72 = SEQ(x1_32_32_73, w1_66 + 0x3F80);
	}
	else if (x1_9 != 0x00)
	{
		if (x2_19 != 0x00)
		{
			__bfm(x2_19 << 25, 0, 47);
			*((char *) &q0_64_64->a0000->qw0000 + 1) = __bfm(x0_12, 1, 0);
			if ((w4_14 & 0x00) == 0x00)
				return;
			__sfp_handle_exceptions(SEQ(x0_32_32_51, 0x01), sysreg3_3_4_4_1);
			return;
		}
		x4_21.u0 = 0x00;
		x1_72 = SEQ(x1_32_32_75, 0x7FFF);
	}
	else if (x2_19 != 0x00)
	{
		ui32 w3_24 = (word32) __clz(x2_19);
		x4_21 = x2_19 << SEQ(x4_32_32_28, w3_24 - 0x0F) & 0x00;
		x1_72 = SEQ(x1_32_32_75, 0x3FA9 - w3_24 & 0x7FFF);
	}
	else
	{
		x4_21.u0 = 0x00;
		x1_72 = SEQ(x1_32_32_75, 0x00);
	}
	__bfm(x4_21, 0, 47);
	__bfm(x1_72, 16, 0x0E);
	*((char *) &q0_64_64->a0000->qw0000 + 1) = __bfm(x0_12, 1, 0);
	return;
}

// 00000000000019F8: Register Eq_112 __extenddftf2(Register word64 x4, Register Eq_112 d0, Register word64 q0_64_64, Register word64 sysreg3_3_4_4_0, Register word64 sysreg3_3_4_4_1)
// Called from:
//      read_floats
//      write_floats
//      converting_between_floats_l2
Eq_112 __extenddftf2(word64 x4, Eq_112 d0, word64 q0_64_64, word64 sysreg3_3_4_4_0, word64 sysreg3_3_4_4_1)
{
	word32 x4_32_32 = SLICE(x4, word32, 32);
	Eq_112 x3_83;
	Eq_112 x4_15;
	__mrs(sysreg3_3_4_4_0);
	Eq_112 x1_7 = __ubfm(d0, 52, 52);
	Eq_112 x5_28 = __ubfm(d0, 0, 0);
	int64 x3_11 = (word64) x1_7 + 1 & 0x00;
	word32 x0_32_32_26 = SLICE(d0, word32, 32);
	word32 w1_74 = (word32) x1_7;
	ui32 w5_49 = (word32) x5_28;
	word32 x3_32_32_84 = SLICE(x3_11, word32, 32);
	if (x3_11 > 0x01)
	{
		x4_15 = x5_28 >> 4 & 0x00;
		x5_28 <<= 60;
		x3_83 = SEQ(x3_32_32_84, w1_74 + 0x3C00);
	}
	else if (x1_7 != 0x00)
	{
		if (x5_28 != 0x00)
		{
			__bfm(x5_28 >> 4, 0, 47);
			SEQ(q0_64_64, x5_28 << 60)[1].qw0000 = __bfm(d0 >> 63, 1, 0);
			word32 x0_32_32_59 = SLICE(x5_28 << 60, word32, 32);
			if ((w5_49 & 0x00) != 0x00)
				return x5_28 << 60;
			__sfp_handle_exceptions(SEQ(x0_32_32_59, 0x01), sysreg3_3_4_4_1);
			return x5_28 << 60;
		}
		x4_15.u0 = 0x00;
		x3_83 = SEQ(x3_32_32_84, 0x7FFF);
	}
	else if (x5_28 != 0x00)
	{
		uint64 x4_25;
		int64 x3_16 = __clz(x5_28);
		int32 w3_17 = (word32) x3_16;
		word32 x3_32_32_88 = SLICE(x3_16, word32, 32);
		if (w3_17 > 0x0E)
		{
			x4_25 = x5_28 << SEQ(x4_32_32, w3_17 - 0x0F);
			x5_28.u0 = 0x00;
		}
		else
		{
			x4_25 = x5_28 >> SEQ(x4_32_32, 0x0F - w3_17);
			x5_28 <<= SEQ(x0_32_32_26, w3_17 + 0x31);
		}
		x4_15 = x4_25 & 0x00;
		x3_83 = SEQ(x3_32_32_88, 0x3C0C - w3_17 & 0x7FFF);
	}
	else
	{
		x4_15.u0 = 0x00;
		x3_83 = SEQ(x3_32_32_84, 0x00);
	}
	__bfm(x4_15, 0, 47);
	__bfm(x3_83, 16, 0x0E);
	SEQ(q0_64_64, x5_28)[1].qw0000 = __bfm(d0 >> 63, 1, 0);
	return x5_28;
}

// 0000000000001B10: void __trunctfsf2()
// Called from:
//      converting_between_floats_f2
void __trunctfsf2()
{
}

// 0000000000001E28: void __trunctfdf2()
// Called from:
//      read_floats
//      converting_between_floats_d2
void __trunctfdf2()
{
}

// 0000000000002198: void __sfp_handle_exceptions(Register word64 x0, Register word64 sysreg3_3_4_4_1)
// Called from:
//      __extendsftf2
//      __extenddftf2
void __sfp_handle_exceptions(word64 x0, word64 sysreg3_3_4_4_1)
{
	ui32 w0 = (word32) x0;
	if ((w0 & 0x01) != 0x00)
		__mrs(sysreg3_3_4_4_1);
	if ((w0 & 0x02) != 0x00)
		__mrs(sysreg3_3_4_4_1);
	if ((w0 & 0x04) != 0x00)
		__mrs(sysreg3_3_4_4_1);
	if ((w0 & 0x08) != 0x00)
		__mrs(sysreg3_3_4_4_1);
	if ((w0 & 0x10) != 0x00)
		__mrs(sysreg3_3_4_4_1);
}

// 0000000000002208: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
void __libc_csu_init(word32 w0, word64 x1, word64 x2, word64 x24)
{
	word32 x24_32_32_104 = SLICE(x24, word32, 32);
	int64 x20_26 = 77232 - 77224;
	<anonymous> * x21_24[] = g_a12DA8;
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

// 0000000000002280: void __libc_csu_fini()
void __libc_csu_fini()
{
}

