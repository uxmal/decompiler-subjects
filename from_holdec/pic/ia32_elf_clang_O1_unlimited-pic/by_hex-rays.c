/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

// void *init_proc();
int sub_8049030();
// int printf(const char *format, ...);
// int __cdecl __libc_start_main(int (__cdecl *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>);
void sub_8049097();
// void dl_relocate_static_pie();
// void _x86_get_pc_thunk_bx();
// char *deregister_tm_clones();
// int register_tm_clones();
// char *_do_global_dtors_aux();
// int frame_dummy();
void a_func(); // idb
int __cdecl main(int argc, const char **argv, const char **envp);
// int (**_libc_csu_init())();
// void _libc_csu_fini();
// void term_proc();

//-------------------------------------------------------------------------
// Data declarations

int (*dword_804C008)(void) = NULL; // weak
int a_global = 42; // idb


//----- (08049030) --------------------------------------------------------
int sub_8049030()
{
  return dword_804C008();
}
// 804C008: using guessed type int (*dword_804C008)(void);

//----- (08049097) --------------------------------------------------------
void sub_8049097()
{
  ;
}

//----- (08049180) --------------------------------------------------------
void a_func()
{
  printf("in func: %d\n", a_global);
}

//----- (080491B0) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  printf("in main: %d\n", a_global);
  ++a_global;
  a_func();
  return 0;
}

// nfuncs=19 queued=4 decompiled=4 lumina nreq=0 worse=0 better=0
// ALL OK, 4 function(s) have been successfully decompiled
