// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 00411023: Register Eq_2 fn00411023(Register Eq_2 eax, Register ui32 ecx, Register Eq_2 edx, Register Eq_2 ebx, Register Eq_6 ebp, Register Eq_2 esi, Register Eq_2 edi, Register (ptr16 Eq_9) es, Register (ptr16 Eq_10) ds, Stack Eq_2 dwArg00, Register out ptr32 edxOut)
// Called from:
//      fn004110C3
//      fn004110F0
//      fn00411163
//      fn004123F0
//      fn00413770
Eq_2 fn00411023(Eq_2 eax, ui32 ecx, Eq_2 edx, Eq_2 ebx, Eq_6 ebp, Eq_2 esi, Eq_2 edi, struct Eq_9 * es, struct Eq_10 * ds, Eq_2 dwArg00, ptr32 & edxOut)
{
	ptr32 edx_20;
	Eq_2 eax_18 = fn00411970(eax, ecx, edx, ebx, ebp, esi, edi, es, ds, dwArg00, out edx_20);
	edxOut = edx_20;
	return eax_18;
}

// 0041103C: Register word32 fn0041103C()
// Called from:
//      fn004123F0
word32 fn0041103C()
{
	return fn00412CA0();
}

// 00411055: void fn00411055()
// Called from:
//      Win32CrtStartup
void fn00411055()
{
	fn00413000();
}

// 00411096: void fn00411096(Register Eq_2 ecx, Register Eq_2 edx, Register (ptr16 Eq_9) es, Register (ptr16 Eq_10) ds, Stack Eq_2 dwArg00)
// Called from:
//      fn004110C3
//      fn00411163
void fn00411096(Eq_2 ecx, Eq_2 edx, struct Eq_9 * es, struct Eq_10 * ds, Eq_2 dwArg00)
{
	Eq_2 edi_21 = 0x00;
	word32 dwLoc08_120 = 0x01;
	if (*edx > 0x00)
	{
		do
		{
			struct Eq_51 * eax_30 = *((word32) edx + 4);
			word32 ecx_32 = Mem29[eax_30 + edi_21:word32];
			word32 eax_33 = eax_30 + edi_21;
			if (*((word32) ecx + (ecx_32 - 0x04)) != 0xCCCCCCCC || Mem29[(Mem29[eax_33 + 0x04:word32] + ecx_32) + ecx:word32] != 0xCCCCCCCC)
				edi_21 = fn004110F0(dwArg00, ecx, edx, edi_21, es, ds, dwArg00, *((word32) edi_21 + ((word32) (*((word32) edx + 4)) + 8)));
			edi_21 = (word32) edi_21 + 0x0C;
			dwLoc08_120 = dwLoc08_177 + 0x01;
			dwLoc08_177 = dwLoc08_120;
		} while (dwLoc08_177 + 0x00 < *edx);
	}
}

// 004110AA: void fn004110AA(Stack (ptr32 char) ptrArg04, Stack (ptr32 char) ptrArg08)
// Called from:
//      fn004110C3
void fn004110AA(char * ptrArg04, char * ptrArg08)
{
	strcat(ptrArg04, ptrArg08);
}

// 004110B9: void fn004110B9(Stack (ptr32 Eq_110) ptrArg04, Stack (ptr32 Eq_111) ptrArg08)
// Called from:
//      fn00411D70
void fn004110B9(PVFV * ptrArg04, PVFV * ptrArg08)
{
	_initterm(ptrArg04, ptrArg08);
}

// 004110BE: Register Eq_117 fn004110BE(Stack (ptr32 char) ptrArg04)
// Called from:
//      fn004110C3
Eq_117 fn004110BE(char * ptrArg04)
{
	return strlen(ptrArg04);
}

// 004110C3: Register Eq_2 fn004110C3(Register Eq_2 edx, Register Eq_2 ebx, Register Eq_2 esi, Register Eq_2 edi, Register (ptr16 Eq_9) es, Register (ptr16 Eq_10) ds, Stack (ptr32 (arr byte)) dwArg04, Stack Eq_2 dwArg08, Stack Eq_117 dwArg0C)
// Called from:
//      fn00411163
Eq_2 fn004110C3(Eq_2 edx, Eq_2 ebx, Eq_2 esi, Eq_2 edi, struct Eq_9 * es, struct Eq_10 * ds, byte (* dwArg04)[], Eq_2 dwArg08, Eq_117 dwArg0C)
{
	word32 * edi_19 = fp - 0x013C;
	word32 ecx_20;
	for (ecx_20 = 0x4E; ecx_20 != 0x00; --ecx_20)
	{
		*edi_19 = 0xCCCCCCCC;
		++edi_19;
	}
	Eq_2 eax_26 = g_dw417000 ^ fp - 4;
	sprintf(fp - 0x5C, "%08lX:", dwArg08);
	fn00411168(es, ds, dwArg08);
	Eq_2 dwLoc0154_328 = fp - 0x5C;
	if (dwArg0C > 0x10)
		dwArg0C.u0 = 0x10;
	Eq_117 dwLoc68_331 = 0x00;
	while (dwLoc68_331 < dwArg0C)
	{
		Eq_2 eax_239 = fp - 0x53 + dwLoc68_331 *s 0x03;
		word32 ecx_230 = CONVERT(Mem58[dwArg04 + dwLoc68_331:byte], byte, word32);
		sprintf(eax_239, " %02lX", ecx_230);
		fn00411168(es, ds, ecx_230);
		edx = dwLoc68_331 *s 0x03;
		dwLoc0154_328 = eax_239;
		dwLoc68_331 = (word32) dwLoc68_331 + 1;
	}
	while (true)
	{
		word32 dwLoc013C_336;
		dwLoc68_331 = (word32) dwLoc68_331.u0 + 1;
		if (dwLoc68_331 < 0x10)
			dwLoc013C_336 = 0x01;
		else
			dwLoc013C_336 = 0x00;
		if (dwLoc013C_336 == 0x00)
			break;
		fn004110AA(fp - 0x5C, "   ");
	}
	int32 eax_81 = fn004110BE(fp - 0x5C);
	fn004110C8(fp - 0x5C + eax_81, "  |");
	Eq_117 dwLoc68_344 = 0x00;
	while (dwLoc68_344 < dwArg0C)
	{
		Eq_232 bLoc013C_370;
		if (CONVERT(Mem99[dwArg04 + dwLoc68_344:byte], byte, word32) >= 0x20)
		{
			edx = dwArg04 + dwLoc68_344;
			if ((word32) *edx > 0x7E)
				goto l00411563;
			edx = CONVERT(Mem99[dwArg04 + dwLoc68_344:byte], byte, word32);
			bLoc013C_370 = (byte) edx;
		}
		else
		{
l00411563:
			bLoc013C_370 = (Eq_232) 0x2E;
		}
		(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(fp - 0x5C)[(word32) dwLoc68_344.u0 + (eax_81 + 0x03)].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0] = bLoc013C_370;
		dwLoc68_344 = (word32) dwLoc68_344 + 1;
	}
	while (dwLoc68_344 < 0x10)
	{
		(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(fp - 0x5C)[(word32) dwLoc68_344.u0 + (eax_81 + 0x03)].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0] = (Eq_292) 0x20;
		dwLoc68_344 = (word32) dwLoc68_344.u0 + 1;
	}
	fn004110C8((word32) dwLoc68_344.u0 + ((fp - 0x5C) + (eax_81 + 0x03)), "|");
	Eq_2 eax_124 = printf("%s\n", fp - 0x5C);
	fn00411168(es, ds, fp - 0x5C);
	fn00411096(fp - 4, 0x00411600, es, ds, dwLoc0154_328);
	Eq_2 edx_168;
	fn00411023(eax_124, eax_26 ^ fp - 4, edx, ebx, fp - 4, esi, edi, es, ds, ebx, out edx_168);
	fn00411168(es, ds, eax_26);
	return edx_168;
}

