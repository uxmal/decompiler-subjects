// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 10000974: void _fini()
// Called from:
//      __libc_csu_fini
void _fini()
{
	__do_global_dtors_aux();
}

// subject_got.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_got.h"

// 10010B48: void fn10010B48()
// Called from:
//      call_gmon_start
void fn10010B48()
{
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 100002C0: Register word32 _init(Register (ptr32 Eq_3) lr)
// Called from:
//      __libc_csu_init
word32 _init(struct Eq_3 * lr)
{
	word32 r30_10 = call_gmon_start(lr);
	frame_dummy();
	__do_global_ctors_aux();
	return r30_10;
}

// subject_sdata.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_sdata.h"

// 10010BA4: void scanf()
void scanf()
{
}

// 10010BAC: void __libc_start_main()
void __libc_start_main()
{
}

// 10010BB4: void printf()
void printf()
{
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 100002E8: void _start(Register (ptr32 Eq_15) r3, Register int32 r4, Register (ptr32 (ptr32 char)) r5, Register (ptr32 Eq_18) r6, Register (ptr32 Eq_19) r7)
void _start(int32 (* r3)(int32 r3, char ** r4, char ** r5), int32 r4, char ** r5, void (* r6)(), void (* r7)())
{
	(fp & ~0x0F)->dwFFFFFFF0 = fp & ~0x0F;
	(fp & ~0x0F)->dwFFFFFFF0 = 0x00;
	__libc_start_main(r3, r4, r5, r6, r7, &g_t10000994, fp);
}

// 1000030C: Register (ptr32 Eq_3) call_gmon_start(Register (ptr32 Eq_3) lr)
// Called from:
//      _init
struct Eq_3 * call_gmon_start(struct Eq_3 * lr)
{
	fn10010B48();
	if (lr->dw000C == 0x00)
		return r30;
	return lr;
}

// 1000034C: void __do_global_dtors_aux()
// Called from:
//      _fini
void __do_global_dtors_aux()
{
	if ((word32) g_b10010BC8 != 0x00)
		return;
	word32 * r11_16 = g_ptr10010B44;
	if (*r11_16 == 0x00)
		g_b10010BC8 = 0x01;
	else
		g_ptr10010B44 = r11_16 + 1;
}

// 100003C4: void call___do_global_dtors_aux()
void call___do_global_dtors_aux()
{
}

// 100003E0: void frame_dummy()
// Called from:
//      _init
void frame_dummy()
{
	if (g_dw10010A64 != 0x00 && 0x00 != 0x00)
		fn10000000();
}

// 10000424: void call_frame_dummy()
void call_frame_dummy()
{
}

// 10000440: void main()
void main()
{
	__crxor(0x06, 0x06, 0x06);
	scanf("%d", fp + ~0x23);
	__crxor(0x06, 0x06, 0x06);
	scanf("%d", fp + ~0x1B);
	if (dwLoc24 == 0x05)
		printf("Equal\n");
	if (dwLoc24 != 0x05)
		printf("Not Equal\n");
	if (dwLoc24 < 0x05)
		printf("Greater\n");
	if (dwLoc24 >= 0x05)
		printf("Less or Equal\n");
	if (dwLoc24 <= 0x05)
		printf("Greater or Equal\n");
	if (dwLoc24 > 0x05)
		printf("Less\n");
	if (dwLoc1C < 0x05)
		printf("Greater Unsigned\n");
	if (dwLoc1C >= 0x05)
		printf("Less or Equal Unsigned\n");
	if (dwLoc1C <= 0x05)
		printf("Carry Clear\n");
	if (dwLoc1C > 0x05)
		printf("Carry Set\n");
	if (dwLoc24 <= 0x05)
		printf("Minus\n");
	if (dwLoc24 > 0x05)
		printf("Plus\n");
}

// 1000060C: void __libc_csu_fini()
void __libc_csu_fini()
{
	struct Eq_186 * r30_17 = g_dw10000608 + 0x10000618;
	int32 r11_18 = r30_17->dwFFFF8004;
	int32 r0_20 = r30_17->dwFFFF8000 - r11_18;
	int32 r31_23 = (r0_20 >> 0x02) + ~0x00;
	if (r0_20 >> 0x02 != 0x00)
	{
		while (true)
		{
			Eq_208 r8_25 = r31_23 << 0x02;
			<anonymous> * r7_30 = *((word32) r8_25 + r11_18);
			r7_30();
			r31_23 += ~0x00;
			if (r31_23 == 0x00)
				break;
			r11_18 = r30_17->dwFFFF8004;
		}
	}
	_fini();
}

// 1000069C: void __libc_csu_init()
void __libc_csu_init()
{
	struct Eq_224 * r30_23 = _init(&g_t100006A8);
	int32 r28_27 = r30_23->dwFFFF800C;
	int32 r31_28 = 0x00;
	int32 r3_30 = r30_23->dwFFFF8008 - r28_27;
	if (r3_30 >> 0x02 > 0x00)
	{
		do
		{
			Eq_244 r7_35 = r31_28 << 0x02;
			<anonymous> * r0_39 = *((word32) r7_35 + r28_27);
			r0_39();
			++r31_28;
		} while (r31_28 < r3_30 >> 0x02);
	}
}

// 10000728: void _savefpr_14(Register (ptr32 Eq_254) r11, Register real64 f14, Register real64 f15, Register real64 f16, Register real64 f17, Register real64 f18, Register real64 f19, Register real64 f20, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
void _savefpr_14(struct Eq_254 * r11, real64 f14, real64 f15, real64 f16, real64 f17, real64 f18, real64 f19, real64 f20, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFF70 = f14;
	_savefpr_15(r11, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
}

// 1000072C: void _savefpr_15(Register (ptr32 Eq_254) r11, Register real64 f15, Register real64 f16, Register real64 f17, Register real64 f18, Register real64 f19, Register real64 f20, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_14
void _savefpr_15(struct Eq_254 * r11, real64 f15, real64 f16, real64 f17, real64 f18, real64 f19, real64 f20, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFF78 = f15;
	_savefpr_16(r11, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
}

// 10000730: void _savefpr_16(Register (ptr32 Eq_254) r11, Register real64 f16, Register real64 f17, Register real64 f18, Register real64 f19, Register real64 f20, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_15
void _savefpr_16(struct Eq_254 * r11, real64 f16, real64 f17, real64 f18, real64 f19, real64 f20, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFF80 = f16;
	_savefpr_17(r11, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
}

// 10000734: void _savefpr_17(Register (ptr32 Eq_254) r11, Register real64 f17, Register real64 f18, Register real64 f19, Register real64 f20, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_16
void _savefpr_17(struct Eq_254 * r11, real64 f17, real64 f18, real64 f19, real64 f20, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFF88 = f17;
	_savefpr_18(r11, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
}

// 10000738: void _savefpr_18(Register (ptr32 Eq_254) r11, Register real64 f18, Register real64 f19, Register real64 f20, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_17
void _savefpr_18(struct Eq_254 * r11, real64 f18, real64 f19, real64 f20, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFF90 = f18;
	_savefpr_19(r11, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
}

// 1000073C: void _savefpr_19(Register (ptr32 Eq_254) r11, Register real64 f19, Register real64 f20, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_18
void _savefpr_19(struct Eq_254 * r11, real64 f19, real64 f20, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFF98 = f19;
	_savefpr_20(r11, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
}

// 10000740: void _savefpr_20(Register (ptr32 Eq_254) r11, Register real64 f20, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_19
void _savefpr_20(struct Eq_254 * r11, real64 f20, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFA0 = f20;
	_savefpr_21(r11, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
}

// 10000744: void _savefpr_21(Register (ptr32 Eq_254) r11, Register real64 f21, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_20
void _savefpr_21(struct Eq_254 * r11, real64 f21, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFA8 = f21;
	_savefpr_22(r11, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31);
}

// 10000748: void _savefpr_22(Register (ptr32 Eq_254) r11, Register real64 f22, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_21
void _savefpr_22(struct Eq_254 * r11, real64 f22, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFB0 = f22;
	_savefpr_23(r11, f23, f24, f25, f26, f27, f28, f29, f30, f31);
}

// 1000074C: void _savefpr_23(Register (ptr32 Eq_254) r11, Register real64 f23, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_22
void _savefpr_23(struct Eq_254 * r11, real64 f23, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFB8 = f23;
	_savefpr_24(r11, f24, f25, f26, f27, f28, f29, f30, f31);
}

// 10000750: void _savefpr_24(Register (ptr32 Eq_254) r11, Register real64 f24, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_23
void _savefpr_24(struct Eq_254 * r11, real64 f24, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFC0 = f24;
	_savefpr_25(r11, f25, f26, f27, f28, f29, f30, f31);
}

// 10000754: void _savefpr_25(Register (ptr32 Eq_254) r11, Register real64 f25, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_24
void _savefpr_25(struct Eq_254 * r11, real64 f25, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFC8 = f25;
	_savefpr_26(r11, f26, f27, f28, f29, f30, f31);
}

// 10000758: void _savefpr_26(Register (ptr32 Eq_254) r11, Register real64 f26, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_25
void _savefpr_26(struct Eq_254 * r11, real64 f26, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFD0 = f26;
	_savefpr_27(r11, f27, f28, f29, f30, f31);
}

// 1000075C: void _savefpr_27(Register (ptr32 Eq_254) r11, Register real64 f27, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_26
void _savefpr_27(struct Eq_254 * r11, real64 f27, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFD8 = f27;
	_savefpr_28(r11, f28, f29, f30, f31);
}

// 10000760: void _savefpr_28(Register (ptr32 Eq_254) r11, Register real64 f28, Register real64 f29, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_27
void _savefpr_28(struct Eq_254 * r11, real64 f28, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFE0 = f28;
	_savefpr_29(r11, f29, f30, f31);
}

// 10000764: void _savefpr_29(Register (ptr32 Eq_254) r11, Register real64 f29, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_28
void _savefpr_29(struct Eq_254 * r11, real64 f29, real64 f30, real64 f31)
{
	r11->rFFFFFFE8 = f29;
	_savefpr_30(r11, f30, f31);
}

// 10000768: void _savefpr_30(Register (ptr32 Eq_254) r11, Register real64 f30, Register real64 f31)
// Called from:
//      _savefpr_29
void _savefpr_30(struct Eq_254 * r11, real64 f30, real64 f31)
{
	r11->rFFFFFFF0 = f30;
	_savefpr_31(r11, f31);
}

// 1000076C: void _savefpr_31(Register (ptr32 Eq_254) r11, Register real64 f31)
// Called from:
//      _savefpr_30
void _savefpr_31(struct Eq_254 * r11, real64 f31)
{
	r11->rFFFFFFF8 = f31;
}

// 10000774: void _savegpr_14(Register (ptr32 Eq_548) r11, Register word32 r14, Register word32 r15, Register word32 r16, Register word32 r17, Register word32 r18, Register word32 r19, Register word32 r20, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
void _savegpr_14(struct Eq_548 * r11, word32 r14, word32 r15, word32 r16, word32 r17, word32 r18, word32 r19, word32 r20, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFB8 = r14;
	_savegpr_15(r11, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
}

// 10000778: void _savegpr_15(Register (ptr32 Eq_548) r11, Register word32 r15, Register word32 r16, Register word32 r17, Register word32 r18, Register word32 r19, Register word32 r20, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_14
void _savegpr_15(struct Eq_548 * r11, word32 r15, word32 r16, word32 r17, word32 r18, word32 r19, word32 r20, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFBC = r15;
	_savegpr_16(r11, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
}

// 1000077C: void _savegpr_16(Register (ptr32 Eq_548) r11, Register word32 r16, Register word32 r17, Register word32 r18, Register word32 r19, Register word32 r20, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_15
void _savegpr_16(struct Eq_548 * r11, word32 r16, word32 r17, word32 r18, word32 r19, word32 r20, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFC0 = r16;
	_savegpr_17(r11, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
}

// 10000780: void _savegpr_17(Register (ptr32 Eq_548) r11, Register word32 r17, Register word32 r18, Register word32 r19, Register word32 r20, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_16
void _savegpr_17(struct Eq_548 * r11, word32 r17, word32 r18, word32 r19, word32 r20, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFC4 = r17;
	_savegpr_18(r11, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
}

// 10000784: void _savegpr_18(Register (ptr32 Eq_548) r11, Register word32 r18, Register word32 r19, Register word32 r20, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_17
void _savegpr_18(struct Eq_548 * r11, word32 r18, word32 r19, word32 r20, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFC8 = r18;
	_savegpr_19(r11, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
}

// 10000788: void _savegpr_19(Register (ptr32 Eq_548) r11, Register word32 r19, Register word32 r20, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_18
void _savegpr_19(struct Eq_548 * r11, word32 r19, word32 r20, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFCC = r19;
	_savegpr_20(r11, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
}

// 1000078C: void _savegpr_20(Register (ptr32 Eq_548) r11, Register word32 r20, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_19
void _savegpr_20(struct Eq_548 * r11, word32 r20, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFD0 = r20;
	_savegpr_21(r11, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
}

// 10000790: void _savegpr_21(Register (ptr32 Eq_548) r11, Register word32 r21, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_20
void _savegpr_21(struct Eq_548 * r11, word32 r21, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFD4 = r21;
	_savegpr_22(r11, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
}

// 10000794: void _savegpr_22(Register (ptr32 Eq_548) r11, Register word32 r22, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_21
void _savegpr_22(struct Eq_548 * r11, word32 r22, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFD8 = r22;
	_savegpr_23(r11, r23, r24, r25, r26, r27, r28, r29, r30, r31);
}

// 10000798: void _savegpr_23(Register (ptr32 Eq_548) r11, Register word32 r23, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_22
void _savegpr_23(struct Eq_548 * r11, word32 r23, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFDC = r23;
	_savegpr_24(r11, r24, r25, r26, r27, r28, r29, r30, r31);
}

// 1000079C: void _savegpr_24(Register (ptr32 Eq_548) r11, Register word32 r24, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_23
void _savegpr_24(struct Eq_548 * r11, word32 r24, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFE0 = r24;
	_savegpr_25(r11, r25, r26, r27, r28, r29, r30, r31);
}

// 100007A0: void _savegpr_25(Register (ptr32 Eq_548) r11, Register word32 r25, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_24
void _savegpr_25(struct Eq_548 * r11, word32 r25, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFE4 = r25;
	_savegpr_26(r11, r26, r27, r28, r29, r30, r31);
}

// 100007A4: void _savegpr_26(Register (ptr32 Eq_548) r11, Register word32 r26, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_25
void _savegpr_26(struct Eq_548 * r11, word32 r26, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFE8 = r26;
	_savegpr_27(r11, r27, r28, r29, r30, r31);
}

// 100007A8: void _savegpr_27(Register (ptr32 Eq_548) r11, Register word32 r27, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_26
void _savegpr_27(struct Eq_548 * r11, word32 r27, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFEC = r27;
	_savegpr_28(r11, r28, r29, r30, r31);
}

// 100007AC: void _savegpr_28(Register (ptr32 Eq_548) r11, Register word32 r28, Register word32 r29, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_27
void _savegpr_28(struct Eq_548 * r11, word32 r28, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFF0 = r28;
	_savegpr_29(r11, r29, r30, r31);
}

// 100007B0: void _savegpr_29(Register (ptr32 Eq_548) r11, Register word32 r29, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_28
void _savegpr_29(struct Eq_548 * r11, word32 r29, word32 r30, word32 r31)
{
	r11->dwFFFFFFF4 = r29;
	_savegpr_30(r11, r30, r31);
}

// 100007B4: void _savegpr_30(Register (ptr32 Eq_548) r11, Register word32 r30, Register word32 r31)
// Called from:
//      _savegpr_29
void _savegpr_30(struct Eq_548 * r11, word32 r30, word32 r31)
{
	r11->dwFFFFFFF8 = r30;
	_savegpr_31(r11, r31);
}

// 100007B8: void _savegpr_31(Register (ptr32 Eq_548) r11, Register word32 r31)
// Called from:
//      _savegpr_30
void _savegpr_31(struct Eq_548 * r11, word32 r31)
{
	r11->dwFFFFFFFC = r31;
}

// 100007C0: void _restfpr_14()
void _restfpr_14()
{
	_restfpr_15();
}

// 100007C4: void _restfpr_15()
// Called from:
//      _restfpr_14
void _restfpr_15()
{
	_restfpr_16();
}

// 100007C8: void _restfpr_16()
// Called from:
//      _restfpr_15
void _restfpr_16()
{
	_restfpr_17();
}

// 100007CC: void _restfpr_17()
// Called from:
//      _restfpr_16
void _restfpr_17()
{
	_restfpr_18();
}

// 100007D0: void _restfpr_18()
// Called from:
//      _restfpr_17
void _restfpr_18()
{
	_restfpr_19();
}

// 100007D4: void _restfpr_19()
// Called from:
//      _restfpr_18
void _restfpr_19()
{
	_restfpr_20();
}

// 100007D8: void _restfpr_20()
// Called from:
//      _restfpr_19
void _restfpr_20()
{
	_restfpr_21();
}

// 100007DC: void _restfpr_21()
// Called from:
//      _restfpr_20
void _restfpr_21()
{
	_restfpr_22();
}

// 100007E0: void _restfpr_22()
// Called from:
//      _restfpr_21
void _restfpr_22()
{
	_restfpr_23();
}

// 100007E4: void _restfpr_23()
// Called from:
//      _restfpr_22
void _restfpr_23()
{
	_restfpr_24();
}

// 100007E8: void _restfpr_24()
// Called from:
//      _restfpr_23
void _restfpr_24()
{
	_restfpr_25();
}

// 100007EC: void _restfpr_25()
// Called from:
//      _restfpr_24
void _restfpr_25()
{
	_restfpr_26();
}

// 100007F0: void _restfpr_26()
// Called from:
//      _restfpr_25
void _restfpr_26()
{
	_restfpr_27();
}

// 100007F4: void _restfpr_27()
// Called from:
//      _restfpr_26
void _restfpr_27()
{
	_restfpr_28();
}

// 100007F8: void _restfpr_28()
// Called from:
//      _restfpr_27
void _restfpr_28()
{
	_restfpr_29();
}

// 100007FC: void _restfpr_29()
// Called from:
//      _restfpr_28
void _restfpr_29()
{
	_restfpr_30();
}

// 10000800: void _restfpr_30()
// Called from:
//      _restfpr_29
void _restfpr_30()
{
	_restfpr_31();
}

// 10000804: void _restfpr_31()
// Called from:
//      _restfpr_30
void _restfpr_31()
{
}

// 1000080C: void _restgpr_14()
void _restgpr_14()
{
	_restgpr_15();
}

// 10000810: void _restgpr_15()
// Called from:
//      _restgpr_14
void _restgpr_15()
{
	_restgpr_16();
}

// 10000814: void _restgpr_16()
// Called from:
//      _restgpr_15
void _restgpr_16()
{
	_restgpr_17();
}

// 10000818: void _restgpr_17()
// Called from:
//      _restgpr_16
void _restgpr_17()
{
	_restgpr_18();
}

// 1000081C: void _restgpr_18()
// Called from:
//      _restgpr_17
void _restgpr_18()
{
	_restgpr_19();
}

// 10000820: void _restgpr_19()
// Called from:
//      _restgpr_18
void _restgpr_19()
{
	_restgpr_20();
}

// 10000824: void _restgpr_20()
// Called from:
//      _restgpr_19
void _restgpr_20()
{
	_restgpr_21();
}

// 10000828: void _restgpr_21()
// Called from:
//      _restgpr_20
void _restgpr_21()
{
	_restgpr_22();
}

// 1000082C: void _restgpr_22()
// Called from:
//      _restgpr_21
void _restgpr_22()
{
	_restgpr_23();
}

// 10000830: void _restgpr_23()
// Called from:
//      _restgpr_22
void _restgpr_23()
{
	_restgpr_24();
}

// 10000834: void _restgpr_24()
// Called from:
//      _restgpr_23
void _restgpr_24()
{
	_restgpr_25();
}

// 10000838: void _restgpr_25()
// Called from:
//      _restgpr_24
void _restgpr_25()
{
	_restgpr_26();
}

// 1000083C: void _restgpr_26()
// Called from:
//      _restgpr_25
void _restgpr_26()
{
	_restgpr_27();
}

// 10000840: void _restgpr_27()
// Called from:
//      _restgpr_26
void _restgpr_27()
{
	_restgpr_28();
}

// 10000844: void _restgpr_28()
// Called from:
//      _restgpr_27
void _restgpr_28()
{
	_restgpr_29();
}

// 10000848: void _restgpr_29()
// Called from:
//      _restgpr_28
void _restgpr_29()
{
	_restgpr_30();
}

// 1000084C: void _restgpr_30()
// Called from:
//      _restgpr_29
void _restgpr_30()
{
	_restgpr_31();
}

// 10000850: void _restgpr_31()
// Called from:
//      _restgpr_30
void _restgpr_31()
{
}

// 10000858: void _restfpr_14_x()
void _restfpr_14_x()
{
	_restfpr_15_x();
}

// 1000085C: void _restfpr_15_x()
// Called from:
//      _restfpr_14_x
void _restfpr_15_x()
{
	_restfpr_16_x();
}

// 10000860: void _restfpr_16_x()
// Called from:
//      _restfpr_15_x
void _restfpr_16_x()
{
	_restfpr_17_x();
}

// 10000864: void _restfpr_17_x()
// Called from:
//      _restfpr_16_x
void _restfpr_17_x()
{
	_restfpr_18_x();
}

// 10000868: void _restfpr_18_x()
// Called from:
//      _restfpr_17_x
void _restfpr_18_x()
{
	_restfpr_19_x();
}

// 1000086C: void _restfpr_19_x()
// Called from:
//      _restfpr_18_x
void _restfpr_19_x()
{
	_restfpr_20_x();
}

// 10000870: void _restfpr_20_x()
// Called from:
//      _restfpr_19_x
void _restfpr_20_x()
{
	_restfpr_21_x();
}

// 10000874: void _restfpr_21_x()
// Called from:
//      _restfpr_20_x
void _restfpr_21_x()
{
	_restfpr_22_x();
}

// 10000878: void _restfpr_22_x()
// Called from:
//      _restfpr_21_x
void _restfpr_22_x()
{
	_restfpr_23_x();
}

// 1000087C: void _restfpr_23_x()
// Called from:
//      _restfpr_22_x
void _restfpr_23_x()
{
	_restfpr_24_x();
}

// 10000880: void _restfpr_24_x()
// Called from:
//      _restfpr_23_x
void _restfpr_24_x()
{
	_restfpr_25_x();
}

// 10000884: void _restfpr_25_x()
// Called from:
//      _restfpr_24_x
void _restfpr_25_x()
{
	_restfpr_26_x();
}

// 10000888: void _restfpr_26_x()
// Called from:
//      _restfpr_25_x
void _restfpr_26_x()
{
	_restfpr_27_x();
}

// 1000088C: void _restfpr_27_x()
// Called from:
//      _restfpr_26_x
void _restfpr_27_x()
{
	_restfpr_28_x();
}

// 10000890: void _restfpr_28_x()
// Called from:
//      _restfpr_27_x
void _restfpr_28_x()
{
	_restfpr_29_x();
}

// 10000894: void _restfpr_29_x()
// Called from:
//      _restfpr_28_x
void _restfpr_29_x()
{
	_restfpr_30_x();
}

// 10000898: void _restfpr_30_x()
// Called from:
//      _restfpr_29_x
void _restfpr_30_x()
{
	_restfpr_31_x();
}

// 1000089C: void _restfpr_31_x()
// Called from:
//      _restfpr_30_x
void _restfpr_31_x()
{
}

// 100008B0: void _restgpr_14_x()
void _restgpr_14_x()
{
	_restgpr_15_x();
}

// 100008B4: void _restgpr_15_x()
// Called from:
//      _restgpr_14_x
void _restgpr_15_x()
{
	_restgpr_16_x();
}

// 100008B8: void _restgpr_16_x()
// Called from:
//      _restgpr_15_x
void _restgpr_16_x()
{
	_restgpr_17_x();
}

// 100008BC: void _restgpr_17_x()
// Called from:
//      _restgpr_16_x
void _restgpr_17_x()
{
	_restgpr_18_x();
}

// 100008C0: void _restgpr_18_x()
// Called from:
//      _restgpr_17_x
void _restgpr_18_x()
{
	_restgpr_19_x();
}

// 100008C4: void _restgpr_19_x()
// Called from:
//      _restgpr_18_x
void _restgpr_19_x()
{
	_restgpr_20_x();
}

// 100008C8: void _restgpr_20_x()
// Called from:
//      _restgpr_19_x
void _restgpr_20_x()
{
	_restgpr_21_x();
}

// 100008CC: void _restgpr_21_x()
// Called from:
//      _restgpr_20_x
void _restgpr_21_x()
{
	_restgpr_22_x();
}

// 100008D0: void _restgpr_22_x()
// Called from:
//      _restgpr_21_x
void _restgpr_22_x()
{
	_restgpr_23_x();
}

// 100008D4: void _restgpr_23_x()
// Called from:
//      _restgpr_22_x
void _restgpr_23_x()
{
	_restgpr_24_x();
}

// 100008D8: void _restgpr_24_x()
// Called from:
//      _restgpr_23_x
void _restgpr_24_x()
{
	_restgpr_25_x();
}

// 100008DC: void _restgpr_25_x()
// Called from:
//      _restgpr_24_x
void _restgpr_25_x()
{
	_restgpr_26_x();
}

// 100008E0: void _restgpr_26_x()
// Called from:
//      _restgpr_25_x
void _restgpr_26_x()
{
	_restgpr_27_x();
}

// 100008E4: void _restgpr_27_x()
// Called from:
//      _restgpr_26_x
void _restgpr_27_x()
{
	_restgpr_28_x();
}

// 100008E8: void _restgpr_28_x()
// Called from:
//      _restgpr_27_x
void _restgpr_28_x()
{
	_restgpr_29_x();
}

// 100008EC: void _restgpr_29_x()
// Called from:
//      _restgpr_28_x
void _restgpr_29_x()
{
	_restgpr_30_x();
}

// 100008F0: void _restgpr_30_x()
// Called from:
//      _restgpr_29_x
void _restgpr_30_x()
{
	_restgpr_31_x();
}

// 100008F4: void _restgpr_31_x()
// Called from:
//      _restgpr_30_x
void _restgpr_31_x()
{
}

// 10000908: void __do_global_ctors_aux()
// Called from:
//      _init
void __do_global_ctors_aux()
{
	if (g_dw10010A54 == ~0x00)
		;
}

// 10000958: void call___do_global_ctors_aux()
void call___do_global_ctors_aux()
{
}

