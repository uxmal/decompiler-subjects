// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Sequence (ptr32 Eq_2) ds_bx, Register (memptr (ptr16 Eq_11) byte) cx, Register byte dl, Register byte dh)
void fn0C00_0100(struct Eq_2 * ds_bx, byte Eq_11::* cx, byte dl, byte dh)
{
	__syscall(0x10);
	struct Eq_11 * ds_46 = ds_bx->ptr0002;
	while (true)
	{
		ds_46->*cx = (int8) ((dl & SLICE(cx, byte, 8)) < 0x00);
		byte bh_17 = SLICE(cx, byte, 8);
		byte bl_19 = (byte) cx;
		dl -= bh_17;
		Eq_15 bh_20 = bh_17 | bl_19;
		if (bh_20 < 0x00)
			bh_20 = -(bh_20 >> 0x01);
		ds_46->*SEQ(bh_20, bl_19 + dh) = dl;
		--cx;
		word16 dx_40 = SEQ(dh, dl);
		if (cx == Eq_11::a0000)
		{
			dl = (byte) (dx_40 + 0x01);
			dh = SLICE(dx_40 + 0x01, byte, 8);
		}
	}
}

