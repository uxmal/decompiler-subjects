// subject_bss.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

byte g_b13070 = 0x00;
Eq_110 g_t13074 = 
	{
		0
	};
word32 g_dw13078 = 0x00;
word32 g_dw1307C = 0x00;
Eq_110 g_t13080 = 
	{
		0
	};
Eq_110 g_t13084 = 
	{
		0
	};
Eq_110 g_t13088 = 
	{
		0
	};
word32 g_dw1308C = 0x00;
Eq_110 g_t13090 = 
	{
		0
	};
word32 g_dw13094 = 0x00;
int32 g_dw13098 = 0;
Eq_110 g_t1309C = 
	{
		0
	};
Eq_110 g_t130A0 = 
	{
		0
	};
Eq_110 g_t130A4 = 
	{
		0
	};
Eq_110 g_t130A8 = 
	{
		0
	};
word32 g_dw130AC = 0x00;
word32 g_dw130B0 = 0x00;
// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 000000000000259C: void _fini()
void _fini()
{
}

// subject_got.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_ptr12F28 = null;
union Eq_110 * g_ptr12F30 = &g_t13074;
word32 * g_ptr12F38 = &g_dw13078;
word32 * g_ptr12F40 = &g_dw1307C;
word64 g_qw12F48 = 0x00;
union Eq_110 * g_ptr12F50 = &g_t13080;
union Eq_110 * g_ptr12F58 = &g_t13084;
union Eq_110 * g_ptr12F60 = &g_t13088;
word32 * g_ptr12F68 = &g_dw1308C;
union Eq_110 * g_ptr12F70 = &g_t13090;
word32 * g_ptr12F78 = null;
word32 * g_ptr12F80 = &g_dw13094;
word64 g_qw12F88 = 0x00;
int32 * g_ptr12F98 = &g_dw13098;
union Eq_110 * g_ptr12FA0 = &g_t1309C;
union Eq_110 * g_ptr12FA8 = &g_t130A0;
union Eq_110 * g_ptr12FB0 = &g_t130A4;
union Eq_110 * g_ptr12FB8 = &g_t130A8;
word32 * g_ptr12FC0 = &g_dw130AC;
word32 * g_ptr12FC8 = &g_dw130B0;
<anonymous> * g_ptr12FD8 = null;
<anonymous> * g_ptr12FE0 = null;
// subject_got_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_ptr13000 = &g_t0C30;
<anonymous> * g_ptr13008 = &g_t0C30;
<anonymous> * g_ptr13010 = &g_t0C30;
<anonymous> * g_ptr13018 = &g_t0C30;
<anonymous> * g_ptr13020 = &g_t0C30;
<anonymous> * g_ptr13028 = &g_t0C30;
<anonymous> * g_ptr13030 = &g_t0C30;
<anonymous> * g_ptr13038 = &g_t0C30;
<anonymous> * g_ptr13040 = &g_t0C30;
<anonymous> * g_ptr13048 = &g_t0C30;
<anonymous> * g_ptr13050 = &g_t0C30;
<anonymous> * g_ptr13058 = &g_t0C30;
// subject_init_array.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_a12D10[] = 
	{
	};
// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000000C10: Register word64 _init(Register out ptr64 x30Out)
// Called from:
//      __libc_csu_init
word64 _init(ptr64 & x30Out)
{
	call_weak_fn();
	x30Out = qwArg00;
	return x30;
}

// subject_jcr.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

word64 g_qw12D20 = 0x00;
// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> g_t0C30 = <code>;
// 0000000000000C50: void fn0000000000000C50()
// Called from:
//      __do_global_dtors_aux
void fn0000000000000C50()
{
	g_ptr13000();
}

// 0000000000000C60: void fn0000000000000C60()
// Called from:
//      main
void fn0000000000000C60()
{
	g_ptr13008();
}

// 0000000000000C70: void fn0000000000000C70()
// Called from:
//      ad
void fn0000000000000C70()
{
	g_ptr13010();
}

