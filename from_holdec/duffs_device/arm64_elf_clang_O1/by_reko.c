// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 00000000004008FC: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 0000000000400460: Register word64 _init(Register out ptr64 x30Out)
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

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

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

// 0000000000400640: Register ui64 copy1_four_times(Register (ptr64 Eq_86) x0, Register (ptr64 word16) x1, Register int32 w2, Register word32 x9_32_32)
// Called from:
//      main
ui64 copy1_four_times(union Eq_86 * x0, word16 * x1, int32 w2, word32 x9_32_32)
{
	up32 w9_13 = w2 - ((w2 < 0x00 ? w2 + 0x03 : w2) & ~0x03);
	int32 w8_8 = w2 < 0x03 ? w2 + 0x06 : w2 + 0x03;
	ui64 x9_19 = SEQ(x9_32_32, w9_13);
	if (w9_13 <= 0x03)
	{
		word64 x9_21 = g_a400918[x9_19 * 8];
		word32 x9_32_32_90 = SLICE(x9_21, word32, 32);
		int32 w8_22 = w8_8 >> 2;
		switch ((word32) x9_21)
		{
		case 0x00:
l000000000040067C:
			*x0 = (union Eq_86 *) (word16) (word32) *x1;
			++x1;
			x0 = (union Eq_86 *) ((char *) x0 + 2);
			goto l0000000000400684;
		case 0x01:
l0000000000400694:
			word32 w9_53 = (word32) *x1;
			*x0 = (union Eq_86 *) (word16) w9_53;
			++x1;
			--w8_22;
			x0 = (union Eq_86 *) ((char *) x0 + 2);
			x9_19 = SEQ(x9_32_32_90, w9_53);
			if (w8_22 > 0x00)
				goto l000000000040067C;
			break;
		case 0x02:
l000000000040068C:
			*x0 = (union Eq_86 *) (word16) (word32) *x1;
			++x1;
			x0 = (union Eq_86 *) ((char *) x0 + 2);
			goto l0000000000400694;
		case 0x03:
l0000000000400684:
			*x0 = (union Eq_86 *) (word16) (word32) *x1;
			++x1;
			x0 = (union Eq_86 *) ((char *) x0 + 2);
			goto l000000000040068C;
		}
	}
	return x9_19;
}

// 00000000004006A8: Register ptr64 copy1_eight_times(Register (ptr64 Eq_86) x0, Register (ptr64 word16) x1, Register int32 w2, Register word32 x9_32_32)
// Called from:
//      main
ptr64 copy1_eight_times(union Eq_86 * x0, word16 * x1, int32 w2, word32 x9_32_32)
{
	up32 w9_13 = w2 - ((w2 < 0x00 ? w2 + 0x07 : w2) & ~0x07);
	int32 w8_8 = w2 < 0x07 ? w2 + 0x0E : w2 + 0x07;
	ui64 x9_19 = SEQ(x9_32_32, w9_13);
	if (w9_13 <= 0x07)
	{
		int32 w8_22 = w8_8 >> 3;
		switch (g_a400938[x9_19])
		{
		case 0x00:
l00000000004006E4:
			*x0 = (union Eq_86 *) (word16) (word32) *x1;
			++x1;
			x0 = (union Eq_86 *) ((char *) x0 + 2);
			goto l00000000004006EC;
		case 0x01:
l000000000040071C:
			*x0 = (union Eq_86 *) (word16) (word32) *x1;
			x10 = 4196664;
			++x1;
			--w8_22;
			x0 = (union Eq_86 *) ((char *) x0 + 2);
			if (w8_22 > 0x00)
				goto l00000000004006E4;
			break;
		case 0x02:
l0000000000400714:
			*x0 = (union Eq_86 *) (word16) (word32) *x1;
			++x1;
			x0 = (union Eq_86 *) ((char *) x0 + 2);
			goto l000000000040071C;
		case 0x03:
l000000000040070C:
			*x0 = (union Eq_86 *) (word16) (word32) *x1;
			++x1;
			x0 = (union Eq_86 *) ((char *) x0 + 2);
			goto l0000000000400714;
		case 0x04:
l0000000000400704:
			*x0 = (union Eq_86 *) (word16) (word32) *x1;
			++x1;
			x0 = (union Eq_86 *) ((char *) x0 + 2);
			goto l000000000040070C;
		case 0x05:
l00000000004006FC:
			*x0 = (union Eq_86 *) (word16) (word32) *x1;
			++x1;
			x0 = (union Eq_86 *) ((char *) x0 + 2);
			goto l0000000000400704;
		case 0x06:
l00000000004006F4:
			*x0 = (union Eq_86 *) (word16) (word32) *x1;
			++x1;
			x0 = (union Eq_86 *) ((char *) x0 + 2);
			goto l00000000004006FC;
		case 0x07:
l00000000004006EC:
			*x0 = (union Eq_86 *) (word16) (word32) *x1;
			++x1;
			x0 = (union Eq_86 *) ((char *) x0 + 2);
			goto l00000000004006F4;
		}
	}
	return x10;
}

