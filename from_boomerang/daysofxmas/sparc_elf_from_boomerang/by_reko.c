// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 00010914: void _fini(Register word32 o3, Register word32 o4, Register word32 o5, Register ptr32 o7)
void _fini(word32 o3, word32 o4, word32 o5, ptr32 o7)
{
	__do_global_dtors_aux(o3, o4, o5, o7);
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 000108F8: Register ptr32 _init(Register word32 o1, Register word32 o2, Register word32 o3, Register ptr32 o4, Register ptr32 o5, Register ptr32 o7, Register out ptr32 o5Out, Register out ptr32 o7Out, Register out ptr32 l0Out)
// Called from:
//      _start
ptr32 _init(word32 o1, word32 o2, word32 o3, ptr32 o4, ptr32 o5, ptr32 o7, ptr32 & o5Out, ptr32 & o7Out, ptr32 & l0Out)
{
	frame_dummy(o1, o2, o3, o4, o5, o7);
	ptr32 i4_40;
	ptr32 i5_41;
	ptr32 i7_43;
	ptr32 l0_44 = __do_global_ctors_aux(o2, o3, o4, o5, o7, out i4_40, out i5_41, out i7_43);
	o5Out = i5_41;
	o7Out = i7_43;
	l0Out = l0_44;
	return i4_40;
}

// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_plt.h"

// 00020B7C: void atexit()
void atexit()
{
}

// 00020B88: void exit()
void exit()
{
}

// 00020B94: void _exit()
void _exit()
{
}

// 00020BC4: void __flsbuf()
void __flsbuf()
{
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 000104D8: void _start(Register (ptr32 Eq_2) g1, Register word32 o1, Register word32 o2, Register word32 o3, Register ptr32 o4, Register ptr32 o5, Register ptr32 o7)
void _start(void (* g1)(), word32 o1, word32 o2, word32 o3, ptr32 o4, ptr32 o5, ptr32 o7)
{
	if (g1 == null)
	{
		atexit(&g_t10914);
		Eq_16 l0_30;
		ptr32 o5_37;
		ptr32 o7_38;
		ptr32 o4_36 = _init(o1, o2, o3, o4, o5, o7, out o5_37, out o7_38, out l0_30);
		struct Eq_35 * o2_48 = fp + 0x44 + ((l0_30 << 0x02) + 0x04);
		g_ptr20CD8 = o2_48;
		word32 o4_75;
		word32 o5_76;
		word32 o7_77;
		word32 i0_78;
		word32 i1_79;
		word32 i2_80;
		word32 i4_81;
		word32 i5_82;
		word32 i7_83;
		exit(main(l0_30, fp + 0x44, o2_48, o4_36, o5_37, o7_38, out o4_75, out o5_76, out o7_77, out i0_78, out i1_79, out i2_80, out i4_81, out i5_82, out i7_83));
	}
	else
		atexit(g1);
}

// 0001054C: Register word32 fn0001054C(Register ptr32 o7, Register word32 l7)
// Called from:
//      __do_global_dtors_aux
//      frame_dummy
word32 fn0001054C(ptr32 o7, word32 l7)
{
	return o7 + l7;
}

// 00010554: void __do_global_dtors_aux(Register word32 o3, Register word32 o4, Register word32 o5, Register ptr32 o7)
// Called from:
//      _fini
void __do_global_dtors_aux(word32 o3, word32 o4, word32 o5, ptr32 o7)
{
	struct Eq_96 * l7_23 = fn0001054C(o7, 0x000105C4);
	ui32 l1_20 = 0x00;
	word32 o2_124 = (word32) *l7_23->ptr000C;
	if (o2_124 != 0x00)
		return;
	word32 ** o0_34 = l7_23->ptr0010;
	word32 o1_36 = **o0_34;
	if (o1_36 != 0x00)
	{
		word32 ** l0_41 = o0_34;
		word32 * o0_43 = (char *) *o0_34 + 4;
		while (true)
		{
			*l0_41 = o0_43;
			fn80A26000();
			word32 * o0_75 = *l0_41;
			o1_36 = *o0_75;
			if (o1_36 == 0x00)
				break;
			o0_43 = o0_75 + 1;
		}
	}
	if (l7_23->dw0024 == 0x00)
		l7_23[(l1_20 | 0x0C) / 40].a0000[0] = (byte *) 0x01;
	else
	{
		word32 l0_149;
		__deregister_frame_info();
	}
}

// 00010604: void call___do_global_dtors_aux()
void call___do_global_dtors_aux()
{
}

// 00010614: void frame_dummy(Register word32 o1, Register word32 o2, Register word32 o3, Register ptr32 o4, Register ptr32 o5, Register ptr32 o7)
// Called from:
//      _init
void frame_dummy(word32 o1, word32 o2, word32 o3, ptr32 o4, ptr32 o5, ptr32 o7)
{
	struct Eq_96 * l7_23 = fn0001054C(o7, 0x00010504);
	if (l7_23->dw0020 == 0x00)
	{
		word32 * i0_36 = l7_23->ptr0014;
		if (*i0_36 == 0x00 || l7_23->dw001C == 0x00)
			return;
		_Jv_RegisterClasses();
	}
	else
		__register_frame_info();
}

// 00010698: void call_frame_dummy()
void call_frame_dummy()
{
}

// 000106A8: Register Eq_16 main(Register Eq_16 o0, Register Eq_16 o1, Register (ptr32 Eq_35) o2, Register ptr32 o4, Register ptr32 o5, Register ptr32 o7, Register out ptr32 o4Out, Register out ptr32 o5Out, Register out ptr32 o7Out, Register out Eq_16 i0Out, Register out Eq_16 i1Out, Register out (ptr32 Eq_35) i2Out, Register out ptr32 i4Out, Register out ptr32 i5Out, Register out ptr32 i7Out)
// Called from:
//      _start
//      main
Eq_16 main(Eq_16 o0, Eq_16 o1, struct Eq_35 * o2, ptr32 o4, ptr32 o5, ptr32 o7, ptr32 & o4Out, ptr32 & o5Out, ptr32 & o7Out, union Eq_16 & i0Out, union Eq_16 & i1Out, struct Eq_35 & i2Out, ptr32 & i4Out, ptr32 & i5Out, ptr32 & i7Out)
{
	Eq_16 i0_128;
	struct Eq_35 * o2_150;
	Eq_16 o1_152;
	Eq_16 o0_151;
	Eq_16 i0_207 = o0;
	Eq_16 i1_130 = o1;
	struct Eq_35 * i2_132 = o2;
	ptr32 i4_13 = o4;
	ptr32 i5_138 = o5;
	ptr32 i7_141 = o7;
	if (o0 > 0x01)
	{
		bool v25_359;
		if (o0 > 0x02)
			v25_359 = o0 - o1 < 0x00;
		else
		{
			word32 i1_164;
			word32 i2_166;
			ptr32 o4_171;
			ptr32 o5_173;
			ptr32 o7_176;
			word32 i2_189;
			ptr32 o4_194;
			ptr32 o5_196;
			ptr32 o7_199;
			word32 i0_417;
			word32 i4_418;
			word32 i5_419;
			word32 i7_420;
			word32 i0_421;
			word32 i1_422;
			word32 i4_423;
			word32 i5_424;
			word32 i7_425;
			word32 i4_426;
			word32 i5_427;
			word32 i7_428;
			main(~0x4E, ~0x0C, (word32) main(~0x56, 0x01 - i1_164, (word32) main(~0x55, 0x00, &o2->b0000 + 1, o4, o5, o7, out o4_171, out o5_173, out o7_176, out i0_417, out i1_164, out i2_166, out i4_418, out i5_419, out i7_420) + i2_166, o4_171, o5_173, o7_176, out o4_194, out o5_196, out o7_199, out i0_421, out i1_422, out i2_189, out i4_423, out i5_424, out i7_425) + i2_189, o4_194, o5_196, o7_199, out o4, out o5, out o7, out i0_207, out i1_130, out i2_132, out i4_426, out i5_427, out i7_428);
			v25_359 = i0_207 - i1_130 < 0x00;
		}
		Eq_16 o1_261;
		if (!v25_359)
			o1_261 = (word32) i0_207.u0 - 27;
		else
		{
			Eq_16 o0_233 = (word32) i0_207.u0 + 1;
			word32 i0_244;
			word32 i1_429;
			word32 i4_430;
			word32 i5_431;
			word32 i7_432;
			main(o0_233, i1_130, i2_132, o4, o5, o7, out o4, out o5, out o7, out i0_244, out i1_429, out i2_132, out i4_430, out i5_431, out i7_432);
			o1_261 = i0_244 + ~0x1A;
		}
		word32 i0_274;
		if (main(~0x5D, o1_261, i2_132, o4, o5, o7, out o4, out o5, out o7, out i0_274, out i1_130, out i2_132, out i4_13, out i5_138, out i7_141) == 0x00)
		{
			i0_128.u0 = 0x10;
			goto l00010884;
		}
		if (i0_274 != 0x02)
		{
			i0_128.u0 = 0x10;
			goto l00010884;
		}
		if (i1_130 > 0x0C)
		{
			i0_128.u0 = 0x09;
			goto l00010884;
		}
		o1_152 = (word32) i1_130.u0 + 1;
		o2_150 = &g_t10930;
		o0_151.u0 = 0x02;
l00010718:
		word32 o4_433;
		word32 o5_434;
		word32 o7_435;
		word32 i0_436;
		i0_128 = main(o0_151, o1_152, o2_150, o4, o5, o7, out o4_433, out o5_434, out o7_435, out i0_436, out i1_130, out i2_132, out i4_13, out i5_138, out i7_141);
		goto l00010884;
	}
	if (o0 >= 0x00)
	{
		if (o0 > 0x00)
		{
			o2_150 = (struct Eq_35 *) (&g_t10930.b0000 + 16);
			o0_151.u0 = 0x02;
			o1_152.u0 = 0x02;
			goto l00010718;
		}
		Eq_16 o1_97 = (int32) o2->b0000;
		if (o1_97 == 0x2F)
		{
l000107D8:
			i0_128.u0 = 0x01;
			goto l00010884;
		}
		word32 i2_111;
		ptr32 o4_116;
		ptr32 o5_118;
		ptr32 o7_121;
		word32 i0_437;
		word32 i1_438;
		word32 i4_439;
		word32 i5_440;
		word32 i7_441;
		word32 o4_442;
		word32 o5_443;
		word32 o7_444;
		if (main(0x00, main(~0x3C, o1_97, &g_t10930.b0000 + 24, o4, o5, o7, out o4_116, out o5_118, out o7_121, out i0_437, out i1_438, out i2_111, out i4_439, out i5_440, out i7_441), i2_111 + 0x01, o4_116, o5_118, o7_121, out o4_442, out o5_443, out o7_444, out i0_128, out i1_130, out i2_132, out i4_13, out i5_138, out i7_141) != 0x00)
			goto l000107D8;
	}
	else
	{
		if (o0 < ~0x47)
		{
			o0_151 = o1;
			o1_152 = o0;
			o2_150 = &g_t10988;
			goto l00010718;
		}
		if (o0 >= ~0x31)
		{
			int32 o0_41 = (int32) o2->b0000;
			o2_150 = &o2->b0000 + 1;
			o0_151 = o0 - ~0x00 - ((o0_41 ^ 0x2F) > 0x00);
			o1_152 = o1;
			goto l00010718;
		}
		int32 o0_49 = (int32) o2->b0000;
		if (o1 - o0_49 != 0x00)
		{
			o2_150 = &o2->b0000 + 1;
			o1_152 = o1;
			o0_151.u0 = ~0x40;
			goto l00010718;
		}
		int32 o0_55 = g_dw20CF0;
		if (o0_55 >= ~0x00)
		{
			g_dw20CF0 = o0_55 + ~0x00;
			Eq_16 o1_84 = (word32) o2->b001F;
			byte * o0_85 = g_ptr20CF4;
			*o0_85 = (byte) o1_84;
			g_ptr20CF4 = o0_85 + 1;
			i0_128 = o1_84;
		}
		else
		{
			g_dw20CF0 = o0_55 + ~0x00;
			Eq_16 o0_66;
			__flsbuf();
			i0_128 = o0_66;
		}
	}
l00010884:
	o4Out = i4_13;
	o5Out = i5_138;
	o7Out = i7_141;
	i0Out = i0_128;
	i1Out = i1_130;
	i2Out = i2_132;
	i4Out = i4_13;
	i5Out = i5_138;
	i7Out = i7_141;
	return i0_128;
}

// 00010890: Register word32 fn00010890(Register ptr32 o7, Register word32 l7)
// Called from:
//      __do_global_ctors_aux
word32 fn00010890(ptr32 o7, word32 l7)
{
	return o7 + l7;
}

// 00010898: Register (ptr32 word32) __do_global_ctors_aux(Register word32 o2, Register word32 o3, Register ptr32 o4, Register ptr32 o5, Register ptr32 o7, Register out ptr32 i4Out, Register out ptr32 i5Out, Register out ptr32 i7Out)
// Called from:
//      _init
word32 * __do_global_ctors_aux(word32 o2, word32 o3, ptr32 o4, ptr32 o5, ptr32 o7, ptr32 & i4Out, ptr32 & i5Out, ptr32 & i7Out)
{
	word32 * l0_31;
	struct Eq_479 * o1_26 = fn00010890(o7, 66176)->ptr0018;
	ptr32 i4_13 = o4;
	ptr32 i5_15 = o5;
	ptr32 i7_18 = o7;
	word32 o0_27 = o1_26->dwFFFFFFFC;
	if (o0_27 != ~0x00)
	{
		l0_31 = &o1_26->dwFFFFFFFC;
		do
		{
			fn00000018();
			o0_27 = *l0_31;
		} while (o0_27 != ~0x00);
	}
	else
		l0_31 = &o1_26->dwFFFFFFFC;
	i4Out = i4_13;
	i5Out = i5_15;
	i7Out = i7_18;
	return l0_31;
}

// 000108E8: void call___do_global_ctors_aux()
void call___do_global_ctors_aux()
{
}