// 004110C8: void fn004110C8(Stack (ptr32 char) ptrArg04, Stack (ptr32 char) ptrArg08)
// Called from:
//      fn004110C3
void fn004110C8(char * ptrArg04, char * ptrArg08)
{
	strcpy(ptrArg04, ptrArg08);
}

// 004110E1: Register (ptr32 Eq_308) fn004110E1(Stack (ptr32 Eq_309) dwArg04, Stack uint32 dwArg08)
// Called from:
//      fn0041119F
struct Eq_308 * fn004110E1(struct Eq_309 * dwArg04, uint32 dwArg08)
{
	struct Eq_311 * ecx_13 = dwArg04 + dwArg04->dw003C / 64;
	up32 dwLoc0C_59 = 0x00;
	struct Eq_308 * dwLoc10_60 = &ecx_13->w0014 + 2 + (word32) ecx_13->w0014 / 22;
	while (true)
	{
		struct Eq_308 * eax_28;
		if (dwLoc0C_59 >= (word32) ecx_13->w0006)
			break;
		if (dwArg08 >= dwLoc10_60->dw000C && dwArg08 < dwLoc10_60->dw000C + dwLoc10_60->dw0008)
		{
			eax_28 = dwLoc10_60;
			return eax_28;
		}
		++dwLoc0C_59;
		++dwLoc10_60;
	}
	eax_28 = null;
	return eax_28;
}

// 004110F0: Register Eq_2 fn004110F0(Register Eq_2 edx, Register Eq_2 ebx, Register Eq_2 esi, Register Eq_2 edi, Register (ptr16 Eq_9) es, Register (ptr16 Eq_10) ds, Stack Eq_2 dwArg04, Stack Eq_2 dwArg08)
// Called from:
//      fn00411096
Eq_2 fn004110F0(Eq_2 edx, Eq_2 ebx, Eq_2 esi, Eq_2 edi, struct Eq_9 * es, struct Eq_10 * ds, Eq_2 dwArg04, Eq_2 dwArg08)
{
	Eq_2 edi_196 = edi;
	ui32 eax_12 = g_dw417000 ^ fp - 4;
	Eq_2 eax_17 = dwArg08;
	if (g_dw417010 == ~0x00)
	{
l0041283E:
		word32 edx_436;
		fn00411023(eax_17, eax_12 ^ fp - 4, edx, ebx, fp - 4, esi, edi_196, es, ds, dwLoc0410, out edx_436);
		return edi_196;
	}
	Eq_370 ebx_154;
	dwLoc0410 = ebx;
	if (*dwArg08 != 0x00)
	{
		Eq_2 ecx_27 = dwArg08;
		do
		{
			ecx_27 = (word32) ecx_437 + 1;
			ecx_437 = ecx_27;
		} while (*ecx_437 != 0x00);
		if (ecx_27 - (dwArg08 + 0x01) <=u 0x03D3)
		{
			ebx_154 = fp - 0x0408;
			struct Eq_393 * ecx_45 = null;
			do
			{
				byte dl_52 = ecx_45[4283284];
				Mem54[fp - 0x0408 + ecx_45:byte] = dl_52;
				++ecx_45;
			} while (dl_52 != 0x00);
			do
			{
				eax_17 = (word32) eax_438 + 1;
				eax_438 = eax_17;
			} while (*eax_438 != 0x00);
			uint32 eax_79 = eax_17 - dwArg08;
			word32 edi_260 = fp - 0x0409 + 0x01;
			do
			{
				edi_260 = edi_439 + 1;
				edi_439 = edi_260;
			} while (edi_439->t0000 != 0x00);
			uint32 ecx_272;
			Eq_2 esi_257 = dwArg08;
			for (ecx_272 = eax_79 >> 0x02; ecx_272 != 0x00; --ecx_272)
			{
				edi_260->t0000 = *esi_257;
				esi_257 += 4;
				edi_260 += 4;
			}
			ui32 ecx_103;
			byte * eax_102 = &g_t415BB0;
			for (ecx_103 = eax_79 & 0x03; ecx_103 != 0x00; --ecx_103)
			{
				edi_260->t0000 = *esi_257;
				++esi_257;
				++edi_260;
			}
			do
			{
				eax_102 = eax_440 + 1;
				eax_440 = eax_102;
			} while (*eax_440 != 0x00);
			struct Eq_475 * esi_119 = &g_t415BB0;
			word32 edi_120 = fp - 0x0409 + 0x01;
			do
			{
				edi_120 = edi_441 + 1;
				edi_441 = edi_120;
			} while (edi_441->t0000 != 0x00);
			uint32 ecx_131;
			for (ecx_131 = eax_102 - 0x00415BB0 >> 0x02; ecx_131 != 0x00; --ecx_131)
			{
				edi_120->t0000.u1 = esi_119->dw0000;
				esi_119 += 4;
				edi_120 += 4;
			}
			ui32 ecx_136;
			for (ecx_136 = eax_102 - 0x00415BB0 & 0x03; ecx_136 != 0x00; --ecx_136)
			{
				edi_120->t0000.u1 = esi_119->dw0000;
				++esi_119;
				++edi_120;
			}
l00412824:
			eax_17 = fn004123F0(es, ds, dwArg04, g_dw417010, 0x02, ebx_154, out edx, out edi_196);
			goto l0041283E;
		}
	}
	ebx_154 = (Eq_370) &g_t415D4C;
	goto l00412824;
}

