// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 00401000: void fn00401000()
// Called from:
//      Win32CrtStartup
void fn00401000()
{
	Eq_2 edx_12 = g_t402104;
	cu8 bl_23 = 0x00;
	do
	{
		if (bl_23 >= 0x80)
			*edx_12 = bl_23 << 0x01;
		struct Eq_7 * edx_15 = (word32) edx_12 + 1;
		edx_15->b0000 = bl_23 << 0x01;
		edx_15->b0001 = bl_23 << 0x01;
		edx_12 = &edx_15->b0001 + 2;
		++bl_23;
	} while (bl_23 != 0x00);
}

// 00401020: void fn00401020()
// Called from:
//      Win32CrtStartup
void fn00401020()
{
	Eq_31 edi_33 = g_t402124;
	cui16 cx_91 = 0x0200;
	do
	{
		*edi_33 = g_a402146[(uint32) (((word16) SLICE(cx_94, byte, 8) << 0x06) + cx_94)];
		edi_33 = (word32) edi_33 + 1;
		cx_91 = cx_94 + 0x01;
		cx_94 = cx_91;
	} while (cx_94 != 0x0AFF);
}

// 00401052: void fn00401052()
// Called from:
//      Win32CrtStartup
void fn00401052()
{
	Eq_55 Top_3 = 0;
	++g_w402140;
	word16 eax_16_16_233 = 0x00;
	byte bl_311 = 0x00;
	byte bh_318 = 0x00;
	do
	{
		byte al_42 = bl_311;
		int16 dx_43 = 0xF200;
		do
		{
			int16 ax_46 = (int16) (al_42 - 0x80);
			g_w402144 = ax_46;
			bi8 al_48 = (byte) ax_46;
			--Top_3;
			*Top_3 = (real64) g_w402144;
			dx_43 -= al_48 *s al_48;
			ptr32 ebx_138 = SEQ(0x00, bh_318, bl_311);
			cu8 dh_73 = SLICE(dx_43, byte, 8);
			al_42 = bh_318;
			word16 bx_148 = (word16) ebx_138;
		} while (P);
		*((word32) Top_3 + 1) = atan(*((word32) Top_3 + 2), *((word32) Top_3 + 1));
		*((word32) Top_3 + 1) *= (real64) g_w40213E;
		g_w402144 = (int16) *((word32) Top_3 + 1);
		int16 ax_67 = g_w402144;
		g_w402144 = dx_43;
		bcu8 ah_70 = SLICE(ax_67 + g_w40213F, byte, 8);
		cui16 ax_75 = SEQ(ah_70, dh_73);
		Top_3 = (word32) Top_3 + 2;
		uint8 cl_109 = 0x00;
		byte dh_107 = (byte) (ax_75 & 0x0707) + SLICE(ax_75 & 0x0707, byte, 8) + dh_73;
		if (dh_73 <= ~0x13 && dh_73 >= ~0x14)
		{
			cl_109 = ah_70 >> 0x01;
			dh_107 = SLICE(g_w402144 << 0x05, byte, 8) + 0x60;
		}
		if (dh_73 <= ~0x19)
		{
			word16 cx_110 = SEQ(ah_70 & 0x1F, cl_109);
			if ((ah_70 & 0x1F) <= 0x03)
			{
				if (dh_73 >= 229)
				{
					dh_107 = __ror(dh_73, 0x03) + 0x1E;
					--cx_110;
				}
				dh_107 -= 0x14;
			}
			cl_109 = (byte) cx_110;
			if (dh_73 <= 0xB2)
				cl_109 = (byte) (cx_110 - 0x01);
		}
		*((char *) g_t40211C + ebx_138) = (Eq_163) cl_109;
		*((word32) g_t402120 + ebx_138) = dh_107 + 0x80;
		bl_311 = (byte) (bx_148 + 0x01);
		bh_318 = SLICE(bx_148 + 0x01, byte, 8);
	} while (bx_148 != 0x01);
	ptr32 edi_152 = 0x0003E800;
	word16 si_153;
	for (si_153 = 100; si_153 != ~0x63; --si_153)
	{
		g_w402142 = ~0x9F;
		do
		{
			int32 dx_ax_164 = (int32) (int16) (byte) (g_w402140 << 0x01);
			bi8 al_169 = ((byte) dx_ax_164 & 0x7F) - 0x40;
			int16 ax_170 = al_169 *s al_169;
			ui16 ax_175 = SEQ(SLICE(ax_170, byte, 8) - 0x10, (byte) ax_170);
			ui16 dx_176 = SLICE(dx_ax_164, word16, 16) ^ ax_175;
			word16 cx_159 = 0x7F40;
			word16 di_185 = SEQ(SLICE(ax_175 * 0x02, byte, 8) - 0x01, (byte) (ax_175 * 0x02));
			word16 dx_189 = SEQ(SLICE(dx_176, byte, 8) + 0x20, (byte) dx_176);
			do
			{
				cx_159 += g_w402142;
				di_185 -= 0xA0;
				int32 ebx_200 = SEQ(0x00, SLICE(di_185, byte, 8), SLICE(cx_159, byte, 8));
				word16 dx_191 = dx_189 + si_153;
				Eq_235 ah_201 = *((char *) g_t40211C + ebx_200);
				Eq_236 al_203 = *((word32) g_t402120 + ebx_200);
				cu8 dh_209 = SLICE(dx_191, byte, 8);
				ui32 eax_231 = SEQ(eax_16_16_233, ah_201, al_203);
				if (ah_201 < 0x00)
					break;
				word16 ax_238 = SEQ(ah_201, al_203);
				if (ah_201 != 0x00)
				{
					byte ah_214 = *((word32) g_t402124 + SEQ(0x00, dh_209 >> 0x01, ah_201));
					word24 eax_24_8_235 = SEQ(eax_16_16_233, ah_214);
					ax_238 = SEQ(ah_214, al_203);
					if (ah_214 != 0x00)
					{
						eax_231 = SEQ(eax_24_8_235, (al_203.a0000 + 0x0080).a0000.a0000.a0000.a0000.a0000.a0000.a0000.a0000.a0000.a0000.a0000.a0000.a0000.a0000.a0000.a0000.a0000.a0000.a0000);
						break;
					}
				}
				eax_231 = SEQ(eax_16_16_233, ax_238);
				dx_189 = dx_191;
			} while (dh_209 <= 0x46);
			word32 eax_245 = *((word32) g_t402104 + (eax_231 & 0xFF) * 0x04);
			*((word32) g_t402100 + edi_152) = eax_245;
			++g_w402142;
			eax_16_16_233 = SLICE(eax_245, word16, 16);
			edi_152 -= 0x04;
		} while (g_w402142 != 0xA0);
	}
	GetClientRect(g_t4020CC, &g_t4020F0);
	StretchDIBits(g_t4020D0, 0x00, 0x00, g_dw4020F8, g_dw4020FC, 0x00, 0x00, 0x0140, 200, g_t402100, &g_t40206C, 0x00, 0x00CC0020);
}