// 0000000000000C80: void fn0000000000000C80()
// Called from:
//      T
void fn0000000000000C80()
{
	g_ptr13018();
}

// 0000000000000C90: void fn0000000000000C90()
// Called from:
//      _start
void fn0000000000000C90()
{
	g_ptr13020();
}

// 0000000000000CA0: void fn0000000000000CA0()
// Called from:
//      o
void fn0000000000000CA0()
{
	g_ptr13028();
}

// 0000000000000CB0: void fn0000000000000CB0()
// Called from:
//      main
void fn0000000000000CB0()
{
	g_ptr13030();
}

// 0000000000000CD0: void fn0000000000000CD0()
// Called from:
//      _start
void fn0000000000000CD0()
{
	g_ptr13040();
}

// 0000000000000CE0: void fn0000000000000CE0()
// Called from:
//      ad
void fn0000000000000CE0()
{
	g_ptr13048();
}

// 0000000000000CF0: void fn0000000000000CF0()
// Called from:
//      ad
void fn0000000000000CF0()
{
	g_ptr13050();
}

// 0000000000000D00: void fn0000000000000D00()
// Called from:
//      X
void fn0000000000000D00()
{
	g_ptr13058();
}

// subject_rodata.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

word64 g_qw2640 = 0x20666920746E6920;
word64 g_qw2648 = 7595451752585063525;
word64 g_qw2650 = 0x6B6165726220656C;
word64 g_qw2658 = 0x206E727574657220;
word64 g_qw2660 = 0x6966656420726F66;
word64 g_qw2668 = 0x206E69616D20656E;
byte g_b2670 = 0x00;
// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000000D10: void _start()
void _start()
{
	fn0000000000000C90();
	fn0000000000000CD0();
	call_weak_fn();
}

// 0000000000000D48: void call_weak_fn()
// Called from:
//      _init
//      _start
void call_weak_fn()
{
	if (g_qw12F88 == 0x00)
		return;
	word64 x17_12;
	g_ptr13038();
}

// 0000000000000D60: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (0x00013077 - 0x00013070 <= 0x0E)
		return;
	<anonymous> * x1_13 = g_ptr12F28;
	if (x1_13 == null)
		return;
	x1_13();
}

// 0000000000000D98: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	int64 x1_7 = 0x00013070 - 0x00013070;
	if ((x1_7 >> 3) + ((x1_7 >> 3) >>u 63) >> 1 == 0x00)
		return;
	<anonymous> * x2_13 = g_ptr12FE0;
	if (x2_13 == null)
		return;
	word64 x2_17;
	x2_13();
}

// 0000000000000DD8: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b13070 == 0x00)
	{
		if (g_qw12F48 != 0x00)
			fn0000000000000C50();
		deregister_tm_clones();
		g_b13070 = 0x01;
	}
}

// 0000000000000E20: void frame_dummy(Register word64 x29, Register word64 x30)
void frame_dummy(word64 x29, word64 x30)
{
	if (g_qw12D20 != 0x00)
	{
		<anonymous> * x1_8 = g_ptr12FD8;
		if (x1_8 != null)
		{
			x1_8();
			register_tm_clones();
			return;
		}
	}
	register_tm_clones();
}

// 0000000000000E58: void E(Register Eq_110 w0)
// Called from:
//      ad
void E(Eq_110 w0)
{
	Eq_110 w0_8 = *g_ptr12F30;
	*g_ptr12F30 = (union Eq_110 *) ((word32) w0_8 + 1);
	null[(int64) w0_8] = (byte) (uint32) (uint8) w0;
}

// 0000000000000E98: Register word64 o()
// Called from:
//      Y
//      ad
//      T
//      main
word64 o()
{
	if (*g_ptr12F68 != 0x00)
	{
		word32 w0_28 = *g_ptr12F68;
		*g_ptr12F68 = w0_28 + 0x01;
		*g_ptr12F58 = (union Eq_110 *) (word32) null[(int64) w0_28];
		if (*g_ptr12F58 == 0x02)
		{
			*g_ptr12F68 = 0x00;
			*g_ptr12F58 = *g_ptr12FB8;
		}
	}
	else
	{
		Eq_110 w0_21 = (word32) (int64) *g_ptr12FC0;
		fn0000000000000CA0();
		*g_ptr12F58 = (union Eq_110 *) w0_21;
	}
	return x30;
}

