// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 0000000000406A18: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

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

#include "subject_text.h"

// 0000000000401040: void main()
void main()
{
	inst_0_values_var_0();
	inst_0_flags_var_0();
	inst_1_values_var_0();
	inst_1_flags_var_0();
	inst_2_values_var_0();
	inst_2_flags_var_0();
	inst_3_values_var_0();
}

// 0000000000401300: void _start(Register (ptr64 Eq_28) rdx, Stack Eq_29 qwArg00)
void _start(void (* rdx)(), Eq_29 qwArg00)
{
	__align((char *) fp + 8);
	__libc_start_main(&g_t401040, qwArg00, (char *) fp + 8, &g_t4069A0, &g_t406A10, rdx, fp);
	__hlt();
}

// 0000000000401330: void _dl_relocate_static_pie()
void _dl_relocate_static_pie()
{
}

// 0000000000401340: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (0x00 == 0x00 || 0x00 == 0x00)
		return;
	null();
}

// 0000000000401370: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	if (0 == 0x00 || 0x00 == 0x00)
		return;
	null();
}

// 00000000004013B0: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b409024 != 0x00)
		return;
	deregister_tm_clones();
	g_b409024 = 0x01;
}

// 00000000004013E0: void frame_dummy()
void frame_dummy()
{
	register_tm_clones();
}

// 00000000004013E6: void inst_0_values_var_0()
// Called from:
//      main
void inst_0_values_var_0()
{
	__tzcnt(0x7677);
}

// 00000000004014E8: void inst_0_flags_var_0()
// Called from:
//      main
void inst_0_flags_var_0()
{
	__tzcnt(1991);
}

// 00000000004015F1: void inst_1_values_var_0()
// Called from:
//      main
void inst_1_values_var_0()
{
	__tzcnt(0x3F03654A);
}

// 00000000004016F3: void inst_1_flags_var_0()
// Called from:
//      main
void inst_1_flags_var_0()
{
	__tzcnt(1185510146);
}

// 00000000004017FB: void inst_2_values_var_0()
// Called from:
//      main
void inst_2_values_var_0()
{
	__tzcnt(0xEE1780FE);
}

// 00000000004018FD: void inst_2_flags_var_0()
// Called from:
//      main
void inst_2_flags_var_0()
{
	__tzcnt(0x757098A0);
}

// 0000000000401A05: void inst_3_values_var_0()
// Called from:
//      main
void inst_3_values_var_0()
{
}

// 0000000000401B07: void inst_3_flags_var_0()
// Called from:
//      main
void inst_3_flags_var_0()
{
}

// 0000000000401C1F: void inst_4_values_var_0()
// Called from:
//      main
void inst_4_values_var_0()
{
}

// 0000000000401D21: void inst_4_flags_var_0()
// Called from:
//      main
void inst_4_flags_var_0()
{
}

// 0000000000401E39: void inst_5_values_var_0()
// Called from:
//      main
void inst_5_values_var_0()
{
}

// 0000000000401F3B: void inst_5_flags_var_0()
// Called from:
//      main
void inst_5_flags_var_0()
{
}

// 0000000000402053: void inst_6_values_var_0()
// Called from:
//      main
void inst_6_values_var_0()
{
}

// 0000000000402155: void inst_6_flags_var_0()
// Called from:
//      main
void inst_6_flags_var_0()
{
}

// 000000000040226D: void inst_7_values_var_0()
// Called from:
//      main
void inst_7_values_var_0()
{
}

// 000000000040236F: void inst_7_flags_var_0()
// Called from:
//      main
void inst_7_flags_var_0()
{
}

// 0000000000402487: void inst_8_values_var_0()
// Called from:
//      main
void inst_8_values_var_0()
{
}

// 0000000000402589: void inst_8_flags_var_0()
// Called from:
//      main
void inst_8_flags_var_0()
{
}

// 00000000004026A1: void inst_9_values_var_0()
// Called from:
//      main
void inst_9_values_var_0()
{
}

// 00000000004027A3: void inst_9_flags_var_0()
// Called from:
//      main
void inst_9_flags_var_0()
{
}

// 00000000004028BB: void inst_10_values_var_0()
// Called from:
//      main
void inst_10_values_var_0()
{
}

// 00000000004029BD: void inst_10_flags_var_0()
// Called from:
//      main
void inst_10_flags_var_0()
{
}

// 0000000000402AD5: void inst_11_values_var_0()
// Called from:
//      main
void inst_11_values_var_0()
{
}

// 0000000000402BD7: void inst_11_flags_var_0()
// Called from:
//      main
void inst_11_flags_var_0()
{
}

// 0000000000402CE7: void inst_12_values_var_0()
// Called from:
//      main
void inst_12_values_var_0()
{
}

