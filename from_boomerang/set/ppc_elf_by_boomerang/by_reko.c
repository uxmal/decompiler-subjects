// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 10000298: Register word32 _init(Register (ptr Eq_3) lr, Stack word32 dwArg04)
word32 _init(Eq_3 * lr, word32 dwArg04)
{
	word32 r30_8 = call_gmon_start(lr, dwLoc1C);
	frame_dummy(lr);
	__do_global_ctors_aux(lr);
	return r30_8;
}

// 100002C0: void _start()
void _start()
{
	(fp & ~0x0F)->dwFFFFFFF0 = fp & ~0x0F;
	(fp & ~0x0F)->dwFFFFFFF0 = 0x00;
}

// 100002E4: Register (ptr Eq_3) call_gmon_start(Register (ptr Eq_3) lr, Stack word32 dwArg04)
Eq_3 * call_gmon_start(Eq_3 * lr, word32 dwArg04)
{
	fn1001093C();
	if (Test(EQ,cond(lr->dw000C)))
		return r30;
	else
		return lr;
}

// 10000324: Register ptr32 __do_global_dtors_aux(Stack word32 dwArg04)
ptr32 __do_global_dtors_aux(word32 dwArg04)
{
	if (Test(EQ,cond(globals->t100109B0)))
	{
		word32 * r11_34 = globals->ptr10010938;
		if (Test(NE,cond(*r11_34)))
		{
			globals->ptr10010938 = r11_34 + 0x01;
			return fp + -0x0020;
		}
		globals->t100109B0.u0 = 0x01;
	}
	return fp;
}

// 1000039C: void call___do_global_dtors_aux(Stack word32 dwArg04)
void call___do_global_dtors_aux(word32 dwArg04)
{
	return;
}

// 100003B8: void frame_dummy(Stack (ptr Eq_3) dwArg04)
void frame_dummy(Eq_3 * dwArg04)
{
	word32 r0_13 = globals->dw10010858;
	byte cr6_11 = cond(0x00);
	byte cr7_14 = cond(r0_13);
	if (Test(NE,cr7_14) && Test(NE,cr6_11))
	{
		word32 r1_23;
		word32 r0_24;
		word32 lr_25;
		word32 r11_26;
		word32 r9_27;
		word32 r3_28;
		byte cr6_29;
		byte cr7_30;
		fn10000000();
	}
	return;
}

// 100003FC: void call_frame_dummy(Stack word32 dwArg04)
void call_frame_dummy(word32 dwArg04)
{
	return;
}

// 10000418: void main(Register word32 r3, Stack word32 dwArg04)
void main(word32 r3, word32 dwArg04)
{
	__crxor(0x06, 0x06, 0x06);
	printf@@GLIBC_2.0();
	return;
}

// 10000498: void __libc_csu_fini(Stack word32 dwArg04)
void __libc_csu_fini(word32 dwArg04)
{
	word32 r5_15 = globals->dw10000494;
	struct Eq_106 * r30_17 = r5_15 + 0x100004A4;
	int32 r11_18 = r30_17->dwFFFF8004;
	word32 r4_19 = r30_17->dwFFFF8000;
	int32 r0_20 = r4_19 - r11_18;
	byte cr0_22 = cond(r0_20 >> 0x02);
	int32 r31_23 = (r0_20 >> 0x02) + -0x01;
	if (Test(NE,cr0_22))
	{
		while (true)
		{
			Eq_128 r8_47 = r31_23 << 0x02;
			<anonymous> * r7_50 = *((word32) r8_47 + r11_18);
			word32 r1_53;
			word32 r6_54;
			word32 lr_55;
			struct Eq_137 * r30_56;
			word32 r29_58;
			word32 r5_59;
			word32 r11_60;
			word32 r4_61;
			word32 r0_62;
			word32 r3_63;
			byte cr0_64;
			word32 r8_65;
			word32 r7_66;
			word32 ctr_67;
			word32 r9_68;
			r7_50();
			if (Test(EQ,cond(r29_58)))
				break;
			r11_18 = r30_56->dwFFFF8004;
		}
	}
	_fini(dwLoc1C);
	return;
}

