// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 00401000: Register Eq_2 fn00401000(Register (ptr32 char) ecx, Register Eq_4 ebx, Register (ptr32 char) ebp, Register Eq_4 esi, Register (ptr32 Eq_7) edi, Register (ptr16 Eq_8) es, Register (ptr16 Eq_9) ds, Stack Eq_2 dwArg04, Stack Eq_4 dwArg08)
// Called from:
//      fn00401140
Eq_2 fn00401000(char * ecx, Eq_4 ebx, char * ebp, Eq_4 esi, FILE * edi, struct Eq_8 * es, struct Eq_9 * ds, Eq_2 dwArg04, Eq_4 dwArg08)
{
	ui32 eax_7 = g_dw403000 ^ fp - 88;
	sprintf(fp - 0x54, "%08lX:", ecx);
	Eq_4 ebp_17 = dwArg08;
	if (dwArg08 > 0x10)
		ebp_17 = 0x10;
	size_t esi_38 = 0x00;
	if (ebp_17 > 0x00)
	{
		do
		{
			// Failed to bind call argument.
			// Please report this issue at https://github.com/uxmal/reko
			// Failed to bind call argument.
			// Please report this issue at https://github.com/uxmal/reko
			// Failed to bind call argument.
			// Please report this issue at https://github.com/uxmal/reko
			char * stackArg4 = (char *) <invalid>;
			char * stackArg8 = (char *) <invalid>;
			char * stackArg12 = (char *) <invalid>;
			sprintf(stackArg4, stackArg8, stackArg12);
			esi_38 = (Eq_4) ((word32) esi_38 + 1);
		} while (esi_38 < ebp_17);
		if (esi_38 >= 0x10)
		{
l00401094:
			byte * eax_103 = fp - 0x54;
			Eq_2 edx_104 = fp - 0x53;
			do
			{
				eax_103 = eax_407 + 1;
				eax_407 = eax_103;
			} while (*eax_407 != 0x00);
			Eq_87 eax_113 = eax_103 - (fp - 0x53);
			Mem116[fp - 0x54 + eax_113:word32] = 0x007C2020;
			Eq_4 esi_118 = 0x00;
			if (ebp_17 > 0x00)
			{
				word32 ecx_126 = fp - 0x54 + (eax_113 + 0x03);
				do
				{
					Eq_91 al_138;
					edx_104 = dwArg04;
					byte al_131 = Mem128[dwArg04 + esi_118:byte];
					if (al_131 >= 0x20)
					{
						al_138 = (byte) (word32) al_131;
						if (al_131 > 0x7E)
							goto l004010D2;
					}
					else
					{
l004010D2:
						al_138.u0 = 0x2E;
					}
					Mem146[ecx_126 + esi_118:byte] = al_138;
					++esi_118;
				} while (esi_118 < ebp_17);
				if (esi_118 >= 0x10)
				{
l00401100:
					Mem188[fp - 0x54 + ((eax_113 + 0x03) + esi_118):word16] = 0x7C;
					fn0040123B(printf("%s\n", fp - 0x54), eax_7 ^ fp - 88, edx_104, ebx, ebp, esi, edi, es, ds, ebx);
					return edx_104;
				}
			}
			Eq_4 edi_157 = 0x10 - esi_118;
			memset(fp - 0x54 + ((eax_113 + 0x03) + esi_118), 0x20, edi_157);
			esi_118 += edi_157;
			goto l00401100;
		}
	}
	word32 edx_74 = g_dw402114;
	word32 ecx_77 = 0x10 - esi_38;
	do
	{
		struct Eq_51 * edi_84 = fp - 0x55 + 0x01;
		do
		{
			edi_84 = edi_406 + 1;
			edi_406 = edi_84;
		} while (edi_406->dw0000 != 0x00);
		edi_84->dw0000 = edx_74;
		--ecx_77;
	} while (ecx_77 != 0x00);
	goto l00401094;
}

