// subject_0800.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_0800.h"

// 0800:01FA: void _main(Register byte ch, Register Eq_5 ds)
void _main(byte ch, Eq_5 ds)
{
	_printf(SEQ(ch, 0xC0), 0, 0xAE, ds, 404);
}

// 0800:0796: void __LONGTOA(Register Eq_5 ds, Stack Eq_5 bArg02, Stack Eq_21 bArg04, Stack Eq_5 wArg06, Stack (memptr Eq_5 byte) wArg08, Stack Eq_5 wArg0A, Stack Eq_5 wArg0C)
// Called from:
//      __VPRINTER
void __LONGTOA(Eq_5 ds, Eq_5 bArg02, Eq_21 bArg04, Eq_5 wArg06, byte Eq_5::* wArg08, Eq_5 wArg0A, Eq_5 wArg0C)
{
	byte Eq_5::* di_125 = wArg08;
	cu8 bl_28 = (byte) wArg06;
	if (wArg06 > 0x24 || bl_28 < 0x02)
	{
l0800_0804:
		ds->*di_125 = 0x00;
		return;
	}
	Eq_5 ax_31 = wArg0A;
	Eq_5 cx_33 = wArg0C;
	if (wArg0C < 0x00 && bArg04 != 0x00)
	{
		ds->*wArg08 = 0x2D;
		ax_31 = -wArg0A;
		di_125 = wArg08 + 1;
		cx_33 = -wArg0C - (ax_31 == 0x00);
	}
	byte Eq_5::* si_107 = fp - 0x24;
	if (cx_33 != 0x00)
	{
		do
		{
			uint32 dx_ax_55 = (uint32) cx_33;
			uint32 dx_ax_63 = SEQ((uint16) (dx_ax_55 % wArg06), ax_31);
			ds->*si_107 = (byte) (uint16) (dx_ax_63 % wArg06);
			Eq_5 ax_59 = (uint16) (dx_ax_55 /u wArg06);
			cx_33 = ax_59;
			ax_31 = (uint16) (dx_ax_63 /u wArg06);
			++si_107;
		} while (ax_59 != 0x00);
l0800_07E7:
		if (ax_31 == 0x00)
		{
			word16 cx_104 = si_107 + (0x24 - fp);
			do
			{
				byte al_117;
				--si_107;
				cu8 al_111 = ds->*si_107;
				if (al_111 < 0x0A)
					al_117 = al_111 + 0x30;
				else
					al_117 = (byte) ((word16) bArg02 + (al_111 - 0x0A));
				ds->*di_125 = al_117;
				++di_125;
				--cx_104;
			} while (cx_104 != 0x00);
			goto l0800_0804;
		}
	}
	uint32 dx_ax_82 = (uint32) ax_31;
	ds->*si_107 = (byte) (uint16) (dx_ax_82 % wArg06);
	ax_31 = (uint16) (dx_ax_82 /u wArg06);
	++si_107;
	goto l0800_07E7;
}

// 0800:0920: void _printf(Register Eq_5 cx, Register Eq_5 dx, Register Eq_5 bx, Register Eq_5 ds, Stack (memptr Eq_5 byte) wArg02)
// Called from:
//      _main
void _printf(Eq_5 cx, Eq_5 dx, Eq_5 bx, Eq_5 ds, byte Eq_5::* wArg02)
{
	__VPRINTER(cx, dx, bx, ds, fp + 0x04, wArg02);
}

// 0800:0B19: void __REALCVT(Register Eq_5 ds)
// Called from:
//      __VPRINTER
void __REALCVT(Eq_5 ds)
{
	(*((word16) ds + 0x0426))();
}

// 0800:0B1D: Register word16 fn0800_0B1D(Sequence (ptr32 Eq_137) es_di, Register Eq_5 ds, Stack Eq_5 wArg02)
// Called from:
//      __VPRINTER
word16 fn0800_0B1D(struct Eq_137 * es_di, Eq_5 ds, Eq_5 wArg02)
{
	word16 di = (word16) es_di;
	bcu8 dh_13 = SLICE(wArg02, byte, 8);
	Mem21[es_di + 0x00:byte] = Mem7[ds:CONVERT(dh_13 >>u 0x04, byte, uint16) + 0x03AF:byte];
	Mem27[es_di + 1:byte] = Mem21[ds:CONVERT(dh_13 & 0x0F, byte, uint16) + 0x03AF:byte];
	bcu8 dl_29 = (byte) wArg02;
	Mem33[es_di + 2:byte] = Mem27[ds:CONVERT(dl_29 >>u 0x04, byte, uint16) + 0x03AF:byte];
	Mem40[es_di + 3:byte] = Mem33[ds:CONVERT(dl_29 & 0x0F, byte, uint16) + 0x03AF:byte];
	return di + 4;
}

