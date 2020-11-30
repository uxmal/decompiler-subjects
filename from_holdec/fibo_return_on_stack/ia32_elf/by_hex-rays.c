/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

// int init_proc();
int sub_8048308();
// int __gmon_start__(void); weak
// int __cdecl __libc_start_main(int (__cdecl *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// int printf(const char *format, ...);
// int __isoc99_scanf(const char *, ...); weak
// void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>);
// void _do_global_dtors_aux();
// int frame_dummy();
int __cdecl fibo_normal(int a1);
int __cdecl fibo_return_on_stack(int a1);
int __cdecl fibo_wrapper_return_on_stack(int a1);
int __cdecl main(int argc, const char **argv, const char **envp);
// void _libc_csu_fini(void); idb
// void _libc_csu_init(void); idb
// void (*_do_global_ctors_aux())(void);
// void term_proc();

//-------------------------------------------------------------------------
// Data declarations

int (*dword_8049798)(void) = NULL; // weak


//----- (08048308) --------------------------------------------------------
int sub_8048308()
{
  return dword_8049798();
}
// 8049798: using guessed type int (*dword_8049798)(void);

//----- (08048414) --------------------------------------------------------
int __cdecl fibo_normal(int a1)
{
  int v1; // ebx

  if ( a1 <= 1 )
    return a1;
  v1 = fibo_normal(a1 - 1);
  return v1 + fibo_normal(a1 - 2);
}

//----- (0804844D) --------------------------------------------------------
int __cdecl fibo_return_on_stack(int a1)
{
  int v1; // ebx
  int result; // eax
  int v3; // [esp+0h] [ebp-1Ch]
  int v4; // [esp+0h] [ebp-1Ch]

  if ( a1 > 1 )
  {
    fibo_return_on_stack(a1 - 1);
    v1 = v3;
    fibo_return_on_stack(a1 - 2);
    result = v1 + v4;
  }
  return result;
}
// 8048467: variable 'v3' is possibly undefined
// 804847C: variable 'v4' is possibly undefined

//----- (08048488) --------------------------------------------------------
int __cdecl fibo_wrapper_return_on_stack(int a1)
{
  int v2; // [esp+0h] [ebp-1Ch]

  fibo_return_on_stack(a1);
  return v2;
}
// 8048497: variable 'v2' is possibly undefined

//----- (0804849E) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v4; // [esp+14h] [ebp-Ch] BYREF
  int v5; // [esp+18h] [ebp-8h]
  int v6; // [esp+1Ch] [ebp-4h]

  printf("Input number: ");
  __isoc99_scanf("%d", &v4);
  v5 = fibo_normal(v4);
  v6 = fibo_return_on_stack(v4);
  printf("fibonacci(%d) = %d %d\n", v4, v5, v6);
  return 0;
}
// 8048348: using guessed type int __isoc99_scanf(const char *, ...);

// nfuncs=22 queued=5 decompiled=5 lumina nreq=0 worse=0 better=0
// ALL OK, 5 function(s) have been successfully decompiled
