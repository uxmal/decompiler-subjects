// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 08048328: void _init()
void _init()
{
	if (__x86.get_pc_thunk.bx(dwLoc10)->dw1CCB != 0x00)
		fn080483C0();
}

// 08048360: void abs()
void abs()
{
}

// 08048370: void puts()
void puts()
{
}

// 08048380: void exit()
void exit()
{
}

// 08048390: void strlen()
void strlen()
{
}

// 080483A0: void __libc_start_main()
void __libc_start_main()
{
}

// 080483B0: void putchar()
void putchar()
{
}

// 080483C0: void fn080483C0()
void fn080483C0()
{
	word32 esp_3;
	globals->ptr8049FFC();
}

// 080483D0: void main(Stack word32 dwArg00, Stack int32 dwArg04, Stack (ptr32 (ptr32 char)) dwArg08)
void main(word32 dwArg00, int32 dwArg04, char * * dwArg08)
{
	__align(fp);
	basic_1_reg_in_block(dwArg04);
	basic_2_reg_in_prev_block(dwArg04);
	word32 ebx_37;
	basic_3_reg_cond_overwrite(dwArg04, out ebx_37);
	word32 ebx_42;
	basic_4_reg_cond_change(dwArg04, out ebx_42);
	word32 ebx_47;
	basic_5_reg_different_values(dwArg04, out ebx_47);
	basic_6_reg_overwrite_in_block(dwArg04);
	intermediate_1_mem_in_block(dwArg04);
	intermediate_2_mem_in_prev_block(dwArg04);
	intermediate_3_mem_cond_overwrite(dwArg04);
	intermediate_4_mem_cond_change(dwArg04);
	intermediate_5_mem_different_values(dwArg04);
	word32 ebx_80;
	word32 eax_81 = intermediate_10_subregs((byte) intermediate_6_mem_overwrite_in_block(dwArg04), out ebx_80);
	word32 ebx_96 = ebx_80 + eax_81 + advanced_1_writes_can_be_omitted_for_non_mem_access_calls(eax_81, dwArg04) + advanced_2_mem_values_can_be_propagated_for_non_write_calls(*dwArg08);
	advanced_3_value_range_analysis(dwArg04);
	exit(ebx_96 + (int32) (*(*dwArg08)));
}

// 08048493: void _start(Register (ptr32 Eq_124) edx, Stack int32 dwArg00)
void _start( * edx, int32 dwArg00)
{
	__align((char *) fp + 0x04);
	__libc_start_main(&globals->t80483D0, dwArg00, (char *) fp + 0x04, &globals->t80488E0, &globals->t8048940, edx, fp);
	__hlt();
}

// 080484C0: Register word32 __x86.get_pc_thunk.bx(Stack word32 dwArg00)
word32 __x86.get_pc_thunk.bx(word32 dwArg00)
{
	return dwArg00;
}

// 080484D0: void deregister_tm_clones()
void deregister_tm_clones()
{
	if (true && 0x00 != 0x00)
	{
		word32 esp_33;
		word32 eax_34;
		byte SCZO_35;
		byte CZ_36;
		byte SZO_37;
		bool C_38;
		bool Z_39;
		word32 ebp_40;
		fn00000000();
	}
}

// 08048500: void register_tm_clones()
void register_tm_clones()
{
	if (0x00 != 0x00 && 0x00 != 0x00)
	{
		word32 esp_41;
		word32 eax_42;
		byte SCZO_43;
		word32 edx_44;
		bool Z_45;
		byte SZO_46;
		bool C_47;
		word32 ebp_48;
		fn00000000();
	}
}

// 08048540: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (globals->b804A028 == 0x00)
	{
		deregister_tm_clones();
		globals->b804A028 = 0x01;
	}
}

// 08048560: void frame_dummy()
void frame_dummy()
{
	if (globals->dw8049F10 != 0x00 && 0x00 != 0x00)
	{
		word32 esp_37;
		word32 eax_38;
		word32 edx_39;
		byte SZO_40;
		bool C_41;
		bool Z_42;
		word32 ebp_43;
		byte SCZO_44;
		fn00000000();
		register_tm_clones();
	}
	else
		register_tm_clones();
}

