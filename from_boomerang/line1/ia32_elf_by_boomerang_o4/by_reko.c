// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 080482F8: void _init(Register word32 esi, Register word32 edi)
void _init(word32 esi, word32 edi)
{
	call_gmon_start();
	frame_dummy(esi, edi);
	__do_global_ctors_aux(esi, edi);
	return;
}

// 08048330: void puts@@GLIBC_2.0()
void puts@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr8049754();
	return;
}

// 08048340: void fgets@@GLIBC_2.0()
void fgets@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr8049758();
	return;
}

// 08048350: void __libc_start_main@@GLIBC_2.0()
void __libc_start_main@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr804975C();
	return;
}

// 08048360: void fclose@@GLIBC_2.1()
void fclose@@GLIBC_2.1()
{
	word32 esp_3;
	globals->ptr8049760();
	return;
}

// 08048370: void fopen@@GLIBC_2.1()
void fopen@@GLIBC_2.1()
{
	word32 esp_3;
	globals->ptr8049764();
	return;
}

// 08048380: void _start(Stack word32 dwArg00)
void _start(word32 dwArg00)
{
	__align(fp + 0x04);
	__libc_start_main@@GLIBC_2.0();
	__hlt();
}

// 080483A4: void call_gmon_start()
void call_gmon_start()
{
	<anonymous> * eax_15 = globals->ptr8049768;
	if (eax_15 != null)
	{
		word32 esp_29;
		word32 ebp_30;
		word32 ebx_31;
		byte SCZO_32;
		word32 eax_33;
		byte SZO_34;
		byte C_35;
		byte Z_36;
		eax_15();
	}
	return;
}

// 080483D0: void __do_global_dtors_aux(Register int32 esi)
void __do_global_dtors_aux(int32 esi)
{
	if (globals->b804976C == 0x00)
	{
		<anonymous> ** eax_25 = globals->ptr8049660;
		<anonymous> * edx_26 = *eax_25;
		if (edx_26 != null)
		{
			do
			{
				<anonymous> ** eax_42 = (char *) eax_25 + 0x04;
				globals->ptr8049660 = eax_42;
				word32 esp_45;
				word32 ebp_46;
				byte SCZO_47;
				byte Z_48;
				word32 eax_49;
				word32 edx_50;
				byte SZO_51;
				byte C_52;
				word32 esi_53;
				edx_26();
				eax_25 = globals->ptr8049660;
			} while (*eax_25 != null);
		}
		globals->b804976C = 0x01;
	}
	return;
}

// 08048410: void frame_dummy(Register word32 esi, Register word32 edi)
void frame_dummy(word32 esi, word32 edi)
{
	if (globals->dw8049740 != 0x00 && 0x00 != 0x00)
	{
		word32 esp_32;
		word32 ebp_33;
		byte SCZO_34;
		word32 eax_35;
		byte SZO_36;
		byte C_37;
		byte Z_38;
		word32 esi_39;
		word32 edi_40;
		fn00000000();
	}
	return;
}

// 08048450: void main(Stack word32 dwArg04, Stack word32 dwArg08)
void main(word32 dwArg04, word32 dwArg08)
{
	__align(fp - 0x041C);
	if (dwArg04 > 0x01)
	{
		fopen@@GLIBC_2.1();
		if (0x08048654 != 0x00)
		{
			fgets@@GLIBC_2.0();
			if (0x01 != 0x00)
			{
				byte * eax_63 = __libc_start_main((int32 (*)(int32, char **, char **)) 0x01, 0x0A, &globals->ptr8048654, ptrLoc0410, ptrLoc040C, ptrLoc0408, ptrLoc0404);
				if (eax_63 != null)
					*eax_63 = 0x00;
				puts@@GLIBC_2.0();
			}
			fclose@@GLIBC_2.1();
		}
	}
	return;
}

// 080484F0: void chomp(Register (ptr Eq_142) eax, Register (ptr Eq_147) ebx, Register (ptr void) ebp, Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void chomp( * eax,  * ebx, void, word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	fgets@@GLIBC_2.0();
	if (eax != null)
	{
		byte * eax_40 = __libc_start_main(eax, 0x0A, dwArg0C, ptrLoc10, ptrLoc0C, ebx, ebp);
		if (eax_40 != null)
			*eax_40 = 0x00;
	}
	return;
}

// 08048540: void __libc_csu_init(Register word32 edi)
void __libc_csu_init(word32 edi)
{
	struct Eq_190 * ebx_19 = __i686.get_pc_thunk.bx(dwLoc20);
	_init(0x00, edi);
	if (0x00 < &ebx_19->ptr1108 - &ebx_19->ptr1108 >> 0x02)
	{
		do
		{
			word32 esp_47;
			word32 ebp_48;
			uint32 edi_49;
			uint32 esi_50;
			byte SZO_51;
			byte C_52;
			word32 ebx_53;
			byte SCZO_54;
			word32 edx_55;
			word32 eax_56;
			ebx_19->ptr1108();
		} while (esi_50 + 0x01 < edi_49);
	}
	return;
}

// 080485A0: void __libc_csu_fini()
void __libc_csu_fini()
{
	struct Eq_190 * ebx_11 = __i686.get_pc_thunk.bx(dwLoc10);
	int32 eax_17 = ebx_11->a10AA - ebx_11->a10AA;
	int32 esi_22 = (eax_17 >> 0x02) - 0x01;
	if (eax_17 >> 0x02 != 0x00)
	{
		do
		{
			word32 esp_36;
			word32 ebp_37;
			byte SCZO_38;
			word32 ebx_39;
			word32 esi_40;
			word32 eax_41;
			word32 edx_42;
			byte SZO_43;
			byte C_44;
			byte Z_45;
			ebx_11->a10AA[esi_22]();
			esi_22 = esi_40 - 0x01;
		} while (esi_40 != 0x00);
	}
	_fini(esi_22);
	return;
}

// 080485F0: Register word32 __i686.get_pc_thunk.bx(Stack word32 dwArg00)
word32 __i686.get_pc_thunk.bx(word32 dwArg00)
{
	return dwArg00;
}

// 08048600: void __do_global_ctors_aux(Register word32 esi, Register word32 edi)
void __do_global_ctors_aux(word32 esi, word32 edi)
{
	<anonymous> * eax_12 = globals->ptr8049730;
	if (eax_12 != (<anonymous> *) ~0x00)
	{
		do
		{
			word32 esp_33;
			word32 ebp_34;
			word32 * ebx_35;
			byte SCZO_36;
			word32 eax_37;
			byte Z_38;
			word32 esi_39;
			word32 edi_40;
			eax_12();
		} while (*ebx_35 != ~0x00);
	}
	return;
}

// 08048630: void _fini(Register int32 esi)
void _fini(int32 esi)
{
	__do_global_dtors_aux(esi);
	return;
}

