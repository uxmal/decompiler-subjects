// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register (ptr16 Eq_2) ds)
void fn0C00_0100(struct Eq_2 * ds)
{
	bios_video_set_mode(0x13);
	__wait();
	__fninit();
	real64 rLoc1_135 = 0.0;
	cui16 cx_149 = 0x40;
	do
	{
		char cl_14 = (byte) cx_152;
		__outb(0x03C8, cl_14);
		__outb(969, cl_14);
		__outb(969, cl_14);
		char al_22 = (byte) ((cl_14 >> 0x01) * 0x03);
		if (al_22 >= 0x3F)
			al_22 = 0x3F;
		__outb(969, al_22);
		byte cl_115 = (byte) (cx_152 - 0x01);
		cx_149 = cx_152 - 0x01;
		cx_152 = cx_149;
	} while (cx_152 != 0x01);
	do
	{
		rLoc1_135 += (real64) ds->r01D7;
		fn0C00_01C3((char *) &ds->r01D7 + 6, rLoc1_135);
		fn0C00_01C3(&ds->r01D7 + 4, rLoc1_135);
		fn0C00_01C3((char *) &ds->r01D7 + 26, rLoc1_135);
		struct Eq_71 Eq_75::* cx_109 = SEQ(~0x05, cl_115);
		do
		{
			uint32 dx_ax_49 = (uint32) (cx_109 - 0x01);
			ds->t01D3.u2 = (uint16) (dx_ax_49 % 0x0140);
			ds->t01D5.u1 = (uint16) (dx_ax_49 /u 0x0140);
			real64 rLoc2_138 = (real64) ds->t01D3;
			real64 rLoc3_139 = (real64) ds->t01D5;
			word64 rRet0_71;
			word16 bx_65 = fn0C00_0192((char *) &ds->r01D7 + 6, rLoc3_139, rLoc2_138, rLoc1_135, out rRet0_71);
			ds->t01D3.u3 = (real32) rRet0_71;
			real64 rRet0_84;
			fn0C00_0192(bx_65, rLoc3_139, rLoc2_138, rLoc1_135, out rRet0_84);
			ds->t01D3.u0 = (int16) (rRet0_84 + (real64) ds->t01D3);
			Eq_93 al_91 = ds->t01D3;
			byte al_101 = al_91 - 0x0C;
			if (al_91 < 0x0C)
			{
				al_101 = 0x00;
				if (true)
					al_101 = 0x3F;
			}
			(0xA000->*cx_109).bFFFFFFFF = al_101;
			--cx_109;
			cl_115 = (byte) cx_109;
		} while (cx_109 != &Eq_75::t0000);
	} while (__inb(0x60) != 0x01);
	msdos_terminate_program20();
}

// 0C00:0192: Register word16 fn0C00_0192(Sequence (ptr32 real32) ds_bx, FpuStack real64 rArg0, FpuStack real64 rArg1, FpuStack real64 rArg2, FpuStack out Eq_117 rLoc1Out)
// Called from:
//      fn0C00_0100
word16 fn0C00_0192(real32 * ds_bx, real64 rArg0, real64 rArg1, real64 rArg2, union Eq_117 & rLoc1Out)
{
	struct Eq_154 * ds = SLICE(ds_bx, selector, 16);
	word16 bx = (word16) ds_bx;
	real64 rLoc1_44 = sqrt(fn0C00_01BA(ds_bx, rArg1) + fn0C00_01BA(bx + 0x0A, rArg0)) / (real64) ds->w01FB;
	__wait();
	__wait();
	if (1.0 > 1.0)
		rLoc1_44 *= rArg2;
	rLoc1Out = fabs(cos(rLoc1_44) * (real64) ds->w01DB);
	return bx + 0x0A;
}

// 0C00:01BA: FpuStack real64 fn0C00_01BA(Sequence (ptr32 real32) ds_bx, FpuStack real64 rArg1)
// Called from:
//      fn0C00_0192
real64 fn0C00_01BA(real32 * ds_bx, real64 rArg1)
{
	real64 rLoc1_17 = (real64) *ds_bx - rArg1;
	return rLoc1_17 * rLoc1_17;
}

// 0C00:01C3: void fn0C00_01C3(Sequence (ptr32 Eq_58) ds_bx, FpuStack real64 rArg0)
// Called from:
//      fn0C00_0100
void fn0C00_01C3(struct Eq_58 * ds_bx, real64 rArg0)
{
	ds_bx->r0000 = (real32) (sin((real64) ds_bx->w0004 * rArg0) * (real64) ds_bx->w0006 + (real64) ds_bx->w0008);
}

