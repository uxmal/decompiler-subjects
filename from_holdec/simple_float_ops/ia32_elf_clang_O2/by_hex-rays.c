/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

// void *init_proc();
int sub_80482D0();
// int printf(const char *format, ...);
// int __cdecl __libc_start_main(int (__cdecl *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// int _gmon_start__(void); weak
// void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>);
// void _x86_get_pc_thunk_bx();
// int deregister_tm_clones();
// int register_tm_clones();
// int _do_global_dtors_aux();
// int frame_dummy();
void use(double x); // idb
void use_int(int x); // idb
int read_ints(); // idb
int write_ints(double pi); // idb
int read_floats(); // idb
void write_floats(double pi); // idb
void converting_between_floats_f1(); // idb
void converting_between_floats_f2(); // idb
void converting_between_floats_d1(); // idb
void converting_between_floats_d2(); // idb
void converting_between_floats_l1(); // idb
void converting_between_floats_l2(); // idb
int basic_operations(double x, double y); // idb
int compare_floats(double x, double y); // idb
int constants(double x); // idb
int __cdecl main(int argc, const char **argv, const char **envp);
// void _libc_csu_init(void); idb
// void _libc_csu_fini(void); idb
// void term_proc();

//-------------------------------------------------------------------------
// Data declarations

int (*dword_804A008)(void) = NULL; // weak
char global_char = '\x01'; // idb
__int16 global_short = 2; // idb
int global_int = 3; // idb
int global_long = 4; // idb
__int64 global_long_long = 5LL; // idb
float global_float =  10.0; // idb
double global_double =  11.0; // idb
long double global_long_double = ?flt; // idb


//----- (080482D0) --------------------------------------------------------
int sub_80482D0()
{
  return dword_804A008();
}
// 804A008: using guessed type int (*dword_804A008)(void);

//----- (08048410) --------------------------------------------------------
void __cdecl use(double x)
{
  printf("%f", x);
}

//----- (08048430) --------------------------------------------------------
void __cdecl use_int(int x)
{
  printf("%d", x);
}

//----- (08048450) --------------------------------------------------------
int read_ints()
{
  printf(
    "%f",
    (double)global_long + (double)global_int + (double)global_short + (double)global_char + (double)global_long_long);
  return 120;
}

//----- (080484B0) --------------------------------------------------------
int __cdecl write_ints(double pi)
{
  global_char = (int)pi;
  global_short = (int)pi;
  global_int = (int)pi;
  global_long = (int)pi;
  global_long_long = (__int64)pi;
  return 121;
}

//----- (08048520) --------------------------------------------------------
int read_floats()
{
  printf("%f", (double)(global_long_double + global_float + 0.0 + global_double));
  return 122;
}

//----- (08048570) --------------------------------------------------------
void __cdecl write_floats(double pi)
{
  float v1; // xmm1_4

  v1 = pi;
  global_double = pi;
  global_float = v1;
  global_long_double = pi;
}

//----- (080485A0) --------------------------------------------------------
void converting_between_floats_f1()
{
  float v0; // xmm0_4

  v0 = global_double;
  global_float = v0;
}

//----- (080485C0) --------------------------------------------------------
void converting_between_floats_f2()
{
  global_float = global_long_double;
}

//----- (080485D0) --------------------------------------------------------
void converting_between_floats_d1()
{
  global_double = global_float;
}

//----- (080485F0) --------------------------------------------------------
void converting_between_floats_d2()
{
  global_double = global_long_double;
}

//----- (08048600) --------------------------------------------------------
void converting_between_floats_l1()
{
  global_long_double = global_float;
}

//----- (08048610) --------------------------------------------------------
void converting_between_floats_l2()
{
  global_long_double = global_double;
}

//----- (08048620) --------------------------------------------------------
int __cdecl basic_operations(double x, double y)
{
  printf("%f", x + y);
  printf("%f", x - y);
  printf("%f", y - x);
  printf("%f", x * y);
  printf("%f", x / y);
  printf("%f", y / x);
  printf("%f", -x);
  return 123;
}

//----- (08048710) --------------------------------------------------------
// local variable allocation has failed, the output may be wrong!
int __cdecl compare_floats(double x, double y)
{
  printf("%d", _mm_cvtsi128_si32((__m128i)_mm_cmpeq_sd((__m128d)*(unsigned __int64 *)&x, *(__m128d *)&y)) & 1);
  printf("%d", _mm_cvtsi128_si32((__m128i)_mm_cmpneq_sd((__m128d)*(unsigned __int64 *)&x, *(__m128d *)&y)) & 1);
  printf("%d", x > y);
  printf("%d", x >= y);
  printf("%d", y > x);
  printf("%d", y >= x);
  return 124;
}
// 8048710: variables would overlap: ^18.8 and ^18.16

//----- (080487E0) --------------------------------------------------------
int __cdecl constants(double x)
{
  printf("%f", x + x);
  printf("%f", 3.0 * x);
  printf("%f", 3.141592653589793 * x);
  printf("%f", 10.0 * x);
  printf("%f", x * 12.345);
  return 125;
}

//----- (08048890) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  printf("%zu %zu %zu %zu %zu\n", 1u, 2u, 4u, 4u, 8u);
  printf("%zu %zu %zu\n", 4u, 8u, 0xCu);
  return 0;
}

// nfuncs=33 queued=17 decompiled=17 lumina nreq=0 worse=0 better=0
// ALL OK, 17 function(s) have been successfully decompiled
