// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 08049738: void _fini()
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
	<anonymous> * eax_10 = g_ptr804C004;
	if (eax_10 != null)
		eax_10();
}

// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_plt.h"

// 08049040: void printf()
void printf()
{
}

// 08049050: void puts()
void puts()
{
}

// 08049060: void __libc_start_main()
void __libc_start_main()
{
}

// 08049070: void putc()
void putc()
{
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 08049080: void main()
void main()
{
	__align(fp);
	uint32 ebx_20;
	for (ebx_20 = 0x00; ebx_20 != 0x1E; ++ebx_20)
	{
		uint32 edx_34 = SLICE(ebx_20 * ~0x33333332, word32, 32);
		printf("%d", ebx_20 - ((edx_34 >> 0x03) + (edx_34 >> 0x03) * 0x04) * 0x02);
	}
	puts("");
	g_w804C044 = 0x5F5F;
	g_a804C028[0].u1 = 0x5F5F5F5F;
	g_dw804C02C = 0x5F5F5F5F;
	g_dw804C030 = 0x5F5F5F5F;
	g_dw804C034 = 0x5F5F5F5F;
	g_dw804C038 = 0x5F5F5F5F;
	g_dw804C03C = 0x5F5F5F5F;
	g_dw804C040 = 0x5F5F5F5F;
	print("initial");
	i386_memset_forward_b(&g_b804C02B, 0x78, 0x05);
	print("5 'x' from 3");
	i386_memset_forward_w(&g_w804C032, 0x2928, 0x03);
	print("3 '()' from 10");
	i386_memset_forward_l(&g_dw804C03C, 0x3E62613C, 0x02);
	print("2 '<ab>' from 20");
	g_w804C044 = 0x5F5F;
	g_a804C028[0].u1 = 0x5F5F5F5F;
	g_dw804C02C = 0x5F5F5F5F;
	g_dw804C030 = 0x5F5F5F5F;
	g_dw804C034 = 0x5F5F5F5F;
	g_dw804C038 = 0x5F5F5F5F;
	g_dw804C03C = 0x5F5F5F5F;
	g_dw804C040 = 0x5F5F5F5F;
	print("reset for following backward tests");
	i386_memset_backward_b(&g_b804C02F, 0x78, 0x05);
	print("5 'x' from 3");
	i386_memset_backward_w(&g_w804C036, 0x2928, 0x03);
	print("3 '()' from 10");
	i386_memset_backward_l(&g_dw804C040, 0x3E62613C, 0x02);
	print("2 '<ab>' from 20");
	g_w804C044 = 0x5F5F;
	g_a804C028[0].u1 = 0x5F5F5F5F;
	g_dw804C02C = 0x5F5F5F5F;
	g_dw804C030 = 0x5F5F5F5F;
	g_dw804C034 = 0x5F5F5F5F;
	g_dw804C038 = 0x5F5F5F5F;
	g_dw804C03C = 0x5F5F5F5F;
	g_dw804C040 = 0x5F5F5F5F;
	print("reset for following bi directional tests");
	i386_memset_both_b(&g_b804C02B, 0x78, 0x05, 0x00);
	print("5 'x' from 3");
	i386_memset_both_b(&g_b804C02F, 121, 0x05, 0x01);
	print("5 'y' from 3");
	g_w804C044 = 0x5F5F;
	g_a804C028[0].u1 = 0x5F5F5F5F;
	g_dw804C02C = 0x5F5F5F5F;
	g_dw804C030 = 0x5F5F5F5F;
	g_dw804C034 = 0x5F5F5F5F;
	g_dw804C038 = 0x5F5F5F5F;
	g_dw804C03C = 0x5F5F5F5F;
	g_dw804C040 = 0x5F5F5F5F;
	print("reset for following bi directional tests");
	i386_memset_both_w(&g_w804C032, 0x2928, 0x03, 0x00);
	print("3 '()' from 10");
	i386_memset_both_w(&g_w804C036, 32123, 0x03, 0x01);
	print("3 '{}' from 10");
	g_w804C044 = 0x5F5F;
	g_a804C028[0].u1 = 0x5F5F5F5F;
	g_dw804C02C = 0x5F5F5F5F;
	g_dw804C030 = 0x5F5F5F5F;
	g_dw804C034 = 0x5F5F5F5F;
	g_dw804C038 = 0x5F5F5F5F;
	g_dw804C03C = 0x5F5F5F5F;
	g_dw804C040 = 0x5F5F5F5F;
	print("reset for following bi directional tests");
	i386_memset_both_l(&g_dw804C03C, 0x3E62613C, 0x02, 0x00);
	print("2 '<ab>' from 20");
	i386_memset_both_l(&g_dw804C040, 0x5D42415B, 0x02, 0x01);
	print("2 '[AB]' from 20");
}

// 08049430: void _start(Register (ptr32 Eq_320) edx, Stack int32 dwArg00)
void _start(void (* edx)(), int32 dwArg00)
{
	__align((char *) fp + 4);
	__libc_start_main(&g_t8049080, dwArg00, (char *) fp + 4, &g_t80496D0, &g_t8049730, edx, fp);
	__hlt();
}

// 08049470: void _dl_relocate_static_pie()
void _dl_relocate_static_pie()
{
}

// 08049480: void __x86.get_pc_thunk.bx()
void __x86.get_pc_thunk.bx()
{
}

// 08049490: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (0x00 == 0x00 || 0x00 == 0x00)
		return;
	fn00000000();
}

// 080494D0: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	if (0 == 0x00 || 0x00 == 0x00)
		return;
	fn00000000();
}

// 08049510: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (g_b804C024 != 0x00)
		return;
	deregister_tm_clones();
	g_b804C024 = 0x01;
}