// 0000000000400730: void copy2_four_times(Register (ptr64 Eq_86) x0, Register (ptr64 word16) x1, Register int32 w2)
// Called from:
//      main
void copy2_four_times(union Eq_86 * x0, word16 * x1, int32 w2)
{
	if (w2 >= 0x01)
	{
		word32 w8_47;
		do
		{
			if (w8_47 != 0x01)
			{
				if (w8_47 == 0x02)
					goto l0000000000400768;
				if (w8_47 == 0x03)
					goto l0000000000400770;
				*x0 = (union Eq_86 *) (word16) (word32) *x1;
				++x1;
				x0 = (union Eq_86 *) ((char *) x0 + 2);
			}
			*x0 = (union Eq_86 *) (word16) (word32) *x1;
			++x1;
			x0 = (union Eq_86 *) ((char *) x0 + 2);
l0000000000400768:
			*x0 = (union Eq_86 *) (word16) (word32) *x1;
			++x1;
			x0 = (union Eq_86 *) ((char *) x0 + 2);
l0000000000400770:
			*x0 = (union Eq_86 *) (word16) (word32) *x1;
			++x1;
			w8_47 += 0x04;
			x0 = (union Eq_86 *) ((char *) x0 + 2);
		} while (w8_47 != 0x04);
	}
}

// 0000000000400788: Register ptr64 copy2_eight_times(Register (ptr64 Eq_86) x0, Register (ptr64 word16) x1, Register int32 w2, Register word64 x10)
// Called from:
//      main
ptr64 copy2_eight_times(union Eq_86 * x0, word16 * x1, int32 w2, word64 x10)
{
	word32 x10_32_32 = SLICE(x10, word32, 32);
	if (w2 >= 0x01)
	{
		word32 w8_10;
		x9 = 0x00400978;
		do
		{
			up32 w10_11 = w8_10 - 0x01;
			ui64 x10_63 = SEQ(x10_32_32, w10_11);
			if (w10_11 <= 0x06)
			{
				<anonymous> * x10_64 = *((char *) g_a400978 + x10_63 * 8);
				word32 w8_70;
				ptr64 x9_71;
				word64 x10_72;
				word64 x1_73;
				word64 x0_74;
				x10_64();
				word32 w10_117 = (word32) x10_72;
				return x9_71;
			}
			*x0 = (union Eq_86 *) (word16) (word32) *x1;
			struct Eq_395 * x1_18 = x1 + 1;
			struct Eq_398 * x0_21 = (char *) x0 + 2;
			x0_21->w0000 = (word16) (word32) x1_18->w0000;
			x0_21->w0002 = (word16) (word32) x1_18->w0002;
			x0_21->w0004 = (word16) (word32) x1_18->w0004;
			x0_21->w0006 = (word16) (word32) x1_18->w0006;
			x0_21->w0008 = (word16) (word32) x1_18->w0008;
			x0_21->w000A = (word16) (word32) x1_18->w000A;
			x0_21->w000C = (word16) (word32) x1_18->w000C;
			x1 = (word16 *) (&x1_18->w000C + 1);
			w8_10 += 0x08;
			x0 = (union Eq_86 *) (&x0_21->w000C + 1);
		} while (w8_10 != 0x08);
	}
	return x9;
}

// 0000000000400804: void main(Register word32 x0_32_32, Register word32 x9_32_32, Register word64 x19, Register word64 x29, Register word64 x30)
void main(word32 x0_32_32, word32 x9_32_32, word64 x19, word64 x29, word64 x30)
{
	fn00000000004004A0();
	fn00000000004004A0();
	word16 * x0_20 = SEQ(x0_32_32, 200);
	union Eq_86 * x0_27 = SEQ(x0_32_32, 200);
	word64 x10_47 = copy1_eight_times(x0_27, x0_20, 100, SLICE(copy1_four_times(x0_27, x0_20, 100, x9_32_32), word32, 32));
	copy2_four_times(x0_27, x0_20, 100);
	word32 x9_32_32_92 = SLICE(copy2_eight_times(x0_27, x0_20, 100, x10_47), word32, 32);
	g_ptr411020();
}

// 0000000000400880: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
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

// 00000000004008F8: void __libc_csu_fini()
void __libc_csu_fini()
{
}

