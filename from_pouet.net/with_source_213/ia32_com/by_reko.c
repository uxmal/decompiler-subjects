// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register (ptr16 Eq_2) ds)
void fn0C00_0100(struct Eq_2 * ds)
{
	bios_video_set_mode(0x13);
	msdos_display_string(&ds->r01CF);
	__outb(0x03C8, 0x00);
	byte Eq_40::* di_19 = Eq_40::a0000;
	do
	{
		bcu8 al_24 = (byte) di_19;
		__outb(969, al_24 >> 0x02);
		__outb(969, al_24 >> 0x03);
		__outb(969, al_24 >> 0x02);
		ui8 al_34 = (0xA000->*di_19 << 0x03) + 0x40;
		0xA000->*di_19 = al_34;
		++di_19;
	} while (al_34 != 0x00);
	__wait();
	__fninit();
	do
	{
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		byte Eq_40::* di_165 = &Eq_40::b3200;
		int16 bp_171 = ~0x3B;
		do
		{
			ds->w01DF = bp_268;
			int16 cx_168 = ~0x9F;
			do
			{
				real64 rLoc1_214 = (real64) ds->w01CB;
				real64 rLoc2_215 = (real64) ds->w01DF;
				ds->w01DB = cx_269;
				real64 rLoc3_216 = (real64) ds->w01DB;
				word16 cx_112 = 0x03;
				do
				{
					real64 rLoc4_220 = sin((real64) ds->r01CF);
					real64 rLoc4_221 = cos(rLoc4_220);
					real64 rLoc5_222 = sin(rLoc4_220);
					real64 rLoc3_236 = rLoc5_222 * rLoc2_215 + rLoc4_221 * rLoc3_216;
					real64 rLoc6_229 = rLoc3_216 * rLoc5_222 - rLoc2_215 * rLoc4_221;
					--cx_112;
					rLoc1_214 = rLoc3_236;
					rLoc3_216 = rLoc6_229;
					rLoc2_215 = rLoc1_270;
					byte cl_207 = (byte) cx_112;
					rLoc1_270 = rLoc1_214;
				} while (cx_112 != 0x00);
				ds->w01E7 = (int16) rLoc6_229;
				ds->w01EB = (int16) rLoc1_270;
				ds->w01EF = (int16) rLoc3_236;
				cui16 bx_121 = ds->w01D3;
				cui16 bp_122 = 0x0200;
				cui16 dx_123 = bx_121;
				word16 cx_141 = SEQ(0x01, cl_207);
				do
				{
					bp_122 += ds->w01EB;
					dx_123 += ds->w01EF;
					bx_121 += ds->w01E7;
					byte cl_143 = (byte) cx_141;
					if ((SLICE(dx_123 & bp_122 & bx_121, byte, 8) & ~0x07) != 0x00)
						break;
					--cx_141;
					cl_143 = (byte) cx_141;
				} while (cx_141 != 0x00);
				0xA000->*di_165 = cl_143;
				++di_165;
				cx_168 = cx_269 + 0x01;
				cx_269 = cx_168;
			} while (cx_269 != 0x9F);
			bp_171 = bp_268 + 0x01;
			bp_268 = bp_171;
		} while (bp_268 != 0x3B);
		ds->w01D3 += bp_268 + 0x01;
		ds->r01CF = (real32) ((real64) ds->r01CF + (real64) ds->w01CD);
		byte al_187;
		byte ah_188;
	} while (bios_kbd_check_keystroke(out al_187, out ah_188));
}