// 0804858B: void advanced_3_value_range_analysis(Stack int32 dwArg04)
void advanced_3_value_range_analysis(int32 dwArg04)
{
	if (dwArg04 > 0x0A)
	{
		int32 eax_59;
		if (dwArg04 > 0x0A)
			eax_59 = 0x62;
		else
			eax_59 = 0x61;
		int32 eax_67;
		putchar(eax_59);
		if (dwArg04 <= 0x0A)
			eax_67 = 66;
		else
			eax_67 = 0x41;
		int32 eax_75;
		putchar(eax_67);
		if (dwArg04 > 0x09)
			eax_75 = 0x31;
		else
			eax_75 = 0x30;
		putchar(eax_75);
		if (dwArg04 > 0x08)
			puts(">10");
	}
	if (dwArg04 == 0x2A)
	{
		int32 eax_21;
		if (dwArg04 == 0x2A)
			eax_21 = 0x62;
		else
			eax_21 = 0x61;
		int32 eax_29;
		putchar(eax_21);
		if (dwArg04 != 0x2A)
			eax_29 = 66;
		else
			eax_29 = 0x41;
		int32 eax_37;
		putchar(eax_29);
		if (dwArg04 == 100)
			eax_37 = 0x31;
		else
			eax_37 = 0x30;
		putchar(eax_37);
		if (dwArg04 != 101)
			puts("= 42");
	}
}

// 0804868D: void basic_1_reg_in_block(Stack int32 dwArg04)
void basic_1_reg_in_block(int32 dwArg04)
{
	putchar(dwArg04 + 0x30);
}

// 080486A4: Register word32 basic_2_reg_in_prev_block(Stack int32 dwArg04)
word32 basic_2_reg_in_prev_block(int32 dwArg04)
{
	putchar(dwArg04 + 0x31);
	return 0x00;
}

// 080486C2: Register word32 basic_3_reg_cond_overwrite(Stack int32 dwArg04, Register out ptr32 ebxOut)
word32 basic_3_reg_cond_overwrite(int32 dwArg04, ptr32 & ebxOut)
{
	word32 ebx_16;
	*ebxOut = 0x41;
	if (dwArg04 != 0x2A)
		*ebxOut = 0x61;
	putchar(dwArg04 + ebx_16);
	return 0x00;
}

// 080486E3: Register word32 basic_4_reg_cond_change(Stack int32 dwArg04, Register out ptr32 ebxOut)
word32 basic_4_reg_cond_change(int32 dwArg04, ptr32 & ebxOut)
{
	word32 ebx_16;
	*ebxOut = 0x41;
	if (dwArg04 != 0x2A)
		*ebxOut = 0x61;
	putchar(dwArg04 + ebx_16);
	return 0x00;
}

// 08048702: Register word32 basic_5_reg_different_values(Stack int32 dwArg04, Register out ptr32 ebxOut)
word32 basic_5_reg_different_values(int32 dwArg04, ptr32 & ebxOut)
{
	word32 ebx_15;
	if (dwArg04 != 0x2A)
		*ebxOut = 0x41;
	else
		*ebxOut = 0x61;
	putchar(dwArg04 + ebx_15);
	return 0x00;
}

// 08048725: Register word32 basic_6_reg_overwrite_in_block(Stack int32 dwArg04)
word32 basic_6_reg_overwrite_in_block(int32 dwArg04)
{
	putchar(dwArg04 + 0x30);
	return 0x00;
}

// 08048741: Register word32 intermediate_1_mem_in_block(Stack int32 dwArg04)
word32 intermediate_1_mem_in_block(int32 dwArg04)
{
	globals->t804A02C = 0x30;
	putchar((word32) globals->t804A02C + dwArg04);
	return 0x00;
}

// 08048761: Register word32 intermediate_2_mem_in_prev_block(Stack int32 dwArg04)
word32 intermediate_2_mem_in_prev_block(int32 dwArg04)
{
	globals->t804A02C = 0x30;
	putchar((word32) globals->t804A02C + (dwArg04 + 0x01));
	return 0x00;
}

