// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register word16 bx, Register (ptr16 Eq_3) ds)
void fn0C00_0100(word16 bx, struct Eq_3 * ds)
{
	__syscall(0x10);
	__outb(0x03C8, 0x00);
	byte al_13 = 0x00;
	do
	{
		__outb(969, al_13);
		__outb(969, al_13);
		__outb(969, al_13);
		++al_13;
	} while (al_13 != 0x00);
	real64 rLoc1_198 = (real64) ds->r01F4;
	do
	{
		ci16 bx_30 = bx + 0x01;
		struct Eq_140 Eq_139::* di_152 = &Eq_139::t0000;
		byte bl_186 = (byte) (bx_30 + 0x01);
		int16 dx_162;
		for (dx_162 = 0x32; dx_162 != ~0x31; --dx_162)
		{
			ds->w020A = dx_162;
			int16 cx_157;
			for (cx_157 = 0x50; cx_157 != ~0x4F; --cx_157)
			{
				real64 rLoc2_199 = (real64) ds->w020A;
				ds->w0208 = cx_157;
				real64 rLoc3_200 = (real64) ds->w0208;
				real64 rLoc4_201 = (real64) ds->r01F8;
				real64 rLoc5_204 = sin(rLoc1_198);
				real64 rLoc6_206 = cos(rLoc1_198);
				real64 rLoc4_220 = rLoc4_201 * rLoc6_206 + rLoc3_200 * rLoc5_204;
				real64 rLoc7_211 = rLoc3_200 * rLoc6_206 - rLoc4_201 * rLoc5_204;
				real64 rLoc4_232 = rLoc4_220 / (rLoc7_211 / (rLoc2_199 / sqrt((rLoc4_220 * rLoc4_220 + rLoc2_199 * rLoc2_199) + rLoc7_211 * rLoc7_211)));
				real64 rLoc5_237 = rLoc2_199 * rLoc2_199 + rLoc7_211 * rLoc7_211;
				real64 rLoc5_242 = sqrt((real64) ds->r01EC * rLoc5_237) / rLoc5_237;
				ds->w0200 = (int16) ((real64) ds->r01FC / rLoc5_242);
				ds->t0204.u0 = (int16) (rLoc4_232 + (real64) ds->w0202);
				ds->t0206.u0 = (int16) (atan(rLoc1_198, rLoc2_199 * ((rLoc5_242 * rLoc4_232) * rLoc7_211)) * (real64) ds->r01F0);
				byte al_148 = (byte) ((uint16) (ds->t0206 - bl_186 ^ ds->t0204) *s ds->w0200 >> 0x0A);
				word16 ax_150 = SEQ(al_148, al_148);
				di_152[1] = ax_150;
				(0xA000->*di_152).w0000 = ax_150;
				di_152 = &di_152->w0000 + 1;
				bx = bx_30 + 0x01;
			}
			++di_152;
		}
		ds->w0202 += 0x05;
		if (bx_30 >= 99)
			rLoc1_198 += (real64) ds->r01F4;
	} while (__inb(0x60) != 0x01);
}

