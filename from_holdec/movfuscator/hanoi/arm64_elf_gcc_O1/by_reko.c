// subject_bss.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

byte g_b12060 = 0x00;
struct Eq_129 * g_a12068[] = 
	{
	};
int32 g_dw12080 = 0;
// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000000D9C: void _fini()
void _fini()
{
}

// subject_got.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_ptr11F98 = null;
word64 g_qw11FA0 = 0x00;
struct Eq_129 * (* g_ptr11FA8)[] = &g_a12068;
word64 g_qw11FB8 = 0x00;
int32 * g_ptr11FD0 = &g_dw12080;
<anonymous> * g_ptr11FD8 = null;
<anonymous> * g_ptr11FE0 = null;
// subject_got_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_ptr12000 = &g_t0840;
<anonymous> * g_ptr12008 = &g_t0840;
<anonymous> * g_ptr12010 = &g_t0840;
<anonymous> * g_ptr12018 = &g_t0840;
<anonymous> * g_ptr12020 = &g_t0840;
<anonymous> * g_ptr12028 = &g_t0840;
<anonymous> * g_ptr12030 = &g_t0840;
<anonymous> * g_ptr12038 = &g_t0840;
<anonymous> * g_ptr12040 = &g_t0840;
<anonymous> * g_ptr12048 = &g_t0840;
// subject_init_array.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_a11D90[] = 
	{
	};
// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000000820: Register word64 _init(Register out ptr64 x30Out)
// Called from:
//      __libc_csu_init
word64 _init(ptr64 & x30Out)
{
	call_weak_fn();
	x30Out = qwArg00;
	return x30;
}

// subject_jcr.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

word64 g_qw11DA0 = 0x00;
// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> g_t0840 = <code>;
// 0000000000000860: void fn0000000000000860()
// Called from:
//      __do_global_dtors_aux
void fn0000000000000860()
{
	g_ptr12000();
}

// 0000000000000870: void fn0000000000000870()
// Called from:
//      _start
void fn0000000000000870()
{
	g_ptr12008();
}

// 0000000000000880: void fn0000000000000880()
// Called from:
//      new_tower
void fn0000000000000880()
{
	g_ptr12010();
}

// 00000000000008A0: void fn00000000000008A0()
// Called from:
//      _start
void fn00000000000008A0()
{
	g_ptr12020();
}

// 00000000000008B0: void fn00000000000008B0()
// Called from:
//      main
void fn00000000000008B0()
{
	g_ptr12028();
}

// 00000000000008C0: void fn00000000000008C0()
// Called from:
//      main
void fn00000000000008C0()
{
	g_ptr12030();
}

// 00000000000008D0: void fn00000000000008D0()
// Called from:
//      add_disk
void fn00000000000008D0()
{
	g_ptr12038();
}

// 00000000000008E0: void fn00000000000008E0()
// Called from:
//      add_disk
void fn00000000000008E0()
{
	g_ptr12040();
}

// 00000000000008F0: void fn00000000000008F0()
// Called from:
//      text
void fn00000000000008F0()
{
	g_ptr12048();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000000900: void _start()
void _start()
{
	fn0000000000000870();
	fn00000000000008A0();
	call_weak_fn();
}

// 0000000000000938: void call_weak_fn()
// Called from:
//      _init
//      _start
void call_weak_fn()
{
	if (g_qw11FB8 == 0x00)
		return;
	word64 x17_12;
	g_ptr12018();
}

// 0000000000000950: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (73831 - 0x00012060 <= 0x0E)
		return;
	<anonymous> * x1_13 = g_ptr11F98;
	if (x1_13 == null)
		return;
	x1_13();
}

// 0000000000000988: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 0x00012060 - 0x00012060;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_13 = g_ptr11FE0;
	if (x2_13 == null)
		return;
	word64 x2_17;
	x2_13();
}

// 00000000000009C8: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b12060 == 0x00)
	{
		if (g_qw11FA0 != 0x00)
			fn0000000000000860();
		deregister_tm_clones();
		g_b12060 = 0x01;
	}
}

// 0000000000000A10: void frame_dummy(Register word64 x29, Register word64 x30)
void frame_dummy(word64 x29, word64 x30)
{
	if (g_qw11DA0 != 0x00)
	{
		<anonymous> * x1_8 = g_ptr11FD8;
		if (x1_8 != null)
		{
			x1_8();
			register_tm_clones();
			return;
		}
	}
	register_tm_clones();
}