// 0000000000000F54: Register word64 X()
// Called from:
//      ad
word64 X()
{
	Eq_110 w0_12 = *g_ptr12F58;
	fn0000000000000D00();
	union Eq_110 * x0_17 = g_ptr12F58;
	return SEQ(SLICE(x0_17, word32, 32), w0_12 | (uint32) ((uint8) ((word32) (*x0_17 == 0x5F))));
}

// 0000000000000F94: void Y()
// Called from:
//      ad
//      T
void Y()
{
	if (*g_ptr12F58 == 0x5C)
	{
		o();
		if (*g_ptr12F58 == 110)
			*g_ptr12F58 = (union Eq_110 *) 0x0A;
	}
}

// 0000000000000FE4: void ad()
// Called from:
//      ad
//      T
//      O
//      I
//      ab
//      main
void ad()
{
	while (true)
	{
		Eq_110 w0_13 = *g_ptr12F58;
		fn0000000000000C70();
		if ((w0_13 | (uint32) ((uint8) ((word32) (*g_ptr12F58 == 0x23)))) == 0x00)
			break;
		if (*g_ptr12F58 == 0x23)
		{
			o();
			ad();
			if (*g_ptr12F50 == 0x0218)
			{
				ad();
				E(0x20);
				null[(int64) *g_ptr12F50 / 4] = 0x01;
				null[(int64) ((char *) *g_ptr12F50 + 4) / 4] = *g_ptr12F30;
			}
			while (*g_ptr12F58 != 0x0A)
			{
				E(*g_ptr12F58);
				o();
			}
			E(*g_ptr12F58);
			E(0x02);
		}
		o();
	}
	*g_ptr12F98 = 0x00;
	*g_ptr12F50 = *g_ptr12F58;
	if ((word32) X() != 0x00)
	{
		E(0x20);
		*g_ptr12FA8 = *g_ptr12F30;
		while ((word32) X() != 0x00)
		{
			E(*g_ptr12F58);
			o();
		}
		if (*g_ptr12F50 <= 0x39)
		{
			Eq_110 w0_571 = *g_ptr12FA8;
			fn0000000000000CE0();
			*g_ptr12F70 = (union Eq_110 *) w0_571;
			*g_ptr12F50 = (union Eq_110 *) 0x02;
		}
		else
		{
			null[(int64) *g_ptr12F30] = 0x20;
			int64 x0_475 = (int64) *g_ptr12F40;
			fn0000000000000CF0();
			*g_ptr12F50 = (union Eq_110 *) (word32) (x0_475 + (0x00 - (int64) (*g_ptr12F40)));
			null[(int64) *g_ptr12F30] = 0x00;
			*g_ptr12F50 = (union Eq_110 *) ((char *) *g_ptr12F50 + 32 << 3);
			if (*g_ptr12F50 > 0x0218)
			{
				*g_ptr12F50 = (union Eq_110 *) ((char *) *g_ptr12F50 + *g_ptr12F38);
				if (null[(int64) *g_ptr12F50 / 4] == 0x01)
				{
					*g_ptr12F68 = null[(int64) ((char *) *g_ptr12F50 + 4) / 4];
					*g_ptr12FB8 = *g_ptr12F58;
					o();
					ad();
				}
			}
		}
	}
	else
	{
		struct Eq_235 * x29_162 = o();
		if (*g_ptr12F50 == 0x27)
		{
			*g_ptr12F50 = (union Eq_110 *) 0x02;
			Y();
			*g_ptr12F70 = *g_ptr12F58;
			o();
			o();
		}
		else if ((uint32) (uint8) ((uint32) (uint8) (word32) (*g_ptr12F50 == 0x2F) & (uint32) ((uint8) ((word32) (*g_ptr12F58 == 0x2A)))) != 0x00)
		{
			o();
			while (*g_ptr12F58 != 0x00)
			{
				while (*g_ptr12F58 != 0x2A)
					o();
				o();
				if (*g_ptr12F58 == 0x2F)
					*g_ptr12F58 = (union Eq_110 *) 0x00;
			}
			o();
			ad();
		}
		else
		{
			x29_162->dw001C = (word32) 9656;
			do
			{
				int32 w0_198 = x29_162->dw001C;
				x29_162->dw001C = w0_198 + 0x01;
				x29_162->t0018 = (word32) null[(int64) w0_198];
				if (x29_162->t0018 == 0x00)
					return;
				int32 w0_208 = x29_162->dw001C;
				x29_162->dw001C = w0_208 + 0x01;
				x29_162->t0014 = (word32) null[(int64) w0_208];
				*g_ptr12F70 = (union Eq_110 *) 0x00;
				while (true)
				{
					int32 w0_220 = x29_162->dw001C;
					x29_162->dw001C = w0_220 + 0x01;
					*g_ptr12F98 = (word32) null[(int64) w0_220] - 0x62;
					if (*g_ptr12F98 >= 0x00)
						break;
					*g_ptr12F70 = (union Eq_110 *) ((*g_ptr12F70 << 6) + *g_ptr12F98 + 0x40);
				}
			} while (((uint32) (uint8) (word32) (x29_162->t0018 == *g_ptr12F50) & (uint32) ((uint8) ((uint32) ((uint8) ((word32) (x29_162->t0014 == *g_ptr12F58))) | (uint32) ((uint8) ((word32) (x29_162->t0014 == 0x40)))))) == 0x00);
			if (x29_162->t0014 == *g_ptr12F58)
			{
				o();
				*g_ptr12F50 = (union Eq_110 *) 0x01;
			}
		}
	}
}

