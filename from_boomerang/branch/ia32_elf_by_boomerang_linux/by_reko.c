// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0804829C: void _init(Register word32 esi, Register word32 edi)
void _init(word32 esi, word32 edi)
{
	call_gmon_start();
	frame_dummy();
	__do_global_ctors_aux(esi, edi);
	return;
}

// 080482C4: void scanf@@GLIBC_2.0()
void scanf@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr8049844();
	return;
}

// 080482D4: void __libc_start_main@@GLIBC_2.0()
void __libc_start_main@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr8049848();
	return;
}

// 080482E4: void fwrite@@GLIBC_2.0()
void fwrite@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr804984C();
	return;
}

// 08048300: void fn08048300(Stack word32 dwArg00)
void fn08048300(word32 dwArg00)
{
	__align(fp + 0x04);
	__libc_start_main@@GLIBC_2.0();
	__hlt();
}

// 08048324: void call_gmon_start()
void call_gmon_start()
{
	<anonymous> * eax_15 = globals->ptr8049850;
	if (eax_15 != null)
	{
		word32 esp_29;
		word32 ebp_30;
		word32 ebx_31;
		word32 eax_32;
		byte SCZO_33;
		byte SZO_34;
		byte C_35;
		byte Z_36;
		eax_15();
	}
	return;
}

// 08048350: void __do_global_dtors_aux(Register word32 esi)
void __do_global_dtors_aux(word32 esi)
{
	if (globals->b8049858 == 0x00)
	{
		<anonymous> ** eax_27 = globals->ptr8049754;
		<anonymous> * edx_28 = *eax_27;
		if (edx_28 != null)
		{
			do
			{
				<anonymous> ** eax_64 = (char *) eax_27 + 0x04;
				globals->ptr8049754 = eax_64;
				word32 esp_67;
				word32 ebp_68;
				byte SCZO_69;
				byte Z_70;
				word32 eax_71;
				word32 edx_72;
				byte SZO_73;
				byte C_74;
				word32 esi_75;
				edx_28();
				eax_27 = globals->ptr8049754;
			} while (*eax_27 != null);
		}
		if (0x00 != 0x00)
		{
			word32 esp_53;
			word32 ebp_54;
			byte SCZO_55;
			byte Z_56;
			word32 eax_57;
			word32 edx_58;
			byte SZO_59;
			byte C_60;
			word32 esi_61;
			fn00000000();
		}
		globals->b8049858 = 0x01;
	}
	return;
}

// 080483B0: void frame_dummy()
void frame_dummy()
{
	if (0x00 != 0x00)
	{
		word32 esp_58;
		word32 ebp_59;
		word32 eax_60;
		word32 edx_61;
		byte SCZO_62;
		byte SZO_63;
		byte C_64;
		byte Z_65;
		fn00000000();
	}
	if (globals->dw8049834 != 0x00 && 0x00 != 0x00)
	{
		word32 esp_46;
		word32 ebp_47;
		word32 eax_48;
		word32 edx_49;
		byte SCZO_50;
		byte SZO_51;
		byte C_52;
		byte Z_53;
		fn00000000();
	}
	return;
}

// 08048410: void main()
void main()
{
	__align(fp - 44);
	scanf@@GLIBC_2.0();
	scanf@@GLIBC_2.0();
	if (0x05 == dwLoc0C)
	{
		fwrite@@GLIBC_2.0();
		if (0x05 == dwLoc0C)
			goto l08048476;
	}
	fwrite@@GLIBC_2.0();
l08048476:
	if (0x05 > dwLoc0C)
	{
		fwrite@@GLIBC_2.0();
		if (0x05 > dwLoc0C)
		{
l080484CE:
			fwrite@@GLIBC_2.0();
			if (0x05 >= dwLoc0C)
				goto l0804851D;
l080484F8:
			fwrite@@GLIBC_2.0();
l0804851D:
			if (0x05 > dwLoc10)
			{
				fwrite@@GLIBC_2.0();
				if (0x05 > dwLoc10)
				{
l08048576:
					fwrite@@GLIBC_2.0();
					if (0x05 >= dwLoc10)
						goto l080485C5;
l080485A0:
					fwrite@@GLIBC_2.0();
l080485C5:
					if (0x05 >= dwLoc0C)
						fwrite@@GLIBC_2.0();
					if (0x05 < dwLoc0C)
						fwrite@@GLIBC_2.0();
					return;
				}
			}
			fwrite@@GLIBC_2.0();
			if (0x05 < dwLoc10)
				goto l080485A0;
			goto l08048576;
		}
	}
	fwrite@@GLIBC_2.0();
	if (0x05 < dwLoc0C)
		goto l080484F8;
	goto l080484CE;
}

// 08048660: void __do_global_ctors_aux(Register word32 esi, Register word32 edi)
void __do_global_ctors_aux(word32 esi, word32 edi)
{
	<anonymous> * eax_11 = globals->ptr8049824;
	if (eax_11 != (<anonymous> *) ~0x00)
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
			eax_11();
		} while (*ebx_35 != ~0x00);
	}
	return;
}

// 08048690: void _fini(Register word32 esi)
void _fini(word32 esi)
{
	__do_global_dtors_aux(esi);
	return;
}

