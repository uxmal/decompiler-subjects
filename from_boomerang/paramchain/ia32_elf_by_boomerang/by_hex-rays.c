/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void PROCEDURE_LINKAGE_TABLE_();
// int atexit(void (*func)(void));
// int __fpstart(void); weak
// void exit(int status);
// int printf(const char *format, ...);
// void __usercall __noreturn start(void (*a1)(void)@<edx>, const char *a2);
void _fsr();
int __cdecl addem(int a1, int a2, int a3, _DWORD *a4);
int __cdecl passem(int a1, int a2, int a3, _DWORD *a4);
int __cdecl main(int argc, const char **argv, const char **envp);
// int init_proc();
// void term_proc(void); idb


//----- (080487C8) --------------------------------------------------------
void PROCEDURE_LINKAGE_TABLE_()
{
  JUMPOUT(0);
}
// 80487CE: control flows out of bounds to 0

//----- (08048880) --------------------------------------------------------
void _fsr()
{
  ;
}
// 8049B08: using guessed type int _fnonstd_used;

//----- (08048924) --------------------------------------------------------
int __cdecl addem(int a1, int a2, int a3, _DWORD *a4)
{
  int result; // eax

  result = a3 + a2 + a1;
  *a4 = result;
  return result;
}

//----- (08048938) --------------------------------------------------------
int __cdecl passem(int a1, int a2, int a3, _DWORD *a4)
{
  return addem(a1, a2, a3, a4);
}

//----- (08048950) --------------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  int v4; // [esp+0h] [ebp-4h] BYREF

  passem(5, 10, 40, &v4);
  printf("Fifty five is %d\n", v4);
  return 0;
}

// nfuncs=17 queued=5 decompiled=5 lumina nreq=0 worse=0 better=0
// ALL OK, 5 function(s) have been successfully decompiled
