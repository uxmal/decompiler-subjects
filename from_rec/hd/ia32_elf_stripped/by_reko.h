// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (80484EE code t80484EE) (80484FE code t80484FE) (804850E code t804850E) (804851E code t804851E) (804852E code t804852E) (804853E code t804853E) (804854E code t804854E) (804855E code t804855E) (804856E code t804856E) (804857E code t804857E) (804858E code t804858E) (80489DA char b80489DA) (80489DE char b80489DE) (80489E0 (str char) str80489E0) (80499E8 ptr32 ptr80499E8) (80499EC word32 dw80499EC) (80499F8 (arr word32) a80499F8) (8049A14 (ptr code) ptr8049A14) (8049A18 (ptr code) ptr8049A18) (8049A1C (ptr code) ptr8049A1C) (8049A20 (ptr code) ptr8049A20) (8049A24 (ptr code) ptr8049A24) (8049A28 (ptr code) ptr8049A28) (8049A2C (ptr code) ptr8049A2C) (8049A30 (ptr code) ptr8049A30) (8049A34 (ptr code) ptr8049A34) (8049A38 (ptr code) ptr8049A38) (8049A3C (ptr code) ptr8049A3C))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in fn08048980 : ptr32)
	T_3 (in signature of fn08048980 : void)
Eq_41: (fn void (ptr32))
	T_41 (in __align : ptr32)
Eq_46: (fn void (byte))
	T_46 (in __syscall : ptr32)
Eq_60: (fn void ())
	T_60 (in __setfpucw : ptr32)
	T_61 (in signature of __setfpucw : void)
Eq_63: (fn void ())
	T_63 (in __libc_init : ptr32)
	T_64 (in signature of __libc_init : void)
Eq_66: (fn void ())
	T_66 (in atexit : ptr32)
	T_67 (in signature of atexit : void)
Eq_69: (fn void ())
	T_69 (in _init : ptr32)
	T_70 (in signature of _init : void)
Eq_72: (fn void ((ptr Eq_74), ui32, ptr32))
	T_72 (in fn080488E0 : ptr32)
	T_73 (in signature of fn080488E0 : void)
Eq_74: (struct "stat")
	T_74 (in ebx : (ptr Eq_74))
	T_77 (in 0x00000000 : word32)
	T_109 (in ebx : (ptr Eq_74))
	T_141 (in statbuf : (ptr (struct "stat")))
	T_204 (in ebx : (ptr Eq_74))
Eq_80: (fn void ())
	T_80 (in exit : ptr32)
	T_81 (in signature of exit : void)
Eq_83: (fn void (byte))
	T_83 (in __syscall : ptr32)
Eq_98: (struct "Eq_98" (4 word32 dw0004))
	T_98 (in ebx_28 : (ptr Eq_98))
Eq_113: (fn void ())
	T_113 (in sprintf : ptr32)
	T_114 (in signature of sprintf : void)
	T_121 (in sprintf : ptr32)
Eq_131: (fn void ())
	T_131 (in strcat : ptr32)
	T_132 (in signature of strcat : void)
Eq_134: (fn void ())
	T_134 (in strlen : ptr32)
	T_135 (in signature of strlen : void)
Eq_137: (fn int32 ((ptr char), (ptr char), (ptr Eq_74)))
	T_137 (in _xstat : ptr32)
	T_138 (in signature of _xstat : void)
	T_186 (in _xstat : ptr32)
Eq_143: (union "Eq_143" (int32 u0) (ptr32 u1))
	T_143 (in 0x00000054 : word32)
Eq_144: (union "Eq_144" (int32 u0) (ptr32 u1))
	T_144 (in fp - 0x00000054 : word32)
Eq_146: (union "Eq_146" (int32 u0) (ptr32 u1))
	T_146 (in fp - (char *) 0x00000054 : word32)
Eq_194: (fn (ptr Eq_201) ((ptr char), (ptr char)))
	T_194 (in fopen : ptr32)
	T_195 (in signature of fopen : void)