// 0000000000001564: void ae()
// Called from:
//      s
//      S
//      Z
//      N
//      T
//      O
//      ab
void ae()
{
	struct Eq_797 * sp_24 = fp - 0x10;
	while (true)
	{
		word32 sp_32_32_23 = SLICE(sp_24, word32, 32);
		if (sp_24->t000C == 0x00)
			break;
		Eq_805 w0_11 = sp_24->t000C;
		sp_24 = SEQ(sp_32_32_23, (word32) w0_11 + 1);
		if (w0_11 == 0x01)
			return;
		word32 w0_17 = *g_ptr12FC8;
		*g_ptr12FC8 = w0_17 + 0x01;
		null[(int64) w0_17] = (byte) (uint32) sp_24->t000C;
		sp_24->t000C >>= 8;
	}
}

// 00000000000015CC: void A(Register Eq_110 w0)
// Called from:
//      O
//      I
//      ab
void A(Eq_110 w0)
{
	Eq_110 dwLoc14_28 = w0;
	while (dwLoc14_28 != 0x00)
	{
		Eq_110 w0_13 = null[(int64) dwLoc1A / 4];
		null[(int64) dwLoc1A / 4] = *g_ptr12FC8 - dwLoc14_28 - 0x04;
		dwLoc14_28 = w0_13;
	}
}

// 0000000000001628: Register word64 s(Register Eq_110 w1, Register out (ptr64 Eq_871) x29Out)
// Called from:
//      H
//      B
//      S
//      N
//      T
//      ab
word64 s(Eq_110 w1, struct Eq_871 & x29Out)
{
	ae();
	null[(int64) *g_ptr12FC8 / 4] = w1;
	word32 * x0_38 = g_ptr12FC8;
	word32 w0_31 = *g_ptr12FC8;
	*x0_38 = *g_ptr12FC8 + 0x04;
	x29Out = x30;
	return SEQ(SLICE(x0_38, word32, 32), w0_31);
}

