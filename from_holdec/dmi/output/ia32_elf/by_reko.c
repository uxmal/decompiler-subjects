// subject.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject.h"

// 080483E8: void _init()
void _init()
{
	if (__x86.get_pc_thunk.bx(dwLoc10)->dw2C0B != 0x00)
		fn080484D0();
}

// 08048420: void printf()
void printf()
{
}

// 08048430: void time()
void time()
{
}

// 08048440: void memcmp()
void memcmp()
{
}

// 08048450: void fseek()
void fseek()
{
}

// 08048460: void fwrite()
void fwrite()
{
}

// 08048470: void puts()
void puts()
{
}

// 08048480: void strchr()
void strchr()
{
}

// 08048490: void __libc_start_main()
void __libc_start_main()
{
}

// 080484A0: void fopen()
void fopen()
{
}

// 080484B0: void putchar()
void putchar()
{
}

// 080484C0: void chmod()
void chmod()
{
}

// 080484D0: void fn080484D0()
void fn080484D0()
{
	word32 esp_3;
	globals->ptr804AFFC();
}

// 080484E0: void main(Stack word32 dwArg00, Stack int32 dwArg04, Stack (ptr32 (ptr32 char)) dwArg08)
void main(word32 dwArg00, int32 dwArg04, char * * dwArg08)
{
	__align(fp);
	basic_1_string_literals_quoting();
	basic_2_string_literals_low_chars();
	basic_3_string_literals_high_chars();
	basic_4_readonly_vs_modifiable();
	basic_10_result_var_name(dwArg04);
	intermediate_1_for_loop_name(dwArg04);
	intermediate_2_parameter_names(dwArg04);
	intermediate_10_int_literal_in_bit_context(dwArg04);
	intermediate_11_int_literal_in_arithm_context(dwArg04);
	advanced_1_null_bytes_with_fixed_length(null);
	advanced_2_naming_enums(null);
	advanced_10_int_literal_in_char_context(*dwArg08);
	advanced_11_printf_type_related();
}

// 0804856D: void _start(Register (ptr32 Eq_78) edx, Stack int32 dwArg00)
void _start( * edx, int32 dwArg00)
{
	__align((char *) fp + 0x04);
	__libc_start_main(&globals->t80484E0, dwArg00, (char *) fp + 0x04, &globals->t8048C10, &globals->t8048C70, edx, fp);
	__hlt();
}

// 08048590: Register word32 __x86.get_pc_thunk.bx(Stack word32 dwArg00)
word32 __x86.get_pc_thunk.bx(word32 dwArg00)
{
	return dwArg00;
}

// 080485A0: void deregister_tm_clones()
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

// 080485D0: void register_tm_clones()
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

// 08048610: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	if (globals->b804B050 == 0x00)
	{
		deregister_tm_clones();
		globals->b804B050 = 0x01;
	}
}

// 08048630: void frame_dummy()
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

// 08048660: void basic_1_string_literals_quoting()
void basic_1_string_literals_quoting()
{
	puts("with ' single quote");
	puts("with \" double quote");
}

// 08048680: void basic_2_string_literals_low_chars()
void basic_2_string_literals_low_chars()
{
	puts("hex=0x01 dec=1 char=\x01FINI");
	puts("hex=0x02 dec=2 char=\x02FINI");
	puts("hex=0x03 dec=3 char=\x03FINI");
	puts("hex=0x04 dec=4 char=\x04FINI");
	puts("hex=0x05 dec=5 char=\x05FINI");
	puts("hex=0x06 dec=6 char=\x06FINI");
	puts("hex=0x07 dec=7 char=\aFINI");
	puts("hex=0x08 dec=8 char=\bFINI");
	puts("hex=0x09 dec=9 char=\tFINI");
	puts("hex=0x0a dec=10 char=\nFINI");
	puts("hex=0x0b dec=11 char=\vFINI");
	puts("hex=0x0c dec=12 char=\fFINI");
	puts("hex=0x0d dec=13 char=\rFINI");
	puts("hex=0x0e dec=14 char=\x0EFINI");
	puts("hex=0x0f dec=15 char=\x0FFINI");
	puts("hex=0x10 dec=16 char=\x10FINI");
	puts("hex=0x11 dec=17 char=\x11FINI");
	puts("hex=0x12 dec=18 char=\x12FINI");
	puts("hex=0x13 dec=19 char=\x13FINI");
	puts("hex=0x14 dec=20 char=\x14FINI");
	puts("hex=0x15 dec=21 char=\x15FINI");
	puts("hex=0x16 dec=22 char=\x16FINI");
	puts("hex=0x17 dec=23 char=\x17FINI");
	puts("hex=0x18 dec=24 char=\x18FINI");
	puts("hex=0x19 dec=25 char=\x19FINI");
	puts("hex=0x1a dec=26 char=\x1AFINI");
	puts("hex=0x1b dec=27 char=\x1BFINI");
	puts("hex=0x1c dec=28 char=\x1CFINI");
	puts("hex=0x1d dec=29 char=\x1DFINI");
	puts("hex=0x1e dec=30 char=\x1EFINI");
	puts("hex=0x1f dec=31 char=\x1FFINI");
}

