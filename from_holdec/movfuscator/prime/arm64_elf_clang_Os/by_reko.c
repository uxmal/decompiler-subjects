// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 00000000004007E4: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 0000000000400498: Register word64 _init(Register out ptr64 x30Out)
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

// 00000000004004D0: void fn00000000004004D0()
// Called from:
//      _start
void fn00000000004004D0()
{
	g_ptr411000();
}

// 00000000004004F0: void fn00000000004004F0()
// Called from:
//      _start
void fn00000000004004F0()
{
	g_ptr411010();
}

// 0000000000400500: void fn0000000000400500()
// Called from:
//      main
void fn0000000000400500()
{
	g_ptr411018();
}

// 0000000000400510: void fn0000000000400510()
// Called from:
//      main
void fn0000000000400510()
{
	g_ptr411020();
}

// 0000000000400520: void fn0000000000400520()
// Called from:
//      main
void fn0000000000400520()
{
	g_ptr411028();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 0000000000400530: void _start()
void _start()
{
	fn00000000004004D0();
	fn00000000004004F0();
}

// 0000000000400578: void call_weak_fn()
// Called from:
//      _init
void call_weak_fn()
{
	if (g_qw410FE0 == 0x00)
		return;
	word64 x17_12;
	g_ptr411008();
}

// 0000000000400590: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (0x00411047 - 0x00411040 <= 0x0E)
		return;
	<anonymous> * x1_12 = g_ptr4005C8;
	if (x1_12 == null)
		return;
	x1_12();
}

// 00000000004005D0: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 0x00411040 - 0x00411040;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_12 = g_ptr400608;
	if (x2_12 == null)
		return;
	word64 x2_16;
	x2_12();
}

// 0000000000400610: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b411040 == 0x00)
	{
		deregister_tm_clones();
		g_b411040 = 0x01;
	}
}

// 0000000000400640: void frame_dummy(Register word64 x29, Register word64 x30)
void frame_dummy(word64 x29, word64 x30)
{
	if (g_qw410DF0 != 0x00)
	{
		<anonymous> * x1_7 = g_ptr400678;
		if (x1_7 != null)
		{
			x1_7();
			register_tm_clones();
			return;
		}
	}
	register_tm_clones();
}

// 0000000000400680: void is_prime(Register int32 w0)
void is_prime(int32 w0)
{
	if (w0 == 0x01)
		return;
	if (w0 != 0x02 && w0 >= 0x04)
	{
		int32 w8_10 = 0x02;
		do
		{
			if (w0 - (w0 / w8_10) * w8_10 == 0x00)
				return;
			++w8_10;
		} while (w8_10 * w8_10 <= w0);
	}
}

// 00000000004006C8: void main()
void main()
{
	fn0000000000400500();
	int32 w8_27 = 0x01;
	do
	{
		do
		{
			w8_27 = 0x02;
			w8_138 = w8_27;
		} while (w8_138 == 0x01);
		if (w8_138 != 0x02 && w8_138 >= 0x04)
		{
			int32 w8_39 = 0x02;
			do
			{
				if (w8_138 - (w8_138 / w8_39) * w8_39 == 0x00)
					goto l0000000000400740;
				++w8_39;
			} while (w8_39 * w8_39 <= w8_138);
		}
		fn0000000000400510();
l0000000000400740:
		w8_27 = w8_138 + 0x01;
	} while (w8_27 != 10000);
	fn0000000000400520();
}

// 0000000000400768: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
void __libc_csu_init(word32 w0, word64 x1, word64 x2, word64 x24)
{
	word32 x24_32_32_104 = SLICE(x24, word32, 32);
	int64 x20_26 = 4263400 - 0x00410DE0;
	<anonymous> * x21_24[] = g_a410DE0;
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

// 00000000004007E0: void __libc_csu_fini()
void __libc_csu_fini()
{
}

