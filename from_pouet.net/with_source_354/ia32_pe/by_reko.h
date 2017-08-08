// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (403000 CHAR t403000) (403009 Eq_3 t403009) (40300D CHAR t40300D) (403015 Eq_24 t403015) (403019 CHAR t403019) (403028 CHAR t403028) (403034 CHAR t403034) (403041 CHAR t403041) (40304E Eq_37 t40304E) (403052 DWORD t403052))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: DWORD
	T_2 (in eax : Eq_2)
	T_41 (in dwDesiredAccess : DWORD)
	T_42 (in dwShareMode : DWORD)
	T_44 (in dwCreationDisposition : DWORD)
	T_45 (in dwFlagsAndAttributes : DWORD)
	T_48 (in 0x40000000 : word32)
	T_49 (in 0x00000000 : word32)
	T_51 (in 0x00000003 : word32)
	T_52 (in 0x00000080 : word32)
	T_64 (in dwMoveMethod : DWORD)
	T_69 (in 0x00000000 : word32)
	T_70 (in SetFilePointer(globals->t40304E, 0x00000031, null, 0x00000000) : DWORD)
	T_75 (in nNumberOfBytesToWrite : DWORD)
	T_81 (in 0x00000004 : word32)
Eq_3: HMODULE
	T_3 (in eax_4 : Eq_3)
	T_8 (in LoadLibraryA(&globals->t403000) : HMODULE)
	T_10 (in Mem6[0x00403009:word32] : word32)
	T_11 (in 0x00000000 : word32)
	T_27 (in hModule : HMODULE)
	T_30 (in Mem6[0x00403009:word32] : word32)
	T_99 (in hLibModule : HMODULE)
	T_101 (in Mem6[0x00403009:word32] : word32)
Eq_4: (fn Eq_3 (Eq_6))
	T_4 (in LoadLibraryA : ptr32)
	T_5 (in signature of LoadLibraryA : void)
Eq_6: LPCSTR
	T_6 (in lpLibFileName : LPCSTR)
	T_7 (in 0x00403000 : word32)
	T_16 (in lpText : LPCSTR)
	T_17 (in lpCaption : LPCSTR)
	T_20 (in 0x00403034 : word32)
	T_21 (in 0x00403019 : word32)
	T_28 (in lpProcName : LPCSTR)
	T_31 (in 0x0040300D : word32)
	T_40 (in lpFileName : LPCSTR)
	T_47 (in 0x00403041 : word32)
	T_93 (in 0x00403028 : word32)
	T_94 (in 0x00403019 : word32)
Eq_13: (fn int32 (Eq_15, Eq_6, Eq_6, Eq_18))
	T_13 (in MessageBoxA : ptr32)
	T_14 (in signature of MessageBoxA : void)
	T_91 (in MessageBoxA : ptr32)
Eq_15: HWND
	T_15 (in hWnd : HWND)
	T_19 (in 0x00000000 : word32)
	T_92 (in 0x00000000 : word32)
Eq_18: UINT
	T_18 (in uType : UINT)
	T_22 (in 0x00000000 : word32)
	T_95 (in 0x00000000 : word32)
	T_105 (in uExitCode : UINT)
	T_106 (in 0x00000000 : word32)
Eq_24: FARPROC
	T_24 (in eax_50 : Eq_24)
	T_32 (in GetProcAddress(globals->t403009, &globals->t40300D) : FARPROC)
	T_34 (in Mem52[0x00403015:word32] : word32)
	T_35 (in 0x00000000 : word32)
Eq_25: (fn Eq_24 (Eq_3, Eq_6))
	T_25 (in GetProcAddress : ptr32)
	T_26 (in signature of GetProcAddress : void)
Eq_37: HANDLE
	T_37 (in eax_70 : Eq_37)
	T_46 (in hTemplateFile : HANDLE)
	T_53 (in 0x00000000 : word32)
	T_54 (in CreateFileA(&globals->t403041, 0x40000000, 0x00000000, null, 0x00000003, 0x00000080, null) : HANDLE)
	T_56 (in Mem72[0x0040304E:word32] : word32)
	T_57 (in 0x00000001 : word32)
	T_61 (in hFile : HANDLE)
	T_66 (in Mem72[0x0040304E:word32] : word32)
	T_73 (in hFile : HANDLE)
	T_79 (in Mem72[0x0040304E:word32] : word32)
	T_87 (in hObject : HANDLE)
	T_89 (in Mem72[0x0040304E:word32] : word32)
