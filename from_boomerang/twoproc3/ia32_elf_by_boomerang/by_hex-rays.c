/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

// int __fastcall init_proc(int a1);
int sub_8048374();
// int xf86GetPciVideoInfo(void); weak
// int __cdecl __libc_start_main(int (__cdecl *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// int printf(const char *format, ...);
// int __gmon_start__(void); weak
// void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>);
// int __fastcall call_gmon_start(int a1);
// void _do_global_dtors_aux();
// int frame_dummy();
int __cdecl getDevice(int a1);
int __cdecl main(int argc, const char **argv, const char **envp);
// void __fastcall _libc_csu_init(int a1);
// void _libc_csu_fini(void); idb
// int _do_global_ctors_aux();
// void __spoils<edx,ecx> term_proc();

//-------------------------------------------------------------------------
// Data declarations

int (*dword_80496F0)(void) = NULL; // weak


//----- (08048374) --------------------------------------------------------
int sub_8048374()
{
  return dword_80496F0();
}
// 80496F0: using guessed type int (*dword_80496F0)(void);

//----- (08048474) --------------------------------------------------------
int __cdecl getDevice(int a1)
{
  return *(_DWORD *)(a1 + 24);
}

//----- (0804847F) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  void *v3; // esp
  int v4; // eax
  int *v6; // [esp+14h] [ebp-4h]

  v3 = alloca(16);
  v6 = (int *)xf86GetPciVideoInfo();
  v4 = getDevice(*v6);
  printf("%i\n", v4);
  return 0;
}
// 8048384: using guessed type int xf86GetPciVideoInfo(void);

// nfuncs=20 queued=3 decompiled=3 lumina nreq=0 worse=0 better=0
// ALL OK, 3 function(s) have been successfully decompiled
