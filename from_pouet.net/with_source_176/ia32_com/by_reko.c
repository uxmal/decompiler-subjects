// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register byte ah, Register word16 eax_16_16, Register word16 bp, Register (ptr16 Eq_5) ds)
void fn0C00_0100(byte ah, word16 eax_16_16, word16 bp, struct Eq_5 * ds)
{
	int8 Top_142 = 0;
	__syscall(0x10);
	mp16 cx_12 = fp;
	word16 ax_156 = SEQ(ah, 0x13);
	do
	{
		__outb(969, (byte) ax_156);
		__outb(969, (byte) (ax_156 - 0x01));
		--cx_12;
		--ax_156;
	} while (cx_12 != 0x00);
	while (true)
	{
		byte Eq_41::* di_102 = &Eq_41::b0000;
		int16 bx_110;
		for (bx_110 = ~0x62; (byte) bx_110 != 100; ++bx_110)
		{
			Eq_47 cx_106 = ~0x9F;
			do
			{
				word16 ax_45 = (word16) (cx_106 *s (word16) ((int32) cx_106) + bx_110 *s (word16) ((int32) bx_110));
				ds->t7340 = ax_45 + 0x1000;
				ds->w7342 = 0x00;
				Eq_152 dx_ax_51 = (ax_45 + 0x1000) * 0x733C;
				word32 eax_67 = 400000000 - __ror(SEQ(SLICE(__ror(SEQ(eax_16_16, (word16) dx_ax_51), 0x10), word16, 16), SLICE(dx_ax_51, word16, 16)), 0x10);
				cu16 ax_68 = (word16) eax_67;
				eax_16_16 = SLICE(eax_67, word16, 16);
				byte al_96 = (byte) (ax_68 >> 0x01);
				Eq_47 eax_73 = SEQ(eax_16_16, ax_68 >> 0x01);
				if (ax_68 >> 0x01 >= 0x00)
				{
					ds->t733C = eax_73;
					struct Eq_6 * Top_76 = Top_142 - 1;
					Top_76->r0000 = (real64) ds->t733C;
					Top_76->r0000 = sqrt(Top_76->r0000);
					ds->t733C.u0 = (int16) Top_76->r0000;
					ds->t733C -= 20000;
					Top_76->r0000 = (real64) ds->t733C;
					Top_76->r0000 /= (real64) ds->t7340;
					ds->t733C = cx_106;
					Top_76->rFFFFFFFF = (real64) ds->t733C;
					Top_76->rFFFFFFFF *= Top_76->r0000;
					ds->t733C.u0 = (int16) Top_76->rFFFFFFFF;
					__wait();
					__fninit();
					Top_142 = Top_76;
					al_96 = (byte) ((word32) ds->t733C + bp);
				}
				0xA000->*di_102 = al_96;
				++di_102;
				cx_106 = (word16) cx_106.u0 + 1;
			} while (cx_106 != 0xA0);
		}
		--bp;
	}
}

