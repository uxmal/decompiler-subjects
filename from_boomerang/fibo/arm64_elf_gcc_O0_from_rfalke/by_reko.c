// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 00000000000009A4: void _fini()
void _fini()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 00000000000006A0: Register word64 _init(Register out ptr64 x30Out)
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

// 00000000000006E0: void fn00000000000006E0()
// Called from:
//      __do_global_dtors_aux
void fn00000000000006E0()
{
	g_ptr11000();
}

// 00000000000006F0: void fn00000000000006F0()
// Called from:
//      _start
void fn00000000000006F0()
{
	g_ptr11008();
}

// 0000000000000710: void fn0000000000000710()
// Called from:
//      _start
void fn0000000000000710()
{
	g_ptr11018();
}

// 0000000000000720: void fn0000000000000720()
// Called from:
//      main
void fn0000000000000720()
{
	g_ptr11020();
}

// 0000000000000730: void fn0000000000000730()
// Called from:
//      main
void fn0000000000000730()
{
	g_ptr11028();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 0000000000000740: void _start()
void _start()
{
	fn00000000000006F0();
	fn0000000000000710();
	call_weak_fn();
}

// 0000000000000778: void call_weak_fn()
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

// 0000000000000790: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (0x00011047 - 69696 <= 0x0E)
		return;
	<anonymous> * x1_13 = g_ptr10FB0;
	if (x1_13 == null)
		return;
	x1_13();
}

// 00000000000007C8: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 69696 - 69696;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_13 = g_ptr10FE0;
	if (x2_13 == null)
		return;
	word64 x2_17;
	x2_13();
}

// 0000000000000808: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b11040 == 0x00)
	{
		if (g_qw10FB8 != 0x00)
			fn00000000000006E0();
		deregister_tm_clones();
		g_b11040 = 0x01;
	}
}

// 0000000000000850: void frame_dummy(Register word64 x29, Register word64 x30)
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

// 0000000000000888: Register int32 fib(Register int32 w0, Register out ptr64 x19Out, Register out ptr64 x29Out)
// Called from:
//      fib
//      main
int32 fib(int32 w0, ptr64 & x19Out, ptr64 & x29Out)
{
	int32 w0_17;
	if (w0 > 0x01)
	{
		struct Eq_104 * x29_21;
		word64 x19_72;
		fib(w0 - 0x01, out x19_72, out x29_21);
		word64 x19_34;
		word64 x29_73;
		w0_17 = (word32) x19_34 + fib(x29_21->dw002C - 0x02, out x19_34, out x29_73);
	}
	else
		w0_17 = w0;
	x19Out = qwLoc20;
	x29Out = <invalid>;
	return w0_17;
}

// 00000000000008D8: void main(Stack int32 dwArg00)
void main(int32 dwArg00)
{
	fn0000000000000730();
	fn0000000000000720();
	word64 x19_48;
	word64 x29_49;
	fib(dwArg00, out x19_48, out x29_49);
	fn0000000000000730();
}

// 0000000000000928: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
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

// 00000000000009A0: void __libc_csu_fini()
void __libc_csu_fini()
{
}

