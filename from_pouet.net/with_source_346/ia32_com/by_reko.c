// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register (ptr16 Eq_2) ds)
void fn0C00_0100(struct Eq_2 * ds)
{
	Eq_3 Top_158 = 0;
	Mem8[ds:0x0530:word16] = cs + 0x1000;
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x00);
	bcu8 ah_191 = 0x00;
	do
	{
		uint8 al_22 = ah_191 >> 0x02;
		__outb(969, al_22);
		__outb(969, al_22);
		__outb(969, -(al_22 >> 0x01) + al_22);
		++ah_191;
	} while (ah_191 != 0x00);
	__wait();
	__fninit();
	fn0C00_042C(cs + 0x2000);
	struct Eq_56 Eq_52::* di_41 = Eq_52::a0000;
	do
	{
		byte al_48 = Mem46[cs + 0x2000:di_41 + 0x01:byte] + Mem46[cs + 0x2000:di_41 + -1:byte];
		byte al_52 = __rcr(al_48, 0x01, SLICE(cond(al_48), bool, 1));
		byte bl_54 = Mem46[cs + 0x2000:di_41 + 0x0100:byte] + Mem46[cs + 0x2000:di_41 + -0x0100:byte];
		byte al_59 = al_52 + __rcr(bl_54, 0x01, SLICE(cond(bl_54), bool, 1));
		Mem65[cs + 0x2000:di_41 + 0x00:byte] = __rcr(al_59, 0x01, SLICE(cond(al_59), bool, 1));
		++di_41;
	} while (di_41 != Eq_52::a0000);
	do
	{
		struct Eq_108 * Top_70 = Top_158 - 1;
		Top_70->t0000.u0 = (real64) ds->r04EC;
		Top_70->t0000 += (real64) ds->r04F0;
		ds->r04EC = (real32) Top_70->t0000;
		Top_70->t0000 = sin(Top_70->t0000);
		Top_70->t0000 *= (real64) ds->r0499;
		ds->r1E40 = (real32) Top_70->t0000;
		Eq_113 rRet1_90;
		real64 rRet0_91 = fn0C00_0223(ds, out rRet1_90);
		Top_70->t0000 = rRet1_90;
		Top_70->rFFFFFFFF = rRet0_91;
		fn0C00_0309(cs + 0x1000, ds, cs + 0x2000);
		struct Eq_7 * ds_113 = ds->ptr0530;
		word16 cx_116;
		word32 Eq_7::* si_117 = Eq_7::a0000;
		word32 Eq_193::* di_118 = Eq_193::a0000;
		for (cx_116 = 16000; cx_116 != 0x00; --cx_116)
		{
			0xA000->*di_118 = ds_113->*si_117;
			++si_117;
			++di_118;
		}
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		word64 rRet1_151;
		real64 rRet0_152 = fn0C00_03F8(ds, out rRet1_151);
		Top_70->qwFFFFFFFE = rRet1_151;
		Top_70->rFFFFFFFD = rRet0_152;
		ds->w04A9 += 0x0100;
		ds->w04AB += 0x0300;
		Top_158 = Top_70 - 3;
		byte al_167;
		byte ah_168;
	} while (bios_kbd_check_keystroke(out al_167, out ah_168));
	byte al_173;
	bios_kbd_get_keystroke(out al_173);
	bios_video_set_mode(0x03);
	msdos_display_string(&ds->b04D5);
	msdos_terminate(0x00);
}

// 0C00:01C3: void fn0C00_01C3(Register (memptr (ptr16 Eq_2) Eq_278) si, Register (memptr (ptr16 Eq_2) Eq_279) di, Register (ptr16 Eq_2) ds)
// Called from:
//      fn0C00_0223
void fn0C00_01C3(struct Eq_278 Eq_2::* si, struct Eq_279 Eq_2::* di, struct Eq_2 * ds)
{
	(ds->*di).r0000 = (real32) ((real64) (ds->*si).r0000 + (real64) (ds->*di).r0000);
	(ds->*di).r0004 = (real32) ((real64) (ds->*si).r0004 + (real64) (ds->*di).r0004);
	(ds->*di).r0008 = (real32) ((real64) (ds->*si).r0008 + (real64) (ds->*di).r0008);
}

