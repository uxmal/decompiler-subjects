// subject_seg08048000.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_seg08048000.h"

// 080486FC: void fn080486FC()
// Called from:
//      fn08049B18
void fn080486FC()
{
	g_ptr804A0C4();
}

// 0804870C: void fn0804870C()
// Called from:
//      fn08049444
void fn0804870C()
{
	g_ptr804A0C8();
}

// 0804871C: void fn0804871C()
// Called from:
//      fn08049B18
void fn0804871C()
{
	g_ptr804A0CC();
}

// 0804872C: void fn0804872C()
// Called from:
//      fn08049B18
void fn0804872C()
{
	g_ptr804A0D0();
}

// 0804873C: void fn0804873C()
// Called from:
//      fn08049B18
void fn0804873C()
{
	g_ptr804A0D4();
}

// 0804874C: void fn0804874C()
// Called from:
//      fn08049444
void fn0804874C()
{
	g_ptr804A0D8();
}

// 0804875C: void fn0804875C()
// Called from:
//      fn08049B18
void fn0804875C()
{
	g_ptr804A0DC();
}

// 0804876C: void fn0804876C()
// Called from:
//      fn08049B18
void fn0804876C()
{
	g_ptr804A0E0();
}

// 0804877C: void fn0804877C()
// Called from:
//      fn08049B18
void fn0804877C()
{
	g_ptr804A0E4();
}

// 0804878C: void fn0804878C()
// Called from:
//      fn08049330
void fn0804878C()
{
	g_ptr804A0E8();
}

// 0804879C: void fn0804879C()
// Called from:
//      fn08049B18
void fn0804879C()
{
	g_ptr804A0EC();
}

// 080487AC: void fn080487AC()
// Called from:
//      fn08049B18
void fn080487AC()
{
	g_ptr804A0F0();
}

// 080487BC: void fn080487BC()
// Called from:
//      fn08049B18
void fn080487BC()
{
	g_ptr804A0F4();
}

// 080487CC: void fn080487CC()
// Called from:
//      fn08049B18
void fn080487CC()
{
	g_ptr804A0F8();
}

// 080487DC: void fn080487DC()
// Called from:
//      fn08049B18
void fn080487DC()
{
	g_ptr804A0FC();
}

// 080487EC: void fn080487EC()
// Called from:
//      fn08049B18
void fn080487EC()
{
	g_ptr804A100();
}

// 080487FC: void fn080487FC()
// Called from:
//      fn0804993D
void fn080487FC()
{
	g_ptr804A104();
}

// 0804880C: void fn0804880C()
// Called from:
//      fn08049363
//      fn0804937F
//      fn08049394
void fn0804880C()
{
	g_ptr804A108();
}

// 0804881C: void fn0804881C()
// Called from:
//      fn0804993D
//      fn08049B18
void fn0804881C()
{
	g_ptr804A10C();
}

// 0804882C: void fn0804882C()
// Called from:
//      fn08049B18
void fn0804882C()
{
	g_ptr804A110();
}

// 0804883C: void fn0804883C()
// Called from:
//      fn08049B18
void fn0804883C()
{
	g_ptr804A114();
}

// 0804884C: void fn0804884C()
// Called from:
//      fn08049444
void fn0804884C()
{
	g_ptr804A118();
}

// 0804885C: void fn0804885C()
// Called from:
//      fn08049444
void fn0804885C()
{
	g_ptr804A11C();
}

// 0804886C: void fn0804886C()
// Called from:
//      fn08049444
void fn0804886C()
{
	g_ptr804A120();
}

// 0804887C: void fn0804887C()
// Called from:
//      fn08049B18
void fn0804887C()
{
	g_ptr804A124();
}

// 0804888C: void fn0804888C()
// Called from:
//      fn08049B18
void fn0804888C()
{
	g_ptr804A128();
}

// 0804889C: void fn0804889C()
// Called from:
//      fn08049B18
void fn0804889C()
{
	g_ptr804A12C();
}

// 080488AC: void fn080488AC()
// Called from:
//      fn08049B18
void fn080488AC()
{
	g_ptr804A130();
}

// 080488CC: void fn080488CC()
// Called from:
//      fn08049B18
void fn080488CC()
{
	g_ptr804A138();
}

