// subject_bss.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

byte g_b804A018 = 0x00;
word32 g_dw804A01C = 0x00;
// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 08048584: void _fini()
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

// 080482AC: void _init()
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

// 080482E0: void __libc_start_main()
void __libc_start_main()
{
}

// 080482F0: void memset()
void memset()
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

// 08048310: void _start(Register (ptr32 Eq_11) edx, Stack int32 dwArg00)
void _start(void (* edx)(), int32 dwArg00)
{
	__align((char *) fp + 4);
	__libc_start_main(&g_t80484F6, dwArg00, (char *) fp + 4, &g_t8048520, &g_t8048580, edx, fp);
	__hlt();
}

// 08048340: void __x86.get_pc_thunk.bx()
void __x86.get_pc_thunk.bx()
{
}

// 08048350: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
}

// 08048380: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
}

// 080483C0: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b804A018 == 0x00)
	{
		deregister_tm_clones();
		g_b804A018 = 0x01;
	}
}

// 080483E0: void frame_dummy()
void frame_dummy()
{
	register_tm_clones();
}

// 0804840C: void use(Stack (ptr32 Eq_54) dwArg04)
// Called from:
//      with_array
//      with_alloca
void use(struct Eq_54 * dwArg04)
{
	g_dw804A01C += dwArg04->dw0000;
}

// 08048419: void fill(Stack (ptr32 Eq_54) dwArg04, Stack ui32 dwArg08)
// Called from:
//      with_array
//      with_alloca
void fill(struct Eq_54 * dwArg04, ui32 dwArg08)
{
	memset(dwArg04, 0x78, dwArg08 << 0x02);
}

// 08048436: void with_array(Stack ui32 dwArg04)
// Called from:
//      main
void with_array(ui32 dwArg04)
{
	struct Eq_54 * ebx_25 = fp - 0x1C - (dwArg04 * 0x04 + 0x0F & ~0x0F);
	ebx_25->dwFFFFFFF4 = dwArg04;
	ebx_25->ptrFFFFFFF0 = ebx_25;
	fill(ebx_25->ptrFFFFFFF0, ebx_25->dwFFFFFFF4);
	ebx_25->ptrFFFFFFF0 = fp - 0x14;
	use(ebx_25->ptrFFFFFFF0);
	ebx_25->ptrFFFFFFF0 = ebx_25;
	use(ebx_25->ptrFFFFFFF0);
	ebx_25->ptrFFFFFFF0 = fp - 0x18;
	use(ebx_25->ptrFFFFFFF0);
}

// 0804849B: void with_alloca(Stack ui32 dwArg04)
// Called from:
//      main
void with_alloca(ui32 dwArg04)
{
	struct Eq_54 * edi_24 = fp - 0x1C - (dwArg04 * 0x04 + 0x0F & ~0x0F);
	edi_24->dwFFFFFFF4 = dwArg04;
	edi_24->ptrFFFFFFF0 = edi_24;
	fill(edi_24->ptrFFFFFFF0, edi_24->dwFFFFFFF4);
	edi_24->ptrFFFFFFF0 = fp - 0x18;
	use(edi_24->ptrFFFFFFF0);
	edi_24->ptrFFFFFFF0 = edi_24;
	use(edi_24->ptrFFFFFFF0);
	edi_24->ptrFFFFFFF0 = fp - 0x14;
	use(edi_24->ptrFFFFFFF0);
}

// 080484F6: void main(Stack ui32 dwArg04)
void main(ui32 dwArg04)
{
	with_alloca(dwArg04);
	with_array(dwArg04);
}

// 08048520: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
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

// 08048580: void __libc_csu_fini()
void __libc_csu_fini()
{
}

