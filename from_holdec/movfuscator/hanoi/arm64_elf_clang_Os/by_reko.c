// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 0000000000400B24: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 0000000000400598: Register word64 _init(Register out ptr64 x30Out)
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

// 00000000004005D0: void fn00000000004005D0()
// Called from:
//      main
void fn00000000004005D0()
{
	g_ptr411000();
}

// 00000000004005E0: void fn00000000004005E0()
// Called from:
//      _start
void fn00000000004005E0()
{
	g_ptr411008();
}

// 00000000004005F0: void fn00000000004005F0()
// Called from:
//      new_tower
//      main
void fn00000000004005F0()
{
	g_ptr411010();
}

// 0000000000400610: void fn0000000000400610()
// Called from:
//      _start
void fn0000000000400610()
{
	g_ptr411020();
}

// 0000000000400620: void fn0000000000400620()
// Called from:
//      main
void fn0000000000400620()
{
	g_ptr411028();
}

// 0000000000400640: void fn0000000000400640()
// Called from:
//      add_disk
void fn0000000000400640()
{
	g_ptr411038();
}

// 0000000000400650: void fn0000000000400650()
// Called from:
//      text
void fn0000000000400650()
{
	g_ptr411040();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 0000000000400660: void _start()
void _start()
{
	fn00000000004005E0();
	fn0000000000400610();
}

// 00000000004006A8: void call_weak_fn()
// Called from:
//      _init
void call_weak_fn()
{
	if (g_qw410FE0 == 0x00)
		return;
	word64 x17_12;
	g_ptr411018();
}

// 00000000004006C0: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (0x0041105F - 4264024 <= 0x0E)
		return;
	<anonymous> * x1_12 = g_ptr4006F8;
	if (x1_12 == null)
		return;
	x1_12();
}

// 0000000000400700: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 4264024 - 4264024;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_12 = g_ptr400738;
	if (x2_12 == null)
		return;
	word64 x2_16;
	x2_12();
}

// 0000000000400740: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b411060 == 0x00)
	{
		deregister_tm_clones();
		g_b411060 = 0x01;
	}
}

// 0000000000400770: void frame_dummy(Register word64 x29, Register word64 x30)
void frame_dummy(word64 x29, word64 x30)
{
	if (g_qw410DF0 != 0x00)
	{
		<anonymous> * x1_7 = g_ptr4007A8;
		if (x1_7 != null)
		{
			x1_7();
			register_tm_clones();
			return;
		}
	}
	register_tm_clones();
}

// 00000000004007B0: void new_tower(Register word64 x0)
void new_tower(word64 x0)
{
	word32 x0_32_32_16 = SLICE(x0, word32, 32);
	__sbfiz(x0, 2);
	fn00000000004005F0();
	word64 * x0_17 = SEQ(x0_32_32_16, 0x01);
	*x0_17 = x0_17 + 2;
}

// 00000000004007D8: Register word64 text(Register word32 w0, Register word32 w1, Register word32 w2)
// Called from:
//      add_disk
//      remove_disk
//      move
//      main
word64 text(word32 w0, word32 w1, word32 w2)
{
	word32 w8_23 = g_dw411080;
	__bfm(w1, 31, 30);
	fn0000000000400650();
	word32 w20_26 = w2;
	word64 x1_46 = SEQ(x1_32_32, 0x01 - w0 + w8_23);
	if (w2 != 0x00)
	{
		do
		{
			fn0000000000400650();
			x1_46 = x3;
			--w20_26;
		} while (w20_26 != 0x00);
	}
	return x1_46;
}