// 10000528: void __libc_csu_init(Stack word32 dwArg04)
void __libc_csu_init(word32 dwArg04)
{
	struct Eq_160 * r30_21 = _init(&globals->t10000534, dwLoc1C);
	int32 r28_22 = r30_21->dwFFFF800C;
	word32 r4_24 = r30_21->dwFFFF8008;
	int32 r3_25 = r4_24 - r28_22;
	int32 r31_23 = 0x00;
	byte cr0_27 = cond(0x00 - (r3_25 >> 0x02));
	if (Test(LT,cr0_27))
	{
		do
		{
			Eq_185 r7_49 = r31_23 << 0x02;
			<anonymous> * r0_51 = *((word32) r7_49 + r28_22);
			word32 r1_54;
			word32 r6_55;
			word32 lr_56;
			word32 r30_57;
			word32 r5_60;
			int32 r29_61;
			word32 r4_62;
			word32 r3_63;
			word32 r0_64;
			byte cr0_65;
			word32 r7_66;
			word32 ctr_67;
			word32 r8_68;
			r0_51();
		} while (Test(LT,cond(r31_23 - r29_61)));
	}
	return;
}

// 100005B4: void _savefpr_14(Register (ptr Eq_207) r11, Register real64 f14, Register real64 f15, Register real64 f16, Register real64 f17, Register real64 f18, Register real64 f19, Register real64 f20, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_14(Eq_207 * r11, real64 f14, real64 f15, real64 f16, real64 f17, real64 f18, real64 f19, real64 f20, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFF70 = f14;
	_savefpr_15(r11, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
	return;
}

// 100005B8: void _savefpr_15(Register (ptr Eq_207) r11, Register real64 f15, Register real64 f16, Register real64 f17, Register real64 f18, Register real64 f19, Register real64 f20, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_15(Eq_207 * r11, real64 f15, real64 f16, real64 f17, real64 f18, real64 f19, real64 f20, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFF78 = f15;
	_savefpr_16(r11, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
	return;
}

// 100005BC: void _savefpr_16(Register (ptr Eq_207) r11, Register real64 f16, Register real64 f17, Register real64 f18, Register real64 f19, Register real64 f20, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_16(Eq_207 * r11, real64 f16, real64 f17, real64 f18, real64 f19, real64 f20, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFF80 = f16;
	_savefpr_17(r11, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
	return;
}

// 100005C0: void _savefpr_17(Register (ptr Eq_207) r11, Register real64 f17, Register real64 f18, Register real64 f19, Register real64 f20, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_17(Eq_207 * r11, real64 f17, real64 f18, real64 f19, real64 f20, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFF88 = f17;
	_savefpr_18(r11, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
	return;
}

// 100005C4: void _savefpr_18(Register (ptr Eq_207) r11, Register real64 f18, Register real64 f19, Register real64 f20, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_18(Eq_207 * r11, real64 f18, real64 f19, real64 f20, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFF90 = f18;
	_savefpr_19(r11, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
	return;
}

// 100005C8: void _savefpr_19(Register (ptr Eq_207) r11, Register real64 f19, Register real64 f20, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_19(Eq_207 * r11, real64 f19, real64 f20, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFF98 = f19;
	_savefpr_20(r11, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
	return;
}

// 100005CC: void _savefpr_20(Register (ptr Eq_207) r11, Register real64 f20, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_20(Eq_207 * r11, real64 f20, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFA0 = f20;
	_savefpr_21(r11, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
	return;
}

// 100005D0: void _savefpr_21(Register (ptr Eq_207) r11, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_21(Eq_207 * r11, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFA8 = f21;
	_savefpr_22(r11, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
	return;
}

