// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register int8 ch, Register (memptr (ptr16 Eq_5) Eq_3) bx, Register word16 si, Register (ptr16 Eq_5) ds)
void fn0C00_0100(int8 ch, struct Eq_3 Eq_5::* bx, word16 si, struct Eq_5 * ds)
{
	__syscall(0x10);
	__outw(0x03D4, 8211);
	int16 ax_15 = 8211;
	while (true)
	{
		Eq_51 es_di_11 = (ds->*bx).ptr0000;
		struct Eq_27 * es_60 = SLICE(es_di_11, selector, 16);
		byte Eq_27::* di_31 = (word16) es_di_11;
		do
		{
			word16 bx_13 = bx + 1;
			byte bh_38 = SLICE(bx_13, byte, 8);
			uint8 bl_17 = (byte) bx_13;
			do
			{
				ax_15 = (int16) ((int32) ax_15 / SEQ(ch, bl_17)) + si;
				es_60->*di_31 = (byte) ax_15;
				++di_31;
				++bl_17;
			} while (bl_17 != 0x00);
			bx = SEQ(bh_38 + 0x01, bl_17);
		} while (bh_38 != 0x01);
		++si;
	}
}

