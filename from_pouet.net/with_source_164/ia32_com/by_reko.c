// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register byte ch)
void fn0C00_0100(byte ch)
{
	__syscall(0x10);
	word16 wLoc02_233 = 0x01;
	word16 wLoc04_234 = 0x0140;
	word16 cx_178 = SEQ(ch, ~0x01);
	do
	{
		__outb(969, 0x00);
		ci16 ax_21 = cx_178 - 0x7F;
		bcu8 al_24 = (byte) ax_21;
		if (ax_21 <= 0x00)
			al_24 = -al_24;
		byte al_31 = 0x3F - (al_24 >> 0x01);
		__outb(969, al_31);
		__outb(969, al_31);
		--cx_178;
	} while (cx_178 != 0x00);
	byte Eq_48::* di_139 = &Eq_48::b0000;
	do
	{
		word16 cx_122 = 0x27;
		di_120 = di_139;
		do
		{
			byte Eq_48::* di_120;
			word16 cx_101;
			di_95 = di_120;
			for (cx_101 = 0x27; cx_101 != 0x00; --cx_101)
			{
				byte Eq_48::* di_95;
				++0xA000->*di_95;
				++di_95;
			}
			di_120 += 320;
			cx_122 = cx_292 - 0x01;
			cx_292 = cx_122;
		} while (cx_292 != 0x01);
		di_139 = di_139 + wLoc02_233 + wLoc04_234;
		uint32 dx_ax_143 = (uint32) di_139;
		Eq_78 dx_145 = (uint16) (dx_ax_143 % 0x0140);
		Eq_82 ax_146 = (uint16) (dx_ax_143 /u 0x0140);
		if (ax_146 <= 0x00 || ax_146 >= 161)
			wLoc04_234 = -wLoc04_234;
		if (dx_145 <= 0x00 || dx_145 >= 0x0119)
			wLoc02_233 = -wLoc02_233;
	} while (__inb(0x60) != 0x01);
	msdos_terminate_program20();
}