// 0000000000001694: void H(Register Eq_110 w0)
// Called from:
//      Z
//      T
//      O
void H(Eq_110 w0)
{
	word64 x29_32;
	s(w0, out x29_32);
}

// 00000000000016B8: Register word64 B(Register Eq_110 w0)
// Called from:
//      O
//      I
word64 B(Eq_110 w0)
{
	word64 x29_32;
	return s(w0, out x29_32);
}

// 00000000000016D8: Register word64 S(Register Eq_110 w1)
// Called from:
//      O
//      U
word64 S(Eq_110 w1)
{
	ae();
	word64 x29_45;
	return s(w1, out x29_45);
}

// 000000000000170C: Register word64 Z()
// Called from:
//      T
//      O
word64 Z()
{
	ae();
	H(0x00);
	ae();
	ae();
	ae();
	return x30;
}

// 0000000000001750: void N(Register Eq_110 w1)
// Called from:
//      T
void N(Eq_110 w1)
{
	ae();
	word64 x29_53;
	s(w1, out x29_53);
}

// 0000000000001798: Register (ptr64 Eq_949) T(Register ui32 w0)
// Called from:
//      T
//      O
struct Eq_949 * T(ui32 w0)
{
	struct Eq_235 * x29_147 = fp + -56;
	if (*g_ptr12F50 == 0x22)
	{
		H(*g_ptr12F60);
		while (*g_ptr12F58 != 0x22)
		{
			Y();
			Eq_110 w0_468 = *g_ptr12F60;
			*g_ptr12F60 = (union Eq_110 *) ((word32) w0_468 + 1);
			null[(int64) w0_468] = (byte) (uint32) *g_ptr12F58;
			o();
		}
		null[(int64) *g_ptr12F60] = 0x00;
		*g_ptr12F60 = (union Eq_110 *) ((char *) *g_ptr12F60 + 4 & ~0x03);
		x29_147 = o();
		ad();
	}
	else
	{
		int32 w0_23 = *g_ptr12F98;
		Eq_110 w0_27 = *g_ptr12F70;
		Eq_110 w0_31 = *g_ptr12F50;
		ad();
		if (w0_31 == 0x02)
			H(w0_27);
		else if (w0_23 == 0x02)
		{
			T(0x00);
			s(0x00, out x29_147);
			if (x29_147->dw0038 == 33)
				x29_147 = Z();
			else
				ae();
		}
		else if (w0_31 == 0x28)
		{
			x29_147 = w();
			ad();
		}
		else if (w0_31 == 0x2A)
		{
			ad();
			ad();
			ad();
			if (*g_ptr12F50 == 0x2A)
			{
				ad();
				ad();
				ad();
				ad();
			}
			ad();
			x29_147 = T(0x00);
			if (*g_ptr12F50 == 0x3D)
			{
				ad();
				ae();
				x29_147 = w();
				ae();
				x29_147->dw0038 != 0x0100;
				ae();
			}
			else if (x29_147->dw0038 != 0x00)
			{
				if (x29_147->dw0038 == 0x0100)
					ae();
				else
					ae();
				++*g_ptr12FC8;
			}
		}
		else if (w0_31 == 0x26)
		{
			N(null[(int64) *g_ptr12F50 / 4]);
			ad();
		}
		else
		{
			Eq_110 w0_59 = null[(int64) dwLoc1C / 4];
			Eq_110 dwArg04_746 = w0_59;
			if (w0_59 == 0x00)
			{
				fn0000000000000C80();
				dwArg04_746.u0 = 0x00;
			}
			if (((uint32) (uint8) (word32) (*g_ptr12F50 == 0x3D) & w0) != 0x00)
			{
				ad();
				x29_147 = w();
				N(x29_147->t003C);
			}
			else if (*g_ptr12F50 != 0x28)
			{
				N(dwArg04_746);
				if (*g_ptr12F98 == 11)
				{
					N(dwArg04_746);
					ae();
					ad();
				}
			}
		}
	}
	if (*g_ptr12F50 == 0x28)
	{
		if (x29_147->t003C == 0x01)
			ae();
		struct Eq_1071 * x29_553;
		x29_553->dw0030 = (word32) s(0x00, out x29_553);
		ad();
		x29_553->t002C.u0 = 0x00;
		while (*g_ptr12F50 != 0x29)
		{
			s(w()->t002C, out x29_553);
			if (*g_ptr12F50 == 44)
				ad();
			x29_553->t002C = (word32) x29_553->t002C + 4;
		}
		struct Eq_1131 * x29_655;
		null[(int64) x29_553->dw0018 / 4] = x29_553->t002C;
		ad();
		if (x29_553->dw003C == 0x00)
		{
			x29_553->dw0038 += 0x04;
			null[(int64) x29_553->dw001C / 4] = (word32) s(null[(int64) x29_553->dw001C / 4], out x29_655);
		}
		else if (x29_553->dw003C == 0x01)
		{
			s(x29_553->t002C, out x29_655);
			x29_655->t002C = (word32) x29_655->t002C + 4;
		}
		else
			s(x29_553->dw003C - *g_ptr12FC8 - 0x05, out x29_655);
		if (x29_655->t002C != 0x00)
		{
			word64 x29_866;
			s(x29_655->t002C, out x29_866);
		}
	}
	return (struct Eq_949 *) <invalid>;
}