Eq_38: (fn Eq_37 (Eq_6, Eq_2, Eq_2, Eq_43, Eq_2, Eq_2, Eq_37))
	T_38 (in CreateFileA : ptr32)
	T_39 (in signature of CreateFileA : void)
Eq_43: LPSECURITY_ATTRIBUTES
	T_43 (in lpSecurityAttributes : LPSECURITY_ATTRIBUTES)
	T_50 (in 0x00000000 : word32)
Eq_59: (fn Eq_2 (Eq_37, Eq_62, Eq_63, Eq_2))
	T_59 (in SetFilePointer : ptr32)
	T_60 (in signature of SetFilePointer : void)
Eq_62: LONG
	T_62 (in lDistanceToMove : LONG)
	T_67 (in 0x00000031 : word32)
Eq_63: PLONG
	T_63 (in lpDistanceToMoveHigh : PLONG)
	T_68 (in 0x00000000 : word32)
Eq_71: (fn Eq_84 (Eq_37, Eq_74, Eq_2, Eq_76, Eq_77))
	T_71 (in WriteFile : ptr32)
	T_72 (in signature of WriteFile : void)
Eq_74: LPCVOID
	T_74 (in lpBuffer : LPCVOID)
	T_80 (in 0x00403015 : word32)
Eq_76: LPDWORD
	T_76 (in lpNumberOfBytesWritten : LPDWORD)
	T_82 (in 0x00403052 : word32)
Eq_77: LPOVERLAPPED
	T_77 (in lpOverlapped : LPOVERLAPPED)
	T_83 (in 0x00000000 : word32)
Eq_84: BOOL
	T_84 (in WriteFile(globals->t40304E, &globals->t403015, 0x00000004, &globals->t403052, null) : BOOL)
	T_90 (in CloseHandle(globals->t40304E) : BOOL)
	T_102 (in FreeLibrary(globals->t403009) : BOOL)
Eq_85: (fn Eq_84 (Eq_37))
	T_85 (in CloseHandle : ptr32)
	T_86 (in signature of CloseHandle : void)
Eq_97: (fn Eq_84 (Eq_3))
	T_97 (in FreeLibrary : ptr32)
	T_98 (in signature of FreeLibrary : void)
Eq_103: (fn void (Eq_18))
	T_103 (in ExitProcess : ptr32)
	T_104 (in signature of ExitProcess : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in eax : Eq_2)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: DWORD
T_3: (in eax_4 : Eq_3)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: (union (HMODULE u1))
T_4: (in LoadLibraryA : ptr32)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: (ptr (fn T_8 (T_7)))
T_5: (in signature of LoadLibraryA : void)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: 
T_6: (in lpLibFileName : LPCSTR)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: 
T_7: (in 0x00403000 : word32)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: LPCSTR
T_8: (in LoadLibraryA(&globals->t403000) : HMODULE)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: HMODULE
T_9: (in 0x00403009 : word32)
  Class: Eq_9
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (struct (0 T_10 t0000)))
T_10: (in Mem6[0x00403009:word32] : word32)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: word32
T_11: (in 0x00000000 : word32)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: word32
T_12: (in eax_4 == null : bool)
  Class: Eq_12
  DataType: bool
  OrigDataType: bool
T_13: (in MessageBoxA : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_23 (T_19, T_20, T_21, T_22)))
T_14: (in signature of MessageBoxA : void)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: 
T_15: (in hWnd : HWND)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: 
T_16: (in lpText : LPCSTR)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: 
T_17: (in lpCaption : LPCSTR)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: 
T_18: (in uType : UINT)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: 
T_19: (in 0x00000000 : word32)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: HWND
T_20: (in 0x00403034 : word32)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: LPCSTR
T_21: (in 0x00403019 : word32)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: LPCSTR
T_22: (in 0x00000000 : word32)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: UINT
T_23: (in MessageBoxA(null, &globals->t403034, &globals->t403019, 0x00000000) : int32)
  Class: Eq_23
  DataType: int32
  OrigDataType: int32
