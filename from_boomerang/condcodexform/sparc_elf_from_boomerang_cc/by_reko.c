// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 00010958: void _start(Register word32 g1, Register (ptr Eq_3) o7, Stack word32 dwArg40)
void _start(word32 g1, Eq_3 * o7, word32 dwArg40)
{
	globals->ptr20E60 = fp + 0x44;
	globals->ptr20E3C = fp + 0x44 + ((dwArg40 << 0x02) + 0x04);
	if (0x00 == 0x00)
	{
		if (g1 == 0x00)
		{
			atexit();
			_init(o7);
			main(dwArg40);
			exit();
			_exit();
		}
		else
			atexit();
	}
}

// 00010A5C: void func1()
void func1()
{
	return;
}

// 00010A74: void func2()
void func2()
{
	return;
}

// 00010A8C: void func3()
void func3()
{
	return;
}

// 00010AA4: void func4()
void func4()
{
	return;
}

// 00010ABC: void func5()
void func5()
{
	return;
}

// 00010AD4: void func6()
void func6()
{
	return;
}

// 00010AEC: void func7()
void func7()
{
	return;
}

// 00010B04: void func8()
void func8()
{
	return;
}

// 00010B0C: void main(Register int32 o0)
void main(int32 o0)
{
	word32 o0_154 = 0x01;
	if (o0 <= 0x01)
		o0_154 = 0x00;
	word32 o0_150;
	if (o0_154 != 0x00)
		o0_150 = 68188;
	else
		o0_150 = 68212;
	word32 o3_145;
	if (o0_154 != 0x00)
		o3_145 = 68236;
	else
		o3_145 = 0x00010AA4;
	word32 o2_140;
	if (o0_154 != 0x00)
		o2_140 = 68284;
	else
		o2_140 = 68308;
	word32 o1_135;
	if (o0_154 != 0x00)
		o1_135 = 68332;
	else
		o1_135 = 0x00010B04;
	word32 i1_100;
	bool Z_38;
	if (o0_154 != 0x00)
	{
		if (o0_150 == 68188)
		{
			if (o3_145 == 68236)
			{
				if (o2_140 == 68284)
				{
					if (o1_135 == 68332)
					{
						i1_100 = 0x01;
						goto l00010C40;
					}
				}
			}
		}
		i1_100 = 0x00;
		Z_38 = cond(0x00);
		goto l00010C44;
	}
	if (o0_150 == 68212)
	{
		if (o3_145 == 0x00010AA4)
		{
			if (o2_140 == 68308)
			{
				if (o1_135 == 0x00010B04)
				{
					i1_100 = 0x01;
l00010C40:
					Z_38 = cond(i1_100);
l00010C44:
					if (!Z_38)
						printf();
					else
						printf();
					return;
				}
			}
		}
	}
	i1_100 = 0x00;
	goto l00010C40;
}

// 00010C80: void _init(Register (ptr Eq_3) o7)
void _init(Eq_3 * o7)
{
	fn00010C90(o7);
}

// 00010C90: void fn00010C90(Register (ptr Eq_3) o7)
void fn00010C90(Eq_3 * o7)
{
	struct Eq_106 * o0_5 = o7 + o7->dw0008 / 0x0C;
	<anonymous> * l0_6 = o0_5->ptrFFFFFFF8;
	if (l0_6 == null)
		return;
	else
	{
		word32 sp_11;
		word32 o0_12;
		word32 o7_13;
		word32 l0_14;
		word32 g0_15;
		byte NZVC_16;
		bool Z_17;
		word32 i7_18;
		word32 i0_19;
		word32 o1_20;
		word32 i1_21;
		word32 o2_22;
		word32 i2_23;
		word32 o3_24;
		word32 i3_25;
		word32 o4_26;
		word32 i4_27;
		word32 o5_28;
		word32 i5_29;
		word32 i6_30;
		l0_6();
	}
}

// 00010CB8: void _fini(Register (ptr Eq_137) o7)
void _fini(Eq_137 * o7)
{
	fn00010CC8(o7);
}

// 00010CC8: void fn00010CC8(Register (ptr Eq_137) o7)
void fn00010CC8(Eq_137 * o7)
{
	struct Eq_142 * o0_5 = o7 + o7->dw0008 / 0x0C;
	<anonymous> * l0_6 = o0_5->ptrFFFFFFFC;
	if (l0_6 == null)
		return;
	else
	{
		word32 sp_11;
		word32 o0_12;
		word32 o7_13;
		word32 l0_14;
		word32 g0_15;
		byte NZVC_16;
		bool Z_17;
		word32 i7_18;
		word32 i0_19;
		word32 o1_20;
		word32 i1_21;
		word32 o2_22;
		word32 i2_23;
		word32 o3_24;
		word32 i3_25;
		word32 o4_26;
		word32 i4_27;
		word32 o5_28;
		word32 i5_29;
		word32 i6_30;
		l0_6();
	}
}

// 00020D10: void _PROCEDURE_LINKAGE_TABLE_()
void _PROCEDURE_LINKAGE_TABLE_()
{
fn00020D10_entry:
l00020D10:
l00020D10:
fn00020D10_exit:
}

// 00020D40: void atexit()
void atexit()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 00020D4C: void exit()
void exit()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 00020D58: void _exit()
void _exit()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 00020D64: void printf()
void printf()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