// 0000000000402DE9: void inst_12_flags_var_0()
// Called from:
//      main
void inst_12_flags_var_0()
{
}

// 0000000000402EF9: void inst_13_values_var_0()
// Called from:
//      main
void inst_13_values_var_0()
{
}

// 0000000000402FFB: void inst_13_flags_var_0()
// Called from:
//      main
void inst_13_flags_var_0()
{
}

// 0000000000403113: void inst_14_values_var_0()
// Called from:
//      main
void inst_14_values_var_0()
{
}

// 0000000000403215: void inst_14_flags_var_0()
// Called from:
//      main
void inst_14_flags_var_0()
{
}

// 000000000040332D: void inst_15_values_var_0()
// Called from:
//      main
void inst_15_values_var_0()
{
}

// 000000000040342F: void inst_15_flags_var_0()
// Called from:
//      main
void inst_15_flags_var_0()
{
}

// 000000000040352F: void inst_16_values_var_0()
// Called from:
//      main
void inst_16_values_var_0()
{
}

// 0000000000403631: void inst_16_flags_var_0()
// Called from:
//      main
void inst_16_flags_var_0()
{
}

// 0000000000403731: void inst_17_values_var_0()
// Called from:
//      main
void inst_17_values_var_0()
{
}

// 0000000000403833: void inst_17_flags_var_0()
// Called from:
//      main
void inst_17_flags_var_0()
{
}

// 0000000000403933: void inst_18_values_var_0()
// Called from:
//      main
void inst_18_values_var_0()
{
}

// 0000000000403A35: void inst_18_flags_var_0()
// Called from:
//      main
void inst_18_flags_var_0()
{
}

// 0000000000403B35: void inst_19_values_var_0()
// Called from:
//      main
void inst_19_values_var_0()
{
}

// 0000000000403C37: void inst_19_flags_var_0()
// Called from:
//      main
void inst_19_flags_var_0()
{
}

// 0000000000403D37: void inst_20_values_var_0()
// Called from:
//      main
void inst_20_values_var_0()
{
}

// 0000000000403E39: void inst_20_flags_var_0()
// Called from:
//      main
void inst_20_flags_var_0()
{
}

// 0000000000403F39: void inst_21_values_var_0()
// Called from:
//      main
void inst_21_values_var_0()
{
}

// 000000000040403C: void inst_21_flags_var_0()
// Called from:
//      main
void inst_21_flags_var_0()
{
}

// 000000000040413D: void inst_22_values_var_0()
// Called from:
//      main
void inst_22_values_var_0()
{
}

// 0000000000404240: void inst_22_flags_var_0()
// Called from:
//      main
void inst_22_flags_var_0()
{
}

// 0000000000404341: void inst_23_values_var_0()
// Called from:
//      main
void inst_23_values_var_0()
{
}

// 0000000000404443: void inst_23_flags_var_0()
// Called from:
//      main
void inst_23_flags_var_0()
{
}

// 0000000000404543: void inst_24_values_var_0()
// Called from:
//      main
void inst_24_values_var_0()
{
}

// 0000000000404645: void inst_24_flags_var_0()
// Called from:
//      main
void inst_24_flags_var_0()
{
}

// 0000000000404745: void inst_25_values_var_0()
// Called from:
//      main
void inst_25_values_var_0()
{
}

// 0000000000404847: void inst_25_flags_var_0()
// Called from:
//      main
void inst_25_flags_var_0()
{
}

// 0000000000404947: void inst_26_values_var_0()
// Called from:
//      main
void inst_26_values_var_0()
{
}

// 0000000000404A49: void inst_26_flags_var_0()
// Called from:
//      main
void inst_26_flags_var_0()
{
}

// 0000000000404B49: void inst_27_values_var_0()
// Called from:
//      main
void inst_27_values_var_0()
{
}

// 0000000000404C4B: void inst_27_flags_var_0()
// Called from:
//      main
void inst_27_flags_var_0()
{
}

// 0000000000404D4B: void inst_28_values_var_0()
// Called from:
//      main
void inst_28_values_var_0()
{
}

// 0000000000404E4D: void inst_28_flags_var_0()
// Called from:
//      main
void inst_28_flags_var_0()
{
}

// 0000000000404F4D: void inst_29_values_var_0()
// Called from:
//      main
void inst_29_values_var_0()
{
}

// 0000000000405050: void inst_29_flags_var_0()
// Called from:
//      main
void inst_29_flags_var_0()
{
	!OVERFLOW(SLICE(cond(-0xED41D5AB), bool, 4) + 408624851);
}

// 0000000000405159: void inst_30_values_var_0()
// Called from:
//      main
void inst_30_values_var_0()
{
}