T_24: (in eax_50 : Eq_24)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: (union (FARPROC u1))
T_25: (in GetProcAddress : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_32 (T_30, T_31)))
T_26: (in signature of GetProcAddress : void)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: 
T_27: (in hModule : HMODULE)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: 
T_28: (in lpProcName : LPCSTR)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: 
T_29: (in 0x00403009 : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (struct (0 T_30 t0000)))
T_30: (in Mem6[0x00403009:word32] : word32)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: HMODULE
T_31: (in 0x0040300D : word32)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: LPCSTR
T_32: (in GetProcAddress(globals->t403009, &globals->t40300D) : FARPROC)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: FARPROC
T_33: (in 0x00403015 : word32)
  Class: Eq_33
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (struct (0 T_34 t0000)))
T_34: (in Mem52[0x00403015:word32] : word32)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: word32
T_35: (in 0x00000000 : word32)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: word32
T_36: (in eax_50 == null : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in eax_70 : Eq_37)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: (union (HANDLE u1))
T_38: (in CreateFileA : ptr32)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (fn T_54 (T_47, T_48, T_49, T_50, T_51, T_52, T_53)))
T_39: (in signature of CreateFileA : void)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: 
T_40: (in lpFileName : LPCSTR)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: 
T_41: (in dwDesiredAccess : DWORD)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: 
T_42: (in dwShareMode : DWORD)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: 
T_43: (in lpSecurityAttributes : LPSECURITY_ATTRIBUTES)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: 
T_44: (in dwCreationDisposition : DWORD)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: 
T_45: (in dwFlagsAndAttributes : DWORD)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: 
T_46: (in hTemplateFile : HANDLE)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: 
T_47: (in 0x00403041 : word32)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: LPCSTR
T_48: (in 0x40000000 : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: DWORD
T_49: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: DWORD
T_50: (in 0x00000000 : word32)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: LPSECURITY_ATTRIBUTES
T_51: (in 0x00000003 : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: DWORD
T_52: (in 0x00000080 : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: DWORD
T_53: (in 0x00000000 : word32)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: HANDLE
T_54: (in CreateFileA(&globals->t403041, 0x40000000, 0x00000000, null, 0x00000003, 0x00000080, null) : HANDLE)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: HANDLE
T_55: (in 0x0040304E : word32)
  Class: Eq_55
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (struct (0 T_56 t0000)))
T_56: (in Mem72[0x0040304E:word32] : word32)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: word32
T_57: (in 0x00000001 : word32)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: word32
T_58: (in eax_70 == (void *) 0x00000001 : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
T_59: (in SetFilePointer : ptr32)
  Class: Eq_59
  DataType: (ptr Eq_59)
  OrigDataType: (ptr (fn T_70 (T_66, T_67, T_68, T_69)))
T_60: (in signature of SetFilePointer : void)
  Class: Eq_59
  DataType: (ptr Eq_59)
  OrigDataType: 
T_61: (in hFile : HANDLE)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: 
T_62: (in lDistanceToMove : LONG)
  Class: Eq_62
  DataType: Eq_62
  OrigDataType: 
T_63: (in lpDistanceToMoveHigh : PLONG)
  Class: Eq_63
  DataType: Eq_63
  OrigDataType: 
T_64: (in dwMoveMethod : DWORD)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: 
T_65: (in 0x0040304E : ptr32)
  Class: Eq_65
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (struct (0 T_66 t0000)))
T_66: (in Mem72[0x0040304E:word32] : word32)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: HANDLE
T_67: (in 0x00000031 : word32)
  Class: Eq_62
  DataType: Eq_62
  OrigDataType: LONG
T_68: (in 0x00000000 : word32)
  Class: Eq_63
  DataType: Eq_63
  OrigDataType: PLONG
T_69: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: DWORD
T_70: (in SetFilePointer(globals->t40304E, 0x00000031, null, 0x00000000) : DWORD)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: DWORD
T_71: (in WriteFile : ptr32)
  Class: Eq_71
  DataType: (ptr Eq_71)
  OrigDataType: (ptr (fn T_84 (T_79, T_80, T_81, T_82, T_83)))
T_72: (in signature of WriteFile : void)
  Class: Eq_71
  DataType: (ptr Eq_71)
  OrigDataType: 
T_73: (in hFile : HANDLE)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: 
T_74: (in lpBuffer : LPCVOID)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: 
T_75: (in nNumberOfBytesToWrite : DWORD)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: 
T_76: (in lpNumberOfBytesWritten : LPDWORD)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: 
T_77: (in lpOverlapped : LPOVERLAPPED)
  Class: Eq_77
  DataType: Eq_77
  OrigDataType: 
T_78: (in 0x0040304E : ptr32)
  Class: Eq_78
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (struct (0 T_79 t0000)))
T_79: (in Mem72[0x0040304E:word32] : word32)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: HANDLE
T_80: (in 0x00403015 : word32)
  Class: Eq_74
  DataType: Eq_74
  OrigDataType: LPCVOID
T_81: (in 0x00000004 : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: DWORD
T_82: (in 0x00403052 : word32)
  Class: Eq_76
  DataType: Eq_76
  OrigDataType: LPDWORD
T_83: (in 0x00000000 : word32)
  Class: Eq_77
  DataType: Eq_77
  OrigDataType: LPOVERLAPPED
T_84: (in WriteFile(globals->t40304E, &globals->t403015, 0x00000004, &globals->t403052, null) : BOOL)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: BOOL
T_85: (in CloseHandle : ptr32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: (ptr (fn T_90 (T_89)))
T_86: (in signature of CloseHandle : void)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: 
T_87: (in hObject : HANDLE)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: 
T_88: (in 0x0040304E : ptr32)
  Class: Eq_88
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (struct (0 T_89 t0000)))
T_89: (in Mem72[0x0040304E:word32] : word32)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: HANDLE
T_90: (in CloseHandle(globals->t40304E) : BOOL)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: BOOL
T_91: (in MessageBoxA : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_96 (T_92, T_93, T_94, T_95)))
T_92: (in 0x00000000 : word32)
  Class: Eq_15
  DataType: Eq_15
  OrigDataType: HWND
T_93: (in 0x00403028 : word32)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: LPCSTR
T_94: (in 0x00403019 : word32)
  Class: Eq_6
  DataType: Eq_6
  OrigDataType: LPCSTR
T_95: (in 0x00000000 : word32)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: UINT
T_96: (in MessageBoxA(null, &globals->t403028, &globals->t403019, 0x00000000) : int32)
  Class: Eq_23
  DataType: int32
  OrigDataType: int32
T_97: (in FreeLibrary : ptr32)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: (ptr (fn T_102 (T_101)))
T_98: (in signature of FreeLibrary : void)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: 
T_99: (in hLibModule : HMODULE)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: 
T_100: (in 0x00403009 : ptr32)
  Class: Eq_100
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (struct (0 T_101 t0000)))
T_101: (in Mem6[0x00403009:word32] : word32)
  Class: Eq_3
  DataType: Eq_3
  OrigDataType: HMODULE
