/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: Visual C++
*/

#include <windows.h>
#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

#define __thiscall __cdecl // Test compile in C mode

int __thiscall sub_401005(_DWORD); // weak
int __thiscall sub_40100A(_DWORD); // weak
int __cdecl sub_40100F(char *Str); // idb
_DWORD __cdecl std::char_traits<char>::eq_int_type(_DWORD, _DWORD); // weak
_DWORD __stdcall sub_401019(_DWORD); // weak
int j_unknown_libname_1(void); // weak
int sub_401023(void); // weak
int __cdecl sub_401028(int, char *Str); // idb
int __thiscall sub_40102D(_DWORD); // weak
_DWORD __stdcall sub_401037(_DWORD); // weak
_DWORD __stdcall sub_40103C(_DWORD); // weak
_DWORD __stdcall sub_401041(_DWORD); // weak
int __cdecl main_0(int argc, const char **argv, const char **envp);
_DWORD *__thiscall sub_4010C0(_DWORD *this, int a2);
int sub_401110();
int __thiscall sub_401150(_DWORD *this, int a2);
int __cdecl sub_401190(int, char *Str); // idb
size_t __cdecl sub_401530(char *Str);
_BYTE *__thiscall sub_401580(_BYTE *this, int a2);
int __thiscall sub_401620(_DWORD *this);
int __thiscall sub_401660(_BYTE *this);
void *__thiscall sub_401690(void *this, int a2);
int __thiscall sub_401700(void *this);
// size_t __cdecl strlen(const char *Str);
// LONG __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo); idb
int sub_401C08();
int (*sub_401CDA())(void);
void __cdecl sub_401D00(); // idb
int __cdecl UserMathErrorFunction();
int sub_401F77();
// LPTOP_LEVEL_EXCEPTION_FILTER __stdcall SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter);
// bool __cdecl std::uncaught_exception(); weak
// int __thiscall std::ostream::_Osfx(_DWORD); weak
// bool __thiscall std::ios_base::good(std::ios_base *__hidden this); weak
// int __thiscall std::ios::tie(_DWORD); weak
// int __thiscall std::ostream::flush(_DWORD); weak
// __int64 __thiscall std::ios_base::width(std::ios_base *__hidden this); weak
// _DWORD __thiscall std::ios_base::flags(std::ios_base *__hidden this); weak
// int __thiscall std::ios::fill(_DWORD); weak
// int __thiscall std::ios::rdbuf(_DWORD);
// int __thiscall std::streambuf::sputc(_DWORD, _DWORD); weak
// __int64 __thiscall std::streambuf::sputn(_DWORD, _DWORD, _DWORD, _DWORD); weak
// __int64 __thiscall std::ios_base::width(std::ios_base *__hidden this, __int64); weak
// int __thiscall std::ios::setstate(_DWORD, _DWORD, _DWORD); weak
// int __thiscall std::ostream::operator<<(_DWORD, _DWORD); weak
// int __thiscall std::ostream::operator<<(_DWORD, _DWORD); weak

//-------------------------------------------------------------------------
// Data declarations

_UNKNOWN unk_405C60; // weak
int (*dword_405D60[66])(void) =
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
_UNKNOWN unk_405E68; // weak
void (*dword_405F68[66])(void) =
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
// extern _UNKNOWN std::endl; weak
// extern int std::cout; idb


//----- (00401090) --------------------------------------------------------
int __cdecl main_0(int argc, const char **argv, const char **envp)
{
  char v4[4]; // [esp+0h] [ebp-4h] BYREF

  sub_401037(10);
  sub_401019(20);
  sub_401005(v4);
  return 0;
}
// 401005: using guessed type int __thiscall sub_401005(_DWORD);
// 401019: using guessed type _DWORD __stdcall sub_401019(_DWORD);
// 401037: using guessed type _DWORD __stdcall sub_401037(_DWORD);

//----- (004010C0) --------------------------------------------------------
_DWORD *__thiscall sub_4010C0(_DWORD *this, int a2)
{
  int v2; // eax

  *this = a2;
  v2 = sub_401028(std::cout, "MyClass::MyClass()");
  std::ostream::operator<<(v2, std::endl);
  return this;
}
// 408294: using guessed type int __thiscall std::ostream::operator<<(_DWORD, _DWORD);

//----- (00401110) --------------------------------------------------------
int sub_401110()
{
  int v0; // eax

  v0 = sub_401028(std::cout, "MyClass::~MyClass()");
  return std::ostream::operator<<(v0, std::endl);
}
// 408294: using guessed type int __thiscall std::ostream::operator<<(_DWORD, _DWORD);

