// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 0000000000400674: void _fini()
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

// 0000000000400400: void _start(Register (ptr64 Eq_7) rdx, Stack Eq_8 qwArg00)
void _start(void (* rdx)(), Eq_8 qwArg00)
{
	__align((char *) fp + 8);
	__libc_start_main(&g_t4005E0, qwArg00, (char *) fp + 8, &g_t400600, &g_t400670, rdx, fp);
	__hlt();
}

// 0000000000400430: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (false || 0x00 == 0x00)
		return;
	null();
}

// 0000000000400470: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	if (0 == 0x00 || 0x00 == 0x00)
		return;
	null();
}

// 00000000004004B0: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b601024 == 0x00)
	{
		deregister_tm_clones();
		g_b601024 = 0x01;
	}
}

// 00000000004004D0: void frame_dummy()
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

// 0000000000400500: void use(Register (ptr64 word32) rdi)
void use(word32 * rdi)
{
	g_t601028 = (word64) g_t601028 + (word32) ((uint64) (*rdi));
}

// 0000000000400510: void fill(Register word32 esi, Register (ptr64 void) rdi)
void fill(word32 esi, void * rdi)
{
	memset(rdi, 0x78, (int64) esi << 0x02);
}

// 0000000000400530: void with_array(Register word32 edi)
// Called from:
//      main
void with_array(word32 edi)
{
	ui64 rax_16 = (uint64) edi * 0x04 + 0x0F;
	memset(fp - 24 - (rax_16 & 0xFFFFFFF0), 0x78, (int64) edi << 0x02);
	g_t601028 = (uint64) g_t601028 + 0x0F + (uint64) (&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((fp - 24))[-(rax_16 & 0xFFFFFFF0) / 4].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000)[0];
}

// 0000000000400590: void with_alloca(Register word32 edi)
// Called from:
//      main
void with_alloca(word32 edi)
{
	int64 rdx_15 = (int64) edi;
	ui64 rbx_17 = rdx_15 * 0x04 + 0x0F;
	memset(fp - 24 - (rbx_17 & ~0x0F), 0x78, rdx_15 << 0x02);
	g_t601028 = (uint64) g_t601028 + 0x0F + (uint64) (&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((fp - 24))[-(rbx_17 & ~0x0F) / 4].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000))[0].a0000)[0];
}

// 00000000004005E0: void main(Register word32 edi)
void main(word32 edi)
{
	with_alloca(edi);
	with_array((word32) (uint64) (word32) (uint64) edi);
}

// 0000000000400600: void __libc_csu_init(Register word64 rdx, Register word64 rsi, Register word32 edi)
void __libc_csu_init(word64 rdx, word64 rsi, word32 edi)
{
	word32 edi = (word32) rdi;
	_init();
	word32 r15d_84 = (word32) (uint64) edi;
	int64 rbp_30 = 0x00600E10 - 0x00600E08;
	if (rbp_30 >> 0x03 != 0x00)
	{
		Eq_188 rbx_42 = 0x00;
		do
		{
			(*((char *) g_a600E08 + rbx_42 * 0x08))();
			rbx_42 = (word64) rbx_42.u1 + 1;
		} while (rbp_30 >> 0x03 != rbx_42);
	}
}

// 0000000000400670: void __libc_csu_fini()
void __libc_csu_fini()
{
}

