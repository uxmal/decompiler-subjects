// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 08048294: void _init()
void _init()
{
	if (globals->dw8049978 != 0x00)
		fn080482D4();
	frame_dummy();
	__do_global_ctors_aux();
	return;
}

// 080482D4: void fn080482D4()
void fn080482D4()
{
	word32 esp_3;
	globals->ptr8049980();
	return;
}

// 080482E4: void fn080482E4()
void fn080482E4()
{
	word32 esp_3;
	globals->ptr8049984();
	return;
}

// 080482F4: void fn080482F4()
void fn080482F4()
{
	word32 esp_3;
	globals->ptr8049988();
	return;
}

// 08048310: void _start(Stack word32 dwArg00)
void _start(word32 dwArg00)
{
	__align(fp + 0x04);
	fn080482E4();
	__hlt();
}

// 08048340: void __do_global_dtors_aux(Register word32 esi)
void __do_global_dtors_aux(word32 esi)
{
	if (globals->b8049990 == 0x00)
	{
		uint32 eax_23 = globals->dw8049994;
		if (eax_23 < 0x00)
			globals->dw8049994 = eax_23 + 0x01;
		globals->b8049990 = 0x01;
	}
	return;
}

// 080483A0: void frame_dummy()
void frame_dummy()
{
	if (globals->dw80498A4 != 0x00 && 0x00 != 0x00)
	{
		word32 esp_28;
		word32 ebp_29;
		byte SCZO_30;
		word32 eax_31;
		byte SZO_32;
		byte C_33;
		byte Z_34;
		null();
	}
	return;
}

// 080483D0: void copy1_four_times(Stack (ptr byte) dwArg04, Stack (ptr byte) dwArg08, Stack word32 dwArg0C)
void copy1_four_times(byte * dwArg04, byte * dwArg08, word32 dwArg0C)
{
	word16 * ecx_104 = dwArg04;
	word16 * edx_102 = dwArg08;
	Eq_76 ebx_109 = (word32) dwArg0C + 0x03;
	if (dwArg0C < 0x03)
		ebx_109 = (word32) dwArg0C + 0x06;
	uint32 esi_27 = dwArg0C >> 0x1F >> 0x1E;
	int32 eax_30 = ((word32) dwArg0C + esi_27 & 0x03) - esi_27;
	int32 ebx_32 = ebx_109 >> 0x02;
	if (eax_30 != 0x01)
	{
		if (eax_30 <= 0x01)
		{
			if (eax_30 != 0x00)
				return;
			goto l08048443;
		}
		if (eax_30 != 0x02)
		{
			if (eax_30 != 0x03)
				return;
			*dwArg04 = (word16) (word32) *dwArg08;
			edx_102 = dwArg08 + 0x01;
			ecx_104 = dwArg04 + 0x01;
		}
l08048424:
		*ecx_104 = (word16) (word32) *edx_102;
		edx_102 = edx_102 + 0x01;
		ecx_104 = ecx_104 + 0x01;
	}
	*ecx_104 = (word16) (word32) *edx_102;
	ebx_32 = ebx_32 - 0x01;
	if (ebx_32 <= 0x00)
		return;
	ecx_104 = ecx_104 + 0x01;
	edx_102 = edx_102 + 0x01;
l08048443:
	*ecx_104 = (word16) (word32) *edx_102;
	word16 * edx_61 = edx_102 + 0x01;
	word16 * ecx_65 = ecx_104 + 0x01;
	*ecx_65 = (word16) (word32) *edx_61;
	edx_102 = edx_61 + 0x01;
	ecx_104 = ecx_65 + 0x01;
	goto l08048424;
}

