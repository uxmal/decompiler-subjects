// subject_bss.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

byte g_b12008 = 0x00;
// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000001278: void _fini()
void _fini()
{
}

// subject_got.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> * g_ptr11F90 = &g_t05B0;
<anonymous> * g_ptr11F98 = &g_t05B0;
<anonymous> * g_ptr11FA0 = &g_t05B0;
<anonymous> * g_ptr11FA8 = &g_t05B0;
<anonymous> * g_ptr11FB0 = &g_t05B0;
word64 g_qw11FC0 = 0x00;
word64 g_qw11FD0 = 0x00;
<anonymous> * g_ptr11FD8 = null;
<anonymous> * g_ptr11FE0 = null;
word64 g_qw11FE8 = 0x078C;
word64 g_qw11FF8 = 0x00;
// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000000598: void _init()
void _init()
{
}

// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

<anonymous> g_t05B0 = <code>;
// 00000000000005D0: void fn00000000000005D0()
// Called from:
//      main
void fn00000000000005D0()
{
	g_ptr11F90();
}

// 00000000000005E0: void fn00000000000005E0()
// Called from:
//      __do_global_dtors_aux
void fn00000000000005E0()
{
	g_ptr11F98();
}

// 00000000000005F0: void fn00000000000005F0()
// Called from:
//      __do_global_dtors_aux
void fn00000000000005F0()
{
	g_ptr11FA0();
}

// 0000000000000610: void fn0000000000000610()
// Called from:
//      frame_dummy
void fn0000000000000610()
{
	g_ptr11FB0();
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0000000000000620: void _start()
void _start()
{
	_start_c();
}

// 000000000000063C: void _start_c()
// Called from:
//      _start
void _start_c()
{
	word64 x0_12 = g_qw11FE8;
	g_ptr11FA8();
}

// 0000000000000664: void deregister_tm_clones()
// Called from:
//      __do_global_dtors_aux
void deregister_tm_clones()
{
	if (73736 - 73736 == 0x00)
		return;
	<anonymous> * x1_12 = g_ptr11FE0;
	if (x1_12 == null)
		return;
	word64 x16_18;
	x1_12();
}

// 0000000000000694: void register_tm_clones()
// Called from:
//      frame_dummy
void register_tm_clones()
{
	if ((73736 - 73736 >> 3) / 0x02 == 0x00)
		return;
	<anonymous> * x2_13 = g_ptr11FD8;
	if (x2_13 == null)
		return;
	word64 x16_19;
	x2_13();
}

// 00000000000006D0: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if ((word32) g_b12008 != 0x00)
		return;
	if (g_qw11FC0 != 0x00)
		fn00000000000005E0();
	deregister_tm_clones();
	if (g_qw11FD0 != 0x00)
		fn00000000000005F0();
	g_b12008 = 0x01;
}

// 0000000000000738: void frame_dummy()
void frame_dummy()
{
	if (g_qw11FF8 != 0x00)
		fn0000000000000610();
	register_tm_clones();
}

// 0000000000000768: void add_float()
void add_float()
{
}

// 0000000000000770: void add_double()
void add_double()
{
}

// 0000000000000778: void add_long_double(Register word128 q0, Register word128 q1, Register word64 sysreg3_3_4_4_0, Register word64 sysreg3_3_4_4_1)
void add_long_double(word128 q0, word128 q1, word64 sysreg3_3_4_4_0, word64 sysreg3_3_4_4_1)
{
	__addtf3(q0, q1, sysreg3_3_4_4_0, sysreg3_3_4_4_1);
}

// 000000000000078C: void main()
void main()
{
	fn00000000000005D0();
	fn00000000000005D0();
	fn00000000000005D0();
}

