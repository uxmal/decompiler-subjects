/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

// void *init_proc();
__int64 __fastcall sub_4003D0(); // weak
// int printf(const char *format, ...);
// int __fastcall __libc_start_main(int (__fastcall *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// __int64 __gmon_start__(void); weak
// void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void));
// signed __int64 deregister_tm_clones();
// __int64 register_tm_clones();
// signed __int64 _do_global_dtors_aux();
// __int64 frame_dummy();
__int64 __fastcall fib(int a1);
int __cdecl main(int argc, const char **argv, const char **envp);
// void __fastcall _libc_csu_init(unsigned int a1, __int64 a2, __int64 a3);
// void _libc_csu_fini(void); idb
// void term_proc();

//-------------------------------------------------------------------------
// Data declarations

__int64 (*qword_600950)(void) = NULL; // weak


//----- (00000000004003D0) ----------------------------------------------------
__int64 sub_4003D0()
{
  return qword_600950();
}
// 4003D0: using guessed type __int64 __fastcall sub_4003D0();
// 600950: using guessed type __int64 (*qword_600950)(void);

//----- (00000000004004FD) ----------------------------------------------------
__int64 __fastcall fib(int a1)
{
  int v2; // ebx

  if ( a1 <= 1 )
    return (unsigned int)a1;
  v2 = fib(a1 - 1);
  return v2 + (unsigned int)fib(a1 - 2);
}

//----- (0000000000400543) ----------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  unsigned int v3; // eax

  v3 = fib(5);
  return printf("%d", v3);
}

// nfuncs=18 queued=3 decompiled=3 lumina nreq=0 worse=0 better=0
// ALL OK, 3 function(s) have been successfully decompiled
