// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0804828C: void _init()
void _init()
{
	if (__x86.get_pc_thunk.bx(dwLoc10)->dw1D67 != 0x00)
		fn080482D0();
}

// 080482C0: void __libc_start_main()
void __libc_start_main()
{
}

// 080482D0: void fn080482D0()
void fn080482D0()
{
	word32 esp_3;
	globals->ptr8049FFC();
}

// 080482E0: void _start(Register (ptr32 Eq_18) edx, Stack int32 dwArg00)
void _start( * edx, int32 dwArg00)
{
	__align((char *) fp + 0x04);
	__libc_start_main(&globals->t80483F7, dwArg00, (char *) fp + 0x04, &globals->t8048410, &globals->t8048470, edx, fp);
	__hlt();
}

// 08048310: Register word32 __x86.get_pc_thunk.bx(Stack word32 dwArg00)
word32 __x86.get_pc_thunk.bx(word32 dwArg00)
{
	return dwArg00;
}

// 08048320: void deregister_tm_clones()
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

// 08048350: void register_tm_clones()
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

// 08048390: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (globals->b804A014 == 0x00)
	{
		deregister_tm_clones();
		globals->b804A014 = 0x01;
	}
}

// 080483B0: void frame_dummy()
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

// 080483DB: void sum5(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C, Stack word32 dwArg10, Stack word32 dwArg14)
void sum5(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14)
{
}

// 080483F7: void main()
void main()
{
	sum5(0x01, 0x02, 0x03, 0x04, 0x05);
}

// 08048410: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void __libc_csu_init(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	struct Eq_6 * ebx_15 = __x86.get_pc_thunk.bx(dwLoc14);
	_init();
	if ((char *) &ebx_15->ptr1AEF + 0x04 - &ebx_15->ptr1AEF >> 0x02 != 0x00)
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
			ebx_15->ptr1AEF();
		} while (esi_69 != edi_68 + 0x01);
	}
}

// 08048470: void __libc_csu_fini()
void __libc_csu_fini()
{
}

// 08048474: void _fini()
void _fini()
{
	__x86.get_pc_thunk.bx(dwLoc10);
}

