// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register int16 cx, Register (memptr (ptr16 Eq_22) byte) di, Register (ptr16 Eq_4) ds)
void fn0C00_0100(int16 cx, byte Eq_22::* di, struct Eq_4 * ds)
{
	bios_video_set_mode(0x13);
	byte ah_269 = 0x00;
	do
	{
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		do
		{
			byte al_24 = 0x9000->*di;
			0x9000->*di = ah_269;
			0xA00A->*di = al_24;
			--cx;
			++di;
			byte ch_316 = SLICE(cx, byte, 8);
		} while (cx != 0x00);
		di = &Eq_22::b0000;
		do
		{
			cx = SEQ(ch_316, 0x30);
			do
			{
				int16 bp_246;
				for (bp_246 = 0x20; bp_246 != 0x00; --bp_246)
				{
					int16 cx_46 = (cx_451 - 0x18) *s bp_246;
					int16 bx_49 = bp_246 *s 0x18;
					int16 dx_52 = bp_246 *s ~0x0B;
					bcu8 al_57 = (byte) di;
					int16 cx_47 = cx_46 >> 0x05;
					int16 bx_50 = bx_49 >> 0x05;
					int16 dx_54 = (dx_52 >> 0x05) + 0x24;
					Eq_69 al_102 = al_57 >> 0x02;
					if (al_57 >> 0x02 >= 0x03)
					{
						cx_47 = -(cx_46 >> 0x05);
						bx_50 = -(bx_49 >> 0x05);
						dx_54 = -((dx_52 >> 0x05) + 0x24);
						al_102 = (al_57 >> 0x02) - 0x03;
					}
					if (!__bt(di, 0x01))
						bx_50 = -bx_50;
					ds->w03DA = cx_47;
					ds->w03DC = bx_50;
					ds->w03DE = dx_54;
					real64 rLoc1_362 = (real64) ds->w03DE;
					real64 rLoc2_363 = (real64) ds->w03DC;
					real64 rLoc3_364 = (real64) ds->w03DA;
					if (!__bt(di, 0x00))
					{
						rLoc3_364 = rLoc2_363;
						rLoc2_363 = rLoc3_364;
					}
					if (al_102 != 0x01)
					{
						rLoc3_364 = rLoc2_363;
						rLoc2_363 = rLoc3_364;
					}
					if (al_102 >= 0x01)
					{
						rLoc3_364 = rLoc1_362;
						rLoc1_362 = rLoc3_364;
					}
					if (al_102 == 0x02)
					{
						rLoc3_364 = rLoc2_363;
						rLoc2_363 = rLoc3_364;
					}
					byte al_126;
					for (al_126 = 0x03; al_126 != 0x00; --al_126)
					{
						real64 rLoc4_381 = (real64) ds->w03D8;
						real64 rLoc4_382 = cos(rLoc4_381);
						real64 rLoc5_383 = sin(rLoc4_381);
						real64 rLoc3_397 = rLoc5_383 * rLoc2_363 + rLoc4_382 * rLoc3_364;
						real64 rLoc6_390 = rLoc3_364 * rLoc5_383 - rLoc2_363 * rLoc4_382;
						rLoc1_362 = rLoc3_397;
						rLoc3_364 = rLoc6_390;
						rLoc2_363 = rLoc1_452;
						rLoc1_452 = rLoc1_362;
					}
					ds->w03DE = (int16) rLoc6_390;
					ds->w03DC = (int16) rLoc1_452;
					ds->w03DA = (int16) rLoc3_397;
					byte al_184 = (byte) di;
					Eq_139 bx_177 = ds->w03DC *s 0x0140 + ds->w03DA;
					byte al_185 = al_184 & 0x01;
					if (ds->w03DE <= SEQ(SLICE(di, byte, 8), al_184 & 0x01))
					{
						if ((al_184 & 0x01) >> 0x01 < 0x00)
							goto l0C00_01DF;
						al_185 = 0x02;
					}
					byte al_195 = al_185 + 0x40;
					word16 cx_197;
					for (cx_197 = 0x02; cx_197 != 0x00; --cx_197)
					{
						0x9000->*((word16) bx_177 + 32000) |= al_195;
						0x9000->*((word16) bx_177 + 32320) |= al_195;
						bx_177 = (word16) bx_177 + 1;
					}
l0C00_01DF:
				}
				cx = cx_451 - 0x01;
				ch_316 = SLICE(cx_451 - 0x01, byte, 8);
				cx_451 = cx;
			} while (cx_451 != 0x01);
			++di;
		} while (di != &Eq_22::b0018);
		ds->w03D8 += 220;
		byte al_268;
	} while (bios_kbd_check_keystroke(out al_268, out ah_269));
}