// 0000000000001C60: Register (ptr64 Eq_949) O(Register int32 w0)
// Called from:
//      O
//      w
struct Eq_949 * O(int32 w0)
{
	if (w0 == 0x01)
		T(0x01);
	else
	{
		struct Eq_235 * x29_119 = O(w0 - 0x01);
		x29_119->t0028.u0 = 0x00;
		while (x29_119->dw001C == *g_ptr12F98)
		{
			x29_119->t0024 = *g_ptr12F50;
			x29_119->t002C = *g_ptr12F70;
			ad();
			if (x29_119->dw001C > 0x08)
			{
				x29_119->t0028 = (word32) S(x29_119->t0028);
				x29_119 = O(x29_119->dw001C);
			}
			else
			{
				ae();
				x29_119 = O(x29_119->dw001C);
				ae();
				if ((uint32) (uint8) ((uint32) (uint8) (word32) (x29_119->dw001C == 0x04) | (uint32) ((uint8) ((word32) (x29_119->dw001C == 0x05)))) != 0x00)
					x29_119 = Z();
				else
				{
					ae();
					if (x29_119->t0024 == 0x25)
						ae();
				}
			}
		}
		if (x29_119->t0028 != 0x00 && x29_119->dw001C > 0x08)
		{
			x29_119->t0028 = (word32) S(x29_119->t0028);
			H(x29_119->t002C ^ 0x01);
			B(0x05);
			A(x29_119->t0028);
			H(x29_119->t002C);
		}
	}
	return (struct Eq_949 *) <invalid>;
}

// 0000000000001DC8: Register (ptr64 Eq_949) w()
// Called from:
//      T
//      U
//      I
struct Eq_949 * w()
{
	O(11);
	return (struct Eq_949 *) <invalid>;
}

// 0000000000001DE4: Register word64 U(Register out ptr64 x29Out)
// Called from:
//      I
word64 U(ptr64 & x29Out)
{
	w();
	word64 x0_14 = S(0x00);
	x29Out = x30;
	return x0_14;
}

