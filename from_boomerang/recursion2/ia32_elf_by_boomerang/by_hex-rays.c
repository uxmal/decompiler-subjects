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
int __cdecl main(int argc, const char **argv, const char **envp);
int __fastcall b(int a1, int a2);
int __fastcall c(int a1, int a2);
int __fastcall d(int a1, int a2);
int __fastcall e(int a1, int a2);
int f();
int g();
int h();
int i();
int __fastcall j(int a1, int a2);
int __fastcall k(int a1, int a2);
int __fastcall l(int a1, int a2);
// void __fastcall _libc_csu_init(int a1);
// void _libc_csu_fini(void); idb
// int __fastcall _do_global_ctors_aux(int a1, int a2);
// void __spoils<edx,ecx> term_proc();

//-------------------------------------------------------------------------
// Data declarations

int (*dword_80497F4)(void) = NULL; // weak
int b_c = 3; // weak
int c_d = 3; // weak
int d_e = 3; // weak
int e_c = 3; // weak
int c_f = 3; // weak
int f_g = 3; // weak
int g_f = 3; // weak
int c_h = 3; // weak
int h_i = 3; // weak
int c_j = 3; // weak
int j_k = 3; // weak
int k_e = 3; // weak
int c_l = 3; // weak
int l_b = 3; // weak
int res; // weak


//----- (08048298) --------------------------------------------------------
int sub_8048298()
{
  return dword_80497F4();
}
// 80497F4: using guessed type int (*dword_80497F4)(void);

//----- (0804837C) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  void *v3; // esp
  int v4; // edx
  int v5; // ecx

  v3 = alloca(16);
  b(55, 99);
  printf("ecx is %d, edx is %d\n", v4, v5);
  printf("res is %d\n", res);
  return 0;
}
// 80483B1: variable 'v4' is possibly undefined
// 80483B1: variable 'v5' is possibly undefined
// 804984C: using guessed type int res;

//----- (080483D6) --------------------------------------------------------
int __fastcall b(int a1, int a2)
{
  int result; // eax

  if ( --b_c >= 0 )
    c(a2, a1);
  result = res + 2;
  res += 2;
  return result;
}
// 8049810: using guessed type int b_c;
// 804984C: using guessed type int res;

//----- (08048408) --------------------------------------------------------
int __fastcall c(int a1, int a2)
{
  int v2; // edx
  int v3; // ecx
  int v4; // et1
  int v5; // edx
  int v6; // ecx
  int v7; // ett
  int result; // eax

  if ( --c_d >= 0 )
  {
    d(a2, a1);
    v4 = v3;
    a1 = v2;
    a2 = v4;
  }
  if ( --c_f >= 0 )
    f();
  if ( --c_h >= 0 )
    h();
  if ( --c_j >= 0 )
  {
    j(a2, a1);
    v7 = v6;
    a1 = v5;
    a2 = v7;
  }
  if ( --c_l >= 0 )
    l(a2, a1);
  result = res + 3;
  res += 3;
  return result;
}
// 8048429: variable 'v3' is possibly undefined
// 8048429: variable 'v2' is possibly undefined
// 8048473: variable 'a2' is possibly undefined
// 8048473: variable 'a1' is possibly undefined
// 8048478: variable 'v6' is possibly undefined
// 8048478: variable 'v5' is possibly undefined
// 8049814: using guessed type int c_d;
// 8049820: using guessed type int c_f;
// 804982C: using guessed type int c_h;
// 8049834: using guessed type int c_j;
// 8049840: using guessed type int c_l;
// 804984C: using guessed type int res;

//----- (080484A6) --------------------------------------------------------
int __fastcall d(int a1, int a2)
{
  int result; // eax

  if ( --d_e >= 0 )
    e(a2, a1);
  result = res + 5;
  res += 5;
  return result;
}
// 8049818: using guessed type int d_e;
// 804984C: using guessed type int res;

//----- (080484D8) --------------------------------------------------------
int __fastcall e(int a1, int a2)
{
  int result; // eax

  if ( --e_c >= 0 )
    c(a2, a1);
  result = res + 7;
  res += 7;
  return result;
}
// 804981C: using guessed type int e_c;
// 804984C: using guessed type int res;

//----- (0804850A) --------------------------------------------------------
int f()
{
  int result; // eax

  if ( --f_g >= 0 )
    g();
  result = res + 11;
  res += 11;
  return result;
}
// 8049824: using guessed type int f_g;
// 804984C: using guessed type int res;

//----- (08048538) --------------------------------------------------------
int g()
{
  int result; // eax

  if ( --g_f >= 0 )
    f();
  result = res + 13;
  res += 13;
  return result;
}
// 8049828: using guessed type int g_f;
// 804984C: using guessed type int res;

//----- (08048566) --------------------------------------------------------
int h()
{
  int result; // eax

  if ( --h_i >= 0 )
    i();
  result = res + 17;
  res += 17;
  return result;
}
// 8049830: using guessed type int h_i;
// 804984C: using guessed type int res;

//----- (08048594) --------------------------------------------------------
int i()
{
  int result; // eax

  result = res + 19;
  res += 19;
  return result;
}
// 804984C: using guessed type int res;

//----- (080485A6) --------------------------------------------------------
int __fastcall j(int a1, int a2)
{
  int result; // eax

  if ( --j_k >= 0 )
    k(a2, a1);
  result = res + 23;
  res += 23;
  return result;
}
// 8049838: using guessed type int j_k;
// 804984C: using guessed type int res;

//----- (080485D8) --------------------------------------------------------
int __fastcall k(int a1, int a2)
{
  int result; // eax

  if ( --k_e >= 0 )
    e(a2, a1);
  result = res + 27;
  res += 27;
  return result;
}
// 804983C: using guessed type int k_e;
// 804984C: using guessed type int res;

//----- (0804860B) --------------------------------------------------------
int __fastcall l(int a1, int a2)
{
  int result; // eax

  if ( --l_b >= 0 )
    b(a2, a1);
  result = res + 29;
  res += 29;
  return result;
}
// 8049844: using guessed type int l_b;
// 804984C: using guessed type int res;

// nfuncs=28 queued=13 decompiled=13 lumina nreq=0 worse=0 better=0
// ALL OK, 13 function(s) have been successfully decompiled
