// subject_fini.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_fini.h"

// 08048690: void _fini()
void _fini()
{
	__do_global_dtors_aux();
}

// subject_init.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_init.h"

// 0804829C: void _init()
void _init()
{
	call_gmon_start();
	frame_dummy();
	__do_global_ctors_aux();
}

// subject_plt.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_plt.h"

// 080482C4: void scanf()
void scanf()
{
}

// 080482D4: void __libc_start_main()
void __libc_start_main()
{
}

// 080482E4: void fwrite()
void fwrite()
{
}

// subject_text.c
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

#include "subject_text.h"

// 08048300: void fn08048300(Register (ptr32 Eq_11) edx, Stack int32 dwArg00)
void fn08048300(void (* edx)(), int32 dwArg00)
{
	__align((char *) fp + 4);
	__libc_start_main(&g_t8048410, dwArg00, (char *) fp + 4, &g_t804829C, &g_t8048690, edx, fp);
	__hlt();
}

// 08048324: void call_gmon_start()
// Called from:
//      _init
void call_gmon_start()
{
	<anonymous> * eax_16 = g_ptr8049850;
	if (eax_16 != null)
		eax_16();
}

// 08048350: void __do_global_dtors_aux()
// Called from:
//      _fini
void __do_global_dtors_aux()
{
	if (g_b8049858 == 0x00)
	{
		<anonymous> ** eax_11 = g_ptr8049754;
		<anonymous> * edx_12 = *eax_11;
		while (edx_12 != null)
		{
			<anonymous> ** eax_19 = (char *) eax_11 + 4;
			g_ptr8049754 = eax_19;
			edx_12();
			eax_11 = g_ptr8049754;
			edx_12 = (<anonymous> *) *eax_11;
		}
		if (0x00 != 0x00)
		{
			word32 eax_44;
			word32 edx_45;
			fn00000000();
		}
		g_b8049858 = 0x01;
	}
}

// 080483B0: void frame_dummy()
// Called from:
//      _init
void frame_dummy()
{
	if (0x00 != 0x00)
		fn00000000();
	if (g_dw8049834 != 0x00 && 0x00 != 0x00)
		fn00000000();
}

// 08048410: void main()
void main()
{
	__align(fp - 44);
	scanf("%d", fp - 0x0C);
	scanf("%d", fp - 0x10);
	if (dwLoc0C == 0x05)
	{
		fwrite(&g_v8048745, 0x01, 0x06, g_ptr8049854);
		if (dwLoc0C == 0x05)
			goto l08048476;
	}
	fwrite(&g_v80486BB, 0x01, 0x0A, g_ptr8049854);
l08048476:
	if (dwLoc0C < 0x05)
	{
		fwrite(&g_v80486C6, 0x01, 0x08, g_ptr8049854);
		if (dwLoc0C < 0x05)
		{
l080484CE:
			fwrite(&g_v80486DE, 0x01, 0x11, g_ptr8049854);
			if (dwLoc0C <= 0x05)
				goto l0804851D;
l080484F8:
			fwrite(&g_v80486F0, 0x01, 0x05, g_ptr8049854);
l0804851D:
			if (dwLoc10 < 0x05)
			{
				fwrite(&g_v80486F6, 0x01, 0x11, g_ptr8049854);
				if (dwLoc10 < 0x05)
				{
l08048576:
					fwrite(&g_v8048720, 0x01, 0x0C, g_ptr8049854);
					if (dwLoc10 <= 0x05)
						goto l080485C5;
l080485A0:
					fwrite(&g_v804872D, 0x01, 0x0A, g_ptr8049854);
l080485C5:
					if (dwLoc0C <= 0x05)
						fwrite(&g_v8048738, 0x01, 0x06, g_ptr8049854);
					if (dwLoc0C > 0x05)
						fwrite(&g_v804873F, 0x01, 0x05, g_ptr8049854);
					return;
				}
			}
			fwrite(&g_v8048708, 0x01, 0x17, g_ptr8049854);
			if (dwLoc10 > 0x05)
				goto l080485A0;
			goto l08048576;
		}
	}
	fwrite(&g_v80486CF, 0x01, 0x0E, g_ptr8049854);
	if (dwLoc0C > 0x05)
		goto l080484F8;
	goto l080484CE;
}

// 08048660: void __do_global_ctors_aux()
// Called from:
//      _init
void __do_global_ctors_aux()
{
	<anonymous> * eax_12 = g_ptr8049824;
	word32 * ebx_13 = &g_ptr8049824;
	while (eax_12 != (<anonymous> *) ~0x00)
	{
		eax_12();
		ebx_13 -= 0x04;
		eax_12 = *ebx_13;
	}
}

