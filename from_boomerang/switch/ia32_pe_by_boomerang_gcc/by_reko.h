// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (403000 word32 dw403000) (403024 word32 dw403024))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: DWORD
	T_2 (in eax : Eq_2)
	T_31 (in eax_17 | 0x0000033F : word32)
Eq_8: (fn uint16 ())
	T_8 (in __fstcw : ptr32)
Eq_15: (fn void (word16))
	T_15 (in __fldcw : ptr32)
Eq_20: (fn void (ptr32, word32, word32))
	T_20 (in fn00401470 : ptr32)
	T_21 (in signature of fn00401470 : void)
Eq_32: (fn void ())
	T_32 (in int3 : ptr32)
	T_33 (in signature of int3 : void)
Eq_46: (fn word32 (ptr32, word32, (ptr word32), (ptr word32)))
	T_46 (in fn00401530 : ptr32)
	T_47 (in signature of fn00401530 : void)
	T_75 (in fn00401530 : ptr32)
Eq_60: (struct "Eq_60" (0 (ptr word32) ptr0000) (4 (ptr word32) ptr0004) (8 word32 dw0008))
	T_60 (in esp_31 : (ptr Eq_60))
	T_62 (in esp_30 - 0x000000B0 : word32)
Eq_97: (struct "Eq_97" (0 ptr32 ptr0000) (4 word32 dw0004) (8 word32 dw0008) (C word32 dw000C) (10 word32 dw0010) (14 word32 dw0014) (18 word32 dw0018) (1C word32 dw001C) (20 word32 dw0020) (24 word32 dw0024) (28 word32 dw0028) (2C word32 dw002C) (30 word32 dw0030) (34 word32 dw0034) (38 word32 dw0038) (3C word32 dw003C) (40 word32 dw0040) (44 word32 dw0044) (48 word32 dw0048) (4C word32 dw004C) (50 word32 dw0050) (54 word32 dw0054) (78 word32 dw0078) (7C Eq_217 t007C) (80 word32 dw0080) (84 word32 dw0084) (A4 word32 dw00A4))
	T_97 (in ebx_12 : (ptr Eq_97))
	T_98 (in dwArg08 : word32)
	T_99 (in 0x00000000 : word32)
	T_158 (in 0x00000000 : word32)
Eq_207: LPCSTR
	T_207 (in 0x00000000 : word32)
	T_210 (in Mem67[esp_10 + 0x00000000:word32] : word32)
	T_213 (in lpModuleName : LPCSTR)
	T_216 (in Mem67[esp_10 + 0x00000000:LPCSTR] : LPCSTR)
Eq_211: (fn Eq_217 (Eq_207))
	T_211 (in GetModuleHandleA : ptr32)
	T_212 (in signature of GetModuleHandleA : void)
Eq_217: HMODULE
	T_217 (in GetModuleHandleA(*esp_10) : HMODULE)
	T_220 (in Mem70[ebx_12 + 0x0000007C:word32] : word32)
Eq_237: (fn void (word32))
	T_237 (in fn004016B0 : ptr32)
	T_238 (in signature of fn004016B0 : void)
Eq_246: (struct "Eq_246" 0008 (0 word32 dw0000))
	T_246 (in ecx_37 : (ptr Eq_246))
	T_247 (in dwArg04 : word32)
	T_249 (in dwArg04 + 0x00000004 : word32)
	T_250 (in dwArg08 : word32)
	T_269 (in ecx_37 + 0x00000008 : word32)
Eq_271: (fn void (word32, word32, word32, word32))
	T_271 (in fn00401670 : ptr32)
	T_272 (in signature of fn00401670 : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in eax : Eq_2)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: DWORD
T_3: (in 0x00403000 : word32)
  Class: Eq_3
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_4 t0000)))
T_4: (in Mem0[0x00403000:word32] : word32)
  Class: Eq_4
  DataType: word32
  OrigDataType: word32
T_5: (in 0x00000000 : word32)
  Class: Eq_4
  DataType: word32
  OrigDataType: word32
T_6: (in globals->dw403000 == 0x00000000 : bool)
  Class: Eq_6
  DataType: bool
  OrigDataType: bool
T_7: (in eax_17 : ui32)
  Class: Eq_7
  DataType: ui32
  OrigDataType: ui32
