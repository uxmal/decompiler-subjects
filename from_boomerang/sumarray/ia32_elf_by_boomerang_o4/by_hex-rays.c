/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

// int __usercall init_proc@<eax>(int a1@<eax>);
void sub_8048248();
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

//-------------------------------------------------------------------------
// Data declarations

_DWORD a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // idb


//----- (08048248) --------------------------------------------------------
void sub_8048248()
{
  JUMPOUT(0);
}
// 804824E: control flows out of bounds to 0

//----- (08048328) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v3; // edx
  int i; // eax

  v3 = 0;
  for ( i = 0; i <= 9; ++i )
    v3 += a[i];
  printf("Sum is %d\n", v3);
  return 0;
}

// nfuncs=15 queued=2 decompiled=2 lumina nreq=0 worse=0 better=0
// ALL OK, 2 function(s) have been successfully decompiled