// 000000000040525C: void inst_30_flags_var_0()
// Called from:
//      main
void inst_30_flags_var_0()
{
	!OVERFLOW(SLICE(cond(-2265717663), bool, 4) + 0x7F678C7B);
}

// 0000000000405365: void inst_31_values_var_0()
// Called from:
//      main
void inst_31_values_var_0()
{
}

// 0000000000405468: void inst_31_flags_var_0()
// Called from:
//      main
void inst_31_flags_var_0()
{
}

// 0000000000405570: void inst_32_values_var_0()
// Called from:
//      main
void inst_32_values_var_0()
{
}

// 0000000000405673: void inst_32_flags_var_0()
// Called from:
//      main
void inst_32_flags_var_0()
{
	up64 rax_60 = -3772709926;
}

// 000000000040577C: void inst_33_values_var_0()
// Called from:
//      main
void inst_33_values_var_0()
{
	rax_63 = (uint64) __movbe_32((word32) (fp - 112));
}

// 000000000040587E: void inst_33_flags_var_0()
// Called from:
//      main
void inst_33_flags_var_0()
{
	rbp_49 = (uint64) __movbe_32((word32) -0xEF81B7E7);
}

// 000000000040597E: void inst_34_values_var_0()
// Called from:
//      main
void inst_34_values_var_0()
{
	r12_62 = (uint64) __movbe_32(255939098);
}

// 0000000000405A81: void inst_34_flags_var_0()
// Called from:
//      main
void inst_34_flags_var_0()
{
	r12_50 = (uint64) __movbe_32(2746186577);
}

// 0000000000405B82: void inst_35_values_var_0()
// Called from:
//      main
void inst_35_values_var_0()
{
	__movbe_16(0x0A39);
}

// 0000000000405C85: void inst_35_flags_var_0()
// Called from:
//      main
void inst_35_flags_var_0()
{
	__movbe_16(0x5790);
}

// 0000000000405D87: void inst_36_values_var_0()
// Called from:
//      main
void inst_36_values_var_0()
{
	rdx_62 = (uint64) __movbe_32(2537082700);
}

// 0000000000405E8A: void inst_36_flags_var_0()
// Called from:
//      main
void inst_36_flags_var_0()
{
	rax_50 = (uint64) __movbe_32(1411114943);
}

// 0000000000405F8B: void inst_37_values_var_0()
// Called from:
//      main
void inst_37_values_var_0()
{
	__movbe_64(46677542);
}

// 000000000040608E: void inst_37_flags_var_0()
// Called from:
//      main
void inst_37_flags_var_0()
{
	__movbe_64(0x8EE4E38E);
}

// 000000000040618F: void inst_38_values_var_0()
// Called from:
//      main
void inst_38_values_var_0()
{
	__movbe_64(2922224909);
}

// 0000000000406292: void inst_38_flags_var_0()
// Called from:
//      main
void inst_38_flags_var_0()
{
	__movbe_64(-2533852428);
}

// 0000000000406393: void inst_39_values_var_0()
// Called from:
//      main
void inst_39_values_var_0()
{
	__lzcnt(11511);
}

// 0000000000406496: void inst_39_flags_var_0()
// Called from:
//      main
void inst_39_flags_var_0()
{
	__lzcnt(0x23A5);
}

// 0000000000406597: void inst_40_values_var_0()
// Called from:
//      main
void inst_40_values_var_0()
{
	__lzcnt(1014674587);
}

// 0000000000406699: void inst_40_flags_var_0()
// Called from:
//      main
void inst_40_flags_var_0()
{
	__lzcnt((word32) -1988206223);
}

// 0000000000406798: void inst_41_values_var_0()
// Called from:
//      main
void inst_41_values_var_0()
{
	__lzcnt(1963242440);
}

// 000000000040689A: void inst_41_flags_var_0()
// Called from:
//      main
void inst_41_flags_var_0()
{
	__lzcnt(1120444084);
}

// 00000000004069A0: void __libc_csu_init(Register word64 rdx, Register word64 rsi, Register word32 edi)
void __libc_csu_init(word64 rdx, word64 rsi, word32 edi)
{
	word32 edi = (word32) rdi;
	_init();
	word32 r13d_83 = (word32) (uint64) edi;
	int64 rbp_30 = 0x00408E18 - 0x00408E10;
	if (rbp_30 >> 0x03 != 0x00)
	{
		Eq_259 rbx_41 = 0x00;
		do
		{
			(*((char *) g_a408E10 + rbx_41 * 0x08))();
			rbx_41 = (word64) rbx_41.u1 + 1;
		} while (rbp_30 >> 0x03 != rbx_41);
	}
}

// 0000000000406A10: void __libc_csu_fini()
void __libc_csu_fini()
{
}