// 100005D4: void _savefpr_22(Register (ptr Eq_207) r11, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_22(Eq_207 * r11, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFB0 = f22;
	_savefpr_23(r11, f23, f24, f25, f26, f27, f28, f29, f30, f31);
	return;
}

// 100005D8: void _savefpr_23(Register (ptr Eq_207) r11, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_23(Eq_207 * r11, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFB8 = f23;
	_savefpr_24(r11, f24, f25, f26, f27, f28, f29, f30, f31);
	return;
}

// 100005DC: void _savefpr_24(Register (ptr Eq_207) r11, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_24(Eq_207 * r11, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFC0 = f24;
	_savefpr_25(r11, f25, f26, f27, f28, f29, f30, f31);
	return;
}

// 100005E0: void _savefpr_25(Register (ptr Eq_207) r11, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_25(Eq_207 * r11, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFC8 = f25;
	_savefpr_26(r11, f26, f27, f28, f29, f30, f31);
	return;
}

// 100005E4: void _savefpr_26(Register (ptr Eq_207) r11, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_26(Eq_207 * r11, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFD0 = f26;
	_savefpr_27(r11, f27, f28, f29, f30, f31);
	return;
}

// 100005E8: void _savefpr_27(Register (ptr Eq_207) r11, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_27(Eq_207 * r11, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFD8 = f27;
	_savefpr_28(r11, f28, f29, f30, f31);
	return;
}

// 100005EC: void _savefpr_28(Register (ptr Eq_207) r11, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_28(Eq_207 * r11, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFE0 = f28;
	_savefpr_29(r11, f29, f30, f31);
	return;
}

// 100005F0: void _savefpr_29(Register (ptr Eq_207) r11, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_29(Eq_207 * r11, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFE8 = f29;
	_savefpr_30(r11, f30, f31);
	return;
}

// 100005F4: void _savefpr_30(Register (ptr Eq_207) r11, Register real64 f30, Register real64 f31)
void _savefpr_30(Eq_207 * r11, real64 f30, real64 f31)
{
	r11->rFFFFFFF0 = f30;
	_savefpr_31(r11, f31);
	return;
}

// 100005F8: void _savefpr_31(Register (ptr Eq_207) r11, Register real64 f31)
void _savefpr_31(Eq_207 * r11, real64 f31)
{
	r11->rFFFFFFF8 = f31;
	return;
}

// 10000600: void _savegpr_14(Register (ptr Eq_501) r11, Register word32 r14, Register word32 r15, Register word32 r16, Register word32 r17, Register word32 r18, Register word32 r19, Register word32 r20, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_14(Eq_501 * r11, word32 r14, word32 r15, word32 r16, word32 r17, word32 r18, word32 r19, word32 r20, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFB8 = r14;
	_savegpr_15(r11, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
	return;
}

// 10000604: void _savegpr_15(Register (ptr Eq_501) r11, Register word32 r15, Register word32 r16, Register word32 r17, Register word32 r18, Register word32 r19, Register word32 r20, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_15(Eq_501 * r11, word32 r15, word32 r16, word32 r17, word32 r18, word32 r19, word32 r20, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFBC = r15;
	_savegpr_16(r11, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
	return;
}

// 10000608: void _savegpr_16(Register (ptr Eq_501) r11, Register word32 r16, Register word32 r17, Register word32 r18, Register word32 r19, Register word32 r20, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_16(Eq_501 * r11, word32 r16, word32 r17, word32 r18, word32 r19, word32 r20, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFC0 = r16;
	_savegpr_17(r11, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
	return;
}

// 1000060C: void _savegpr_17(Register (ptr Eq_501) r11, Register word32 r17, Register word32 r18, Register word32 r19, Register word32 r20, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_17(Eq_501 * r11, word32 r17, word32 r18, word32 r19, word32 r20, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFC4 = r17;
	_savegpr_18(r11, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
	return;
}

