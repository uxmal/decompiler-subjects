// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 0000000000000CA4: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 0000000000000698: Register word64 _init(Register out ptr64 x30Out)
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

// 00000000000006D0: void fn00000000000006D0()
// Called from:
//      __do_global_dtors_aux
void fn00000000000006D0()
{
	g_ptr11000();
}

// 00000000000006E0: void fn00000000000006E0()
// Called from:
//      main
void fn00000000000006E0()
{
	g_ptr11008();
}

// 00000000000006F0: void fn00000000000006F0()
// Called from:
//      _start
void fn00000000000006F0()
{
	g_ptr11010();
}

// 0000000000000710: void fn0000000000000710()
// Called from:
//      _start
void fn0000000000000710()
{
	g_ptr11020();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 0000000000000730: void main(Register word64 x19, Register word64 x30)
void main(word64 x19, word64 x30)
{
	fn00000000000006E0();
	fn00000000000006E0();
	copy1_four_times((word16 *) 200, (int16 *) 200, 100);
	copy1_eight_times((struct Eq_35 *) 200, (int16 *) 200, 100);
	copy2_four_times((struct Eq_44 *) 200, (int16 *) 200, 100);
	copy2_eight_times(200, (int16 *) 200, 100);
	g_ptr11028();
}

// 00000000000007A8: void _start()
void _start()
{
	fn00000000000006F0();
	fn0000000000000710();
	call_weak_fn();
}

// 00000000000007E0: void call_weak_fn()
// Called from:
//      _init
//      _start
void call_weak_fn()
{
	if (g_qw10FC0 == 0x00)
		return;
	word64 x17_12;
	g_ptr11018();
}

// 00000000000007F8: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (0x00011047 - 69696 <= 0x0E)
		return;
	<anonymous> * x1_13 = g_ptr10FB0;
	if (x1_13 == null)
		return;
	x1_13();
}

// 0000000000000830: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 69696 - 69696;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_13 = g_ptr10FE0;
	if (x2_13 == null)
		return;
	word64 x2_17;
	x2_13();
}

// 0000000000000870: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b11040 == 0x00)
	{
		if (g_qw10FB8 != 0x00)
			fn00000000000006D0();
		deregister_tm_clones();
		g_b11040 = 0x01;
	}
}

// 00000000000008B8: void frame_dummy(Register word64 x29, Register word64 x30)
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

// 00000000000008F0: void copy1_four_times(Register (ptr64 word16) x0, Register (ptr64 int16) x1, Register int32 w2)
// Called from:
//      main
void copy1_four_times(word16 * x0, int16 * x1, int32 w2)
{
	int32 w4_9 = 0x00 - w2;
	up32 w2_14 = w4_9 < 0x00 ? w2 & 0x03 : -(w4_9 & 0x03);
	int32 w3_16 = (w2 < 0x03 ? w2 + 0x06 : w2 + 0x03) >> 2;
	if (w2_14 > 0x03)
		return;
	word16 * x2_24 = 0x0938 + (int64) ((int8) ((word32) (&g_t0CB8)[(uint64) w2_14]));
	word32 w4_26 = (word32) 0x0938;
	switch ((word32) x2_24)
	{
	case 0x00:
l0000000000000944:
		*x0 = (word16) w4_26;
		w4_26 = (word32) *x1;
		goto l000000000000094C;
	case 0x01:
l0000000000000940:
		++x1;
		goto l0000000000000944;
	case 0x02:
l000000000000094C:
		*x2_24 = (word16) w4_26;
		struct Eq_193 * x1_37 = x1 + 1;
		word16 * x0_34 = x2_24 + 1;
		*x0_34 = (word16) (word32) x1_37->w0000;
		--w3_16;
		if (w3_16 <= 0x00)
			return;
		*x0_34 = (word16) (word32) x1_37->w0002;
		x0 = x0_34 + 2;
		x1 = (int16 *) (&x1_37->w0002 + 1);
		goto l0000000000000938;
	case 0x03:
l0000000000000938:
		w4_26 = (word32) *x1;
		x2_24 = x0 + 1;
		goto l0000000000000940;
	}
}