// 0800:0B48: void __VPRINTER(Register Eq_5 cx, Register Eq_5 dx, Register Eq_5 bx, Register Eq_5 ds, Stack Eq_5 wArg02, Stack (memptr Eq_5 byte) wArg04)
// Called from:
//      _printf
void __VPRINTER(Eq_5 cx, Eq_5 dx, Eq_5 bx, Eq_5 ds, Eq_5 wArg02, byte Eq_5::* wArg04)
{
	ci8 bLoc57_1215 = 0x50;
	struct Eq_185 Eq_5::* sp_1133 = fp - 0xA0;
	byte Eq_5::* wLoc98_1218 = fp - 0x56;
l0800_0BAB:
	byte Eq_5::* di_1006 = wLoc98_1218;
l0800_0BAF:
	byte Eq_5::* si_1114 = wArg04;
	while (true)
	{
		byte al_37 = ds->*si_1114;
		++si_1114;
		byte al_1060 = al_37;
		if (al_37 == 0x00)
			break;
		if (al_37 == 0x25)
		{
			al_1060 = ds->*si_1114;
			++si_1114;
			if (al_1060 != 0x25)
			{
				wLoc98_1218 = di_1006;
				cu8 ch_1149 = 0x00;
				Eq_5 wLoc8E_1223 = 0x00;
				cui16 wLoc9A_1224 = 0x00;
				byte bLoc8F_1225 = 0x00;
				Eq_5 wLoc94_1226 = ~0x00;
				Eq_5 wLoc92_1227 = ~0x00;
				while (true)
				{
					Eq_5 ax_65 = (uint16) al_1060;
					cu8 bl_68 = (byte) ax_65;
					byte bh_73 = SLICE(ax_65, byte, 8);
					dx = ax_65;
					byte dl_131 = (byte) ax_65;
					bx = SEQ(bh_73, bl_68 - 0x20);
					cx = SEQ(ch_1149, 0x00);
					if (bl_68 >= 0x80)
						break;
					bx = SEQ(bh_73, ds->*((word16) bx + 959));
					cx = SEQ(ch_1149, 0x00);
					if (bx > 0x17)
						goto l0800_1035;
					byte * es_di_1889;
					byte * es_di_1893;
					Eq_5 bx_1906;
					byte * es_di_1902;
					Eq_5 bx_1886;
					Eq_5 bx_1896;
					byte bLoc95_1269;
					Eq_5 cx_172;
					byte Eq_287::* di_484;
					struct Eq_287 * es_487;
					Eq_5 dx_354;
					Eq_5 ax_353;
					bx <<= 0x01;
					byte bl_449 = (byte) (bx << 0x01);
					cx = SEQ(ch_1149, 0x00);
					switch (bx)
					{
					case 0x00:
						cx = SEQ(ch_1149, 0x00);
						if (ch_1149 > 0x00)
							goto l0800_0C4A;
						if (bLoc8F_1225 != 0x2B)
							bLoc8F_1225 = dl_131;
						break;
					case 0x01:
						cx = SEQ(ch_1149, 0x00);
						if (ch_1149 > 0x00)
							goto l0800_0C4A;
						wLoc9A_1224 |= 0x01;
						break;
					case 0x02:
						Eq_5 ax_948 = ds->*wArg02;
						wArg02 = (word16) wArg02 + 2;
						if (ch_1149 < 0x02)
						{
							wLoc94_1226 = ax_948;
							ch_1149 = 0x03;
							goto l0800_0CBA;
						}
						cx = SEQ(ch_1149, 0x00);
						if (ch_1149 != 0x04)
							goto l0800_0CA3;
						wLoc92_1227 = ax_948;
						++ch_1149;
						break;
					case 0x03:
						cx = SEQ(ch_1149, 0x00);
						if (ch_1149 > 0x00)
							goto l0800_0C4A;
						wLoc9A_1224 |= 0x02;
						break;
					case 0x04:
						cx = SEQ(ch_1149, 0x00);
						if (ch_1149 >= 0x04)
							goto l0800_0CA3;
						ch_1149 = 0x04;
						break;
					case 0x05:
l0800_0CD5:
						dx = bx;
						Eq_5 ax_898 = (int16) ((byte) ax_65 - 0x30);
						if (ch_1149 <= 0x02)
						{
							ch_1149 = 0x02;
							wLoc94_1226 = ax_898;
							if (wLoc94_1226 < 0x00)
								goto l0800_0CBA;
							wLoc94_1226 = (word16) ax_898 + ((wLoc94_1226 << 0x03) + (wLoc94_1226 << 0x01));
						}
						else
						{
							cx = SEQ(ch_1149, 0x00);
							if (ch_1149 != 0x04)
							{
l0800_0CA3:
								goto l0800_1035;
							}
							wLoc92_1227 = ax_898;
							if (wLoc92_1227 < 0x00)
								goto l0800_0CBA;
							wLoc92_1227 = (word16) ax_898 + ((wLoc92_1227 << 0x03) + (wLoc92_1227 << 0x01));
						}
						break;
					case 0x06:
						wLoc9A_1224 |= 0x10;
						ch_1149 = 0x05;
						break;
					case 0x07:
						wLoc9A_1224 = (wLoc9A_1224 | 0x0100) & ~0x10;
						ch_1149 = 0x05;
						break;
					case 0x08:
						wLoc9A_1224 = wLoc9A_1224 & ~0x10 | 0x80;
						ch_1149 = 0x05;
						break;
					case 0x09:
						if (ch_1149 > 0x00)
							goto l0800_0CD5;
						if ((wLoc9A_1224 & 0x02) == 0x00)
						{
							wLoc9A_1224 |= 0x08;
							ch_1149 = 0x01;
						}
						else
						{
l0800_0CBA:
						}
						break;
					case 0x0A:
						int32 dx_ax_362 = (int32) (ds->*wArg02);
						bLoc95_1269 = 0x01;
						ax_353 = (word16) dx_ax_362;
						dx_354 = SLICE(dx_ax_362, word16, 16);
						bx_1886 = SEQ(0x0A, bl_449);
						goto l0800_0D77;
					case 11:
						bx_1906 = SEQ(0x08, bl_449);
						goto l0800_0D4F;
					case 0x0C:
						bx_1896 = SEQ(0x0A, bl_449);
						goto l0800_0D54;
					case 0x0D:
						bx_1906 = SEQ(0x10, dl_131 + 233);
l0800_0D4F:
						bLoc8F_1225 = 0x00;
						bx_1896 = bx_1906;
l0800_0D54:
						bLoc95_1269 = 0x00;
						ax_353 = ds->*wArg02;
						dx_354.u0 = 0x00;
						bx_1886 = bx_1896;
l0800_0D77:
						struct Eq_503 Eq_5::* di_364 = (word16) wArg02 + 1;
						byte bh_429 = SLICE(bx_1886, byte, 8);
						Eq_5 di_365 = &di_364->t0001;
						wArg04 = si_1114;
						if ((wLoc9A_1224 & 0x10) != 0x00)
						{
							dx_354 = (ds->*di_364).t0001;
							di_365 = (char *) &di_364->t0001 + 2;
						}
						wArg02 = di_365;
						if (ax_353 == 0x00)
						{
							dx = dx_354;
							byte dh_1148 = SLICE(dx_354, byte, 8);
							if (dx_354 != 0x00)
								goto l0800_0DC6;
							bx = bx_1886;
							if (wLoc92_1227 == 0x00)
							{
								cx = wLoc94_1226;
								if (wLoc94_1226 != 0x00 && wLoc94_1226 != ~0x00)
								{
									byte dl_838;
									if ((wLoc9A_1224 & 0x08) != 0x00)
										dl_838 = 0x30;
									else
										dl_838 = 0x20;
									do
									{
										dx = SEQ(dh_1148, dl_838);
										di_1006 = fn0800_0B6E(SEQ(ds, di_1006), SEQ(ss, fp - 2), dl_838, cx, dx, bx_1886);
										sp_1133 = (struct Eq_185 Eq_5::*) ((char *) &sp_1133->t0000 + 0x0000FFFE);
										--cx;
									} while (cx != 0x00);
								}
								goto l0800_0BAF;
							}
						}
						else
						{
l0800_0DC6:
							wLoc9A_1224 |= 0x04;
						}
						struct Eq_563 Eq_5::* sp_414 = sp_1133 - 2;
						(ss->*sp_414).t0000 = dx_354;
						(ss->*sp_414).tFFFFFFFE = ax_353;
						(ss->*sp_414).ptrFFFFFFFC = fp - 0x89;
						Eq_5 ax_434 = (int16) bh_429;
						(ss->*sp_414).tFFFFFFFA = ax_434;
						(ss->*sp_414).tFFFFFFF8 = SEQ(SLICE(ax_434, byte, 8), bLoc95_1269);
						(ss->*sp_414).tFFFFFFF6 = bx_1886;
						__LONGTOA(ds, (ss->*sp_414).tFFFFFFF6, (ss->*sp_414).tFFFFFFF8, (ss->*sp_414).tFFFFFFFA, (ss->*sp_414).ptrFFFFFFFC, (ss->*sp_414).tFFFFFFFE, (ss->*sp_414).t0000);
						(ss->*sp_414).t0000 = ss;
						Eq_5 es_465 = (ss->*sp_414).t0000;
						sp_1133 = (struct Eq_185 Eq_5::*) ((char *) &sp_414->t0000 + 2);
						dx = wLoc92_1227;
						if (wLoc92_1227 > 0x00)
						{
							es_di_1893 = SEQ(es_465, fp - 0x89);
							goto l0800_0F0C;
						}
						else
						{
							es_di_1902 = SEQ(es_465, fp - 0x89);
							goto l0800_0EFC;
						}
					case 0x0E:
						struct Eq_384 Eq_5::* sp_266 = sp_1133 - 2;
						(ss->*sp_266).t0000 = ds->*wArg02;
						byte Eq_5::* di_263 = fp - 0x8A;
						wArg02 = (word16) wArg02 + 2;
						if ((wLoc9A_1224 & 0x20) != 0x00)
						{
							(ss->*sp_266).tFFFFFFFE = ds->*((word16) wArg02 + 2);
							(ss->*sp_266).tFFFFFFFC = ss;
							Eq_5 es_283 = (ss->*sp_266).tFFFFFFFC;
							byte Eq_5::* di_289 = fn0800_0B1D(SEQ(es_283, fp - 0x8A), ds, (ss->*sp_266).tFFFFFFFE);
							es_283->*di_289 = 0x3A;
							wArg02 = (word16) wArg02 + 4;
							di_263 = di_289 + 1;
						}
						(ss->*sp_266).tFFFFFFFE = ss;
						Eq_5 es_304 = (ss->*sp_266).tFFFFFFFE;
						byte Eq_5::* di_312 = fn0800_0B1D(SEQ(es_304, di_263), ds, (ss->*sp_266).t0000);
						ds->*di_312 = 0x00;
						sp_1133 = (struct Eq_185 Eq_5::*) ((char *) &sp_266->t0000 + 2);
						wLoc9A_1224 &= ~0x04;
						Eq_5 di_327 = di_312 - (fp - 0x8A);
						dx = wLoc92_1227;
						if (wLoc92_1227 <= di_327)
							dx = di_327;
						es_di_1902 = SEQ(es_304, fp - 0x8A);
						goto l0800_0EFC;
					case 0x0F:
						Eq_5 cx_207 = wLoc92_1227;
						if (wLoc92_1227 < 0x00)
							cx_207.u0 = 0x06;
						int16 wLoc06_1253;
						Eq_5 ax_239;
						struct Eq_826 Eq_5::* sp_213 = sp_1133 - 2;
						(ss->*sp_213).t0000 = wArg02;
						(ss->*sp_213).tFFFFFFFE = cx_207;
						(ss->*sp_213).ptrFFFFFFFC = fp - 0x89;
						(ss->*sp_213).tFFFFFFFA = ax_65;
						(ss->*sp_213).tFFFFFFF8 = wLoc9A_1224 & 0x01;
						if ((wLoc9A_1224 & 0x80) != 0x00)
						{
							ax_239.u0 = 0x02;
							wLoc06_1253 = 0x04;
						}
						else if ((wLoc9A_1224 & 0x0100) != 0x00)
						{
							ax_239.u0 = 0x08;
							wLoc06_1253 = 0x0A;
						}
						else
						{
							wLoc06_1253 = 0x08;
							ax_239.u0 = 0x06;
						}
						(ss->*sp_213).tFFFFFFF6 = ax_239;
						__REALCVT(ds);
						(ss->*sp_213).tFFFFFFF4 = ss;
						wArg02 = (word16) wArg02 + wLoc06_1253;
						sp_1133 = sp_213 - 0x0A;
						es_di_1902 = SEQ((ss->*sp_213).tFFFFFFF4, fp - 0x89);
l0800_0EFC:
						es_487 = SLICE(es_di_1902, selector, 16);
						di_484 = (word16) es_di_1902;
						if ((wLoc9A_1224 & 0x08) != 0x00)
						{
							dx = wLoc94_1226;
							es_di_1893 = es_di_1902;
							if (wLoc94_1226 > 0x00)
							{
l0800_0F0C:
								es_487 = SLICE(es_di_1893, selector, 16);
								di_484 = (word16) es_di_1893;
								Eq_5 cx_491 = fn0800_0B61(di_484, es_487);
								if (*es_di_1893 == 0x2D)
									--cx_491;
								dx -= cx_491;
								if (dx > 0x00)
									wLoc8E_1223 = dx;
							}
						}
						if (bLoc8F_1225 != 0x00 && es_487->*di_484 != 0x2D)
						{
							--di_484;
							es_487->*di_484 = bLoc8F_1225;
							Eq_780 v40_527 = wLoc8E_1223 - 0x01;
							wLoc8E_1223 = v40_527 + (v40_527 <u 0x00);
						}
						cx_172 = fn0800_0B61(di_484, es_487);
						es_di_1889 = &(es_487->*di_484);
						goto l0800_0F3D;
					case 0x10:
						union Eq_5 Eq_5::* sp_191 = sp_1133 - 2;
						ss->*sp_191 = ss;
						wArg02 = (word16) wArg02 + 2;
						sp_1133 = (struct Eq_185 Eq_5::*) ((char *) sp_191 + 2);
						cx_172.u0 = 0x01;
						es_di_1889 = SEQ(ss->*sp_191, fp - 0x89);
						goto l0800_0F3D;
					case 0x11:
						byte * es_di_137;
						bool v70_1208;
						if ((wLoc9A_1224 & 0x20) == 0x00)
						{
							word16 di_146 = ds->*wArg02;
							union Eq_5 Eq_5::* sp_149 = sp_1133 - 2;
							ss->*sp_149 = ds;
							wArg02 = (word16) wArg02 + 2;
							v70_1208 = di_146 != 0x00;
							es_di_137 = SEQ(ss->*sp_149, di_146);
						}
						else
						{
							es_di_137 = ds->*wArg02;
							wArg02 = (word16) wArg02 + 4;
							v70_1208 = (SLICE(es_di_137, selector, 16) | (word16) es_di_137) != 0x00;
						}
						byte * es_di_1899 = es_di_137;
						if (!v70_1208)
						{
							union Eq_5 Eq_5::* sp_160 = sp_1133 - 2;
							ss->*sp_160 = ds;
							es_di_1899 = SEQ(ss->*sp_160, 0x03A8);
						}
						cx_172 = fn0800_0B61((word16) es_di_1899, SLICE(es_di_1899, selector, 16));
						if (cx_172 > wLoc92_1227)
							cx_172 = wLoc92_1227;
						es_di_1889 = es_di_1899;
l0800_0F3D:
						byte Eq_5::* di_545 = (word16) es_di_1889;
						wArg04 = si_1114;
						byte Eq_5::* si_1134 = di_545;
						Eq_5 bx_558 = wLoc94_1226;
						if ((wLoc9A_1224 & 0x05) == 0x05)
						{
							if (dl_131 != 111)
							{
								if (dl_131 == 0x78 || dl_131 == 88)
								{
									Eq_5 v37_579 = wLoc8E_1223 - 0x02;
									wLoc9A_1224 |= 0x40;
									bx_558 = wLoc94_1226 - 0x02;
									wLoc8E_1223 = v37_579;
									if (v37_579 < 0x00)
										wLoc8E_1223.u0 = 0x00;
								}
l0800_0F8A:
								cx = cx_172 + wLoc8E_1223;
								if ((wLoc9A_1224 & 0x02) == 0x00)
								{
									for (; bx_558 > cx; --bx_558)
									{
										di_1006 = fn0800_0B6E(SEQ(ds, di_1006), SEQ(ss, fp - 2), 0x20, cx, dx, bx_558);
										sp_1133 = (struct Eq_185 Eq_5::*) ((char *) &sp_1133->t0000 + 0x0000FFFE);
									}
								}
								if ((wLoc9A_1224 & 0x40) != 0x00)
								{
									di_1006 = fn0800_0B6E(SEQ(ds, fn0800_0B6E(SEQ(ds, di_1006), SEQ(ss, fp - 2), 0x30, cx, dx, bx_558)), SEQ(ss, fp - 2), dl_131, cx, dx, bx_558);
									sp_1133 = (struct Eq_185 Eq_5::*) ((char *) &sp_1133->t0000 + 0x0000FFFC);
								}
								dx = wLoc8E_1223;
								if (wLoc8E_1223 > 0x00)
								{
									Eq_5 cx_700 = cx - wLoc8E_1223;
									bx_558 -= wLoc8E_1223;
									byte al_717 = *es_di_1889;
									if (al_717 == 0x2D || (al_717 == 0x20 || al_717 == 0x2B))
									{
										si_1134 = di_545 + 1;
										di_1006 = fn0800_0B6E(SEQ(ds, di_1006), SEQ(ss, fp - 2), ds->*di_545, cx_700, wLoc8E_1223, bx_558);
										sp_1133 = (struct Eq_185 Eq_5::*) ((char *) &sp_1133->t0000 + 0x0000FFFE);
										--cx_700;
										--bx_558;
									}
									Eq_5 cx_753 = wLoc8E_1223;
									if (wLoc8E_1223 != 0x00)
									{
										do
										{
											di_1006 = fn0800_0B6E(SEQ(ds, di_1006), SEQ(ss, fp - 2), 0x30, cx_753, cx_700, bx_558);
											sp_1133 = (struct Eq_185 Eq_5::*) ((char *) &sp_1133->t0000 + 0x0000FFFE);
											--cx_753;
										} while (cx_753 != 0x00);
									}
									dx = cx_753;
									cx = cx_700;
								}
								if (cx != 0x00)
								{
									bx_558 -= cx;
									do
									{
										ds->*di_1006 = ds->*si_1134;
										ci8 v42_792 = bLoc57_1215 - 0x01;
										++si_1134;
										++di_1006;
										bLoc57_1215 = v42_792;
										if (v42_792 <= 0x00)
											di_1006 = fn0800_0B76(SEQ(ss, fp - 2), cx, dx, bx_558, di_1006);
										--cx;
									} while (cx != 0x00);
								}
								bx = bx_558;
								if (bx_558 > 0x00)
								{
									cx = bx_558;
									do
									{
										di_1006 = fn0800_0B6E(SEQ(ds, di_1006), SEQ(ss, fp - 2), 0x20, cx, dx, bx_558);
										sp_1133 = (struct Eq_185 Eq_5::*) ((char *) &sp_1133->t0000 + 0x0000FFFE);
										--cx;
									} while (cx != 0x00);
								}
								goto l0800_0BAF;
							}
							if (wLoc8E_1223 <= 0x00)
								wLoc8E_1223.u0 = 0x01;
						}
						goto l0800_0F8A;
					case 0x12:
						uint16 * es_di_102;
						wArg04 = si_1114;
						if ((wLoc9A_1224 & 0x20) == 0x00)
						{
							word16 di_106 = ds->*wArg02;
							union Eq_5 Eq_5::* sp_111 = sp_1133 - 2;
							ss->*sp_111 = ds;
							wArg02 = (word16) wArg02 + 2;
							es_di_102 = SEQ(ss->*sp_111, di_106);
						}
						else
						{
							es_di_102 = ds->*wArg02;
							wArg02 = (word16) wArg02 + 4;
						}
						*es_di_102 = (uint16) (0x50 - bLoc57_1215);
						goto l0800_0BAB;
					case 0x13:
					case 0x14:
					case 0x15:
l0800_1035:
						byte Eq_5::* si_1012 = si_1114;
						byte al_1002 = 0x25;
						do
						{
							di_1006 = fn0800_0B6E(SEQ(ds, di_1006), SEQ(ss, fp - 2), al_1002, cx, dx, bx);
							byte al_1014 = ds->*si_1012;
							++si_1012;
							al_1002 = al_1014;
						} while (al_1014 != 0x00);
						goto l0800_1047;
					case 22:
						wLoc9A_1224 &= ~0x20;
						ch_1149 = 0x05;
						break;
					case 0x17:
						wLoc9A_1224 |= 0x20;
						ch_1149 = 0x05;
						break;
					}
					al_1060 = ds->*si_1114;
					++si_1114;
				}
l0800_0C4A:
				goto l0800_1035;
			}
		}
		ds->*di_1006 = al_1060;
		ci8 v15_1067 = bLoc57_1215 - 0x01;
		++di_1006;
		bLoc57_1215 = v15_1067;
		if (v15_1067 <= 0x00)
			di_1006 = fn0800_0B76(SEQ(ss, fp - 2), cx, dx, bx, di_1006);
	}
l0800_1047:
	if (bLoc57_1215 < 0x50)
		fn0800_0B76(SEQ(ss, fp - 2), cx, dx, bx, di_1006);
}

