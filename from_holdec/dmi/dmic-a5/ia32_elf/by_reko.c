// subject_bss.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

byte g_b804A018 = 0x00;
// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 080484B4: void _fini()
void _fini()
{
}

// subject_got.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_ptr8049FFC = null;
// subject_got_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

word32 g_dw804A004 = 0x00;
// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 080482A8: void _init()
// Called from:
//      __libc_csu_init
void _init()
{
	if (g_dw804A004 != 0x00)
		fn08048300();
}

// subject_jcr.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

word32 g_dw8049F10 = 0x00;
// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 080482E0: void puts()
void puts()
{
}

// 080482F0: void __libc_start_main()
void __libc_start_main()
{
}

// subject_plt_got.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

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

#include "subject.h"

// 08048310: void main(Stack int32 dwArg04, Stack (arr (ptr32 char)) dwArg08)
void main(int32 dwArg04, char * dwArg08[])
{
	__align(fp);
	if (dwArg04 > 0x00)
	{
		int32 ebx_29 = 0x00;
		do
		{
			puts(dwArg08[ebx_29]);
			++ebx_29;
		} while (dwArg04 != ebx_29);
	}
}

// 08048353: void _start(Register (ptr32 Eq_32) edx, Stack int32 dwArg00)
void _start(void (* edx)(), int32 dwArg00)
{
	__align((char *) fp + 4);
	__libc_start_main(&g_t8048310, dwArg00, (char *) fp + 4, &g_t8048450, &g_t80484B0, edx, fp);
	__hlt();
}

// 08048380: void __x86.get_pc_thunk.bx()
void __x86.get_pc_thunk.bx()
{
}

// 08048390: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
}

// 080483C0: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
}

// 08048400: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b804A018 == 0x00)
	{
		deregister_tm_clones();
		g_b804A018 = 0x01;
	}
}

// 08048420: void frame_dummy()
void frame_dummy()
{
	register_tm_clones();
}

// 08048450: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void __libc_csu_init(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	_init();
	int32 esi_28 = 0x0804A0F4 - 0x0804A0F8;
	if (esi_28 >> 0x02 != 0x00)
	{
		int32 edi_33 = 0x00;
		do
		{
			((<anonymous> *[]) 0x0804A0F8)[edi_33]();
			++edi_33;
		} while (esi_28 >> 0x02 != edi_33);
	}
}

// 080484B0: void __libc_csu_fini()
void __libc_csu_fini()
{
}