// 004110FF: void fn004110FF()
// Called from:
//      fn00411970
void fn004110FF()
{
	crt_debugger_hook();
}

// 00411104: Register word32 fn00411104(Stack (ptr32 Eq_546) dwArg04)
// Called from:
//      fn0041119F
word32 fn00411104(struct Eq_546 * dwArg04)
{
	word32 eax_31;
	if ((word32) dwArg04->w0000 != 23117)
		eax_31 = 0x00;
	else
	{
		struct Eq_554 * ecx_19 = dwArg04 + dwArg04->dw003C / 64;
		if (ecx_19->dw0000 != 0x4550)
			eax_31 = 0x00;
		else if ((word32) ecx_19->w0018 != 0x010B)
			eax_31 = 0x00;
		else
			eax_31 = 0x01;
	}
	return eax_31;
}

// 0041111D: Register word32 fn0041111D()
// Called from:
//      fn00411D70
word32 fn0041111D()
{
	return fn00412050();
}

// 00411136: Register Eq_578 Win32CrtStartup()
Eq_578 Win32CrtStartup()
{
	fn00411055();
	return fn00411D70(ebx, esi, es, ds);
}

// 00411163: Register word32 fn00411163(Register Eq_2 edx, Register Eq_2 ebx, Register Eq_2 esi, Register Eq_2 edi, Register (ptr16 Eq_9) es, Register (ptr16 Eq_10) ds, Stack Eq_2 dwArg04)
// Called from:
//      fn0041116D
word32 fn00411163(Eq_2 edx, Eq_2 ebx, Eq_2 esi, Eq_2 edi, struct Eq_9 * es, struct Eq_10 * ds, Eq_2 dwArg04)
{
	word32 * edi_19 = fp - 0x013C;
	word32 ecx_20;
	for (ecx_20 = 0x4E; ecx_20 != 0x00; --ecx_20)
	{
		*edi_19 = 0xCCCCCCCC;
		++edi_19;
	}
	Eq_2 eax_154;
	Eq_2 eax_26 = g_dw417000 ^ fp - 4;
	Eq_2 ebx_44;
	Eq_2 edi_46;
	if (fn00411860(es, ds, dwArg04, fp - 0x6C, out ebx_44, out edi_46) != 0x00)
	{
		perror(dwArg04);
		fn00411168(es, ds, dwArg04);
		eax_154.u0 = 0x01;
	}
	else
	{
		Eq_2 eax_62 = fopen(dwArg04, "rb");
		fn00411168(es, ds, 4282204);
		if (eax_62 == 0x00)
		{
			perror(dwArg04);
			fn00411168(es, ds, dwArg04);
			eax_154.u0 = 0x01;
		}
		else
		{
			Eq_2 dwLoc28_263;
			for (dwLoc28_263 = 0x00; dwLoc28_263 < dwLoc58; dwLoc28_263 += eax_91)
			{
				Eq_117 eax_91 = fread(fp - 0x1C, 0x01, 0x10, eax_62);
				fn00411168(es, ds, eax_62);
				dwLoc0154.u0 = 0x01;
				if (eax_91 == 0x00)
					break;
				dwLoc0154 = fp - 0x1C;
				edx = fn004110C3(fp - 0x1C, ebx_44, fp - 0x0148, edi_46, es, ds, fp - 0x1C, dwLoc28_263, eax_91);
			}
			fclose(eax_62);
			fn00411168(es, ds, eax_62);
			eax_154.u0 = 0x00;
		}
	}
	fn00411096(fp - 4, 0x004117DC, es, ds, dwLoc0154);
	word32 edx_313;
	word32 eax_221 = fn00411023(eax_154, eax_26 ^ fp - 4, edx, ebx, fp - 4, esi, edi, es, ds, ebx, out edx_313);
	fn00411168(es, ds, eax_26);
	return eax_221;
}

// 00411168: void fn00411168(Register (ptr16 Eq_9) es, Register (ptr16 Eq_10) ds, Stack Eq_2 dwArg00)
// Called from:
//      fn004110C3
//      fn00411163
//      fn0041116D
//      fn00411860
void fn00411168(struct Eq_9 * es, struct Eq_10 * ds, Eq_2 dwArg00)
{
	fn00411990(es, ds, dwArg00);
}

// 0041116D: Register word32 fn0041116D(Register Eq_2 ebx, Register Eq_2 esi, Register (ptr16 Eq_9) es, Register (ptr16 Eq_10) ds, Stack int32 dwArg04, Stack (arr Eq_2) dwArg08)
// Called from:
//      fn00411D70
word32 fn0041116D(Eq_2 ebx, Eq_2 esi, struct Eq_9 * es, struct Eq_10 * ds, int32 dwArg04, Eq_2 dwArg08[])
{
	Eq_2 edi_19 = fp - 220;
	word32 ecx_20;
	for (ecx_20 = 0x36; ecx_20 != 0x00; --ecx_20)
	{
		*edi_19 = 0xCCCCCCCC;
		edi_19 = (word32) edi_19 + 4;
	}
	word32 dwLoc18_104 = 0x00;
	int32 dwLoc0C_105;
	for (dwLoc0C_105 = 0x01; dwLoc0C_105 < dwArg04; ++dwLoc0C_105)
	{
		Eq_2 edx_57 = dwArg08[dwLoc0C_105];
		dwLoc18_104 = fn00411163(edx_57, ebx, esi, edi_19, es, ds, edx_57) + dwLoc18_104;
	}
	fn00411168(es, ds, dwLoc08);
	return dwLoc18_104;
}

