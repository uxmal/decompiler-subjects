// subject_bss.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

byte g_b404028 = 0x00;
// subject_data.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

word32 g_dw404024 = 0x2A;
// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 00000000004011E8: void _fini()
void _fini()
{
}

// subject_init_array.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_a403E10[] = 
	{
	};
// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000401000: void _init()
// Called from:
//      __libc_csu_init
void _init()
{
	if (__gmon_start__ != 0x00)
		__gmon_start__();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000401040: void main()
void main()
{
	printf("in main: %d\n", 0x00);
	++g_dw404024;
	a_func();
}

// 0000000000401070: void _start(Register (ptr64 Eq_22) rdx, Stack Eq_23 qwArg00)
void _start(void (* rdx)(), Eq_23 qwArg00)
{
	__align((char *) fp + 8);
	__libc_start_main(&g_t401040, qwArg00, (char *) fp + 8, &g_t401170, &g_t4011E0, rdx, fp);
	__hlt();
}

// 00000000004010A0: void _dl_relocate_static_pie()
void _dl_relocate_static_pie()
{
}

// 00000000004010B0: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
}

// 00000000004010E0: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
}

// 0000000000401120: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b404028 != 0x00)
		return;
	deregister_tm_clones();
	g_b404028 = 0x01;
}

// 0000000000401150: void frame_dummy()
void frame_dummy()
{
	register_tm_clones();
}

// 0000000000401156: void a_func()
// Called from:
//      main
void a_func()
{
	printf("in func: %d\n", 0x00);
}

// 0000000000401170: void __libc_csu_init(Register word64 rdx, Register word64 rsi, Register word32 edi)
void __libc_csu_init(word64 rdx, word64 rsi, word32 edi)
{
	word32 edi = (word32) rdi;
	_init();
	word32 r13d_86 = (word32) (uint64) edi;
	int64 rbp_31 = 4210200 - 0x00403E10;
	if (rbp_31 >> 0x03 != 0x00)
	{
		Eq_84 rbx_43 = 0x00;
		do
		{
			(*((char *) g_a403E10 + rbx_43 * 0x08))();
			rbx_43 = (word64) rbx_43.u1 + 1;
		} while (rbp_31 >> 0x03 != rbx_43);
	}
}

// 00000000004011E0: void __libc_csu_fini()
void __libc_csu_fini()
{
}

