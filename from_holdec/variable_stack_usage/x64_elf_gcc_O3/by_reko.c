// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 0000000000400664: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 00000000004003C8: void _init()
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

#include "subject_text.h"

// 0000000000400400: void main(Register word32 edi)
void main(word32 edi)
{
	with_alloca(edi);
	with_array((word32) (uint64) (word32) (uint64) edi);
}

// 0000000000400420: void _start(Register (ptr64 Eq_20) rdx, Stack Eq_21 qwArg00)
void _start(void (* rdx)(), Eq_21 qwArg00)
{
	__align((char *) fp + 8);
	__libc_start_main(&g_t400400, qwArg00, (char *) fp + 8, &g_t4005F0, &g_t400660, rdx, fp);
	__hlt();
}

// 0000000000400450: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (false || 0x00 == 0x00)
		return;
	null();
}

// 0000000000400490: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	if (0 == 0x00 || 0x00 == 0x00)
		return;
	null();
}

// 00000000004004D0: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b601024 == 0x00)
	{
		deregister_tm_clones();
		g_b601024 = 0x01;
	}
}

// 00000000004004F0: void frame_dummy()
void frame_dummy()
{
	if (g_qw600E18 != 0x00 && 0x00 != 0x00)
	{
		fn0000000000000000();
		register_tm_clones();
	}
	else
		register_tm_clones();
}

// 0000000000400520: void use(Register (ptr64 word32) rdi)
void use(word32 * rdi)
{
	g_dw601028 += (word32) (uint64) *rdi;
}

// 0000000000400530: void fill(Register word32 esi, Register (ptr64 void) rdi)
void fill(word32 esi, void * rdi)
{
	memset(rdi, 0x78, (int64) esi << 0x02);
}

// 0000000000400550: void with_array(Register word32 edi)
// Called from:
//      main
void with_array(word32 edi)
{
	int64 rdx_8 = (int64) edi;
	uint64 rbx_20 = (word64) (fp - 0x18 - ((rdx_8 << 0x02) + 0x12 & ~0x0F)) + 3 >> 0x02;
	memset(rbx_20 * 0x04, 0x78, rdx_8 << 0x02);
	g_dw601028 = (word32) ((uint64) g_dw601028 + 0x0F + (uint64) null[rbx_20]);
}

// 00000000004005B0: void with_alloca(Register word32 edi)
// Called from:
//      main
void with_alloca(word32 edi)
{
	int64 rdx_5 = (int64) edi;
	g_dw601028 = (word32) ((uint64) g_dw601028 + 0x0F + (uint64) (*memset((word64) ((fp - 8) - ((rdx_5 << 0x02) + 0x1E & ~0x0F)) + 0x0F & ~0x0F, 0x78, rdx_5 << 0x02)));
}

// 00000000004005F0: void __libc_csu_init(Register word64 rdx, Register word64 rsi, Register word32 edi)
void __libc_csu_init(word64 rdx, word64 rsi, word32 edi)
{
	word32 edi = (word32) rdi;
	_init();
	word32 r15d_84 = (word32) (uint64) edi;
	int64 rbp_30 = 0x00600E10 - 0x00600E08;
	if (rbp_30 >> 0x03 != 0x00)
	{
		Eq_194 rbx_42 = 0x00;
		do
		{
			(*((char *) g_a600E08 + rbx_42 * 0x08))();
			rbx_42 = (word64) rbx_42.u1 + 1;
		} while (rbp_30 >> 0x03 != rbx_42);
	}
}

// 0000000000400660: void __libc_csu_fini()
void __libc_csu_fini()
{
}