// 08048470: Register ptr32 copy1_eight_times(Stack (ptr byte) dwArg04, Stack (ptr byte) dwArg08, Stack word32 dwArg0C, Register out ptr32 esiOut)
ptr32 copy1_eight_times(byte * dwArg04, byte * dwArg08, word32 dwArg0C, ptr32 & esiOut)
{
	uint32 esi_26 = dwArg0C >> 0x1F >> 0x1D;
	uint32 ecx_29 = ((word32) dwArg0C + esi_26 & 0x07) - esi_26;
	if (ecx_29 <= 0x07)
	{
		ptr32 esp_55;
		word32 ebp_56;
		word32 ecx_57;
		word32 esi_58;
		word32 edx_59;
		word32 ebx_60;
		word32 eax_61;
		byte SCZO_62;
		byte S_63;
		byte SZO_64;
		byte C_65;
		byte CZ_66;
		(*((char *) globals->a80487B4 + ecx_29 * 0x04))();
		return esp_55;
	}
	else
	{
		word32 esi_48;
		*esiOut = esi;
		return fp;
	}
}

// 08048520: Register ptr32 copy2_four_times(Stack word32 dwArg00, Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C, Register out ptr32 ebpOut, Register out ptr32 esiOut)
ptr32 copy2_four_times(word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 & ebpOut, ptr32 & esiOut)
{
copy2_four_times_entry:
	word16 * eax_10 = dwArg04
	word16 * edx_18 = dwArg08
	branch dwArg0C <= 0x00 l08048596
	goto l08048532
l08048520:
l08048532:
	word32 ecx_48 = 0x04 - dwArg0C
	word32 esi_51 = 0x08 - dwArg0C + (dwArg0C - 0x04 & ~0x03)
	goto l08048556
l08048550:
	eax_10 = eax_10 + 0x01
	edx_18 = edx_18 + 0x01
l08048556:
	branch ecx_48 == 0x02 l0804857D
l0804855B:
	branch ecx_48 == 0x03 l08048589
l08048560:
	branch ecx_48 == 0x01 l08048571
l08048565:
	*eax_10 = (word16) (word32) *edx_18
	edx_18 = edx_18 + 0x01
	eax_10 = eax_10 + 0x01
l08048571:
	*eax_10 = (word16) (word32) *edx_18
	edx_18 = edx_18 + 0x01
	eax_10 = eax_10 + 0x01
l0804857D:
	*eax_10 = (word16) (word32) *edx_18
	edx_18 = edx_18 + 0x01
	eax_10 = eax_10 + 0x01
l08048589:
	*eax_10 = (word16) (word32) *edx_18
	ecx_48 = ecx_48 + 0x04
	branch ecx_48 != esi_51 l08048550
l08048596:
	return fp
	word32 esi_39
	*esiOut = dwArg04
	word32 ebp_41
	*ebpOut = dwArg08
	return fp + 0x0C
copy2_four_times_exit:
}

// 080485A0: FlagGroup bool copy2_eight_times(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
bool copy2_eight_times(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word16 * eax_10 = dwArg04;
	word16 * edx_101 = dwArg08;
	bool CZ_23 = false;
	if (dwArg0C <= 0x00)
		return CZ_23;
	else
	{
		uint32 ecx_43 = 0x08 - dwArg0C;
		uint32 esi_46 = 0x10 - dwArg0C + (dwArg0C - 0x08 & ~0x07);
		while (true)
		{
			if (ecx_43 > 0x07)
				goto l080485D0;
			switch (ecx_43)
			{
			case 0x00:
l080485D0:
				*eax_10 = (word16) (word32) *edx_101;
				edx_101 = edx_101 + 0x01;
				eax_10 = eax_10 + 0x01;
				goto l080485DC;
			case 0x01:
l080485DC:
				*eax_10 = (word16) (word32) *edx_101;
				edx_101 = edx_101 + 0x01;
				eax_10 = eax_10 + 0x01;
				goto l080485E8;
			case 0x02:
l080485E8:
				*eax_10 = (word16) (word32) *edx_101;
				edx_101 = edx_101 + 0x01;
				eax_10 = eax_10 + 0x01;
				goto l080485F4;
			case 0x03:
l080485F4:
				*eax_10 = (word16) (word32) *edx_101;
				edx_101 = edx_101 + 0x01;
				eax_10 = eax_10 + 0x01;
				goto l08048600;
			case 0x04:
l08048600:
				*eax_10 = (word16) (word32) *edx_101;
				edx_101 = edx_101 + 0x01;
				eax_10 = eax_10 + 0x01;
				goto l0804860C;
			case 0x05:
l0804860C:
				*eax_10 = (word16) (word32) *edx_101;
				edx_101 = edx_101 + 0x01;
				eax_10 = eax_10 + 0x01;
				goto l08048618;
			case 0x06:
l08048618:
				*eax_10 = (word16) (word32) *edx_101;
				edx_101 = edx_101 + 0x01;
				eax_10 = eax_10 + 0x01;
				goto l08048624;
			case 0x07:
l08048624:
				*eax_10 = (word16) (word32) *edx_101;
				ecx_43 = ecx_43 + 0x08;
				CZ_23 = cond(ecx_43 - esi_46);
				if (ecx_43 == esi_46)
					return CZ_23;
				break;
			}
			eax_10 = eax_10 + 0x01;
			edx_101 = edx_101 + 0x01;
		}
	}
}