// 10000610: void _savegpr_18(Register (ptr Eq_501) r11, Register word32 r18, Register word32 r19, Register word32 r20, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_18(Eq_501 * r11, word32 r18, word32 r19, word32 r20, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFC8 = r18;
	_savegpr_19(r11, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
	return;
}

// 10000614: void _savegpr_19(Register (ptr Eq_501) r11, Register word32 r19, Register word32 r20, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_19(Eq_501 * r11, word32 r19, word32 r20, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFCC = r19;
	_savegpr_20(r11, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
	return;
}

// 10000618: void _savegpr_20(Register (ptr Eq_501) r11, Register word32 r20, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_20(Eq_501 * r11, word32 r20, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFD0 = r20;
	_savegpr_21(r11, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
	return;
}

// 1000061C: void _savegpr_21(Register (ptr Eq_501) r11, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_21(Eq_501 * r11, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFD4 = r21;
	_savegpr_22(r11, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
	return;
}

// 10000620: void _savegpr_22(Register (ptr Eq_501) r11, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_22(Eq_501 * r11, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFD8 = r22;
	_savegpr_23(r11, r23, r24, r25, r26, r27, r28, r29, r30, r31);
	return;
}

// 10000624: void _savegpr_23(Register (ptr Eq_501) r11, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_23(Eq_501 * r11, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFDC = r23;
	_savegpr_24(r11, r24, r25, r26, r27, r28, r29, r30, r31);
	return;
}

// 10000628: void _savegpr_24(Register (ptr Eq_501) r11, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_24(Eq_501 * r11, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFE0 = r24;
	_savegpr_25(r11, r25, r26, r27, r28, r29, r30, r31);
	return;
}

// 1000062C: void _savegpr_25(Register (ptr Eq_501) r11, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_25(Eq_501 * r11, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFE4 = r25;
	_savegpr_26(r11, r26, r27, r28, r29, r30, r31);
	return;
}

// 10000630: void _savegpr_26(Register (ptr Eq_501) r11, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_26(Eq_501 * r11, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFE8 = r26;
	_savegpr_27(r11, r27, r28, r29, r30, r31);
	return;
}

// 10000634: void _savegpr_27(Register (ptr Eq_501) r11, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_27(Eq_501 * r11, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFEC = r27;
	_savegpr_28(r11, r28, r29, r30, r31);
	return;
}

// 10000638: void _savegpr_28(Register (ptr Eq_501) r11, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_28(Eq_501 * r11, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFF0 = r28;
	_savegpr_29(r11, r29, r30, r31);
	return;
}

// 1000063C: void _savegpr_29(Register (ptr Eq_501) r11, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_29(Eq_501 * r11, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFF4 = r29;
	_savegpr_30(r11, r30, r31);
	return;
}

// 10000640: void _savegpr_30(Register (ptr Eq_501) r11, Register word32 r30, Register word32 r31)
void _savegpr_30(Eq_501 * r11, word32 r30, word32 r31)
{
	r11->dwFFFFFFF8 = r30;
	_savegpr_31(r11, r31);
	return;
}

// 10000644: void _savegpr_31(Register (ptr Eq_501) r11, Register word32 r31)
void _savegpr_31(Eq_501 * r11, word32 r31)
{
	r11->dwFFFFFFFC = r31;
	return;
}

// 1000064C: void _restfpr_14(Register word32 r11)
void _restfpr_14(word32 r11)
{
	_restfpr_15(r11);
	return;
}

// 10000650: void _restfpr_15(Register word32 r11)
void _restfpr_15(word32 r11)
{
	_restfpr_16(r11);
	return;
}

// 10000654: void _restfpr_16(Register word32 r11)
void _restfpr_16(word32 r11)
{
	_restfpr_17(r11);
	return;
}

// 10000658: void _restfpr_17(Register word32 r11)
void _restfpr_17(word32 r11)
{
	_restfpr_18(r11);
	return;
}

// 1000065C: void _restfpr_18(Register word32 r11)
void _restfpr_18(word32 r11)
{
	_restfpr_19(r11);
	return;
}

