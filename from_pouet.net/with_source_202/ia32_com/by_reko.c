// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register byte ah, Register word16 cx, Register (memptr (ptr16 Eq_6) Eq_56) si, Register word16 di, Register (ptr16 Eq_6) ds)
void fn0C00_0100(byte ah, word16 cx, union Eq_56 Eq_6::* si, word16 di, struct Eq_6 * ds)
{
	__syscall(0x10);
	word16 ax_13 = SEQ(ah, 0x13);
	word16 cx_260 = cx;
	do
	{
		uint8 cl_17 = (byte) cx_264;
		__outb(0x03C8, cl_17);
		__outb(969, cl_17 >> 0x02);
		__outb(969, cl_17 >> 0x03);
		__outb(969, cl_17 >> 0x03);
		cx_260 = cx_264 - 0x01;
		cx_264 = cx_260;
	} while (cx_264 != 0x01);
	uint32 dx_ax_32 = (uint32) di;
	uint16 dx_37 = (uint16) (dx_ax_32 % ds->w01E7);
	uint16 ax_38 = (uint16) (dx_ax_32 /u ds->w01E7);
	ds->*si = ax_13 + 0x01;
	real64 rLoc1_188 = (real64) (ds->*si);
	ds->*si = dx_37 - 0xA0;
	real64 rLoc2_190 = (real64) (ds->*si) / (real64) ds->w01E5;
	ds->*si = ax_38 - 100;
	real64 rLoc3_192 = (real64) (ds->*si) / (real64) ds->w01E5;
	real64 rLoc5_195 = rLoc1_188 / (real64) ds->w01EB;
	real64 rLoc5_196 = cos(rLoc5_195);
	(ds->*si).u2 = (real32) sin(rLoc5_195);
	real64 rLoc6_205 = rLoc5_196 * rLoc2_190 + (real64) (ds->*si) * 0.693147180559945;
	real64 rLoc7_208 = rLoc5_196 * 0.693147180559945 - (real64) (ds->*si) * rLoc2_190;
	real64 rLoc5_212 = 0.0;
	byte al_93 = 0x0C;
	do
	{
		--al_93;
		if (al_93 == 0x00)
			break;
		real64 rLoc6_229 = cos(rLoc7_208 * rLoc5_212) + cos(rLoc3_192 * rLoc5_212) + cos(rLoc6_205 * rLoc5_212 + rLoc1_188);
		rLoc5_212 += fabs(rLoc6_229 + 0.693147180559945);
	} while (rLoc6_229 + 0.693147180559945 >= 0.0);
	(ds->*si).u0 = (int16) ((fabs(sin(rLoc7_208 * rLoc5_212)) + fabs(sin(rLoc3_192 * rLoc5_212)) + fabs(sin(rLoc6_205 * rLoc5_212 + rLoc1_188))) * (real64) ds->w01E9);
	(ds->*si).u0 = (int16) (pow(2.0, rLoc5_212 * (real64) ds->w01EB) - 1.0);
}

