// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 0000000000000A1C: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 00000000000006D0: Register word64 _init(Register out ptr64 x30Out)
// Called from:
//      __libc_csu_init
word64 _init(ptr64 & x30Out)
{
	call_weak_fn();
	x30Out = qwArg00;
	return x30;
}

// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_plt.h"

// 0000000000000710: void fn0000000000000710()
// Called from:
//      __do_global_dtors_aux
void fn0000000000000710()
{
	g_ptr11000();
}

// 0000000000000720: void fn0000000000000720()
// Called from:
//      _start
void fn0000000000000720()
{
	g_ptr11008();
}

// 0000000000000740: void fn0000000000000740()
// Called from:
//      _start
void fn0000000000000740()
{
	g_ptr11018();
}

// 0000000000000750: void fn0000000000000750()
// Called from:
//      main
void fn0000000000000750()
{
	g_ptr11020();
}

// 0000000000000760: void fn0000000000000760()
// Called from:
//      main
void fn0000000000000760()
{
	g_ptr11028();
}

// 0000000000000770: void fn0000000000000770()
// Called from:
//      main
void fn0000000000000770()
{
	g_ptr11030();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 0000000000000780: void _start()
void _start()
{
	fn0000000000000720();
	fn0000000000000740();
	call_weak_fn();
}

// 00000000000007B8: void call_weak_fn()
// Called from:
//      _init
//      _start
void call_weak_fn()
{
	if (g_qw10FC0 == 0x00)
		return;
	word64 x17_12;
	g_ptr11010();
}

// 00000000000007D0: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (0x0001104F - 0x00011048 <= 0x0E)
		return;
	<anonymous> * x1_13 = g_ptr10FB0;
	if (x1_13 == null)
		return;
	x1_13();
}

// 0000000000000808: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 0x00011048 - 0x00011048;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_13 = g_ptr10FE0;
	if (x2_13 == null)
		return;
	word64 x2_17;
	x2_13();
}

// 0000000000000848: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b11048 == 0x00)
	{
		if (g_qw10FB8 != 0x00)
			fn0000000000000710();
		deregister_tm_clones();
		g_b11048 = 0x01;
	}
}

// 0000000000000890: void frame_dummy(Register word64 x29, Register word64 x30)
void frame_dummy(word64 x29, word64 x30)
{
	if (g_qw10DB8 != 0x00)
	{
		<anonymous> * x1_8 = g_ptr10FD8;
		if (x1_8 != null)
		{
			x1_8();
			register_tm_clones();
			return;
		}
	}
	register_tm_clones();
}

// 00000000000008C8: Register int32 is_prime(Register int32 w0)
// Called from:
//      main
int32 is_prime(int32 w0)
{
	if (w0 == 0x01)
		return 0x00;
	int32 w0_10;
	if (w0 > 0x03)
	{
		w0_10 = w0 >= 0x00 ? w0 & 0x01 : -(w0 & 0x01);
		if (w0_10 != 0x00)
		{
			int32 w1_15 = 0x02;
			do
			{
				++w1_15;
				if (w0 < w1_15 * w1_15)
					return 0x01;
				w0_10 = w0 - (w0 / w1_15) * w1_15;
			} while (w0_10 != 0x00);
		}
	}
	else
		w0_10 = 0x01;
	return w0_10;
}

// 0000000000000928: void main()
void main()
{
	fn0000000000000750();
	int32 w19_22;
	for (w19_22 = 0x01; w19_22 != 10000; ++w19_22)
	{
		if (is_prime(w19_22) != 0x00)
			fn0000000000000760();
	}
	fn0000000000000770();
}

// 00000000000009A0: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
void __libc_csu_init(word32 w0, word64 x1, word64 x2, word64 x24)
{
	word32 x24_32_32_104 = SLICE(x24, word32, 32);
	int64 x20_26 = 0x00010DB0 - 0x00010DA8;
	<anonymous> * x21_24[] = g_a10DA8;
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

// 0000000000000A18: void __libc_csu_fini()
void __libc_csu_fini()
{
}