// 00411190: Register word32 fn00411190(Register (ptr16 Eq_9) es, Register (ptr16 Eq_10) ds, Stack word32 dwArg04, Stack (ptr32 word16) dwArg08, Stack (ptr32 ui32) dwArg10, Stack Eq_771 dwArg14, Stack Eq_578 dwArg18, Register out ptr32 ediOut)
// Called from:
//      fn004123F0
word32 fn00411190(struct Eq_9 * es, struct Eq_10 * ds, word32 dwArg04, word16 * dwArg08, ui32 * dwArg10, Eq_771 dwArg14, Eq_578 dwArg18, ptr32 & ediOut)
{
	*dwArg10 = 0x00;
	*dwArg08 = 0x00;
	if (VirtualQuery(dwArg04 - 0x01, fp - 0x48, 0x1C) == 0x00 || GetModuleFileNameW(dwLoc44, dwArg14, dwArg18) == 0x00)
	{
l0041342F:
		ediOut = edi;
		return esi;
	}
	Eq_2 edx_112 = dwLoc44;
	if (*dwLoc44 != 23117)
		goto l0041342F;
	int32 eax_53 = *((word32) dwLoc44 + 60);
	if (eax_53 <= 0x00)
		goto l0041342F;
	struct Eq_818 * eax_56 = (word32) dwLoc44 + eax_53;
	if (eax_56->dw0000 != 0x4550)
		goto l0041342F;
	up32 ecx_59 = (word32) eax_56->w0006;
	word32 eax_66 = eax_56 + ((word32) eax_56->w0014 + 0x18) / 22;
	Eq_2 esi_67 = dwArg04 - 0x01 - dwLoc44;
	Eq_2 edi_107 = 0x00;
	up32 ebx_69 = 0x00;
	if (ecx_59 > 0x00)
	{
		struct Eq_848 * eax_74 = eax_66 + 0x0C;
		do
		{
			edx_112 = eax_74->dw0000;
			if (esi_67 >= edx_112)
			{
				edi_107 = esi_67 - edx_112;
				if (esi_67 < eax_74->dwFFFFFFFC)
					break;
			}
			++ebx_69;
			++eax_74;
		} while (ebx_69 < ecx_59);
	}
	if (ebx_69 != ecx_59)
	{
		Eq_2 eax_104;
		Eq_2 ebx_142 = ebx_69 + 0x01;
		if (g_b417558 != 0x00)
		{
			eax_104 = g_t417554;
			goto l004134CF;
		}
		if (g_t417554 != 0x00)
			goto l004134FB;
		eax_104 = fn00413770(edx_112, ebx_142, esi_67, edi_107, es, ds, out ebx_142, out edi_107);
		g_t417554 = eax_104;
		if (eax_104 != 0x00)
		{
			g_b417558 = 0x01;
l004134CF:
			Eq_2 eax_164 = GetProcAddress(eax_104, 0x00416158);
			Eq_786 esi_166 = 0x00;
			if (eax_164 != 0x00 && eax_164() != 0x00)
			{
				struct Eq_913 * eax_215 = *dwLoc14;
				struct Eq_918 * esp_218;
				word32 eax_219;
				eax_215->ptr0000();
				if (eax_219 == 20030901)
				{
					<anonymous> * eax_228 = *((char *) *dwLoc14 + 28);
					esp_218->ptrFFFFFFFC = fp - 0x1C;
					esp_218->dwFFFFFFF8 = 0x00416154;
					esp_218->dwFFFFFFF4 = 0x00;
					struct Eq_960 * esp_236;
					word32 eax_237;
					eax_228();
					if (eax_237 != 0x00)
					{
						<anonymous> * edx_247 = *((char *) *dwLoc1C + 32);
						esp_236->dwFFFFFFFC = 0x00;
						esp_236->dwFFFFFFF8 = 0x00;
						esp_236->dwFFFFFFF4 = 0x00;
						esp_236->ptrFFFFFFF0 = fp - 0x10;
						esp_236->tFFFFFFEC = edi_107;
						esp_236->tFFFFFFE8 = ebx_142;
						struct Eq_995 * esp_261;
						word32 eax_262;
						edx_247();
						if (eax_262 != 0x00)
						{
							<anonymous> * eax_273 = *((char *) *dwLoc10 + 0x0068);
							esp_261->ptrFFFFFFFC = fp - 0x08;
							word32 eax_278;
							eax_273();
							if ((byte) eax_278 != 0x00 && 0x00 != 0x00)
							{
								struct Eq_1033 * edx_290 = null;
								word32 eax_293;
								struct Eq_1037 * esp_292;
								edx_290->ptr0008();
								if (eax_293 != 0x00)
								{
									do
									{
										<anonymous> * edx_305 = *((char *) null + 0x0C);
										struct Eq_1080 * esp_307 = esp_292 - 4;
										esp_307->dw0000 = 0x00;
										esp_307->ptrFFFFFFFC = fp - 0x0C;
										esp_307->ptrFFFFFFF8 = fp - 0x24;
										esp_307->ptrFFFFFFF4 = fp + 0x04;
										esp_307->ptrFFFFFFF0 = fp - 0x18;
										esp_307->dwFFFFFFEC = 0x00;
										struct Eq_1111 * esp_333;
										word32 eax_334;
										edx_305();
										word16 wArg04_721 = (word16) dwArg04;
										if ((byte) eax_334 == 0x00)
											goto l0041368F;
										if ((word32) wArg04_721 == ebx_142 && (dwLoc18 <= edi_107 && edi_107 < (word32) dwLoc18 + dwLoc24))
										{
											if (dwLoc0C == 0x00 || dwLoc0C >= 0x1FFFFFFF)
												goto l0041368F;
											esp_333->tFFFFFFFC = dwLoc0C * 0x08;
											esp_333->tFFFFFFF8.u0 = 0x00;
											esp_333->tFFFFFFF4 = GetProcessHeap();
											Eq_786 eax_367 = HeapAlloc(esp_333->tFFFFFFF4, esp_333->tFFFFFFF8, esp_333->tFFFFFFFC);
											esi_166 = eax_367;
											if (eax_367 == 0x00)
												goto l0041368F;
											<anonymous> * edx_375 = *((char *) null + 0x0C);
											esp_333->tFFFFFFFC = eax_367;
											esp_333->tFFFFFFF8 = fp - 0x0C;
											esp_333->tFFFFFFF4 = null;
											esp_333->dwFFFFFFF0 = 0x00;
											esp_333->dwFFFFFFEC = 0x00;
											esp_333->ptrFFFFFFE8 = fp - 0x28;
											word32 eax_391;
											edx_375();
											if ((byte) eax_391 != 0x00)
											{
												uint32 edi_400 = edi_107 - dwLoc18;
												if (edi_400 >= *eax_367)
												{
													uint32 eax_404 = 0x01;
													if (dwLoc0C > 0x01)
													{
														while (edi_400 >= *((word32) eax_367 + eax_404 * 0x08))
														{
															++eax_404;
															if (eax_404 >= dwLoc0C)
																break;
														}
													}
													uint32 eax_421 = *((word32) (eax_367 - 0x04) + eax_404 * 0x08);
													esp_292->dwFFFFFFFC = 0x00;
													*dwArg10 = eax_421 & 0x00FFFFFF;
													<anonymous> * edx_435 = *((char *) *dwLoc10 + 112);
													esp_292->dwFFFFFFF8 = 0x00;
													esp_292->dwFFFFFFF4 = 0x00;
													esp_292->ptrFFFFFFF0 = fp + 0x0C;
													esp_292->ptrFFFFFFEC = dwArg08;
													esp_292->dwFFFFFFE8 = dwLoc28;
													word32 eax_467;
													edx_435();
												}
											}
											break;
										}
										struct Eq_1033 * edx_480 = null;
										word32 eax_494;
										edx_480->ptr0008();
									} while (eax_494 != 0x00);
								}
								struct Eq_1043 * esp_503 = esp_292 - 4;
								esp_503->t0000 = esi_166;
								esp_503->tFFFFFFFC.u0 = 0x00;
								esp_503->tFFFFFFF8 = GetProcessHeap();
								HeapFree(esp_503->tFFFFFFF8, esp_503->tFFFFFFFC, esp_503->t0000);
l0041368F:
								struct Eq_1033 * eax_517 = null;
								eax_517->ptr0000();
							}
							struct Eq_1010 * eax_548 = *dwLoc10;
							eax_548->ptr0040();
						}
						struct Eq_968 * eax_570 = *dwLoc1C;
						eax_570->ptr0038();
					}
				}
				struct Eq_913 * eax_592 = *dwLoc14;
				struct Eq_929 * esp_605;
				eax_592->ptr0028();
				word32 esi_616 = esp_605->dw0008;
				ediOut = esp_605->ptr0000;
				return esi_616;
			}
			goto l004134FB;
		}
	}
l004134FB:
	ediOut = edi;
	return esi;
}

