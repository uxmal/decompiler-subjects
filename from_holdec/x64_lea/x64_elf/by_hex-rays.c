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
// void *deregister_tm_clones();
// __int64 register_tm_clones();
// void *_do_global_dtors_aux();
// __int64 frame_dummy();
// void __fastcall _libc_csu_init(unsigned int a1, __int64 a2, __int64 a3);
// void _libc_csu_fini(void); idb
// void term_proc();
// int __fastcall _libc_start_main(int (__fastcall *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// __int64 _gmon_start__(void); weak

//-------------------------------------------------------------------------
// Data declarations

__int64 (*qword_404010)(void) = NULL; // weak


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
  printf("lea1 should=0x1a2a3a4a5a6a7b8b/1885383485026892683 is=0x%016lx\n", 0x1A2A3A4A5A6A7B8BLL);
  printf("lea2 should=0x1a2a3a4a5a6a7b8b/1885383485026892683 is=0x%016lx\n", 0x1A2A3A4A5A6A7B8BLL);
  printf("lea3 should=0x000000005b6b7b8b/         1533770635 is=0x%016lx\n", 1533770635LL);
  printf("lea4 should=0x000000005b6b7b8b/         1533770635 is=0x%016lx\n", 1533770635LL);
  printf("lea5 should=0x1b2b3b4b5b6b7b8b/1957723657864969099 is=0x%016lx\n", 0x1B2B3B4B5B6B7B8BLL);
  printf("lea6 should=0x000000005b6b7b8b/         1533770635 is=0x%016lx\n", 1533770635LL);
  return 0;
}

// nfuncs=16 queued=2 decompiled=2 lumina nreq=0 worse=0 better=0
// ALL OK, 2 function(s) have been successfully decompiled