T_8: (in __fstcw : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_9 ()))
T_9: (in __fstcw() : uint16)
  Class: Eq_9
  DataType: uint16
  OrigDataType: uint16
T_10: (in (word32) __fstcw() : word32)
  Class: Eq_10
  DataType: ui32
  OrigDataType: ui32
T_11: (in 0xFFFFF0C0 : word32)
  Class: Eq_11
  DataType: ui32
  OrigDataType: ui32
T_12: (in (word32) __fstcw() & 0xFFFFF0C0 : word32)
  Class: Eq_12
  DataType: ui32
  OrigDataType: ui32
T_13: (in (word16) ((word32) __fstcw() & 0xFFFFF0C0) : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in (word32) (word16) ((word32) __fstcw() & 0xFFFFF0C0) : word32)
  Class: Eq_7
  DataType: ui32
  OrigDataType: word32
T_15: (in __fldcw : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_19 (T_18)))
T_16: (in 0x0000033F : word32)
  Class: Eq_16
  DataType: ui32
  OrigDataType: ui32
T_17: (in eax_17 | 0x0000033F : word32)
  Class: Eq_17
  DataType: ui32
  OrigDataType: ui32
T_18: (in (word16) (eax_17 | 0x0000033F) : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in __fldcw((word16) (eax_17 | 0x0000033F)) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in fn00401470 : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_30 (T_27, T_28, T_29)))
T_21: (in signature of fn00401470 : void)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: 
T_22: (in ebp : ptr32)
  Class: Eq_22
  DataType: ptr32
  OrigDataType: word32