// 0041119F: Register ui32 fn0041119F(Stack ui32 dwArg04)
// Called from:
//      fn00411D70
ui32 fn0041119F(ui32 dwArg04)
{
	ui32 eax_145;
	ptr32 eax_17 = fs->ptr0000;
	fs->ptr0000 = fp - 0x14;
	if (fn00411104(&g_t400000) == 0x00)
		eax_145 = 0x00;
	else
	{
		struct Eq_1293 * eax_67 = fn004110E1(&g_t400000, dwArg04 - 0x00400000);
		if (eax_67 == null)
			eax_145 = 0x00;
		else
			eax_145 = !(eax_67->dw0024 & 0x80000000);
	}
	fs->ptr0000 = eax_17;
	return eax_145;
}

// 004111A9: void fn004111A9(Stack int32 dwArg04)
// Called from:
//      fn00411D70
void fn004111A9(int32 dwArg04)
{
	_amsg_exit(dwArg04);
}

// 004111E0: void fn004111E0(Register (ptr16 Eq_9) es, Register (ptr16 Eq_10) ds, Stack Eq_2 dwArg04, Stack uint32 dwArg08)
// Called from:
//      fn00411990
void fn004111E0(struct Eq_9 * es, struct Eq_10 * ds, Eq_2 dwArg04, uint32 dwArg08)
{
	if (dwArg08 > 0x04)
	{
		word32 edx_133;
		word32 edi_134;
		fn004123F0(es, ds, dwArg04, 0x01, 0x05, &g_t415844, out edx_133, out edi_134);
	}
	else
	{
		word32 ecx_47 = g_a417008[dwArg08 * 0x04];
		Eq_370 edx_48 = *((char *) g_a415B64 + dwArg08 * 0x04);
		if (ecx_47 != ~0x00)
		{
			word32 edx_135;
			word32 edi_136;
			fn004123F0(es, ds, dwArg04, ecx_47, dwArg08, edx_48, out edx_135, out edi_136);
		}
	}
}

// 004111FE: Register int32 fn004111FE(Stack (ptr32 Eq_1351) ptrArg04, Stack (ptr32 Eq_1352) ptrArg08)
// Called from:
//      fn00411D70
int32 fn004111FE(PVFV * ptrArg04, PVFV * ptrArg08)
{
	return _initterm_e(ptrArg04, ptrArg08);
}

// 00411203: Register word32 fn00411203()
// Called from:
//      fn004123F0
word32 fn00411203()
{
	return fn00412C90();
}

