// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Sequence (ptr32 Eq_2) ds_bx, Register byte ah, Register word16 cx, Register (memptr (ptr16 Eq_6) byte) di)
void fn0C00_0100(struct Eq_2 * ds_bx, byte ah, word16 cx, byte Eq_6::* di)
{
	struct Eq_6 * es_28 = ds_bx->ptr0002;
	__syscall(0x10);
	word16 ax_12 = SEQ(ah, 0x13);
	while (true)
	{
		ax_12 = ax_12 - di - C;
		es_28->*di = (byte) ax_12;
		++di;
		--cx;
		if (cx == 0x00)
			++ax_12;
	}
}

