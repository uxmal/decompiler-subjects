// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 0804859C: void _fini()
void _fini()
{
	__do_global_dtors_aux();
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 080482C8: void _init(Register word32 ecx)
// Called from:
//      __libc_csu_init
void _init(word32 ecx)
{
	word32 edx_12 = call_gmon_start(ecx);
	frame_dummy();
	__do_global_ctors_aux(edx_12);
}

// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_plt.h"

// 080482F0: void puts()
void puts()
{
}

// 08048300: void scanf()
void scanf()
{
}

// 08048310: void __libc_start_main()
void __libc_start_main()
{
}

// 08048320: void printf()
void printf()
{
}

// 08048330: void __gmon_start__()
void __gmon_start__()
{
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 08048340: void _start(Register (ptr32 Eq_15) edx, Stack int32 dwArg00)
void _start(void (* edx)(), int32 dwArg00)
{
	__align((char *) fp + 4);
	__libc_start_main(&g_t80483E4, dwArg00, (char *) fp + 4, &g_t804851C, &g_t804856C, edx, fp);
	__hlt();
}

// 08048364: Register word32 call_gmon_start(Register word32 ecx)
// Called from:
//      _init
word32 call_gmon_start(word32 ecx)
{
	word32 edx_16 = g_dw80496FC;
	if (edx_16 != 0x00)
		__gmon_start__();
	return edx_16;
}

// 08048388: void __do_global_dtors_aux()
// Called from:
//      _fini
void __do_global_dtors_aux()
{
	if (g_b8049724 == 0x00)
	{
		while (true)
		{
			<anonymous> ** eax_12 = g_ptr8049720;
			<anonymous> * edx_13 = *eax_12;
			if (edx_13 == null)
				break;
			g_ptr8049720 = (<anonymous> **) ((char *) eax_12 + 4);
			word32 edx_24;
			edx_13();
		}
		g_b8049724 = 0x01;
	}
}

// 080483BC: void frame_dummy()
// Called from:
//      _init
void frame_dummy()
{
	if (g_dw8049628 != 0x00 && 0x00 != 0x00)
		fn00000000();
}

// 080483E4: void main()
void main()
{
	__align(fp - 0x1C);
	scanf("%f", fp - 0x0C);
	printf("a is %f, b is %f\n", (real64) 5.0F, (real64) rLoc0C);
	if ((real64) 5.0F == (real64) rLoc0C)
		puts("Equal");
	0x0804847A = (ptr32) ((word16) cond((real64) 5.0F - (real64) rLoc0C) << 8);
	if ((real64) 5.0F > (real64) rLoc0C)
		puts("Greater");
	if ((real64) rLoc0C >= (real64) 5.0F)
		puts("Less or Equal");
	if ((real64) 5.0F >= (real64) rLoc0C)
		puts("Greater or Equal");
	if ((real64) rLoc0C > (real64) 5.0F)
		puts("Less");
}

// 0804851C: void __libc_csu_init(Register word32 ecx)
void __libc_csu_init(word32 ecx)
{
	_init(ecx);
	int32 eax_30 = 0x080497D8 - 0x080497D8;
	if (eax_30 >> 0x02 == 0x00)
		return;
	Eq_161 edi_35 = 0x00;
	<anonymous> ** esi_38 = (<anonymous> **) 0x080497D8;
	do
	{
		(*esi_38)();
		edi_35 = (word32) edi_35.u1 + 1;
		esi_38 = (<anonymous> **) ((char *) esi_38 + 4);
	} while (edi_35 < eax_30 >> 0x02);
}

// 0804856C: void __libc_csu_fini()
void __libc_csu_fini()
{
}

// 08048574: void __do_global_ctors_aux(Register word32 edx)
// Called from:
//      _init
void __do_global_ctors_aux(word32 edx)
{
	<anonymous> * eax_14 = g_ptr8049618;
	if (eax_14 != (<anonymous> *) ~0x00)
	{
		struct Eq_179 * ebx_17 = &g_ptr8049618;
		do
		{
			eax_14();
			eax_14 = ebx_17->dwFFFFFFFC;
			ebx_17 -= 0x04;
		} while (eax_14 != (<anonymous> *) ~0x00);
	}
}

