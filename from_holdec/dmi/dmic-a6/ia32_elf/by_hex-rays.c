/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void *init_proc();
int sub_8049030();
// int __cdecl __libc_start_main(int (__cdecl *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>);
void sub_8049087();
void dl_relocate_static_pie();
void _x86_get_pc_thunk_bx();
char *deregister_tm_clones();
int register_tm_clones();
char *_do_global_dtors_aux();
int frame_dummy();
int __cdecl main(int argc, const char **argv, const char **envp);
int (**_libc_csu_init())();
void _libc_csu_fini();
void term_proc();

//-------------------------------------------------------------------------
// Data declarations

int (*_frame_dummy_init_array_entry[2])() = { &frame_dummy, &_do_global_dtors_aux }; // weak
int (*_do_global_dtors_aux_fini_array_entry)() = &_do_global_dtors_aux; // weak
int (*dword_804C008)(void) = NULL; // weak
char _bss_start; // weak
// extern _UNKNOWN _gmon_start__; weak


//----- (08049000) --------------------------------------------------------
void *init_proc()
{
  void *result; // eax

  result = &_gmon_start__;
  if ( &_gmon_start__ )
    result = (void *)((int (*)(void))_gmon_start__)();
  return result;
}

//----- (08049030) --------------------------------------------------------
int sub_8049030()
{
  return dword_804C008();
}
// 804C008: using guessed type int (*dword_804C008)(void);

//----- (08049050) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>)
{
  int v2; // esi
  int v3; // [esp-4h] [ebp-4h] BYREF
  char *retaddr; // [esp+0h] [ebp+0h] BYREF

  v2 = v3;
  v3 = a1;
  __libc_start_main(
    (int (__cdecl *)(int, char **, char **))main,
    v2,
    &retaddr,
    (void (*)(void))_libc_csu_init,
    _libc_csu_fini,
    a2,
    &v3);
  __halt();
}
// 8049057: positive sp value 4 has been found

//----- (08049087) --------------------------------------------------------
void sub_8049087()
{
  ;
}

//----- (08049090) --------------------------------------------------------
void dl_relocate_static_pie()
{
  ;
}

//----- (080490A0) --------------------------------------------------------
void _x86_get_pc_thunk_bx()
{
  ;
}

//----- (080490B0) --------------------------------------------------------
char *deregister_tm_clones()
{
  return &_bss_start;
}
// 80490B0: could not find valid save-restore pair for ebp
// 804C014: using guessed type char _bss_start;

//----- (080490F0) --------------------------------------------------------
int register_tm_clones()
{
  return 0;
}
// 80490F0: could not find valid save-restore pair for ebp

//----- (08049130) --------------------------------------------------------
char *_do_global_dtors_aux()
{
  char *result; // eax

  if ( !_bss_start )
  {
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}
// 8049130: could not find valid save-restore pair for ebp
// 804C014: using guessed type char _bss_start;

//----- (08049160) --------------------------------------------------------
int frame_dummy()
{
  return register_tm_clones();
}

//----- (08049166) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  return 42;
}

//----- (08049180) --------------------------------------------------------
int (**_libc_csu_init())()
{
  int (**result)(); // eax
  int v1; // edi

  init_proc();
  result = _frame_dummy_init_array_entry;
  if ( &_do_global_dtors_aux_fini_array_entry - _frame_dummy_init_array_entry )
  {
    v1 = 0;
    do
      result = (int (**)())_frame_dummy_init_array_entry[v1++]();
    while ( &_do_global_dtors_aux_fini_array_entry - _frame_dummy_init_array_entry != v1 );
  }
  return result;
}
// 804BF0C: using guessed type int (*_frame_dummy_init_array_entry[2])();
// 804BF10: using guessed type int (*_do_global_dtors_aux_fini_array_entry)();

//----- (080491E0) --------------------------------------------------------
void _libc_csu_fini()
{
  ;
}

//----- (080491E8) --------------------------------------------------------
void term_proc()
{
  ;
}

// nfuncs=16 queued=14 decompiled=14 lumina nreq=0 worse=0 better=0
// ALL OK, 14 function(s) have been successfully decompiled
