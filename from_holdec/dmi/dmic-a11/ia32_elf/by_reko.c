// subject_bss.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

byte g_b60101C = 0x00;
// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000400544: void _fini()
void _fini()
{
}

// subject_init_array.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_a600E48[] = 
	{
	};
// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000400390: void _init()
// Called from:
//      __libc_csu_init
void _init()
{
	if (__gmon_start__ != 0x00)
		__gmon_start__();
}

// subject_jcr.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

word64 g_qw600E58 = 0x00;
// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 00000000004003B0: void main(Register int32 edi)
void main(int32 edi)
{
}

// 00000000004003D0: void _start(Register (ptr64 Eq_10) rdx, Stack Eq_11 qwArg00)
void _start(void (* rdx)(), Eq_11 qwArg00)
{
	__align((char *) fp + 8);
	__libc_start_main(&g_t4003B0, qwArg00, (char *) fp + 8, &g_t4004D0, &g_t400540, rdx, fp);
	__hlt();
}

// 0000000000400400: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
}

// 0000000000400440: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
}

// 0000000000400480: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b60101C == 0x00)
	{
		deregister_tm_clones();
		g_b60101C = 0x01;
	}
}

// 00000000004004A0: void frame_dummy()
void frame_dummy()
{
	register_tm_clones();
}

// 00000000004004D0: void __libc_csu_init(Register word64 rdx, Register word64 rsi, Register word32 edi)
void __libc_csu_init(word64 rdx, word64 rsi, word32 edi)
{
	word32 edi = (word32) rdi;
	_init();
	word32 r15d_87 = (word32) (uint64) edi;
	int64 rbp_31 = 0x00600E50 - 0x00600E48;
	if (rbp_31 >> 0x03 != 0x00)
	{
		Eq_72 rbx_44 = 0x00;
		do
		{
			(*((char *) g_a600E48 + rbx_44 * 0x08))();
			rbx_44 = (word64) rbx_44.u1 + 1;
		} while (rbp_31 >> 0x03 != rbx_44);
	}
}

// 0000000000400540: void __libc_csu_fini()
void __libc_csu_fini()
{
}

