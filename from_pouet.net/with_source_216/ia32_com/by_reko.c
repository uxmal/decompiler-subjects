// subject_code.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_code.h"

// 0C00:0100: void fn0C00_0100(Register byte bl, Register (ptr16 Eq_3) ds)
void fn0C00_0100(byte bl, struct Eq_3 * ds)
{
	bios_video_load_ROM_8x8_dbl_dot_patterns(bl);
	__syscall(0x10);
	uint8 ah_174 = 0x10;
	do
	{
		Eq_15 di_15 = 0x00;
		do
		{
			ui8 al_23 = 0x9000->*di_15 + 0x9000->*((word16) di_15 + 2);
			ui16 al_ah_203 = SEQ(al_23, ah_174) + SEQ(0x9000->*((word16) di_15 + 0x00A0), C_26);
			ui16 al_ah_205 = al_ah_203 + SEQ(0x9000->*((word16) di_15 - 2), C_32);
			cu8 al_36 = SLICE(al_ah_205, byte, 8);
			cu16 ax_40 = SEQ((bool) (al_36 < 0x00) + (byte) al_ah_205, al_36);
			C_26.u1 = SLICE(cond(al_23), bool, 1);
			C_32.u1 = SLICE(cond(SLICE(al_ah_203, byte, 8)), bool, 1);
			byte al_44 = (byte) (ax_40 >> 0x02);
			ah_174 = SLICE(ax_40 >> 0x02, byte, 8);
			if (ax_40 >> 0x02 > 0x07)
				al_44 -= 0x07;
			if (di_15 >= 0x1FE0)
				al_44 = __inb(0x40);
			0x9000->*((word16) di_15 - 0x00A0) = al_44;
			Eq_25 di_57 = (word16) di_15 + 1;
			di_15 = (word16) di_57 + 1;
		} while (di_57 < 0x207F);
		struct Eq_81 Eq_21::* di_109 = &Eq_21::t0FA0;
		do
		{
			word16 cx_77 = ds->a01DA[(uint16) (uint8) (SEQ(ah_174, di_109[2000]) /u 0x0F)];
			di_109[1999] = cx_77;
			struct Eq_101 Eq_21::* di_80 = -di_109;
			di_80[2000] = cx_77;
			Eq_106 di_82 = -di_80;
			ah_174 = 0x00;
			di_109 = di_82 - 0x02;
		} while (di_82 != 0x02);
		struct Eq_112 Eq_21::* si_102 = Eq_21::a0000;
		cu8 bl_116 = 0x00;
		byte bh_129;
		for (bh_129 = 0x00; bh_129 != 0x19; ++bh_129)
		{
			do
			{
				if (bl_116 < 0x1A || (0x8000->*di_109).b0001 == 0x00)
				{
					word16 cx_104 = (0x8000->*si_102).w0000;
					(0x8000->*di_109).w0000 = cx_104;
					struct Eq_125 Eq_21::* di_107 = -di_109;
					di_107[3999] = cx_104;
					di_109 = -di_107;
				}
				struct Eq_136 Eq_21::* si_118 = (char *) &si_102->w0000 + 1;
				di_109 += 80;
				++bl_116;
				si_102 = (struct Eq_112 Eq_21::*) ((char *) &si_118->w0000 + 1);
			} while (bl_116 < 0x33);
			di_109 -= 8158;
			si_102 = (struct Eq_112 Eq_21::*) (si_118 + 1);
			bl_116 = 0x00;
		}
		byte Eq_21::* di_154 = Eq_21::a0000;
		do
		{
			0xB800->*di_154 = 0x8000->*di_154;
			++di_154;
		} while (di_154 != Eq_21::a0000);
		byte al_173;
	} while (bios_kbd_check_keystroke(out al_173, out ah_174));
	bios_video_set_mode(0x03);
}

