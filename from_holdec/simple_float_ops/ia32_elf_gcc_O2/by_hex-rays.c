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
int __cdecl main(int argc, const char **argv, const char **envp);
// void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>);
// void _x86_get_pc_thunk_bx();
// int deregister_tm_clones();
// int register_tm_clones();
// int _do_global_dtors_aux();
// int frame_dummy();
void __cdecl use(double x);
void __cdecl use_int(int x);
int read_ints(); // idb
int __cdecl write_ints(double pi);
int read_floats(); // idb
void __cdecl write_floats(double pi);
void converting_between_floats_f1(); // idb
void converting_between_floats_f2(); // idb
void converting_between_floats_d1(); // idb
void converting_between_floats_d2(); // idb
void converting_between_floats_l1(); // idb
void converting_between_floats_l2(); // idb
int __cdecl basic_operations(double x, double y);
int __cdecl compare_floats(double x, double y);
int __cdecl constants(double x);
// void _libc_csu_init(void); idb
// void _libc_csu_fini(void); idb
// void term_proc();

//-------------------------------------------------------------------------
// Data declarations

int (*dword_804A008)(void) = NULL; // weak
long double global_long_double = ?flt; // idb
double global_double =  11.0; // idb
float global_float =  10.0; // idb
__int64 global_long_long = 5LL; // idb
int global_long = 4; // idb
int global_int = 3; // idb
__int16 global_short = 2; // idb
char global_char = '\x01'; // idb


//----- (080482D0) --------------------------------------------------------
int sub_80482D0()
{
  return dword_804A008();
}
// 804A008: using guessed type int (*dword_804A008)(void);

//----- (08048310) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  printf("%zu %zu %zu %zu %zu\n", 1u, 2u, 4u, 4u, 8u);
  printf("%zu %zu %zu\n", 4u, 8u, 0xCu);
  return 0;
}

//----- (08048450) --------------------------------------------------------
void __cdecl use(double x)
{
  printf("%f", x);
}

//----- (08048470) --------------------------------------------------------
void __cdecl use_int(int x)
{
  printf("%d", x);
}

//----- (08048490) --------------------------------------------------------
int read_ints()
{
  printf(
    "%f",
    (double)((long double)global_char
           + 0.0
           + (long double)global_short
           + (long double)global_int
           + (long double)global_long
           + (long double)global_long_long));
  return 120;
}

//----- (080484E0) --------------------------------------------------------
int __cdecl write_ints(double pi)
{
  global_char = (__int16)pi;
  global_short = (__int16)pi;
  global_long_long = (__int64)pi;
  global_int = (int)pi;
  global_long = (int)pi;
  return 121;
}

//----- (08048550) --------------------------------------------------------
int read_floats()
{
  printf("%f", (double)(global_float + 0.0 + global_double + global_long_double));
  return 122;
}

//----- (08048590) --------------------------------------------------------
void __cdecl write_floats(double pi)
{
  global_float = pi;
  global_double = pi;
  global_long_double = pi;
}

//----- (080485B0) --------------------------------------------------------
void converting_between_floats_f1()
{
  global_float = global_double;
}

//----- (080485D0) --------------------------------------------------------
void converting_between_floats_f2()
{
  global_float = global_long_double;
}

//----- (080485F0) --------------------------------------------------------
void converting_between_floats_d1()
{
  global_double = global_float;
}

//----- (08048600) --------------------------------------------------------
void converting_between_floats_d2()
{
  global_double = global_long_double;
}

//----- (08048620) --------------------------------------------------------
void converting_between_floats_l1()
{
  global_long_double = global_float;
}

//----- (08048630) --------------------------------------------------------
void converting_between_floats_l2()
{
  global_long_double = global_double;
}

//----- (08048640) --------------------------------------------------------
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

//----- (08048700) --------------------------------------------------------
int __cdecl compare_floats(double x, double y)
{
  printf("%d", y == x);
  printf("%d", y != x);
  printf("%d", x > (long double)y);
  printf("%d", x >= (long double)y);
  printf("%d", y > (long double)x);
  printf("%d", y >= (long double)x);
  return 124;
}

//----- (080487F0) --------------------------------------------------------
int __cdecl constants(double x)
{
  printf("%f", x + x);
  printf("%f", (double)(x * 3.0));
  printf("%f", (double)(x * 3.141592653589793));
  printf("%f", (double)(x * 10.0));
  printf("%f", (double)(x * 12.345));
  return 125;
}

// nfuncs=33 queued=17 decompiled=17 lumina nreq=0 worse=0 better=0
// ALL OK, 17 function(s) have been successfully decompiled