// 0000000000400850: Register word64 add_disk(Register word32 w0, Register word32 w1, Register out ptr64 x21Out)
// Called from:
//      move
//      main
word64 add_disk(word32 w0, word32 w1, ptr64 & x21Out)
{
	Eq_151 x10_14 = (&g_t411068)[(int64) w0 / 8];
	int64 x11_20 = (int64) (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x10_14.a0000[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0];
	word32 x12_21[] = (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x10_14.a0000[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0];
	(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x10_14.a0000[1].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0] = (Eq_151) ((word32) x11_20 + 0x01);
	x12_21[x11_20] = w1;
	word32 w1_54 = (word32) text((&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x10_14.a0000[1].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0], w0, w1);
	fn0000000000400640();
	struct Eq_185 * sp_29 = (struct Eq_185 *) <invalid>;
	word32 w0_53 = g_dw411058;
	word64 x29_46 = sp_29->qw0000;
	word64 x30_48 = sp_29->qw0008;
	word64 x0_59;
	ptr64 x21_70;
	g_ptr411030();
	x21Out = x21_70;
	return x0_59;
}

// 00000000004008B4: void remove_disk(Register word32 w0)
void remove_disk(word32 w0)
{
	Eq_151 x9_20 = (&g_t411068)[(int64) w0 / 8];
	word32 w0_24 = (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x9_20.a0000[1].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0];
	word32 x10_25[] = (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x9_20.a0000[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0];
	(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&x9_20.a0000[1].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0] = (Eq_151) (w0_24 - 0x01);
	text(w0_24, w0, x10_25[(int64) (w0_24 - 0x01) / 4]);
}

// 0000000000400908: Register word64 move(Register word64 x0, Register out ptr64 x20Out, Register out (ptr64 Eq_185) x25Out)
// Called from:
//      move
//      main
word64 move(word64 x0, ptr64 & x20Out, struct Eq_185 & x25Out)
{
	word32 w0 = (word32) x0;
	if (w0 != 0x00)
	{
		do
		{
			word32 w20_87 = (word32) x20_75;
			struct Eq_248 * x25_70[];
			word64 x20_75;
			word32 w19_109 = (word32) move(x0, out x20_75, out x25_70);
			struct Eq_248 * x8_89 = x25_70[(int64) w20_87 / 8].ptr0000;
			word32 w0_92 = x8_89->dw0008;
			word32 x9_93[] = x8_89->ptr0000;
			x8_89->dw0008 = w0_92 - 0x01;
			word32 w24_96 = x9_93[(int64) (w0_92 - 0x01) / 4];
			text(w0_92, w20_87, w24_96);
			word64 x21_121;
			add_disk(w19_109, w24_96, out x21_121);
		} while ((word32) x21_121 != 0x00);
	}
	x20Out = x21;
	x25Out = (struct Eq_185 *) <invalid>;
	return x20;
}

// 00000000004009B8: void main(Register int32 w0, Register (ptr64 Eq_281) x1)
void main(int32 w0, struct Eq_281 * x1)
{
	word64 x19_46;
	fn0000000000400620();
	word32 x0_32_32_158 = SLICE(0x00400B4A, word32, 32);
	word32 x19_32_32_47 = SLICE(x1, word32, 32);
	if (w0 >= 0x02)
	{
		word64 x0_38 = x1->qw0008;
		fn00000000004005D0();
		int32 w0_41 = (word32) x0_38;
		x0_32_32_158 = SLICE(x0_38, word32, 32);
		x19_46 = SEQ(x19_32_32_47, w0_41);
		if (w0_41 > 0x00)
		{
l0000000000400A00:
			__sbfiz(x19_46, 2);
			word32 w19_57 = (word32) x19_46;
			g_dw411080 = w19_57;
			int64 x22_53;
			for (x22_53 = 0x00; x22_53 != 0x18; x22_53 += 0x08)
			{
				fn00000000004005F0();
				word64 * x0_65 = SEQ(x0_32_32_158, 0x01);
				4264040 + x22_53 = x0_65;
				*x0_65 = x0_65 + 2;
			}
			word64 x0_101;
			if (w19_57 != 0x00)
			{
				do
				{
					struct Eq_339 * x21_88;
					word32 x0_32_32_102 = SLICE(add_disk(0x00, w19_57, out x21_88), word32, 32);
					--w19_57;
				} while (w19_57 != 0x00);
				x0_101 = SEQ(x0_32_32_102, x21_88->dw0080);
			}
			else
				x0_101 = SEQ(x0_32_32_158, 0x00);
			word64 x20_237;
			word64 x25_238;
			move(x0_101, out x20_237, out x25_238);
			text(0x01, 0x00, 0x01);
			return;
		}
	}
	x19_46 = SEQ(x19_32_32_47, 0x08);
	goto l0000000000400A00;
}

// 0000000000400AA8: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
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

// 0000000000400B20: void __libc_csu_fini()
void __libc_csu_fini()
{
}

