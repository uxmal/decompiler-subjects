// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 08048230: void _init()
void _init()
{
	call_gmon_start();
	frame_dummy();
	__do_global_ctors_aux();
	return;
}

// 08048258: void __libc_start_main@@GLIBC_2.0()
void __libc_start_main@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr8049580();
	return;
}

// 08048268: void printf@@GLIBC_2.0()
void printf@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr8049584();
	return;
}

// 08048278: void _start(Stack word32 dwArg00)
void _start(word32 dwArg00)
{
	__align(fp + 0x04);
	__libc_start_main@@GLIBC_2.0();
	__hlt();
}

// 0804829C: void call_gmon_start()
void call_gmon_start()
{
	<anonymous> * eax_15 = globals->ptr8049588;
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

// 080482C0: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (globals->b804958C == 0x00)
	{
		<anonymous> ** eax_25 = globals->ptr8049494;
		<anonymous> * edx_26 = *eax_25;
		if (edx_26 != null)
		{
			do
			{
				<anonymous> ** eax_42 = (char *) eax_25 + 0x04;
				globals->ptr8049494 = eax_42;
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
				eax_25 = globals->ptr8049494;
			} while (*eax_25 != null);
		}
		globals->b804958C = 0x01;
	}
	return;
}

// 080482FC: void frame_dummy()
void frame_dummy()
{
	if (globals->dw8049570 != 0x00 && 0x00 != 0x00)
	{
		word32 esp_31;
		word32 ebp_32;
		byte SCZO_33;
		word32 eax_34;
		byte SZO_35;
		byte C_36;
		byte Z_37;
		fn00000000();
	}
	return;
}

// 08048328: void test(Stack word32 dwArg04)
void test(word32 dwArg04)
{
	printf@@GLIBC_2.0();
	return;
}

// 0804836F: void main(Stack word32 dwArg04)
void main(word32 dwArg04)
{
	__align(fp - 0x0C);
	test(~0x04);
	test(~0x01);
	test(0x00);
	test(dwArg04);
	test(0x05);
	return;
}

// 080483C8: void __libc_csu_init()
void __libc_csu_init()
{
	_init();
	if (true)
		return;
}

// 080483F8: void __libc_csu_fini()
void __libc_csu_fini()
{
	if (false)
	{
		do
		{
			word32 esp_34;
			word32 ebp_35;
			word32 ebx_36;
			word32 eax_37;
			byte SCZO_38;
			byte SZO_39;
			byte C_40;
			byte Z_41;
			bcuiposr0 None_42;
			word32 edx_43;
			((<anonymous> **) 0x08049488)();
		} while (ebx_36 != 0x00);
	}
	_fini();
	return;
}

// 0804842C: void __do_global_ctors_aux()
void __do_global_ctors_aux()
{
	<anonymous> * eax_13 = globals->ptr8049560;
	if (eax_13 != (<anonymous> *) ~0x00)
	{
		do
		{
			word32 esp_29;
			word32 ebp_30;
			word32 * ebx_31;
			word32 edx_32;
			word32 eax_33;
			byte SCZO_34;
			byte Z_35;
			eax_13();
		} while (*ebx_31 != ~0x00);
	}
	return;
}

// 08048450: void _fini()
void _fini()
{
	__do_global_dtors_aux();
	return;
}