T_102: (in FreeLibrary(globals->t403009) : BOOL)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: BOOL
T_103: (in ExitProcess : ptr32)
  Class: Eq_103
  DataType: (ptr Eq_103)
  OrigDataType: (ptr (fn T_107 (T_106)))
T_104: (in signature of ExitProcess : void)
  Class: Eq_103
  DataType: (ptr Eq_103)
  OrigDataType: 
T_105: (in uExitCode : UINT)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: 
T_106: (in 0x00000000 : word32)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: UINT
T_107: (in ExitProcess(0x00000000) : void)
  Class: Eq_107
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
	CHAR t403000;	// 403000
	Eq_3 t403009;	// 403009
	CHAR t40300D;	// 40300D
	Eq_24 t403015;	// 403015
	CHAR t403019;	// 403019
	CHAR t403028;	// 403028
	CHAR t403034;	// 403034
	CHAR t403041;	// 403041
	Eq_37 t40304E;	// 40304E
	DWORD t403052;	// 403052
} Eq_1;

typedef DWORD Eq_2;

typedef HMODULE Eq_3;

typedef HMODULE (Eq_4)(LPCSTR);

typedef LPCSTR Eq_6;

typedef int32 (Eq_13)(HWND, LPCSTR, LPCSTR, UINT);

typedef HWND Eq_15;

typedef UINT Eq_18;

typedef FARPROC Eq_24;

typedef FARPROC (Eq_25)(HMODULE, LPCSTR);

typedef HANDLE Eq_37;

typedef HANDLE (Eq_38)(LPCSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES, DWORD, DWORD, HANDLE);

typedef LPSECURITY_ATTRIBUTES Eq_43;

typedef DWORD (Eq_59)(HANDLE, LONG, PLONG, DWORD);

typedef LONG Eq_62;

typedef PLONG Eq_63;

typedef BOOL (Eq_71)(HANDLE, LPCVOID, DWORD, LPDWORD, LPOVERLAPPED);

typedef LPCVOID Eq_74;

typedef LPDWORD Eq_76;

typedef LPOVERLAPPED Eq_77;

typedef BOOL Eq_84;

typedef BOOL (Eq_85)(HANDLE);

typedef BOOL (Eq_97)(HMODULE);

typedef void (Eq_103)(UINT);

