// subject_bss.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

byte g_b804A063 = 0x00;
// subject_data.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

real80 g_r804A030 = 
	{
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x02, 0x40, 
	};
real64 g_r804A040 = 11.0;
real32 g_r804A048 = 10.0F;
int64 g_qw804A050 = 5;
int32 g_dw804A058 = 4;
int32 g_dw804A05C = 3;
int16 g_w804A060 = 2;
byte g_b804A062 = 0x01;
// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 080487C4: void _fini()
void _fini()
{
}

// subject_got.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_ptr8049FFC = null;
// subject_got_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

word32 g_dw804A004 = 0x00;
// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 080482AC: void _init()
// Called from:
//      __libc_csu_init
void _init()
{
	if (g_dw804A004 != 0x00)
		fn08048300();
}

// subject_jcr.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

word32 g_dw8049F10 = 0x00;
// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

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

#include "subject.h"

// 08048300: void fn08048300()
// Called from:
//      _init
void fn08048300()
{
	g_ptr8049FFC();
}

// subject_rodata.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

char g_str80487E4[] = "%f";
char g_str80487E7[] = "%d";
char g_str80487EA[] = "%zu %zu %zu %zu %zu\n";
char g_str80487F2[] = "%zu %zu %zu\n";
real32 g_r8048800 = 3.0F;
real32 g_r8048804 = 10.0F;
real64 g_r8048808 = 3.14159265358979;
real64 g_r8048810 = 12.345;
// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 08048310: void main()
void main()
{
	__align(fp);
	printf("%zu %zu %zu %zu %zu\n", tLoc2C, tLoc2C, tLoc2C, tLoc2C, tLoc2C);
	printf("%zu %zu %zu\n", tLoc1C, tLoc1C, tLoc1C);
}

// 08048352: void _start(Register (ptr32 Eq_35) edx, Stack int32 dwArg00)
void _start(void (* edx)(), int32 dwArg00)
{
	__align((char *) fp + 4);
	__libc_start_main(&g_t8048310, dwArg00, (char *) fp + 4, &g_t8048760, &g_t80487C0, edx, fp);
	__hlt();
}

// 08048380: void __x86.get_pc_thunk.bx()
void __x86.get_pc_thunk.bx()
{
}

// 08048390: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
}

// 080483C0: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
}

// 08048400: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b804A063 == 0x00)
	{
		deregister_tm_clones();
		g_b804A063 = 0x01;
	}
}

// 08048420: void frame_dummy()
void frame_dummy()
{
	register_tm_clones();
}

// 0804844B: void use(Stack real64 qwArg04)
// Called from:
//      read_ints
//      read_floats
//      basic_operations
//      constants
void use(real64 qwArg04)
{
	printf("%f", qwArg04);
}

// 08048466: void use_int(Stack Eq_82 dwArg04)
// Called from:
//      compare_floats
void use_int(Eq_82 dwArg04)
{
	printf("%d", dwArg04);
}

// 0804847E: void read_ints()
void read_ints()
{
	use((real64) (int16) g_b804A062 + 0.0 + (real64) g_w804A060 + (real64) g_dw804A05C + (real64) g_dw804A058 + (real64) g_qw804A050);
}

// 080484BE: void write_ints(Stack real64 rArg04)
void write_ints(real64 rArg04)
{
	uint16 wLoc06_36 = __fstcw();
	uint16 ax_18 = SEQ(SLICE(wLoc06_36, byte, 8) | 0x0C, (byte) wLoc06_36);
	__fldcw(ax_18);
	__fldcw(wLoc06_36);
	__fldcw(ax_18);
	__fldcw(wLoc06_36);
	int16 wLoc0A_40 = (int16) rArg04;
	g_b804A062 = (byte) wLoc0A_40;
	g_w804A060 = wLoc0A_40;
	__fldcw(ax_18);
	g_qw804A050 = (int64) rArg04;
	__fldcw(wLoc06_36);
	int32 dwLoc10_41 = (int32) rArg04;
	g_dw804A05C = dwLoc10_41;
	g_dw804A058 = dwLoc10_41;
}

// 08048516: void read_floats()
void read_floats()
{
	use((real64) g_r804A048 + 0.0 + g_r804A040 + (real64) g_r804A030);
}

// 08048547: void write_floats(Stack real64 rArg04)
void write_floats(real64 rArg04)
{
	g_r804A048 = (real32) rArg04;
	g_r804A040 = rArg04;
	g_r804A030 = (real80) rArg04;
}

// 08048564: void converting_between_floats_f1()
void converting_between_floats_f1()
{
	g_r804A048 = (real32) g_r804A040;
}

// 08048578: void converting_between_floats_f2()
void converting_between_floats_f2()
{
	g_r804A048 = (real32) (real64) g_r804A030;
}

// 0804858A: void converting_between_floats_d1()
void converting_between_floats_d1()
{
	g_r804A040 = (real64) g_r804A048;
}

// 0804859B: void converting_between_floats_d2()
void converting_between_floats_d2()
{
	g_r804A040 = (real64) g_r804A030;
}

// 080485AF: void converting_between_floats_l1()
void converting_between_floats_l1()
{
	g_r804A030 = (real80) (real64) g_r804A048;
}

// 080485C0: void converting_between_floats_l2()
void converting_between_floats_l2()
{
	g_r804A030 = (real80) g_r804A040;
}

// 080485D1: void basic_operations(Stack real64 rArg04, Stack real64 rArg0C)
void basic_operations(real64 rArg04, real64 rArg0C)
{
	use(rArg04 + rArg0C);
	use(rArg04 - rArg0C);
	use(rArg0C - rArg04);
	use(rArg04 * rArg0C);
	use(rArg04 / rArg0C);
	use(rArg0C / rArg04);
	use(-rArg04);
}

// 08048647: void compare_floats(Stack Eq_232 rArg04, Stack Eq_232 rArg0C)
void compare_floats(Eq_232 rArg04, Eq_232 rArg0C)
{
	Eq_82 eax_26 = (uint32) (int8) !PARITY_EVEN(rArg0C - rArg04);
	if (rArg0C != rArg04)
		eax_26.u0 = 0x00;
	use_int(eax_26);
	Eq_82 eax_55 = (uint32) (int8) PARITY_EVEN(rArg0C - rArg04);
	if (rArg0C != rArg04)
		eax_55.u0 = 0x01;
	use_int(eax_55);
	use_int((uint32) (int8) (rArg04 > rArg0C));
	use_int((uint32) (int8) (rArg04 >= rArg0C));
	use_int((uint32) (int8) (rArg0C > rArg04));
	use_int((uint32) (int8) (rArg0C >= rArg04));
}

// 080486FA: void constants(Stack real64 rArg04)
void constants(real64 rArg04)
{
	use(rArg04 + rArg04);
	use(rArg04 * (real64) g_r8048800);
	use(rArg04 * g_r8048808);
	use(rArg04 * (real64) g_r8048804);
	use(rArg04 * g_r8048810);
}

// 08048760: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void __libc_csu_init(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	_init();
	int32 esi_28 = 0x0804A0F4 - 0x0804A0F8;
	if (esi_28 >> 0x02 != 0x00)
	{
		int32 edi_33 = 0x00;
		do
		{
			((<anonymous> *[]) 0x0804A0F8)[edi_33]();
			++edi_33;
		} while (esi_28 >> 0x02 != edi_33);
	}
}

// 080487C0: void __libc_csu_fini()
void __libc_csu_fini()
{
}

