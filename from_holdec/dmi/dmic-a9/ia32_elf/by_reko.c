// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 080482A8: void _init()
void _init()
{
	if (__x86.get_pc_thunk.bx(dwLoc10)->dw1D4B != 0x00)
		fn08048300();
}

// 080482E0: void puts()
void puts()
{
}

// 080482F0: void __libc_start_main()
void __libc_start_main()
{
}

// 08048300: void fn08048300()
void fn08048300()
{
	word32 esp_3;
	globals->ptr8049FFC();
}

// 08048310: void main(Stack word32 dwArg00, Stack word32 dwArg04)
void main(word32 dwArg00, word32 dwArg04)
{
	__align(fp);
	if (dwArg04 == 0x03)
		puts("hello");
}

// 08048344: void _start(Register (ptr32 Eq_32) edx, Stack int32 dwArg00)
void _start( * edx, int32 dwArg00)
{
	__align((char *) fp + 0x04);
	__libc_start_main(&globals->t8048310, dwArg00, (char *) fp + 0x04, &globals->t8048440, &globals->t80484A0, edx, fp);
	__hlt();
}

// 08048370: Register word32 __x86.get_pc_thunk.bx(Stack word32 dwArg00)
word32 __x86.get_pc_thunk.bx(word32 dwArg00)
{
	return dwArg00;
}

// 08048380: void deregister_tm_clones()
void deregister_tm_clones()
{
	if (true && 0x00 != 0x00)
	{
		word32 esp_33;
		word32 eax_34;
		byte SCZO_35;
		byte CZ_36;
		byte SZO_37;
		bool C_38;
		bool Z_39;
		word32 ebp_40;
		fn00000000();
	}
}

// 080483B0: void register_tm_clones()
void register_tm_clones()
{
	if (0x00 != 0x00 && 0x00 != 0x00)
	{
		word32 esp_41;
		word32 eax_42;
		byte SCZO_43;
		word32 edx_44;
		bool Z_45;
		byte SZO_46;
		bool C_47;
		word32 ebp_48;
		fn00000000();
	}
}

// 080483F0: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (globals->b804A018 == 0x00)
	{
		deregister_tm_clones();
		globals->b804A018 = 0x01;
	}
}

// 08048410: void frame_dummy()
void frame_dummy()
{
	if (globals->dw8049F10 != 0x00 && 0x00 != 0x00)
	{
		word32 esp_37;
		word32 eax_38;
		word32 edx_39;
		byte SZO_40;
		bool C_41;
		bool Z_42;
		word32 ebp_43;
		byte SCZO_44;
		fn00000000();
		register_tm_clones();
	}
	else
		register_tm_clones();
}

// 08048440: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void __libc_csu_init(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	struct Eq_6 * ebx_15 = __x86.get_pc_thunk.bx(dwLoc14);
	_init();
	if ((char *) &ebx_15->ptr1ABF + 0x04 - &ebx_15->ptr1ABF >> 0x02 != 0x00)
	{
		do
		{
			word32 esp_66;
			word32 ebp_67;
			word32 edi_68;
			word32 esi_69;
			word32 ebx_70;
			byte SCZO_71;
			word32 eax_72;
			byte SZO_73;
			bool C_74;
			bool Z_75;
			ebx_15->ptr1ABF();
		} while (esi_69 != edi_68 + 0x01);
	}
}

// 080484A0: void __libc_csu_fini()
void __libc_csu_fini()
{
}

// 080484A4: void _fini()
void _fini()
{
	__x86.get_pc_thunk.bx(dwLoc10);
}

