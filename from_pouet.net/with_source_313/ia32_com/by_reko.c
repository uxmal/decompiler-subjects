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
	word16 cx_156;
	byte al_148 = 0x12;
	for (cx_156 = 63800; cx_156 != 0x00; --cx_156)
	{
		0xA000->*di_11 = 0x12;
		++di_11;
	}
	do
	{
		ds->w01A5 = 0x00;
		__syscall(22);
		if ((al_148 & 0x04) != 0x00)
			++ds->w01A5;
		if ((al_148 & 0x08) != 0x00)
			--ds->w01A5;
		fn0C00_0219(ds);
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		fn0C00_01BB(ds->t01B1, 0x0312, ds->t01AF, 0xA000, ds);
		Eq_85 ax_77 = ds->t01A9;
		ds->t01B1 = ax_77;
		Eq_87 bx_79 = ds->t01A7;
		ds->t01AF = bx_79;
		fn0C00_01BB(ax_77, 0x030E, bx_79, 0xA000, ds);
		byte dh_166 = SLICE((uint16) fn0C00_01CB(ds->t01A3, SEQ(SLICE((uint16) fn0C00_01CB(ds->t01A1, 778, 0x01, 0xA000, ds), byte, 8), 0x0C), 0x013E, 0xA000, ds), byte, 8);
		Eq_87 bx_112 = 0x00;
		word16 cx_115 = ds->w01B5;
		Eq_86 dx_167 = SEQ(dh_166, 0x0F);
		do
		{
			fn0C00_01BB(0x00, dx_167, bx_112, 0xA000, ds);
			bx_112 = (word16) bx_112 + 2;
			--cx_115;
		} while (cx_115 != 0x00);
		Eq_87 bx_130 = 0x013F;
		word16 cx_132 = ds->w01B7;
		do
		{
			fn0C00_01BB(0x00, dx_167, bx_130, 0xA000, ds);
			bx_130 -= 0x02;
			--cx_132;
		} while (cx_132 != 0x00);
		byte ah_149;
	} while (bios_kbd_check_keystroke(out al_148, out ah_149));
	msdos_terminate_program20();
}

// 0C00:01BB: void fn0C00_01BB(Register Eq_85 ax, Register Eq_86 dl, Register Eq_87 bx, Register (ptr16 Eq_17) es, Register (ptr16 Eq_2) ds)
// Called from:
//      fn0C00_0100
//      fn0C00_01CB
void fn0C00_01BB(Eq_85 ax, Eq_86 dl, Eq_87 bx, struct Eq_17 * es, struct Eq_2 * ds)
{
	es->*((word16) bx + (word16) (ds->w01B9 * ax)) = (byte) dx;
}

// 0C00:01CB: Register byte fn0C00_01CB(Register Eq_85 ax, Register Eq_86 dx, Register Eq_87 bx, Register (ptr16 Eq_17) es, Register (ptr16 Eq_2) ds)
// Called from:
//      fn0C00_0100
byte fn0C00_01CB(Eq_85 ax, Eq_86 dx, Eq_87 bx, struct Eq_17 * es, struct Eq_2 * ds)
{
	word16 cx_16;
	for (cx_16 = 0x0A; cx_16 != 0x00; --cx_16)
	{
		fn0C00_01BB(ax, dx, bx, es, ds);
		byte dh_19 = SLICE(dx, byte, 8);
		ax = (word16) ax + 1;
	}
	Eq_86 dx_20 = SEQ(dh_19, 0x12);
	fn0C00_01BB(ax, dx_20, bx, es, ds);
	fn0C00_01BB(ax - 11, dx_20, bx, es, ds);
	return dh_19;
}

// 0C00:01E0: void fn0C00_01E0(Register Eq_85 ax, Register (memptr (ptr16 Eq_2) ci16) bx, Register (ptr16 Eq_2) ds)
// Called from:
//      fn0C00_0219
void fn0C00_01E0(Eq_85 ax, ci16 Eq_2::* bx, struct Eq_2 * ds)
{
	if (ds->*bx < 0x50)
		++ds->*bx;
	Mem23[ds:0x01A9:word16] = (SLICE(Mem16[ds:14033:word16] *u (ax + Mem16[ds:0x01A1:word16]), word16, 0) & 0x7F) + 0x24;
	ds->t01A7.u0 = 0xA0;
	ds->w01B3 = 0x1E;
}

// 0C00:0207: Register Eq_85 fn0C00_0207(Register Eq_85 bx)
// Called from:
//      fn0C00_0219
Eq_85 fn0C00_0207(Eq_85 bx)
{
	if (bx <= 0x02)
		bx.u0 = 0x02;
	if (bx >= 0xBD)
		bx.u0 = 0xBD;
	return bx;
}

// 0C00:0219: void fn0C00_0219(Register (ptr16 Eq_2) ds)
// Called from:
//      fn0C00_0100
void fn0C00_0219(struct Eq_2 * ds)
{
	Eq_85 bx_12 = ds->t01A3;
	if (ds->t01A7 >= 0xE6)
	{
		Eq_85 ax_9 = ds->t01A9;
		bx_12 = ds->t01A3;
		if (ax_9 >= (word16) bx_12.u0 + 5)
		{
			if (ax_9 > (word16) bx_12.u0 + 5)
				bx_12 = (word16) bx_12.u0 + 1;
		}
		else
			--bx_12;
	}
	ds->t01A3 = fn0C00_0207(bx_12);
	Eq_85 bx_30 = fn0C00_0207((word16) ds->t01A1 + ds->w01A5);
	ds->t01A1 = bx_30;
	if (ds->w01B3 == 0x00)
	{
		Eq_85 ax_39 = (word16) ds->t01A9 + ds->w01AD;
		ds->t01A9 = ax_39;
		if (ax_39 == 0x02)
			ds->w01AD = 0x01;
		if (ax_39 == 0xC6)
			ds->w01AD = ~0x00;
		Eq_87 cx_53 = (word16) ds->t01A7 + ds->w01AB;
		ds->t01A7 = cx_53;
		if (cx_53 == 0x02 && (ax_39 >= bx_30 && ax_39 < (word16) bx_30.u0 + 0x0A))
			ds->w01AB = 0x01;
		Eq_85 bx_68 = ds->t01A3;
		if (cx_53 == 0x013D && (ax_39 >= bx_68 && ax_39 < (word16) bx_68.u0 + 0x0A))
			ds->w01AB = ~0x00;
		if (cx_53 != 0x00)
		{
			if (cx_53 == 0x013F)
				fn0C00_01E0(ax_39, &Eq_2::w01B5, ds);
		}
		else
			fn0C00_01E0(ax_39, &Eq_2::w01B7, ds);
	}
	else
		--ds->w01B3;
}

