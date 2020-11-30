/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

// int __usercall init_proc@<eax>(int a1@<eax>);
void sub_8048314();
// char *strchr(const char *s, int c);
// char *fgets(char *s, int n, FILE *stream);
// int __cdecl __libc_start_main(int (__cdecl *main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
// int printf(const char *format, ...);
// int fclose(FILE *stream);
// FILE *fopen(const char *filename, const char *modes);
// void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>);
// void *__usercall call_gmon_start@<eax>(int a1@<eax>);
// void _do_global_dtors_aux();
// int frame_dummy();
const char *__cdecl chomp(char *s, int n, FILE *stream);
int __cdecl main(int argc, const char **argv, const char **envp);
// void __usercall _libc_csu_init(int a1@<eax>);
// void _libc_csu_fini(void); idb
// int _do_global_ctors_aux();
// void term_proc();


//----- (08048314) --------------------------------------------------------
void sub_8048314()
{
  JUMPOUT(0);
}
// 804831A: control flows out of bounds to 0

//----- (08048454) --------------------------------------------------------
const char *__cdecl chomp(char *s, int n, FILE *stream)
{
  char *v4; // [esp+10h] [ebp-8h]
  const char *v5; // [esp+14h] [ebp-4h]

  v5 = fgets(s, n, stream);
  if ( v5 )
  {
    v4 = strchr(v5, 10);
    if ( v4 )
      *v4 = 0;
  }
  return v5;
}

//----- (080484A3) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  void *v3; // esp
  int v5; // [esp+1Ch] [ebp-41Ch]
  char s[1036]; // [esp+20h] [ebp-418h] BYREF
  FILE *stream; // [esp+42Ch] [ebp-Ch]

  v3 = alloca(0);
  if ( argc <= 1 )
    return 1;
  stream = fopen(argv[1], "r");
  if ( !stream )
    return 1;
  if ( chomp(s, 1024, stream) )
    printf("%s\n", s);
  fclose(stream);
  return v5;
}
// 8048537: variable 'v5' is possibly undefined

// nfuncs=25 queued=3 decompiled=3 lumina nreq=0 worse=0 better=0
// ALL OK, 3 function(s) have been successfully decompiled