// 00401140: Register word32 fn00401140(Register (ptr32 char) ecx, Register Eq_4 ebx, Register (ptr32 char) ebp, Register Eq_4 esi, Register (ptr32 Eq_7) edi, Register (ptr16 Eq_8) es, Register (ptr16 Eq_9) ds)
// Called from:
//      fn00401200
word32 fn00401140(char * ecx, Eq_4 ebx, char * ebp, Eq_4 esi, FILE * edi, struct Eq_8 * es, struct Eq_9 * ds)
{
	ui32 eax_7 = g_dw403000 ^ fp - 0x4C;
	word32 eax_31;
	Eq_2 edx_118;
	stat64i32();
	if (eax_31 == 0x00)
	{
		FILE * eax_44 = fopen(ecx, "rb");
		if (eax_44 != null)
		{
			char * ebp_50 = null;
			if (dwLoc38 > null)
			{
				do
				{
					Eq_4 eax_66 = fread(fp - 0x18, 0x01, 0x10, eax_44);
					if (eax_66 == 0x00)
						break;
					edx_118 = fn00401000(ebp_50, fread, ebp_50, eax_66, eax_44, es, ds, fp - 0x18, eax_66);
					ebp_50 += eax_66;
				} while (ebp_50 < dwLoc38);
			}
			fclose(eax_44);
			return fn0040123B(0x00, eax_7 ^ fp - 0x4C, edx_118, ebx, ebp, esi, edi, es, ds, ebx);
		}
	}
	perror(ecx);
	return fn0040123B(0x01, eax_7 ^ fp - 0x4C, edx_118, ebx, ebp, esi, edi, es, ds, ebx);
}

// 00401200: Register (ptr32 Eq_7) fn00401200(Register (ptr16 Eq_8) es, Register (ptr16 Eq_9) ds, Stack Eq_4 dwArg04, Stack (arr (ptr32 char)) dwArg08)
// Called from:
//      Win32CrtStartup
FILE * fn00401200(struct Eq_8 * es, struct Eq_9 * ds, Eq_4 dwArg04, char * dwArg08[])
{
	__align(fp - 4);
	FILE * edi_21 = null;
	size_t esi_22 = 0x01;
	if (dwArg04 > 0x01)
	{
		do
		{
			esi_22 = (Eq_4) ((word32) esi_22 + 1);
			edi_21 += fn00401140(dwArg08[esi_22], dwArg04, fp - 4, esi_22, edi_21, es, ds);
		} while (esi_22 < dwArg04);
	}
	return edi_21;
}

// 0040123B: Register Eq_149 fn0040123B(Register Eq_149 eax, Register ui32 ecx, Register Eq_2 edx, Register Eq_4 ebx, Register (ptr32 char) ebp, Register Eq_4 esi, Register (ptr32 Eq_7) edi, Register (ptr16 Eq_8) es, Register (ptr16 Eq_9) ds, Stack Eq_4 dwArg00)
// Called from:
//      fn00401000
//      fn00401140
Eq_149 fn0040123B(Eq_149 eax, ui32 ecx, Eq_2 edx, Eq_4 ebx, char * ebp, Eq_4 esi, FILE * edi, struct Eq_8 * es, struct Eq_9 * ds, Eq_4 dwArg00)
{
	if (ecx == g_dw403000)
		return eax;
	g_t403140 = eax;
	g_dw40313C = ecx;
	g_t403138 = edx;
	g_t403134 = ebx;
	g_t403130 = esi;
	g_ptr40312C = edi;
	g_ptr403158 = ss;
	g_ptr40314C = cs;
	g_ptr403128 = ds;
	g_ptr403124 = es;
	g_ptr403120 = fs;
	g_ptr40311C = gs;
	g_t403150 = cond(fp - 0x032C) | SCZDOP;
	g_ptr403144 = ebp;
	g_t403148 = dwArg00;
	g_ptr403154 = fp + 0x04;
	g_dw403090 = 0x00010001;
	g_t403044 = g_t403148;
	g_dw403038 = 0xC0000409;
	g_dw40303C = 0x01;
	ui32 eax_56 = g_dw403000;
	ui32 eax_58 = g_dw403004;
	Eq_149 eax_60 = IsDebuggerPresent();
	g_t403088 = eax_60;
	union Eq_353 * esp_64;
	word32 edx_67;
	crt_debugger_hook();
	Eq_353 ecx_70 = *esp_64;
	*esp_64 = (union Eq_353 *) 0x00;
	SetUnhandledExceptionFilter(*esp_64);
	*esp_64 = (union Eq_353 *) 0x004020FC;
	Eq_372 eax_78 = UnhandledExceptionFilter(*esp_64);
	ptr32 esp_79 = (char *) esp_64 + 4;
	if (g_t403088 == 0x00)
	{
		*esp_64 = (union Eq_353 *) 0x01;
		word32 esp_84;
		crt_debugger_hook();
		esp_79 = esp_84 + 4;
	}
	struct Eq_387 * esp_93 = esp_79 - 4;
	esp_93->t0000 = 0xC0000409;
	esp_93->tFFFFFFFC = GetCurrentProcess();
	return TerminateProcess(esp_93->tFFFFFFFC, esp_93->t0000);
}

