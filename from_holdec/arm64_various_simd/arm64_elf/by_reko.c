// subject_bss.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

byte g_b12018 = 0x00;
word64 g_qw12050 = 0x00;
word64 g_qw12058 = 0x00;
// subject_data.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

word32 g_a12008[] = 
	{
	};
// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000000BF0: void _fini()
void _fini()
{
}

// subject_got.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_ptr11F68 = &g_t0640;
<anonymous> * g_ptr11F70 = &g_t0640;
<anonymous> * g_ptr11F78 = &g_t0640;
<anonymous> * g_ptr11F80 = &g_t0640;
<anonymous> * g_ptr11F88 = &g_t0640;
<anonymous> * g_ptr11F90 = &g_t0640;
word64 g_qw11FA0 = 0x00;
word64 g_qw11FB0 = 0x00;
<anonymous> * g_ptr11FB8 = null;
word64 * g_ptr11FC0 = &g_qw12050;
word64 * g_ptr11FD0 = &g_qw12058;
<anonymous> * g_ptr11FD8 = null;
word64 g_qw11FE0 = 2472;
word64 g_qw11FF8 = 0x00;
// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000000630: void _init()
void _init()
{
}

// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> g_t0640 = <code>;
// 0000000000000660: void fn0000000000000660()
// Called from:
//      dump
//      main
void fn0000000000000660()
{
	g_ptr11F68();
}

// 0000000000000670: void fn0000000000000670()
// Called from:
//      dump
void fn0000000000000670()
{
	g_ptr11F70();
}

// 0000000000000680: void fn0000000000000680()
// Called from:
//      __do_global_dtors_aux
void fn0000000000000680()
{
	g_ptr11F78();
}

// 0000000000000690: void fn0000000000000690()
// Called from:
//      __do_global_dtors_aux
void fn0000000000000690()
{
	g_ptr11F80();
}

// 00000000000006B0: void fn00000000000006B0()
// Called from:
//      frame_dummy
void fn00000000000006B0()
{
	g_ptr11F90();
}

// subject_rodata.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

Eq_393 g_t0DF8 = 
	{
		
		{
			0x4C, 0x6F, 0x72, 0x65, 0x6D, 0x20, 0x49, 0x70, 0x73, 0x75, 0x6D, 0x20, 0x69, 0x73, 0x20, 0x73, 
		}
	};
Eq_392 g_t0E30 = 
	{
		
		{
			0x4C, 0x6F, 0x52, 0x65, 0x6D, 0x20, 0x69, 0x50, 0x53, 0x55, 0x4D, 0x20, 0x69, 0x73, 0x20, 0x73, 
		}
	};
// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 00000000000006C0: void _start()
void _start()
{
	_start_c();
}

// 00000000000006DC: void _start_c()
// Called from:
//      _start
void _start_c()
{
	word64 x0_12 = g_qw11FE0;
	g_ptr11F88();
}

// 0000000000000704: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (0x00012018 - 0x00012018 == 0x00)
		return;
	<anonymous> * x1_12 = g_ptr11FD8;
	if (x1_12 == null)
		return;
	word64 x16_18;
	x1_12();
}

// 0000000000000734: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	if ((0x00012018 - 0x00012018 >> 3) / 0x02 == 0x00)
		return;
	<anonymous> * x2_13 = g_ptr11FB8;
	if (x2_13 == null)
		return;
	word64 x16_19;
	x2_13();
}

// 0000000000000770: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b12018 != 0x00)
		return;
	if (g_qw11FA0 != 0x00)
		fn0000000000000680();
	deregister_tm_clones();
	if (g_qw11FB0 != 0x00)
		fn0000000000000690();
	g_b12018 = 0x01;
}

// 00000000000007D8: void frame_dummy()
void frame_dummy()
{
	if (g_qw11FF8 != 0x00)
		fn00000000000006B0();
	register_tm_clones();
}

// 0000000000000808: Register real64 dump(Register ptr64 x0)
// Called from:
//      main
real64 dump(ptr64 x0)
{
	uint16 wLoc24_171 = SLICE(dwLoc26, word16, 16);
	fn0000000000000660();
	fn0000000000000660();
	fn0000000000000660();
	int16 wLoc20_175 = (word16) x0;
	int32 dwLoc14_140 = 0x00;
	while (true)
	{
		int32 dwLoc24_172 = SEQ(wLoc22, wLoc24_171);
		if (dwLoc14_140 > 0x0F)
			break;
		fn0000000000000660();
		if (dwLoc14_140 == 0x07)
			fn0000000000000660();
		++dwLoc14_140;
	}
	fn0000000000000670();
	fn0000000000000660();
	int32 dwLoc10_146 = 0x00;
	while (true)
	{
		int32 dwLoc22_178 = SEQ(wLoc20_175, wLoc22);
		if (dwLoc10_146 > 0x03)
			break;
		d0 = (real64) g_a12008[(int64) dwLoc24_172 * 4];
		fn0000000000000660();
		++dwLoc10_146;
	}
	fn0000000000000670();
	fn0000000000000660();
	int32 dwLoc0C_152;
	for (dwLoc0C_152 = 0x00; dwLoc0C_152 <= 0x01; ++dwLoc0C_152)
	{
		d0 = (real64) g_a12008[(int64) dwLoc22_178 * 8];
		fn0000000000000660();
	}
	fn0000000000000670();
	fn0000000000000670();
	return d0;
}

