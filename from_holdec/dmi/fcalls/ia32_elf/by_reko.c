// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 0804836C: void _init()
void _init()
{
	if (__x86.get_pc_thunk.bx(dwLoc10)->dw2C87 != 0x00)
		fn08048410();
}

// 080483A0: void time()
void time()
{
}

// 080483B0: void puts()
void puts()
{
}

// 080483C0: void exit()
void exit()
{
}

// 080483D0: void strlen()
void strlen()
{
}

// 080483E0: void __libc_start_main()
void __libc_start_main()
{
}

// 080483F0: void putchar()
void putchar()
{
}

// 08048400: void fputs()
void fputs()
{
}

// 08048410: void fn08048410()
void fn08048410()
{
	word32 esp_3;
	globals->ptr804AFFC();
}

// 08048420: void main(Stack word32 dwArg00, Stack word32 dwArg04, Stack word32 dwArg08)
void main(word32 dwArg00, word32 dwArg04, word32 dwArg08)
{
	__align(fp);
	word32 ecx_30;
	word32 eax_31 = basic_1_multiple_calling_conventions_3_ints(dwArg04, out ecx_30);
	word32 edx_34;
	word32 eax_35 = basic_2_calling_varargs(out edx_34);
	basic_3_accessing_all_registers(eax_35, ecx_30, edx_34, eax_31 + eax_35, fp - 0x08, dwArg04, dwArg08);
	basic_4_tail_call(ptrLoc34, dwArg04);
	intermediate_1_accessing_varargs();
	word32 ebx_50;
	word32 esi_51;
	word32 edi_52;
	word32 eax_53 = intermediate_2_use_uncommon_registers_for_parameters(fp + 0x04, out ebx_50, out esi_51, out edi_52);
	intermediate_3_calling_noreturn();
	intermediate_4_asm_instr_with_multiple_results(dwLoc2C, ebx_50 + eax_53 + eax_53, 0x01, 0x01);
	intermediate_5_pushs_in_different_blocks(dwLoc24);
	advanced_1_pass_in_flags_reg(esi_51);
	advanced_2_return_in_flags_reg();
	advanced_3_uneven_stack(dwLoc28);
}

// 080484BF: void _start(Register (ptr32 Eq_111) edx, Stack int32 dwArg00)
void _start( * edx, int32 dwArg00)
{
	__align((char *) fp + 0x04);
	__libc_start_main(&globals->t8048420, dwArg00, (char *) fp + 0x04, &globals->t8048AD0, &globals->t8048B30, edx, fp);
	__hlt();
}

// 080484F0: Register word32 __x86.get_pc_thunk.bx(Stack word32 dwArg00)
word32 __x86.get_pc_thunk.bx(word32 dwArg00)
{
	return dwArg00;
}

// 08048500: void deregister_tm_clones()
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

// 08048530: void register_tm_clones()
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

// 08048570: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (globals->b804B030 == 0x00)
	{
		deregister_tm_clones();
		globals->b804B030 = 0x01;
	}
}