// 00411860: Register word32 fn00411860(Register (ptr16 Eq_9) es, Register (ptr16 Eq_10) ds, Stack Eq_2 dwArg04, Stack ptr32 dwArg08, Register out ptr32 ebxOut, Register out ptr32 ediOut)
// Called from:
//      fn00411163
word32 fn00411860(struct Eq_9 * es, struct Eq_10 * ds, Eq_2 dwArg04, ptr32 dwArg08, ptr32 & ebxOut, ptr32 & ediOut)
{
	word32 * edi_19 = fp - 0xC4;
	word32 ecx_20;
	for (ecx_20 = 0x30; ecx_20 != 0x00; --ecx_20)
	{
		*edi_19 = 0xCCCCCCCC;
		++edi_19;
	}
	struct Eq_1369 * esp_36;
	word32 eax_38;
	stat64i32();
	fn00411168(es, ds, esp_36->t0004);
	ptr32 edi_54 = esp_36->ptr0008;
	ptr32 ebx_58 = esp_36->ptr0010;
	fn00411168(es, ds, esp_36->t00D0);
	ebxOut = ebx_58;
	ediOut = edi_54;
	return eax_38;
}

// 00411970: Register Eq_2 fn00411970(Register Eq_2 eax, Register ui32 ecx, Register Eq_2 edx, Register Eq_2 ebx, Register Eq_6 ebp, Register Eq_2 esi, Register Eq_2 edi, Register (ptr16 Eq_9) es, Register (ptr16 Eq_10) ds, Stack Eq_2 dwArg00, Register out Eq_2 edxOut)
// Called from:
//      fn00411023
Eq_2 fn00411970(Eq_2 eax, ui32 ecx, Eq_2 edx, Eq_2 ebx, Eq_6 ebp, Eq_2 esi, Eq_2 edi, struct Eq_9 * es, struct Eq_10 * ds, Eq_2 dwArg00, union Eq_2 & edxOut)
{
	if (ecx != g_dw417000)
	{
		g_t417278 = eax;
		g_dw417274 = ecx;
		g_t417270 = edx;
		g_t41726C = ebx;
		g_t417268 = esi;
		g_t417264 = edi;
		g_ptr417290 = ss;
		g_ptr417284 = cs;
		g_ptr417260 = ds;
		g_ptr41725C = es;
		g_ptr417258 = fs;
		g_ptr417254 = gs;
		g_t417288 = cond(fp - 0x032C) | SCZDOP;
		g_t41727C = ebp;
		g_t417280 = dwArg00;
		g_ptr41728C = fp + 0x04;
		g_dw4171C8 = 0x00010001;
		g_t41717C = g_t417280;
		g_dw417170 = 0xC0000409;
		g_dw417174 = 0x01;
		Eq_2 edx_58 = g_t417004;
		g_t4171C0 = IsDebuggerPresent();
		fn004110FF();
		SetUnhandledExceptionFilter(null);
		UnhandledExceptionFilter(&g_t415838);
		if (g_t4171C0 == 0x00)
			fn004110FF();
		Eq_2 eax_85 = TerminateProcess(GetCurrentProcess(), 0xC0000409);
		edxOut = edx_58;
		return eax_85;
	}
	else
	{
		edxOut = edx;
		return eax;
	}
}

// 00411990: void fn00411990(Register (ptr16 Eq_9) es, Register (ptr16 Eq_10) ds, Stack Eq_2 dwArg00)
// Called from:
//      fn00411168
void fn00411990(struct Eq_9 * es, struct Eq_10 * ds, Eq_2 dwArg00)
{
	if (!Z)
		return;
	fn004111E0(es, ds, dwArg00, 0x00);
}

// 00411D70: Register int32 fn00411D70(Register Eq_2 ebx, Register Eq_2 esi, Register (ptr16 Eq_9) es, Register (ptr16 Eq_10) ds)
// Called from:
//      Win32CrtStartup
int32 fn00411D70(Eq_2 ebx, Eq_2 esi, struct Eq_9 * es, struct Eq_10 * ds)
{
	ptr32 eax_17 = fs->ptr0000;
	fs->ptr0000 = fp - 0x14;
	Eq_1481 eax_44 = fn0041111D()->t0004;
	word32 dwLoc20_324 = 0x00;
	while (true)
	{
		Eq_1481 eax_56 = InterlockedCompareExchange(&g_t417570, eax_44, 0x00);
		if (eax_56 == 0x00)
			break;
		if (eax_56 == eax_44)
		{
			dwLoc20_324 = 0x01;
			break;
		}
		Sleep(1000);
	}
	if (g_dw417560 == 0x01)
		fn004111A9(0x1F);
	int32 eax_288;
	if (g_dw417560 == 0x00)
	{
		g_dw417560 = 0x01;
		if (fn004111FE(&g_t41530C, &g_t415618) != 0x00)
		{
			eax_288 = 0xFF;
			goto l00411FA4;
		}
	}
	else
		g_dw417160 = 0x01;
	if (g_dw417560 == 0x01)
	{
		fn004110B9(&g_t415000, &g_t415208);
		g_dw417560 = 0x02;
	}
	struct Eq_1563 * esp_105 = fp + ~0x3F;
	if (g_dw417560 != 0x02)
	{
		word32 esp_138;
		word32 eax_139;
		word32 edx_141;
		CrtDbgReportW();
		esp_105 = esp_138 + 0x14;
		if (eax_139 == 0x01)
			int3();
	}
	if (dwLoc20_324 == 0x00)
	{
		struct Eq_1597 * esp_152 = esp_105 - 4;
		esp_152->t0000 = 0x00;
		esp_152->ptrFFFFFFFC = &g_t417570;
		InterlockedExchange(esp_152->ptrFFFFFFFC, esp_152->t0000);
	}
	struct Eq_1563 * esp_161 = esp_105;
	if (g_ptr417594 != null)
	{
		struct Eq_1673 * esp_162 = esp_105 - 4;
		esp_162->dw0000 = 4289940;
		esp_161 = (struct Eq_1563 *) (&esp_162->dw0000 + 1);
		if (fn0041119F(esp_162->dw0000) != 0x00)
		{
			esp_162->dw0000 = 0x00;
			esp_162->dwFFFFFFFC = 0x02;
			esp_162->dwFFFFFFF8 = 0x00;
			word32 edx_195;
			g_ptr417594();
		}
	}
	esp_161->dwFFFFFFFC = 0x01;
	struct Eq_1633 * esp_207;
	CrtSetCheckCount();
	*_initenv = g_dw417148;
	esp_207->dw0000 = g_dw417148;
	esp_207->ptrFFFFFFFC = g_ptr41714C;
	esp_207->dwFFFFFFF8 = g_dw417144;
	g_dw41715C = fn0041116D(ebx, esi, es, ds, esp_207->dwFFFFFFF8, esp_207->ptrFFFFFFFC);
	if (g_dw417150 == 0x00)
	{
		esp_207->dw0000 = g_dw41715C;
		exit(esp_207->dw0000);
	}
	if (g_dw417160 == 0x00)
	{
		word32 edx_283;
		cexit();
	}
	eax_288 = g_dw41715C;
l00411FA4:
	fs->ptr0000 = eax_17;
	return eax_288;
}

