// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 0804A2A8: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 08049000: void _init()
// Called from:
//      __libc_csu_init
void _init()
{
	<anonymous> * eax_10 = g_ptr804D004;
	if (eax_10 != null)
		eax_10();
}

// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_plt.h"

// 08049040: void __libc_start_main()
void __libc_start_main()
{
}

// 08049050: void __assert_fail()
void __assert_fail()
{
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 08049060: void main()
void main()
{
	__align(fp);
	inst_0_values_var_0();
	inst_0_flags_var_0();
	inst_1_values_var_0();
	inst_1_flags_var_0();
	inst_2_values_var_0();
}

// 080491D0: void _start(Register (ptr32 Eq_27) edx, Stack int32 dwArg00)
void _start(void (* edx)(), int32 dwArg00)
{
	__align((char *) fp + 4);
	__libc_start_main(&g_t8049060, dwArg00, (char *) fp + 4, &g_t804A240, &g_t804A2A0, edx, fp);
	__hlt();
}

// 08049210: void _dl_relocate_static_pie()
void _dl_relocate_static_pie()
{
}

// 08049220: void __x86.get_pc_thunk.bx()
void __x86.get_pc_thunk.bx()
{
}

// 08049230: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (0x00 == 0x00 || 0x00 == 0x00)
		return;
	fn00000000();
}

// 08049270: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	if (0 == 0x00 || 0x00 == 0x00)
		return;
	fn00000000();
}

// 080492B0: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b804D018 != 0x00)
		return;
	deregister_tm_clones();
	g_b804D018 = 0x01;
}

// 080492E0: void frame_dummy()
void frame_dummy()
{
	register_tm_clones();
}

// 080492E6: void inst_0_values_var_0()
// Called from:
//      main
void inst_0_values_var_0()
{
	__tzcnt(~0x434B);
}

// 08049330: void inst_0_flags_var_0()
// Called from:
//      main
void inst_0_flags_var_0()
{
	__tzcnt(~0x3119);
}

// 08049399: void inst_1_values_var_0()
// Called from:
//      main
void inst_1_values_var_0()
{
	__tzcnt(3528830083);
}

// 080493E2: void inst_1_flags_var_0()
// Called from:
//      main
void inst_1_flags_var_0()
{
	__tzcnt(0x0CC38128);
}

// 0804944A: void inst_2_values_var_0()
// Called from:
//      main
void inst_2_values_var_0()
{
}

// 08049494: void inst_2_flags_var_0()
// Called from:
//      main
void inst_2_flags_var_0()
{
}

// 0804950D: void inst_3_values_var_0()
// Called from:
//      main
void inst_3_values_var_0()
{
}

// 08049557: void inst_3_flags_var_0()
// Called from:
//      main
void inst_3_flags_var_0()
{
}

// 080495D0: void inst_4_values_var_0()
// Called from:
//      main
void inst_4_values_var_0()
{
}

// 0804961A: void inst_4_flags_var_0()
// Called from:
//      main
void inst_4_flags_var_0()
{
}

// 08049693: void inst_5_values_var_0()
// Called from:
//      main
void inst_5_values_var_0()
{
}

// 080496DD: void inst_5_flags_var_0()
// Called from:
//      main
void inst_5_flags_var_0()
{
}

// 08049756: void inst_6_values_var_0()
// Called from:
//      main
void inst_6_values_var_0()
{
}

// 080497A0: void inst_6_flags_var_0()
// Called from:
//      main
void inst_6_flags_var_0()
{
}

// 08049811: void inst_7_values_var_0()
// Called from:
//      main
void inst_7_values_var_0()
{
}

// 0804985B: void inst_7_flags_var_0()
// Called from:
//      main
void inst_7_flags_var_0()
{
}

// 080498D4: void inst_8_values_var_0()
// Called from:
//      main
void inst_8_values_var_0()
{
}

// 0804991E: void inst_8_flags_var_0()
// Called from:
//      main
void inst_8_flags_var_0()
{
}

// 0804997F: void inst_9_values_var_0()
// Called from:
//      main
void inst_9_values_var_0()
{
}