// 0000000000001E04: Register (ptr64 Eq_949) I(Register (ptr64 Eq_949) x19, Register out (ptr64 Eq_949) x29Out)
// Called from:
//      I
//      ab
struct Eq_949 * I(struct Eq_949 * x19, struct Eq_949 & x29Out)
{
	struct Eq_1544 * x29_228 = fp + -56;
	int32 dwLoc22_481 = SEQ(wLoc20, SLICE(x19, word16, 48));
	if (*g_ptr12F50 == 288)
	{
		ad();
		ad();
		struct Eq_1588 * x29_377;
		x29_377->dw0034 = (word32) U(out x29_377);
		ad();
		struct Eq_1599 * x29_396;
		struct Eq_949 * x19_398 = I(x19, out x29_396);
		if (*g_ptr12F50 == 0x0138)
		{
			ad();
			x29_396->dw003C = (word32) B(0x00);
			A(x29_396->t0034);
			struct Eq_1631 * x29_447;
			I(x19_398, out x29_447);
			A(x29_447->t003C);
		}
		else
			A(x29_396->t0034);
	}
	else if ((uint32) (uint8) ((uint32) (uint8) (word32) (*g_ptr12F50 == 0x0160) | (uint32) ((uint8) ((word32) (*g_ptr12F50 == 0x01F8)))) != 0x00)
	{
		Eq_110 w0_174 = *g_ptr12F50;
		ad();
		ad();
		if (w0_174 == 0x0160)
		{
			struct Eq_1667 * x29_295;
			x29_295->dw0034 = (word32) U(out x29_295);
		}
		else
		{
			if (*g_ptr12F50 != 0x3B)
				w();
			ad();
			if (*g_ptr12F50 != 0x3B)
				x29_228->dw0034 = (word32) U(out x29_228);
			ad();
			if (*g_ptr12F50 != 0x29)
			{
				x29_228->t0038 = (word32) B(0x00);
				w();
				B(x29_228->dw003C - *g_ptr12FC8 - 0x05);
				A(x29_228->t0038);
				x29_228->dw003C = (word32) x29_228->t0038 + 4;
			}
		}
		ad();
		struct Eq_1677 * x29_324;
		I(x19, out x29_324);
		B(x29_324->dw003C - *g_ptr12FC8 - 0x05);
		A(x29_324->t0034);
	}
	else if (*g_ptr12F50 == 0x7B)
	{
		ad();
		word64 x29_534;
		word64 x30_535;
		struct Eq_949 * x19_135 = ab(out x29_534, out x30_535);
		while (*g_ptr12F50 != 0x7D)
		{
			word64 x29_536;
			x19_135 = I(x19_135, out x29_536);
		}
		ad();
	}
	else
	{
		if (*g_ptr12F50 == 448)
		{
			ad();
			if (*g_ptr12F50 != 0x3B)
				w();
			*g_ptr12FB0 = (union Eq_110 *) (word32) B(*g_ptr12FB0);
		}
		else if (*g_ptr12F50 == 400)
		{
			ad();
			null[(int64) dwLoc22_481 / 4] = (word32) B(null[(int64) dwLoc22_481 / 4]);
		}
		else if (*g_ptr12F50 != 0x3B)
			w();
		ad();
	}
	x29Out = (struct Eq_949 *) <invalid>;
	return qwLoc30;
}