Eq_201: FILE
	T_201 (in fopen("%s
", fp - (char *) 0x00000054) : (ptr FILE))
Eq_206: (fn void (int32, ptr32))
	T_206 (in fn08048950 : ptr32)
	T_207 (in signature of fn08048950 : void)
Eq_217: (fn void ())
	T_217 (in fopen : ptr32)
	T_218 (in signature of fopen : void)
Eq_222: (fn void (int32))
	T_222 (in exit : ptr32)
	T_223 (in signature of exit : void)
	T_228 (in exit : ptr32)
Eq_230: (fn void ())
	T_230 (in fread : ptr32)
	T_231 (in signature of fread : void)
Eq_235: (fn void ())
	T_235 (in fclose : ptr32)
	T_236 (in signature of fclose : void)
Eq_238: (fn void ((ptr Eq_74), ptr32, uint32, ptr32))
	T_238 (in fn08048660 : ptr32)
	T_239 (in signature of fn08048660 : void)
Eq_252: (fn word32 ((ptr Eq_74), word32))
	T_252 (in fn080487F0 : ptr32)
	T_253 (in signature of fn080487F0 : void)
Eq_263: (fn void ())
	T_263 (in _xstat : ptr32)
	T_264 (in signature of _xstat : void)
Eq_278: (struct "Eq_278" (FFFFFFFC word32 dwFFFFFFFC))
	T_278 (in ebx_28 : (ptr Eq_278))
Eq_289: (fn void ())
	T_289 (in fn08048620 : ptr32)
	T_290 (in signature of fn08048620 : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in fn08048980 : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_4 ()))
T_3: (in signature of fn08048980 : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: 
T_4: (in fn08048980() : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in esp_3 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_6: (in 0x08049A14 : ptr32)
  Class: Eq_6
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_7 t0000)))
T_7: (in Mem0[0x08049A14:word32] : word32)
  Class: Eq_7
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_8: (in esp_3 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in 0x08049A18 : ptr32)
  Class: Eq_9
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_10 t0000)))
T_10: (in Mem0[0x08049A18:word32] : word32)
  Class: Eq_10
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_11: (in esp_3 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in 0x08049A1C : ptr32)
  Class: Eq_12
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_13 t0000)))
T_13: (in Mem0[0x08049A1C:word32] : word32)
  Class: Eq_13
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_14: (in esp_3 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in 0x08049A20 : ptr32)
  Class: Eq_15
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_16 t0000)))
T_16: (in Mem0[0x08049A20:word32] : word32)
  Class: Eq_16
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_17: (in esp_3 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in 0x08049A24 : ptr32)
  Class: Eq_18
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_19 t0000)))
T_19: (in Mem0[0x08049A24:word32] : word32)
  Class: Eq_19
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_20: (in esp_3 : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_21: (in 0x08049A28 : ptr32)
  Class: Eq_21
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_22 t0000)))
T_22: (in Mem0[0x08049A28:word32] : word32)
  Class: Eq_22
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_23: (in esp_3 : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_24: (in 0x08049A2C : ptr32)
  Class: Eq_24
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_25 t0000)))
T_25: (in Mem0[0x08049A2C:word32] : word32)
  Class: Eq_25
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_26: (in esp_3 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_27: (in 0x08049A30 : ptr32)
  Class: Eq_27
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_28 t0000)))
T_28: (in Mem0[0x08049A30:word32] : word32)
  Class: Eq_28
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_29: (in esp_3 : word32)
  Class: Eq_29
  DataType: word32
  OrigDataType: word32
