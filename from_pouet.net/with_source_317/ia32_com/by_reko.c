// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register (ptr16 Eq_2) ds)
void fn0C00_0100(struct Eq_2 * ds)
{
	bios_video_set_mode(0x13);
	byte Eq_17::* di_11 = &Eq_17::b0000;
	word16 cx_14;
	for (cx_14 = 0x0140; cx_14 != 0x00; --cx_14)
	{
		0xA000->*di_11 = 0x00;
		++di_11;
	}
	word16 cx_154;
	byte al_146 = 0x12;
	for (cx_154 = 63800; cx_154 != 0x00; --cx_154)
	{
		0xA000->*di_11 = 0x12;
		++di_11;
	}
	do
	{
		ds->w01A7 = 0x00;
		__syscall(22);
		if ((al_146 & 0x04) != 0x00)
			++ds->w01A7;
		if ((al_146 & 0x08) != 0x00)
			--ds->w01A7;
		fn0C00_0209(ds);
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		fn0C00_01BD(ds->t01B3, 0x0312, ds->t01B1, 0xA000, ds);
		Eq_85 ax_77 = ds->t01AB;
		ds->t01B3 = ax_77;
		Eq_87 bx_79 = ds->t01A9;
		ds->t01B1 = bx_79;
		fn0C00_01BD(ax_77, 0x030E, bx_79, 0xA000, ds);
		byte dh_164 = SLICE((uint16) fn0C00_01CD(ds->t01A5, SEQ(SLICE((uint16) fn0C00_01CD(ds->t01A3, 778, 0x01, 0xA000, ds), byte, 8), 0x0C), 0x013E, 0xA000, ds), byte, 8);
		Eq_87 bx_112 = 0x00;
		word16 cx_115 = ds->w01B7;
		Eq_86 dx_165 = SEQ(dh_164, 0x0F);
		do
		{
			fn0C00_01BD(0x00, dx_165, bx_112, 0xA000, ds);
			bx_112 = (word16) bx_112 + 2;
			--cx_115;
		} while (cx_115 != 0x00);
		Eq_87 bx_129 = 0x013F;
		word16 cx_131 = ds->w01B9;
		do
		{
			fn0C00_01BD(0x00, dx_165, bx_129, 0xA000, ds);
			bx_129 -= 0x02;
			--cx_131;
		} while (cx_131 != 0x00);
		byte ah_147;
	} while (bios_kbd_check_keystroke(out al_146, out ah_147));
	msdos_terminate_program20();
}

// 0C00:01BD: void fn0C00_01BD(Register Eq_85 ax, Register Eq_86 dl, Register Eq_87 bx, Register (ptr16 Eq_17) es, Register (ptr16 Eq_2) ds)
// Called from:
//      fn0C00_0100
//      fn0C00_01CD
void fn0C00_01BD(Eq_85 ax, Eq_86 dl, Eq_87 bx, struct Eq_17 * es, struct Eq_2 * ds)
{
	es->*((word16) bx + (word16) (ds->w01BB * ax)) = (byte) dx;
}

// 0C00:01CD: Register byte fn0C00_01CD(Register Eq_85 ax, Register Eq_86 dx, Register Eq_87 bx, Register (ptr16 Eq_17) es, Register (ptr16 Eq_2) ds)
// Called from:
//      fn0C00_0100
byte fn0C00_01CD(Eq_85 ax, Eq_86 dx, Eq_87 bx, struct Eq_17 * es, struct Eq_2 * ds)
{
	word16 cx_16;
	for (cx_16 = 0x0A; cx_16 != 0x00; --cx_16)
	{
		fn0C00_01BD(ax, dx, bx, es, ds);
		byte dh_19 = SLICE(dx, byte, 8);
		ax = (word16) ax + 1;
	}
	Eq_86 dx_20 = SEQ(dh_19, 0x12);
	fn0C00_01BD(ax, dx_20, bx, es, ds);
	fn0C00_01BD(ax - 11, dx_20, bx, es, ds);
	return dh_19;
}

// 0C00:01E2: void fn0C00_01E2(Register Eq_85 ax, Register (memptr (ptr16 Eq_2) ci16) bx, Register (ptr16 Eq_2) ds)
// Called from:
//      fn0C00_0209
void fn0C00_01E2(Eq_85 ax, ci16 Eq_2::* bx, struct Eq_2 * ds)
{
	if (ds->*bx < 0x50)
		++ds->*bx;
	Mem23[ds:0x01AB:word16] = (SLICE(Mem16[ds:14033:word16] *u (ax + Mem16[ds:0x01A3:word16]), word16, 0) & 0x7F) + 0x24;
	ds->t01A9.u0 = 0xA0;
	ds->w01B5 = 0x1E;
}

// 0C00:0209: void fn0C00_0209(Register (ptr16 Eq_2) ds)
// Called from:
//      fn0C00_0100
void fn0C00_0209(struct Eq_2 * ds)
{
	Eq_85 bx_13 = ds->t01A5;
	if (ds->t01A9 >= 0xE6)
	{
		Eq_85 ax_10 = ds->t01AB;
		bx_13 = ds->t01A5;
		if (ax_10 >= (word16) bx_13.u0 + 5)
		{
			if (ax_10 > (word16) bx_13.u0 + 5)
			{
				bx_13 = (word16) bx_13.u0 + 1;
				if (bx_13 >= 188)
					bx_13.u0 = 0xBD;
			}
		}
		else
		{
			--bx_13;
			if (bx_13 <= 0x03)
				bx_13.u0 = 0x02;
		}
	}
	ds->t01A5 = bx_13;
	Eq_85 bx_28 = (word16) ds->t01A3 + ds->w01A7;
	if (bx_28 < 0x02)
		bx_28.u0 = 0x02;
	if (bx_28 > 0xBD)
		bx_28.u0 = 0xBD;
	ds->t01A3 = bx_28;
	if (ds->w01B5 == 0x00)
	{
		Eq_85 ax_43 = (word16) ds->t01AB + ds->w01AF;
		ds->t01AB = ax_43;
		if (ax_43 == 0x02)
			ds->w01AF = 0x01;
		if (ax_43 == 0xC6)
			ds->w01AF = ~0x00;
		Eq_87 cx_57 = (word16) ds->t01A9 + ds->w01AD;
		ds->t01A9 = cx_57;
		if (cx_57 == 0x02 && (ax_43 >= bx_28 && ax_43 < (word16) bx_28.u0 + 0x0A))
			ds->w01AD = 0x01;
		Eq_85 bx_72 = ds->t01A5;
		if (cx_57 == 0x013D && (ax_43 >= bx_72 && ax_43 < (word16) bx_72.u0 + 0x0A))
			ds->w01AD = ~0x00;
		if (cx_57 != 0x00)
		{
			if (cx_57 == 0x013F)
				fn0C00_01E2(ax_43, &Eq_2::w01B7, ds);
		}
		else
			fn0C00_01E2(ax_43, &Eq_2::w01B9, ds);
	}
	else
		--ds->w01B5;
}