// 08048903: Register word32 fn08048903(Stack (ptr32 Eq_61) dwArg04, Stack int32 dwArg08, Stack up32 dwArg0C)
// Called from:
//      fn080489C3
word32 fn08048903(struct Eq_61 * dwArg04, int32 dwArg08, up32 dwArg0C)
{
	if (dwArg0C > 0x06)
		return;
	struct Eq_66 * ecx_20;
	switch (dwArg0C)
	{
	case 0x01:
		ecx_20 = (struct Eq_66 *) (dwArg04 + dwArg08);
		ecx_20->dw0008 = 0x3F800000;
		break;
	case 0x02:
		struct Eq_76 * ecx_37 = dwArg04 + dwArg08;
		ecx_37->dw0008 = 0x00;
		dwArg04->a000C[dwArg08].dw0000 = 0x00;
		ecx_37->dw0010 = 0x3F800000;
		return;
	case 0x03:
		ecx_20 = (struct Eq_66 *) (dwArg04 + dwArg08);
		ecx_20->dw0008 = 0x3F800000;
		dwArg04->a000C[dwArg08].dw0000 = 0x00;
		goto l0804899B;
	case 0x04:
		ecx_20 = (struct Eq_66 *) (dwArg04 + dwArg08);
		ecx_20->dw0008 = 0x3F800000;
		dwArg04->a000C[dwArg08].dw0000 = 0x3F000000;
		goto l0804899B;
	case 0x05:
		ecx_20 = (struct Eq_66 *) (dwArg04 + dwArg08);
		ecx_20->dw0008 = 0x00;
		break;
	case 0x06:
		struct Eq_127 * ecx_14 = dwArg04 + dwArg08;
		ecx_14->dw0008 = 0x3F800000;
		dwArg04->a000C[dwArg08].dw0000 = 0x3F800000;
		ecx_14->dw0010 = 0x3F800000;
		return;
	}
	dwArg04->a000C[dwArg08].dw0000 = 0x3F800000;
l0804899B:
	ecx_20->dw0010 = 0x00;
	return;
}

// 080489C3: Register (ptr32 Eq_155) fn080489C3(Stack (ptr32 Eq_155) dwArg04, Stack byte bArg08, Stack word32 dwArg0C, Stack word32 dwArg10, Stack up32 dwArg14, Register out (ptr32 Eq_155) ebxOut)
// Called from:
//      fn08048AA8
struct Eq_155 * fn080489C3(struct Eq_155 * dwArg04, byte bArg08, word32 dwArg0C, word32 dwArg10, up32 dwArg14, struct Eq_155 & ebxOut)
{
	cu8 al_17 = (byte) (SEQ(eax_24_8, bArg08) - 66);
	if (al_17 > 0x12)
	{
		dwArg04->ptr0034 = fn08048903(dwArg04->ptr0034, 0x00, dwArg14);
		ebxOut = ebx;
		return dwArg04;
	}
	else
	{
		ui32 eax_55 = (word32) al_17;
		struct Eq_155 * eax_56;
		(*((char *) g_a8049ED0 + eax_55 * 0x04))();
		ebxOut = dwArg04;
		return eax_56;
	}
}

// 08048AA8: Register (ptr32 Eq_155) fn08048AA8(Stack (ptr32 Eq_155) dwArg04)
// Called from:
//      fn08049394
struct Eq_155 * fn08048AA8(struct Eq_155 * dwArg04)
{
	int32 ecx_20;
	struct Eq_155 * eax_146 = dwArg04;
	for (ecx_20 = 0x00; ecx_20 != 0x03; ++ecx_20)
	{
		int32 edx_21 = ecx_20 *s 0x24;
		int32 ebx_22;
		for (ebx_22 = 0x00; ebx_22 != 0x03; ++ebx_22)
		{
			word32 esi_33;
			word32 * edi_37 = &dwArg04->dw0004 + ((ebx_22 *s 0x0C + 0x30) + edx_21);
			for (esi_33 = 0x00; esi_33 != 0x03; ++esi_33)
			{
				struct Eq_209 * ebp_40 = *edi_37;
				int32 edx_41;
				for (edx_41 = 0x00; edx_41 != 0x48; edx_41 += 0x0C)
				{
					(ebp_40->a000C + 1)[edx_41 / 4] = 0x3E800000;
					ebp_40->a000C[edx_41 / 4] = 0x3E800000;
					ebp_40->a0008[edx_41 / 4] = 0x3E800000;
				}
				++edi_37;
			}
		}
	}
	up32 ebx_113 = 0x01;
	byte dl_117 = 0x54;
	while (true)
	{
		word32 esi_110;
		int32 ebp_76 = (int32) dl_117;
		for (esi_110 = 0x00; esi_110 != 0x03; ++esi_110)
		{
			word32 edi_77 = 0x00;
			do
			{
				++edi_77;
				eax_146 = fn080489C3(eax_146, (byte) ebp_76, esi_110, edi_77, ebx_113, out ebx_113);
			} while (edi_77 != 0x03);
		}
		++ebx_113;
		if (ebx_113 == 0x06)
			break;
		dl_117 = 0x54;
		if (ebx_113 <= 0x05)
		{
			switch (ebx_113)
			{
			case 0x01:
				dl_117 = 0x46;
				break;
			case 0x02:
				dl_117 = 0x52;
				break;
			case 0x03:
				dl_117 = 0x4C;
				break;
			case 0x04:
				dl_117 = 66;
				break;
			case 0x05:
				dl_117 = 0x44;
				break;
			}
		}
	}
	return eax_146;
}