// 00000000000007E8: void __addtf3(Register word128 q0, Register word128 q1, Register word64 sysreg3_3_4_4_0, Register word64 sysreg3_3_4_4_1)
// Called from:
//      add_long_double
void __addtf3(word128 q0, word128 q1, word64 sysreg3_3_4_4_0, word64 sysreg3_3_4_4_1)
{
	word128 q0;
	q0_64_64_1180 = SLICE(q0, word64, 64);
	word128 q1;
	word64 sysreg3_3_4_4_0;
	word64 sysreg3_3_4_4_1;
	qwLoc08_1498 = (word64) q0;
	qwArg00_1499 = SLICE(q0, word64, 64);
	x5_32_32_326 = SLICE(qwArg00_1499, word32, 32);
	qwLoc08_1501 = (word64) q1;
	qwArg00_1502 = SLICE(q1, word64, 64);
	x10_23 = __mrs(sysreg3_3_4_4_0);
	w10_916 = (word32) x10_23;
	x0_24 = __ubfm(qwArg00_1499, 48, 48);
	w0_30 = (word32) x0_24;
	x0_32_32_219 = SLICE(x0_24, word32, 32);
	x12_25 = __ubfm(qwArg00_1502, 48, 48);
	w12_31 = (word32) x12_25;
	x3_26 = __ubfm(qwArg00_1499, 61, 61);
	x4_28 = x0_24;
	x4_32_32_200 = SLICE(x0_24, word32, 32);
	x2_29 = __ubfm(qwArg00_1502, 61, 61);
	w0_32 = w0_30 - w12_31;
	x8_33 = qwArg00_1499 >> 63;
	x2_35 = x2_29 | qwLoc08_1501 >> 61;
	x2_32_32_440 = SLICE(x2_35, word32, 32);
	x31_36 = (qwArg00_1502 >> 63) - (qwArg00_1499 >> 63);
	x3_38 = x3_26 | qwLoc08_1498 >> 61;
	x7_39 = qwLoc08_1498 << 3;
	x6_32_32_311 = SLICE(x12_25, word32, 32);
	x1_41 = qwLoc08_1501 << 3;
	if (x31_36 == 0x00)
	{
		if (w0_32 > 0x00)
		{
			if (x12_25 == 0x00)
			{
				x5_689 = x2_35 | qwLoc08_1501 << 3;
				x5_32_32_728 = SLICE(x5_689, word32, 32);
				if (x5_689 == 0x00)
					goto l0000000000000860;
				if (w0_32 == 0x01)
				{
					x1_763 = (qwLoc08_1498 << 3) + (qwLoc08_1501 << 3);
					x7_765 = x1_763;
					x3_767 = x3_38 + x2_35 + (x1_763 < 0x00);
					goto l000000000000089C;
				}
				x5_2176 = SEQ(x5_32_32_728, w0_32 - 0x01);
				if (x0_24 == 0x7FFF)
				{
l00000000000008D4:
					x5_32_32_1898 = ϕ(x5_32_32_325, x5_32_32_326, x5_32_32_728, x5_32_32_326);
					x1_756 = x3_38 | qwLoc08_1498 << 3;
					if (x1_756 != 0x00)
					{
						x2_758 = x3_38;
						w0_761 = (word32) (x3_38 >> 50);
						x0_32_32_1312 = SLICE(x3_38 >> 50, word32, 32);
						x1_760 = qwLoc08_1498 << 3;
						w0_762 = w0_761 & 0x01;
						goto l00000000000009C0;
					}
l00000000000010BC:
					x5_32_32_1901 = ϕ(x5_32_32_1873, x5_32_32_1898);
					x1_869 = ϕ(x1_855, x1_756);
					x2_856 = 0x00;
					goto l00000000000008C4;
				}
			}
			else
			{
				if (x0_24 == 0x7FFF)
					goto l00000000000008D4;
				x5_2177 = SEQ(x5_32_32_326, w0_32);
			}
			x5_2178 = ϕ(x5_2176, x5_2177);
			x5_32_32_727 = SLICE(x5_2178, word32, 32);
			w5_696 = (word32) x5_2178;
			if (w5_696 <= 116)
			{
				if (w5_696 <= 0x3F)
				{
					w6_726 = 0x40 - w5_696;
					x9_730 = qwLoc08_1501 << 3 >> x5_2178;
					x6_731 = SEQ(x6_32_32_311, w6_726);
					x1_732 = qwLoc08_1501 << 3 << x6_731;
					x0_734 = x2_35 << x6_731;
					x1_736 = (word64) (x1_732 != 0x00);
					x0_737 = x0_734 | x9_730;
					x2_738 = x2_35 >> x5_2178;
					x0_739 = x0_737 | x1_736;
					goto l0000000000000938;
				}
				w6_709 = 0x80 - w5_696;
				x0_712 = SEQ(x0_32_32_219, w5_696 - 0x40);
				x0_713 = x2_35 >> x0_712;
				x6_715 = SEQ(x6_32_32_311, w6_709);
				x2_716 = x2_35 << x6_715;
				x2_718 = w5_696 != 0x40 ? x2_716 : 0x00;
				x1_719 = x2_718 | qwLoc08_1501 << 3;
				x1_722 = (word64) (x1_719 != 0x00);
				x0_723 = x0_713 | x1_722;
			}
			else
			{
				x1_701 = x2_35 | qwLoc08_1501 << 3;
				x0_704 = (word64) (x1_701 != 0x00);
			}
			x0_741 = ϕ(x0_723, x0_704);
			x2_724 = 0x00;
l0000000000000938:
			x2_748 = ϕ(x2_738, x2_724);
			x0_740 = ϕ(x0_739, x0_741);
			x0_32_32_1325 = SLICE(x0_740, word32, 32);
			x1_745 = x0_740 + (qwLoc08_1498 << 3);
			x7_747 = x1_745;
			x3_753 = (uint64) ((bool) (x1_745 < 0x00) + (x2_748 + x3_38));
			goto l000000000000089C;
		}
		if (w0_32 != 0x00)
		{
			x5_32_32_617 = 0x00;
			if (x0_24 == 0x00)
			{
				x4_589 = x3_38 | qwLoc08_1498 << 3;
				x4_32_32_613 = SLICE(x4_589, word32, 32);
				if (x4_589 == 0x00)
				{
					if (x12_25 != 0x7FFF)
					{
						x3_669 = x2_35;
						x7_670 = qwLoc08_1501 << 3;
						x4_671 = x12_25;
					}
					goto l00000000000009A8;
				}
				if (w0_32 == 0x01)
				{
					x1_656 = (qwLoc08_1498 << 3) + (qwLoc08_1501 << 3);
					x7_658 = x1_656;
					x3_660 = x3_38 + x2_35 + (x1_656 < 0x00);
					goto l00000000000009DC;
				}
				if (x12_25 == 0x7FFF)
				{
l00000000000009A8:
					x0_674 = x2_35 | qwLoc08_1501 << 3;
					x0_32_32_1329 = SLICE(x0_674, word32, 32);
					if (x0_674 != 0x00)
					{
						x4_680 = x12_25;
						w0_682 = (word32) (x2_35 >> 50);
						x0_32_32_1333 = SLICE(x2_35 >> 50, word32, 32);
						w0_683 = w0_682 & 0x01;
						goto l00000000000009C0;
					}
					x4_676 = x12_25;
					x2_677 = 0x00;
					x1_678 = 0x00;
l00000000000008C4:
					x5_32_32_1900 = ϕ(x5_32_32_1901, x5_32_32_205, x5_32_32_1883, x5_32_32_1891, x5_32_32_617);
					x0_32_32_1314 = ϕ(x0_32_32_219, x0_32_32_1318, x0_32_32_1319, x0_32_32_1328, x0_32_32_1329);
					x4_1085 = ϕ(x4_28, x4_269, x4_834, x4_778, x4_676);
					x2_1059 = ϕ(x2_856, x2_272, x2_853, x2_828, x2_677);
					x8_1021 = ϕ(x8_33, x8_271, x8_1018, x8_33, x8_33);
					x1_868 = ϕ(x1_869, x1_273, x1_854, x1_827, x1_678);
					w0_857 = 0x00;
					goto l00000000000009C0;
				}
				w0_596 = ~w0_32;
			}
			else
			{
				if (x12_25 == 0x7FFF)
					goto l00000000000009A8;
				w0_587 = 0x00 - w0_32;
			}
			x4_32_32_612 = ϕ(x4_32_32_200, x4_32_32_613);
			w0_597 = ϕ(w0_587, w0_596);
			if (w0_597 <= 116)
			{
				if (w0_597 <= 0x3F)
				{
					w5_629 = 0x40 - w0_597;
					x0_631 = SEQ(x0_32_32_219, w0_597);
					x9_632 = qwLoc08_1498 << 3 >> x0_631;
					x5_633 = (uint64) w5_629;
					x7_634 = qwLoc08_1498 << 3 << x5_633;
					x7_637 = (word64) (x7_634 != 0x00);
					x4_638 = x3_38 << x5_633;
					x4_639 = x4_638 | x9_632;
					x0_640 = x3_38 >> x0_631;
					x7_641 = x4_639 | x7_637;
					goto l0000000000000A28;
				}
				w4_608 = w0_597 - 0x40;
				w5_610 = 0x80 - w0_597;
				x4_614 = SEQ(x4_32_32_612, w4_608);
				x4_615 = x3_38 >> x4_614;
				x5_618 = (uint64) w5_610;
				x3_619 = x3_38 << x5_618;
				x3_621 = w0_597 != 0x40 ? x3_619 : 0x00;
				x3_622 = x3_621 | qwLoc08_1498 << 3;
				x7_625 = (word64) (x3_622 != 0x00);
				x7_626 = x4_615 | x7_625;
			}
			else
			{
				x3_602 = x3_38 | qwLoc08_1498 << 3;
				x7_605 = (word64) (x3_602 != 0x00);
			}
			x7_643 = ϕ(x7_626, x7_605);
			x0_627 = 0x00;
l0000000000000A28:
			x0_650 = ϕ(x0_640, x0_627);
			x0_32_32_1327 = SLICE(x0_650, word32, 32);
			x7_642 = ϕ(x7_641, x7_643);
			x1_647 = x7_642 + (qwLoc08_1501 << 3);
			x7_649 = x1_647;
			x3_655 = (uint64) ((bool) (x1_647 < 0x00) + (x0_650 + x2_35));
l00000000000009DC:
			x3_2188 = ϕ(x3_660, x3_655);
			x0_32_32_1326 = ϕ(x0_32_32_219, x0_32_32_1327);
			x7_824 = ϕ(x7_658, x7_649);
			x4_665 = x12_25;
			x3_2179 = x3_2188;
l000000000000089C:
			x3_2180 = ϕ(x3_767, x3_753, x3_2179);
			x5_32_32_1891 = ϕ(x5_32_32_728, x5_32_32_727, x5_32_32_617);
			x0_32_32_1324 = ϕ(x0_32_32_219, x0_32_32_1325, x0_32_32_1326);
			x7_823 = ϕ(x7_765, x7_747, x7_824);
			x4_774 = ϕ(x4_28, x4_28, x4_665);
			x3_821 = x3_2180;
			x4_778 = x4_774 + 0x01;
			x0_32_32_1328 = 0x00;
			if (x4_778 != 0x7FFF)
			{
				x1_826 = x7_823 >> 1;
				x1_827 = x1_826 | x3_2180 << 63;
				x2_828 = 0x00;
				goto l00000000000008C4;
			}
			x1_791 = 0x00;
			x2_796 = 0x00;
			x4_1087 = ϕ(x4_778, x4_810, x4_778);
			x2_1060 = ϕ(x2_812, x2_809, x2_796);
			x1_870 = ϕ(x1_813, x1_811, x1_791);
			w0_814 = 0x14;
l00000000000009C0:
			x5_32_32_1897 = ϕ(x5_32_32_1898, x5_32_32_205, x5_32_32_1900, x5_32_32_1891, x5_32_32_617);
			x0_32_32_1311 = ϕ(x0_32_32_1312, x0_32_32_1313, x0_32_32_1314, x0_32_32_1328, x0_32_32_1333);
			x4_1083 = ϕ(x4_28, x4_275, x4_1085, x4_1087, x4_680);
			x2_1058 = ϕ(x2_758, x2_35, x2_1059, x2_1060, x2_35);
			x8_1019 = ϕ(x8_33, x8_277, x8_1021, x8_33, x8_33);
			w0_904 = ϕ(w0_762, w0_279, w0_857, w0_814, w0_683);
			x1_867 = ϕ(x1_760, x1_41, x1_868, x1_870, x1_41);
			x5_2162 = SEQ(x5_32_32_1897, 0x00);
			goto l0000000000000AD0;
		}
		x0_32_32_1310 = SLICE(x0_24 + 0x01, word32, 32);
		x12_494 = x3_38 | qwLoc08_1498 << 3;
		if (x0_24 == 0x00)
		{
			if (x12_494 != 0x00)
			{
				x0_573 = x2_35 | qwLoc08_1501 << 3;
				x0_32_32_1351 = SLICE(x0_573, word32, 32);
				if (x0_573 != 0x00)
				{
					x1_574 = (qwLoc08_1498 << 3) + (qwLoc08_1501 << 3);
					x7_576 = x1_574;
					x3_578 = x3_38 + x2_35 + (x1_574 < 0x00);
					x2_580 = 0x00;
					w0_581 = 0x00;
					x4_582 = 0x01;
					x5_2165 = SEQ(x5_32_32_326, w0_32);
					goto l0000000000000AD0;
				}
			}
			else
			{
				x3_571 = x2_35;
				x7_572 = qwLoc08_1501 << 3;
			}
			goto l0000000000000E58;
		}
		if (x0_24 == 0x7FFF)
		{
			if (x12_494 != 0x00)
			{
				x31_508 = x12_25 - x0_24;
				w0_511 = (word32) (x3_38 >> 50);
				x0_32_32_1345 = SLICE(x3_38 >> 50, word32, 32);
				w0_512 = w0_511 & 0x01;
				if (x31_508 == 0x00)
					goto l0000000000000B30;
				goto l0000000000000B98;
			}
			x31_502 = x12_25 - x0_24;
			if (x31_502 != 0x00)
			{
				w0_506 = 0x00;
l0000000000000B90:
				x0_32_32_1334 = ϕ(x0_32_32_1336, x0_32_32_1342, x0_32_32_1343, x0_32_32_1344, x0_32_32_1310, x0_32_32_1349, x0_32_32_1344, x0_32_32_1310);
				x2_1061 = ϕ(x2_139, x2_35, x2_528, x2_35, x2_35, x2_567, x2_35, x2_35);
				x8_1027 = ϕ(x8_1028, x8_111, x8_33, x8_33, x8_33, x8_1037, x8_33, x8_33);
				w0_905 = ϕ(w0_907, w0_909, w0_910, w0_543, w0_501, w0_913, w0_542, w0_506);
				x1_871 = ϕ(x1_141, x1_41, x1_536, x1_41, x1_41, x1_569, x1_41, x1_41);
				x4_570 = 0x7FFF;
				x5_2163 = SEQ(x5_32_32_326, w0_32);
				goto l0000000000000AD0;
			}
		}
		else if (x12_25 != 0x7FFF)
		{
			w0_501 = 0x00;
			if (x12_494 != 0x00)
			{
l0000000000000B98:
				x0_32_32_1347 = ϕ(x0_32_32_1345, x0_32_32_1310);
				w0_911 = ϕ(w0_512, w0_501);
				x1_516 = x2_35 | qwLoc08_1501 << 3;
				if (x1_516 != 0x00)
					goto l0000000000000B44;
				goto l0000000000000BA0;
			}
			goto l0000000000000B90;
		}
		w0_505 = 0x00;
l0000000000000B30:
		x0_32_32_1344 = ϕ(x0_32_32_1345, x0_32_32_1310);
		w0_542 = ϕ(w0_512, w0_505);
		x4_521 = x2_35 | qwLoc08_1501 << 3;
		if (x4_521 != 0x00)
		{
			w0_543 = 0x01;
			if (x12_494 == 0x00)
				goto l0000000000000B90;
l0000000000000B44:
			x0_32_32_1349 = ϕ(x0_32_32_1344, x0_32_32_1347);
			w0_913 = ϕ(w0_543, w0_911);
			x1_550 = x3_38 >> 3;
			x9_551 = x3_38 << 61;
			x8_563 = qwArg00_1502 >> 63;
			x9_564 = x2_35 << 61;
			x1_565 = x2_35 >> 3;
			x8_1037 = ϕ(x8_33, x8_33, x8_563);
			x9_568 = ϕ(x9_551, x9_551, x9_564);
			x1_566 = ϕ(x1_550, x1_550, x1_565);
			x2_567 = __ror(x1_566, 61);
			x1_569 = x9_568 << 3;
			goto l0000000000000B90;
		}
		if (x12_494 == 0x00)
			goto l0000000000000B90;
l0000000000000BA0:
		x0_32_32_1343 = ϕ(x0_32_32_1337, x0_32_32_1341, x0_32_32_1344, x0_32_32_1347);
		w0_910 = ϕ(w0_100, w0_908, w0_542, w0_911);
		x2_528 = x3_38;
		x1_536 = qwLoc08_1498 << 3;
		goto l0000000000000B90;
	}
	if (w0_32 > 0x00)
	{
		if (x12_25 == 0x00)
		{
			x5_285 = x2_35 | qwLoc08_1501 << 3;
			x5_32_32_325 = SLICE(x5_285, word32, 32);
			if (x5_285 == 0x00)
			{
l0000000000000860:
				x5_2181 = ϕ(x5_689, x5_285);
				x5_32_32_1873 = SLICE(x5_2181, word32, 32);
				x1_855 = x3_38 | qwLoc08_1498 << 3;
				if (x1_855 != 0x00)
				{
					x2_860 = x3_38;
					w0_863 = (word32) (x3_38 >> 50);
					x0_32_32_1307 = SLICE(x3_38 >> 50, word32, 32);
					x1_862 = qwLoc08_1498 << 3;
					w0_864 = w0_863 & 0x01;
					x5_2160 = x5_2181;
					goto l0000000000000AD0;
				}
				goto l00000000000010BC;
			}
			if (w0_32 == 0x01)
			{
				x7_351 = (qwLoc08_1498 << 3) - (qwLoc08_1501 << 3);
				x3_354 = x3_38 - x2_35 - (x7_351 < 0x00);
				goto l0000000000000C74;
			}
			x5_2168 = SEQ(x5_32_32_325, w0_32 - 0x01);
			if (x0_24 == 0x7FFF)
				goto l00000000000008D4;
		}
		else
		{
			if (x0_24 == 0x7FFF)
				goto l00000000000008D4;
			x5_2169 = SEQ(x5_32_32_326, w0_32);
		}
		x5_2170 = ϕ(x5_2168, x5_2169);
		x5_32_32_324 = SLICE(x5_2170, word32, 32);
		w5_292 = (word32) x5_2170;
		if (w5_292 <= 116)
		{
			if (w5_292 <= 0x3F)
			{
				w6_323 = 0x40 - w5_292;
				x9_328 = qwLoc08_1501 << 3 >> x5_2170;
				x6_329 = SEQ(x6_32_32_311, w6_323);
				x1_330 = qwLoc08_1501 << 3 << x6_329;
				x0_332 = x2_35 << x6_329;
				x1_334 = (word64) (x1_330 != 0x00);
				x0_335 = x0_332 | x9_328;
				x2_336 = x2_35 >> x5_2170;
				x0_337 = x0_335 | x1_334;
				goto l0000000000000CC4;
			}
			w6_305 = 0x80 - w5_292;
			x0_308 = SEQ(x0_32_32_219, w5_292 - 0x40);
			x0_309 = x2_35 >> x0_308;
			x6_312 = SEQ(x6_32_32_311, w6_305);
			x2_313 = x2_35 << x6_312;
			x2_315 = w5_292 != 0x40 ? x2_313 : 0x00;
			x1_316 = x2_315 | qwLoc08_1501 << 3;
			x1_319 = (word64) (x1_316 != 0x00);
			x0_320 = x0_309 | x1_319;
		}
		else
		{
			x1_297 = x2_35 | qwLoc08_1501 << 3;
			x0_300 = (word64) (x1_297 != 0x00);
		}
		x0_342 = ϕ(x0_320, x0_300);
		x2_321 = 0x00;
l0000000000000CC4:
		x2_348 = ϕ(x2_336, x2_321);
		x2_32_32_441 = SLICE(x2_348, word32, 32);
		x0_341 = ϕ(x0_337, x0_342);
		x0_32_32_1321 = SLICE(x0_341, word32, 32);
		x7_343 = (qwLoc08_1498 << 3) - x0_341;
		x3_350 = x3_38 - x2_348 - (x7_343 < 0x00);
		goto l0000000000000C74;
	}
	if (w0_32 != 0x00)
	{
		x5_32_32_205 = 0x00;
		if (x0_24 == 0x00)
		{
			x4_176 = x3_38 | qwLoc08_1498 << 3;
			x4_32_32_201 = SLICE(x4_176, word32, 32);
			if (x4_176 == 0x00)
			{
				if (x12_25 != 0x7FFF)
				{
					x3_261 = x2_35;
					x7_262 = qwLoc08_1501 << 3;
					x4_263 = x12_25;
					x8_264 = qwArg00_1502 >> 63;
				}
				goto l0000000000000D40;
			}
			if (w0_32 == 0x01)
			{
				x7_244 = (qwLoc08_1501 << 3) - (qwLoc08_1498 << 3);
				x3_247 = x2_35 - x3_38 - (x7_244 < 0x00);
				goto l0000000000000D70;
			}
			if (x12_25 == 0x7FFF)
			{
l0000000000000D40:
				x0_267 = x2_35 | qwLoc08_1501 << 3;
				x0_32_32_1318 = SLICE(x0_267, word32, 32);
				if (x0_267 != 0x00)
				{
					x4_275 = x12_25;
					w0_278 = (word32) (x2_35 >> 50);
					x0_32_32_1313 = SLICE(x2_35 >> 50, word32, 32);
					x8_277 = qwArg00_1502 >> 63;
					w0_279 = w0_278 & 0x01;
					goto l00000000000009C0;
				}
				x4_269 = x12_25;
				x8_271 = qwArg00_1502 >> 63;
				x2_272 = 0x00;
				x1_273 = 0x00;
				goto l00000000000008C4;
			}
			w0_183 = ~w0_32;
		}
		else
		{
			if (x12_25 == 0x7FFF)
				goto l0000000000000D40;
			w0_174 = 0x00 - w0_32;
		}
		x4_32_32_199 = ϕ(x4_32_32_200, x4_32_32_201);
		w0_184 = ϕ(w0_174, w0_183);
		if (w0_184 <= 116)
		{
			if (w0_184 <= 0x3F)
			{
				w5_217 = 0x40 - w0_184;
				x0_220 = SEQ(x0_32_32_219, w0_184);
				x8_221 = qwLoc08_1498 << 3 >> x0_220;
				x5_222 = (uint64) w5_217;
				x7_223 = qwLoc08_1498 << 3 << x5_222;
				x4_225 = x3_38 << x5_222;
				x5_227 = (word64) (x7_223 != 0x00);
				x5_32_32_1889 = SLICE(x5_227, word32, 32);
				x4_228 = x4_225 | x8_221;
				x0_229 = x3_38 >> x0_220;
				x4_230 = x4_228 | x5_227;
				goto l0000000000000DC0;
			}
			w4_195 = w0_184 - 0x40;
			w5_197 = 0x80 - w0_184;
			x4_202 = SEQ(x4_32_32_199, w4_195);
			x4_203 = x3_38 >> x4_202;
			x5_206 = (uint64) w5_197;
			x3_207 = x3_38 << x5_206;
			x3_209 = w0_184 != 0x40 ? x3_207 : 0x00;
			x3_210 = x3_209 | qwLoc08_1498 << 3;
			x0_213 = (word64) (x3_210 != 0x00);
			x4_214 = x4_203 | x0_213;
		}
		else
		{
			x3_189 = x3_38 | qwLoc08_1498 << 3;
			x4_192 = (word64) (x3_189 != 0x00);
		}
		x4_235 = ϕ(x4_214, x4_192);
		x0_215 = 0x00;
l0000000000000DC0:
		x5_32_32_1888 = ϕ(x5_32_32_1889, x5_32_32_205);
		x0_241 = ϕ(x0_229, x0_215);
		x0_32_32_1323 = SLICE(x0_241, word32, 32);
		x4_234 = ϕ(x4_230, x4_235);
		x7_236 = (qwLoc08_1501 << 3) - x4_234;
		x3_243 = x2_35 - x0_241 - (x7_236 < 0x00);
l0000000000000D70:
		x3_2185 = ϕ(x3_247, x3_243);
		x5_32_32_1887 = ϕ(x5_32_32_205, x5_32_32_1888);
		x0_32_32_1322 = ϕ(x0_32_32_219, x0_32_32_1323);
		x7_370 = ϕ(x7_244, x7_236);
		x4_252 = x12_25;
		x8_257 = qwArg00_1502 >> 63;
		x3_2171 = x3_2185;
l0000000000000C74:
		x3_2172 = ϕ(x3_354, x3_350, x3_2171);
		x5_32_32_1884 = ϕ(x5_32_32_325, x5_32_32_324, x5_32_32_1887);
		x0_32_32_1320 = ϕ(x0_32_32_219, x0_32_32_1321, x0_32_32_1322);
		x8_1013 = ϕ(x8_33, x8_33, x8_257);
		x2_32_32_439 = ϕ(x2_32_32_440, x2_32_32_441, x2_32_32_440);
		x4_402 = ϕ(x4_28, x4_28, x4_252);
		x7_369 = ϕ(x7_351, x7_343, x7_370);
		x3_367 = x3_2172;
		x5_368 = 0x00;
		x6_371 = x7_369;
		x8_1012 = ϕ(x8_1013, x8_63, x8_33);
		x2_32_32_438 = ϕ(x2_32_32_439, x2_32_32_440, x2_32_32_440);
		x4_401 = ϕ(x4_402, x4_28, x4_28);
		w4_411 = (word32) x4_401;
		x4_32_32_420 = SLICE(x4_401, word32, 32);
		x5_374 = ϕ(x5_368, x5_65, x5_58);
		x5_32_32_1878 = SLICE(x5_374, word32, 32);
		x6_372 = ϕ(x6_371, x6_61, x6_56);
		x0_373 = __clz(x6_372);
		w0_376 = (word32) x0_373;
		x0_32_32_391 = SLICE(x0_373, word32, 32);
		x3_378 = __clz(x5_374);
		w3_380 = (word32) x3_378;
		x3_32_32_387 = SLICE(x3_378, word32, 32);
		w3_381 = x5_374 == 0x00 ? w0_376 + 0x40 : w3_380;
		if (w3_381 <= 0x4B)
		{
			w3_390 = 0x00 - (w3_381 - 0x0C);
			x0_392 = SEQ(x0_32_32_391, w3_381 - 0x0C);
			x5_393 = x5_374 << x0_392;
			x5_32_32_1877 = SLICE(x5_393, word32, 32);
			x7_394 = x6_372 << x0_392;
			x3_395 = SEQ(x3_32_32_387, w3_390);
			x3_396 = x6_372 >> x3_395;
			x3_397 = x3_396 | x5_393;
		}
		else
		{
			x7_386 = 0x00;
			x3_388 = SEQ(x3_32_32_387, w3_381 - 0x4C);
			x3_389 = x6_372 << x3_388;
		}
		x5_32_32_1876 = ϕ(x5_32_32_1877, x5_32_32_1878);
		x7_428 = ϕ(x7_394, x7_386);
		x3_409 = ϕ(x3_397, x3_389);
		x1_399 = (int64) (w3_381 - 0x0C);
		x1_32_32_445 = SLICE(x1_399, word32, 32);
		if (x4_401 > (int64) (w3_381 - 0x0C))
		{
			x4_408 = x4_401 - x1_399;
			x3_410 = 0x00;
		}
		w4_412 = w3_381 - 0x0C - w4_411;
		if (w4_412 <= 0x3E)
		{
			w1_436 = 0x40 - (w4_412 + 0x01);
			x2_443 = SEQ(x2_32_32_438, w4_412 + 0x01);
			x4_444 = x7_428 >> x2_443;
			x1_446 = SEQ(x1_32_32_445, w1_436);
			x0_447 = x3_409 << x1_446;
			x0_448 = x0_447 | x4_444;
			x1_449 = x7_428 << x1_446;
			x1_452 = (word64) (x1_449 != 0x00);
			x3_453 = x3_409 >> x2_443;
			x7_454 = x0_448 | x1_452;
		}
		else
		{
			w0_418 = 0x80 - (w4_412 + 0x01);
			x4_421 = SEQ(x4_32_32_420, w4_412 - 0x3F);
			x4_422 = x3_409 >> x4_421;
			x0_424 = SEQ(x0_32_32_391, w0_418);
			x3_425 = x3_409 << x0_424;
			x3_427 = w4_412 != 0x3F ? x3_425 : 0x00;
			x3_429 = x7_428 | x3_427;
			x3_432 = (word64) (x3_429 != 0x00);
			x7_433 = x4_422 | x3_432;
			x5_32_32_1879 = ϕ(x5_32_32_1876, x5_32_32_1880);
			x8_1017 = ϕ(x8_1012, x8_155);
			x7_836 = ϕ(x7_433, x7_837);
			x3_434 = 0x00;
		}
		goto l0000000000000E58;
	}
	x12_66 = x3_38 | qwLoc08_1498 << 3;
	x13_67 = x2_35 | qwLoc08_1501 << 3;
	if (x0_24 == 0x00)
	{
		if (x12_66 == 0x00)
		{
			if (x13_67 == 0x00)
			{
				x3_165 = 0x00;
				x7_167 = 0x00;
				x8_169 = (word64) false;
				goto l0000000000000E58;
			}
			x3_160 = x2_35;
			x7_161 = qwLoc08_1501 << 3;
		}
		else
		{
			if (x13_67 == 0x00)
				goto l0000000000000E58;
			x4_142 = (qwLoc08_1498 << 3) - (qwLoc08_1501 << 3);
			x31_143 = (qwLoc08_1498 << 3) - (qwLoc08_1501 << 3);
			x0_146 = x3_38 - x2_35 - (x31_143 < 0x00);
			x7_156 = (qwLoc08_1501 << 3) - (qwLoc08_1498 << 3);
			x3_159 = x2_35 - x3_38 - (x7_156 < 0x00);
		}
		x3_842 = ϕ(x3_160, x3_159);
		x7_838 = ϕ(x7_161, x7_156);
		x8_163 = qwArg00_1502 >> 63;
l0000000000000E58:
		x5_32_32_1875 = ϕ(x5_32_32_1876, x5_32_32_1879, x5_32_32_326, x5_32_32_326, x5_32_32_326, x5_32_32_326, x5_32_32_1883, x5_32_32_326, x5_32_32_326, x5_32_32_326);
		x8_1010 = ϕ(x8_1012, x8_1017, x8_169, x8_163, x8_33, x8_33, x8_1018, x8_33, x8_33, x8_33);
		x3_841 = ϕ(x3_453, x3_434, x3_165, x3_842, x3_38, x3_149, x3_843, x3_38, x3_578, x3_571);
		x7_835 = ϕ(x7_454, x7_836, x7_167, x7_838, x7_39, x7_150, x7_839, x7_39, x7_576, x7_572);
		x0_845 = x7_835 | x3_841;
		x0_32_32_1309 = SLICE(x0_845, word32, 32);
		x2_846 = x3_841;
		x1_848 = x7_835;
		w5_850 = (word32) (x0_845 != 0x00);
		x4_851 = 0x00;
		x5_2182 = SEQ(x5_32_32_1875, w5_850);
		x5_2184 = ϕ(x5_2182, x5_2183);
		x0_32_32_1308 = ϕ(x0_32_32_1309, x0_32_32_1310);
		x4_1082 = ϕ(x4_851, x4_489);
		x2_1057 = ϕ(x2_846, x2_493);
		x8_1009 = ϕ(x8_1010, x8_33);
		x1_866 = ϕ(x1_848, x1_492);
		w0_852 = 0x00;
		x5_2161 = x5_2184;
l0000000000000AD0:
		x5_2167 = ϕ(x5_2160, x5_2161, x5_2162, x5_2163, x5_2164, x5_2165, x5_2166);
		x0_32_32_1306 = ϕ(x0_32_32_1307, x0_32_32_1308, x0_32_32_1311, x0_32_32_1334, x0_32_32_1350, x0_32_32_1351, x0_32_32_1310);
		x4_1081 = ϕ(x4_28, x4_1082, x4_1083, x4_570, x4_106, x4_582, x4_1089);
		x2_1056 = ϕ(x2_860, x2_1057, x2_1058, x2_1061, x2_104, x2_580, x2_1063);
		x8_1007 = ϕ(x8_33, x8_1009, x8_1019, x8_1027, x8_103, x8_33, x8_33);
		w8_1163 = (word32) x8_1007;
		x8_32_32_1170 = SLICE(x8_1007, word32, 32);
		w0_903 = ϕ(w0_864, w0_852, w0_904, w0_905, w0_107, w0_581, w0_486);
		w5_881 = (word32) x5_2167;
		x1_865 = ϕ(x1_862, x1_866, x1_867, x1_871, x1_105, x1_574, x1_875);
		if (w5_881 == 0x00 || (w0_903 & 0x10) != 0x00 && (w10_916 & 0x0800) == 0x00)
		{
l00000000000010FC:
			x2_2175 = ϕ(x2_2174, x2_1056, x2_1056);
			w0_1131 = ϕ(w0_1004, w0_1073, w0_903, w0_903);
			x2_1140 = x2_2175;
			x4_1093 = x4_1081 + 0x01;
			if (x4_1093 != 0x7FFF)
				x2_1141 = 0x00;
			else
			{
				x1_1103 = 0x00;
				x4_1146 = ϕ(x4_1093, x4_1128, x4_1123, x4_1113);
				x1_1133 = ϕ(x1_1103, x1_1127, x1_1122, x1_1112);
				w0_1132 = w0_1131 | 0x14;
				x2_1134 = x1_1133;
			}
			w0_1237 = ϕ(w0_1131, w0_1131, w0_1132);
			x4_1145 = ϕ(x4_1081, x4_1093, x4_1146);
			x2_1143 = ϕ(x2_1140, x2_1141, x2_1134);
			x1_1144 = __ror(x2_1143, 3);
			x31_1147 = x4_1145 - 0x7FFF;
			x2_1149 = x2_1143 >> 3;
			if (x31_1147 == 0x00)
			{
				x3_1151 = x1_1144 | x2_1149;
				x2_1155 = x3_1151 != 0x00 ? x2_1149 : 0x00;
			}
			x2_1158 = ϕ(x2_1149, x2_1155);
			__bfm(x2_1158, 0, 47);
			x8_1172 = SEQ(x8_32_32_1170, w8_1163 << 0x0F);
			x7_1173 = __bfm(x8_1172, 16, 0x0F);
			q0_1235 = SEQ(q0_64_64_1180, x1_1144);
			q0_1235[1].qw0000 = x7_1173;
			x0_1358 = SEQ(x0_32_32_1306, w0_1237);
			if (w0_1237 != 0x00)
				__sfp_handle_exceptions(x0_1358, sysreg3_3_4_4_1);
			return;
		}
l00000000000010F8:
		x2_2187 = ϕ(x2_2186, x2_1056, x2_1056);
		w0_1069 = ϕ(w0_1004, w0_903, w0_903);
		w0_1073 = w0_1069 | 0x08;
		x2_2174 = x2_2187;
		goto l00000000000010FC;
	}
	x0_32_32_1340 = 0x00;
	if (x0_24 == 0x7FFF)
	{
		if (x12_66 != 0x00)
		{
			x31_82 = x12_25 - x0_24;
			w0_85 = (word32) (x3_38 >> 50);
			x0_32_32_1338 = SLICE(x3_38 >> 50, word32, 32);
			w0_86 = w0_85 & 0x01;
			if (x31_82 == 0x00)
				goto l0000000000000ED8;
			goto l0000000000000F40;
		}
		x31_76 = x12_25 - x0_24;
		if (x31_76 != 0x00)
		{
			w0_80 = 0x00;
			goto l0000000000000F34;
		}
	}
	else if (x12_25 != 0x7FFF)
	{
		w0_75 = 0x00;
		if (x12_66 == 0x00)
			goto l0000000000000F34;
l0000000000000F40:
		x0_32_32_1341 = ϕ(x0_32_32_1338, x0_32_32_1340);
		w0_908 = ϕ(w0_86, w0_75);
		if (x13_67 == 0x00)
			goto l0000000000000BA0;
		goto l0000000000000EE8;
	}
	w0_79 = 0x00;
l0000000000000ED8:
	x0_32_32_1337 = ϕ(x0_32_32_1338, x0_32_32_1340);
	w0_100 = ϕ(w0_86, w0_79);
	if (x13_67 == 0x00)
	{
		if (x12_66 != 0x00)
			goto l0000000000000BA0;
		goto l00000000000011F0;
	}
	w0_101 = 0x01;
	if (x12_66 != 0x00)
	{
l0000000000000EE8:
		x0_32_32_1336 = ϕ(x0_32_32_1337, x0_32_32_1341);
		w0_907 = ϕ(w0_101, w0_908);
		x4_121 = x3_38 >> 3;
		x1_122 = x3_38 << 61;
		x4_133 = x2_35 >> 3;
		x1_134 = x2_35 << 61;
		x8_137 = qwArg00_1502 >> 63;
		x8_1028 = ϕ(x8_33, x8_33, x8_137);
		x1_140 = ϕ(x1_122, x1_122, x1_134);
		x4_138 = ϕ(x4_121, x4_121, x4_133);
		x2_139 = __ror(x4_138, 61);
		x1_141 = x1_140 << 3;
		goto l0000000000000B90;
	}
l0000000000000F34:
	x0_32_32_1342 = ϕ(x0_32_32_1337, x0_32_32_1340, x0_32_32_1340);
	w0_909 = ϕ(w0_101, w0_80, w0_75);
	if (x13_67 != 0x00)
	{
		x8_111 = qwArg00_1502 >> 63;
		goto l0000000000000B90;
	}
l00000000000011F0:
	x0_32_32_1350 = ϕ(x0_32_32_1342, x0_32_32_1337);
	x8_103 = 0x00;
	x2_104 = ~0xFFF8;
	x1_105 = ~0x07;
	x4_106 = 0x7FFF;
	w0_107 = 0x01;
	x5_2164 = SEQ(x5_32_32_326, w0_32);
	goto l0000000000000AD0;
}

// 0000000000001208: void __sfp_handle_exceptions(Register word64 x0, Register word64 sysreg3_3_4_4_1)
// Called from:
//      __addtf3
void __sfp_handle_exceptions(word64 x0, word64 sysreg3_3_4_4_1)
{
	ui32 w0 = (word32) x0;
	if ((w0 & 0x01) != 0x00)
	{
		__movi_i32(0x00);
		__mrs(sysreg3_3_4_4_1);
	}
	if ((w0 & 0x02) != 0x00)
	{
		__movi_i32(0x00);
		__mrs(sysreg3_3_4_4_1);
	}
	if ((w0 & 0x04) != 0x00)
		__mrs(sysreg3_3_4_4_1);
	if ((w0 & 0x08) != 0x00)
	{
		__movi_i32(0x80000000800000);
		__mrs(sysreg3_3_4_4_1);
	}
	if ((w0 & 0x10) != 0x00)
		__mrs(sysreg3_3_4_4_1);
}

