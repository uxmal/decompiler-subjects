// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 080487E4: void _start(Register (ptr Eq_2) edx, Stack word32 dwArg00)
void _start( * edx, word32 dwArg00)
{
	if (0x08049A24 != 0x00)
		atexit(edx);
	atexit(&globals->t80489B8);
	globals->ptr8049B10 = fp + 0x08 + dwArg00 * 0x04;
	globals->ptr8049B2C = fp + 0x04;
	word32 esp_28;
	word32 ebp_29;
	word32 edx_30;
	word32 eax_31;
	byte SZO_32;
	byte C_33;
	byte Z_34;
	byte SCZO_35;
	__fpstart();
	fn0804884C();
	_init();
	exit(main(ebp_29, dwArg00));
}

// 08048848: void _mcount()
void _mcount()
{
	return;
}

// 0804884C: void fn0804884C()
void fn0804884C()
{
	if (0x00 != 0x00)
	{
		__wait();
		uint16 wLoc10_39 = __fstcw();
		if (__bt(0x00, 0x0A))
			;
		cui16 v16_67 = wLoc10_39 & 0xF0C0 | 0x0300;
		__fldcw(v16_67 | 0x02);
		__fldcw(v16_67 | 0x02);
		if (false)
			globals->dw8049B34 = 0x01;
	}
	return;
}

// 080488F0: Register word32 main(Register word32 ebp, Stack ui32 dwArg04)
word32 main(word32 ebp, ui32 dwArg04)
{
	if (dwArg04 <= ~0x06)
		;
	else
	{
		printf(&globals->b8049BA0, SLICE(0x08049BA0, <unknown>, 32));
		return 0x00;
	}
}

// 08048990: void _init()
void _init()
{
	ptr32 ecx_8 = globals->ptr8049A1C;
	if (*(ecx_8 - 0x08) != 0x00)
	{
		word32 esp_25;
		word32 ebx_26;
		byte SCZO_27;
		word32 ecx_28;
		word32 edx_29;
		byte Z_30;
		bcuiposr0 None_31;
		(*(ecx_8 - 0x08))();
	}
	return;
}

// 080489B8: void _fini()
void _fini()
{
	ptr32 ecx_8 = globals->ptr8049A20;
	if (*(ecx_8 - 0x14) != 0x00)
	{
		word32 esp_26;
		word32 ebx_27;
		byte SCZO_28;
		word32 ecx_29;
		word32 edx_30;
		byte Z_31;
		bcuiposr0 None_32;
		(*(ecx_8 - 0x14))();
	}
	return;
}

