/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

// int __fastcall init_proc(int a1);
int sub_8048298();
// int __cdecl __libc_start_main(int (__cdecl *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// int printf(const char *format, ...);
// int __gmon_start__(void); weak
// void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>);
// int __fastcall call_gmon_start(int a1);
// void _do_global_dtors_aux();
// int frame_dummy();
_BOOL4 __cdecl test(int a1, int a2, int a3);
int __cdecl main(int argc, const char **argv, const char **envp);
// void __fastcall _libc_csu_init(int a1);
// void _libc_csu_fini(void); idb
// int __fastcall _do_global_ctors_aux(int a1, int a2);
// void __spoils<edx,ecx> term_proc();

//-------------------------------------------------------------------------
// Data declarations

int (*dword_80495FC)(void) = NULL; // weak


//----- (08048298) --------------------------------------------------------
int sub_8048298()
{
  return dword_80495FC();
}
// 80495FC: using guessed type int (*dword_80495FC)(void);

//----- (0804837C) --------------------------------------------------------
_BOOL4 __cdecl test(int a1, int a2, int a3)
{
  return a1 < a2 && a2 < a3;
}

//----- (08048398) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  _BOOL4 v3; // eax
  _BOOL4 v4; // eax
  _BOOL4 v5; // eax
  _BOOL4 v6; // eax

  v3 = test(4, 5, 6);
  printf("Result for 4, 5, 6: %d\n", v3);
  v4 = test(6, 5, 4);
  printf("Result for 6, 5, 4: %d\n", v4);
  v5 = test(4, 6, 5);
  printf("Result for 4, 6, 5: %d\n", v5);
  v6 = test(6, 4, 5);
  printf("Result for 6, 4, 5: %d\n", v6);
  return 0;
}

// nfuncs=18 queued=3 decompiled=3 lumina nreq=0 worse=0 better=0
// ALL OK, 3 function(s) have been successfully decompiled