// 0C00:01DC: void fn0C00_01DC(Register (memptr (ptr16 Eq_2) Eq_320) bx, Register (memptr (ptr16 Eq_2) Eq_321) si, Register (memptr (ptr16 Eq_2) Eq_322) di, Register (ptr16 Eq_2) ds)
// Called from:
//      fn0C00_0223
void fn0C00_01DC(struct Eq_320 Eq_2::* bx, struct Eq_321 Eq_2::* si, struct Eq_322 Eq_2::* di, struct Eq_2 * ds)
{
	(ds->*bx).r0000 = (real32) ((real64) (ds->*si).r0000 - (real64) (ds->*di).r0000);
	(ds->*bx).r0004 = (real32) ((real64) (ds->*si).r0004 - (real64) (ds->*di).r0004);
	(ds->*bx).r0008 = (real32) ((real64) (ds->*si).r0008 - (real64) (ds->*di).r0008);
}

// 0C00:01F5: void fn0C00_01F5(Register (memptr (ptr16 Eq_2) Eq_363) si, Register (memptr (ptr16 Eq_2) Eq_364) di, Register (ptr16 Eq_2) ds, FpuStack Eq_113 rArg0)
// Called from:
//      fn0C00_0223
void fn0C00_01F5(struct Eq_363 Eq_2::* si, struct Eq_364 Eq_2::* di, struct Eq_2 * ds, Eq_113 rArg0)
{
	(ds->*di).r0000 = (real32) ((real64) (ds->*si).r0000 * rArg0);
	(ds->*di).r0004 = (real32) ((real64) (ds->*si).r0004 * rArg0);
	(ds->*di).r0008 = (real32) ((real64) (ds->*si).r0008 * rArg0);
}

// 0C00:020C: void fn0C00_020C(Register (memptr (ptr16 Eq_2) Eq_394) si, Register (memptr (ptr16 Eq_2) Eq_395) di, Register (ptr16 Eq_2) ds)
// Called from:
//      fn0C00_0223
void fn0C00_020C(struct Eq_394 Eq_2::* si, struct Eq_395 Eq_2::* di, struct Eq_2 * ds)
{
	word32 ebx_8 = (ds->*si).dw0004;
	word32 ecx_9 = (ds->*si).dw0008;
	(ds->*di).dw0000 = (ds->*si).dw0000;
	(ds->*di).dw0004 = ebx_8;
	(ds->*di).dw0008 = ecx_9;
}

// 0C00:0223: FpuStack Eq_113 fn0C00_0223(Register (ptr16 Eq_2) ds, FpuStack out Eq_113 rLoc1Out)
// Called from:
//      fn0C00_0100
Eq_113 fn0C00_0223(struct Eq_2 * ds, union Eq_113 & rLoc1Out)
{
	fn0C00_01DC(&Eq_2::t0500, &Eq_2::t04B9, &Eq_2::t04AD, ds);
	Eq_113 rLoc1_133 = (real64) ds->r04F4;
	fn0C00_01F5(&Eq_2::t0500, &Eq_2::t0500, ds, rLoc1_133);
	__ffree(rLoc1_133);
	fn0C00_01DC(&Eq_2::t050C, &Eq_2::t04C5, &Eq_2::t04AD, ds);
	Eq_113 rLoc2_134 = (real64) ds->r04F8;
	fn0C00_01F5(&Eq_2::t050C, &Eq_2::t050C, ds, rLoc2_134);
	__ffree(rLoc2_134);
	fn0C00_020C(&Eq_2::t04AD, &Eq_2::t0518, ds);
	struct Eq_457 Eq_2::* bp_107 = &Eq_2::t0538;
	word16 cx_125 = 0x1A;
	do
	{
		fn0C00_020C(&Eq_2::t0518, &Eq_2::r0524, ds);
		word16 cx_118 = 0x29;
		do
		{
			real64 rLoc3_140 = atan(rLoc2_134, (real64) ds->r0524);
			ds->t0532.u0 = (int32) (rLoc3_140 * (real64) ds->r04FC);
			(ds->*bp_107).w0002 = (word16) ds->t0532.u2 + ds->w04A9;
			real64 rLoc3_146 = sin(rLoc3_140 * (real64) ds->r049D) * (real64) ds->r1E40 + (real64) ds->r0495;
			real64 rLoc4_147 = (real64) ds->r0524;
			real64 rLoc5_149 = (real64) ds->r0528;
			ds->t0532.u0 = (int32) (rLoc3_146 * (((real64) ds->r04D1 / sqrt(rLoc4_147 * rLoc4_147 + rLoc5_149 * rLoc5_149)) * (real64) ds->r052C) * (real64) ds->r04A1);
			Eq_462 eax_84 = ds->t0532;
			(ds->*bp_107).w0000 = (word16) eax_84 + ds->w04AB;
			Eq_462 ebx_85 = eax_84;
			if (eax_84 < 0x00)
				ebx_85 = -eax_84;
			uint32 ebx_96 = ebx_85 >> 0x01;
			word16 bx_100 = (word16) ebx_96;
			if (ebx_96 >= 0x7F00)
				bx_100 = 0x7F00;
			(ds->*bp_107).w0004 = bx_100;
			fn0C00_01C3(&Eq_2::t0500, &Eq_2::r0524, ds);
			++bp_107;
			cx_118 = cx_191 - 0x01;
			cx_191 = cx_118;
		} while (cx_191 != 0x01);
		fn0C00_01C3(&Eq_2::t050C, &Eq_2::t0518, ds);
		cx_125 = cx_190 - 0x01;
		cx_190 = cx_125;
	} while (cx_190 != 0x01);
	rLoc1Out = rLoc1_133;
	return rLoc2_134;
}

