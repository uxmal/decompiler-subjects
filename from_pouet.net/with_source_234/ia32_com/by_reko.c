// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register byte cl, Register word16 bp, Register (ptr16 Eq_4) es, Register (ptr16 Eq_4) ds)
void fn0C00_0100(byte cl, word16 bp, struct Eq_4 * es, struct Eq_4 * ds)
{
	__syscall(0x10);
	byte Eq_4::* di_200 = Eq_4::a0200;
	word16 cx_203 = SEQ(~0x02, cl);
	byte al_18 = 0x00;
	while (true)
	{
		byte ch_211 = SLICE(cx_203, byte, 8);
		if (cx_203 == 0x00)
			break;
		es->*di_200 = 0x00;
		++di_200;
		--cx_203;
	}
	__outb(0x03C8, 0x00);
	struct Eq_25 Eq_4::* di_13 = Eq_4::a0340;
	word16 cx_212 = SEQ(ch_211, 0x20);
	do
	{
		struct Eq_42 Eq_4::* di_17 = &di_13->b0000 + 1;
		(es->*di_17).b0000 = al_18;
		(ds->*di_17).w005F = SEQ(0x3F, al_18);
		(ds->*di_17).b0061 = al_18;
		--cx_212;
		di_13 = (struct Eq_25 Eq_4::*) (&di_17->b0000 + 2);
		al_18 += 0x02;
		byte ch_213 = SLICE(cx_212, byte, 8);
	} while (cx_212 != 0x00);
	word16 cx_198 = SEQ(ch_213, 0xC0);
	while (true)
	{
		byte ch_217 = SLICE(cx_198, byte, 8);
		byte cl_226 = (byte) cx_198;
		if (cx_198 == 0x00)
			break;
		__outb(969, al_18);
		--cx_198;
	}
	real64 rLoc1_286 = (real64) ds->w01FB;
	real64 rLoc2_287 = 0.0;
	do
	{
		real64 rLoc3_288 = 0.0;
		word16 cx_229 = SEQ(ch_217 + 0x01, cl_226);
		do
		{
			real64 rLoc4_296 = sin(rLoc2_287 / rLoc1_286) * rLoc1_286 + rLoc3_288;
			real64 rLoc4_297 = cos(rLoc4_296);
			real64 rLoc5_298 = sin(rLoc4_296);
			real64 rLoc6_301 = sin(rLoc2_287) * (real64) ds->w01FD;
			ds->w01A8 = (int16) rLoc6_301;
			real64 rLoc4_308 = rLoc4_297 * ((rLoc6_301 * sin(rLoc3_288 * rLoc1_286) + (real64) ds->w01FD) * rLoc5_298);
			ds->w016D = (int16) rLoc5_298;
			ds->w016A = (int16) rLoc4_308;
			rLoc3_288 += (real64) ds->r01F7;
			ds->w5414 = 0x3737;
			--cx_229;
			byte bl_171 = 0x34;
			byte bh_174 = 0x12;
			byte ch_257 = SLICE(cx_229, byte, 8);
		} while (cx_229 != 0x00);
		rLoc2_287 += (real64) ds->r01F3;
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		struct Eq_161 Eq_4::* di_101 = &Eq_4::tFFFFF9FF;
		do
		{
			di_101[832] = di_101[833] + di_101[0x033F] + di_101[1152] + di_101[0x0200] >> 0x02;
			--di_101;
		} while (di_101 != Eq_4::a0000);
		struct Eq_187 Eq_4::* di_129 = &Eq_4::tFFFFBE20;
		struct Eq_189 Eq_4::* si_131 = Eq_4::a0340;
		word16 cx_153 = SEQ(ch_257, 0x32);
		do
		{
			byte al_133;
			for (al_133 = 0x50; al_133 != 0x00; --al_133)
			{
				(ds->*di_129).b0000 = (ds->*si_131).b0000;
				struct Eq_200 Eq_4::* si_141 = &si_131->b0000 + 1;
				di_129 = &di_129->b0000 + 1;
				si_131 = (struct Eq_189 Eq_4::*) (&si_141->b0000 + 3);
			}
			--cx_153;
			si_131 = (struct Eq_189 Eq_4::*) (si_141 + 1);
			++di_129;
			byte cl_281 = (byte) cx_153;
		} while (cx_153 != 0x00);
		struct Eq_223 Eq_4::* di_163 = Eq_4::a0000;
		word16 cx_185 = SEQ(~0x05, cl_281);
		do
		{
			byte bl_172 = bl_171 & 0x07;
			word16 bx_177 = SEQ(bh_174, bl_172) + bp;
			byte al_173 = di_163[832] + bl_172;
			bp = __ror(bp, 0x03) + bx_177;
			(0xA000->*di_163).b0000 = al_173;
			--cx_185;
			bl_171 = (byte) bx_177;
			bh_174 = SLICE(bx_177, byte, 8);
			++di_163;
			ch_217 = SLICE(cx_185, byte, 8);
			cl_226 = (byte) cx_185;
		} while (cx_185 != 0x00);
	} while (__inb(0x60) != 0x01);
	bios_video_set_mode(0x03);
}

