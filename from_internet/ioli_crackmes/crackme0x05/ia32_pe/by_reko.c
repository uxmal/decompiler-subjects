// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 00401140: void fn00401140()
// Called from:
//      Win32CrtStartup
void fn00401140()
{
	SetUnhandledExceptionFilter(&g_t401000);
	fn00401470();
	__getmainargs(&g_dw405004, &g_dw405000, fp - 0x10, g_dw403000);
	struct Eq_24 * esp_15 = fp - 44;
	word32 eax_28 = g_dw405030;
	if (eax_28 != 0x00)
	{
		g_dw403010 = eax_28;
		ptr32 edx_33 = iob;
		if (iob != 0x00)
		{
			word32 eax_39 = iob->dw0010;
			setmode();
			edx_33 = iob;
		}
		if (edx_33 != ~0x1F)
		{
			esp_15->dw0004 = g_dw405030;
			word32 eax_55 = iob->dw0030;
			esp_15->dw0000 = eax_55;
			setmode();
			edx_33 = iob;
		}
		if (edx_33 != ~0x3F)
		{
			esp_15->dw0004 = g_dw405030;
			word32 eax_74 = iob->dw0050;
			esp_15->dw0000 = eax_74;
			setmode();
		}
	}
	*__p__fmode() = g_dw403010;
	fn00401440();
	__align(esp_15);
	struct Eq_47 * esp_104;
	word32 * eax_105;
	word32 ecx_108;
	_p__environ();
	esp_104->dw0008 = *eax_105;
	esp_104->dw0004 = g_dw405000;
	esp_104->dw0000 = g_dw405004;
	UINT * esp_123;
	cexit();
	*esp_123 = (uint32) fn004013CC(ecx_108);
	ExitProcess(*esp_123);
}

// 00401260: Register Eq_140 Win32CrtStartup()
Eq_140 Win32CrtStartup()
{
	__set_app_type(0x01);
	fn00401140();
}

// 004012A0: void fn004012A0(Stack (ptr32 Eq_149) ptrArg04)
// Called from:
//      Win32CrtStartup
//      fn00401510
void fn004012A0(void (* ptrArg04)())
{
	atexit(ptrArg04);
}

// 00401310: void fn00401310(Stack (ptr32 char) dwArg04)
// Called from:
//      fn00401354
void fn00401310(char * dwArg04)
{
	sscanf(dwArg04, "%d", fp - 0x08);
	if ((dwLoc08 & 0x01) != 0x00)
		return;
	printf("Password OK!\n");
	exit(0x00);
}

// 00401354: void fn00401354(Stack (ptr32 char) dwArg04)
// Called from:
//      fn004013CC
void fn00401354(char * dwArg04)
{
	word32 dwLoc0C_57 = 0x00;
	size_t dwLoc10_58 = 0x00;
	while (dwLoc10_58 < strlen(dwArg04))
	{
		sscanf(fp - 0x11, "%d", fp - 0x08);
		word32 v9_38 = dwLoc0C_57 + dwLoc08;
		dwLoc0C_57 = v9_38;
		if (v9_38 == 0x10)
			fn00401310(dwArg04);
		dwLoc10_58 = (Eq_183) ((word32) dwLoc10_58 + 1);
	}
	printf("Password Incorrect!\n");
}

// 004013CC: Register word32 fn004013CC(Register word32 ecx)
// Called from:
//      fn00401140
word32 fn004013CC(word32 ecx)
{
	__align(fp - 0x9C);
	fn00402D10(0x10, ecx, dwLocA0);
	fn00401510();
	printf("IOLI Crackme Level 0x05\n");
	printf("Password: ");
	scanf("%s", fp - 0x7C);
	fn00401354(fp - 0x7C);
	return 0x00;
}

// 00401440: void fn00401440()
// Called from:
//      fn00401140
void fn00401440()
{
	struct Eq_253 * ecx_15;
	for (ecx_15 = (struct Eq_253 *) 0x00404300; ecx_15 < (struct Eq_253 *) 0x00404300; ++ecx_15)
	{
		struct Eq_257 * edx_13 = ecx_15->dw0004;
		edx_13->dw400000 += ecx_15->dw0000;
	}
}

// 00401470: void fn00401470()
// Called from:
//      fn00401140
void fn00401470()
{
	__fninit();
}

// 00401510: void fn00401510()
// Called from:
//      fn004013CC
void fn00401510()
{
	if (g_dw405040 != 0x00)
		return;
	g_dw405040 = 0x01;
	ui32 eax_23 = g_dw402F10;
	if (eax_23 == ~0x00)
	{
		eax_23 = 0x00;
		bool v14_82 = g_dw402F14 != 0x00;
		while (v14_82)
		{
			++eax_23;
			v14_82 = (&g_dw402F14)[eax_23 * 0x04] != 0x00;
		}
	}
	ui32 ebx_38 = eax_23;
	if (eax_23 != 0x00)
	{
		do
		{
			word32 ecx_56;
			fn90909090();
			--ebx_38;
		} while (ebx_38 != 0x00);
	}
	fn004012A0(&g_t401480);
}

// 00402D10: void fn00402D10(Register uint32 eax, Register word32 ecx, Stack (ptr32 code) dwArg00)
// Called from:
//      fn004013CC
void fn00402D10(uint32 eax, word32 ecx, <anonymous> * dwArg00)
{
	struct Eq_316 * ecx_13 = fp + 0x04;
	for (; eax >= 0x1000; eax -= 0x1000)
	{
		ecx_13 -= 0x1000;
		ecx_13->dw0000 = ecx_13->dw0000;
	}
	word32 * ecx_14 = ecx_13 - eax;
	*ecx_14 = *ecx_14;
	dwArg00();
}

