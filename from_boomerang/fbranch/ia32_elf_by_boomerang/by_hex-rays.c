/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

// int __usercall init_proc@<eax>(int a1@<eax>);
void sub_8048290();
// int puts(const char *s);
// int scanf(const char *format, ...);
// int __cdecl __libc_start_main(int (__cdecl *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// int printf(const char *format, ...);
// void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>);
// void *__usercall call_gmon_start@<eax>(int a1@<eax>);
// void _do_global_dtors_aux();
// int frame_dummy();
int __cdecl main(int argc, const char **argv, const char **envp);
// void __usercall _libc_csu_init(int a1@<eax>);
// void _libc_csu_fini(void); idb
// int __fastcall _do_global_ctors_aux(int a1, int a2);
// void term_proc();


//----- (08048290) --------------------------------------------------------
void sub_8048290()
{
  JUMPOUT(0);
}
// 8048296: control flows out of bounds to 0

//----- (08048390) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  int result; // eax
  char v4; // fps^1
  bool v5; // c0
  char v6; // c2
  bool v7; // c3
  long double v8; // fst7
  char v9; // fps^1
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  __int16 v13; // fps
  bool v14; // c0
  char v15; // c2
  bool v16; // c3
  float v17; // [esp+4h] [ebp-4h] BYREF

  scanf("%f", &v17);
  result = printf("a is %f, b is %f\n", 5.0, v17);
  v5 = v17 < 5.0;
  v6 = 0;
  v7 = v17 == 5.0;
  v8 = v17;
  if ( (v4 & 0x45) == 0x40 )
  {
    result = puts("Equal");
    v8 = v17;
  }
  v10 = v8 > 5.0;
  v11 = 0;
  v12 = 5.0 == v8;
  if ( (v9 & 0x45) != 64 )
  {
    result = puts("Not Equal");
    v8 = v17;
  }
  if ( v8 < 5.0 )
  {
    result = puts("Greater");
    v8 = v17;
  }
  if ( v8 >= 5.0 )
  {
    result = puts("Less or Equal");
    v8 = v17;
  }
  if ( v8 <= 5.0 )
  {
    result = puts("Greater or Equal");
    v8 = v17;
  }
  v14 = v8 < 5.0;
  v15 = 0;
  v16 = v8 == 5.0;
  LOWORD(result) = v13;
  if ( v8 > 5.0 )
    result = puts("Less");
  return result;
}
// 80483D3: variable 'v4' is possibly undefined
// 80483EC: variable 'v9' is possibly undefined

// nfuncs=19 queued=2 decompiled=2 lumina nreq=0 worse=0 better=0
// ALL OK, 2 function(s) have been successfully decompiled
