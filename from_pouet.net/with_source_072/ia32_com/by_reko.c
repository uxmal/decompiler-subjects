// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Sequence (ptr32 uint16) ds_si, Register uint16 cx, Register byte bh, Register (memptr (ptr16 Eq_31) byte) di)
void fn0C00_0100(uint16 * ds_si, uint16 cx, byte bh, byte Eq_31::* di)
{
	__syscall(0x10);
	uint16 bx_11 = SEQ(bh, 0x04);
	do
	{
		++bx_11;
		do
		{
			uint32 dx_ax_18 = (uint32) di;
			uint16 dx_20 = (uint16) (dx_ax_18 % 0x0140);
			uint16 ax_21 = (uint16) (dx_ax_18 /u 0x0140);
			do
			{
				uint16 ax_36 = (uint16) (*ds_si * ax_21 /u bx_11);
				cx = ax_36;
				dx_20 = cx_155;
				ax_21 = dx_20;
				byte ah_136 = SLICE(dx_20, byte, 8);
				uint16 cx_155 = cx;
			} while (P);
			word16 ax_137 = SEQ(ah_136, 0x10);
			do
			{
				ci8 al_73 = (byte) ax_137;
				cx = ax_36;
				if (((byte) ax_36 & (byte) cx_155) < 0x00)
					break;
				byte dl_60 = (byte) (cx_155 * 0x02);
				byte dh_66 = SLICE(cx_155 * 0x02, byte, 8);
				++ax_137;
				cx_155 = ax_36 + bx_11;
				cx = SEQ(dh_66, dl_60 + 0xC0);
				al_73 = (byte) ax_137;
				ax_36 = SEQ(dh_66, dl_60 + 0xC0);
			} while (al_73 < 0x1F);
			0xA000->*di = al_73;
			++di;
		} while (di != &Eq_31::b0000);
	} while ((int16) __inb(0x60) != 0x01);
}