// 004014EC: Register Eq_420 Win32CrtStartup()
Eq_420 Win32CrtStartup()
{
	fn00401968();
	struct Eq_424 * ebp_18 = fn004018BC(ebx, esi, edi, dwLoc0C, 0x10);
	ebp_18->dwFFFFFFFC = 0x00;
	Eq_372 esi_28 = fs->ptr0018->t0004;
	ebp_18->dwFFFFFFE4 = 0x00;
	while (true)
	{
		word32 dwLoc0C_261 = 0x00;
		Eq_372 eax_41 = InterlockedCompareExchange(&g_t403374, esi_28, 0x00);
		if (eax_41 == 0x00)
			break;
		if (eax_41 == esi_28)
		{
			ebp_18->dwFFFFFFE4 = 0x01;
			break;
		}
		Sleep(1000);
	}
	if (g_dw403370 == 0x01)
		_amsg_exit(0x1F);
	struct Eq_468 * esp_219;
	Eq_420 eax_239;
	if (g_dw403370 == 0x00)
	{
		g_dw403370 = 0x01;
		dwLoc0C_261 = 0x004020DC;
		esp_219 = fp - 8;
		if (_initterm_e(&g_t4020D0, &g_t4020DC) != 0x00)
		{
			ebp_18->dwFFFFFFFC = ~0x01;
			eax_239.u0 = 0xFF;
			goto l00401405;
		}
	}
	else
		g_dw403034 = 0x01;
	if (g_dw403370 == 0x01)
	{
		_initterm(&g_t4020C4, &g_t4020CC);
		g_dw403370 = 0x02;
		dwLoc0C_261 = 0x004020CC;
	}
	if (ebp_18->dwFFFFFFE4 == 0x00)
	{
		InterlockedExchange(&g_t403374, 0x00);
		dwLoc0C_261 = 0x00;
	}
	ptr32 esp_122 = fp - 8;
	if (g_ptr403380 != null)
	{
		dwLoc0C_261 = 0x00403380;
		esp_122 = fp - 8;
		if (fn004017F0(0x00403380) != 0x00)
		{
			word32 edx_160;
			g_ptr403380();
			dwLoc0C_261 = 0x00;
		}
	}
	*_initenv = (union Eq_420 *) g_t40301C;
	struct Eq_565 * esp_168 = esp_122 - 4;
	esp_168->t0000 = g_t40301C;
	esp_168->ptrFFFFFFFC = g_ptr403020;
	esp_168->tFFFFFFF8 = g_t403018;
	Eq_420 eax_212 = fn00401200(es, ds, esp_168->tFFFFFFF8, esp_168->ptrFFFFFFFC);
	g_t403030 = eax_212;
	esp_219 = (struct Eq_468 *) ((char *) &esp_168->t0000 + 4);
	if (g_dw403024 == 0x00)
	{
		esp_168->t0000 = eax_212;
		exit(esp_168->t0000);
	}
	if (g_dw403034 == 0x00)
	{
		word32 edx_233;
		cexit();
	}
	ebp_18->dwFFFFFFFC = ~0x01;
	eax_239 = g_t403030;
l00401405:
	fn00401901(ebp_18, esp_219->dwFFFFFFFC);
	return eax_239;
}