// 10000660: void _restfpr_19(Register word32 r11)
void _restfpr_19(word32 r11)
{
	_restfpr_20(r11);
	return;
}

// 10000664: void _restfpr_20(Register word32 r11)
void _restfpr_20(word32 r11)
{
	_restfpr_21(r11);
	return;
}

// 10000668: void _restfpr_21(Register word32 r11)
void _restfpr_21(word32 r11)
{
	_restfpr_22(r11);
	return;
}

// 1000066C: void _restfpr_22(Register word32 r11)
void _restfpr_22(word32 r11)
{
	_restfpr_23(r11);
	return;
}

// 10000670: void _restfpr_23(Register word32 r11)
void _restfpr_23(word32 r11)
{
	_restfpr_24(r11);
	return;
}

// 10000674: void _restfpr_24(Register word32 r11)
void _restfpr_24(word32 r11)
{
	_restfpr_25(r11);
	return;
}

// 10000678: void _restfpr_25(Register word32 r11)
void _restfpr_25(word32 r11)
{
	_restfpr_26(r11);
	return;
}

// 1000067C: void _restfpr_26(Register word32 r11)
void _restfpr_26(word32 r11)
{
	_restfpr_27(r11);
	return;
}

// 10000680: void _restfpr_27(Register word32 r11)
void _restfpr_27(word32 r11)
{
	_restfpr_28(r11);
	return;
}

// 10000684: void _restfpr_28(Register word32 r11)
void _restfpr_28(word32 r11)
{
	_restfpr_29(r11);
	return;
}

// 10000688: void _restfpr_29(Register word32 r11)
void _restfpr_29(word32 r11)
{
	_restfpr_30(r11);
	return;
}

// 1000068C: void _restfpr_30(Register word32 r11)
void _restfpr_30(word32 r11)
{
	_restfpr_31(r11);
	return;
}

// 10000690: void _restfpr_31(Register word32 r11)
void _restfpr_31(word32 r11)
{
	return;
}

// 10000698: void _restgpr_14(Register word32 r11)
void _restgpr_14(word32 r11)
{
	_restgpr_15(r11);
	return;
}

// 1000069C: void _restgpr_15(Register word32 r11)
void _restgpr_15(word32 r11)
{
	_restgpr_16(r11);
	return;
}

// 100006A0: void _restgpr_16(Register word32 r11)
void _restgpr_16(word32 r11)
{
	_restgpr_17(r11);
	return;
}

// 100006A4: void _restgpr_17(Register word32 r11)
void _restgpr_17(word32 r11)
{
	_restgpr_18(r11);
	return;
}

// 100006A8: void _restgpr_18(Register word32 r11)
void _restgpr_18(word32 r11)
{
	_restgpr_19(r11);
	return;
}

// 100006AC: void _restgpr_19(Register word32 r11)
void _restgpr_19(word32 r11)
{
	_restgpr_20(r11);
	return;
}

// 100006B0: void _restgpr_20(Register word32 r11)
void _restgpr_20(word32 r11)
{
	_restgpr_21(r11);
	return;
}

// 100006B4: void _restgpr_21(Register word32 r11)
void _restgpr_21(word32 r11)
{
	_restgpr_22(r11);
	return;
}

// 100006B8: void _restgpr_22(Register word32 r11)
void _restgpr_22(word32 r11)
{
	_restgpr_23(r11);
	return;
}

// 100006BC: void _restgpr_23(Register word32 r11)
void _restgpr_23(word32 r11)
{
	_restgpr_24(r11);
	return;
}

// 100006C0: void _restgpr_24(Register word32 r11)
void _restgpr_24(word32 r11)
{
	_restgpr_25(r11);
	return;
}

// 100006C4: void _restgpr_25(Register word32 r11)
void _restgpr_25(word32 r11)
{
	_restgpr_26(r11);
	return;
}