// 08048B68: Register word32 fn08048B68(Stack word32 dwArg04, Stack int32 dwArg08, Stack int32 dwArg0C, Stack int32 dwArg10, Stack int32 dwArg14)
// Called from:
//      fn08048BE1
//      fn08048C24
word32 fn08048B68(word32 dwArg04, int32 dwArg08, int32 dwArg0C, int32 dwArg10, int32 dwArg14)
{
	struct Eq_291 * ecx_20 = dwArg04 + 0x08 + dwArg08 *s 0x0C;
	struct Eq_297 * edx_26 = dwArg04 + 0x08 + dwArg0C *s 0x0C;
	word32 edx_21 = ecx_20->dw0008;
	word32 ebp_22 = ecx_20->dw0000;
	word32 edi_23 = ecx_20->dw0004;
	ecx_20->dw0000 = edx_26->dw0000;
	ecx_20->dw0004 = edx_26->dw0004;
	ecx_20->dw0008 = edx_26->dw0008;
	struct Eq_332 * ecx_34 = dwArg04 + 0x08 + dwArg10 *s 0x0C;
	edx_26->dw0000 = ecx_34->dw0000;
	edx_26->dw0004 = ecx_34->dw0004;
	edx_26->dw0008 = ecx_34->dw0008;
	struct Eq_355 * ebx_42 = dwArg04 + 0x08 + dwArg14 *s 0x0C;
	ecx_34->dw0000 = ebx_42->dw0000;
	ecx_34->dw0004 = ebx_42->dw0004;
	ecx_34->dw0008 = ebx_42->dw0008;
	ebx_42->dw0000 = ebp_22;
	ebx_42->dw0004 = edi_23;
	ebx_42->dw0008 = edx_21;
	return dwArg04;
}

// 08048BE1: Register word32 fn08048BE1(Stack word32 dwArg04, Stack word32 dwArg08)
// Called from:
//      fn08048C67
//      fn08048EB5
//      fn080490D5
word32 fn08048BE1(word32 dwArg04, word32 dwArg08)
{
	int32 dwLoc04_62;
	int32 dwLoc08_63;
	int32 dwLoc0C_64;
	int32 dwLoc10_65;
	word32 eax_29 = dwArg04;
	if (dwArg08 == 0x02)
	{
		dwLoc04_62 = 0x00;
		dwLoc08_63 = 0x02;
		dwLoc0C_64 = 0x05;
		dwLoc10_65 = 0x03;
		return fn08048B68(dwArg04, dwLoc10_65, dwLoc0C_64, dwLoc08_63, dwLoc04_62);
	}
	else if (dwArg08 == 0x03)
	{
		eax_29 = fn08048B68(dwArg04, 0x01, 0x05, 0x04, 0x00);
		return eax_29;
	}
	else
	{
		if (dwArg08 != 0x01)
			return eax_29;
		dwLoc04_62 = 0x03;
		dwLoc08_63 = 0x04;
		dwLoc0C_64 = 0x02;
		dwLoc10_65 = 0x01;
		return fn08048B68(dwArg04, dwLoc10_65, dwLoc0C_64, dwLoc08_63, dwLoc04_62);
	}
}

// 08048C24: Register word32 fn08048C24(Stack word32 dwArg04, Stack word32 dwArg08)
// Called from:
//      fn08048C67
//      fn08048EB5
//      fn080490D5
word32 fn08048C24(word32 dwArg04, word32 dwArg08)
{
	int32 dwLoc04_62;
	int32 dwLoc08_63;
	int32 dwLoc0C_64;
	int32 dwLoc10_65;
	word32 eax_29 = dwArg04;
	if (dwArg08 == 0x02)
	{
		dwLoc04_62 = 0x03;
		dwLoc08_63 = 0x05;
		dwLoc0C_64 = 0x02;
		dwLoc10_65 = 0x00;
		return fn08048B68(dwArg04, dwLoc10_65, dwLoc0C_64, dwLoc08_63, dwLoc04_62);
	}
	else if (dwArg08 == 0x03)
	{
		eax_29 = fn08048B68(dwArg04, 0x00, 0x04, 0x05, 0x01);
		return eax_29;
	}
	else
	{
		if (dwArg08 != 0x01)
			return eax_29;
		dwLoc04_62 = 0x01;
		dwLoc08_63 = 0x02;
		dwLoc0C_64 = 0x04;
		dwLoc10_65 = 0x03;
		return fn08048B68(dwArg04, dwLoc10_65, dwLoc0C_64, dwLoc08_63, dwLoc04_62);
	}
}

