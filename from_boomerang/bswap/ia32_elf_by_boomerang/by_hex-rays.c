/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

// int __usercall init_proc@<eax>(int a1@<eax>);
int sub_8048290();
// int __cdecl __libc_start_main(int (__cdecl *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// int printf(const char *format, ...);
// void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>);
// void *__usercall call_gmon_start@<eax>(int a1@<eax>);
// void _do_global_dtors_aux();
// int frame_dummy();
unsigned __int32 __cdecl bswap(unsigned int a1);
int __cdecl main(int argc, const char **argv, const char **envp);
// void __usercall _libc_csu_init(int a1@<eax>);
// void _libc_csu_fini(void); idb
// int __fastcall _do_global_ctors_aux(int a1, int a2);
// void term_proc();

//-------------------------------------------------------------------------
// Data declarations

int (*dword_8049588)(void) = NULL; // weak


//----- (08048290) --------------------------------------------------------
int sub_8048290()
{
  return dword_8049588();
}
// 8049588: using guessed type int (*dword_8049588)(void);

//----- (08048370) --------------------------------------------------------
unsigned __int32 __cdecl bswap(unsigned int a1)
{
  return _byteswap_ulong(a1);
}

//----- (0804837A) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  void *v3; // esp
  unsigned __int32 v5; // [esp+4h] [ebp-4h]

  v3 = alloca(0);
  v5 = bswap(0x12345678u);
  printf("Output is %x\n", v5);
  return 0;
}

// nfuncs=16 queued=3 decompiled=3 lumina nreq=0 worse=0 better=0
// ALL OK, 3 function(s) have been successfully decompiled
