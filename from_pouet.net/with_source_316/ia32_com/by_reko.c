// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register word16 eax_16_16, Register byte ch, Register word16 ecx_16_16, Register word16 ebx_16_16, Register word16 esp_16_16, Register (ptr16 Eq_7) ds, FpuStack real64 rArg0)
void fn0C00_0100(word16 eax_16_16, byte ch, word16 ecx_16_16, word16 ebx_16_16, word16 esp_16_16, struct Eq_7 * ds, real64 rArg0)
{
	struct Eq_9 Eq_87::* sp_101 = fp;
	__syscall(0x10);
	__outb(0x03C8, 0x00);
	word16 cx_210 = SEQ(ch, ~0x00);
	do
	{
		byte al_11 = ~(byte) cx_213;
		__outb(969, al_11);
		__outb(969, al_11);
		__outb(969, 0x00);
		cx_210 = cx_213 - 0x01;
		cx_213 = cx_210;
	} while (cx_213 != 0x01);
	struct Eq_44 * es_129 = (char *) ds + 100;
	do
	{
		ds->w02E9 = 0x00;
		ds->w02E5 = 0x00;
		ds->w02E7 = 0x00;
		word16 Eq_44::* di_145 = Eq_44::a0000;
		word16 cx_148;
		for (cx_148 = 0x7B0C; cx_148 != 0x00; --cx_148)
		{
			es_129->*di_145 = 0x00;
			++di_145;
		}
		ds->w02CF = 0x09;
		ds->w02D7 += 0x04;
		ds->w02D9 += 0x06;
		ds->w02DB += 0x03;
		do
		{
			ds->w02E7 += 0xB3;
			ds->w02E9 += 0x7D;
			word16 bp_102;
			for (bp_102 = 1100; bp_102 != 0x00; --bp_102)
			{
				ds->w02E5 += 0x03;
				struct Eq_82 Eq_87::* sp_57 = sp_101 - 2;
				(ss->*sp_57).w0000 = ds->w02E7;
				(ss->*sp_57).wFFFFFFFE = ds->w02E5;
				word32 esp_74 = <invalid>;
				word32 ebx_72;
				word32 ecx_73;
				word16 eax_16_16_88 = SLICE(fn0C00_01E1(eax_16_16, ecx_16_16, ebx_16_16, esp_16_16, es_129, ds, rArg0, out ecx_73, out ebx_72), word16, 16);
				struct Eq_116 Eq_87::* sp_79 = (word16) esp_74;
				(ss->*sp_79).w0002 = ds->w02E5;
				(ss->*sp_79).w0000 = ds->w02E9;
				word32 esp_95 = <invalid>;
				struct Eq_129 Eq_87::* sp_100 = (word16) esp_95;
				esp_16_16 = SLICE(esp_95, word16, 16);
				word32 ebx_93;
				word32 ecx_94;
				eax_16_16 = SLICE(fn0C00_01E1(eax_16_16_88, SLICE(ecx_73, word16, 16), SLICE(ebx_72, word16, 16), SLICE(esp_74, word16, 16), es_129, ds, rArg0, out ecx_94, out ebx_93), word16, 16);
				ebx_16_16 = SLICE(ebx_93, word16, 16);
				ecx_16_16 = SLICE(ecx_94, word16, 16);
				sp_101 = (struct Eq_9 Eq_87::*) ((char *) &sp_100->ptr0002 + 2);
			}
			word16 v28_106 = ds->w02CF - 0x01;
			ds->w02CF = v28_106;
		} while (v28_106 != 0x00);
		(ss->*sp_100).ptr0002 = es_129;
		(ss->*sp_100).ptr0000 = ds;
		word16 Eq_44::* si_114 = Eq_44::a0000;
		word16 Eq_200::* di_115 = Eq_200::a0000;
		word16 cx_122;
		for (cx_122 = 0x7B0C; cx_122 != 0x00; --cx_122)
		{
			0xA000->*di_115 = es_129->*si_114;
			++si_114;
			++di_115;
		}
		ds = (ss->*sp_100).ptr0000;
		es_129 = (ss->*sp_100).ptr0002;
		sp_101 = (struct Eq_9 Eq_87::*) ((char *) &sp_100->ptr0002 + 2);
	} while (__inb(0x60) != 0x81);
	msdos_terminate_program20();
}

// 0C00:019C: Register (memptr (ptr16 Eq_7) int16) fn0C00_019C(Register word16 eax_16_16, Register word16 ecx_16_16, Register word16 ebx_16_16, Register word16 esp_16_16, Register (ptr16 Eq_7) ds, FpuStack real64 rArg0, Register out Eq_233 ecxOut, Register out Eq_234 ebxOut)
// Called from:
//      fn0C00_01E1
int16 Eq_7::* fn0C00_019C(word16 eax_16_16, word16 ecx_16_16, word16 ebx_16_16, word16 esp_16_16, struct Eq_7 * ds, real64 rArg0, union Eq_233 & ecxOut, union Eq_234 & ebxOut)
{
	struct Eq_235 Eq_239::* esp_6 = SEQ(esp_16_16, fp);
	int16 Eq_7::* eax_14 = SEQ(eax_16_16, (ss->*esp_6).w0004);
	Eq_234 ebx_19 = SEQ(ebx_16_16, (ss->*esp_6).w0006);
	real64 rLoc1_50 = (real64) (ds->*eax_14);
	real64 rLoc2_52 = (real64) (ds->*ebx_19);
	word16 cx_10 = (ss->*esp_6).w0002;
	ds->r02EB = (real32) sqrt(rLoc1_50 * rLoc1_50 + rLoc2_52 * rLoc2_52);
	Eq_233 ecx_35 = SEQ(ecx_16_16, cx_10);
	real64 rLoc1_62 = atan(rArg0, (real64) (ds->*eax_14)) + (real64) (ds->*ecx_35) / (real64) ds->w02CD;
	real64 rLoc1_63 = cos(rLoc1_62);
	ds->*ebx_19 = (int16) (sin(rLoc1_62) * (real64) ds->r02EB);
	ds->*eax_14 = (int16) (rLoc1_63 * (real64) ds->r02EB);
	ecxOut = ecx_35;
	ebxOut = ebx_19;
	return eax_14;
}