// 08048C67: void fn08048C67(Stack (ptr32 Eq_448) dwArg04, Stack int32 dwArg08, Stack int32 dwArg0C)
// Called from:
//      fn080492D1
void fn08048C67(struct Eq_448 * dwArg04, int32 dwArg08, int32 dwArg0C)
{
	real64 rLoc1_376 = (real64) dwArg0C + (real64) (dwArg04->a0008)[dwArg08 + 0x08];
	dwArg04->a0008[dwArg08 + 0x08] = (real32) rLoc1_376;
	if (dwArg0C < 0x00)
	{
		if (rLoc1_376 == (real64) g_r8049F30 && !P)
		{
			dwArg04->a0008[dwArg08 + 0x08] = 0x00;
			word32 edi_131 = dwArg04->a0004[dwArg08 + 0x0C];
			dwArg04->a0004[dwArg08 + 0x0C] = dwArg04->a0004[dwArg08 + 0x1E];
			dwArg04->a0004[dwArg08 + 0x1E] = dwArg04->a0004[dwArg08 + 0x24];
			dwArg04->a0004[dwArg08 + 0x24] = dwArg04->a0004[dwArg08 + 0x12];
			dwArg04->a0004[dwArg08 + 0x12] = edi_131;
			word32 edi_143 = dwArg04->a0004[dwArg08 + 0x15];
			dwArg04->a0004[dwArg08 + 0x15] = dwArg04->a0004[dwArg08 + 33];
			dwArg04->a0004[dwArg08 + 33] = dwArg04->a0004[dwArg08 + 0x1B];
			dwArg04->a0004[dwArg08 + 0x1B] = dwArg04->a0004[dwArg08 + 0x0F];
			dwArg04->a0004[dwArg08 + 0x0F] = edi_143;
			struct Eq_601 * esi_151 = dwArg04->a0004 + (dwArg08 + 0x0C);
			word32 edi_153;
			for (edi_153 = 0x00; edi_153 != 0x03; ++edi_153)
			{
				esi_151->dw0000 = fn08048BE1(esi_151->dw0000, 0x03);
				esi_151->dw000C = fn08048BE1(esi_151->dw000C, 0x03);
				esi_151->dw0018 = fn08048BE1(esi_151->dw0018, 0x03);
				++esi_151;
			}
		}
	}
	else if (dwArg0C != 0x00 && (rLoc1_376 == (real64) g_r8049F34 && !P))
	{
		word32 edi_42 = dwArg04->a0004[dwArg08 + 0x24];
		dwArg04->a0008[dwArg08 + 0x08] = 0x00;
		word32 esi_45 = dwArg04->a0004[dwArg08 + 0x12];
		dwArg04->a0004[dwArg08 + 0x12] = edi_42;
		dwArg04->a0004[dwArg08 + 0x24] = dwArg04->a0004[dwArg08 + 0x1E];
		dwArg04->a0004[dwArg08 + 0x1E] = dwArg04->a0004[dwArg08 + 0x0C];
		dwArg04->a0004[dwArg08 + 0x0C] = esi_45;
		word32 edi_56 = dwArg04->a0004[dwArg08 + 0x0F];
		dwArg04->a0004[dwArg08 + 0x0F] = dwArg04->a0004[dwArg08 + 0x1B];
		dwArg04->a0004[dwArg08 + 0x1B] = dwArg04->a0004[dwArg08 + 33];
		dwArg04->a0004[dwArg08 + 33] = dwArg04->a0004[dwArg08 + 0x15];
		dwArg04->a0004[dwArg08 + 0x15] = edi_56;
		struct Eq_762 * esi_115 = dwArg04->a0004 + (dwArg08 + 0x0C);
		word32 edi_67;
		for (edi_67 = 0x00; edi_67 != 0x03; ++edi_67)
		{
			esi_115->dw0000 = fn08048C24(esi_115->dw0000, 0x03);
			esi_115->dw000C = fn08048C24(esi_115->dw000C, 0x03);
			esi_115->dw0018 = fn08048C24(esi_115->dw0018, 0x03);
			++esi_115;
		}
	}
	real64 rLoc1_396 = (real64) dwArg04->r0028;
	real64 rLoc2_397 = (real64) dwArg04->r002C;
	if (!P && rLoc1_396 == rLoc2_397 || (!P && rLoc1_396 == rLoc1_396 || rLoc1_396 == rLoc1_396 && P))
	{
		real64 rLoc3_418 = (real64) dwArg04->r0030;
		if (!P && rLoc2_397 == rLoc3_418 || (!P && rLoc2_397 == rLoc2_397 || rLoc2_397 == rLoc1_396 && P))
		{
			real64 rLoc1_445 = rLoc1_396 + (real64) (dwArg04->a000C)[0];
			dwArg04->r0030 = 0.0F;
			dwArg04->r002C = 0.0F;
			dwArg04->r0028 = 0.0F;
			dwArg04->a000C[0] = (real32) rLoc1_445;
		}
	}
}

