/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

// __int64 (**init_proc())(void);
__int64 __fastcall sub_4003E0(); // weak
// int printf(const char *format, ...);
// void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void));
// signed __int64 deregister_tm_clones();
// __int64 register_tm_clones();
// signed __int64 _do_global_dtors_aux();
// __int64 frame_dummy();
void __fastcall use(double a1, double x);
void __fastcall use_int(int x);
int __cdecl read_ints();
__int64 __fastcall write_ints(double a1, double pi);
int __cdecl read_floats();
void __fastcall write_floats(double a1, double pi);
void __cdecl converting_between_floats_f1();
void __cdecl converting_between_floats_f2();
void __cdecl converting_between_floats_d1();
void __cdecl converting_between_floats_d2();
void __cdecl converting_between_floats_l1();
void __cdecl converting_between_floats_l2();
__int64 __fastcall basic_operations(double a1, double x, double y);
__int64 __fastcall compare_floats(__m128d a1, __m128d x, double y);
__int64 __fastcall constants(double a1, double x);
int __cdecl main(int argc, const char **argv, const char **envp);
// void __fastcall _libc_csu_init(unsigned int a1, __int64 a2, __int64 a3);
// void _libc_csu_fini(void); idb
// void term_proc();
// int __fastcall _libc_start_main(int (__fastcall *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// __int64 _gmon_start__(void); weak

//-------------------------------------------------------------------------
// Data declarations

__int64 (*qword_601010)(void) = NULL; // weak
char global_char = '\x01'; // idb
__int16 global_short = 2; // idb
int global_int = 3; // idb
__int64 global_long = 4LL; // idb
__int64 global_long_long = 5LL; // idb
float global_float =  10.0; // idb
double global_double =  11.0; // idb
long double global_long_double = ?flt; // idb


//----- (00000000004003E0) ----------------------------------------------------
__int64 sub_4003E0()
{
  return qword_601010();
}
// 4003E0: using guessed type __int64 __fastcall sub_4003E0();
// 601010: using guessed type __int64 (*qword_601010)(void);

//----- (0000000000400500) ----------------------------------------------------
void __fastcall use(double a1, double x)
{
  printf("%f", a1);
}

//----- (0000000000400510) ----------------------------------------------------
void __fastcall use_int(int x)
{
  printf("%d", (unsigned int)x);
}

//----- (0000000000400520) ----------------------------------------------------
int __cdecl read_ints()
{
  printf(
    "%f",
    (double)(int)global_long_long
  + (double)(int)global_long
  + (double)global_int
  + (double)global_short
  + (double)global_char);
  return 120;
}

//----- (0000000000400580) ----------------------------------------------------
__int64 __fastcall write_ints(double a1, double pi)
{
  global_char = (int)a1;
  global_short = (int)a1;
  global_int = (int)a1;
  global_long = (unsigned int)(int)a1;
  global_long_long = (unsigned int)(int)a1;
  return 121LL;
}

//----- (00000000004005B0) ----------------------------------------------------
int __cdecl read_floats()
{
  printf("%f", (double)(global_long_double + global_float + 0.0 + global_double));
  return 122;
}

//----- (0000000000400600) ----------------------------------------------------
void __fastcall write_floats(double a1, double pi)
{
  float v2; // xmm1_4

  v2 = a1;
  global_float = v2;
  global_double = a1;
  global_long_double = a1;
}

//----- (0000000000400630) ----------------------------------------------------
void __cdecl converting_between_floats_f1()
{
  float v0; // xmm0_4

  v0 = global_double;
  global_float = v0;
}

//----- (0000000000400650) ----------------------------------------------------
void __cdecl converting_between_floats_f2()
{
  global_float = global_long_double;
}

//----- (0000000000400660) ----------------------------------------------------
void __cdecl converting_between_floats_d1()
{
  global_double = global_float;
}

//----- (0000000000400680) ----------------------------------------------------
void __cdecl converting_between_floats_d2()
{
  global_double = global_long_double;
}

//----- (0000000000400690) ----------------------------------------------------
void __cdecl converting_between_floats_l1()
{
  global_long_double = global_float;
}

//----- (00000000004006A0) ----------------------------------------------------
void __cdecl converting_between_floats_l2()
{
  global_long_double = global_double;
}

//----- (00000000004006B0) ----------------------------------------------------
__int64 __fastcall basic_operations(double a1, double x, double y)
{
  printf("%f", a1 + x);
  printf("%f", a1 - x);
  printf("%f", x - a1);
  printf("%f", a1 * x);
  printf("%f", a1 / x);
  printf("%f", x / a1);
  printf("%f", -a1);
  return 123LL;
}

//----- (0000000000400770) ----------------------------------------------------
__int64 __fastcall compare_floats(__m128d a1, __m128d x, double y)
{
  __m128d v3; // xmm2
  __m128d v4; // rt1

  v3.m128d_f64[0] = a1.m128d_f64[0];
  printf("%d", (unsigned __int8)*(_OWORD *)&_mm_cmpeq_sd(v3, x) & 1);
  v4.m128d_f64[0] = x.m128d_f64[0];
  printf("%d", (unsigned __int8)*(_OWORD *)&_mm_cmpneq_sd(a1, v4) & 1);
  printf("%d", a1.m128d_f64[0] > x.m128d_f64[0]);
  printf("%d", a1.m128d_f64[0] >= x.m128d_f64[0]);
  printf("%d", x.m128d_f64[0] > a1.m128d_f64[0]);
  printf("%d", x.m128d_f64[0] >= a1.m128d_f64[0]);
  return 124LL;
}
// 400784: variable 'v3' is possibly undefined
// 4007A3: variable 'v4' is possibly undefined

//----- (0000000000400830) ----------------------------------------------------
__int64 __fastcall constants(double a1, double x)
{
  printf("%f", a1 + a1);
  printf("%f", 3.0 * a1);
  printf("%f", 3.141592653589793 * a1);
  printf("%f", 10.0 * a1);
  printf("%f", a1 * 12.345);
  return 125LL;
}

//----- (00000000004008C0) ----------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  printf("%zu %zu %zu %zu %zu\n", 1uLL, 2uLL, 4uLL, 8uLL, 8uLL);
  printf("%zu %zu %zu\n", 4uLL, 8uLL, 0x10uLL);
  return 0;
}

// nfuncs=30 queued=17 decompiled=17 lumina nreq=0 worse=0 better=0
// ALL OK, 17 function(s) have been successfully decompiled
