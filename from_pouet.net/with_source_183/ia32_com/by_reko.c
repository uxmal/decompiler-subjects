// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register byte dl, Register byte bl, Register word16 si, Register (ptr16 Eq_5) ds)
void fn0C00_0100(byte dl, byte bl, word16 si, struct Eq_5 * ds)
{
	bios_video_set_mode(0x13);
	Eq_11 bx_8 = SEQ(0x70, bl);
	Eq_11 bx_11 = SEQ(0x80, bl);
	real64 rLoc1_259 = 0.0;
	bx_30 = bx_11;
	do
	{
		Eq_11 bx_30;
		bx_11->*bx_30 = (int16) (sin(rLoc1_259) * (real64) ds->w014B);
		rLoc1_259 += (real64) ds->r019D;
		bx_8->*bx_30 = si;
		struct Eq_39 Eq_11::* bx_37 = (word16) bx_30 + 1;
		bx_30 = bx_37 + 1;
	} while (!OVERFLOW(bx_37 + 1));
	struct Eq_50 Eq_5::* di_43 = &Eq_5::t000A;
	struct Eq_52 Eq_11::* bx_329 = bx_37 + 1;
	do
	{
		int16 si_47 = (ds->*di_43).w0000;
		struct Eq_52 Eq_11::* bx_326 = bx_329;
		do
		{
			bi8 bl_48 = (byte) bx_333;
			bi8 bh_55 = SLICE(bx_333, byte, 8);
			if (bh_55 *s bh_55 + bl_48 *s bl_48 <=u 2499)
				bx_333[si_47] = dl;
			bx_326 = bx_333 + 1;
			bx_333 = bx_326;
		} while (!OVERFLOW(bx_333 + 1));
		word16 di_72 = di_43 - 0x01;
		di_43 = di_72 - 0x01;
		bx_329 = bx_333 + 1;
	} while (di_72 != 0x01);
	do
	{
		word16 bx_180 = 0x0100;
		word16 si_79 = *((word16) bx_11 + 0x0100);
		word16 bp_80 = *((word16) bx_11 + 8448);
		word16 dx_181 = 0x00;
		byte Eq_103::* di_110 = &Eq_103::b0000;
		word16 cx_183 = 200;
		do
		{
			word16 cx_113;
			bx_115 = bx_180;
			dx_118 = dx_181;
			di_153 = di_110;
			for (cx_113 = 0x0140; cx_113 != 0x00; --cx_113)
			{
				byte Eq_103::* di_153;
				word16 dx_118;
				word16 bx_115;
				word16 bx_117 = bx_115 + bp_80;
				dx_118 += si_79;
				cu8 al_128 = 0x0F;
				Eq_117 bx_131 = SEQ(SLICE(bx_117, byte, 8), SLICE(dx_118, byte, 8));
				while (bx_8->*bx_131 <= al_128)
				{
					bx_131 *= 0x02;
					al_128 -= 0x03;
					if (al_128 == 0x00)
						break;
				}
				0xA000->*di_153 = al_128 + 0x10;
				++di_153;
				bx_115 = bx_117;
			}
			di_110 += 320;
			bx_180 -= si_79;
			dx_181 += bp_80;
			cx_183 = cx_332 - 0x01;
			cx_332 = cx_183;
		} while (cx_332 != 0x01);
		++ds->b014C;
		ds->b016D += 0x04;
		byte al_195;
		byte ah_196;
	} while (bios_kbd_check_keystroke(out al_195, out ah_196));
	bios_video_set_mode(0x03);
}

