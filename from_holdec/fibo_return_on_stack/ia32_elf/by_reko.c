// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 080485BC: void _fini()
void _fini()
{
	__do_global_dtors_aux();
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 080482D8: void _init()
// Called from:
//      __libc_csu_init
void _init()
{
	if (g_dw8049794 != 0x00)
		__gmon_start__();
	frame_dummy();
	__do_global_ctors_aux();
}

// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_plt.h"

// 08048318: void __gmon_start__()
void __gmon_start__()
{
}

// 08048328: void __libc_start_main()
void __libc_start_main()
{
}

// 08048338: void printf()
void printf()
{
}

// 08048348: void __isoc99_scanf()
void __isoc99_scanf()
{
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 08048360: void _start(Register (ptr32 Eq_14) edx, Stack int32 dwArg00)
void _start(void (* edx)(), int32 dwArg00)
{
	__align((char *) fp + 4);
	__libc_start_main(&g_t804849E, dwArg00, (char *) fp + 4, &g_t8048530, &g_t8048520, edx, fp);
	__hlt();
}

// 08048390: void __do_global_dtors_aux()
// Called from:
//      _fini
void __do_global_dtors_aux()
{
	if (g_b80497B0 == 0x00)
	{
		uint32 eax_14 = g_dw80497B4;
		while (eax_14 < 0x00)
		{
			uint32 eax_24 = eax_14 + 0x01;
			g_dw80497B4 = eax_24;
			(*((char *) g_a80496B8 + eax_24 * 0x04))();
			eax_14 = g_dw80497B4;
		}
		g_b80497B0 = 0x01;
	}
}

// 080483F0: void frame_dummy()
// Called from:
//      _init
void frame_dummy()
{
	if (g_dw80496C0 != 0x00 && 0x00 != 0x00)
		fn00000000();
}

// 08048414: Register int32 fibo_normal(Stack int32 dwArg04)
// Called from:
//      fibo_normal
//      main
int32 fibo_normal(int32 dwArg04)
{
	int32 eax_10;
	if (dwArg04 > 0x01)
		eax_10 = fibo_normal(dwArg04 - 0x01) + fibo_normal(dwArg04 - 0x02);
	else
		eax_10 = dwArg04;
	return eax_10;
}

// 0804844D: Register int32 fibo_return_on_stack(Stack int32 dwArg04)
// Called from:
//      fibo_return_on_stack
//      fibo_wrapper_return_on_stack
//      main
int32 fibo_return_on_stack(int32 dwArg04)
{
	if (dwArg04 > 0x01)
	{
		fibo_return_on_stack(dwArg04 - 0x01);
		fibo_return_on_stack(dwArg04 - 0x02);
		eax = dwArg04 - 0x01 + (dwArg04 - 0x02);
	}
	return eax;
}

// 08048488: void fibo_wrapper_return_on_stack(Stack int32 dwArg04)
void fibo_wrapper_return_on_stack(int32 dwArg04)
{
	fibo_return_on_stack(dwArg04);
}

// 0804849E: void main()
void main()
{
	__align(fp - 4);
	printf("Input number: ");
	__isoc99_scanf("%d", fp - 0x10);
	printf("fibonacci(%d) = %d %d\n", dwLoc10, fibo_normal(dwLoc10), fibo_return_on_stack(dwLoc10));
}

// 08048520: void __libc_csu_fini()
void __libc_csu_fini()
{
}

// 08048530: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void __libc_csu_init(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	_init();
	int32 edi_29 = 0x08049870 - 0x08049870;
	if (edi_29 >> 0x02 != 0x00)
	{
		Eq_152 esi_34 = 0x00;
		do
		{
			((<anonymous> *[]) 0x08049870)[esi_34]();
			esi_34 = (word32) esi_34.u1 + 1;
		} while (esi_34 < edi_29 >> 0x02);
	}
}

// 0804858A: void __i686.get_pc_thunk.bx()
void __i686.get_pc_thunk.bx()
{
}

// 08048590: void __do_global_ctors_aux()
// Called from:
//      _init
void __do_global_ctors_aux()
{
	<anonymous> * eax_12 = g_ptr80496B0;
	if (eax_12 != (<anonymous> *) ~0x00)
	{
		word32 * ebx_15 = &g_ptr80496B0;
		do
		{
			eax_12();
			ebx_15 -= 0x04;
			eax_12 = *ebx_15;
		} while (eax_12 != (<anonymous> *) ~0x00);
	}
}