// 080499C9: void inst_9_flags_var_0()
// Called from:
//      main
void inst_9_flags_var_0()
{
}

// 08049A2A: void inst_10_values_var_0()
// Called from:
//      main
void inst_10_values_var_0()
{
}

// 08049A74: void inst_10_flags_var_0()
// Called from:
//      main
void inst_10_flags_var_0()
{
}

// 08049AD5: void inst_11_values_var_0()
// Called from:
//      main
void inst_11_values_var_0()
{
}

// 08049B20: void inst_11_flags_var_0()
// Called from:
//      main
void inst_11_flags_var_0()
{
}

// 08049B82: void inst_12_values_var_0()
// Called from:
//      main
void inst_12_values_var_0()
{
}

// 08049BCC: void inst_12_flags_var_0()
// Called from:
//      main
void inst_12_flags_var_0()
{
}

// 08049C2D: void inst_13_values_var_0()
// Called from:
//      main
void inst_13_values_var_0()
{
}

// 08049C77: void inst_13_flags_var_0()
// Called from:
//      main
void inst_13_flags_var_0()
{
}

// 08049CD8: void inst_14_values_var_0()
// Called from:
//      main
void inst_14_values_var_0()
{
}

// 08049D22: void inst_14_flags_var_0()
// Called from:
//      main
void inst_14_flags_var_0()
{
}

// 08049D83: void inst_15_values_var_0()
// Called from:
//      main
void inst_15_values_var_0()
{
}

// 08049DCD: void inst_15_flags_var_0()
// Called from:
//      main
void inst_15_flags_var_0()
{
	!OVERFLOW(SLICE(cond(-0x535C33B7), bool, 4) + 643386864);
}

// 08049E36: void inst_16_values_var_0()
// Called from:
//      main
void inst_16_values_var_0()
{
}

// 08049E80: void inst_16_flags_var_0()
// Called from:
//      main
void inst_16_flags_var_0()
{
}

// 08049EE9: void inst_17_values_var_0()
// Called from:
//      main
void inst_17_values_var_0()
{
	__movbe_32(339671403);
}

// 08049F33: void inst_17_flags_var_0()
// Called from:
//      main
void inst_17_flags_var_0()
{
	__movbe_32(fp - 22);
}

// 08049F94: void inst_18_values_var_0()
// Called from:
//      main
void inst_18_values_var_0()
{
	__movbe_16(38300);
}

// 08049FDF: void inst_18_flags_var_0()
// Called from:
//      main
void inst_18_flags_var_0()
{
	__movbe_16((word16) -0x1EEB5A09);
}

// 0804A041: void inst_19_values_var_0()
// Called from:
//      main
void inst_19_values_var_0()
{
	__movbe_32(3178515795);
}

// 0804A08B: void inst_19_flags_var_0()
// Called from:
//      main
void inst_19_flags_var_0()
{
	__movbe_32(0x59E000E2);
}

// 0804A0EC: void inst_20_values_var_0()
// Called from:
//      main
void inst_20_values_var_0()
{
	__lzcnt(33974);
}

// 0804A136: void inst_20_flags_var_0()
// Called from:
//      main
void inst_20_flags_var_0()
{
	__lzcnt(52758);
}

// 0804A197: void inst_21_values_var_0()
// Called from:
//      main
void inst_21_values_var_0()
{
	__lzcnt(-0x53188130);
}

// 0804A1E0: void inst_21_flags_var_0()
// Called from:
//      main
void inst_21_flags_var_0()
{
	__lzcnt(1487480408);
}

// 0804A240: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void __libc_csu_init(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	_init();
	int32 esi_28 = 0x0804D0F0 - 0x0804D0F4;
	if (esi_28 >> 0x02 != 0x00)
	{
		int32 edi_32 = 0x00;
		do
		{
			((<anonymous> *[]) 0x0804D0F4)[edi_32]();
			++edi_32;
		} while (esi_28 >> 0x02 != edi_32);
	}
}

// 0804A2A0: void __libc_csu_fini()
void __libc_csu_fini()
{
}