// 08048EB5: void fn08048EB5(Stack (ptr32 Eq_448) dwArg04, Stack int32 dwArg08, Stack int32 dwArg0C)
// Called from:
//      fn080492D1
void fn08048EB5(struct Eq_448 * dwArg04, int32 dwArg08, int32 dwArg0C)
{
	real64 rLoc1_358 = (real64) dwArg0C + (real64) (dwArg04->a000C)[dwArg08 + 0x04];
	dwArg04->a000C[dwArg08 + 0x04] = (real32) rLoc1_358;
	if (dwArg0C < 0x00)
	{
		if (rLoc1_358 == (real64) g_r8049F30 && !P)
		{
			dwArg04->a000C[dwArg08 + 0x04] = 0x00;
			struct Eq_885 * eax_123 = dwArg04 + (dwArg08 *s 0x0C) / 52;
			word32 edx_125 = eax_123->dw003C;
			eax_123->dw003C = eax_123->dw0084;
			eax_123->dw0084 = eax_123->dw007C;
			word32 esi_129 = eax_123->dw0034;
			eax_123->dw0034 = edx_125;
			word32 edx_131 = eax_123->dw0038;
			eax_123->dw007C = esi_129;
			eax_123->dw0038 = eax_123->dw0060;
			eax_123->dw0060 = eax_123->dw0080;
			word32 esi_137 = eax_123->dw0058;
			eax_123->dw0058 = edx_131;
			eax_123->dw0080 = esi_137;
			word32 edi_119;
			struct Eq_943 * esi_140 = &dwArg04->r0030 + 1 + (dwArg08 *s 0x0C) / 52;
			for (edi_119 = 0x00; edi_119 != 0x03; ++edi_119)
			{
				esi_140->dw0000 = fn08048BE1(esi_140->dw0000, 0x02);
				esi_140->dw0004 = fn08048BE1(esi_140->dw0004, 0x02);
				esi_140->dw0008 = fn08048BE1(esi_140->dw0008, 0x02);
				++esi_140;
			}
		}
	}
	else if (dwArg0C != 0x00 && (rLoc1_358 == (real64) g_r8049F34 && !P))
	{
		dwArg04->a000C[dwArg08 + 0x04] = 0x00;
		struct Eq_992 * eax_43 = dwArg04 + (dwArg08 *s 0x0C) / 52;
		word32 edx_45 = eax_43->dw0034;
		eax_43->dw0034 = eax_43->dw007C;
		eax_43->dw007C = eax_43->dw0084;
		word32 esi_49 = eax_43->dw003C;
		eax_43->dw003C = edx_45;
		word32 edx_51 = eax_43->dw0058;
		eax_43->dw0084 = esi_49;
		eax_43->dw0058 = eax_43->dw0080;
		eax_43->dw0080 = eax_43->dw0060;
		word32 esi_57 = eax_43->dw0038;
		eax_43->dw0038 = edx_51;
		eax_43->dw0060 = esi_57;
		word32 edi_39;
		struct Eq_1050 * esi_106 = &dwArg04->r0030 + 1 + (dwArg08 *s 0x0C) / 52;
		for (edi_39 = 0x00; edi_39 != 0x03; ++edi_39)
		{
			esi_106->dw0000 = fn08048C24(esi_106->dw0000, 0x02);
			esi_106->dw0004 = fn08048C24(esi_106->dw0004, 0x02);
			esi_106->dw0008 = fn08048C24(esi_106->dw0008, 0x02);
			++esi_106;
		}
	}
	real64 rLoc1_378 = (real64) dwArg04->r001C;
	real64 rLoc2_379 = (real64) dwArg04->r0020;
	if (!P && rLoc1_378 == rLoc2_379 || (!P && rLoc1_378 == rLoc1_378 || rLoc1_378 == rLoc1_378 && P))
	{
		real64 rLoc3_400 = (real64) dwArg04->r0024;
		if (!P && rLoc2_379 == rLoc3_400 || (!P && rLoc2_379 == rLoc2_379 || rLoc2_379 == rLoc1_378 && P))
		{
			real64 rLoc1_427 = rLoc1_378 + (real64) (dwArg04->a0008)[0];
			dwArg04->r0024 = 0.0F;
			dwArg04->r0020 = 0.0F;
			dwArg04->r001C = 0.0F;
			dwArg04->a0008[0] = (real32) rLoc1_427;
		}
	}
}