// 00000000000009A8: void main(Register word64 q0_64_64, Register (ptr96 Eq_153) q1_96_32, Register (ptr96 Eq_154) q2_96_32, Register (ptr96 Eq_155) q3_96_32)
void main(word64 q0_64_64, struct Eq_153 * q1_96_32, struct Eq_154 * q2_96_32, struct Eq_155 * q3_96_32)
{
	fn0000000000000AB0(g_ptr11FC0, g_ptr11FD0, g_a12008, q0_64_64);
	fn0000000000000AD4(g_ptr11FC0, g_ptr11FD0, g_a12008, SEQ(q0_64_64, SLICE(dump(0x0CC8), word32, 32)));
	fn0000000000000AF8(g_ptr11FC0, g_ptr11FD0, g_a12008, SEQ(q0_64_64, SLICE(dump(3304), word32, 32)), q1_96_32, q2_96_32, q3_96_32);
	fn0000000000000B50(g_ptr11FC0, g_ptr11FD0, g_a12008, SEQ(q0_64_64, SLICE(dump(0x0D00), word32, 32)), q1_96_32, q2_96_32, q3_96_32);
	dump(3384);
	fn0000000000000660();
	fn0000000000000660();
	fn0000000000000BB8(g_ptr11FC0, g_ptr11FD0, g_a12008);
	dump(0x0DC0);
}

// 0000000000000AB0: void fn0000000000000AB0(Register (ptr64 word64) x0, Register (ptr64 word64) x1, Register (ptr64 (ptr128 (arr Eq_413))) x2, Register word64 q0_64_64)
// Called from:
//      main
void fn0000000000000AB0(word64 * x0, word64 * x1, Eq_413 (** x2)[], word64 q0_64_64)
{
	Eq_413 q0_5[] = SEQ(q0_64_64, 0.75);
	q0_5[1].qw0000 = q0_5[0].qw0000;
	*x2 = (Eq_413 (**)[]) q0_5;
	word64 x3_8 = q0_5[1].qw0000;
	*x0 = x3_8;
	*x1 = x3_8;
}

// 0000000000000AD4: void fn0000000000000AD4(Register (ptr64 word64) x0, Register (ptr64 word64) x1, Register (ptr64 Eq_266) x2, Register (ptr96 Eq_173) q0_96_32)
// Called from:
//      main
void fn0000000000000AD4(word64 * x0, word64 * x1, union Eq_266 * x2, struct Eq_173 * q0_96_32)
{
	Eq_266 q0_7 = __dup_i32(q0_96_32->a0001->a0000[0]);
	*x2 = (union Eq_266 *) q0_7;
	word64 x3_10 = *((word128) q0_7 + 1);
	*x0 = x3_10;
	*x1 = x3_10;
}

// 0000000000000AF8: void fn0000000000000AF8(Register (ptr64 word64) x0, Register (ptr64 word64) x1, Register (ptr64 Eq_308) x2, Register word96 q0_96_32, Register (ptr96 Eq_153) q1_96_32, Register (ptr96 Eq_154) q2_96_32, Register (ptr96 Eq_155) q3_96_32)
// Called from:
//      main
void fn0000000000000AF8(word64 * x0, word64 * x1, union Eq_308 * x2, word96 q0_96_32, struct Eq_153 * q1_96_32, struct Eq_154 * q2_96_32, struct Eq_155 * q3_96_32)
{
	Eq_287 q0_14 = SEQ(q0_96_32, 123.0F);
	*((word128) q0_14 + 1) = q1_96_32->a01C8->dw0000;
	*((word128) q0_14 + 2) = q2_96_32->a0315->dw0000;
	*((word128) q0_14 + 3) = q3_96_32->a021F->dw0000;
	Eq_308 q0_26 = __fdiv_f32(q0_14, __dup_i32(q1_96_32->a0064->a0000[0]));
	*x2 = (union Eq_308 *) q0_26;
	word64 x3_29 = *((word128) q0_26 + 1);
	*x0 = x3_29;
	*x1 = x3_29;
}

// 0000000000000B50: void fn0000000000000B50(Register (ptr64 word64) x0, Register (ptr64 word64) x1, Register (ptr64 Eq_360) x2, Register word96 q0_96_32, Register (ptr96 Eq_153) q1_96_32, Register (ptr96 Eq_154) q2_96_32, Register (ptr96 Eq_155) q3_96_32)
// Called from:
//      main
void fn0000000000000B50(word64 * x0, word64 * x1, union Eq_360 * x2, word96 q0_96_32, struct Eq_153 * q1_96_32, struct Eq_154 * q2_96_32, struct Eq_155 * q3_96_32)
{
	Eq_287 q0_14 = SEQ(q0_96_32, 123.0F);
	*((word128) q0_14 + 1) = q1_96_32->a01C8->dw0000;
	*((word128) q0_14 + 2) = q2_96_32->a0315->dw0000;
	*((word128) q0_14 + 3) = q3_96_32->a021F->dw0000;
	Eq_266 q1_23 = __dup_i32(q1_96_32->a0064->a0000[0]);
	Eq_360 q0_35 = __add_i8(__fdiv_f32(q0_14, q1_23), __dup_i8(SEQ(SLICE(q1_23, word96, 32), Eq_370::a0002)->a0000[0]));
	*x2 = (union Eq_360 *) q0_35;
	word64 x3_38 = *((word128) q0_35 + 1);
	*x0 = x3_38;
	*x1 = x3_38;
}

// 0000000000000BB8: void fn0000000000000BB8(Register (ptr64 word64) x0, Register (ptr64 word64) x1, Register (ptr64 Eq_389) x2)
// Called from:
//      main
void fn0000000000000BB8(word64 * x0, word64 * x1, union Eq_389 * x2)
{
	Eq_389 q0_12 = __cmeq(g_t0E30, g_t0DF8);
	*x2 = (union Eq_389 *) q0_12;
	word64 x3_15 = *((word128) q0_12 + 1);
	*x0 = x3_15;
	*x1 = x3_15;
}

