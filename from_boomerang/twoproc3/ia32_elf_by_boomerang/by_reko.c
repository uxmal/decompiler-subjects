// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0804835C: void _init(Register word32 esi, Register word32 edi)
void _init(word32 esi, word32 edi)
{
	call_gmon_start();
	frame_dummy();
	__do_global_ctors_aux(esi, edi);
	return;
}

// 08048394: void fn08048394()
void fn08048394()
{
	word32 esp_3;
	globals->ptr80496F8();
	return;
}

// 080483A4: void fn080483A4()
void fn080483A4()
{
	word32 esp_3;
	globals->ptr80496FC();
	return;
}

// 080483B4: void fn080483B4()
void fn080483B4()
{
	word32 esp_3;
	globals->ptr8049700();
	return;
}

// 080483D0: void _start(Stack word32 dwArg00)
void _start(word32 dwArg00)
{
	__align(fp + 0x04);
	fn08048394();
	__hlt();
}

// 080483F4: void call_gmon_start()
void call_gmon_start()
{
	if (globals->dw80496EC != 0x00)
		fn080483B4();
	return;
}

// 08048420: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (globals->b8049710 == 0x00)
	{
		while (true)
		{
			<anonymous> ** eax_26 = globals->ptr804970C;
			<anonymous> * edx_27 = *eax_26;
			if (edx_27 == null)
				break;
			globals->ptr804970C = (<anonymous> **) ((char *) eax_26 + 0x04);
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
		globals->b8049710 = 0x01;
	}
	return;
}

// 08048450: void frame_dummy()
void frame_dummy()
{
	if (globals->dw8049610 != 0x00 && 0x00 != 0x00)
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

// 08048474: void getDevice(Stack word32 dwArg04)
void getDevice(word32 dwArg04)
{
	return;
}

// 0804847F: void main()
void main()
{
	__align(fp - 0x1C);
	word32 esp_14;
	word32 ebp_15;
	byte SCZO_16;
	word32 eax_17;
	__gmon_start__();
	getDevice((word32 *) 0x10);
	fn080483A4();
	return;
}

// 080484D0: void __libc_csu_init(Register word32 esi, Register word32 edi)
void __libc_csu_init(word32 esi, word32 edi)
{
	_init(esi, edi);
	int32 eax_21 = 0x080497D0 - 0x080497D0;
	if (eax_21 >> 0x02 != 0x00)
	{
		do
		{
			word32 esp_58;
			word32 ebp_59;
			uint32 edi_60;
			word32 esi_61;
			word32 ebx_62;
			byte SCZO_63;
			word32 eax_64;
			word32 edx_65;
			byte Z_66;
			byte SZO_67;
			byte C_68;
			bcuiposr0 None_69;
			(*(<anonymous> **) 0x080497D0)();
		} while (edi_60 + 0x01 < eax_21 >> 0x02);
		return;
	}
	else
		return;
}

// 08048540: void __libc_csu_fini()
void __libc_csu_fini()
{
	int32 eax_20 = 0x080497D0 - 0x080497D0;
	int32 eax_23 = (eax_20 >> 0x02) - 0x01;
	if (eax_23 != ~0x00)
	{
		<anonymous> ** esi_43 = 0x080497D0 + eax_23 * 0x04;
		do
		{
			word32 esp_50;
			word32 ebp_51;
			word32 edi_52;
			word32 esi_53;
			word32 ebx_54;
			byte SCZO_55;
			word32 eax_56;
			word32 edx_57;
			byte SZO_58;
			byte Z_59;
			byte C_60;
			(*esi_43)();
		} while (eax_20 >> 0x02 != edi_52 + 0x01);
	}
	_fini();
	return;
}

// 080485A0: void __do_global_ctors_aux(Register word32 esi, Register word32 edi)
void __do_global_ctors_aux(word32 esi, word32 edi)
{
	<anonymous> * eax_11 = globals->ptr8049600;
	if (eax_11 != (<anonymous> *) ~0x00)
	{
		do
		{
			word32 esp_30;
			word32 ebp_31;
			ptr32 ebx_32;
			byte SCZO_33;
			word32 eax_34;
			byte Z_35;
			word32 esi_36;
			word32 edi_37;
			eax_11();
		} while (*(ebx_32 - 0x04) != ~0x00);
	}
	return;
}

// 080485D4: void _fini()
void _fini()
{
	__do_global_dtors_aux();
	return;
}

