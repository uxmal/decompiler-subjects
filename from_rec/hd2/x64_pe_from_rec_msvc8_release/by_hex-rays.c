/* This file was generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2020 Hex-Rays <info@hex-rays.com>

   Detected compiler: Visual C++
*/

#include <windows.h>
#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int __fastcall sub_140001000(__int64 a1, unsigned int a2, int a3);
__int64 __fastcall sub_140001190(char *ErrMsg); // idb
int __cdecl main(int argc, const char **argv, const char **envp);
void sub_14000187C();
void __fastcall sub_1400018B4();
__int64 __fastcall UserMathErrorFunction(struct _exception *a1);
// void *__cdecl memset(void *, int Val, size_t Size);
// int __cdecl stat64i32(const char *FileName, struct _stat64i32 *Stat);
// int __cdecl fclose(FILE *Stream);
// size_t __cdecl fread(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream);
// FILE *__cdecl fopen(const char *FileName, const char *Mode);
// int printf(const char *const Format, ...);
// void __cdecl perror(const char *ErrMsg);
// int sprintf(char *const Buffer, const char *const Format, ...);

//-------------------------------------------------------------------------
// Data declarations

void (*qword_140002260[2])(void) = { NULL, NULL }; // idb
void (*qword_140002270)(void) = NULL; // idb


//----- (0000000140001000) ----------------------------------------------------
int __fastcall sub_140001000(__int64 a1, unsigned int a2, int a3)
{
  int v5; // er12
  int v6; // er13
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // r8
  unsigned __int64 v11; // kr10_8
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int8 v14; // cl
  char v15; // dl
  int v16; // edx
  char Buffer[4]; // [rsp+20h] [rbp-88h] BYREF
  char v19[71]; // [rsp+29h] [rbp-7Fh] BYREF

  sprintf(Buffer, "%08lX:", a2);
  if ( a3 > 16 )
    a3 = 16;
  v5 = 0;
  v6 = 0;
  v7 = 0i64;
  v8 = a3;
  if ( a3 <= 0 )
    goto LABEL_7;
  v9 = 0;
  v6 = v8;
  do
  {
    sprintf(&v19[v9], " %02lX", *(unsigned __int8 *)(v7 + a1));
    ++v7;
    v9 += 3;
  }
  while ( v7 < v8 );
  if ( (int)v8 < 16 )
  {
LABEL_7:
    v10 = (unsigned int)(16 - v6);
    do
    {
      --v10;
      *(_DWORD *)&Buffer[strlen(Buffer)] = 2105376;
    }
    while ( v10 );
  }
  v11 = strlen(Buffer) + 1;
  *(_DWORD *)&Buffer[(int)v11 - 1] = 8134688;
  v12 = 0i64;
  v13 = (int)v11 - 1 + 3;
  if ( v8 > 0 )
  {
    v5 = v8;
    do
    {
      v14 = *(_BYTE *)(v12 + a1);
      if ( v14 < 0x20u || (v15 = *(_BYTE *)(v12 + a1), v14 > 0x7Eu) )
        v15 = 46;
      Buffer[v13 + v12++] = v15;
    }
    while ( v12 < v8 );
  }
  v16 = v5;
  if ( v5 < 16i64 )
  {
    LOBYTE(v16) = 32;
    memset(&Buffer[v5 + v13], v16, 16i64 - v5);
    v5 = 16;
  }
  *(_WORD *)&Buffer[v13 + v5] = 124;
  return printf("%s\n", Buffer);
}

//----- (0000000140001190) ----------------------------------------------------
__int64 __fastcall sub_140001190(char *ErrMsg)
{
  __int64 result; // rax
  FILE *v3; // rsi
  unsigned int i; // ebx
  int v5; // eax
  int v6; // edi
  struct _stat64i32 v7; // [rsp+20h] [rbp-58h] BYREF
  char Buffer[16]; // [rsp+50h] [rbp-28h] BYREF

  if ( stat64i32(ErrMsg, &v7) || (v3 = fopen(ErrMsg, "rb")) == 0i64 )
  {
    perror(ErrMsg);
    result = 1i64;
  }
  else
  {
    for ( i = 0; i < v7.st_size; i += v6 )
    {
      v5 = fread(Buffer, 1ui64, 0x10ui64, v3);
      v6 = v5;
      if ( !v5 )
        break;
      sub_140001000((__int64)Buffer, i, v5);
    }
    fclose(v3);
    result = 0i64;
  }
  return result;
}

//----- (0000000140001290) ----------------------------------------------------
int __cdecl main(int argc, const char **argv, const char **envp)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  int i; // ebx
  int v7; // eax

  v3 = 1i64;
  v4 = argc;
  for ( i = 0; v3 < v4; i += v7 )
    v7 = sub_140001190((char *)argv[v3++]);
  return i;
}

//----- (000000014000187C) ----------------------------------------------------
void sub_14000187C()
{
  void (**i)(void); // rbx

  for ( i = qword_140002260; i < qword_140002260; ++i )
  {
    if ( *i )
      (*i)();
  }
}

//----- (00000001400018B4) ----------------------------------------------------
void __fastcall sub_1400018B4()
{
  void (**i)(void); // rbx

  for ( i = &qword_140002270; i < &qword_140002270; ++i )
  {
    if ( *i )
      (*i)();
  }
}

//----- (00000001400019D0) ----------------------------------------------------
__int64 __fastcall UserMathErrorFunction(struct _exception *a1)
{
  return 0i64;
}

// nfuncs=35 queued=6 decompiled=6 lumina nreq=0 worse=0 better=0
// ALL OK, 6 function(s) have been successfully decompiled
