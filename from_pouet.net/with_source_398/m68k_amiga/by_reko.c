// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 00001000: void fn00001000(Register word32 d2, Register int32 d3, Register int32 d4)
void fn00001000(word32 d2, int32 d3, int32 d4)
{
	ptr32 a0_15 = 4340 + globals->dw10E8;
	uint32 d0_131 = *(a0_15 - 0x04);
	union Eq_234 * a2_148 = 0x000301C4 + globals->dw10EC;
	ui32 d5_19 = globals->dw10F0 ^ d0_131;
l0000101A:
	uint32 d0_32 = d0_131 >> 0x01;
	if (d0_32 == 0x00)
		fn000010C2(d5_19, a0_15 - 0x04);
	uint32 d0_128;
	int32 d1_186;
	int32 d1_126;
	if (d0_32 >= 0x00)
	{
		d1_186 = 0x08;
		d3 = 0x01;
		d0_128 = d0_32 >> 0x01;
		if (d0_32 >> 0x01 == 0x00)
			fn000010C2(d5_19, a0_15 - 0x04);
		if (d0_32 >> 0x01 >= 0x00)
		{
			d1_126 = 0x03;
			d4 = DPB(d4, 0x00, 0);
l00001036:
			word32 d1_129;
			d0_131 = fn000010CE(d0_128, d1_126, d2, d5_19, a0_15 - 0x04, out d1_129, out d2);
			d3 = DPB(d3, (word16) d2 + (word16) d4, 0);
			do
			{
				int32 d1_150 = 0x07;
				do
				{
					d0_131 = d0_131 >> 0x01;
					byte CVZNX_156 = cond(d0_131);
					if (d0_131 == 0x00)
						fn000010C2(d5_19, a0_15 - 0x04);
					d2 = __rcl(d2, 0x01, CVZNX_156);
					d1_150 = d1_150 - 0x01;
				} while (d1_150 != ~0x00);
				a2_148 = a2_148 - 0x01;
				*a2_148 = (union Eq_234 *) (byte) d2;
				d3 = d3 - 0x01;
			} while (d3 != ~0x00);
			goto l0000109A;
		}
	}
	else
	{
		word32 d1_220;
		d0_128 = fn000010CE(d0_32, 0x02, d2, d5_19, a0_15 - 0x04, out d1_220, out d2);
		if ((byte) d2 >= 0x02)
		{
			if ((byte) d2 == 0x03)
			{
				d1_126 = 0x08;
				d4 = 0x08;
				goto l00001036;
			}
			word32 d1_231;
			d0_128 = fn000010CE(d0_128, 0x08, d2, d5_19, a0_15 - 0x04, out d1_231, out d2);
			d3 = DPB(d3, (word16) d2, 0);
			d1_186 = DPB(d1_231, 0x0C, 0);
		}
		else
		{
			word16 v30_244 = (word16) d2 + 0x02;
			d1_186 = DPB(d1_220, (word16) d2 + 0x09, 0);
			d2 = DPB(d2, v30_244, 0);
			d3 = DPB(d3, v30_244, 0);
		}
	}
	word32 d1_189;
	d0_131 = fn000010CE(d0_128, d1_186, d2, d5_19, a0_15 - 0x04, out d1_189, out d2);
	do
	{
		a2_148 = a2_148 - 0x01;
		*a2_148 = *((char *) a2_148 + (int32) ((int16) d2));
		d3 = d3 - 0x01;
	} while (d3 != ~0x00);
l0000109A:
	*(ptr32 *) 0x00DFF180 = a0_15 - 0x04;
	if (0x000301C4 - a2_148 < 0x00)
		goto l0000101A;
	if (d5_19 != 0x00)
	{
		uint32 d0_106 = DPB(d0_131, ~0x00, 0);
		do
		{
			*(word16 *) 0x00DFF180 = (word16) d0_106;
			d0_106 = d0_106 - 0x01;
		} while (d0_106 != ~0x00);
		return;
	}
	else
	{
		word32 a7_86;
		word32 a0_87;
		word32 a1_88;
		word32 d0_89;
		byte CVZN_90;
		word32 d1_91;
		word32 d5_92;
		word32 a2_93;
		byte ZN_94;
		byte C_95;
		byte V_96;
		byte CVZNX_97;
		byte Z_98;
		word32 d3_99;
		word32 d2_100;
		byte CZ_101;
		word32 d4_102;
		byte N_103;
		byte X_104;
		byte CZNX_105;
		fn000301C4();
		return;
	}
}

// 000010C2: void fn000010C2(Register ui32 d5, Register ptr32 a0)
void fn000010C2(ui32 d5, ptr32 a0)
{
fn000010C2_entry:
l000010C2:
fn000010C2_exit:
}

// 000010CE: Register uint32 fn000010CE(Register uint32 d0, Register int32 d1, Register word32 d2, Register ui32 d5, Register ptr32 a0, Register out ptr32 d1Out, Register out ptr32 d2Out)
uint32 fn000010CE(uint32 d0, int32 d1, word32 d2, ui32 d5, ptr32 a0, ptr32 & d1Out, ptr32 & d2Out)
{
	word32 d1_14 = DPB(d1, (word16) d1 - 0x01, 0);
	word32 d2_13 = DPB(d2, 0x00, 0);
l000010D2:
	d0 = d0 >> 0x01;
	byte CVZNX_17 = cond(d0);
	if (d0 != 0x00)
	{
		d2_13 = __rcl(d2_13, 0x01, CVZNX_17);
		*d2Out = d2_13;
		d1_14 = d1_14 - 0x01;
		*d1Out = d1_14;
		if (d1_14 != ~0x00)
			goto l000010D2;
		return d0;
	}
}