// 00401230: Register Eq_333 Win32CrtStartup()
Eq_333 Win32CrtStartup()
{
	Eq_2 eax_8 = GlobalAlloc(0x00, 1000000);
	if (eax_8 != 0x00)
	{
		g_t40210C = eax_8;
		g_t402104 = eax_8;
		Mem16[0x00402100<p32>:word32] = eax_8 + 2000;
		Mem18[0x0040211C<p32>:word32] = eax_8 + 402000;
		Mem20[0x00402120<p32>:word32] = eax_8 + 602000;
		Mem23[0x00402124<p32>:word32] = eax_8 + 702000;
		word32 ebx_24;
		for (ebx_24 = 499999; ebx_24 != 0x00; --ebx_24)
			*g_t40210C = 0x00;
		g_t4020B4 = GetModuleHandleW(null);
		g_t4020B8 = LoadIconW(0x00, (WCHAR *) 0x7F00);
		Eq_448 eax_53 = LoadCursorW(0x00, (WCHAR *) 0x7F00);
		g_t4020BC = eax_53;
		if (SEQ(SLICE(eax_53, word16, 16), RegisterClassW(&g_t4020A4)) != 0x00)
		{
			Eq_313 eax_90 = CreateWindowExW(0x00, &g_t402000, &g_t402012, 0x10CF0000, 0x8000, 0x8000, 0x021C, 400, null, null, g_t4020B4, null);
			if (eax_90 != null)
			{
				g_t4020CC = eax_90;
				g_t4020D0 = GetDC(eax_90);
				fn00401000();
				fn00401020();
				fn00401052();
				SetStretchBltMode(g_t4020D0, 0x04);
				while (true)
				{
					PeekMessageW(&g_t4020D4, null, 0x00, 0x00, 0x01);
					if (g_dw4020D8 == 0x12)
						break;
					TranslateMessage(&g_t4020D4);
					DispatchMessageW(&g_t4020D4);
					fn00401052();
					++g_dw402108;
				}
l0040138C:
				ReleaseDC(g_t4020CC, g_t4020D0);
				GlobalFree(g_t40210C);
				ExitProcess(g_t4020DC);
			}
		}
	}
	MessageBoxW(null, &g_t40204C, null, 0x10);
	goto l0040138C;
}