// 08048650: void main(Register (ptr byte) eax, Register word32 ebp)
void main(byte * eax, word32 ebp)
{
	__align(fp - 0x04);
	fn080482F4();
	fn080482F4();
	copy1_four_times(eax, eax, 100);
	word32 esi_25;
	struct Eq_445 * esp_26 = copy1_eight_times(eax, eax, 100, out esi_25);
	esp_26->dw0004 = esi_25;
	esp_26->ptr0000 = eax;
	esp_26->dw0008 = 100;
	word32 ebp_33;
	byte * esi_34;
	struct Eq_463 * esp_35 = copy2_four_times(ebp, dwArg00, dwArg04, dwArg08, out ebp_33, out esi_34);
	esp_35->ptr0004 = esi_34;
	esp_35->ptr0000 = eax;
	esp_35->dw0008 = 100;
	copy2_eight_times(dwArg00, dwArg04, dwArg08);
	byte * edi_20 = eax;
	word32 ecx_43 = 200;
	if (ecx_43 != 0x00)
	{
		esi_34 = esi_74 + 0x01;
		edi_20 = edi_75 + 0x01;
		ecx_43 = ecx_43 - 0x01;
		byte * esi_74 = esi_34;
		byte * edi_75 = edi_20;
		if (*esi_74 != *edi_75)
			goto l080486CC;
	}
	return;
}

// 080486F0: void __libc_csu_fini()
void __libc_csu_fini()
{
	return;
}

// 08048700: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void __libc_csu_init(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	struct Eq_508 * ebx_16 = __i686.get_pc_thunk.bx(dwLoc14);
	_init();
	if (&ebx_16->ptr1189 - &ebx_16->ptr1189 >> 0x02 != 0x00)
	{
		do
		{
			word32 esp_60;
			word32 ebp_61;
			uint32 edi_62;
			uint32 esi_63;
			word32 ebx_64;
			byte SCZO_65;
			word32 eax_66;
			byte SZO_67;
			byte C_68;
			byte Z_69;
			ebx_16->ptr1189();
		} while (esi_63 + 0x01 < edi_62);
	}
	return;
}

// 0804875A: Register word32 __i686.get_pc_thunk.bx(Stack word32 dwArg00)
word32 __i686.get_pc_thunk.bx(word32 dwArg00)
{
	return dwArg00;
}

// 08048760: void __do_global_ctors_aux()
void __do_global_ctors_aux()
{
	<anonymous> * eax_11 = globals->ptr8049894;
	if (eax_11 != (<anonymous> *) ~0x00)
	{
		do
		{
			word32 esp_26;
			word32 ebp_27;
			word32 * ebx_28;
			byte SCZO_29;
			word32 eax_30;
			byte Z_31;
			eax_11();
		} while (*ebx_28 != ~0x00);
	}
	return;
}

// 0804878C: void _fini(Register word32 esi)
void _fini(word32 esi)
{
	__do_global_dtors_aux(esi);
	return;
}