// 00401760: Register uint32 fn00401760(Stack (ptr32 Eq_641) dwArg04)
// Called from:
//      fn004017F0
uint32 fn00401760(struct Eq_641 * dwArg04)
{
	if (dwArg04->w0000 != 23117)
		return 0x00;
	struct Eq_647 * eax_16 = dwArg04 + dwArg04->dw003C / 64;
	if (eax_16->dw0000 != 0x4550)
		return 0x00;
	return (uint32) (int8) (eax_16->w0018 == 0x010B);
}

// 004017A0: Register (ptr32 Eq_665) fn004017A0(Stack (ptr32 Eq_666) dwArg04, Stack uint32 dwArg08)
// Called from:
//      fn004017F0
struct Eq_665 * fn004017A0(struct Eq_666 * dwArg04, uint32 dwArg08)
{
	struct Eq_668 * ecx_12 = dwArg04 + dwArg04->dw003C / 64;
	up32 esi_20 = (word32) ecx_12->w0006;
	up32 edx_21 = 0x00;
	struct Eq_665 * eax_24 = ecx_12 + ((word32) ecx_12->w0014 + 0x18) / 22;
	if (esi_20 > 0x00)
	{
		do
		{
			uint32 ecx_32 = eax_24->dw000C;
			if (dwArg08 >= ecx_32 && dwArg08 < eax_24->dw0008 + ecx_32)
				return eax_24;
			++edx_21;
			++eax_24;
		} while (edx_21 < esi_20);
	}
	eax_24 = null;
	return eax_24;
}

// 004017F0: Register ui32 fn004017F0(Stack ui32 dwArg04)
// Called from:
//      Win32CrtStartup
ui32 fn004017F0(ui32 dwArg04)
{
	ptr32 eax_17 = fs->ptr0000;
	fs->ptr0000 = fp - 0x14;
	if (fn00401760(&g_t400000) != 0x00)
	{
		struct Eq_725 * eax_62 = fn004017A0(&g_t400000, dwArg04 - 0x00400000);
		if (eax_62 != null)
		{
			ui32 eax_95 = ~(eax_62->dw0024 >> 0x1F) & 0x01;
			fs->ptr0000 = eax_17;
			return eax_95;
		}
	}
	fs->ptr0000 = eax_17;
	return 0x00;
}

// 004018BC: Register ptr32 fn004018BC(Register word32 ebx, Register word32 esi, Register word32 edi, Stack word32 dwArg00, Stack ui32 dwArg08)
// Called from:
//      Win32CrtStartup
ptr32 fn004018BC(word32 ebx, word32 esi, word32 edi, word32 dwArg00, ui32 dwArg08)
{
	struct Eq_746 * esp_14 = fp - 8 - dwArg08;
	esp_14->dwFFFFFFFC = ebx;
	esp_14->dwFFFFFFF8 = esi;
	esp_14->dwFFFFFFF4 = edi;
	esp_14->dwFFFFFFF0 = g_dw403000 ^ fp + 0x08;
	esp_14->dwFFFFFFEC = dwArg00;
	fs->ptr0000 = fp - 0x08;
	return fp + 0x08;
}

// 00401901: void fn00401901(Register (ptr32 Eq_424) ebp, Stack word32 dwArg00)
// Called from:
//      Win32CrtStartup
void fn00401901(struct Eq_424 * ebp, word32 dwArg00)
{
	fs->dw0000 = ebp->dwFFFFFFF0;
	ebp->dw0000 = dwArg00;
}

// 00401968: void fn00401968()
// Called from:
//      Win32CrtStartup
void fn00401968()
{
	ui32 eax_11 = g_dw403000;
	if (eax_11 != 0xBB40E64E && (eax_11 & 0xFFFF0000) != 0x00)
		g_dw403004 = ~eax_11;
	else
	{
		GetSystemTimeAsFileTime(fp - 0x0C);
		ui32 esi_47 = GetCurrentProcessId() ^ GetCurrentThreadId() ^ GetTickCount();
		QueryPerformanceCounter(fp - 0x14);
		ui32 esi_55 = esi_47 ^ (dwLoc10 ^ dwLoc14);
		if (esi_55 == 0xBB40E64E)
			esi_55 = ~0x44BF19B0;
		else if ((esi_55 & 0xFFFF0000) == 0x00)
			esi_55 |= esi_55 << 0x10;
		g_dw403000 = esi_55;
		g_dw403004 = ~esi_55;
	}
}

