// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 080484E4: void _fini()
void _fini()
{
	__do_global_dtors_aux();
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 080482A4: void _init(Register word32 ecx)
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

// 080482CC: void scanf()
void scanf()
{
}

// 080482DC: void __libc_start_main()
void __libc_start_main()
{
}

// 080482EC: void printf()
void printf()
{
}

// 080482FC: void __gmon_start__()
void __gmon_start__()
{
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 0804830C: void _start(Register (ptr32 Eq_15) edx, Stack int32 dwArg00)
void _start(void (* edx)(), int32 dwArg00)
{
	__align((char *) fp + 4);
	__libc_start_main(&g_t80483F6, dwArg00, (char *) fp + 4, &g_t8048464, &g_t80484B4, edx, fp);
	__hlt();
}

// 08048330: Register word32 call_gmon_start(Register word32 ecx)
// Called from:
//      _init
word32 call_gmon_start(word32 ecx)
{
	word32 edx_16 = g_dw8049618;
	if (edx_16 != 0x00)
		__gmon_start__();
	return edx_16;
}

// 08048354: void __do_global_dtors_aux()
// Called from:
//      _fini
void __do_global_dtors_aux()
{
	if (g_b804963C == 0x00)
	{
		while (true)
		{
			<anonymous> ** eax_12 = g_ptr8049638;
			<anonymous> * edx_13 = *eax_12;
			if (edx_13 == null)
				break;
			g_ptr8049638 = (<anonymous> **) ((char *) eax_12 + 4);
			word32 edx_24;
			edx_13();
		}
		g_b804963C = 0x01;
	}
}

// 08048388: void frame_dummy()
// Called from:
//      _init
void frame_dummy()
{
	if (g_dw8049544 != 0x00 && 0x00 != 0x00)
		fn00000000();
}

// 080483B0: Register int32 fib(Stack int32 dwArg04)
// Called from:
//      fib
//      main
int32 fib(int32 dwArg04)
{
	int32 dwLoc0C_60;
	if (dwArg04 > 0x01)
		dwLoc0C_60 = fib(dwArg04 - 0x01) + fib(dwArg04 - 0x02);
	else
		dwLoc0C_60 = dwArg04;
	return dwLoc0C_60;
}

// 080483F6: void main()
void main()
{
	__align(fp - 0x1C);
	printf("Input number: ");
	scanf("%d", fp - 0x0C);
	printf("fibonacci(%d) = %d\n", dwLoc0C, fib(dwLoc0C));
}

// 08048464: void __libc_csu_init(Register word32 ecx)
void __libc_csu_init(word32 ecx)
{
	_init(ecx);
	int32 eax_30 = 134518516 - 134518516;
	if (eax_30 >> 0x02 == 0x00)
		return;
	Eq_133 edi_35 = 0x00;
	<anonymous> ** esi_38 = (<anonymous> **) 134518516;
	do
	{
		(*esi_38)();
		edi_35 = (word32) edi_35.u1 + 1;
		esi_38 = (<anonymous> **) ((char *) esi_38 + 4);
	} while (edi_35 < eax_30 >> 0x02);
}

// 080484B4: void __libc_csu_fini()
void __libc_csu_fini()
{
}

// 080484BC: void __do_global_ctors_aux(Register word32 edx)
// Called from:
//      _init
void __do_global_ctors_aux(word32 edx)
{
	<anonymous> * eax_14 = g_ptr8049534;
	if (eax_14 != (<anonymous> *) ~0x00)
	{
		struct Eq_151 * ebx_17 = &g_ptr8049534;
		do
		{
			eax_14();
			eax_14 = ebx_17->dwFFFFFFFC;
			ebx_17 -= 0x04;
		} while (eax_14 != (<anonymous> *) ~0x00);
	}
}