// 0800:0B61: Register word16 fn0800_0B61(Register (memptr (ptr16 Eq_287) byte) di, Register (ptr16 Eq_287) es)
// Called from:
//      __VPRINTER
word16 fn0800_0B61(byte Eq_287::* di, struct Eq_287 * es)
{
	word16 cx_12 = ~0x00;
	while (cx_12 != 0x00)
	{
		di = di_45 + 1;
		--cx_12;
		di_45 = di;
		if (es->*di_45 != 0x00)
			return ~cx_12 - 0x01;
	}
	return ~cx_12 - 0x01;
}

// 0800:0B6E: Register (memptr Eq_5 byte) fn0800_0B6E(Sequence (ptr32 byte) ds_di, Sequence (ptr32 Eq_224) ss_bp, Register byte al, Register Eq_5 cx, Register Eq_5 dx, Register Eq_5 bx)
// Called from:
//      __VPRINTER
byte Eq_5::* fn0800_0B6E(byte * ds_di, struct Eq_224 * ss_bp, byte al, Eq_5 cx, Eq_5 dx, Eq_5 bx)
{
	byte Eq_5::* di = (word16) ds_di;
	*ds_di = al;
	ci8 v9_11 = ss_bp->bFFFFFFAB - 0x01;
	ss_bp->bFFFFFFAB = v9_11;
	if (v9_11 <= 0x00)
		return di + 1;
	return fn0800_0B76(ss_bp, cx, dx, bx, di + 1);
}

// 0800:0B76: Register (memptr Eq_5 byte) fn0800_0B76(Sequence (ptr32 Eq_224) ss_bp, Register Eq_5 cx, Register Eq_5 dx, Register Eq_5 bx, Register (memptr Eq_5 byte) di)
// Called from:
//      __VPRINTER
//      fn0800_0B6E
byte Eq_5::* fn0800_0B76(struct Eq_224 * ss_bp, Eq_5 cx, Eq_5 dx, Eq_5 bx, byte Eq_5::* di)
{
	word16 bp = (word16) ss_bp;
	word16 di_20 = di - (bp - 0x54);
	word16 ax_34;
	(seg0800->*ss_bp->ptr000A)();
	if (ax_34 == 0x00)
		ss_bp->wFFFFFFFE = 0x01;
	ss_bp->bFFFFFFAB = 0x50;
	ss_bp->wFFFFFFA8 += di_20;
	return bp - 0x54;
}

