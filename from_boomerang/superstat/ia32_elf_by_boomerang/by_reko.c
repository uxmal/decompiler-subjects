// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 08048254: void _init()
void _init()
{
	call_gmon_start();
	frame_dummy();
	__do_global_ctors_aux();
	return;
}

// 0804827C: void __xstat@@GLIBC_2.0()
void __xstat@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr8049678();
	return;
}

// 0804828C: void __libc_start_main@@GLIBC_2.0()
void __libc_start_main@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr804967C();
	return;
}

// 0804829C: void printf@@GLIBC_2.0()
void printf@@GLIBC_2.0()
{
	word32 esp_3;
	globals->ptr8049680();
	return;
}

// 080482AC: void _start(Stack word32 dwArg00)
void _start(word32 dwArg00)
{
	__align(fp + 0x04);
	__libc_start_main@@GLIBC_2.0();
	__hlt();
}

// 080482D0: void call_gmon_start()
void call_gmon_start()
{
	<anonymous> * eax_15 = globals->ptr8049684;
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

// 080482F4: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (globals->b8049688 == 0x00)
	{
		<anonymous> ** eax_25 = globals->ptr804958C;
		<anonymous> * edx_26 = *eax_25;
		if (edx_26 != null)
		{
			do
			{
				<anonymous> ** eax_42 = (char *) eax_25 + 0x04;
				globals->ptr804958C = eax_42;
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
				eax_25 = globals->ptr804958C;
			} while (*eax_25 != null);
		}
		globals->b8049688 = 0x01;
	}
	return;
}

// 08048330: void frame_dummy()
void frame_dummy()
{
	if (globals->dw8049668 != 0x00 && 0x00 != 0x00)
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

// 0804835C: void main(Stack word32 dwArg08)
void main(word32 dwArg08)
{
	__align(fp - 0x6C);
	__xstat@@GLIBC_2.0();
	printf@@GLIBC_2.0();
	printf@@GLIBC_2.0();
	printf@@GLIBC_2.0();
	printf@@GLIBC_2.0();
	printf@@GLIBC_2.0();
	printf@@GLIBC_2.0();
	printf@@GLIBC_2.0();
	printf@@GLIBC_2.0();
	printf@@GLIBC_2.0();
	printf@@GLIBC_2.0();
	printf@@GLIBC_2.0();
	printf@@GLIBC_2.0();
	printf@@GLIBC_2.0();
	printf@@GLIBC_2.0();
	return;
}

// 08048454: void __libc_csu_init()
void __libc_csu_init()
{
	_init();
	if (true)
		return;
}

// 08048484: void __libc_csu_fini()
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
			((<anonymous> **) 0x08049580)();
		} while (ebx_36 != 0x00);
	}
	_fini();
	return;
}

// 080484B8: void __do_global_ctors_aux()
void __do_global_ctors_aux()
{
	<anonymous> * eax_13 = globals->ptr8049658;
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

// 080484DC: void _fini()
void _fini()
{
	__do_global_dtors_aux();
	return;
}

