/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: Visual C++
*/

#include <windows.h>
#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int __cdecl main_0(int argc, const char **argv, const char **envp);
// void __stdcall __noreturn CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo);
// LONG __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo); idb
int sub_4016D3();
int (*sub_4017A6())(void);
void __cdecl sub_4017CC(); // idb
int __cdecl UserMathErrorFunction();
int sub_401A47();
// LPTOP_LEVEL_EXCEPTION_FILTER __stdcall SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter);

//-------------------------------------------------------------------------
// Data declarations

_UNKNOWN unk_404C60; // weak
int (*dword_404D60[66])(void) =
{
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
}; // idb
_UNKNOWN unk_404E68; // weak
void (*dword_404F68[66])(void) =
{
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
}; // idb
const _ThrowInfo _TI1J = { 0u, NULL, NULL, &_CTA1J }; // idb
const _ThrowInfo _TI1H = { 0u, NULL, NULL, &_CTA1H }; // idb


//----- (00401010) --------------------------------------------------------
int __cdecl main_0(int argc, const char **argv, const char **envp)
{
  int v4; // [esp+0h] [ebp-28h] BYREF
  int v5; // [esp+10h] [ebp-18h] BYREF
  int pExceptionObject[2]; // [esp+14h] [ebp-14h] BYREF
  int v7; // [esp+24h] [ebp-4h]
  int argca; // [esp+30h] [ebp+8h]
  int argcb; // [esp+30h] [ebp+8h]

  pExceptionObject[1] = (int)&v4;
  v7 = 0;
  argca = argc + 1;
  if ( argca == 10 )
  {
    pExceptionObject[0] = 0;
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1H);
  }
  LOBYTE(v7) = 1;
  argcb = argca + 6;
  if ( argcb == 7 )
  {
    v5 = 0;
    CxxThrowException(&v5, (_ThrowInfo *)&_TI1J);
  }
  return argcb + 3;
}

//----- (004016D3) --------------------------------------------------------
int sub_4016D3()
{
  SetUnhandledExceptionFilter(__CxxUnhandledExceptionFilter);
  return 0;
}

//----- (004017A6) --------------------------------------------------------
int (*sub_4017A6())(void)
{
  int (*result)(void); // eax
  int (**v1)(void); // edi

  result = (int (*)(void))&unk_404C60;
  v1 = (int (**)(void))&unk_404C60;
  if ( &unk_404C60 < (_UNKNOWN *)dword_404D60 )
  {
    do
    {
      result = *v1;
      if ( *v1 )
        result = (int (*)(void))result();
      ++v1;
    }
    while ( v1 < dword_404D60 );
  }
  return result;
}

//----- (004017CC) --------------------------------------------------------
void __cdecl sub_4017CC()
{
  void (**v0)(void); // edi

  v0 = (void (**)(void))&unk_404E68;
  if ( &unk_404E68 < (_UNKNOWN *)dword_404F68 )
  {
    do
    {
      if ( *v0 )
        (*v0)();
      ++v0;
    }
    while ( v0 < dword_404F68 );
  }
}

//----- (00401A44) --------------------------------------------------------
int __cdecl UserMathErrorFunction()
{
  return 0;
}

//----- (00401A47) --------------------------------------------------------
int sub_401A47()
{
  return 0;
}

// nfuncs=45 queued=6 decompiled=6 lumina nreq=0 worse=0 better=0
// ALL OK, 6 function(s) have been successfully decompiled