// 08049540: void frame_dummy()
void frame_dummy()
{
	register_tm_clones();
}

// 08049550: void print(Stack (ptr32 char) dwArg04)
// Called from:
//      main
void print(char * dwArg04)
{
	byte * ebx_13 = g_a804C028;
	do
	{
		putc((int32) *ebx_13, g_ptr804C020);
		++ebx_13;
	} while (ebx_13 != (byte *) ~0x0804C009);
	printf(" : %s\n", dwArg04);
}

// 080495A0: void i386_memset_forward_b(Stack (ptr32 byte) dwArg04, Stack byte bArg08, Stack word32 dwArg0C)
// Called from:
//      main
void i386_memset_forward_b(byte * dwArg04, byte bArg08, word32 dwArg0C)
{
	byte * edi_11 = dwArg04;
	byte al_29 = (byte) (word32) bArg08;
	word32 ecx_13;
	for (ecx_13 = dwArg0C; ecx_13 != 0x00; --ecx_13)
	{
		*edi_11 = al_29;
		++edi_11;
	}
}

// 080495C0: void i386_memset_forward_w(Stack (ptr32 word16) dwArg04, Stack word16 wArg08, Stack word32 dwArg0C)
// Called from:
//      main
void i386_memset_forward_w(word16 * dwArg04, word16 wArg08, word32 dwArg0C)
{
	word16 * edi_11 = dwArg04;
	word16 ax_29 = (word16) (word32) wArg08;
	word32 ecx_13;
	for (ecx_13 = dwArg0C; ecx_13 != 0x00; --ecx_13)
	{
		*edi_11 = ax_29;
		++edi_11;
	}
}

// 080495E0: void i386_memset_forward_l(Stack (ptr32 word32) dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
// Called from:
//      main
void i386_memset_forward_l(word32 * dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 * edi_11 = dwArg04;
	word32 ecx_13;
	for (ecx_13 = dwArg0C; ecx_13 != 0x00; --ecx_13)
	{
		*edi_11 = dwArg08;
		++edi_11;
	}
}

// 08049600: void i386_memset_backward_b(Stack (ptr32 byte) dwArg04, Stack byte bArg08, Stack word32 dwArg0C)
// Called from:
//      main
void i386_memset_backward_b(byte * dwArg04, byte bArg08, word32 dwArg0C)
{
	byte * edi_11 = dwArg04;
	byte al_29 = (byte) (word32) bArg08;
	word32 ecx_13;
	for (ecx_13 = dwArg0C; ecx_13 != 0x00; --ecx_13)
	{
		*edi_11 = al_29;
		--edi_11;
	}
}

// 08049620: void i386_memset_backward_w(Stack (ptr32 word16) dwArg04, Stack word16 wArg08, Stack word32 dwArg0C)
// Called from:
//      main
void i386_memset_backward_w(word16 * dwArg04, word16 wArg08, word32 dwArg0C)
{
	word16 * edi_11 = dwArg04;
	word16 ax_29 = (word16) (word32) wArg08;
	word32 ecx_13;
	for (ecx_13 = dwArg0C; ecx_13 != 0x00; --ecx_13)
	{
		*edi_11 = ax_29;
		edi_11 -= 2;
	}
}

// 08049640: void i386_memset_backward_l(Stack (ptr32 word32) dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
// Called from:
//      main
void i386_memset_backward_l(word32 * dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 * edi_11 = dwArg04;
	word32 ecx_13;
	for (ecx_13 = dwArg0C; ecx_13 != 0x00; --ecx_13)
	{
		*edi_11 = dwArg08;
		edi_11 -= 4;
	}
}

// 08049660: void i386_memset_both_b(Stack (ptr32 byte) dwArg04, Stack byte bArg08, Stack word32 dwArg0C, Stack word32 dwArg10)
// Called from:
//      main
void i386_memset_both_b(byte * dwArg04, byte bArg08, word32 dwArg0C, word32 dwArg10)
{
	byte * edi_18 = dwArg04;
	byte al_36 = (byte) (word32) bArg08;
	word32 ecx_20;
	for (ecx_20 = dwArg0C; ecx_20 != 0x00; --ecx_20)
	{
		*edi_18 = al_36;
		++edi_18;
	}
}

// 08049680: void i386_memset_both_w(Stack (ptr32 word16) dwArg04, Stack word16 wArg08, Stack word32 dwArg0C, Stack word32 dwArg10)
// Called from:
//      main
void i386_memset_both_w(word16 * dwArg04, word16 wArg08, word32 dwArg0C, word32 dwArg10)
{
	word16 * edi_18 = dwArg04;
	word16 ax_36 = (word16) (word32) wArg08;
	word32 ecx_20;
	for (ecx_20 = dwArg0C; ecx_20 != 0x00; --ecx_20)
	{
		*edi_18 = ax_36;
		++edi_18;
	}
}

// 080496B0: void i386_memset_both_l(Stack (ptr32 word32) dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C, Stack word32 dwArg10)
// Called from:
//      main
void i386_memset_both_l(word32 * dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	word32 * edi_18 = dwArg04;
	word32 ecx_20;
	for (ecx_20 = dwArg0C; ecx_20 != 0x00; --ecx_20)
	{
		*edi_18 = dwArg08;
		++edi_18;
	}
}

// 080496D0: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void __libc_csu_init(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	_init();
	int32 esi_28 = 0x0804C0F0 - 0x0804C0F4;
	if (esi_28 >> 0x02 != 0x00)
	{
		int32 edi_32 = 0x00;
		do
		{
			((<anonymous> *[]) 0x0804C0F4)[edi_32]();
			++edi_32;
		} while (esi_28 >> 0x02 != edi_32);
	}
}

// 08049730: void __libc_csu_fini()
void __libc_csu_fini()
{
}

