// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register byte ah, Register word16 cx, Register byte bl, Register (memptr (ptr16 Eq_11) Eq_5) di)
void fn0C00_0100(byte ah, word16 cx, byte bl, struct Eq_5 Eq_11::* di)
{
	__syscall(0x10);
	struct Eq_11 * bx_7 = SEQ(0xA0, bl);
	while (true)
	{
		byte al_9 = __inb(0x40);
		Eq_20 C_11 = __aaa(al_9, ah, &al_9, &ah);
		uint16 ax_13 = SEQ(ah, al_9);
		while (true)
		{
			struct Eq_33 Eq_11::* di_15 = di - ax_13 - C_11;
			(bx_7->*di_15).b0000 = (byte) ax_13;
			ah = SLICE(ax_13, byte, 8);
			di = (struct Eq_5 Eq_11::*) &di_15->b0001;
			cx = cx_41 - 0x01;
			cx_41 = cx;
			if (cx != 0x00)
				break;
			byte v14_25 = (bx_7->*di_15).b0001;
			(bx_7->*di_15).b0001 = 0x00;
			ax_13 = (uint16) v14_25;
		}
	}
}