// 08048590: void frame_dummy()
void frame_dummy()
{
	if (globals->dw804AF10 != 0x00 && 0x00 != 0x00)
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

// 080485C0: Register word32 sum3_cdecl(Stack word32 dwArg04, Stack Eq_200 dwArg08, Stack ui32 dwArg0C)
word32 sum3_cdecl(word32 dwArg04, time_t dwArg08, ui32 dwArg0C)
{
	return dwArg04 + dwArg08 * 0x02 + 0x01 + dwArg0C * 0x03;
}

// 080485E0: Register word32 sum3_fastcall(Register word32 ecx, Register Eq_200 edx, Stack ui32 dwArg04)
word32 sum3_fastcall(word32 ecx, time_t edx, ui32 dwArg04)
{
	return ecx + edx * 0x02 + 0x02 + dwArg04 * 0x03;
}

// 08048600: Register word32 sum3_thiscall(Register word32 ecx, Stack Eq_200 dwArg04, Stack ui32 dwArg08)
word32 sum3_thiscall(word32 ecx, time_t dwArg04, ui32 dwArg08)
{
	return ecx + dwArg04 * 0x02 + 0x03 + dwArg08 * 0x03;
}

// 08048620: Register word32 sum3_ms_abi(Stack word32 dwArg04, Stack Eq_200 dwArg08, Stack ui32 dwArg0C)
word32 sum3_ms_abi(word32 dwArg04, time_t dwArg08, ui32 dwArg0C)
{
	return dwArg04 + dwArg08 * 0x02 + 0x04 + dwArg0C * 0x03;
}

// 08048640: Register word32 sum3_sysv_abi(Stack word32 dwArg04, Stack Eq_200 dwArg08, Stack ui32 dwArg0C)
word32 sum3_sysv_abi(word32 dwArg04, time_t dwArg08, ui32 dwArg0C)
{
	return dwArg04 + dwArg08 * 0x02 + 0x05 + dwArg0C * 0x03;
}

// 08048660: Register word32 sum3_stdcall(Stack word32 dwArg04, Stack Eq_200 dwArg08, Stack ui32 dwArg0C, Register out ptr32 ecxOut)
word32 sum3_stdcall(word32 dwArg04, time_t dwArg08, ui32 dwArg0C, ptr32 & ecxOut)
{
	word32 ecx_7;
	*ecxOut = dwArg04;
	return dwArg04 + dwArg08 * 0x02 + 0x06 + dwArg0C * 0x03;
}

// 08048680: Register word32 basic_1_multiple_calling_conventions_3_ints(Stack word32 dwArg04, Register out ptr32 ecxOut)
word32 basic_1_multiple_calling_conventions_3_ints(word32 dwArg04, ptr32 & ecxOut)
{
	Eq_200 eax_13 = time(null);
	if (sum3_cdecl(dwArg04, eax_13, 0x2A) > 0x7B)
		puts("cdecl");
	if (sum3_fastcall(dwArg04, eax_13, 0x2A) > 0x7B)
		puts("fastcall");
	if (sum3_thiscall(dwArg04, eax_13, 0x2A) > 0x7B)
		puts("thiscall");
	if (sum3_ms_abi(dwArg04, eax_13, 0x2A) > 0x7B)
		puts("ms_abi");
	if (sum3_sysv_abi(dwArg04, eax_13, 0x2A) > 0x7B)
		puts("sysv_abi");
	word32 ecx_86;
	if (sum3_stdcall(dwArg04, eax_13, 0x2A, out ecx_86) > 0x7B)
		puts("stdcall");
	return 0x00;
}

// 080487B0: void a_vararg()
void a_vararg()
{
	puts("a_vararg called");
}

// 080487D0: Register word32 basic_2_calling_varargs(Register out ptr32 edxOut)
word32 basic_2_calling_varargs(ptr32 & edxOut)
{
	a_vararg();
	a_vararg();
	a_vararg();
	a_vararg();
	a_vararg();
	word32 edx_11;
	*edxOut = dwLoc18;
	return 0x00;
}

// 08048810: Register Eq_200 basic_4_tail_call(Stack (ptr32 Eq_56) ptrArg00, Stack word32 dwArg04)
time_t basic_4_tail_call(time_t * ptrArg00, word32 dwArg04)
{
	return time(ptrArg00);
}

// 08048820: Register word32 crude_printf(Stack (ptr32 Eq_362) dwArg04)
word32 crude_printf(Eq_362 * dwArg04)
{
	word32 ebx_113;
	int32 eax_18 = (int32) dwArg04->b0000;
	struct Eq_362 * ebp_16 = dwArg04;
	byte al_19 = (byte) eax_18;
	if (al_19 != 0x00)
	{
		struct Eq_375 * esi_102 = fp + 0x08;
		ebx_113 = 0x00;
		do
		{
			if (al_19 == 0x25)
			{
				byte al_74 = (byte) (word32) ebp_16[0x01];
				struct Eq_388 * edi_75 = ebp_16 + 0x01;
				if (al_74 != 0x25)
				{
					if (al_74 != 99)
					{
						if (al_74 != 115)
							puts("Not implemented");
						else
						{
							Eq_427 ebp_103 = esi_102->b0000;
							fputs(ebp_103, globals->ptr804B02C);
							esi_102 = esi_102 + 0x01;
							ebx_113 = (word32) strlen(ebp_103) + ebx_113;
						}
					}
					else
					{
						putchar((int32) esi_102->b0000);
						esi_102 = esi_102 + 0x01;
						ebx_113 = ebx_113 + 0x01;
					}
				}
				else
				{
					putchar(0x25);
					ebx_113 = ebx_113 + 0x01;
				}
				eax_18 = (int32) edi_75->b0001;
				al_19 = (byte) eax_18;
				ebp_16 = (struct Eq_362 *) &edi_75->b0001;
				if (al_19 != 0x00)
					continue;
				return ebx_113;
			}
			putchar(eax_18);
			eax_18 = (int32) ebp_16[0x01];
			ebx_113 = ebx_113 + 0x01;
			ebp_16 = ebp_16 + 0x01;
			al_19 = (byte) eax_18;
		} while (al_19 != 0x00);
	}
	else
		ebx_113 = 0x00;
	return ebx_113;
}

// 08048900: void even_more_crude(Stack byte bArg08, Stack Eq_427 dwArg0C)
void even_more_crude(byte bArg08, Eq_427 dwArg0C)
{
	putchar((int32) bArg08);
	fputs(dwArg0C, globals->ptr804B02C);
	strlen(dwArg0C);
}

// 08048940: Register word32 intermediate_1_accessing_varargs()
word32 intermediate_1_accessing_varargs()
{
	even_more_crude(0x30, 0x08048BA4);
	return crude_printf(&globals->t8048BBC) + 0x2A;
}

// 08048970: Register word32 intermediate_4_asm_instr_with_multiple_results(Register word32 edx, Register word32 ebx, Stack word32 dwArg04, Stack word32 dwArg08)
word32 intermediate_4_asm_instr_with_multiple_results(word32 edx, word32 ebx, word32 dwArg04, word32 dwArg08)
{
	word32 eax_9;
	ui32 ebx_10;
	ui32 ecx_11;
	ui32 edx_12;
	__cpuid(dwArg04, dwArg08, &eax_9, &ebx_10, &ecx_11, &edx_12);
	return eax_9 + (ecx_11 * 0x03 + ebx_10 * 0x02) + edx_12 * 0x04;
}

// 08048990: Register word32 basic_3_accessing_all_registers(Register word32 eax, Register word32 ecx, Register word32 edx, Register word32 ebx, Register Eq_47 ebp, Register word32 esi, Register word32 edi)
word32 basic_3_accessing_all_registers(word32 eax, word32 ecx, word32 edx, word32 ebx, Eq_47 ebp, word32 esi, word32 edi)
{
	return ecx + ebp * 0x08;
}

// 080489B1: Register word32 sum3_uncommon(Register word32 ebp, Register ptr32 esi, Register time_t edi)
word32 sum3_uncommon(word32 ebp, ptr32 esi, time_t edi)
{
	return (word32) edi + ((word32) edi + esi) + ebp + ebp + ebp + 0x0A;
}

// 080489D0: Register word32 intermediate_2_use_uncommon_registers_for_parameters(Stack ptr32 dwArg1C, Register out ptr32 ebxOut, Register out ptr32 esiOut, Register out ptr32 ediOut)
word32 intermediate_2_use_uncommon_registers_for_parameters(ptr32 dwArg1C, ptr32 & ebxOut, ptr32 & esiOut, ptr32 & ediOut)
{
	Eq_200 eax_4 = time(null);
	word32 esi_6;
	*esiOut = dwArg1C;
	word32 ebx_7;
	*ebxOut = null;
	word32 edi_9;
	*ediOut = eax_4;
	if (sum3_uncommon(0x2A, dwArg1C, eax_4) > 0x7B)
	{
		puts("un common");
		word32 ebx_26;
		*ebxOut = (char *) "un common";
	}
	return 0x00;
}

// 08048A00: void intermediate_3_calling_noreturn()
void intermediate_3_calling_noreturn()
{
	puts("before");
	exit(0x01);
}

// 08048A30: Register word32 intermediate_5_pushs_in_different_blocks(Stack word32 dwArg10)
word32 intermediate_5_pushs_in_different_blocks(word32 dwArg10)
{
	char * dwLoc04_12;
	if (dwArg10 != 0x2A)
		dwLoc04_12 = (char *) "it not 42";
	else
		dwLoc04_12 = (char *) "is 42";
	puts(dwLoc04_12);
	return 0x00;
}

// 08048A50: void advanced_1_pass_in_flags_reg_helper()
void advanced_1_pass_in_flags_reg_helper()
{
	if (!SZO)
		puts("is above 2");
}

// 08048A62: Register word32 advanced_1_pass_in_flags_reg(Stack word32 dwArg04)
word32 advanced_1_pass_in_flags_reg(word32 dwArg04)
{
	advanced_1_pass_in_flags_reg_helper();
	return 0x00;
}

// 08048A75: FlagGroup byte advanced_2_return_in_flags_reg_helper(Stack word32 dwArg04)
byte advanced_2_return_in_flags_reg_helper(word32 dwArg04)
{
	return cond(fp);
}

// 08048A83: Register word32 advanced_2_return_in_flags_reg()
word32 advanced_2_return_in_flags_reg()
{
	if (!advanced_2_return_in_flags_reg_helper(dwArg00))
		puts("is above 2");
	return 0x00;
}

// 08048A9A: Register word32 advanced_3_uneven_stack(Stack word32 dwArg0C)
word32 advanced_3_uneven_stack(word32 dwArg0C)
{
	char ** esp_11;
	if (dwArg0C != 0x2A)
		esp_11 = fp - 0x08;
	else
		esp_11 = fp - 0x0C;
	puts(*esp_11);
	return 0x00;
}

// 08048AD0: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void __libc_csu_init(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	struct Eq_6 * ebx_15 = __x86.get_pc_thunk.bx(dwLoc14);
	_init();
	if ((char *) &ebx_15->ptr242F + 0x04 - &ebx_15->ptr242F >> 0x02 != 0x00)
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
			ebx_15->ptr242F();
		} while (esi_69 != edi_68 + 0x01);
	}
}

// 08048B30: void __libc_csu_fini()
void __libc_csu_fini()
{
}

// 08048B34: void _fini()
void _fini()
{
	__x86.get_pc_thunk.bx(dwLoc10);
}

