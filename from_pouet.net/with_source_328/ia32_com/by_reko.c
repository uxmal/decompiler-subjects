// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register byte cl, Register (ptr16 Eq_3) es, Register (ptr16 Eq_4) ds)
void fn0C00_0100(byte cl, struct Eq_3 * es, struct Eq_4 * ds)
{
	Eq_5 Top_150 = 0;
	__syscall(0x10);
	byte Eq_3::* di_281 = Eq_3::a0300;
	struct Eq_14 * gs_15 = 0xA000;
	word16 cx_16;
	for (cx_16 = SEQ(0xA0, cl); cx_16 != 0x00; --cx_16)
	{
		es->*di_281 = 0x00;
		++di_281;
	}
	__outb(0x03C8, 0x00);
	do
	{
		bcu8 al_23 = -(byte) cx_371;
		__outb(969, al_23 >> 0x02);
		__outb(969, al_23 >> 0x03);
		__outb(969, al_23 >> 0x04);
		Eq_55 ch_290 = SLICE(cx_371 - 0x01, byte, 8);
		cx_16 = cx_371 - 0x01;
		cx_371 = cx_16;
	} while (cx_371 != 0x01);
	struct Eq_14 * ax_39 = SEQ(SLICE(cs, byte, 8) + 0x10, (byte) cs);
	do
	{
		ss->t0302.u1 = 33;
		struct Eq_148 Eq_4::* di_151 = &Eq_4::t0337;
		do
		{
			ss->t0304.u1 = 0x41;
			--ss->t0302;
			do
			{
				__fninit();
				struct Eq_72 * Top_63 = Top_150 - 1;
				Top_63->r0000 = (real64) ss->w02FE;
				Top_63->rFFFFFFFF = 3.14159265358979;
				Top_63->rFFFFFFFF *= (real64) ss->t0302;
				Top_63->rFFFFFFFF /= Top_63->r0000;
				real64 v21_72 = Top_63->rFFFFFFFF;
				Top_63->rFFFFFFFF = cos(v21_72);
				Top_63->rFFFFFFFE = sin(v21_72);
				Top_63->rFFFFFFFE *= Top_63->r0000;
				Top_63->rFFFFFFFE += (real64) ss->w02F8;
				(ds->*di_151).w0002 = (int16) Top_63->rFFFFFFFE;
				Top_63->rFFFFFFFE += (real64) ss->t0306;
				Top_63->rFFFFFFFD = 3.14159265358979;
				Top_63->rFFFFFFFC = (real64) ss->t0306;
				Top_63->rFFFFFFFC /= Top_63->r0000;
				Top_63->rFFFFFFFC += (real64) ss->t0304;
				Top_63->rFFFFFFFD *= Top_63->rFFFFFFFC;
				Top_63->rFFFFFFFD /= Top_63->r0000;
				real64 v23_91 = Top_63->rFFFFFFFD;
				Top_63->rFFFFFFFD = cos(v23_91);
				Top_63->rFFFFFFFC = sin(v23_91);
				Top_63->rFFFFFFFC *= (real64) ss->w02F6;
				Top_63->rFFFFFFFC *= Top_63->rFFFFFFFF;
				ss->w0308 = (int16) Top_63->rFFFFFFFC;
				Top_63->rFFFFFFFD *= Top_63->r0000;
				Top_63->rFFFFFFFD *= Top_63->rFFFFFFFF;
				Top_63->rFFFFFFFC = (real64) ss->t0306;
				Top_63->rFFFFFFFC += (real64) ss->w0308;
				Top_63->rFFFFFFFB = 3.14159265358979;
				Top_63->rFFFFFFFC *= Top_63->rFFFFFFFB;
				Top_63->rFFFFFFFC /= (real64) ss->w02FC;
				real64 v24_109 = Top_63->rFFFFFFFC;
				Top_63->rFFFFFFFC = cos(v24_109);
				Top_63->rFFFFFFFB = sin(v24_109);
				Top_63->rFFFFFFFB *= Top_63->r0000;
				Top_63->rFFFFFFFB += (real64) (ds->*di_151).w0002;
				(ds->*di_151).w0002 = (int16) Top_63->rFFFFFFFB;
				Top_63->rFFFFFFFC *= Top_63->r0000;
				Top_63->rFFFFFFFD += Top_63->rFFFFFFFC;
				(ds->*di_151).w0004 = (int16) Top_63->rFFFFFFFD;
				Top_63->rFFFFFFFD = 3.14159265358979;
				Top_63->rFFFFFFFD *= (real64) ss->t030A;
				Top_63->rFFFFFFFD /= (real64) ss->w02FC;
				real64 v25_126 = Top_63->rFFFFFFFD;
				Top_63->rFFFFFFFD = cos(v25_126);
				Top_63->rFFFFFFFC = sin(v25_126);
				Top_63->rFFFFFFFB = (real64) ss->w0308;
				Top_63->rFFFFFFFB *= Top_63->rFFFFFFFC;
				Top_63->rFFFFFFFA = (real64) (ds->*di_151).w0004;
				Top_63->rFFFFFFFA *= Top_63->rFFFFFFFD;
				Top_63->rFFFFFFFB += Top_63->rFFFFFFFA;
				Top_63->rFFFFFFFB += (real64) ss->w02FA;
				(ds->*di_151).w0000 = (int16) Top_63->rFFFFFFFB;
				Top_63->rFFFFFFFB = (real64) (ds->*di_151).w0004;
				Top_63->rFFFFFFFB *= Top_63->rFFFFFFFC;
				Top_63->rFFFFFFFA = (real64) ss->w0308;
				Top_63->rFFFFFFFA *= Top_63->rFFFFFFFD;
				Top_63->rFFFFFFFB -= Top_63->rFFFFFFFA;
				(ds->*di_151).w0004 = (int16) Top_63->rFFFFFFFB;
				Eq_186 v26_153 = ss->t0304 - 0x01;
				ss->t0304 = v26_153;
				Top_150 = Top_63 - 4;
				++di_151;
			} while (v26_153 != 0x00);
		} while (ss->t0302 != ch_290);
		struct Eq_554 Eq_4::* di_163 = &Eq_4::t0337;
		byte ch_166 = 0x20;
		do
		{
			word16 cx_188 = SEQ(ch_166, 0x40);
			do
			{
				cx_317 = SEQ(ch_250, cl_244 - 0x01);
				Eq_564 eax_171 = (ds->*di_370).t0000.dw0000;
				ds->a030F[0].dw0000 = eax_171;
				ds->t031F.dw0000 = eax_171;
				ds->dw0313 = (ds->*di_370).dw0006;
				ds->dw0317 = (ds->*di_370).dw018C;
				word32 eax_179 = (ds->*di_370).dw0186;
				ds->dw031B = eax_179;
				fn0C00_0241(((ds->*di_370).w0004 + 0x8A >> 0x01) + SEQ(SLICE(eax_179, byte, 8), (SLICE(cx_188, byte, 8) & 0x04) << 0x03), Eq_4::a030F, ax_39, ds);
				byte cl_244 = (byte) cx_188;
				byte ch_250 = SLICE(cx_188, byte, 8);
				di_163 = (struct Eq_554 Eq_4::*) &di_370->dw0006;
				di_370 = di_163;
				cx_188 = cx_317;
			} while (cl_244 != 0x01);
			di_163 = (struct Eq_554 Eq_4::*) ((char *) &di_370->dw0006 + 6);
			ch_166 = ch_250 - 0x01;
		} while (ch_250 != 0x01);
		ss->t0306.u1 = (byte) ss->t0306.u1 + 3;
		ss->t030A.u1 = (byte) ss->t030A.u1 + 1;
		byte Eq_14::* di_258 = Eq_14::a0000;
		word16 cx_272 = SEQ(~0x05, cl_244 - 0x01);
		do
		{
			gs_15->*di_258 = ax_39->*di_258;
			ax_39->*di_258 = 0x00;
			--cx_272;
			++di_258;
			ch_290.u1 = SLICE(cx_272, byte, 8);
		} while (cx_272 != 0x00);
	} while (__inb(0x60) != 0x01);
	bios_video_set_mode(0x03);
}