// 00000000000020E4: Register (ptr64 Eq_949) ab(Register out ptr64 x29Out, Register out ptr64 x30Out)
// Called from:
//      I
//      main
struct Eq_949 * ab(ptr64 & x29Out, ptr64 & x30Out)
{
	word32 sp_32_32_288 = SLICE(fp + -40, word32, 32);
	struct Eq_1854 * x29_170 = fp + -40;
	while (true)
	{
		Eq_110 w0_23 = *g_ptr12F50;
		struct Eq_1862 * sp_293 = SEQ(sp_32_32_288, (word32) w0_23 + 1);
		if (((uint32) (uint8) (word32) (*g_ptr12F50 == 0x0100) | (uint32) ((uint8) ((uint32) ((uint8) ((word32) (w0_23 != 0x01))) & (uint32) ((uint8) ((word32) (x29_170->dw001C == 0x00)))))) == 0x00)
			break;
		if (*g_ptr12F50 == 0x0100)
		{
			ad();
			while (*g_ptr12F50 != 0x3B)
			{
				if (x29_170->dw001C != 0x00)
				{
					*g_ptr12FA0 = (union Eq_110 *) ((char *) *g_ptr12FA0 + 4);
					null[(int64) *g_ptr12F50 / 4] = 0x00 - *g_ptr12FA0;
				}
				else
				{
					null[(int64) *g_ptr12F50 / 4] = *g_ptr12F60;
					*g_ptr12F60 = (union Eq_110 *) ((char *) *g_ptr12F60 + 4);
				}
				ad();
				if (*g_ptr12F50 == 44)
					ad();
			}
			ad();
		}
		else
		{
			A(null[(int64) ((char *) *g_ptr12F50 + 4) / 4]);
			null[(int64) *g_ptr12F50 / 4] = *g_ptr12FC8;
			ad();
			ad();
			x29_170->dw002C = 0x08;
			while (*g_ptr12F50 != 0x29)
			{
				null[(int64) *g_ptr12F50 / 4] = x29_170->dw002C;
				x29_170->dw002C += 0x04;
				ad();
				if (*g_ptr12F50 == 44)
					ad();
			}
			ad();
			*g_ptr12FA0 = (union Eq_110 *) 0x00;
			*g_ptr12FB0 = *g_ptr12FA0;
			ae();
			struct Eq_2016 * x29_160;
			x29_160->dw002C = (word32) s(0x00, out x29_160);
			I(x19, out x29_170);
			A(*g_ptr12FB0);
			ae();
			null[(int64) x29_170->dw0016 / 4] = *g_ptr12FA0;
			struct Eq_949 * sp_156 = (struct Eq_949 *) <invalid>;
			sp_32_32_288 = SLICE(sp_156, word32, 32);
		}
	}
	ptr64 x30_297 = sp_293->ptr0008;
	x29Out = sp_293->ptr0000;
	x30Out = x30_297;
	return (struct Eq_949 *) <invalid>;
}

// 0000000000002368: void main(Register int32 w0)
void main(int32 w0)
{
	*g_ptr12FC0 = *g_ptr12F78;
	if (w0 > 0x01)
	{
		word32 w0_41 = (word32) (int64) null[(int64) dwLoc0C / 4];
		fn0000000000000C60();
		*g_ptr12FC0 = w0_41;
	}
	fn0000000000000CB0();
	*g_ptr12F40 = 0x01;
	struct Eq_2140 * x0_60 = (int64) *g_ptr12F40;
	word64 x3_68 = g_qw2648;
	x0_60->qw0000 = g_qw2640;
	x0_60->qw0008 = x3_68;
	word64 x3_76 = g_qw2658;
	x0_60->qw0010 = g_qw2650;
	x0_60->qw0018 = x3_76;
	word64 x3_84 = g_qw2668;
	x0_60->qw0020 = g_qw2660;
	x0_60->qw0028 = x3_84;
	x0_60->b0030 = (byte) (word32) g_b2670;
	*g_ptr12F30 = (union Eq_110 *) (word32) &x0_60->b0030;
	fn0000000000000CB0();
	*g_ptr12F60 = (union Eq_110 *) 0x01;
	fn0000000000000CB0();
	*g_ptr12F80 = 0x01;
	*g_ptr12FC8 = *g_ptr12F80;
	fn0000000000000CB0();
	*g_ptr12F38 = 0x01;
	o();
	ad();
	word64 x29_162;
	word64 x30_163;
	ab(out x29_162, out x30_163);
	<anonymous> * x0_174 = (int64) null[(int64) (*g_ptr12F38 + 0x0250) / 4];
	word64 x2_185;
	x0_174();
}

// 0000000000002520: void __libc_csu_init(Register word32 w0, Register word64 x1, Register word64 x2, Register word64 x24)
void __libc_csu_init(word32 w0, word64 x1, word64 x2, word64 x24)
{
	word32 x24_32_32_104 = SLICE(x24, word32, 32);
	int64 x20_26 = 77080 - 77072;
	<anonymous> * x21_24[] = g_a12D10;
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

// 0000000000002598: void __libc_csu_fini()
void __libc_csu_fini()
{
}