//----- (00401150) --------------------------------------------------------
int __thiscall sub_401150(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = std::ostream::operator<<(std::cout, a2 + *this);
  return std::ostream::operator<<(v2, std::endl);
}
// 408294: using guessed type int __thiscall std::ostream::operator<<(_DWORD, _DWORD);
// 408298: using guessed type int __thiscall std::ostream::operator<<(_DWORD, _DWORD);

//----- (00401190) --------------------------------------------------------
int __cdecl sub_401190(int a1, char *Str)
{
  __int64 v2; // rax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v7; // [esp-8h] [ebp-7Ch]
  int v8; // [esp-4h] [ebp-78h]
  int v9; // [esp-4h] [ebp-78h]
  int v10; // [esp+0h] [ebp-74h] BYREF
  __int64 v11; // [esp+10h] [ebp-64h]
  __int64 v12; // [esp+18h] [ebp-5Ch]
  __int64 v13; // [esp+20h] [ebp-54h]
  __int64 v14; // [esp+28h] [ebp-4Ch]
  int v15; // [esp+30h] [ebp-44h]
  int v16; // [esp+34h] [ebp-40h] BYREF
  int v17; // [esp+38h] [ebp-3Ch] BYREF
  int v18; // [esp+3Ch] [ebp-38h] BYREF
  int v19; // [esp+40h] [ebp-34h] BYREF
  char v20[8]; // [esp+44h] [ebp-30h] BYREF
  __int64 v21; // [esp+4Ch] [ebp-28h]
  __int64 v22; // [esp+54h] [ebp-20h]
  int v23; // [esp+60h] [ebp-14h]
  int *v24; // [esp+64h] [ebp-10h]
  int v25; // [esp+70h] [ebp-4h]

  v24 = &v10;
  v23 = 0;
  v22 = (unsigned int)sub_40100F(Str);
  v14 = std::ios_base::width((std::ios_base *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1));
  if ( v14 <= 0 || (v13 = std::ios_base::width((std::ios_base *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1)), v13 <= v22) )
  {
    v12 = 0i64;
  }
  else
  {
    v2 = std::ios_base::width((std::ios_base *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1));
    v12 = v2 - v22;
  }
  v21 = v12;
  sub_40103C(a1);
  if ( sub_40100A(v20) == -1 )
  {
    v23 |= 4u;
  }
  else
  {
    v25 = 0;
    if ( (std::ios_base::flags((std::ios_base *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1)) & 0x1C0) != 64 )
    {
      while ( v21 > 0 )
      {
        v8 = (unsigned __int8)std::ios::fill(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1);
        v3 = std::ios::rdbuf(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1);
        v19 = std::streambuf::sputc(v3, v8);
        v18 = j_unknown_libname_1();
        if ( (unsigned __int8)std::char_traits<char>::eq_int_type(&v18, &v19) )
        {
          v23 |= 4u;
          break;
        }
        --v21;
      }
    }
    if ( !v23 )
    {
      v7 = v22;
      v4 = std::ios::rdbuf(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1);
      v11 = std::streambuf::sputn(v4, Str, v7, HIDWORD(v7));
      if ( v11 != v22 )
        v23 |= 4u;
    }
    if ( !v23 )
    {
      while ( v21 > 0 )
      {
        v9 = (unsigned __int8)std::ios::fill(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1);
        v5 = std::ios::rdbuf(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1);
        v17 = std::streambuf::sputc(v5, v9);
        v16 = j_unknown_libname_1();
        if ( (unsigned __int8)std::char_traits<char>::eq_int_type(&v16, &v17) )
        {
          v23 |= 4u;
          break;
        }
        --v21;
      }
    }
    std::ios_base::width((std::ios_base *)(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1), 0i64);
    v25 = -1;
  }
  std::ios::setstate(*(_DWORD *)(*(_DWORD *)a1 + 4) + a1, v23, 0);
  v15 = a1;
  sub_401023();
  return v15;
}
// 40100A: using guessed type int __thiscall sub_40100A(_DWORD);
// 401014: using guessed type _DWORD __cdecl std::char_traits<char>::eq_int_type(_DWORD, _DWORD);
// 40101E: using guessed type int j_unknown_libname_1(void);
// 401023: using guessed type int sub_401023(void);
// 40103C: using guessed type _DWORD __stdcall sub_40103C(_DWORD);
// 408274: using guessed type __int64 __thiscall std::ios_base::width(std::ios_base *__hidden this);
// 408278: using guessed type _DWORD __thiscall std::ios_base::flags(std::ios_base *__hidden this);
// 40827C: using guessed type int __thiscall std::ios::fill(_DWORD);
// 408284: using guessed type int __thiscall std::streambuf::sputc(_DWORD, _DWORD);
// 408288: using guessed type __int64 __thiscall std::streambuf::sputn(_DWORD, _DWORD, _DWORD, _DWORD);
// 40828C: using guessed type __int64 __thiscall std::ios_base::width(std::ios_base *__hidden this, __int64);
// 408290: using guessed type int __thiscall std::ios::setstate(_DWORD, _DWORD, _DWORD);