// 0C00:0309: void fn0C00_0309(Register (ptr16 Eq_175) es, Register (ptr16 Eq_2) ds, Register (ptr16 Eq_177) gs)
// Called from:
//      fn0C00_0100
void fn0C00_0309(struct Eq_52 * es, struct Eq_2 * ds, struct Eq_52 * gs)
{
	struct Eq_581 Eq_2::* si_166 = &Eq_2::t0538;
	struct Eq_583 Eq_52::* di_126 = Eq_52::a0000;
	word16 cx_11 = 0x19;
	do
	{
		word16 cx_14 = 0x28;
		do
		{
			struct Eq_675 Eq_2::* si_23 = (char *) &si_166->dw0002 + 2;
			word32 ebx_154 = (ds->*si_23).dw0002;
			word32 eax_153 = (ds->*si_166).dw0000;
			word32 edx_28 = (ds->*si_23).dw00F8 - ebx_154;
			word32 ebp_30 = __rol((ds->*si_23).dw00F2 - eax_153, 0x10);
			word32 edx_32 = __rol(edx_28, 0x10);
			word32 ebp_40 = __rol(SEQ(SLICE(ebp_30, word16, 16), (word16) ebp_30 >> 0x03), 0x10);
			word32 edx_44 = __rol(SEQ(SLICE(edx_32, word16, 16), (word16) edx_32 >> 0x03), 0x10);
			ds->dw1E34 = SEQ(SLICE(ebp_40, word16, 16), (word16) ebp_40 >> 0x03);
			ds->dw1E38 = SEQ(SLICE(edx_44, word16, 16), (word16) edx_44 >> 0x03);
			ds->w1E3C = (ds->*si_23).w00F6 - (ds->*si_23).w0000 >> 0x03;
			ci16 cx_60 = (ds->*si_23).w0006;
			ds->w1E3E = (ds->*si_23).w00FC - cx_60 >> 0x03;
			ci16 dx_155 = (ds->*si_23).w0000;
			ci16 si_156 = cx_60;
			byte ch_159;
			for (ch_159 = 0x08; ch_159 != 0x00; --ch_159)
			{
				word32 ebx_81 = __rol(ebx_154 - eax_153, 0x10);
				word32 ebx_87 = __rol(SEQ(SLICE(ebx_81, word16, 16), (word16) ebx_81 >> 0x03), 0x10);
				word32 ebx_91 = SEQ(SLICE(ebx_87, word16, 16), (word16) ebx_87 >> 0x03);
				ci16 si_99 = si_156 - dx_155;
				byte cl_102;
				dx_134 = dx_155;
				eax_130 = eax_153;
				for (cl_102 = 0x08; cl_102 != 0x00; --cl_102)
				{
					ci16 dx_134;
					word32 eax_130;
					word32 eax_109 = __rol(eax_130, 0x10);
					word32 eax_113 = __rol(eax_109, 0x10);
					cu8 bl_119 = gs->*SEQ(SLICE(eax_109, byte, 8), SLICE(eax_130, byte, 8)) - SLICE(dx_134, byte, 8);
					(es->*di_126).b0000 = bl_119 & ~(0x00 - (bl_119 < 0x00));
					di_126 = &di_126->b0000 + 1;
					eax_130 = eax_113 + ebx_91;
					dx_134 += si_99 >> 0x03;
				}
				di_126 = &di_126->b0000 + 312;
				eax_153 += ds->dw1E34;
				ebx_154 += ds->dw1E38;
				dx_155 += ds->w1E3C;
				si_156 += ds->w1E3E;
			}
			si_166 = (struct Eq_581 Eq_2::*) &si_23->dw0002;
			di_126 -= 0x08C0;
			cx_14 = cx_238 - 0x01;
			cx_238 = cx_14;
		} while (cx_238 != 0x01);
		si_166 = (struct Eq_581 Eq_2::*) (&si_23->w0006 + 1);
		cx_11 = cx_237 - 0x01;
		cx_237 = cx_11;
	} while (cx_237 != 0x01);
}