T_23: (in edi : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_24: (in dwArg04 : word32)
  Class: Eq_24
  DataType: word32
  OrigDataType: word32
T_25: (in fp : ptr32)
  Class: Eq_25
  DataType: ptr32
  OrigDataType: ptr32
T_26: (in 0x00000004 : word32)
  Class: Eq_26
  DataType: ui32
  OrigDataType: ui32
T_27: (in fp - 0x00000004 : word32)
  Class: Eq_22
  DataType: ptr32
  OrigDataType: ptr32
T_28: (in edi : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_29: (in 0x00401080 : word32)
  Class: Eq_24
  DataType: word32
  OrigDataType: word32
T_30: (in fn00401470(fp - 0x00000004, edi, 0x00401080) : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in eax_17 | 0x0000033F : word32)
  Class: Eq_2
  DataType: Eq_2
  OrigDataType: ui32
T_32: (in int3 : ptr32)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (fn T_34 ()))
T_33: (in signature of int3 : void)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: 
T_34: (in int3() : void)
  Class: Eq_34
  DataType: void
  OrigDataType: void
T_35: (in esp_30 : ptr32)
  Class: Eq_35
  DataType: ptr32
  OrigDataType: ptr32
T_36: (in ebp_29 : ptr32)
  Class: Eq_36
  DataType: ptr32
  OrigDataType: ptr32
T_37: (in esi_28 : (ptr word32))
  Class: Eq_37
  DataType: (ptr word32)
  OrigDataType: word32
T_38: (in edi_24 : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_39: (in ebp_5 : ptr32)
  Class: Eq_36
  DataType: ptr32
  OrigDataType: ptr32
T_40: (in fp : ptr32)
  Class: Eq_40
  DataType: ptr32
  OrigDataType: ptr32
T_41: (in 0x00000004 : word32)
  Class: Eq_41
  DataType: ui32
  OrigDataType: ui32
T_42: (in fp - 0x00000004 : word32)
  Class: Eq_36
  DataType: ptr32
  OrigDataType: ptr32
T_43: (in esi_11 : (ptr word32))
  Class: Eq_37
  DataType: (ptr word32)
  OrigDataType: word32
T_44: (in dwArg04 : word32)
  Class: Eq_37
  DataType: (ptr word32)
  OrigDataType: word32
T_45: (in eax_17 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in fn00401530 : ptr32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (fn T_54 (T_52, T_23, T_44, T_53)))
T_47: (in signature of fn00401530 : void)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: 
T_48: (in ebp : ptr32)
  Class: Eq_36
  DataType: ptr32
  OrigDataType: word32
T_49: (in edi : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_50: (in dwArg04 : (ptr word32))
  Class: Eq_37
  DataType: (ptr word32)
  OrigDataType: word32
T_51: (in dwArg08 : (ptr word32))
  Class: Eq_37
  DataType: (ptr word32)
  OrigDataType: word32
T_52: (in fp - 0x00000004 : word32)
  Class: Eq_36
  DataType: ptr32
  OrigDataType: ptr32
T_53: (in 0x00000000 : word32)
  Class: Eq_37
  DataType: (ptr word32)
  OrigDataType: word32
T_54: (in fn00401530(fp - 0x00000004, edi, dwArg04, null) : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_55: (in esp_19 : ptr32)
  Class: Eq_35
  DataType: ptr32
  OrigDataType: ptr32
T_56: (in 0x0000001C : word32)
  Class: Eq_56
  DataType: ui32
  OrigDataType: ui32
T_57: (in fp - 0x0000001C : word32)
  Class: Eq_35
  DataType: ptr32
  OrigDataType: ptr32
T_58: (in 0x00000000 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_59: (in eax_17 == 0x00000000 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in esp_31 : (ptr Eq_60))
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (struct (0 T_37 t0000) (4 T_71 t0004) (8 T_66 t0008)))
T_61: (in 0x000000B0 : word32)
  Class: Eq_61
  DataType: ui32
  OrigDataType: ui32
T_62: (in esp_30 - 0x000000B0 : word32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: ptr32
T_63: (in 0x00000000 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_64: (in 0x00000008 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_65: (in esp_31 + 0x00000008 : word32)
  Class: Eq_65
  DataType: ptr32
  OrigDataType: ptr32
T_66: (in Mem34[esp_31 + 0x00000008:word32] : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_67: (in 0x00000008 : word32)
  Class: Eq_67
  DataType: int32
  OrigDataType: int32
T_68: (in esp_31 + 0x00000008 : word32)
  Class: Eq_68
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_69: (in 0x00000004 : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_70: (in esp_31 + 0x00000004 : word32)
  Class: Eq_70
  DataType: ptr32
  OrigDataType: ptr32
T_71: (in Mem35[esp_31 + 0x00000004:word32] : word32)
  Class: Eq_68
  DataType: (ptr word32)
  OrigDataType: word32
T_72: (in 0x00000000 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in esp_31 + 0x00000000 : word32)
  Class: Eq_73
  DataType: ptr32
  OrigDataType: ptr32
T_74: (in Mem36[esp_31 + 0x00000000:word32] : word32)
  Class: Eq_37
  DataType: (ptr word32)
  OrigDataType: word32
T_75: (in fn00401530 : ptr32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (fn T_77 (T_36, T_38, T_76, T_44)))
T_76: (in dwArg00 : word32)
  Class: Eq_37
  DataType: (ptr word32)
  OrigDataType: word32
T_77: (in fn00401530(ebp_29, edi_24, dwArg00, dwArg04) : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_78: (in esp_31 + 0x00000008 : word32)
  Class: Eq_37
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_79: (in 0x00000000 : word32)
  Class: Eq_79
  DataType: word32
  OrigDataType: word32
T_80: (in esp_31 + 0x00000000 : word32)
  Class: Eq_80
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_81: (in Mem42[esp_31 + 0x00000000:word32] : word32)
  Class: Eq_37
  DataType: (ptr word32)
  OrigDataType: word32
T_82: (in SCZO_46 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in ebx_48 : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_84: (in eax_49 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in SZO_50 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in C_51 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in Z_52 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in cygwin1.dll!dll_crt0__FP11per_process : ptr32)
  Class: Eq_88
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_89: (in eax : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_90: (in eax_27 : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_91: (in eax_100 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_92: (in 0x00000000 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_93: (in esp_10 : (ptr Eq_207))
  Class: Eq_93
  DataType: (ptr Eq_207)
  OrigDataType: (ptr (struct (0 T_207 t0000)))
T_94: (in fp : ptr32)
  Class: Eq_94
  DataType: ptr32
  OrigDataType: ptr32
T_95: (in 0x0000000C : word32)
  Class: Eq_95
  DataType: ui32
  OrigDataType: ui32
T_96: (in fp - 0x0000000C : word32)
  Class: Eq_93
  DataType: (ptr Eq_207)
  OrigDataType: ptr32
T_97: (in ebx_12 : (ptr Eq_97))
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: (ptr (struct (0 T_190 t0000) (4 T_118 t0004) (8 T_122 t0008) (C T_126 t000C) (10 T_152 t0010) (14 T_146 t0014) (18 T_194 t0018) (1C T_198 t001C) (20 T_202 t0020) (24 T_187 t0024) (28 T_175 t0028) (2C T_138 t002C) (30 T_142 t0030) (34 T_224 t0034) (38 T_228 t0038) (3C T_232 t003C) (40 T_236 t0040) (44 T_206 t0044) (48 T_167 t0048) (4C T_171 t004C) (50 T_179 t0050) (54 T_183 t0054) (78 T_163 t0078) (7C T_220 t007C) (80 T_130 t0080) (84 T_134 t0084) (A4 T_155 t00A4)))
T_98: (in dwArg08 : word32)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: word32
T_99: (in 0x00000000 : word32)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: word32
T_100: (in dwArg08 == null : bool)
  Class: Eq_100
  DataType: bool
  OrigDataType: bool
T_101: (in ebp_85 : word32)
  Class: Eq_101
  DataType: word32
  OrigDataType: word32
T_102: (in eax_86 : word32)
  Class: Eq_102
  DataType: word32
  OrigDataType: word32
T_103: (in SZO_87 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in C_88 : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_105: (in ebx_89 : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in SCZO_90 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in Z_91 : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in ecx_92 : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_109: (in edx_93 : word32)
  Class: Eq_109
  DataType: word32
  OrigDataType: word32
T_110: (in cygwin1.dll!cygwin_internal : ptr32)
  Class: Eq_110
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_111: (in 0x00000000 : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_112: (in 0x00000001 : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_113: (in 0x00000000 : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_114: (in 0x00000001 == 0x00000000 : bool)
  Class: Eq_114
  DataType: bool
  OrigDataType: bool
T_115: (in 0x000000A8 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in 0x00000004 : word32)
  Class: Eq_116
  DataType: word32
  OrigDataType: word32
T_117: (in ebx_12 + 0x00000004 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in Mem39[ebx_12 + 0x00000004:word32] : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_119: (in 0x000003ED : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_120: (in 0x00000008 : word32)
  Class: Eq_120
  DataType: word32
  OrigDataType: word32
T_121: (in ebx_12 + 0x00000008 : word32)
  Class: Eq_121
  DataType: ptr32
  OrigDataType: ptr32
T_122: (in Mem42[ebx_12 + 0x00000008:word32] : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_123: (in 0x00000009 : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_124: (in 0x0000000C : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_125: (in ebx_12 + 0x0000000C : word32)
  Class: Eq_125
  DataType: ptr32
  OrigDataType: ptr32
T_126: (in Mem46[ebx_12 + 0x0000000C:word32] : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_127: (in 0x00000000 : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in 0x00000080 : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in ebx_12 + 0x00000080 : word32)
  Class: Eq_129
  DataType: ptr32
  OrigDataType: ptr32
T_130: (in Mem47[ebx_12 + 0x00000080:word32] : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_131: (in 0x00000070 : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_132: (in 0x00000084 : word32)
  Class: Eq_132
  DataType: word32
  OrigDataType: word32
T_133: (in ebx_12 + 0x00000084 : word32)
  Class: Eq_133
  DataType: ptr32
  OrigDataType: ptr32
T_134: (in Mem48[ebx_12 + 0x00000084:word32] : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_135: (in 0x004017A0 : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_136: (in 0x0000002C : word32)
  Class: Eq_136
  DataType: word32
  OrigDataType: word32
T_137: (in ebx_12 + 0x0000002C : word32)
  Class: Eq_137
  DataType: ptr32
  OrigDataType: ptr32
T_138: (in Mem49[ebx_12 + 0x0000002C:word32] : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_139: (in 0x004017AC : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in 0x00000030 : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_141: (in ebx_12 + 0x00000030 : word32)
  Class: Eq_141
  DataType: ptr32
  OrigDataType: ptr32
T_142: (in Mem50[ebx_12 + 0x00000030:word32] : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_143: (in 0x00403020 : word32)
  Class: Eq_143
  DataType: word32
  OrigDataType: word32
T_144: (in 0x00000014 : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_145: (in ebx_12 + 0x00000014 : word32)
  Class: Eq_145
  DataType: ptr32
  OrigDataType: ptr32
T_146: (in Mem51[ebx_12 + 0x00000014:word32] : word32)
  Class: Eq_143
  DataType: word32
  OrigDataType: word32
T_147: (in 0x00000000 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_148: (in eax_100 == 0x00000000 : bool)
  Class: Eq_148
  DataType: bool
  OrigDataType: bool
T_149: (in 0x00403024 : word32)
  Class: Eq_149
  DataType: word32
  OrigDataType: word32
T_150: (in 0x00000010 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in ebx_12 + 0x00000010 : word32)
  Class: Eq_151
  DataType: ptr32
  OrigDataType: ptr32
T_152: (in Mem80[ebx_12 + 0x00000010:word32] : word32)
  Class: Eq_149
  DataType: word32
  OrigDataType: word32
T_153: (in 0x000000A4 : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_154: (in ebx_12 + 0x000000A4 : word32)
  Class: Eq_154
  DataType: ptr32
  OrigDataType: ptr32
T_155: (in Mem51[ebx_12 + 0x000000A4:word32] : word32)
  Class: Eq_155
  DataType: word32
  OrigDataType: word32
T_156: (in 0x00403024 : word32)
  Class: Eq_156
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_157 t0000)))
T_157: (in Mem79[0x00403024:word32] : word32)
  Class: Eq_155
  DataType: word32
  OrigDataType: word32
T_158: (in 0x00000000 : word32)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: word32
T_159: (in 0x00000001 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_160: (in 0x00000000 : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_161: (in 0x00000078 : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_162: (in ebx_12 + 0x00000078 : word32)
  Class: Eq_162
  DataType: ptr32
  OrigDataType: ptr32
T_163: (in Mem52[ebx_12 + 0x00000078:word32] : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_164: (in 0x00401730 : word32)
  Class: Eq_164
  DataType: word32
  OrigDataType: word32
T_165: (in 0x00000048 : word32)
  Class: Eq_165
  DataType: word32
  OrigDataType: word32
T_166: (in ebx_12 + 0x00000048 : word32)
  Class: Eq_166
  DataType: ptr32
  OrigDataType: ptr32
T_167: (in Mem55[ebx_12 + 0x00000048:word32] : word32)
  Class: Eq_164
  DataType: word32
  OrigDataType: word32
T_168: (in 0x00401720 : word32)
  Class: Eq_168
  DataType: word32
  OrigDataType: word32
T_169: (in 0x0000004C : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_170: (in ebx_12 + 0x0000004C : word32)
  Class: Eq_170
  DataType: ptr32
  OrigDataType: ptr32
T_171: (in Mem56[ebx_12 + 0x0000004C:word32] : word32)
  Class: Eq_168
  DataType: word32
  OrigDataType: word32
T_172: (in dwArg04 : word32)
  Class: Eq_172
  DataType: word32
  OrigDataType: word32
T_173: (in 0x00000028 : word32)
  Class: Eq_173
  DataType: word32
  OrigDataType: word32
T_174: (in ebx_12 + 0x00000028 : word32)
  Class: Eq_174
  DataType: ptr32
  OrigDataType: ptr32
T_175: (in Mem57[ebx_12 + 0x00000028:word32] : word32)
  Class: Eq_172
  DataType: word32
  OrigDataType: word32
T_176: (in 0x00401710 : word32)
  Class: Eq_176
  DataType: word32
  OrigDataType: word32
T_177: (in 0x00000050 : word32)
  Class: Eq_177
  DataType: word32
  OrigDataType: word32
T_178: (in ebx_12 + 0x00000050 : word32)
  Class: Eq_178
  DataType: ptr32
  OrigDataType: ptr32
T_179: (in Mem59[ebx_12 + 0x00000050:word32] : word32)
  Class: Eq_176
  DataType: word32
  OrigDataType: word32
T_180: (in 0x00401700 : word32)
  Class: Eq_180
  DataType: word32
  OrigDataType: word32
T_181: (in 0x00000054 : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_182: (in ebx_12 + 0x00000054 : word32)
  Class: Eq_182
  DataType: ptr32
  OrigDataType: ptr32
T_183: (in Mem60[ebx_12 + 0x00000054:word32] : word32)
  Class: Eq_180
  DataType: word32
  OrigDataType: word32
T_184: (in 0x00403028 : word32)
  Class: Eq_184
  DataType: word32
  OrigDataType: word32
T_185: (in 0x00000024 : word32)
  Class: Eq_185
  DataType: word32
  OrigDataType: word32
T_186: (in ebx_12 + 0x00000024 : word32)
  Class: Eq_186
  DataType: ptr32
  OrigDataType: ptr32
T_187: (in Mem61[ebx_12 + 0x00000024:word32] : word32)
  Class: Eq_184
  DataType: word32
  OrigDataType: word32
T_188: (in 0x00000000 : word32)
  Class: Eq_188
  DataType: word32
  OrigDataType: word32
T_189: (in ebx_12 + 0x00000000 : word32)
  Class: Eq_189
  DataType: ptr32
  OrigDataType: ptr32
T_190: (in Mem62[ebx_12 + 0x00000000:word32] : word32)
  Class: Eq_36
  DataType: ptr32
  OrigDataType: word32
T_191: (in 0x00401510 : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_192: (in 0x00000018 : word32)
  Class: Eq_192
  DataType: word32
  OrigDataType: word32
T_193: (in ebx_12 + 0x00000018 : word32)
  Class: Eq_193
  DataType: ptr32
  OrigDataType: ptr32
T_194: (in Mem63[ebx_12 + 0x00000018:word32] : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_195: (in 0x004014F0 : word32)
  Class: Eq_195
  DataType: word32
  OrigDataType: word32
T_196: (in 0x0000001C : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_197: (in ebx_12 + 0x0000001C : word32)
  Class: Eq_197
  DataType: ptr32
  OrigDataType: ptr32
T_198: (in Mem64[ebx_12 + 0x0000001C:word32] : word32)
  Class: Eq_195
  DataType: word32
  OrigDataType: word32
T_199: (in 0x004016F0 : word32)
  Class: Eq_199
  DataType: word32
  OrigDataType: word32
T_200: (in 0x00000020 : word32)
  Class: Eq_200
  DataType: word32
  OrigDataType: word32
T_201: (in ebx_12 + 0x00000020 : word32)
  Class: Eq_201
  DataType: ptr32
  OrigDataType: ptr32
T_202: (in Mem65[ebx_12 + 0x00000020:word32] : word32)
  Class: Eq_199
  DataType: word32
  OrigDataType: word32
T_203: (in 0x004016E0 : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_204: (in 0x00000044 : word32)
  Class: Eq_204
  DataType: word32
  OrigDataType: word32
T_205: (in ebx_12 + 0x00000044 : word32)
  Class: Eq_205
  DataType: ptr32
  OrigDataType: ptr32
T_206: (in Mem66[ebx_12 + 0x00000044:word32] : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_207: (in 0x00000000 : word32)
  Class: Eq_207
  DataType: Eq_207
  OrigDataType: word32
T_208: (in 0x00000000 : word32)
  Class: Eq_208
  DataType: word32
  OrigDataType: word32
T_209: (in esp_10 + 0x00000000 : word32)
  Class: Eq_209
  DataType: ptr32
  OrigDataType: ptr32
T_210: (in Mem67[esp_10 + 0x00000000:word32] : word32)
  Class: Eq_207
  DataType: Eq_207
  OrigDataType: word32
T_211: (in GetModuleHandleA : ptr32)
  Class: Eq_211
  DataType: (ptr Eq_211)
  OrigDataType: (ptr (fn T_217 (T_216)))
T_212: (in signature of GetModuleHandleA : void)
  Class: Eq_211
  DataType: (ptr Eq_211)
  OrigDataType: 
T_213: (in lpModuleName : LPCSTR)
  Class: Eq_207
  DataType: Eq_207
  OrigDataType: 
T_214: (in 0x00000000 : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_215: (in esp_10 + 0x00000000 : word32)
  Class: Eq_215
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_216: (in Mem67[esp_10 + 0x00000000:LPCSTR] : LPCSTR)
  Class: Eq_207
  DataType: Eq_207
  OrigDataType: LPCSTR
T_217: (in GetModuleHandleA(*esp_10) : HMODULE)
  Class: Eq_217
  DataType: Eq_217
  OrigDataType: HMODULE
T_218: (in 0x0000007C : word32)
  Class: Eq_218
  DataType: word32
  OrigDataType: word32
T_219: (in ebx_12 + 0x0000007C : word32)
  Class: Eq_219
  DataType: ptr32
  OrigDataType: ptr32
T_220: (in Mem70[ebx_12 + 0x0000007C:word32] : word32)
  Class: Eq_217
  DataType: Eq_217
  OrigDataType: word32
T_221: (in 0x00402000 : word32)
  Class: Eq_221
  DataType: word32
  OrigDataType: word32
T_222: (in 0x00000034 : word32)
  Class: Eq_222
  DataType: word32
  OrigDataType: word32
T_223: (in ebx_12 + 0x00000034 : word32)
  Class: Eq_223
  DataType: ptr32
  OrigDataType: ptr32
T_224: (in Mem73[ebx_12 + 0x00000034:word32] : word32)
  Class: Eq_221
  DataType: word32
  OrigDataType: word32
T_225: (in 0x00402010 : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_226: (in 0x00000038 : word32)
  Class: Eq_226
  DataType: word32
  OrigDataType: word32
T_227: (in ebx_12 + 0x00000038 : word32)
  Class: Eq_227
  DataType: ptr32
  OrigDataType: ptr32
T_228: (in Mem74[ebx_12 + 0x00000038:word32] : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_229: (in 0x00403000 : word32)
  Class: Eq_229
  DataType: word32
  OrigDataType: word32
T_230: (in 0x0000003C : word32)
  Class: Eq_230
  DataType: word32
  OrigDataType: word32
T_231: (in ebx_12 + 0x0000003C : word32)
  Class: Eq_231
  DataType: ptr32
  OrigDataType: ptr32
T_232: (in Mem75[ebx_12 + 0x0000003C:word32] : word32)
  Class: Eq_229
  DataType: word32
  OrigDataType: word32
T_233: (in 0x00403080 : word32)
  Class: Eq_233
  DataType: word32
  OrigDataType: word32
T_234: (in 0x00000040 : word32)
  Class: Eq_234
  DataType: word32
  OrigDataType: word32
T_235: (in ebx_12 + 0x00000040 : word32)
  Class: Eq_235
  DataType: ptr32
  OrigDataType: ptr32
T_236: (in Mem76[ebx_12 + 0x00000040:word32] : word32)
  Class: Eq_233
  DataType: word32
  OrigDataType: word32
T_237: (in fn004016B0 : ptr32)
  Class: Eq_237
  DataType: (ptr Eq_237)
  OrigDataType: (ptr (fn T_240 (T_49)))
T_238: (in signature of fn004016B0 : void)
  Class: Eq_237
  DataType: (ptr Eq_237)
  OrigDataType: 
T_239: (in edi : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_240: (in fn004016B0(edi) : void)
  Class: Eq_240
  DataType: void
  OrigDataType: void
T_241: (in 0x00000001 : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_242: (in edi : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_243: (in dwArg04 : word32)
  Class: Eq_243
  DataType: word32
  OrigDataType: word32
T_244: (in dwArg08 : word32)
  Class: Eq_244
  DataType: word32
  OrigDataType: word32
T_245: (in dwArg0C : word32)
  Class: Eq_245
  DataType: word32
  OrigDataType: word32
T_246: (in ecx_37 : (ptr Eq_246))
  Class: Eq_246
  DataType: (ptr Eq_246)
  OrigDataType: (ptr (struct 0008 (0 word32 dw0000)))
T_247: (in dwArg04 : word32)
  Class: Eq_246
  DataType: (ptr Eq_246)
  OrigDataType: uint32
T_248: (in 0x00000004 : word32)
  Class: Eq_248
  DataType: word32
  OrigDataType: word32
T_249: (in dwArg04 + 0x00000004 : word32)
  Class: Eq_246
  DataType: (ptr Eq_246)
  OrigDataType: word32
T_250: (in dwArg08 : word32)
  Class: Eq_246
  DataType: (ptr Eq_246)
  OrigDataType: uint32
T_251: (in dwArg04 >= dwArg08 : bool)
  Class: Eq_251
  DataType: bool
  OrigDataType: bool
T_252: (in edx_41 : (ptr word32))
  Class: Eq_252
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_260 t0000)))
T_253: (in dwArg0C : word32)
  Class: Eq_253
  DataType: word32
  OrigDataType: word32
T_254: (in 0x00000000 : word32)
  Class: Eq_254
  DataType: word32
  OrigDataType: word32
T_255: (in ecx_37 + 0x00000000 : word32)
  Class: Eq_255
  DataType: word32
  OrigDataType: word32
T_256: (in Mem0[ecx_37 + 0x00000000:word32] : word32)
  Class: Eq_256
  DataType: word32
  OrigDataType: word32
T_257: (in dwArg0C + ecx_37->dw0000 : word32)
  Class: Eq_252
  DataType: (ptr word32)
  OrigDataType: word32
T_258: (in 0x00000000 : word32)
  Class: Eq_258
  DataType: word32
  OrigDataType: word32
T_259: (in edx_41 + 0x00000000 : word32)
  Class: Eq_259
  DataType: word32
  OrigDataType: word32
T_260: (in Mem0[edx_41 + 0x00000000:word32] : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_261: (in 0x00000000 : word32)
  Class: Eq_261
  DataType: word32
  OrigDataType: word32
T_262: (in ecx_37 + 0x00000000 : word32)
  Class: Eq_262
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_263: (in Mem0[ecx_37 + 0x00000000:word32] : word32)
  Class: Eq_263
  DataType: word32
  OrigDataType: word32
T_264: (in *edx_41 + ecx_37->dw0000 : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_265: (in 0x00000000 : word32)
  Class: Eq_265
  DataType: word32
  OrigDataType: word32
T_266: (in edx_41 + 0x00000000 : word32)
  Class: Eq_266
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_267: (in Mem45[edx_41 + 0x00000000:word32] : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_268: (in 0x00000008 : word32)
  Class: Eq_268
  DataType: int32
  OrigDataType: int32
T_269: (in ecx_37 + 0x00000008 : word32)
  Class: Eq_246
  DataType: (ptr Eq_246)
  OrigDataType: ptr32
T_270: (in ecx_37 < dwArg08 : bool)
  Class: Eq_270
  DataType: bool
  OrigDataType: bool
T_271: (in fn00401670 : ptr32)
  Class: Eq_271
  DataType: (ptr Eq_271)
  OrigDataType: (ptr (fn T_276 (T_239, T_273, T_274, T_275)))
T_272: (in signature of fn00401670 : void)
  Class: Eq_271
  DataType: (ptr Eq_271)
  OrigDataType: 
T_273: (in 0x00403000 : word32)
  Class: Eq_243
  DataType: word32
  OrigDataType: word32
T_274: (in 0x00403000 : word32)
  Class: Eq_244
  DataType: word32
  OrigDataType: word32
T_275: (in 0x00400000 : word32)
  Class: Eq_245
  DataType: word32
  OrigDataType: word32
T_276: (in fn00401670(edi, 0x00403000, 0x00403000, 0x00400000) : void)
  Class: Eq_276
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
	word32 dw403000;	// 403000
	word32 dw403024;	// 403024
} Eq_1;

typedef DWORD Eq_2;

typedef uint16 (Eq_8)();

typedef void (Eq_15)(word16);

typedef void (Eq_20)(ptr32, word32, word32);

typedef void (Eq_32)();

typedef word32 (Eq_46)(ptr32, word32, word32 *, word32 *);

typedef struct Eq_60 {
	word32 * ptr0000;	// 0
	word32 * ptr0004;	// 4
	word32 dw0008;	// 8
} Eq_60;

typedef struct Eq_97 {
	ptr32 ptr0000;	// 0
	word32 dw0004;	// 4
	word32 dw0008;	// 8
	word32 dw000C;	// C
	word32 dw0010;	// 10
	word32 dw0014;	// 14
	word32 dw0018;	// 18
	word32 dw001C;	// 1C
	word32 dw0020;	// 20
	word32 dw0024;	// 24
	word32 dw0028;	// 28
	word32 dw002C;	// 2C
	word32 dw0030;	// 30
	word32 dw0034;	// 34
	word32 dw0038;	// 38
	word32 dw003C;	// 3C
	word32 dw0040;	// 40
	word32 dw0044;	// 44
	word32 dw0048;	// 48
	word32 dw004C;	// 4C
	word32 dw0050;	// 50
	word32 dw0054;	// 54
	word32 dw0078;	// 78
	Eq_217 t007C;	// 7C
	word32 dw0080;	// 80
	word32 dw0084;	// 84
	word32 dw00A4;	// A4
} Eq_97;

typedef LPCSTR Eq_207;

typedef HMODULE (Eq_211)(LPCSTR);

typedef HMODULE Eq_217;

typedef void (Eq_237)(word32);

typedef struct Eq_246 {	// size: 8 8
	word32 dw0000;	// 0
} Eq_246;

typedef void (Eq_271)(word32, word32, word32, word32);

