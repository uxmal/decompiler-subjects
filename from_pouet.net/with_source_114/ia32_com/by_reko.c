// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Sequence word32 eax_16_16_di, Register byte cl, Register byte bl, Register word16 bp, Register word16 si, Register (ptr16 Eq_7) ds)
void fn0C00_0100(word32 eax_16_16_di, byte cl, byte bl, word16 bp, word16 si, struct Eq_7 * ds)
{
	__syscall(0x10);
	struct Eq_13 * bx_7 = SEQ(0xA0, bl);
	word32 eax_16_16_di_100 = eax_16_16_di;
	do
	{
		do
		{
			Eq_48 edx_eax_13 = (int64) eax_16_16_di_100;
			uint16 ax_19 = (uint16) (edx_eax_13 /u 0x0140);
			Eq_54 ax_35 = (uint16) ((word32) SEQ(0x20, (byte) cx) /u (ax_19 + 0x01));
			uint16 ax_38 = (word16) ax_35 + si;
			ui16 ax_48 = SEQ(SLICE(ax_38, byte, 8), ds->*((word16) (((uint16) (edx_eax_13 % 0x0140) - 0xA0) *s ax_35 >> 0x0C) + (uint16) ((byte) ax_38 & 0xF0))) ^ bp;
			struct Eq_17 Eq_13::* di_9 = (word16) eax_16_16_di_100;
			word16 eax_16_16_84 = SLICE(edx_eax_13, word16, 16);
			cx = ax_19 + 0x01;
			byte al_55 = (byte) ax_48;
			byte ah_62 = SLICE(ax_48, byte, 8);
			di_58 = di_9;
			do
			{
				struct Eq_17 Eq_13::* di_58;
				byte al_56 = al_55 | 0x10;
				(bx_7->*di_58).b0000 = al_56;
				word16 ax_63 = SEQ(ah_62, al_56);
				byte al_65 = (byte) (ax_63 + 0x01);
				di_58 -= 0x0140;
				ah_62 = SLICE(ax_63 + 0x01, byte, 8);
				al_55 = al_65 & 0x0F;
			} while ((al_65 & 0x0F) != 0x00);
			eax_16_16_di_100 = SEQ(eax_16_16_84, &di_9->b0000 + 1);
		} while (di_9 != &Eq_13::t0001);
		++si;
		eax_16_16_di_100 = SEQ(eax_16_16_84, &di_9->b0000 + 1);
	} while (si != 0x00);
}

