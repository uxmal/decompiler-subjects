// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0800:0001: void fn0800_0001()
void fn0800_0001()
{
	ci16 ax_2 = 0x01F1;
	struct Eq_4 * dx_36 = (word16) cs + 0x01F1;
	word16 cx_29 = 0x3C;
	struct Eq_10 * bp_33 = ss;
	do
	{
		word16 Eq_4::* si_40 = Eq_4::a0032;
		word16 Eq_10::* di_41 = Eq_10::a0000;
		bp_33 = bp_33 - 0x01;
		dx_36 = dx_36 - 0x01;
		cx_29 = DPB(cx_29, 0x08, 0);
		while (cx_29 != 0x00)
		{
			bp_33->*di_41 = dx_36->*si_40;
			si_40 = si_40 + 0x01;
			di_41 = di_41 + 0x01;
			cx_29 = cx_29 - 0x01;
		}
		ax_2 = ax_2 - 0x01;
	} while (ax_2 >= 0x00);
	return;
}