// 080490D5: void fn080490D5(Stack (ptr32 Eq_448) dwArg04, Stack int32 dwArg08, Stack int32 dwArg0C)
// Called from:
//      fn080492D1
void fn080490D5(struct Eq_448 * dwArg04, int32 dwArg08, int32 dwArg0C)
{
	real64 rLoc1_358 = (real64) dwArg0C + (real64) dwArg04[((dwArg08 + 0x04) * 0x04) / 52];
	dwArg04[(dwArg08 + 0x04) * 0x04 / 52] = (struct Eq_448) (real32) rLoc1_358;
	if (dwArg0C < 0x00)
	{
		if (rLoc1_358 == (real64) g_r8049F30 && !P)
		{
			dwArg04[(dwArg08 + 0x04) * 0x04 / 52] = (struct Eq_448) 0.0F;
			struct Eq_1162 * eax_123 = dwArg04 + (dwArg08 *s 0x24) / 52;
			word32 edx_125 = eax_123->dw0034;
			eax_123->dw0034 = eax_123->dw004C;
			eax_123->dw004C = eax_123->dw0054;
			word32 esi_129 = eax_123->dw003C;
			eax_123->dw003C = edx_125;
			word32 edx_131 = eax_123->dw0040;
			eax_123->dw0054 = esi_129;
			eax_123->dw0040 = eax_123->dw0050;
			eax_123->dw0050 = eax_123->dw0048;
			word32 esi_137 = eax_123->dw0038;
			eax_123->dw0038 = edx_131;
			eax_123->dw0048 = esi_137;
			word32 edi_119;
			struct Eq_1220 * esi_140 = &dwArg04->r0030 + 1 + (dwArg08 *s 0x24) / 52;
			for (edi_119 = 0x00; edi_119 != 0x03; ++edi_119)
			{
				esi_140->dw0000 = fn08048BE1(esi_140->dw0000, 0x01);
				esi_140->dw0004 = fn08048BE1(esi_140->dw0004, 0x01);
				esi_140->dw0008 = fn08048BE1(esi_140->dw0008, 0x01);
				++esi_140;
			}
		}
	}
	else if (dwArg0C != 0x00 && (rLoc1_358 == (real64) g_r8049F34 && !P))
	{
		dwArg04[(dwArg08 + 0x04) * 0x04 / 52] = (struct Eq_448) 0.0F;
		struct Eq_1267 * eax_43 = dwArg04 + (dwArg08 *s 0x24) / 52;
		word32 edx_45 = eax_43->dw003C;
		eax_43->dw003C = eax_43->dw0054;
		eax_43->dw0054 = eax_43->dw004C;
		word32 esi_49 = eax_43->dw0034;
		eax_43->dw0034 = edx_45;
		word32 edx_51 = eax_43->dw0038;
		eax_43->dw004C = esi_49;
		eax_43->dw0038 = eax_43->dw0048;
		eax_43->dw0048 = eax_43->dw0050;
		word32 esi_57 = eax_43->dw0040;
		eax_43->dw0040 = edx_51;
		eax_43->dw0050 = esi_57;
		word32 edi_39;
		struct Eq_1325 * esi_106 = &dwArg04->r0030 + 1 + (dwArg08 *s 0x24) / 52;
		for (edi_39 = 0x00; edi_39 != 0x03; ++edi_39)
		{
			esi_106->dw0000 = fn08048C24(esi_106->dw0000, 0x01);
			esi_106->dw0004 = fn08048C24(esi_106->dw0004, 0x01);
			esi_106->dw0008 = fn08048C24(esi_106->dw0008, 0x01);
			++esi_106;
		}
	}
	real64 rLoc1_378 = (real64) dwArg04->r0010;
	real64 rLoc2_379 = (real64) dwArg04->r0014;
	if (!P && rLoc1_378 == rLoc2_379 || (!P && rLoc1_378 == rLoc1_378 || rLoc1_378 == rLoc1_378 && P))
	{
		real64 rLoc3_400 = (real64) dwArg04->r0018;
		if (!P && rLoc2_379 == rLoc3_400 || (!P && rLoc2_379 == rLoc2_379 || rLoc2_379 == rLoc1_378 && P))
		{
			real64 rLoc1_427 = rLoc1_378 + (real64) (dwArg04->a0004)[0];
			dwArg04->r0018 = 0.0F;
			dwArg04->r0014 = 0.0F;
			dwArg04->r0010 = 0.0F;
			dwArg04->a0004[0] = (real32) rLoc1_427;
		}
	}
}

// 080492D1: Register (ptr32 Eq_448) fn080492D1(Stack (ptr32 Eq_448) dwArg04, Stack (ptr32 Eq_1398) dwArg08, Stack int32 dwArg0C)
// Called from:
//      fn08049B18
struct Eq_448 * fn080492D1(struct Eq_448 * dwArg04, struct Eq_1398 * dwArg08, int32 dwArg0C)
{
	int32 ecx_10 = dwArg08->dw0004;
	if (ecx_10 == 0x02)
	{
		fn08048EB5(dwArg04, dwArg08->dw0008, dwArg0C);
		return dwArg04;
	}
	else if (ecx_10 == 0x03)
	{
		fn08048C67(dwArg04, dwArg08->dw0008, dwArg0C);
		return dwArg04;
	}
	else
	{
		if (ecx_10 != 0x01)
			return dwArg04;
		fn080490D5(dwArg04, dwArg08->dw0008, dwArg0C);
		return dwArg04;
	}
}