// 00412050: Register word32 fn00412050()
// Called from:
//      fn0041111D
word32 fn00412050()
{
	return fs->dw0018;
}

// 004122D0: Register word32 fn004122D0(Register out ptr32 edxOut)
// Called from:
//      fn004123F0
word32 fn004122D0(ptr32 & edxOut)
{
	ptr32 eax_17 = fs->ptr0000;
	fs->ptr0000 = fp - 0x14;
	RaiseException(1080890248, 0x00, 0x06, fp - 0x38);
	fs->ptr0000 = eax_17;
	edxOut = fp - 0x1D;
	return 0x00;
}

// 004123F0: Register word32 fn004123F0(Register (ptr16 Eq_9) es, Register (ptr16 Eq_10) ds, Stack Eq_2 dwArg04, Stack word32 dwArg08, Stack uint32 dwArg0C, Stack Eq_370 dwArg10, Register out ptr32 edxOut, Register out Eq_2 ediOut)
// Called from:
//      fn004110F0
//      fn004111E0
word32 fn004123F0(struct Eq_9 * es, struct Eq_10 * ds, Eq_2 dwArg04, word32 dwArg08, uint32 dwArg0C, Eq_370 dwArg10, ptr32 & edxOut, union Eq_2 & ediOut)
{
	ui32 eax_12 = g_dw417000 ^ fp - 4;
	word32 dwLoc0E3C_438 = 0x00;
	word32 eax_30 = fn0041103C();
	if (eax_30 == 0x00)
		dwLoc0E3C_438 = fn00411203();
	Eq_1774 eax_57 = MultiByteToWideChar(65001, 0x00, dwArg10, ~0x00, null, 0x00);
	if (eax_57 >= 0x0200 || MultiByteToWideChar(65001, 0x00, dwArg10, ~0x00, fp + ~0x0E2F, eax_57) == 0x00)
		;
	Eq_2 eax_581;
	Eq_2 eax_119;
	union Eq_2 * esp_126;
	Eq_2 edx_121;
	word32 eax_92 = fn004122D0(out edx_121);
	word24 eax_24_8_392 = SLICE(eax_92, word24, 8);
	if (eax_92 != 0x00)
	{
		eax_119 = fn00412680(out edx_121);
		word24 eax_24_8_391 = SLICE(eax_119, word24, 8);
		esp_126 = fp - 3660;
		if (eax_119 != 0x00)
			goto l004125E6;
		eax_581 = SEQ(eax_24_8_391, 0x00);
	}
	else
		eax_581 = SEQ(eax_24_8_392, 0x01);
	esp_126 = fp - 3660;
	byte al_142 = (byte) eax_581;
	if (dwLoc0E3C_438 == 0x00)
	{
		eax_119 = eax_581;
		if (eax_30 == 0x00)
			goto l004125E0;
	}
	if (al_142 != 0x00)
	{
		eax_119 = IsDebuggerPresent();
		if (eax_119 != 0x00)
			goto l004125E0;
	}
	ptr32 esp_327;
	word32 edi_217;
	<anonymous> * esi_218 = fn00411190(es, ds, (word32) dwArg04 - 5, fp - 0x0210, fp + ~0x0E33, fp - 0x0418, 0x0104, out edi_217);
	if (esi_218 != null)
	{
		esi_218();
		esp_327 = fp - 3688;
	}
	else
	{
		ptr32 ebx_248 = 4283488;
		if (WideCharToMultiByte(65001, 0x00, fp - 0x0210, ~0x00, fp + ~0x0A2F, 778, null, null) != 0x00)
			ebx_248 = fp + ~0x0A2F;
		ptr32 esi_275 = 4283464;
		if (WideCharToMultiByte(65001, 0x00, fp - 0x0418, ~0x00, fp - 1828, 778, null, null) != 0x00)
			esi_275 = fp - 1828;
		fn00000000();
	}
	esp_126 = esp_327 + 0x1C;
	if (eax_119 != 0x01)
	{
l004125E6:
		struct Eq_1829 * esp_380 = (char *) esp_126 + 4;
		Eq_2 edi_379 = *esp_126;
		ptr32 edx_419;
		word32 eax_417 = fn00411023(eax_119, eax_12 ^ fp - 4, edx_121, esp_380->t0004, fp - 4, esp_380->t0000, edi_379, es, ds, esp_380->t0004, out edx_419);
		edxOut = edx_419;
		ediOut = edi_379;
		return eax_417;
	}
l004125E0:
	DebugBreak();
	goto l004125E6;
}

// 00412680: Register word32 fn00412680(Register out ptr32 edxOut)
// Called from:
//      fn004123F0
word32 fn00412680(ptr32 & edxOut)
{
	ptr32 eax_17 = fs->ptr0000;
	fs->ptr0000 = fp - 0x14;
	RaiseException(1080890248, 0x00, 0x06, fp - 0x38);
	fs->ptr0000 = eax_17;
	edxOut = fp - 0x38;
	return 0x00;
}

// 00412C90: Register word32 fn00412C90()
// Called from:
//      fn00411203
word32 fn00412C90()
{
	return g_dw417538;
}

// 00412CA0: Register word32 fn00412CA0()
// Called from:
//      fn0041103C
word32 fn00412CA0()
{
	return g_dw41753C;
}

