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

// 0000000000401228: void _fini()
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

// subject_rodata.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

char g_str402010[] = "in func: %d\n";
char g_str40201D[] = "in main: %d\n";
// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000401040: void _start(Register (ptr64 Eq_7) rdx, Stack Eq_8 qwArg00)
void _start(void (* rdx)(), Eq_8 qwArg00)
{
	__align((char *) fp + 8);
	__libc_start_main(&g_t401160, qwArg00, (char *) fp + 8, &g_t4011B0, &g_t401220, rdx, fp);
	__hlt();
}

// 0000000000401070: void _dl_relocate_static_pie()
void _dl_relocate_static_pie()
{
}

// 0000000000401080: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
}

// 00000000004010B0: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
}

// 00000000004010F0: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b404028 != 0x00)
		return;
	deregister_tm_clones();
	g_b404028 = 0x01;
}

// 0000000000401120: void frame_dummy()
void frame_dummy()
{
	register_tm_clones();
}

// 0000000000401130: void a_func()
// Called from:
//      main
void a_func()
{
	printf("in func: %d\n", (uint64) g_dw404024);
}

// 0000000000401160: void main()
void main()
{
	printf("in main: %d\n", (uint64) g_dw404024);
	g_dw404024 = (word32) (uint64) ((word32) (uint64) g_dw404024 + 0x01);
	a_func();
}

// 00000000004011B0: void __libc_csu_init(Register word64 rdx, Register word64 rsi, Register word32 edi)
void __libc_csu_init(word64 rdx, word64 rsi, word32 edi)
{
	word32 edi = (word32) rdi;
	_init();
	word32 r13d_86 = (word32) (uint64) edi;
	int64 rbp_31 = 4210200 - 0x00403E10;
	if (rbp_31 >> 0x03 != 0x00)
	{
		Eq_95 rbx_43 = 0x00;
		do
		{
			(*((char *) g_a403E10 + rbx_43 * 0x08))();
			rbx_43 = (word64) rbx_43.u1 + 1;
		} while (rbp_31 >> 0x03 != rbx_43);
	}
}

// 0000000000401220: void __libc_csu_fini()
void __libc_csu_fini()
{
}

