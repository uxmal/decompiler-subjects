/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

// __int64 (**init_proc())(void);
__int64 __fastcall sub_401020(); // weak
// int printf(const char *format, ...);
int __cdecl main(int argc, const char **argv, const char **envp);
// void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void));
// void dl_relocate_static_pie();
// char *deregister_tm_clones();
// __int64 register_tm_clones();
// char *_do_global_dtors_aux();
// __int64 frame_dummy();
void __cdecl a_func();
// void __fastcall _libc_csu_init(unsigned int a1, __int64 a2, __int64 a3);
// void _libc_csu_fini(void); idb
// void term_proc();
// int __fastcall _libc_start_main(int (__fastcall *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// __int64 _gmon_start__(void); weak

//-------------------------------------------------------------------------
// Data declarations

__int64 (*qword_404010)(void) = NULL; // weak
int a_global = 42; // idb


//----- (0000000000401020) ----------------------------------------------------
__int64 sub_401020()
{
  return qword_404010();
}
// 401020: using guessed type __int64 __fastcall sub_401020();
// 404010: using guessed type __int64 (*qword_404010)(void);

//----- (0000000000401040) ----------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  printf("in main: %d\n", (unsigned int)a_global);
  printf("in func: %d\n", (unsigned int)++a_global);
  return 0;
}

//----- (0000000000401170) ----------------------------------------------------
void __cdecl a_func()
{
  printf("in func: %d\n", (unsigned int)a_global);
}

// nfuncs=17 queued=3 decompiled=3 lumina nreq=0 worse=0 better=0
// ALL OK, 3 function(s) have been successfully decompiled
