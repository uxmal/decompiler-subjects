// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Sequence (ptr32 Eq_17) ds_bx, Register word16 cx, Register (memptr (ptr16 Eq_23) byte) di)
void fn0C00_0100(union Eq_17 * ds_bx, word16 cx, byte Eq_23::* di)
{
	__syscall(0x10);
	__outw(0x03D4, 8211);
	Eq_17 es_ax_12 = *ds_bx;
	byte al_14 = (byte) es_ax_12;
	struct Eq_23 * es_46 = SLICE(es_ax_12, selector, 16);
	do
	{
		do
		{
			__outb(969, al_14);
			al_14 += 0x95;
		} while (al_14 != 0x00);
		do
		{
			byte ah_22 = SLICE(cx, byte, 8);
			es_46->*di = (byte) cx ^ ah_22;
			++di;
			--cx;
		} while (cx != 0x00);
		word16 ax_32 = SEQ(ah_22, __inb(0x60));
		al_14 = (byte) (ax_32 - 0x01);
	} while (ax_32 != 0x01);
}