// 0C00:03F8: FpuStack Eq_113 fn0C00_03F8(Register (ptr16 Eq_2) ds, FpuStack out Eq_113 rLoc1Out)
// Called from:
//      fn0C00_0100
Eq_113 fn0C00_03F8(struct Eq_2 * ds, union Eq_113 & rLoc1Out)
{
	Eq_113 rLoc1_47 = (real64) ds->r04A5;
	Eq_113 rLoc1_48 = cos(rLoc1_47);
	struct Eq_786 Eq_2::* si_17 = &Eq_2::t04AD;
	Eq_113 rLoc2_49 = sin(rLoc1_47);
	word16 cx_13;
	for (cx_13 = 0x03; cx_13 != 0x00; --cx_13)
	{
		real64 rLoc4_51 = (real64) (ds->*si_17).r0004;
		real64 rLoc3_50 = (real64) (ds->*si_17).r0008;
		(ds->*si_17).r0004 = (real32) (rLoc4_51 * rLoc2_49 - rLoc3_50 * rLoc1_48);
		(ds->*si_17).r0008 = (real32) (rLoc4_51 * rLoc1_48 + rLoc3_50 * rLoc2_49);
		++si_17;
	}
	__ffree(rLoc2_49);
	__ffree(rLoc1_48);
	rLoc1Out = rLoc1_48;
	return rLoc2_49;
}

// 0C00:042C: void fn0C00_042C(Register (ptr16 Eq_52) gs)
// Called from:
//      fn0C00_0100
void fn0C00_042C(struct Eq_52 * gs)
{
	gs->a0000[0] = 0x80;
	byte Eq_52::* bx_17 = Eq_52::a0000;
	Eq_832 cx_13 = 0x80;
	do
	{
		do
		{
			do
			{
				bx_77 = SEQ(bh_66, bl_63);
				byte Eq_52::* bx_32 = fn0C00_045D(cx_85, (byte) (cx_85 << 0x08), fn0C00_045D(SLICE(cx_85, byte, 8), cx_85, bx_17, gs), gs);
				fn0C00_045D(cx_85, -cx_85, SEQ(SLICE(bx_32, byte, 8), (word16) cx_85 + ((word16) cx_85 + (byte) bx_32)), gs);
				byte bh_66 = SLICE(bx_32, byte, 8);
				cx_13 = cx_85;
				byte ch_74 = SLICE(cx_85, byte, 8);
				cu8 bl_63 = (word16) cx_85 + ((word16) cx_85 + (byte) bx_32);
				cx_85 = cx_13;
				bx_17 = bx_77;
			} while (bl_63 >= 0x00);
			cu8 bh_68 = (word16) cx_85 + ((word16) cx_85 + bh_66);
			bx_17 = SEQ(bh_68, bl_63);
			cx_86 = cx_13;
		} while (bh_68 >= 0x00);
		cx_13 = SEQ(ch_74, cx_85 >> 0x01);
		cx_87 = cx_13;
	} while (cx_85 >> 0x01 != 0x00);
}

// 0C00:045D: Register (memptr (ptr16 Eq_52) byte) fn0C00_045D(Register Eq_832 ch, Register Eq_832 cl, Register (memptr (ptr16 Eq_52) byte) bx, Register (ptr16 Eq_52) gs)
// Called from:
//      fn0C00_042C
byte Eq_52::* fn0C00_045D(Eq_832 ch, Eq_832 cl, byte Eq_52::* bx, struct Eq_52 * gs)
{
	byte bh_9 = SLICE(bx, byte, 8);
	byte bl_13 = (byte) bx;
	byte bh_12 = (byte) ch.u1 + ((byte) ch.u1 + bh_9);
	byte bl_16 = (byte) cl.u1 + ((byte) cl.u1 + bl_13);
	Eq_893 dx_24 = gs->*SEQ(bh_12, bl_16) + gs->*bx;
	int16 ax_28 = (int16) __inb(0x40);
	Eq_909 dx_34 = (dx_24 >> 0x01) + (SEQ(SLICE(ax_28, byte, 8), (byte) ax_28 << cl) >> 0x03);
	byte dh_40 = SLICE(dx_34, byte, 8);
	byte dl_46 = (byte) dx_34;
	if (dx_34 < 0x00)
	{
		dh_40 = 0x00;
		dl_46 = 0x00;
	}
	if (dh_40 != 0x00)
		dl_46 = ~0x00;
	byte bh_51 = bh_12 - ch;
	byte bl_56 = bl_16 - cl;
	gs->*SEQ(bh_51, bl_56) = dl_46;
	return SEQ(bh_51 - ch, bl_56 - cl);
}

