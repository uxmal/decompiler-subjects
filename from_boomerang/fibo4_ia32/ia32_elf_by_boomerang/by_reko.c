// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 080482A4: void _init()
void _init()
{
	call_gmon_start();
	frame_dummy();
	__do_global_ctors_aux();
	return;
}

// 080482DC: void fn080482DC()
void fn080482DC()
{
	word32 esp_3;
	globals->ptr8049608();
	return;
}

// 080482EC: void fn080482EC()
void fn080482EC()
{
	word32 esp_3;
	globals->ptr804960C();
	return;
}

// 080482FC: void fn080482FC()
void fn080482FC()
{
	word32 esp_3;
	globals->ptr8049610();
	return;
}

// 0804830C: void _start(Stack word32 dwArg00)
void _start(word32 dwArg00)
{
	__align(fp + 0x04);
	fn080482DC();
	__hlt();
}

// 08048330: void call_gmon_start()
void call_gmon_start()
{
	if (globals->dw80495FC != 0x00)
		fn080482FC();
	return;
}

// 08048354: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (globals->b8049620 == 0x00)
	{
		while (true)
		{
			<anonymous> ** eax_26 = globals->ptr804961C;
			<anonymous> * edx_27 = *eax_26;
			if (edx_27 == null)
				break;
			globals->ptr804961C = (<anonymous> **) ((char *) eax_26 + 0x04);
			word32 esp_35;
			word32 ebp_36;
			byte SCZO_37;
			byte Z_38;
			word32 eax_39;
			word32 edx_40;
			byte SZO_41;
			byte C_42;
			edx_27();
		}
		globals->b8049620 = 0x01;
	}
	return;
}

// 08048388: void frame_dummy()
void frame_dummy()
{
	if (globals->dw8049528 != 0x00 && 0x00 != 0x00)
	{
		word32 esp_31;
		word32 ebp_32;
		byte SCZO_33;
		word32 eax_34;
		byte SZO_35;
		byte C_36;
		byte Z_37;
		null();
	}
	return;
}

// 080483B0: Register int32 fib(Register int32 esi)
int32 fib(int32 esi)
{
	int32 dwLoc0C_18;
	if (esi > 0x01)
		dwLoc0C_18 = fib(esi - 0x01) + fib(esi - 0x02);
	else
		dwLoc0C_18 = esi;
	return dwLoc0C_18;
}

// 080483DF: void main()
void main()
{
	__align(fp - 0x1C);
	fn080482EC();
	word32 esp_25;
	word32 ebp_26;
	byte SCZO_27;
	word32 eax_28;
	word32 esi_29;
	__gmon_start__();
	fib(dwLoc0C);
	fn080482EC();
	return;
}

// 08048448: void __libc_csu_init()
void __libc_csu_init()
{
	_init();
	int32 eax_21 = 134518488 - 134518488;
	if (eax_21 >> 0x02 != 0x00)
	{
		do
		{
			word32 esp_56;
			word32 ebp_57;
			uint32 edi_58;
			word32 esi_59;
			word32 ebx_60;
			byte SCZO_61;
			word32 eax_62;
			word32 edx_63;
			byte Z_64;
			byte SZO_65;
			byte C_66;
			bcuiposr0 None_67;
			(*(<anonymous> **) 134518488)();
		} while (edi_58 + 0x01 < eax_21 >> 0x02);
		return;
	}
	else
		return;
}

// 08048498: void __libc_csu_fini()
void __libc_csu_fini()
{
	return;
}

// 080484A0: void __do_global_ctors_aux()
void __do_global_ctors_aux()
{
	<anonymous> * eax_13 = globals->ptr8049518;
	if (eax_13 != (<anonymous> *) ~0x00)
	{
		do
		{
			word32 esp_26;
			word32 ebp_27;
			ptr32 ebx_28;
			word32 edx_29;
			word32 eax_30;
			byte SCZO_31;
			byte Z_32;
			eax_13();
		} while (*(ebx_28 - 0x04) != ~0x00);
	}
	return;
}

// 080484C8: void _fini()
void _fini()
{
	__do_global_dtors_aux();
	return;
}