// 08048800: void basic_3_string_literals_high_chars()
void basic_3_string_literals_high_chars()
{
	puts("hex=0xf0 dec=240 char=\xF0FINI");
	puts("hex=0xf1 dec=241 char=\xF1FINI");
	puts("hex=0xf2 dec=242 char=\xF2FINI");
	puts("hex=0xf3 dec=243 char=\xF3FINI");
	puts("hex=0xf4 dec=244 char=\xF4FINI");
	puts("hex=0xf5 dec=245 char=\xF5FINI");
	puts("hex=0xf6 dec=246 char=\xF6FINI");
	puts("hex=0xf7 dec=247 char=\xF7FINI");
	puts("hex=0xf8 dec=248 char=\xF8FINI");
	puts("hex=0xf9 dec=249 char=\xF9FINI");
	puts("hex=0xfa dec=250 char=\xFAFINI");
	puts("hex=0xfb dec=251 char=\xFBFINI");
	puts("hex=0xfc dec=252 char=\xFCFINI");
	puts("hex=0xfd dec=253 char=\xFDFINI");
	puts("hex=0xfe dec=254 char=\xFEFINI");
	puts("hex=0xff dec=255 char=\xFFFINI");
}

// 080488D0: void basic_4_readonly_vs_modifiable()
void basic_4_readonly_vs_modifiable()
{
	puts("a read only string");
	puts(&globals->b804B03C);
}

// 080488F0: void basic_10_result_var_name(Stack int32 dwArg04)
void basic_10_result_var_name(int32 dwArg04)
{
	if (dwArg04 > 0x05)
		return;
	time(null);
}

// 08048920: void intermediate_1_for_loop_name(Stack int32 dwArg04)
void intermediate_1_for_loop_name(int32 dwArg04)
{
	if (dwArg04 > 0x00)
	{
		int32 ebx_28 = 0x30;
		do
		{
			putchar(ebx_28);
			ebx_28 = ebx_28 + 0x01;
		} while (ebx_28 != dwArg04 + 0x30);
	}
}

// 08048960: void intermediate_2_parameter_names(Stack int32 dwArg04)
void intermediate_2_parameter_names(int32 dwArg04)
{
	char * eax_10;
	char * edx_41;
	if (dwArg04 != 0x01)
	{
		eax_10 = (char *) "r";
		edx_41 = (char *) "/is/something/else";
		if (dwArg04 < 0x00)
			eax_10 = (char *) "w";
	}
	else
	{
		edx_41 = (char *) "/is/a/1";
		eax_10 = (char *) "r";
	}
	if (fopen(edx_41, eax_10) != null)
		return;
	puts("failed");
}

// 080489D0: void intermediate_10_int_literal_in_bit_context(Stack int32 dwArg04)
void intermediate_10_int_literal_in_bit_context(int32 dwArg04)
{
	putchar(dwArg04 & 0xF0F0);
	putchar(dwArg04 | 0x00FF0000);
	putchar(dwArg04 ^ 0x03);
	putchar(dwArg04 & 0x2A);
	putchar(dwArg04 | 999);
	putchar(dwArg04 ^ 1234321);
}

// 08048A40: void intermediate_11_int_literal_in_arithm_context(Stack int32 dwArg04)
void intermediate_11_int_literal_in_arithm_context(int32 dwArg04)
{
	putchar(dwArg04 + 0xF0F0);
	putchar(dwArg04 + 0xFF010000);
	putchar(dwArg04 * 0x03);
	putchar(dwArg04 + 0x2A);
	putchar(dwArg04 - 999);
	putchar(dwArg04 *s 1234321);
}

// 08048AA0: void advanced_1_null_bytes_with_fixed_length(Stack (ptr32 Eq_60) dwArg04)
void advanced_1_null_bytes_with_fixed_length(FILE * dwArg04)
{
	fwrite(&globals->v8049271, 0x11, 0x01, dwArg04);
	fwrite(&globals->v8049271, 0x01, 0x11, dwArg04);
	memcmp(dwArg04, &globals->v8049271, 0x11);
}

// 08048AE0: void advanced_2_naming_enums(Stack (ptr32 Eq_65) dwArg04)
void advanced_2_naming_enums(FILE * dwArg04)
{
	if (chmod("/some/path", 0x24) + ((fseek(dwArg04, 0x00, 0x00) + fseek(dwArg04, 0x00, 0x01)) + fseek(dwArg04, 0x00, 0x02)) > 0x04)
		puts("something");
}

// 08048B50: void advanced_10_int_literal_in_char_context(Stack (ptr32 char) dwArg04)
void advanced_10_int_literal_in_char_context(char * dwArg04)
{
	putchar(0x31);
	if (strchr(dwArg04, '1') != null)
		puts("contains a '1'");
	puts(fp - 0x0F);
}

// 08048BA0: void advanced_11_printf_type_related()
void advanced_11_printf_type_related()
{
	printf("as char %c\n", '0');
	printf("as int %d\n", 0x30);
	printf("as pointer %p\n", 0x30);
	printf("as octal %o\n", 0x30);
	printf("as hex %x\n", 0x30);
	printf("as unsigned %u\n", ~0x00);
	printf("as signed %d\n", ~0x00);
}

// 08048C10: void __libc_csu_init(Stack word32 dwArg04, Stack word32 dwArg08, Stack word32 dwArg0C)
void __libc_csu_init(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	struct Eq_6 * ebx_15 = __x86.get_pc_thunk.bx(dwLoc14);
	_init();
	if ((char *) &ebx_15->ptr22EF + 0x04 - &ebx_15->ptr22EF >> 0x02 != 0x00)
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
			ebx_15->ptr22EF();
		} while (esi_69 != edi_68 + 0x01);
	}
}

// 08048C70: void __libc_csu_fini()
void __libc_csu_fini()
{
}

// 08048C74: void _fini()
void _fini()
{
	__x86.get_pc_thunk.bx(dwLoc10);
}