// 08049330: Register Eq_1428 fn08049330(Register Eq_1428 eax, Stack byte bArg04, Stack word32 dwArg0C)
// Called from:
//      fn08049B18
Eq_1428 fn08049330(Eq_1428 eax, byte bArg04, word32 dwArg0C)
{
	do
	{
		fn0804878C();
		if (eax == 0x00)
			return eax;
	} while (bArg04 != 0x02 || dwArg0C != 0x1B);
	eax.u0 = 0x01;
	return eax;
}

// 08049363: void fn08049363(Register (ptr32 Eq_1398) eax, Stack int32 dwArg04, Stack int32 dwArg08)
// Called from:
//      fn08049B18
void fn08049363(struct Eq_1398 * eax, int32 dwArg04, int32 dwArg08)
{
	fn0804880C();
	eax->dw0004 = dwArg04;
	eax->dw0008 = dwArg08;
}

// 0804937F: void fn0804937F(Register (ptr32 Eq_1453) eax)
// Called from:
//      fn08049394
void fn0804937F(struct Eq_1453 * eax)
{
	fn0804880C();
	eax->dw0004 = 0x3F4CCCCD;
}

// 08049394: Register (ptr32 Eq_155) fn08049394(Register (ptr32 Eq_155) eax)
// Called from:
//      fn08049B18
struct Eq_155 * fn08049394(struct Eq_155 * eax)
{
	fn0804880C();
	eax->dw0004 = 0x00;
	eax->dw0008 = 0x00;
	eax->dw000C = 0x00;
	eax->dw0010 = 0x00;
	eax->dw001C = 0x00;
	eax->dw0028 = 0x00;
	eax->dw0014 = 0x00;
	eax->dw0020 = 0x00;
	eax->dw002C = 0x00;
	eax->dw0018 = 0x00;
	eax->dw0024 = 0x00;
	eax->dw0030 = 0x00;
	int32 edi_10;
	for (edi_10 = 0x00; edi_10 != 0x03; ++edi_10)
	{
		struct Eq_1453 * eax_38 = edi_10 *s 0x24;
		word32 ebp_39;
		word32 esi_43 = eax + 0x34 + eax_38;
		for (ebp_39 = 0x00; ebp_39 != 0x03; ++ebp_39)
		{
			fn0804937F(eax_38);
			esi_43->dw0000 = eax_38;
			fn0804937F(eax_38);
			esi_43->dw0004 = eax_38;
			fn0804937F(eax_38);
			esi_43->dw0008 = eax_38;
			++esi_43;
		}
	}
	return fn08048AA8(eax);
}

// 08049444: Register word32 fn08049444(Stack word32 dwArg04)
// Called from:
//      fn0804993D
word32 fn08049444(word32 dwArg04)
{
	fn0804886C();
	fn0804884C();
	fn0804874C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804874C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804874C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804874C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804874C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804874C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804870C();
	word32 eax_594;
	g_ptr804A134();
	return eax_594;
}

// 0804993D: Register word32 fn0804993D(Stack (ptr32 Eq_448) dwArg04)
// Called from:
//      fn08049B18
word32 fn0804993D(struct Eq_448 * dwArg04)
{
	fn0804881C();
	fn0804881C();
	fn0804881C();
	word32 edi_10;
	struct Eq_448 * dwLoc28_293 = dwArg04;
	for (edi_10 = 0x00; edi_10 != 0x03; ++edi_10)
	{
		fn0804881C();
		word32 ebp_193;
		word32 (* dwLoc24_299)[] = &dwLoc28_293->r0030 + 1;
		for (ebp_193 = 0x00; ebp_193 != 0x03; ++ebp_193)
		{
			fn0804881C();
			ui32 esi_175;
			for (esi_175 = 0x00; esi_175 != 0x03; ++esi_175)
			{
				fn0804881C();
				fn080487FC();
				word32 eax_139 = fn08049444(dwLoc24_299[esi_175]);
				fn080487FC();
				fn0804881C();
			}
			fn0804881C();
			dwLoc24_299 = (word32 (*)[]) (dwLoc24_299 + 3);
		}
		fn0804881C();
		dwLoc28_293 = (struct Eq_448 *) &dwLoc28_293->r0024;
	}
	fn0804881C();
	fn0804881C();
	fn0804881C();
	return eax_139;
}

