// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 08048280: void _init()
void _init()
{
	call_gmon_start();
	frame_dummy();
	__do_global_ctors_aux();
	return;
}

// 080482A8: void fn080482A8()
void fn080482A8()
{
	word32 esp_3;
	globals->ptr8049548();
	return;
}

// 080482B8: void fn080482B8()
void fn080482B8()
{
	word32 esp_3;
	globals->ptr804954C();
	return;
}

// 080482C8: void fn080482C8()
void fn080482C8()
{
	word32 esp_3;
	globals->ptr8049550();
	return;
}

// 080482D8: void _start(Stack word32 dwArg00)
void _start(word32 dwArg00)
{
	__align(fp + 0x04);
	fn080482A8();
	__hlt();
}

// 080482FC: void call_gmon_start()
void call_gmon_start()
{
	if (globals->dw8049540 != 0x00)
		fn080482C8();
	return;
}

// 08048320: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (globals->b8049560 == 0x00)
	{
		while (true)
		{
			<anonymous> ** eax_26 = globals->ptr804955C;
			<anonymous> * edx_27 = *eax_26;
			if (edx_27 == null)
				break;
			globals->ptr804955C = (<anonymous> **) ((char *) eax_26 + 0x04);
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
		globals->b8049560 = 0x01;
	}
	return;
}

// 08048354: void frame_dummy()
void frame_dummy()
{
	if (globals->dw804946C != 0x00 && 0x00 != 0x00)
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

// 0804837C: void main(Stack word32 dwArg04)
void main(word32 dwArg04)
{
	fn08048396(dwArg04);
	fn080482B8();
	return;
}

// 08048396: void fn08048396(Register word32 ebx)
void fn08048396(word32 ebx)
{
	return;
}

// 080483A4: void __libc_csu_init()
void __libc_csu_init()
{
	_init();
	int32 eax_21 = 134518300 - 134518300;
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
			(*(<anonymous> **) 134518300)();
		} while (edi_58 + 0x01 < eax_21 >> 0x02);
		return;
	}
	else
		return;
}

// 080483F4: void __libc_csu_fini()
void __libc_csu_fini()
{
	return;
}

// 080483FC: void __do_global_ctors_aux()
void __do_global_ctors_aux()
{
	<anonymous> * eax_13 = globals->ptr804945C;
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

// 08048424: void _fini()
void _fini()
{
	__do_global_dtors_aux();
	return;
}