// 0000000000000A48: Register word64 new_tower()
// Called from:
//      main
word64 new_tower()
{
	fn0000000000000880();
	*(word64 *) 0x01 = 0x11;
	return 0x01;
}

// 0000000000000A74: void text(Register int32 w2)
// Called from:
//      add_disk
//      remove_disk
//      main
void text(int32 w2)
{
	fn00000000000008F0();
	int32 w19_19 = w2;
	if (w2 != 0x00)
	{
		do
		{
			fn00000000000008F0();
			--w19_19;
		} while (w19_19 != 0x00);
	}
}

// 0000000000000AEC: void add_disk(Register word32 w0, Register int32 w1)
// Called from:
//      move
//      main
void add_disk(word32 w0, int32 w1)
{
	struct Eq_129 * x4_14 = g_ptr11FA8[(int64) w0].ptr0000;
	int32 x6_15[] = x4_14->ptr0000;
	word32 w5_16 = x4_14->dw0008;
	x4_14->dw0008 = w5_16 + 0x01;
	x6_15[(int64) w5_16 / 4] = w1;
	text(w2);
	fn00000000000008E0();
	fn00000000000008D0();
}

// 0000000000000B58: Register word64 remove_disk(Register word32 w0)
// Called from:
//      move
word64 remove_disk(word32 w0)
{
	struct Eq_129 * x4_17 = g_ptr11FA8[(int64) w0].ptr0000;
	int32 x5_18[] = x4_17->ptr0000;
	word32 w3_19 = x4_17->dw0008;
	x4_17->dw0008 = w3_19 - 0x01;
	int32 w19_22 = x5_18[(int64) (w3_19 - 0x01) / 4];
	text(w19_22);
	return SEQ(SLICE(x0_31, word32, 32), w19_22);
}

// 0000000000000BB8: Register ptr64 move(Register word64 x0, Register out ptr64 x21Out)
// Called from:
//      move
//      main
ptr64 move(word64 x0, ptr64 & x21Out)
{
	word32 w0 = (word32) x0;
	if (w0 != 0x00)
	{
		word64 x21_47;
		add_disk((word32) move(x0, out x21_47), (word32) remove_disk((word32) x21_47));
		word64 x21_194;
		move(x0, out x21_194);
		x21Out = x20;
		return x19;
	}
	else
	{
		x21Out = x21;
		return x20;
	}
}

// 0000000000000C28: void main(Register int32 w0, Register (ptr64 Eq_222) x1)
void main(int32 w0, struct Eq_222 * x1)
{
	fn00000000000008B0();
	if (w0 > 0x01)
	{
		int32 w0_35 = x1->dw0008;
		fn00000000000008C0();
		*g_ptr11FD0 = w0_35;
		if (w0_35 > 0x00)
		{
l0000000000000C88:
			int64 x19_44;
			struct Eq_129 * x20_49[] = g_ptr11FA8;
			for (x19_44 = 0x00; x19_44 != 0x18; x19_44 += 0x08)
				x20_49[x19_44 / 8].ptr0000 = new_tower();
			int32 w19_69;
			for (w19_69 = *g_ptr11FD0; w19_69 != 0x00; --w19_69)
				add_disk(0x00, w19_69);
			int32 * x0_96 = g_ptr11FD0;
			word64 x21_196;
			move(SEQ(SLICE(x0_96, word32, 32), *x0_96), out x21_196);
			text(0x01);
			return;
		}
	}
	*g_ptr11FD0 = 0x08;
	goto l0000000000000C88;
}

// 0000000000000D20: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
void __libc_csu_init(word32 w0, word64 x1, word64 x2, word64 x24)
{
	word32 x24_32_32_104 = SLICE(x24, word32, 32);
	int64 x20_26 = 0x00011D98 - 0x00011D90;
	<anonymous> * x21_24[] = g_a11D90;
	word64 x22_34 = x2;
	word64 x23_38 = x1;
	word64 x30_44;
	word64 x29_43 = _init(out x30_44);
	int64 x20_45 = x20_26 >> 3;
	if (x20_26 >> 3 != 0x00)
	{
		int64 x19_46 = 0x00;
		word64 x24_151 = SEQ(x24_32_32_104, w0);
		do
		{
			word64 x3_76;
			x21_24[x19_46]();
			int64 x31_81 = x20_45 - x19_46;
		} while (x31_81 != 0x00);
	}
}

// 0000000000000D98: void __libc_csu_fini()
void __libc_csu_fini()
{
}