T_30: (in 0x08049A34 : ptr32)
  Class: Eq_30
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_31 t0000)))
T_31: (in Mem0[0x08049A34:word32] : word32)
  Class: Eq_31
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_32: (in esp_3 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in 0x08049A38 : ptr32)
  Class: Eq_33
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_34 t0000)))
T_34: (in Mem0[0x08049A38:word32] : word32)
  Class: Eq_34
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_35: (in esp_3 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_36: (in 0x08049A3C : ptr32)
  Class: Eq_36
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_37 t0000)))
T_37: (in Mem0[0x08049A3C:word32] : word32)
  Class: Eq_37
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_38: (in esi : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in edi : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_40: (in dwArg00 : word32)
  Class: Eq_40
  DataType: word32
  OrigDataType: word32
T_41: (in __align : ptr32)
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: (ptr (fn T_45 (T_44)))
T_42: (in fp : ptr32)
  Class: Eq_42
  DataType: ptr32
  OrigDataType: ptr32
T_43: (in 0x00000004 : word32)
  Class: Eq_43
  DataType: int32
  OrigDataType: int32
T_44: (in fp + 0x00000004 : word32)
  Class: Eq_44
  DataType: ptr32
  OrigDataType: ptr32
T_45: (in __align(fp + 0x00000004) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in __syscall : ptr32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (fn T_48 (T_47)))
T_47: (in 0x80 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in __syscall(0x80) : void)
  Class: Eq_48
  DataType: void
  OrigDataType: void
T_49: (in fp + 0x00000004 : word32)
  Class: Eq_49
  DataType: ptr32
  OrigDataType: ptr32
T_50: (in dwArg00 : word32)
  Class: Eq_50
  DataType: ui32
  OrigDataType: ui32
T_51: (in 0x00000002 : word32)
  Class: Eq_51
  DataType: ui32
  OrigDataType: ui32
T_52: (in dwArg00 * 0x00000002 : word32)
  Class: Eq_52
  DataType: ui32
  OrigDataType: ui32
T_53: (in 0x00000002 : word32)
  Class: Eq_53
  DataType: ui32
  OrigDataType: ui32
T_54: (in dwArg00 * 0x00000002 * 0x00000002 : word32)
  Class: Eq_54
  DataType: int32
  OrigDataType: int32
T_55: (in fp + 0x00000004 + (dwArg00 * 0x00000002) * 0x00000002 : word32)
  Class: Eq_55
  DataType: ptr32
  OrigDataType: ptr32
T_56: (in 0x00000004 : word32)
  Class: Eq_56
  DataType: int32
  OrigDataType: int32
T_57: (in fp + 0x00000004 + (dwArg00 * 0x00000002) * 0x00000002 + 0x00000004 : word32)
  Class: Eq_57
  DataType: ptr32
  OrigDataType: ptr32
T_58: (in 0x080499E8 : word32)
  Class: Eq_58
  DataType: (ptr ptr32)
  OrigDataType: (ptr (struct (0 T_59 t0000)))
T_59: (in Mem30[0x080499E8:word32] : word32)
  Class: Eq_57
  DataType: ptr32
  OrigDataType: word32
T_60: (in __setfpucw : ptr32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (fn T_62 ()))
T_61: (in signature of __setfpucw : void)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: 
T_62: (in __setfpucw() : void)
  Class: Eq_62
  DataType: void
  OrigDataType: void
T_63: (in __libc_init : ptr32)
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: (ptr (fn T_65 ()))
T_64: (in signature of __libc_init : void)
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: 
T_65: (in __libc_init() : void)
  Class: Eq_65
  DataType: void
  OrigDataType: void
T_66: (in atexit : ptr32)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: (ptr (fn T_68 ()))
T_67: (in signature of atexit : void)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: 
T_68: (in atexit() : void)
  Class: Eq_68
  DataType: void
  OrigDataType: void
T_69: (in _init : ptr32)
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: (ptr (fn T_71 ()))
T_70: (in signature of _init : void)
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: 
T_71: (in _init() : void)
  Class: Eq_71
  DataType: void
  OrigDataType: void
T_72: (in fn080488E0 : ptr32)
  Class: Eq_72
  DataType: (ptr Eq_72)
  OrigDataType: (ptr (fn T_79 (T_77, T_50, T_78)))
T_73: (in signature of fn080488E0 : void)
  Class: Eq_72
  DataType: (ptr Eq_72)
  OrigDataType: 
T_74: (in ebx : (ptr Eq_74))
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: word32
T_75: (in dwArg04 : ui32)
  Class: Eq_50
  DataType: ui32
  OrigDataType: word32
T_76: (in dwArg08 : ptr32)
  Class: Eq_76
  DataType: ptr32
  OrigDataType: word32
T_77: (in 0x00000000 : word32)
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: word32
T_78: (in fp + 0x00000004 : word32)
  Class: Eq_76
  DataType: ptr32
  OrigDataType: ptr32
T_79: (in fn080488E0(null, dwArg00, fp + 0x00000004) : void)
  Class: Eq_79
  DataType: void
  OrigDataType: void
T_80: (in exit : ptr32)
  Class: Eq_80
  DataType: (ptr Eq_80)
  OrigDataType: (ptr (fn T_82 ()))
T_81: (in signature of exit : void)
  Class: Eq_80
  DataType: (ptr Eq_80)
  OrigDataType: 
T_82: (in exit() : void)
  Class: Eq_82
  DataType: void
  OrigDataType: void
T_83: (in __syscall : ptr32)
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: (ptr (fn T_85 (T_84)))
T_84: (in 0x80 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in __syscall(0x80) : void)
  Class: Eq_85
  DataType: void
  OrigDataType: void
T_86: (in ebx_24 : (ptr word32))
  Class: Eq_86
  DataType: (ptr word32)
  OrigDataType: (ptr (struct 0004 (0 word32 dw0000)))
T_87: (in 0x080499F8 : word32)
  Class: Eq_86
  DataType: (ptr word32)
  OrigDataType: word32
T_88: (in 0x080499F8 : ptr32)
  Class: Eq_88
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_89 t0000)))
T_89: (in Mem0[0x080499F8:word32] : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_90: (in 0x00000000 : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_91: (in globals->a80499F8 == 0x00000000 : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in eax_25 : (ptr code))
  Class: Eq_92
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_93: (in 0x00000000 : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_94: (in ebx_24 + 0x00000000 : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_95: (in Mem0[ebx_24 + 0x00000000:word32] : word32)
  Class: Eq_92
  DataType: (ptr code)
  OrigDataType: word32
T_96: (in esp_26 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in ebp_27 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in ebx_28 : (ptr Eq_98))
  Class: Eq_98
  DataType: (ptr Eq_98)
  OrigDataType: (ptr (struct (4 T_106 t0004)))
T_99: (in SCZO_29 : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in Z_30 : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in esi_31 : word32)
  Class: Eq_101
  DataType: word32
  OrigDataType: word32
T_102: (in eax_32 : word32)
  Class: Eq_102
  DataType: word32
  OrigDataType: word32
T_103: (in 0x00000004 : word32)
  Class: Eq_103
  DataType: word32
  OrigDataType: word32
T_104: (in ebx_28 + 0x00000004 : word32)
  Class: Eq_86
  DataType: (ptr word32)
  OrigDataType: word32
T_105: (in ebx_28 + 0x00000004 : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in Mem0[ebx_28 + 0x00000004:word32] : word32)
  Class: Eq_106
  DataType: word32
  OrigDataType: word32
T_107: (in 0x00000000 : word32)
  Class: Eq_106
  DataType: word32
  OrigDataType: word32
T_108: (in ebx_28->dw0004 != 0x00000000 : bool)
  Class: Eq_108
  DataType: bool
  OrigDataType: bool
T_109: (in ebx : (ptr Eq_74))
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: (ptr (struct "stat"))
T_110: (in dwArg04 : ptr32)
  Class: Eq_110
  DataType: ptr32
  OrigDataType: word32
T_111: (in dwArg08 : uint32)
  Class: Eq_111
  DataType: uint32
  OrigDataType: word32
T_112: (in dwArg0C : ptr32)
  Class: Eq_112
  DataType: ptr32
  OrigDataType: word32
T_113: (in sprintf : ptr32)
  Class: Eq_113
  DataType: (ptr Eq_113)
  OrigDataType: (ptr (fn T_115 ()))
T_114: (in signature of sprintf : void)
  Class: Eq_113
  DataType: (ptr Eq_113)
  OrigDataType: 
T_115: (in sprintf() : void)
  Class: Eq_115
  DataType: void
  OrigDataType: void
T_116: (in dwArg0C : word32)
  Class: Eq_116
  DataType: int32
  OrigDataType: int32
T_117: (in 0x00000010 : word32)
  Class: Eq_116
  DataType: int32
  OrigDataType: int32
T_118: (in dwArg0C <= 0x00000010 : bool)
  Class: Eq_118
  DataType: bool
  OrigDataType: bool
T_119: (in dwLoc58_169 : (ptr char))
  Class: Eq_119
  DataType: (ptr char)
  OrigDataType: int32
T_120: (in 0x00000000 : word32)
  Class: Eq_119
  DataType: (ptr char)
  OrigDataType: word32
T_121: (in sprintf : ptr32)
  Class: Eq_113
  DataType: (ptr Eq_113)
  OrigDataType: (ptr (fn T_122 ()))
T_122: (in sprintf() : void)
  Class: Eq_115
  DataType: void
  OrigDataType: void
T_123: (in 0x00000001 : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_124: (in dwLoc58_169 + 0x00000001 : word32)
  Class: Eq_119
  DataType: (ptr char)
  OrigDataType: word32
T_125: (in 0x00000001 : word32)
  Class: Eq_125
  DataType: word32
  OrigDataType: word32
T_126: (in dwLoc58_169 + 0x00000001 : word32)
  Class: Eq_119
  DataType: (ptr char)
  OrigDataType: word32
T_127: (in 0x0000000F : word32)
  Class: Eq_119
  DataType: (ptr char)
  OrigDataType: int32
T_128: (in dwLoc58_169 <= (char *) 0x0000000F : bool)
  Class: Eq_128
  DataType: bool
  OrigDataType: bool
T_129: (in 0x00000010 : word32)
  Class: Eq_119
  DataType: (ptr char)
  OrigDataType: int32
T_130: (in (char *) 0x00000010 > dwLoc58_169 : bool)
  Class: Eq_130
  DataType: bool
  OrigDataType: bool
T_131: (in strcat : ptr32)
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: (ptr (fn T_133 ()))
T_132: (in signature of strcat : void)
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: 
T_133: (in strcat() : void)
  Class: Eq_133
  DataType: void
  OrigDataType: void
T_134: (in strlen : ptr32)
  Class: Eq_134
  DataType: (ptr Eq_134)
  OrigDataType: (ptr (fn T_136 ()))
T_135: (in signature of strlen : void)
  Class: Eq_134
  DataType: (ptr Eq_134)
  OrigDataType: 
T_136: (in strlen() : void)
  Class: Eq_136
  DataType: void
  OrigDataType: void
T_137: (in _xstat : ptr32)
  Class: Eq_137
  DataType: (ptr Eq_137)
  OrigDataType: (ptr (fn T_149 (T_147, T_148, T_109)))
T_138: (in signature of _xstat : void)
  Class: Eq_137
  DataType: (ptr Eq_137)
  OrigDataType: 
T_139: (in version : int32)
  Class: Eq_139
  DataType: (ptr char)
  OrigDataType: 
T_140: (in path : (ptr char))
  Class: Eq_140
  DataType: (ptr char)
  OrigDataType: 
T_141: (in statbuf : (ptr (struct "stat")))
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: 
T_142: (in fp : ptr32)
  Class: Eq_142
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_143: (in 0x00000054 : word32)
  Class: Eq_143
  DataType: int32
  OrigDataType: (union (int32 u1) (ptr32 u0))
T_144: (in fp - 0x00000054 : word32)
  Class: Eq_144
  DataType: Eq_144
  OrigDataType: (union (int32 u1) (ptr32 u0))
T_145: (in 0x00000054 : word32)
  Class: Eq_145
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_146: (in fp - (char *) 0x00000054 : word32)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: (union (int32 u1) (ptr32 u0))
T_147: (in fp - 0x00000054 + (fp - 0x00000054) : word32)
  Class: Eq_139
  DataType: (ptr char)
  OrigDataType: (union (int32 u1) (ptr32 u0))
T_148: (in 0x080489DA : word32)
  Class: Eq_140
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_149: (in _xstat(fp - 0x00000054 + (fp - 0x00000054), 0x080489DA, ebx) : int32)
  Class: Eq_149
  DataType: int32
  OrigDataType: int32
T_150: (in dwLoc58_108 : (ptr char))
  Class: Eq_119
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_151: (in 0x00000000 : word32)
  Class: Eq_119
  DataType: (ptr char)
  OrigDataType: word32
T_152: (in cl_120 : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_153: (in eax_111 : word32)
  Class: Eq_153
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_154: (in 0x00000054 : word32)
  Class: Eq_154
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_155: (in fp - (char *) 0x00000054 : word32)
  Class: Eq_155
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_156: (in fp - 0x00000054 + dwLoc58_108 : word32)
  Class: Eq_153
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_157: (in dwArg04 : word32)
  Class: Eq_157
  DataType: int32
  OrigDataType: int32
T_158: (in dwArg04 + dwLoc58_108 : word32)
  Class: Eq_158
  DataType: (ptr cu8)
  OrigDataType: (ptr (struct (0 T_159 t0000)))
T_159: (in Mem0[dwArg04 + dwLoc58_108:byte] : byte)
  Class: Eq_159
  DataType: cu8
  OrigDataType: cu8
T_160: (in 0x1F : byte)
  Class: Eq_159
  DataType: cu8
  OrigDataType: cu8
T_161: (in dwLoc58_108[dwArg04] <= 0x1F : bool)
  Class: Eq_161
  DataType: bool
  OrigDataType: bool
T_162: (in 0x0000000F : word32)
  Class: Eq_119
  DataType: (ptr char)
  OrigDataType: int32
T_163: (in dwLoc58_108 <= (char *) 0x0000000F : bool)
  Class: Eq_163
  DataType: bool
  OrigDataType: bool
T_164: (in 0x2E : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_165: (in dwArg04 + dwLoc58_108 : word32)
  Class: Eq_165
  DataType: (ptr cu8)
  OrigDataType: (ptr (struct (0 T_166 t0000)))
T_166: (in Mem0[dwArg04 + dwLoc58_108:byte] : byte)
  Class: Eq_166
  DataType: cu8
  OrigDataType: cu8
T_167: (in 0x7E : byte)
  Class: Eq_166
  DataType: cu8
  OrigDataType: cu8
T_168: (in dwLoc58_108[dwArg04] > 0x7E : bool)
  Class: Eq_168
  DataType: bool
  OrigDataType: bool
T_169: (in dwArg04 + dwLoc58_108 : word32)
  Class: Eq_169
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_170 t0000)))
T_170: (in Mem0[dwArg04 + dwLoc58_108:byte] : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_171: (in 0x00000054 : word32)
  Class: Eq_171
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_172: (in fp - (char *) 0x00000054 : word32)
  Class: Eq_172
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_173: (in eax_111 + (fp - 0x00000054) : word32)
  Class: Eq_173
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_174: (in Mem124[eax_111 + (fp - 0x00000054):byte] : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_175: (in 0x00000001 : word32)
  Class: Eq_175
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_176: (in dwLoc58_108 + 0x00000001 : word32)
  Class: Eq_119
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_177: (in 0x20 : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_178: (in fp - (char *) 0x00000054 : word32)
  Class: Eq_178
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_179: (in fp - 0x00000054 + dwLoc58_108 : word32)
  Class: Eq_179
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_180: (in 0x00000054 : word32)
  Class: Eq_180
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_181: (in fp - 0x00000054 : word32)
  Class: Eq_181
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_182: (in fp - 0x00000054 + dwLoc58_108 + (fp - 0x00000054) : word32)
  Class: Eq_182
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_183: (in Mem106[fp - 0x00000054 + dwLoc58_108 + (fp - 0x00000054):byte] : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_184: (in 0x00000001 : word32)
  Class: Eq_184
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_185: (in dwLoc58_108 + 0x00000001 : word32)
  Class: Eq_119
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_186: (in _xstat : ptr32)
  Class: Eq_137
  DataType: (ptr Eq_137)
  OrigDataType: (ptr (fn T_193 (T_191, T_192, T_109)))
T_187: (in 0x00000054 : word32)
  Class: Eq_187
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_188: (in fp - (char *) 0x00000054 : word32)
  Class: Eq_188
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_189: (in fp - (char *) 0x00000054 : word32)
  Class: Eq_189
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_190: (in fp - 0x00000054 + (fp - 0x00000054) : word32)
  Class: Eq_190
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_191: (in fp - 0x00000054 + (fp - 0x00000054) + dwLoc58_108 : word32)
  Class: Eq_139
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_192: (in 0x080489DE : word32)
  Class: Eq_140
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_193: (in _xstat(fp - 0x00000054 + (fp - 0x00000054) + dwLoc58_108, 0x080489DE, ebx) : int32)
  Class: Eq_149
  DataType: int32
  OrigDataType: int32
T_194: (in fopen : ptr32)
  Class: Eq_194
  DataType: (ptr Eq_194)
  OrigDataType: (ptr (fn T_201 (T_198, T_200)))
T_195: (in signature of fopen : void)
  Class: Eq_194
  DataType: (ptr Eq_194)
  OrigDataType: 
T_196: (in file : (ptr char))
  Class: Eq_196
  DataType: (ptr char)
  OrigDataType: 
T_197: (in mode : (ptr char))
  Class: Eq_197
  DataType: (ptr char)
  OrigDataType: 
T_198: (in 0x080489E0 : word32)
  Class: Eq_196
  DataType: (ptr char)
  OrigDataType: (ptr char)
T_199: (in 0x00000054 : word32)
  Class: Eq_199
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_200: (in fp - (char *) 0x00000054 : word32)
  Class: Eq_197
  DataType: (ptr char)
  OrigDataType: (union ((ptr byte) u0) ((ptr char) u1))
T_201: (in fopen("%s
", fp - (char *) 0x00000054) : (ptr FILE))
  Class: Eq_201
  DataType: (ptr Eq_201)
  OrigDataType: (ptr FILE)
T_202: (in (char *) 0x00000010 > dwLoc58_108 : bool)
  Class: Eq_202
  DataType: bool
  OrigDataType: bool
T_203: (in eax : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_204: (in ebx : (ptr Eq_74))
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: word32
T_205: (in dwArg04 : word32)
  Class: Eq_205
  DataType: word32
  OrigDataType: word32
T_206: (in fn08048950 : ptr32)
  Class: Eq_206
  DataType: (ptr Eq_206)
  OrigDataType: (ptr (fn T_214 (T_210, T_213)))
T_207: (in signature of fn08048950 : void)
  Class: Eq_206
  DataType: (ptr Eq_206)
  OrigDataType: 
T_208: (in dwArg04 : int32)
  Class: Eq_208
  DataType: int32
  OrigDataType: word32
T_209: (in dwArg08 : ptr32)
  Class: Eq_209
  DataType: ptr32
  OrigDataType: word32
T_210: (in dwArg04 : word32)
  Class: Eq_208
  DataType: int32
  OrigDataType: int32
T_211: (in fp : ptr32)
  Class: Eq_211
  DataType: ptr32
  OrigDataType: ptr32
T_212: (in 0x0000005C : word32)
  Class: Eq_212
  DataType: ui32
  OrigDataType: ui32
T_213: (in fp - 0x0000005C : word32)
  Class: Eq_209
  DataType: ptr32
  OrigDataType: ptr32
T_214: (in fn08048950(dwArg04, fp - 0x0000005C) : void)
  Class: Eq_214
  DataType: void
  OrigDataType: void
T_215: (in 0x00000000 : word32)
  Class: Eq_208
  DataType: int32
  OrigDataType: word32
T_216: (in dwArg04 != 0x00000000 : bool)
  Class: Eq_216
  DataType: bool
  OrigDataType: bool
T_217: (in fopen : ptr32)
  Class: Eq_217
  DataType: (ptr Eq_217)
  OrigDataType: (ptr (fn T_219 ()))
T_218: (in signature of fopen : void)
  Class: Eq_217
  DataType: (ptr Eq_217)
  OrigDataType: 
T_219: (in fopen() : void)
  Class: Eq_219
  DataType: void
  OrigDataType: void
T_220: (in 0x00000000 : word32)
  Class: Eq_208
  DataType: int32
  OrigDataType: word32
T_221: (in dwArg04 != 0x00000000 : bool)
  Class: Eq_221
  DataType: bool
  OrigDataType: bool
T_222: (in exit : ptr32)
  Class: Eq_222
  DataType: (ptr Eq_222)
  OrigDataType: (ptr (fn T_225 (T_210)))
T_223: (in signature of exit : void)
  Class: Eq_222
  DataType: (ptr Eq_222)
  OrigDataType: 
T_224: (in dwArg04 : int32)
  Class: Eq_208
  DataType: int32
  OrigDataType: 
T_225: (in exit(dwArg04) : void)
  Class: Eq_225
  DataType: void
  OrigDataType: void
T_226: (in dwLoc18_36 : uint32)
  Class: Eq_111
  DataType: uint32
  OrigDataType: uint32
T_227: (in 0x00000000 : word32)
  Class: Eq_111
  DataType: uint32
  OrigDataType: word32
T_228: (in exit : ptr32)
  Class: Eq_222
  DataType: (ptr Eq_222)
  OrigDataType: (ptr (fn T_229 (T_210)))
T_229: (in exit(dwArg04) : void)
  Class: Eq_225
  DataType: void
  OrigDataType: void
T_230: (in fread : ptr32)
  Class: Eq_230
  DataType: (ptr Eq_230)
  OrigDataType: (ptr (fn T_232 ()))
T_231: (in signature of fread : void)
  Class: Eq_230
  DataType: (ptr Eq_230)
  OrigDataType: 
T_232: (in fread() : void)
  Class: Eq_232
  DataType: void
  OrigDataType: void
T_233: (in 0x00000014 : word32)
  Class: Eq_211
  DataType: ptr32
  OrigDataType: word32
T_234: (in fp != 0x00000014 : bool)
  Class: Eq_234
  DataType: bool
  OrigDataType: bool
T_235: (in fclose : ptr32)
  Class: Eq_235
  DataType: (ptr Eq_235)
  OrigDataType: (ptr (fn T_237 ()))
T_236: (in signature of fclose : void)
  Class: Eq_235
  DataType: (ptr Eq_235)
  OrigDataType: 
T_237: (in fclose() : void)
  Class: Eq_237
  DataType: void
  OrigDataType: void
T_238: (in fn08048660 : ptr32)
  Class: Eq_238
  DataType: (ptr Eq_238)
  OrigDataType: (ptr (fn T_244 (T_204, T_241, T_226, T_243)))
T_239: (in signature of fn08048660 : void)
  Class: Eq_238
  DataType: (ptr Eq_238)
  OrigDataType: 
T_240: (in 0x00000014 : word32)
  Class: Eq_240
  DataType: ui32
  OrigDataType: ui32
T_241: (in fp - 0x00000014 : word32)
  Class: Eq_110
  DataType: ptr32
  OrigDataType: ptr32
T_242: (in 0x00000014 : word32)
  Class: Eq_242
  DataType: ui32
  OrigDataType: ui32
T_243: (in fp - 0x00000014 : word32)
  Class: Eq_112
  DataType: ptr32
  OrigDataType: ptr32
T_244: (in fn08048660(ebx, fp - 0x00000014, dwLoc18_36, fp - 0x00000014) : void)
  Class: Eq_244
  DataType: void
  OrigDataType: void
T_245: (in fp - 0x00000014 : word32)
  Class: Eq_245
  DataType: ptr32
  OrigDataType: ptr32
T_246: (in dwLoc18_36 + (fp - 0x00000014) : word32)
  Class: Eq_111
  DataType: uint32
  OrigDataType: word32
T_247: (in 0x00000000 : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_248: (in dwLoc48 : word32)
  Class: Eq_111
  DataType: uint32
  OrigDataType: uint32
T_249: (in dwLoc48 > dwLoc18_36 : bool)
  Class: Eq_249
  DataType: bool
  OrigDataType: bool
T_250: (in dwLoc08_15 : int32)
  Class: Eq_250
  DataType: int32
  OrigDataType: int32
T_251: (in 0x00000001 : word32)
  Class: Eq_250
  DataType: int32
  OrigDataType: word32
T_252: (in fn080487F0 : ptr32)
  Class: Eq_252
  DataType: (ptr Eq_252)
  OrigDataType: (ptr (fn T_258 (T_74, T_257)))
T_253: (in signature of fn080487F0 : void)
  Class: Eq_252
  DataType: (ptr Eq_252)
  OrigDataType: 
T_254: (in dwArg08 : (arr word32))
  Class: Eq_254
  DataType: (ptr (arr word32))
  OrigDataType: (ptr (struct (0 (arr T_293) a0000)))
T_255: (in 0x00000004 : word32)
  Class: Eq_255
  DataType: ui32
  OrigDataType: ui32
T_256: (in dwLoc08_15 * 0x00000004 : word32)
  Class: Eq_256
  DataType: ui32
  OrigDataType: ui32
T_257: (in dwArg08[dwLoc08_15 * 0x00000004] : word32)
  Class: Eq_205
  DataType: word32
  OrigDataType: word32
T_258: (in fn080487F0(ebx, dwArg08[dwLoc08_15]) : word32)
  Class: Eq_258
  DataType: word32
  OrigDataType: word32
T_259: (in 0x00000001 : word32)
  Class: Eq_259
  DataType: word32
  OrigDataType: word32
T_260: (in dwLoc08_15 + 0x00000001 : word32)
  Class: Eq_250
  DataType: int32
  OrigDataType: word32
T_261: (in dwArg04 : word32)
  Class: Eq_250
  DataType: int32
  OrigDataType: int32
T_262: (in dwArg04 > dwLoc08_15 : bool)
  Class: Eq_262
  DataType: bool
  OrigDataType: bool
T_263: (in _xstat : ptr32)
  Class: Eq_263
  DataType: (ptr Eq_263)
  OrigDataType: (ptr (fn T_265 ()))
T_264: (in signature of _xstat : void)
  Class: Eq_263
  DataType: (ptr Eq_263)
  OrigDataType: 
T_265: (in _xstat() : void)
  Class: Eq_265
  DataType: void
  OrigDataType: void
T_266: (in ebx_24 : (ptr word32))
  Class: Eq_266
  DataType: (ptr word32)
  OrigDataType: (ptr (struct 0004 (0 word32 dw0000)))
T_267: (in 0x080499EC : word32)
  Class: Eq_266
  DataType: (ptr word32)
  OrigDataType: word32
T_268: (in 0x080499EC : ptr32)
  Class: Eq_268
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_269 t0000)))
T_269: (in Mem0[0x080499EC:word32] : word32)
  Class: Eq_269
  DataType: word32
  OrigDataType: word32
T_270: (in 0xFFFFFFFF : word32)
  Class: Eq_269
  DataType: word32
  OrigDataType: word32
T_271: (in globals->dw80499EC == 0xFFFFFFFF : bool)
  Class: Eq_271
  DataType: bool
  OrigDataType: bool
T_272: (in eax_25 : (ptr code))
  Class: Eq_272
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_273: (in 0x00000000 : word32)
  Class: Eq_273
  DataType: word32
  OrigDataType: word32
T_274: (in ebx_24 + 0x00000000 : word32)
  Class: Eq_274
  DataType: word32
  OrigDataType: word32
T_275: (in Mem0[ebx_24 + 0x00000000:word32] : word32)
  Class: Eq_272
  DataType: (ptr code)
  OrigDataType: word32
T_276: (in esp_26 : word32)
  Class: Eq_276
  DataType: word32
  OrigDataType: word32
T_277: (in ebp_27 : word32)
  Class: Eq_277
  DataType: word32
  OrigDataType: word32
T_278: (in ebx_28 : (ptr Eq_278))
  Class: Eq_278
  DataType: (ptr Eq_278)
  OrigDataType: (ptr (struct (FFFFFFFC T_286 tFFFFFFFC)))
T_279: (in SCZO_29 : byte)
  Class: Eq_279
  DataType: byte
  OrigDataType: byte
T_280: (in Z_30 : byte)
  Class: Eq_280
  DataType: byte
  OrigDataType: byte
T_281: (in esi_31 : word32)
  Class: Eq_281
  DataType: word32
  OrigDataType: word32
T_282: (in eax_32 : word32)
  Class: Eq_282
  DataType: word32
  OrigDataType: word32
T_283: (in 0xFFFFFFFC : word32)
  Class: Eq_283
  DataType: word32
  OrigDataType: word32
T_284: (in ebx_28 + 0xFFFFFFFC : word32)
  Class: Eq_266
  DataType: (ptr word32)
  OrigDataType: word32
T_285: (in ebx_28 + 0xFFFFFFFC : word32)
  Class: Eq_285
  DataType: word32
  OrigDataType: word32
T_286: (in Mem0[ebx_28 + 0xFFFFFFFC:word32] : word32)
  Class: Eq_286
  DataType: word32
  OrigDataType: word32
T_287: (in 0xFFFFFFFF : word32)
  Class: Eq_286
  DataType: word32
  OrigDataType: word32
T_288: (in ebx_28->dwFFFFFFFC != 0xFFFFFFFF : bool)
  Class: Eq_288
  DataType: bool
  OrigDataType: bool
T_289: (in fn08048620 : ptr32)
  Class: Eq_289
  DataType: (ptr Eq_289)
  OrigDataType: (ptr (fn T_291 ()))
T_290: (in signature of fn08048620 : void)
  Class: Eq_289
  DataType: (ptr Eq_289)
  OrigDataType: 
T_291: (in fn08048620() : void)
  Class: Eq_291
  DataType: void
  OrigDataType: void
T_292:
  Class: Eq_89
  DataType: word32
  OrigDataType: (struct 0004 (0 word32 dw0000))
T_293:
  Class: Eq_293
  DataType: word32
  OrigDataType: (struct 0004 (0 T_257 t0000))
*/
typedef struct Globals {
	<anonymous> t80484EE;	// 80484EE
	<anonymous> t80484FE;	// 80484FE
	<anonymous> t804850E;	// 804850E
	<anonymous> t804851E;	// 804851E
	<anonymous> t804852E;	// 804852E
	<anonymous> t804853E;	// 804853E
	<anonymous> t804854E;	// 804854E
	<anonymous> t804855E;	// 804855E
	<anonymous> t804856E;	// 804856E
	<anonymous> t804857E;	// 804857E
	<anonymous> t804858E;	// 804858E
	char b80489DA;	// 80489DA
	char b80489DE;	// 80489DE
	char str80489E0[];	// 80489E0
	ptr32 ptr80499E8;	// 80499E8
	word32 dw80499EC;	// 80499EC
	word32 a80499F8[];	// 80499F8
	<anonymous> * ptr8049A14;	// 8049A14
	<anonymous> * ptr8049A18;	// 8049A18
	<anonymous> * ptr8049A1C;	// 8049A1C
	<anonymous> * ptr8049A20;	// 8049A20
	<anonymous> * ptr8049A24;	// 8049A24
	<anonymous> * ptr8049A28;	// 8049A28
	<anonymous> * ptr8049A2C;	// 8049A2C
	<anonymous> * ptr8049A30;	// 8049A30
	<anonymous> * ptr8049A34;	// 8049A34
	<anonymous> * ptr8049A38;	// 8049A38
	<anonymous> * ptr8049A3C;	// 8049A3C
} Eq_1;

typedef void (Eq_2)();

typedef void (Eq_41)(ptr32);

typedef void (Eq_46)(byte);

typedef void (Eq_60)();

typedef void (Eq_63)();

typedef void (Eq_66)();

typedef void (Eq_69)();

typedef void (Eq_72)(stat *, ui32, ptr32);

typedef struct stat {
} Eq_74;

typedef void (Eq_80)();

typedef void (Eq_83)(byte);

typedef struct Eq_98 {
	word32 dw0004;	// 4
} Eq_98;

typedef void (Eq_113)();

typedef void (Eq_131)();

typedef void (Eq_134)();

typedef int32 (Eq_137)(char *, char *, stat *);

typedef union Eq_143 {
	int32 u0;
	ptr32 u1;
} Eq_143;

typedef union Eq_144 {
	int32 u0;
	ptr32 u1;
} Eq_144;

typedef union Eq_146 {
	int32 u0;
	ptr32 u1;
} Eq_146;

typedef FILE * (Eq_194)(char *, char *);

typedef FILE Eq_201;

typedef void (Eq_206)(int32, ptr32);

typedef void (Eq_217)();

typedef void (Eq_222)(int32);

typedef void (Eq_230)();

typedef void (Eq_235)();

typedef void (Eq_238)(stat *, ptr32, uint32, ptr32);

typedef word32 (Eq_252)(stat *, word32);

typedef void (Eq_263)();

typedef struct Eq_278 {
	word32 dwFFFFFFFC;	// FFFFFFFC
} Eq_278;

typedef void (Eq_289)();