//----- (00401530) --------------------------------------------------------
size_t __cdecl sub_401530(char *Str)
{
  return strlen(Str);
}

//----- (00401580) --------------------------------------------------------
_BYTE *__thiscall sub_401580(_BYTE *this, int a2)
{
  int v2; // eax

  sub_401041(a2);
  if ( std::ios_base::good((std::ios_base *)(*(_DWORD *)(*(_DWORD *)a2 + 4) + a2))
    && std::ios::tie(*(_DWORD *)(*(_DWORD *)a2 + 4) + a2) )
  {
    v2 = std::ios::tie(*(_DWORD *)(*(_DWORD *)a2 + 4) + a2);
    std::ostream::flush(v2);
  }
  this[4] = std::ios_base::good((std::ios_base *)(*(_DWORD *)(*(_DWORD *)a2 + 4) + a2));
  return this;
}
// 401041: using guessed type _DWORD __stdcall sub_401041(_DWORD);
// 408268: using guessed type bool __thiscall std::ios_base::good(std::ios_base *__hidden this);
// 40826C: using guessed type int __thiscall std::ios::tie(_DWORD);
// 408270: using guessed type int __thiscall std::ostream::flush(_DWORD);

//----- (00401620) --------------------------------------------------------
int __thiscall sub_401620(_DWORD *this)
{
  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(*this);
  return sub_40102D(this);
}
// 40102D: using guessed type int __thiscall sub_40102D(_DWORD);
// 408260: using guessed type bool __cdecl std::uncaught_exception();
// 408264: using guessed type int __thiscall std::ostream::_Osfx(_DWORD);

//----- (00401660) --------------------------------------------------------
int __thiscall sub_401660(_BYTE *this)
{
  return (this[4] != 0) - 1;
}

//----- (00401690) --------------------------------------------------------
void *__thiscall sub_401690(void *this, int a2)
{
  int v2; // eax

  *(_DWORD *)this = a2;
  if ( std::ios::rdbuf(*(_DWORD *)(**(_DWORD **)this + 4) + *(_DWORD *)this) )
  {
    v2 = std::ios::rdbuf(*(_DWORD *)(**(_DWORD **)this + 4) + *(_DWORD *)this);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(v2, v2);
  }
  return this;
}

//----- (00401700) --------------------------------------------------------
int __thiscall sub_401700(void *this)
{
  int result; // eax
  int v2; // eax

  result = std::ios::rdbuf(*(_DWORD *)(**(_DWORD **)this + 4) + *(_DWORD *)this);
  if ( result )
  {
    v2 = std::ios::rdbuf(*(_DWORD *)(**(_DWORD **)this + 4) + *(_DWORD *)this);
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 8))(v2, v2);
  }
  return result;
}

//----- (00401C08) --------------------------------------------------------
int sub_401C08()
{
  SetUnhandledExceptionFilter(__CxxUnhandledExceptionFilter);
  return 0;
}

//----- (00401CDA) --------------------------------------------------------
int (*sub_401CDA())(void)
{
  int (*result)(void); // eax
  int (**v1)(void); // edi

  result = (int (*)(void))&unk_405C60;
  v1 = (int (**)(void))&unk_405C60;
  if ( &unk_405C60 < (_UNKNOWN *)dword_405D60 )
  {
    do
    {
      result = *v1;
      if ( *v1 )
        result = (int (*)(void))result();
      ++v1;
    }
    while ( v1 < dword_405D60 );
  }
  return result;
}

//----- (00401D00) --------------------------------------------------------
void __cdecl sub_401D00()
{
  void (**v0)(void); // edi

  v0 = (void (**)(void))&unk_405E68;
  if ( &unk_405E68 < (_UNKNOWN *)dword_405F68 )
  {
    do
    {
      if ( *v0 )
        (*v0)();
      ++v0;
    }
    while ( v0 < dword_405F68 );
  }
}

//----- (00401F74) --------------------------------------------------------
int __cdecl UserMathErrorFunction()
{
  return 0;
}

//----- (00401F77) --------------------------------------------------------
int sub_401F77()
{
  return 0;
}

// nfuncs=63 queued=16 decompiled=16 lumina nreq=0 worse=0 better=0
// ALL OK, 16 function(s) have been successfully decompiled