// 0C00:0241: void fn0C00_0241(Register Eq_591 bpl, Register (memptr (ptr16 Eq_4) Eq_592) si, Register (ptr16 Eq_14) es, Register (ptr16 Eq_4) ds)
// Called from:
//      fn0C00_0100
void fn0C00_0241(Eq_591 bpl, struct Eq_592 Eq_4::* si, struct Eq_14 * es, struct Eq_4 * ds)
{
	Eq_676 ax_15 = si[1];
	Eq_676 bx_14 = si[3];
	Eq_676 cx_21 = si[5];
	Eq_676 dx_10 = si[7];
	if (ax_15 < bx_14)
	{
		bx_14 = ax_15;
		ax_15 = bx_14;
	}
	if (ax_15 < cx_21)
	{
		cx_21 = ax_15;
		ax_15 = cx_21;
	}
	if (ax_15 < dx_10)
	{
		dx_10 = ax_15;
		ax_15 = dx_10;
	}
	if (bx_14 < cx_21)
	{
		cx_21 = bx_14;
		bx_14 = cx_21;
	}
	if (bx_14 < dx_10)
		dx_10 = bx_14;
	if (cx_21 < dx_10)
		dx_10 = cx_21;
	cup16 ax_62 = ax_15 - dx_10;
	if (ax_62 != 0x00)
	{
		ui16 di_150 = (dx_10 << 0x06) * 0x05;
		word16 Eq_4::* bx_87 = Eq_4::a0323;
		word16 cx_100 = 0x08;
		do
		{
			++si;
			ds->*bx_87 = (ds->*si).w0000 - si[1];
			--cx_100;
			++bx_87;
			ui8 cl_101 = (byte) cx_100;
		} while (cx_100 != 0x00);
		ds->b030C = cl_101;
		byte cl_227 = (byte) ax_62;
		Eq_676 si_107 = dx_10;
		do
		{
			struct Eq_736 Eq_4::* bx_109 = &Eq_4::t0311;
			word16 cx_158 = SEQ(0x04, cl_227);
			do
			{
				byte ch_213 = SLICE(cx_158, byte, 8);
				byte cl_224 = (byte) cx_158;
				if (si_107 >= (ds->*bx_109).t0000 && si_107 < bx_109[1] || si_107 >= bx_109[1] && si_107 < (ds->*bx_109).t0000)
				{
					Eq_745 ax_139 = (int16) ((ds->*bx_109).w0012 *s (si_107 - (ds->*bx_109).t0000) / bx_109[5]) + (ds->*bx_109).wFFFFFFFE;
					ds->b030C = ds->b030C ^ 0x01;
					if (ds->b030C != 0x00)
						ds->t02D5 = ax_139;
					else
					{
						Eq_745 cx_161 = 0x5555;
						if (ax_139 >= 0x5555)
						{
							cx_161 = ax_139;
							ax_139.u0 = 0x5555;
						}
						Eq_808 di_169 = (word16) ax_139 + di_150;
						word16 cx_173 = cx_161 - ax_139 + 0x01;
						cu8 al_273 = (byte) bp;
						do
						{
							if (al_273 >= es->*di_169)
								es->*di_169 = al_273;
							di_169 = (word16) di_169 + 1;
							--cx_173;
						} while (cx_173 != 0x00);
						ch_213 = SLICE(cx_158, byte, 8);
						cl_224 = (byte) cx_158;
						di_150 += 0x0140;
					}
				}
				byte ch_216 = ch_213 - 0x01;
				++bx_109;
				cx_158 = SEQ(ch_216, cl_224);
			} while (ch_216 != 0x00);
			si_107 = (word16) si_107 + 1;
			cl_227 = cl_224 - 0x01;
		} while (cl_227 != 0x00);
	}
}