// 0C00:01E1: Register word32 fn0C00_01E1(Register word16 eax_16_16, Register word16 ecx_16_16, Register word16 ebx_16_16, Register word16 esp_16_16, Register (ptr16 Eq_44) es, Register (ptr16 Eq_7) ds, FpuStack real64 rArg0, Register out Eq_110 ecxOut, Register out Eq_111 ebxOut)
// Called from:
//      fn0C00_0100
word32 fn0C00_01E1(word16 eax_16_16, word16 ecx_16_16, word16 ebx_16_16, word16 esp_16_16, struct Eq_44 * es, struct Eq_7 * ds, real64 rArg0, union Eq_110 & ecxOut, union Eq_111 & ebxOut)
{
	struct Eq_320 Eq_324::* esp_7 = SEQ(esp_16_16, fp);
	real64 rLoc1_150 = (real64) (ss->*esp_7).w0002 / (real64) ds->w02D5;
	real64 rLoc1_151 = cos(rLoc1_150);
	ds->w02DF = (int16) (sin(rLoc1_150) * (real64) ds->w02CD);
	ds->w02E3 = (int16) (rLoc1_151 * (real64) ds->w02CD);
	real64 rLoc1_156 = (real64) (ss->*esp_7).w0004 / (real64) ds->w02D5;
	real64 rLoc1_157 = cos(rLoc1_156);
	ds->w02E1 = (int16) (sin(rLoc1_156) * (real64) ds->w02E3);
	ds->w02E3 = (int16) (rLoc1_157 * (real64) ds->w02E3);
	word32 esp_47 = <invalid>;
	struct Eq_381 Eq_324::* sp_48 = (word16) esp_47;
	word32 ebx_45;
	word32 ecx_46;
	word16 eax_16_16_57 = SLICE(fn0C00_019C(eax_16_16, ecx_16_16, ebx_16_16, esp_16_16, ds, rArg0, out ecx_46, out ebx_45), word16, 16);
	(ss->*sp_48).w0004 = 0x02DF;
	(ss->*sp_48).w0002 = 0x02E3;
	(ss->*sp_48).w0000 = 0x02D9;
	word32 esp_63 = <invalid>;
	struct Eq_405 Eq_324::* sp_64 = (word16) esp_63;
	word32 ebx_61;
	word32 ecx_62;
	word16 eax_16_16_73 = SLICE(fn0C00_019C(eax_16_16_57, SLICE(ecx_46, word16, 16), SLICE(ebx_45, word16, 16), SLICE(esp_47, word16, 16), ds, rArg0, out ecx_62, out ebx_61), word16, 16);
	(ss->*sp_64).w0004 = 737;
	(ss->*sp_64).w0002 = 0x02E3;
	(ss->*sp_64).w0000 = 0x02DB;
	word32 ebx_77;
	Eq_110 ecx_78;
	word16 eax_16_16_198 = SLICE(fn0C00_019C(eax_16_16_73, SLICE(ecx_62, word16, 16), SLICE(ebx_61, word16, 16), SLICE(esp_63, word16, 16), ds, rArg0, out ecx_78, out ebx_77), word16, 16);
	real64 rLoc2_167 = (real64) ds->w02DF - (real64) ds->w02C1;
	real64 rLoc3_170 = (real64) ds->w02E1 - (real64) ds->w02C3;
	real64 rLoc4_173 = (real64) ds->w02E3 - (real64) ds->w02C5;
	ds->w02DD = (int16) ((real64) ds->w02C7 / ((rLoc2_167 * rLoc2_167 + (rLoc3_170 * rLoc3_170 + rLoc4_173 * rLoc4_173)) / (real64) ds->w02C9 + (real64) ds->w02CB));
	real64 rLoc3_183 = (real64) ds->w02E3 / (real64) ds->w02D5;
	real64 rLoc2_181 = (real64) ds->w02E1;
	real64 rLoc1_188 = (real64) ds->w02DF / (rLoc2_181 / (rLoc3_183 + (rLoc3_183 + 1.0)));
	ds->w02E1 = (int16) -rLoc2_181;
	ds->w02DF = (int16) (rLoc1_188 * (real64) ds->r02D1);
	int16 ax_135 = ds->w02DD;
	byte ah_136 = SLICE(ax_135, byte, 8);
	word16 ebx_16_16_204 = SLICE(ebx_77, word16, 16);
	cu8 Eq_44::* bx_134 = (word16) ((ds->w02E1 + 0x62) * 0x0140) + 0xA0 + ds->w02DF;
	cu8 al_139 = (byte) ax_135;
	word24 eax_24_8_199 = SEQ(eax_16_16_198, ah_136);
	if (ah_136 != 0x00)
		al_139 = ~0x05;
	word32 eax_196 = SEQ(eax_24_8_199, al_139);
	Eq_111 ebx_202 = SEQ(ebx_16_16_204, bx_134);
	if (es->*bx_134 <= al_139)
	{
		es->*bx_134 = al_139;
		eax_196 = SEQ(eax_24_8_199, al_139);
		ebx_202 = SEQ(ebx_16_16_204, bx_134);
	}
	ecxOut = ecx_78;
	ebxOut = ebx_202;
	return eax_196;
}

