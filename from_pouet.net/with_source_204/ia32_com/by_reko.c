// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register cui16 bp, Register (ptr16 Eq_3) ds)
void fn0C00_0100(cui16 bp, struct Eq_3 * ds)
{
	__syscall(0x10);
	struct Eq_9 Eq_3::* di_18 = Eq_3::a01FC;
	real64 rLoc1_197 = 0.0;
	cui16 cx_241 = 0x0800;
	do
	{
		(ds->*di_18).dw0000 = (int32) (sin(rLoc1_197) * (real64) ds->r01ED);
		uint8 cl_23 = (byte) cx_246;
		rLoc1_197 += (real64) ds->r01E9;
		__outb(0x03C8, cl_23);
		__outb(969, cl_23 >> 0x02 ^ 0x3F);
		__outb(969, cl_23 >> 0x02 ^ 0x3F);
		__outb(969, (cl_23 >> 0x02 ^ 0x3F) - 0x0E);
		++di_18;
		cx_241 = cx_246 - 0x01;
		cx_246 = cx_241;
	} while (cx_246 != 0x01);
	do
	{
		word16 di_161 = 0x00;
		cui16 cx_162 = 0x0140;
		do
		{
			byte al_54 = 0x0C00->*((word16) (cx_244 + bp & 0x07FF) + 508);
			byte ah_63 = 0x0C00->*((word16) ((cx_244 + bp) + 0x0200 & 0x07FF) + 508);
			ds->t01F8 = ds->t01F4;
			word16 cx_157 = 0xFE;
			Eq_85 si_106 = 199;
			do
			{
				Eq_85 bx_105 = ~0x1C - -((int16) ((uint32) ((uint16) ((ds->b01F9 ^ ds->b01FB) & 0x1F ^ 0x3F) << 0x08) / SEQ(SLICE(cx_245, byte, 8), ~((byte) cx_245) + 0x01)));
				byte bl_118 = (byte) bx_105;
				if (bx_105 <= si_106)
				{
					struct Eq_83 Eq_91::* di_116 = di_161 + (word16) (si_106 * 0x0140);
					do
					{
						(0xA000->*di_116).b0000 = bl_118;
						--si_106;
						di_116 -= 0x0140;
					} while (bx_105 <= si_106);
				}
				ds->t01F8.u0 = (word16) ds->t01F8.u0 + (int16) al_54;
				ds->w01FA += (int16) ah_63;
				cx_157 = cx_245 - 0x01;
				cx_245 = cx_157;
			} while (cx_245 != 0x01);
			++di_161;
			cx_162 = cx_244 - 0x01;
			cx_244 = cx_162;
		} while (cx_244 != 0x01);
		ds->t01F4.u0 = (word16) ds->t01F4.u0 + 64;
		++bp;
	} while (__inb(0x60) != 0x01);
	bios_video_set_mode(0x03);
}