// 08049B18: void fn08049B18(Register (ptr32 Eq_155) eax)
void fn08049B18(struct Eq_155 * eax)
{
	fn080487CC();
	fn0804877C();
	fn080487DC();
	fn080487BC();
	fn0804883C();
	fn0804872C();
	fn0804882C();
	fn0804873C();
	fn080488CC();
	fn0804875C();
	fn080487AC();
	fn080487EC();
	fn0804875C();
	fn080487AC();
	fn0804876C();
	fn080487AC();
	fn080486FC();
	fn0804881C();
	fn0804881C();
	struct Eq_448 * eax_133 = fn08049394(eax);
	fn0804871C();
	int32 ebx_226;
	int32 dwLoc0130_542 = 0x00;
	Eq_1428 eax_148 = fp - 0x30;
	for (ebx_226 = 0x00; ebx_226 <= 0x3B; ++ebx_226)
	{
		word32 ecx_153;
		word32 * esi_155 = fp - 0x30;
		word32 * edi_156 = fp - 0x016C;
		for (ecx_153 = 0x05; ecx_153 != 0x00; --ecx_153)
		{
			*edi_156 = *esi_155;
			++esi_155;
			++edi_156;
		}
		word32 eax_161 = fn08049330(eax_148, 0x00, 0x3F800000);
		if (eax_161 == 0x01)
		{
l08049E43:
			fn0804889C();
			return;
		}
		fn080488AC();
		int64 edx_eax_174 = (int64) (eax_161 - 0x01);
		fn080488AC();
		int32 edx_178 = (int32) (edx_eax_174 % 0x03);
		eax_148.u0 = (int32) (edx_eax_174 / 0x03);
		if (dwLoc0130_542 == edx_178 + 0x01)
			--ebx_226;
		else
		{
			int64 edx_eax_188 = (int64) eax_148;
			struct Eq_1398 * eax_193 = (int32) (edx_eax_188 / 0x03);
			fn08049363(eax_193, edx_178 + 0x01, (int32) (edx_eax_188 % 0x03));
			(fp - 288)[ebx_226] = eax_193;
			eax_148 = fn080492D1(eax_133, eax_193, 0x5A);
			dwLoc0130_542 = edx_178 + 0x01;
		}
	}
	fn0804993D(eax_133);
	fn0804879C();
	word32 ebx_234 = 0x00;
	Eq_1428 eax_247 = fp - 0x30;
	do
	{
		word32 ecx_252;
		word32 * esi_254 = fp - 0x30;
		word32 * edi_255 = fp - 0x016C;
		for (ecx_252 = 0x05; ecx_252 != 0x00; --ecx_252)
		{
			*edi_255 = *esi_254;
			++esi_254;
			++edi_255;
		}
		if (fn08049330(eax_247, 0x00, 0x3F800000) == 0x01)
			goto l08049E43;
		++ebx_234;
		fn0804881C();
		fn0804876C();
		fn0804887C();
		eax_247 = fn0804993D(eax_133);
		fn0804879C();
		fn0804888C();
		word24 ebx_24_8_481 = SLICE(ebx_234, word24, 8);
	} while (ebx_234 != 200);
	Eq_1428 eax_295 = fp - 0x30;
	ui32 ebx_363 = SEQ(ebx_24_8_481, 0x3B);
	do
	{
		word32 dwLoc0130_569 = 0x00;
		do
		{
			word32 ecx_303;
			word32 * esi_305 = fp - 0x30;
			word32 * edi_306 = fp - 0x016C;
			for (ecx_303 = 0x05; ecx_303 != 0x00; --ecx_303)
			{
				*edi_306 = *esi_305;
				++esi_305;
				++edi_306;
			}
			if (fn08049330(eax_295, 0x00, 0x3F800000) == 0x01)
				goto l08049E43;
			fn0804881C();
			fn080492D1(eax_133, (fp - 288)[ebx_363], ~0x04);
			fn0804876C();
			fn0804887C();
			eax_295 = fn0804993D(eax_133);
			fn0804879C();
			fn0804888C();
			word32 v22_358 = dwLoc0130_569 + 0x01;
			dwLoc0130_569 = v22_358;
		} while (v22_358 != 0x12);
		--ebx_363;
	} while (ebx_363 != ~0x00);
	Eq_1428 eax_366 = fp - 0x30;
	word32 ebx_367;
	for (ebx_367 = 0x00; ebx_367 != 0x015E; ++ebx_367)
	{
		word32 ecx_374;
		word32 * esi_376 = fp - 0x30;
		word32 * edi_377 = fp - 0x016C;
		for (ecx_374 = 0x05; ecx_374 != 0x00; --ecx_374)
		{
			*edi_377 = *esi_376;
			++esi_376;
			++edi_377;
		}
		if (fn08049330(eax_366, 0x00, 0x3F800000) == 0x01)
			goto l08049E43;
		fn0804881C();
		fn0804876C();
		fn0804887C();
		eax_366 = fn0804993D(eax_133);
		fn0804879C();
		fn0804888C();
	}
	fn0804889C();
	__syscall(0x80);
}

