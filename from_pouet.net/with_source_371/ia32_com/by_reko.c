// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register (ptr16 Eq_2) es, Register (ptr16 Eq_3) ds)
void fn0C00_0100(struct Eq_2 * es, struct Eq_3 * ds)
{
	__cli();
	byte Eq_3::* si_46 = &Eq_3::b0114;
	byte Eq_2::* di_100 = &Eq_2::b1100;
	word16 cx_10 = 0x00;
	while (true)
	{
		0C00:10A8();
		if (Test(UGE,false))
			break;
		word16 cx_28;
		0C00:10A8();
		struct Eq_18 Eq_34::* sp_37;
		word16 cx_39;
		0C00:10A8();
		if (Test(UGE,false))
		{
			if (cx_39 != 0x00)
			{
				0C00:10A8();
				fn0C00_1113();
				return;
			}
		}
		byte bl_48 = ds->*si_46;
		(ss->*sp_37).ptrFFFFFFFE = si_46 + 1;
		byte Eq_3::* si_57 = di_100 + ~SEQ(0x10, bl_48);
		word16 cx_101;
		for (cx_101 = cx_39 + 0x02; cx_101 != 0x00; --cx_101)
		{
			es->*di_100 = ds->*si_57;
			++si_57;
			++di_100;
		}
		si_46 = (ss->*sp_37).ptrFFFFFFFE;
		while (true)
		{
			word16 dx_74;
			0C00:10A8();
			if (Test(ULT,false))
				break;
			ds->*si_46 = ds->*si_46 ^ (byte) (dx_74 - 0x01);
			es->*di_100 = ds->*si_46;
			++si_46;
			++di_100;
		}
	}
	0C00:10A8();
	fn0C00_1100();
}

