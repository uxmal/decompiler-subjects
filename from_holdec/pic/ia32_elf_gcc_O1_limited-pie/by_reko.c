// subject_bss.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

byte g_b804C01C = 0x00;
// subject_data.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

word32 g_dw804C018 = 0x2A;
// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 08049258: void _fini()
void _fini()
{
}

// subject_got_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_ptr804C004 = null;
// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 08049000: void _init()
// Called from:
//      __libc_csu_init
void _init()
{
	<anonymous> * eax_10 = g_ptr804C004;
	if (eax_10 != null)
		eax_10();
}

// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 08049040: void printf()
void printf()
{
}

// 08049050: void __libc_start_main()
void __libc_start_main()
{
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 08049060: void _start(Register (ptr32 Eq_7) edx, Stack int32 dwArg00)
void _start(void (* edx)(), int32 dwArg00)
{
	__align((char *) fp + 4);
	__libc_start_main(&g_t804919C, dwArg00, (char *) fp + 4, &g_t80491F0, &g_t8049250, edx, fp);
	__hlt();
}

// 080490A0: void _dl_relocate_static_pie()
void _dl_relocate_static_pie()
{
}

// 080490B0: void __x86.get_pc_thunk.bx()
void __x86.get_pc_thunk.bx()
{
}

// 080490C0: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
}

// 08049100: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
}

// 08049140: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b804C01C != 0x00)
		return;
	deregister_tm_clones();
	g_b804C01C = 0x01;
}

// 08049170: void frame_dummy()
void frame_dummy()
{
	register_tm_clones();
}

// 08049176: void a_func()
// Called from:
//      main
void a_func()
{
	printf("in func: %d\n", 0x00);
}

// 0804919C: void main()
void main()
{
	__align(fp);
	printf("in main: %d\n", 0x00);
	++g_dw804C018;
	a_func();
}

// 080491F0: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void __libc_csu_init(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	_init();
	int32 esi_28 = 0x0804C0F0 - 0x0804C0F4;
	if (esi_28 >> 0x02 != 0x00)
	{
		int32 edi_32 = 0x00;
		do
		{
			((<anonymous> *[]) 0x0804C0F4)[edi_32]();
			++edi_32;
		} while (esi_28 >> 0x02 != edi_32);
	}
}

// 08049250: void __libc_csu_fini()
void __libc_csu_fini()
{
}

