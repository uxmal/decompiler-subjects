// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 08048544: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 080482AC: void _init()
// Called from:
//      __libc_csu_init
void _init()
{
	if (g_dw804A004 != 0x00)
		fn08048300();
}

// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_plt.h"

// 080482E0: void printf()
void printf()
{
}

// 080482F0: void __libc_start_main()
void __libc_start_main()
{
}

// subject_plt_got.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_plt_got.h"

// 08048300: void fn08048300()
// Called from:
//      _init
void fn08048300()
{
	g_ptr8049FFC();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 08048310: void main()
void main()
{
	__align(fp);
	Eq_16 ebx_123 = 0x00;
	Eq_16 edi_122 = 0x00;
	while (true)
	{
		uint32 eax_32 = test_1(ebx_123);
		uint32 eax_42 = test_2(ebx_123);
		uint32 eax_52 = test_3(ebx_123);
		if (eax_32 != eax_42 || eax_32 != eax_52)
			printf("%u %u %u (diff=%d) %u (diff=%d)\n", ebx_123, eax_32, eax_42, eax_42 - eax_32, eax_52, eax_52 - eax_32);
		if (edi_122 != 0x00 && edi_122 > ebx_123)
			break;
		edi_122 = ebx_123;
		ebx_123 = (word64) ebx_123 + 1000000;
	}
}

// 0804839E: void _start(Register (ptr32 Eq_55) edx, Stack int32 dwArg00)
void _start(void (* edx)(), int32 dwArg00)
{
	__align((char *) fp + 4);
	__libc_start_main(&g_t8048310, dwArg00, (char *) fp + 4, &g_t80484E0, &g_t8048540, edx, fp);
	__hlt();
}

// 080483C0: void __x86.get_pc_thunk.bx()
void __x86.get_pc_thunk.bx()
{
}

// 080483D0: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (true && 0x00 != 0x00)
		fn00000000();
}

// 08048400: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	if (0 != 0x00 && 0x00 != 0x00)
		fn00000000();
}

// 08048440: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b804A018 == 0x00)
	{
		deregister_tm_clones();
		g_b804A018 = 0x01;
	}
}

// 08048460: void frame_dummy()
void frame_dummy()
{
	if (g_dw8049F10 != 0x00 && 0x00 != 0x00)
	{
		fn00000000();
		register_tm_clones();
	}
	else
		register_tm_clones();
}

// 08048490: Register uint32 test_1(Stack Eq_16 qwArg04)
// Called from:
//      main
uint32 test_1(Eq_16 qwArg04)
{
	uint32 edx_10 = SLICE(dwArg04 * 0x24924925, word32, 32);
	return (dwArg04 - edx_10 >> 0x01) + edx_10 >> 0x02;
}

// 080484B0: Register uint32 test_2(Stack Eq_16 qwArg04)
// Called from:
//      main
uint32 test_2(Eq_16 qwArg04)
{
	uint32 edx_18 = SLICE(dwArg04 * 0x24924925, word32, 32);
	return edx_18 + (dwArg04 - edx_18 >> 0x01) >> 0x02;
}

// 080484D0: Register word32 test_3(Stack Eq_16 dwArg04)
// Called from:
//      main
word32 test_3(Eq_16 dwArg04)
{
	return SLICE(dwArg04 * 0x24924925, word32, 32);
}

// 080484E0: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void __libc_csu_init(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	_init();
	int32 esi_28 = 0x0804A0F4 - 0x0804A0F8;
	if (esi_28 >> 0x02 != 0x00)
	{
		int32 edi_33;
		do
		{
			((<anonymous> *[]) 0x0804A0F8)[edi_33]();
			++edi_33;
		} while (esi_28 >> 0x02 != edi_33);
	}
}

// 08048540: void __libc_csu_fini()
void __libc_csu_fini()
{
}