// 0000000000000990: void copy1_eight_times(Register (ptr64 Eq_35) x0, Register (ptr64 int16) x1, Register int32 w2)
// Called from:
//      main
void copy1_eight_times(struct Eq_35 * x0, int16 * x1, int32 w2)
{
	int32 w4_9 = 0x00 - w2;
	up32 w2_14 = w4_9 < 0x00 ? w2 & 0x07 : -(w4_9 & 0x07);
	int32 w3_100 = (w2 < 0x07 ? w2 + 0x0E : w2 + 0x07) >> 3;
	if (w2_14 > 0x07)
		return;
	word16 * x2_24 = 2520 + (int64) ((int8) ((word32) (&g_t0CBC)[(uint64) w2_14]));
	word32 w4_26 = (word32) 2520;
	word32 w2_25 = (word32) x2_24;
	switch (w2_25)
	{
	case 0x00:
l00000000000009F4:
		x0->w0000 = (word16) w4_26;
		w4_26 = (word32) *x1;
		goto l00000000000009FC;
	case 0x01:
l00000000000009F0:
		++x1;
		goto l00000000000009F4;
	case 0x02:
	case 0x05:
l00000000000009FC:
		x0 = (struct Eq_35 *) (x2_24 + 1);
		goto l0000000000000A00;
	case 0x03:
l0000000000000A00:
		*x2_24 = (word16) w4_26;
		struct Eq_284 * x1_38 = x1 + 1;
		x0->w0000 = (word16) (word32) x1_38->w0000;
		struct Eq_295 * x4_48 = x0 + 1;
		x4_48->w0000 = (word16) (word32) x1_38->w0002;
		x4_48->w0002 = (word16) (word32) x1_38->w0004;
		x4_48->w0004 = (word16) (word32) x1_38->w0006;
		--w3_100;
		if (w3_100 <= 0x00)
			return;
		x4_48->w0004 = (word16) (word32) x1_38->w0008;
		x0 = (struct Eq_35 *) (&x4_48->w0004 + 2);
		x1 = (int16 *) (&x1_38->w0008 + 1);
		goto l00000000000009D8;
	case 0x04:
l00000000000009E4:
		x0->wFFFFFFFC = (word16) w2_25;
		w4_26 = (word32) *x1;
		x2_24 = (word16 *) (x0 + 1);
		goto l00000000000009F0;
	case 0x06:
l00000000000009DC:
		++x0;
		++x1;
		goto l00000000000009E4;
	case 0x07:
l00000000000009D8:
		w2_25 = (word32) *x1;
		goto l00000000000009DC;
	}
}

// 0000000000000A80: void copy2_four_times(Register (ptr64 Eq_44) x0, Register (ptr64 int16) x1, Register int32 w2)
// Called from:
//      main
void copy2_four_times(struct Eq_44 * x0, int16 * x1, int32 w2)
{
	if (w2 > 0x00)
	{
		word32 w2_41 = 0x04 - w2;
		do
		{
			if (w2_41 != 0x02)
			{
				if (w2_41 == 0x03)
				{
					x0->w0000 = (word16) (word32) *x1;
					w2_41 += 0x04;
					++x1;
					++x0;
					if (w2_41 == 0x04)
						return;
					continue;
				}
				if (w2_41 != 0x01)
				{
					++x0;
					x0->wFFFFFFFC = (word16) (word32) *x1;
					++x1;
				}
				++x0;
				x0->wFFFFFFFC = (word16) (word32) *x1;
				++x1;
			}
			x0->w0000 = (word16) (word32) *x1;
			int16 * x4_33 = x1 + 1;
			word16 * x3_38 = x0 + 1;
			*x3_38 = (word16) (word32) *x4_33;
			w2_41 += 0x04;
			x1 = x4_33 + 1;
			x0 = (struct Eq_44 *) (x3_38 + 1);
		} while (w2_41 != 0x04);
	}
}

// 0000000000000B28: void copy2_eight_times(Register ptr64 x0, Register (ptr64 int16) x1, Register int32 w2)
// Called from:
//      main
void copy2_eight_times(ptr64 x0, int16 * x1, int32 w2)
{
	if (w2 > 0x00)
	{
		word32 w2_11 = 0x08 - w2;
		do
		{
			up32 w3_12 = w2_11 - 0x01;
			if (w3_12 <= 0x06)
			{
				<anonymous> * x3_66 = 0x0BF0 + (int64) ((int8) ((word32) (&g_t0CC4)[(uint64) w3_12]));
				word64 x3_71;
				word64 x6_72;
				word32 w5_73;
				word64 x1_75;
				word64 x0_76;
				x3_66();
				return;
			}
			struct Eq_447 * x0_20 = x0 + 0x02;
			x0_20->wFFFFFFFC = (word16) (word32) *x1;
			struct Eq_458 * x1_21 = x1 + 1;
			x0_20->wFFFFFFFE = (word16) (word32) x1_21->w0000;
			x0_20->w0002 = (word16) (word32) x1_21->w0002;
			x0_20->w0004 = (word16) (word32) x1_21->w0004;
			x0_20->w0006 = (word16) (word32) x1_21->w0006;
			x0_20->w0008 = (word16) (word32) x1_21->w0008;
			x0_20->w000A = (word16) (word32) x1_21->w000A;
			x0_20->w000C = (word16) (word32) x1_21->w000C;
			w2_11 += 0x08;
			x0 = &x0_20->w000C + 1;
			x1 = (int16 *) (&x1_21->w000C + 1);
		} while (w2_11 != 0x08);
	}
}

// 0000000000000C28: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
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

// 0000000000000CA0: void __libc_csu_fini()
void __libc_csu_fini()
{
}

