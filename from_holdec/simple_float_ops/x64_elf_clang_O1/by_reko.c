// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 00000000004008F4: void _fini()
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
	__libc_start_main(&g_t400830, qwArg00, (char *) fp + 8, &g_t400880, &g_t4008F0, rdx, fp);
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
	if (g_b601070 == 0x00)
	{
		deregister_tm_clones();
		g_b601070 = 0x01;
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

// 0000000000400500: void use(Register Eq_69 xmm0)
// Called from:
//      read_ints
//      read_floats
//      basic_operations
//      constants
void use(Eq_69 xmm0)
{
	printf("%f", xmm0);
}

// 0000000000400510: void use_int(Register word32 edi)
void use_int(word32 edi)
{
	printf("%d", (uint64) (word32) (uint64) edi);
}

// 0000000000400520: void read_ints(Register word128 xmm1)
void read_ints(word128 xmm1)
{
	real64 v6_8 = (real64) (int32) g_b601030;
	Eq_91 xmm0_10 = SEQ(SLICE(xmm0, word64, 64), v6_8);
	real64 v9_15 = (real64) (int32) g_w601032 + v6_8;
	Eq_101 xmm0_20 = __xorps(xmm0_10, xmm0_10);
	Eq_91 xmm1_17 = SEQ(SLICE(xmm1, word64, 64), v9_15);
	real64 v14_23 = (real64) g_dw601034 + v9_15;
	__xorps(xmm1_17, xmm1_17);
	Eq_91 xmm0_25 = SEQ(SLICE(xmm0_20, word64, 64), v14_23);
	use(SEQ(SLICE(__xorps(xmm0_25, xmm0_25), word64, 64), (real64) g_qw601040 + ((real64) g_qw601038 + v14_23)));
}

// 0000000000400580: void write_ints(Register word32 rax_32_32, Register word128 xmm0)
void write_ints(word32 rax_32_32, word128 xmm0)
{
	int32 eax_5 = (int32) xmm0;
	g_b601030 = (byte) eax_5;
	g_w601032 = (word16) eax_5;
	g_dw601034 = eax_5;
	word64 rax_13 = SEQ(rax_32_32, (int32) xmm0);
	g_qw601038 = rax_13;
	g_qw601040 = rax_13;
}

// 00000000004005B0: void read_floats(Register Eq_154 xmm1)
void read_floats(Eq_154 xmm1)
{
	use((uint128) (uint64) ((real64) g_r601060 + (((real64) __xorpd(xmm1, xmm1) + (real64) ((uint128) ((uint32) g_r601048))) + g_r601050)));
}

// 0000000000400600: void write_floats(Register word128 xmm0)
void write_floats(word128 xmm0)
{
	g_r601048 = (real32) xmm0;
	g_r601050 = (real64) xmm0;
	g_r601060 = (real80) (real64) xmm0;
}

// 0000000000400630: void converting_between_floats_f1()
void converting_between_floats_f1()
{
	g_r601048 = (real32) (uint128) (uint64) g_r601050;
}

// 0000000000400650: void converting_between_floats_f2()
void converting_between_floats_f2()
{
	g_r601048 = (real32) (real64) g_r601060;
}

// 0000000000400660: void converting_between_floats_d1()
void converting_between_floats_d1()
{
	g_r601050 = (real64) (uint128) (uint32) g_r601048;
}

// 0000000000400680: void converting_between_floats_d2()
void converting_between_floats_d2()
{
	g_r601050 = (real64) g_r601060;
}

// 0000000000400690: void converting_between_floats_l1()
void converting_between_floats_l1()
{
	g_r601060 = (real80) (real64) g_r601048;
}

// 00000000004006A0: void converting_between_floats_l2()
void converting_between_floats_l2()
{
	g_r601060 = (real80) g_r601050;
}

// 00000000004006B0: void basic_operations(Register Eq_154 xmm0, Register word128 xmm1)
void basic_operations(Eq_154 xmm0, word128 xmm1)
{
	use(SEQ(SLICE(xmm0, word64, 64), (real64) xmm0 + (real64) xmm1));
	real64 rLoc20_54 = (real64) xmm1;
	use(SEQ(SLICE(xmm0, word64, 64), (real64) xmm0 - rLoc20_54));
	real64 rLoc18_56 = (real64) xmm0;
	uint128 xmm0_21 = (uint128) (uint64) rLoc20_54;
	use(SEQ(SLICE(xmm0_21, word64, 64), (real64) xmm0_21 - rLoc18_56));
	use(SEQ(SLICE(xmm0, word64, 64), (real64) xmm0 * rLoc20_54));
	use(SEQ(SLICE(xmm0, word64, 64), (real64) xmm0 / rLoc20_54));
	uint128 xmm0_39 = (uint128) (uint64) rLoc20_54;
	use(SEQ(SLICE(xmm0_39, word64, 64), (real64) xmm0_39 / rLoc18_56));
	use(__xorpd(xmm0, g_t400910));
}

// 0000000000400740: void compare_floats()
void compare_floats()
{
}

// 00000000004007D0: void constants(Register word128 xmm0)
void constants(word128 xmm0)
{
	use(SEQ(SLICE(xmm0, word64, 64), (real64) xmm0 + (real64) xmm0));
	real64 qwLoc08_42 = (real64) xmm0;
	uint128 xmm0_14 = (uint128) (uint64) g_r400920;
	use(SEQ(SLICE(xmm0_14, word64, 64), (real64) xmm0_14 * qwLoc08_42));
	uint128 xmm0_20 = (uint128) (uint64) g_r400928;
	use(SEQ(SLICE(xmm0_20, word64, 64), (real64) xmm0_20 * qwLoc08_42));
	uint128 xmm0_26 = (uint128) (uint64) g_r400930;
	use(SEQ(SLICE(xmm0_26, word64, 64), (real64) xmm0_26 * qwLoc08_42));
	uint128 xmm0_32 = (uint128) (uint64) qwLoc08_42;
	use(SEQ(SLICE(xmm0_32, word64, 64), (real64) xmm0_32 * g_r400938));
}

// 0000000000400830: void main()
void main()
{
	printf("%zu %zu %zu %zu %zu\n", 0x01, 0x02, 0x04, 0x08, 0x08);
	printf("%zu %zu %zu\n", 0x04, 0x08, 0x10);
}

// 0000000000400880: void __libc_csu_init(Register word64 rdx, Register word64 rsi, Register word32 edi)
void __libc_csu_init(word64 rdx, word64 rsi, word32 edi)
{
	word32 edi = (word32) rdi;
	_init();
	word32 r15d_84 = (word32) (uint64) edi;
	int64 rbp_30 = 0x00600E10 - 0x00600E08;
	if (rbp_30 >> 0x03 != 0x00)
	{
		Eq_377 rbx_42 = 0x00;
		do
		{
			(*((char *) g_a600E08 + rbx_42 * 0x08))();
			rbx_42 = (word64) rbx_42.u1 + 1;
		} while (rbp_30 >> 0x03 != rbx_42);
	}
}

// 00000000004008F0: void __libc_csu_fini()
void __libc_csu_fini()
{
}

