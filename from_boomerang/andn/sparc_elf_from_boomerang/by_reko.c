// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0001049C: void _start(Register word32 g1, Register word32 o7, Stack word32 dwArg40)
void _start(word32 g1, word32 o7, word32 dwArg40)
{
	if (g1 == 0x00)
	{
		atexit();
		globals->ptr20944 = fp + 0x44 + ((_init(o7) << 0x02) + 0x04);
		main();
		exit();
		_exit();
	}
	else
		atexit();
}

// 00010510: Register word32 fn00010510(Register word32 o7, Register word32 l7)
word32 fn00010510(word32 o7, word32 l7)
{
	return o7 + l7;
}

// 00010518: void __do_global_dtors_aux(Register word32 o7)
void __do_global_dtors_aux(word32 o7)
{
	struct Eq_39 * l7_114 = fn00010510(o7, 66164);
	word32 o2_26 = (word32) *l7_114->ptr000C;
	if (o2_26 == 0x00)
	{
		<anonymous> *** o0_54 = l7_114->ptr0010;
		<anonymous> * o1_56 = **o0_54;
		if (o1_56 != null)
		{
			<anonymous> *** l0_118 = o0_54;
			<anonymous> ** o0_126 = (char *) *o0_54 + 0x04;
			while (true)
			{
				*l0_118 = (<anonymous> ***) o0_126;
				word32 sp_97;
				word32 i0_98;
				word32 o0_99;
				word32 i1_100;
				word32 o1_101;
				word32 i2_102;
				word32 o2_103;
				word32 i3_104;
				word32 o3_105;
				word32 i4_106;
				word32 o4_107;
				word32 i5_108;
				word32 o5_109;
				word32 i6_110;
				word32 i7_111;
				word32 o7_112;
				word32 l1_113;
				word32 g0_115;
				byte NZVC_116;
				bool Z_117;
				o1_56();
				<anonymous> ** o0_119 = *l0_118;
				if (*o0_119 == null)
					break;
				o0_126 = (<anonymous> **) ((char *) o0_119 + 0x04);
			}
		}
		if (l7_114->dw0024 != 0x00)
			fn00020814();
		*l7_114->ptr000C = 0x01;
	}
	return;
}

// 000105C8: void call___do_global_dtors_aux()
void call___do_global_dtors_aux()
{
	return;
}

// 000105D8: void frame_dummy(Register word32 o7)
void frame_dummy(word32 o7)
{
	struct Eq_39 * l7_22 = fn00010510(o7, 0x000101B4);
	if (l7_22->dw0020 == 0x00)
	{
		if (*l7_22->ptr0014 != 0x00)
		{
			if (l7_22->dw001C != 0x00)
				fn0002082C();
		}
		return;
	}
	else
		fn00020820();
}

// 0001065C: void call_frame_dummy()
void call_frame_dummy()
{
	return;
}

// 0001066C: void main()
void main()
{
	printf();
}

// 000106C4: Register word32 fn000106C4(Register word32 o7, Register word32 l7)
word32 fn000106C4(word32 o7, word32 l7)
{
	return o7 + l7;
}

// 000106CC: Register (ptr word32) __do_global_ctors_aux(Register word32 o7)
word32 * __do_global_ctors_aux(word32 o7)
{
	word32 * l0_30;
	struct Eq_161 * l7_22 = fn000106C4(o7, 0x000100C0);
	struct Eq_166 * o1_25 = l7_22->ptr0018;
	<anonymous> * o0_26 = o1_25->ptrFFFFFFFC;
	if (o0_26 != (<anonymous> *) ~0x00)
	{
		do
		{
			word32 sp_55;
			word32 i0_56;
			word32 o0_57;
			word32 i1_58;
			word32 o1_59;
			word32 i2_60;
			word32 o2_61;
			word32 i3_62;
			word32 o3_63;
			word32 i4_64;
			word32 o4_65;
			word32 i5_66;
			word32 o5_67;
			word32 i6_68;
			word32 i7_69;
			word32 o7_70;
			word32 l7_71;
			word32 g0_72;
			byte NZVC_73;
			bool Z_74;
			o0_26();
		} while (*l0_30 != ~0x00);
	}
	else
		l0_30 = (word32 *) &o1_25->ptrFFFFFFFC;
	return l0_30;
}

// 0001071C: void call___do_global_ctors_aux()
void call___do_global_ctors_aux()
{
	return;
}

// 0001072C: Register word32 _init(Register word32 o7)
word32 _init(word32 o7)
{
	frame_dummy(o7);
	return __do_global_ctors_aux(o7);
}

// 00010748: void _fini(Register word32 o7)
void _fini(word32 o7)
{
	__do_global_dtors_aux(o7);
	return;
}

// 000207C0: void _PROCEDURE_LINKAGE_TABLE_()
void _PROCEDURE_LINKAGE_TABLE_()
{
fn000207C0_entry:
l000207C0:
l000207C0:
fn000207C0_exit:
}

// 000207F0: void atexit()
void atexit()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 000207FC: void exit()
void exit()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 00020808: void _exit()
void _exit()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 00020814: void fn00020814()
void fn00020814()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 00020820: void fn00020820()
void fn00020820()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 0002082C: void fn0002082C()
void fn0002082C()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

// 00020838: void printf()
void printf()
{
	_PROCEDURE_LINKAGE_TABLE_();
	return;
}