// 00413000: void fn00413000()
// Called from:
//      fn00411055
void fn00413000()
{
	if (g_dw417000 != 0xBB40E64E && (g_dw417000 & 0xFFFF0000) != 0x00)
		g_t417004 = ~g_dw417000;
	else
	{
		GetSystemTimeAsFileTime(fp - 0x0C);
		ui32 eax_38 = GetTickCount() ^ (GetCurrentThreadId() ^ GetCurrentProcessId());
		QueryPerformanceCounter(fp - 0x1C);
		ui32 ecx_49 = eax_38 ^ dwLoc1C ^ dwLoc18;
		ui32 dwLoc10_100 = ecx_49;
		if (ecx_49 == 0xBB40E64E)
			dwLoc10_100 = ~0x44BF19B0;
		else if ((ecx_49 & 0xFFFF0000) == 0x00)
			dwLoc10_100 = ecx_49 << 0x10 | ecx_49;
		g_dw417000 = dwLoc10_100;
		g_t417004 = ~dwLoc10_100;
	}
}

// 00413770: Register word32 fn00413770(Register Eq_2 edx, Register Eq_2 ebx, Register Eq_2 esi, Register Eq_2 edi, Register (ptr16 Eq_9) es, Register (ptr16 Eq_10) ds, Register out Eq_2 ebxOut, Register out Eq_2 ediOut)
// Called from:
//      fn00411190
word32 fn00413770(Eq_2 edx, Eq_2 ebx, Eq_2 esi, Eq_2 edi, struct Eq_9 * es, struct Eq_10 * ds, union Eq_2 & ebxOut, union Eq_2 & ediOut)
{
	Eq_2 edi_172 = edi;
	ui32 eax_12 = g_dw417000 ^ fp - 4;
	if (g_dw41755C != 0x00)
	{
		word32 edx_439;
		word32 eax_347 = fn00411023(0x00, eax_12 ^ fp - (byte (*)[]) 4, edx, ebx, fp - (byte (*)[]) 4, esi, edi, es, ds, dwLoc0120, out edx_439);
		ebxOut = ebx;
		ediOut = edi;
		return eax_347;
	}
	Eq_903 eax_16 = g_t417034;
	g_dw41755C = 0x01;
	Eq_2 eax_174 = LoadLibraryA(eax_16);
	union Eq_2 * esp_178 = fp - 288;
	if (eax_174 != 0x00)
	{
l00413937:
		word32 edx_440;
		word32 eax_221 = fn00411023(eax_174, eax_12 ^ fp - (byte (*)[]) 4, edx, ebx, fp - (byte (*)[]) 4, *esp_178, edi_172, es, ds, *esp_178, out edx_440);
		ebxOut = ebx;
		ediOut = edi_172;
		return eax_221;
	}
	Eq_2 eax_31 = LoadLibraryA(0x004161F4);
	if (eax_31 == 0x00)
	{
		word32 edx_441;
		word32 eax_330 = fn00411023(eax_31, eax_12 ^ fp - (byte (*)[]) 4, edx, ebx, fp - (byte (*)[]) 4, esi, edi, es, ds, esi, out edx_441);
		ebxOut = ebx;
		ediOut = edi;
		return eax_330;
	}
	Eq_2 eax_45 = GetProcAddress(eax_31, 0x004161E4);
	if (eax_45 == 0x00)
	{
		word32 edx_442;
		word32 eax_312 = fn00411023(eax_45, eax_12 ^ fp - (byte (*)[]) 4, edx, ebx, fp - (byte (*)[]) 4, esi, edi, es, ds, esi, out edx_442);
		ebxOut = ebx;
		ediOut = edi;
		return eax_312;
	}
	Eq_2 eax_57 = GetProcAddress(eax_31, 4284880);
	union Eq_2 * esp_130 = fp - 0x0128;
	if (eax_57 == 0x00)
	{
l00413933:
		union Eq_2 * esp_173 = (char *) esp_130 + 4;
		edi_172 = *esp_130;
		eax_174.u0 = 0x00;
		ebx = *esp_173;
		esp_178 = (union Eq_2 *) ((char *) esp_173 + 4);
		goto l00413937;
	}
	else
	{
		Eq_2 eax_67 = GetProcAddress(eax_31, 4284864);
		esp_130 = fp - 0x0128;
		if (eax_67 == 0x00)
			goto l00413933;
		edx.u0 = <invalid>;
		ptr32 esp_108 = fp - 0x013C;
		if (eax_45() == 0x00)
		{
			edx.u0 = <invalid>;
			esp_108 = fp - 0x0154;
			if (eax_57() == 0x00)
			{
				edx = 0x7FFFFFFF - dwLoc0110;
				if (edx >= 0x0D && dwLoc0110 < 0xF7)
				{
					int32 eax_148 = eax_57();
					eax_67();
					edx.u0 = <invalid>;
					FreeLibrary(eax_31);
					word24 edx_24_8_278 = SLICE(edx, word24, 8);
					esp_130 = fp - 0x0170;
					if (eax_148 == 0x00)
					{
						Eq_2169 ecx_233 = dwLoc0110;
						if (*((word32) dwLoc0110 + (fp - 0x010E)) != 0x5C)
							Mem240[fp - 0x010D + dwLoc0110:byte] = 0x5C;
						else
							ecx_233 = dwLoc0110 - 0x01;
						Eq_903 esi_242 = g_t417034;
						Eq_2203 eax_243 = 0x00;
						word32 ecx_248 = fp - 0x010C + ecx_233;
						do
						{
							byte dl_252 = Mem251[esi_242 + eax_243:byte];
							Mem254[ecx_248 + eax_243:byte] = dl_252;
							++eax_243;
							Eq_2 edx_279 = SEQ(edx_24_8_278, dl_252);
						} while (eax_243 <= 11);
						word32 edx_443;
						word32 eax_292 = fn00411023(LoadLibraryA(fp - 0x010C), eax_12 ^ fp - (byte (*)[]) 4, edx_279, dwLoc0114, fp - (byte (*)[]) 4, 0x0041616C, dwLoc0114, es, ds, 0x0041616C, out edx_443);
						ebxOut = dwLoc0114;
						ediOut = dwLoc0114;
						return eax_292;
					}
					goto l00413933;
				}
			}
		}
		union Eq_2 * esp_126 = esp_108 - 4;
		*esp_126 = (union Eq_2 *) eax_31;
		FreeLibrary(*esp_126);
		esp_130 = (union Eq_2 *) ((char *) esp_126 + 4);
		goto l00413933;
	}
}