// 0804878E: Register word32 intermediate_3_mem_cond_overwrite(Stack int32 dwArg04)
word32 intermediate_3_mem_cond_overwrite(int32 dwArg04)
{
	globals->t804A02C = 0x41;
	if (dwArg04 != 0x2A)
		globals->t804A02C = 0x61;
	putchar((word32) globals->t804A02C + dwArg04);
	return 0x00;
}

// 080487BD: Register word32 intermediate_4_mem_cond_change(Stack int32 dwArg04)
word32 intermediate_4_mem_cond_change(int32 dwArg04)
{
	globals->t804A02C = 0x41;
	if (dwArg04 != 0x2A)
		globals->t804A02C = (Eq_324) ((word32) globals->t804A02C + 0x0020);
	putchar((word32) globals->t804A02C + dwArg04);
	return 0x00;
}

// 080487E9: Register word32 intermediate_5_mem_different_values(Stack int32 dwArg04)
word32 intermediate_5_mem_different_values(int32 dwArg04)
{
	if (dwArg04 != 0x2A)
		globals->t804A02C = 0x41;
	else
		globals->t804A02C = 0x61;
	putchar((word32) globals->t804A02C + dwArg04);
	return 0x00;
}

// 0804881A: Register word32 intermediate_6_mem_overwrite_in_block(Stack int32 dwArg04)
word32 intermediate_6_mem_overwrite_in_block(int32 dwArg04)
{
	globals->t804A02C = 0x7B;
	globals->t804A02C = 0x30;
	putchar((word32) globals->t804A02C + dwArg04);
	return 0x00;
}

// 08048844: Register word32 intermediate_10_subregs(Register byte al, Register out ptr32 ebxOut)
word32 intermediate_10_subregs(byte al, ptr32 & ebxOut)
{
	bui8 al_4 = globals->b804A031;
	word32 ebx_17 = (word32) (al_4 * 0x04);
	*ebxOut = ebx_17;
	putchar(ebx_17 + (word32) (SLICE(DPB(ebx, DPB(ax, al_4, 0), 0), byte, 8) * 0x02));
	return 0x00;
}

// 08048877: Register word32 advanced_1_writes_can_be_omitted_for_non_mem_access_calls(Register word32 eax, Stack int32 dwArg04)
word32 advanced_1_writes_can_be_omitted_for_non_mem_access_calls(word32 eax, int32 dwArg04)
{
	globals->t804A02C = 0x01;
	word32 esp_14;
	word32 ebp_15;
	byte SCZO_16;
	word32 eax_17;
	word32 edx_18;
	abs();
	globals->t804A02C = 0x02;
	return (word32) globals->t804A02C + eax_17;
}

// 080488AF: Register Eq_442 advanced_2_mem_values_can_be_propagated_for_non_write_calls(Stack (ptr32 char) dwArg04)
size_t advanced_2_mem_values_can_be_propagated_for_non_write_calls(char * dwArg04)
{
	globals->t804A02C = 0x01;
	return strlen(dwArg04) + Mem7[0x0804A02C:word32];
}

// 080488E0: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void __libc_csu_init(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	struct Eq_6 * ebx_15 = __x86.get_pc_thunk.bx(dwLoc14);
	_init();
	if ((char *) &ebx_15->ptr161F + 0x04 - &ebx_15->ptr161F >> 0x02 != 0x00)
	{
		do
		{
			word32 esp_66;
			word32 ebp_67;
			word32 edi_68;
			word32 esi_69;
			word32 ebx_70;
			byte SCZO_71;
			word32 eax_72;
			byte SZO_73;
			bool C_74;
			bool Z_75;
			ebx_15->ptr161F();
		} while (esi_69 != edi_68 + 0x01);
	}
}

// 08048940: void __libc_csu_fini()
void __libc_csu_fini()
{
}

// 08048944: void _fini()
void _fini()
{
	__x86.get_pc_thunk.bx(dwLoc10);
}

