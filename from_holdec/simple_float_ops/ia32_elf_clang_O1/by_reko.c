// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 08048884: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 080482AC: void _init()
// Called from:
//      __libc_csu_init
void _init()
{
	if (g_dw804A004 != 0x00)
		fn08048300();
}

// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_plt.h"

// 080482E0: void printf()
void printf()
{
}

// 080482F0: void __libc_start_main()
void __libc_start_main()
{
}

// subject_plt_got.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_plt_got.h"

// 08048300: void fn08048300()
// Called from:
//      _init
void fn08048300()
{
	g_ptr8049FFC();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 08048310: void _start(Register (ptr32 Eq_11) edx, Stack int32 dwArg00)
void _start(void (* edx)(), int32 dwArg00)
{
	__align((char *) fp + 4);
	__libc_start_main(&g_t80487E0, dwArg00, (char *) fp + 4, &g_t8048820, &g_t8048880, edx, fp);
	__hlt();
}

// 08048340: void __x86.get_pc_thunk.bx()
void __x86.get_pc_thunk.bx()
{
}

// 08048350: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (true && 0x00 != 0x00)
		fn00000000();
}

// 08048380: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	if (0 != 0x00 && 0x00 != 0x00)
		fn00000000();
}

// 080483C0: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b804A054 == 0x00)
	{
		deregister_tm_clones();
		g_b804A054 = 0x01;
	}
}

// 080483E0: void frame_dummy()
void frame_dummy()
{
	if (g_dw8049F10 != 0x00 && 0x00 != 0x00)
	{
		fn00000000();
		register_tm_clones();
	}
	else
		register_tm_clones();
}

// 08048410: void use(Stack (arr real64 1) rArg04)
// Called from:
//      read_ints
//      read_floats
//      basic_operations
//      constants
void use(real64 rArg04[1])
{
	printf("%f", (real64) (uint128) (uint64) rArg04);
}

// 08048430: void use_int(Stack int32 dwArg04)
void use_int(int32 dwArg04)
{
	printf("%d", dwArg04);
}

// 08048450: void read_ints()
void read_ints()
{
	use((real64) g_dw804A028 + ((real64) g_dw804A024 + ((real64) ((int32) g_w804A022) + (real64) ((int32) g_b804A020))) + (real64) g_t804A030);
}

// 080484B0: void write_ints(Stack real64 rArg04)
void write_ints(real64 rArg04)
{
	uint128 xmm0_6 = (uint128) (uint64) rArg04;
	int32 eax_7 = (int32) xmm0_6;
	g_b804A020 = (byte) eax_7;
	g_w804A022 = (word16) eax_7;
	g_dw804A024 = eax_7;
	g_dw804A028 = eax_7;
	word16 ax_20 = (word16) (word32) __fstcw();
	__fldcw(3199);
	__fldcw(ax_20);
	int64 qwLoc14_37 = (int64) (real64) xmm0_6;
	g_dw804A034 = SLICE(qwLoc14_37, word32, 32);
	g_t804A030 = (word32) qwLoc14_37;
}

// 08048520: void read_floats(Register Eq_153 xmm1)
void read_floats(Eq_153 xmm1)
{
	use((real64) g_r804A048 + (((real64) __xorpd(xmm1, xmm1) + (real64) ((uint128) ((uint32) g_r804A038))) + g_r804A040));
}

// 08048560: void write_floats(Stack real64 rArg04)
void write_floats(real64 rArg04)
{
	uint128 xmm0_6 = (uint128) (uint64) rArg04;
	g_r804A040 = (real64) xmm0_6;
	g_r804A038 = (real32) xmm0_6;
	g_r804A048 = (real80) (real64) xmm0_6;
}

// 08048590: void converting_between_floats_f1()
void converting_between_floats_f1()
{
	g_r804A038 = (real32) (uint128) (uint64) g_r804A040;
}

// 080485B0: void converting_between_floats_f2()
void converting_between_floats_f2()
{
	g_r804A038 = (real32) (real64) g_r804A048;
}

// 080485C0: void converting_between_floats_d1()
void converting_between_floats_d1()
{
	g_r804A040 = (real64) (uint128) (uint32) g_r804A038;
}

// 080485E0: void converting_between_floats_d2()
void converting_between_floats_d2()
{
	g_r804A040 = (real64) g_r804A048;
}

// 080485F0: void converting_between_floats_l1()
void converting_between_floats_l1()
{
	g_r804A048 = (real80) (real64) g_r804A038;
}

// 08048600: void converting_between_floats_l2()
void converting_between_floats_l2()
{
	g_r804A048 = (real80) g_r804A040;
}

// 08048610: void basic_operations(Stack real64 rArg04, Stack real64 rArg0C)
void basic_operations(real64 rArg04, real64 rArg0C)
{
	use((real64) (uint128) (uint64) rArg04 + rArg0C);
	use((real64) (uint128) (uint64) rArg04 - rArg0C);
	use((real64) (uint128) (uint64) rArg0C - (real64) ((uint128) ((uint64) rArg04)));
	use((real64) (uint128) (uint64) rArg04 * rArg0C);
	use((real64) (uint128) (uint64) rArg04 / rArg0C);
	use((real64) (uint128) (uint64) rArg0C / (real64) ((uint128) ((uint64) rArg04)));
	use(__movlpd(__xorpd((uint128) (uint64) rArg04, g_t80488B0)));
}

// 080486C0: void compare_floats()
void compare_floats()
{
}

// 08048760: void constants(Stack real64 rArg04)
void constants(real64 rArg04)
{
	uint128 xmm0_7 = (uint128) (uint64) rArg04;
	use((real64) xmm0_7 + (real64) xmm0_7);
	use((real64) (uint128) (uint64) g_r80488C0 * rArg04);
	use((real64) (uint128) (uint64) g_r80488C8 * rArg04);
	use((real64) (uint128) (uint64) g_r80488D0 * rArg04);
	use((real64) (uint128) (uint64) rArg04 * g_r80488D8);
}

// 080487E0: void main()
void main()
{
	printf("%zu %zu %zu %zu %zu\n", tLoc28, tLoc28, tLoc28, tLoc28, tLoc28);
	printf("%zu %zu %zu\n", tLoc18, tLoc18, tLoc18);
}

// 08048820: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void __libc_csu_init(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	_init();
	int32 esi_28 = 0x0804A0F4 - 0x0804A0F8;
	if (esi_28 >> 0x02 != 0x00)
	{
		int32 edi_33;
		do
		{
			((<anonymous> *[]) 0x0804A0F8)[edi_33]();
			++edi_33;
		} while (esi_28 >> 0x02 != edi_33);
	}
}

// 08048880: void __libc_csu_fini()
void __libc_csu_fini()
{
}

