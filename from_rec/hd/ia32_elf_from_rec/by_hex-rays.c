/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

// int init_proc();
void sub_80484A8();
// char *strcpy(char *dest, const char *src);
// int printf(const char *format, ...);
// void perror(const char *s);
// int __cdecl _xstat(_DWORD, _DWORD, _DWORD); weak
// char *strcat(char *dest, const char *src);
// size_t fread(void *ptr, size_t size, size_t n, FILE *stream);
// FILE *fopen(const char *filename, const char *modes);
// int fclose(FILE *stream);
// int sprintf(char *s, const char *format, ...);
// int atexit(void (*func)(void));
// void exit(int status);
// size_t strlen(const char *s);
void __noreturn __crt_dummy__(); // weak
// int _do_global_dtors_aux();
void fini_dummy();
int __cdecl dumpline(int a1, int a2, int a3);
int __cdecl hexdump(char *s); // idb
int __cdecl main(int argc, const char **argv, const char **envp);
int __cdecl stat(int a1, int a2);
// int _do_global_ctors_aux();
void init_dummy();
// void term_proc(void); idb

//-------------------------------------------------------------------------
// Data declarations

// extern _UNKNOWN __libc_init; weak
// extern _UNKNOWN __setfpucw; weak
int environ = 0; // weak
__int16 _fpu_control; // weak


//----- (080484A8) --------------------------------------------------------
void sub_80484A8()
{
  JUMPOUT(0);
}
// 80484AE: control flows out of bounds to 0

//----- (080485A0) --------------------------------------------------------
// positive sp value has been detected, the output may be wrong!
void __noreturn __crt_dummy__()
{
  int v0; // eax
  int v1; // eax
  int v2; // [esp+8h] [ebp-4h]
  const char *retaddr; // [esp+Ch] [ebp+0h] BYREF

  v0 = sys_personality(0);
  environ = (int)&(&retaddr)[v2 + 1];
  ((void (__cdecl *)(_DWORD))__setfpucw)((unsigned __int16)_fpu_control);
  ((void (*)(void))__libc_init)();
  atexit(term_proc);
  init_proc();
  v1 = main(v2, &retaddr, &(&retaddr)[v2 + 1]);
  exit(v1);
}
// 80485A1: positive sp value 4 has been found
// 80485AC: variable 'v2' is possibly undefined
// 80485A0: using guessed type void __noreturn __crt_dummy__();
// 80499E8: using guessed type int environ;
// 8049AC8: using guessed type __int16 _fpu_control;

//----- (08048650) --------------------------------------------------------
void fini_dummy()
{
  ;
}

//----- (08048660) --------------------------------------------------------
int __cdecl dumpline(int a1, int a2, int a3)
{
  int v3; // eax
  char v4; // cl
  size_t v6; // [esp+4h] [ebp-58h]
  int i; // [esp+8h] [ebp-54h]
  int j; // [esp+8h] [ebp-54h]
  char s[80]; // [esp+Ch] [ebp-50h] BYREF

  sprintf(s, "%08lX:", a2);
  if ( a3 > 16 )
    a3 = 16;
  for ( i = 0; a3 > i; ++i )
    sprintf(&s[3 * i + 9], " %02lX", *(unsigned __int8 *)(i + a1));
  while ( 1 )
  {
    v3 = i++;
    if ( v3 > 15 )
      break;
    strcat(s, "   ");
  }
  v6 = strlen(s);
  strcpy(&s[v6], "  |");
  for ( j = 0; a3 > j; ++j )
  {
    if ( *(_BYTE *)(j + a1) <= 0x1Fu || *(_BYTE *)(j + a1) > 0x7Eu )
      v4 = 46;
    else
      v4 = *(_BYTE *)(j + a1);
    s[j + v6] = v4;
  }
  while ( j <= 15 )
  {
    s[j + v6] = 32;
    ++j;
  }
  strcpy(&s[v6 + j], "|");
  return printf("%s\n", s);
}

//----- (080487F0) --------------------------------------------------------
int __cdecl hexdump(char *s)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-5Ch]
  char v3[20]; // [esp+4h] [ebp-58h] BYREF
  unsigned int v4; // [esp+18h] [ebp-44h]
  FILE *stream; // [esp+44h] [ebp-18h]
  unsigned int i; // [esp+48h] [ebp-14h]
  char ptr[16]; // [esp+4Ch] [ebp-10h] BYREF

  if ( stat((int)s, (int)v3) && (stream = fopen(s, "rb")) != 0 )
  {
    for ( i = 0; v4 > i; i += v2 )
    {
      v2 = fread(ptr, 1u, 0x10u, stream);
      if ( !v2 )
        break;
      dumpline((int)ptr, i, v2);
    }
    fclose(stream);
    result = 0;
  }
  else
  {
    perror(s);
    result = 1;
  }
  return result;
}

//----- (080488E0) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v4; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v4 = 0;
  for ( i = 1; argc > i; ++i )
    v4 += hexdump((char *)argv[i]);
  return v4;
}

//----- (08048950) --------------------------------------------------------
int __cdecl stat(int a1, int a2)
{
  return _xstat(1, a1, a2);
}
// 80484E8: using guessed type int __cdecl _xstat(_DWORD, _DWORD, _DWORD);

//----- (080489B0) --------------------------------------------------------
void init_dummy()
{
  ;
}

// nfuncs=40 queued=8 decompiled=8 lumina nreq=0 worse=0 better=0
// ALL OK, 8 function(s) have been successfully decompiled