// 100006C8: void _restgpr_26(Register word32 r11)
void _restgpr_26(word32 r11)
{
	_restgpr_27(r11);
	return;
}

// 100006CC: void _restgpr_27(Register word32 r11)
void _restgpr_27(word32 r11)
{
	_restgpr_28(r11);
	return;
}

// 100006D0: void _restgpr_28(Register word32 r11)
void _restgpr_28(word32 r11)
{
	_restgpr_29(r11);
	return;
}

// 100006D4: void _restgpr_29(Register word32 r11)
void _restgpr_29(word32 r11)
{
	_restgpr_30(r11);
	return;
}

// 100006D8: void _restgpr_30(Register word32 r11)
void _restgpr_30(word32 r11)
{
	_restgpr_31(r11);
	return;
}

// 100006DC: void _restgpr_31(Register word32 r11)
void _restgpr_31(word32 r11)
{
	return;
}

// 100006E4: void _restfpr_14_x(Register word32 r11)
void _restfpr_14_x(word32 r11)
{
	_restfpr_15_x(r11);
	return;
}

// 100006E8: void _restfpr_15_x(Register word32 r11)
void _restfpr_15_x(word32 r11)
{
	_restfpr_16_x(r11);
	return;
}

// 100006EC: void _restfpr_16_x(Register word32 r11)
void _restfpr_16_x(word32 r11)
{
	_restfpr_17_x(r11);
	return;
}

// 100006F0: void _restfpr_17_x(Register word32 r11)
void _restfpr_17_x(word32 r11)
{
	_restfpr_18_x(r11);
	return;
}

// 100006F4: void _restfpr_18_x(Register word32 r11)
void _restfpr_18_x(word32 r11)
{
	_restfpr_19_x(r11);
	return;
}

// 100006F8: void _restfpr_19_x(Register word32 r11)
void _restfpr_19_x(word32 r11)
{
	_restfpr_20_x(r11);
	return;
}

// 100006FC: void _restfpr_20_x(Register word32 r11)
void _restfpr_20_x(word32 r11)
{
	_restfpr_21_x(r11);
	return;
}

// 10000700: void _restfpr_21_x(Register word32 r11)
void _restfpr_21_x(word32 r11)
{
	_restfpr_22_x(r11);
	return;
}

// 10000704: void _restfpr_22_x(Register word32 r11)
void _restfpr_22_x(word32 r11)
{
	_restfpr_23_x(r11);
	return;
}

// 10000708: void _restfpr_23_x(Register word32 r11)
void _restfpr_23_x(word32 r11)
{
	_restfpr_24_x(r11);
	return;
}

// 1000070C: void _restfpr_24_x(Register word32 r11)
void _restfpr_24_x(word32 r11)
{
	_restfpr_25_x(r11);
	return;
}

// 10000710: void _restfpr_25_x(Register word32 r11)
void _restfpr_25_x(word32 r11)
{
	_restfpr_26_x(r11);
	return;
}

// 10000714: void _restfpr_26_x(Register word32 r11)
void _restfpr_26_x(word32 r11)
{
	_restfpr_27_x(r11);
	return;
}

// 10000718: void _restfpr_27_x(Register word32 r11)
void _restfpr_27_x(word32 r11)
{
	_restfpr_28_x(r11);
	return;
}

// 1000071C: void _restfpr_28_x(Register word32 r11)
void _restfpr_28_x(word32 r11)
{
	_restfpr_29_x(r11);
	return;
}

// 10000720: void _restfpr_29_x(Register word32 r11)
void _restfpr_29_x(word32 r11)
{
	_restfpr_30_x(r11);
	return;
}

// 10000724: void _restfpr_30_x(Register word32 r11)
void _restfpr_30_x(word32 r11)
{
	_restfpr_31_x(r11);
	return;
}

// 10000728: void _restfpr_31_x(Register word32 r11)
void _restfpr_31_x(word32 r11)
{
	return;
}

