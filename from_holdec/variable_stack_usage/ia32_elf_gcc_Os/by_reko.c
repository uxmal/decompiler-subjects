// subject_bss.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

byte g_b804A014 = 0x00;
word32 g_dw804A018 = 0x00;
// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 08048534: void _fini()
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

// 0804828C: void _init()
// Called from:
//      __libc_csu_init
void _init()
{
	if (g_dw804A004 != 0x00)
		fn080482D0();
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

// 080482C0: void __libc_start_main()
void __libc_start_main()
{
}

// subject_plt_got.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 080482D0: void fn080482D0()
// Called from:
//      _init
void fn080482D0()
{
	g_ptr8049FFC();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 080482E0: void main(Stack ui32 dwArg04)
void main(ui32 dwArg04)
{
	__align(fp);
	with_alloca(dwArg04);
	with_array(dwArg04);
}

// 0804830E: void _start(Register (ptr32 Eq_25) edx, Stack int32 dwArg00)
void _start(void (* edx)(), int32 dwArg00)
{
	__align((char *) fp + 4);
	__libc_start_main(&g_t80482E0, dwArg00, (char *) fp + 4, &g_t80484D0, &g_t8048530, edx, fp);
	__hlt();
}

// 08048330: void __x86.get_pc_thunk.bx()
void __x86.get_pc_thunk.bx()
{
}

// 08048340: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
}

// 08048370: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
}

// 080483B0: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b804A014 == 0x00)
	{
		deregister_tm_clones();
		g_b804A014 = 0x01;
	}
}

// 080483D0: void frame_dummy()
void frame_dummy()
{
	register_tm_clones();
}

// 080483FB: void use(Stack (ptr32 Eq_66) dwArg04)
// Called from:
//      with_array
//      with_alloca
void use(struct Eq_66 * dwArg04)
{
	g_dw804A018 += dwArg04->b0000;
}

// 0804840B: void fill(Stack (ptr32 Eq_66) dwArg04, Stack ui32 dwArg08)
// Called from:
//      with_array
//      with_alloca
void fill(struct Eq_66 * dwArg04, ui32 dwArg08)
{
	struct Eq_66 * edi_12 = dwArg04;
	ui32 ecx_13;
	for (ecx_13 = dwArg08 * 0x04; ecx_13 != 0x00; --ecx_13)
	{
		edi_12->b0000 = 0x78;
		++edi_12;
	}
}

// 08048423: void with_array(Stack ui32 dwArg04)
// Called from:
//      main
void with_array(ui32 dwArg04)
{
	ui32 eax_12 = dwArg04 * 0x04 + 0x12;
	struct Eq_66 * esp_14 = fp - 0x1C - (eax_12 & ~0x0F);
	esp_14->dwFFFFFFFC = eax_12 & ~0x0F;
	esp_14->dwFFFFFFF8 = eax_12 & ~0x0F;
	esp_14->dwFFFFFFF4 = dwArg04;
	esp_14->ptrFFFFFFF0 = esp_14;
	fill(esp_14->ptrFFFFFFF0, esp_14->dwFFFFFFF4);
	esp_14->ptrFFFFFFF0 = fp - 0x14;
	use(esp_14->ptrFFFFFFF0);
	esp_14->ptrFFFFFFF0 = esp_14;
	use(esp_14->ptrFFFFFFF0);
	esp_14->ptrFFFFFFF0 = fp - 0x10;
	use(esp_14->ptrFFFFFFF0);
}

// 08048474: void with_alloca(Stack ui32 dwArg04)
// Called from:
//      main
void with_alloca(ui32 dwArg04)
{
	ui32 eax_12 = dwArg04 * 0x04 + 0x1E;
	struct Eq_160 * esp_14 = fp - 0x1C - (eax_12 & ~0x0F);
	esp_14->dwFFFFFFFC = eax_12 & ~0x0F;
	esp_14->dwFFFFFFF8 = eax_12 & ~0x0F;
	esp_14->dwFFFFFFF4 = dwArg04;
	word32 edx_22 = esp_14 + 0x0F & ~0x0F;
	esp_14->ptrFFFFFFF0 = (struct Eq_66 ***********) edx_22;
	fill(esp_14->ptrFFFFFFF0, esp_14->dwFFFFFFF4);
	esp_14->ptrFFFFFFF0 = (struct Eq_66 ***********) (fp - 0x14);
	use(esp_14->ptrFFFFFFF0);
	esp_14->ptrFFFFFFF0 = (struct Eq_66 ***********) edx_22;
	use(esp_14->ptrFFFFFFF0);
	esp_14->ptrFFFFFFF0 = (struct Eq_66 ***********) (fp - 0x10);
	use(esp_14->ptrFFFFFFF0);
}

// 080484D0: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
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

// 08048530: void __libc_csu_fini()
void __libc_csu_fini()
{
}

