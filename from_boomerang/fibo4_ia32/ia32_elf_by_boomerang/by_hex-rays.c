/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

// int __fastcall init_proc(int a1);
int sub_80482BC();
// int scanf(const char *format, ...);
// int __cdecl __libc_start_main(int (__cdecl *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// int printf(const char *format, ...);
// int __gmon_start__(void); weak
// void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>);
// int __fastcall call_gmon_start(int a1);
// void _do_global_dtors_aux();
// int frame_dummy();
// int __usercall fib@<eax>(int a1@<esi>);
int __cdecl main(int argc, const char **argv, const char **envp);
// void __fastcall _libc_csu_init(int a1);
// void _libc_csu_fini(void); idb
// int __fastcall _do_global_ctors_aux(int a1, int a2);
// void __spoils<edx,ecx> term_proc();

//-------------------------------------------------------------------------
// Data declarations

int (*dword_8049600)(void) = NULL; // weak


//----- (080482BC) --------------------------------------------------------
int sub_80482BC()
{
  return dword_8049600();
}
// 8049600: using guessed type int (*dword_8049600)(void);

//----- (080483B0) --------------------------------------------------------
int __usercall fib@<eax>(int a1@<esi>)
{
  int v2; // [esp-4h] [ebp-Ch]
  int v3; // [esp+0h] [ebp-8h]

  if ( a1 <= 1 )
    return a1;
  v2 = fib(a1 - 1);
  return fib(v3 - 2) + v2;
}
// 80483C2: variable 'v3' is possibly undefined

//----- (080483DF) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  void *v3; // esp
  int v5; // [esp+10h] [ebp-8h] BYREF
  int v6; // [esp+14h] [ebp-4h]

  v3 = alloca(16);
  printf("Input number: ");
  scanf("%d", &v5);
  v6 = fib(v5);
  printf("fibonacci(%d) = %d\n", v5, v6);
  return 0;
}

// nfuncs=20 queued=3 decompiled=3 lumina nreq=0 worse=0 better=0
// ALL OK, 3 function(s) have been successfully decompiled