// 1000073C: void _restgpr_14_x(Register word32 r11)
void _restgpr_14_x(word32 r11)
{
	_restgpr_15_x(r11);
	return;
}

// 10000740: void _restgpr_15_x(Register word32 r11)
void _restgpr_15_x(word32 r11)
{
	_restgpr_16_x(r11);
	return;
}

// 10000744: void _restgpr_16_x(Register word32 r11)
void _restgpr_16_x(word32 r11)
{
	_restgpr_17_x(r11);
	return;
}

// 10000748: void _restgpr_17_x(Register word32 r11)
void _restgpr_17_x(word32 r11)
{
	_restgpr_18_x(r11);
	return;
}

// 1000074C: void _restgpr_18_x(Register word32 r11)
void _restgpr_18_x(word32 r11)
{
	_restgpr_19_x(r11);
	return;
}

// 10000750: void _restgpr_19_x(Register word32 r11)
void _restgpr_19_x(word32 r11)
{
	_restgpr_20_x(r11);
	return;
}

// 10000754: void _restgpr_20_x(Register word32 r11)
void _restgpr_20_x(word32 r11)
{
	_restgpr_21_x(r11);
	return;
}

// 10000758: void _restgpr_21_x(Register word32 r11)
void _restgpr_21_x(word32 r11)
{
	_restgpr_22_x(r11);
	return;
}

// 1000075C: void _restgpr_22_x(Register word32 r11)
void _restgpr_22_x(word32 r11)
{
	_restgpr_23_x(r11);
	return;
}

// 10000760: void _restgpr_23_x(Register word32 r11)
void _restgpr_23_x(word32 r11)
{
	_restgpr_24_x(r11);
	return;
}

// 10000764: void _restgpr_24_x(Register word32 r11)
void _restgpr_24_x(word32 r11)
{
	_restgpr_25_x(r11);
	return;
}

// 10000768: void _restgpr_25_x(Register word32 r11)
void _restgpr_25_x(word32 r11)
{
	_restgpr_26_x(r11);
	return;
}

// 1000076C: void _restgpr_26_x(Register word32 r11)
void _restgpr_26_x(word32 r11)
{
	_restgpr_27_x(r11);
	return;
}

// 10000770: void _restgpr_27_x(Register word32 r11)
void _restgpr_27_x(word32 r11)
{
	_restgpr_28_x(r11);
	return;
}

// 10000774: void _restgpr_28_x(Register word32 r11)
void _restgpr_28_x(word32 r11)
{
	_restgpr_29_x(r11);
	return;
}

// 10000778: void _restgpr_29_x(Register word32 r11)
void _restgpr_29_x(word32 r11)
{
	_restgpr_30_x(r11);
	return;
}

// 1000077C: void _restgpr_30_x(Register word32 r11)
void _restgpr_30_x(word32 r11)
{
	_restgpr_31_x(r11);
	return;
}

// 10000780: void _restgpr_31_x(Register word32 r11)
void _restgpr_31_x(word32 r11)
{
	return;
}

// 10000794: Register ptr32 __do_global_ctors_aux(Stack (ptr Eq_3) dwArg04)
ptr32 __do_global_ctors_aux(Eq_3 * dwArg04)
{
	if (Test(EQ,cond(globals->dw10010848 - -0x01)))
		return fp;
	else
		return fp + -0x0020;
}

// 100007E4: void call___do_global_ctors_aux(Stack word32 dwArg04)
void call___do_global_ctors_aux(word32 dwArg04)
{
	return;
}

// 10000800: void _fini(Stack word32 dwArg04)
void _fini(word32 dwArg04)
{
	__do_global_dtors_aux(dwLoc1C);
	return;
}

// 1001093C: void fn1001093C()
void fn1001093C()
{
	return;
}

// 100109A0: void printf@@GLIBC_2.0()
void printf@@GLIBC_2.0()
{
fn100109A0_entry:
l100109A0:
fn100109A0_exit:
}

