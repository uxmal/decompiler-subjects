// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (80482A6 code t80482A6) (80482B6 code t80482B6) (8049554 (ptr code) ptr8049554) (8049560 (ptr code) ptr8049560) (8049564 word32 dw8049564) (8049638 (ptr code) ptr8049638) (8049640 (ptr code) ptr8049640) (8049644 (ptr code) ptr8049644) (8049650 (ptr (ptr code)) ptr8049650) (804965C byte b804965C))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (fn void ())
	T_3 (in call_gmon_start : ptr32)
	T_4 (in signature of call_gmon_start : void)
Eq_6: (fn void (word32))
	T_6 (in frame_dummy : ptr32)
	T_7 (in signature of frame_dummy : void)
Eq_10: (fn void ())
	T_10 (in __do_global_ctors_aux : ptr32)
	T_11 (in signature of __do_global_ctors_aux : void)
Eq_20: (fn void (ptr32))
	T_20 (in __align : ptr32)
Eq_25: (fn void ())
	T_25 (in fn080482A0 : ptr32)
	T_26 (in signature of fn080482A0 : void)
Eq_28: (fn void ())
	T_28 (in __hlt : ptr32)
Eq_91: (fn void ())
	T_91 (in fn080482B0 : ptr32)
	T_92 (in signature of fn080482B0 : void)
	T_95 (in fn080482B0 : ptr32)
	T_112 (in fn080482B0 : ptr32)
Eq_97: (fn void (ptr32))
	T_97 (in __align : ptr32)
Eq_102: (fn void (word32))
	T_102 (in mid : ptr32)
	T_103 (in signature of mid : void)
Eq_106: (fn void (word32))
	T_106 (in fst : ptr32)
	T_107 (in signature of fst : void)
Eq_119: (fn void (word32))
	T_119 (in _init : ptr32)
	T_120 (in signature of _init : void)
Eq_131: (union "Eq_131" (int32 u0) (ptr32 u1))
	T_131 (in edi_49 : Eq_131)
Eq_145: (union "Eq_145" (int32 u0) (uint32 u1))
	T_145 (in esi_50 + 0x00000001 : word32)
	T_149 (in 0x08049714 - edi_49 >> 0x00000002 : word32)
Eq_146: (union "Eq_146" (int32 u0) (ptr32 u1))
	T_146 (in 08049714 : ptr32)
Eq_147: (union "Eq_147" (int32 u0) (ptr32 u1))
	T_147 (in 0x08049714 - edi_49 : word32)
Eq_176: (fn void ())
	T_176 (in _fini : ptr32)
	T_177 (in signature of _fini : void)
Eq_194: (fn void ())
	T_194 (in __do_global_dtors_aux : ptr32)
	T_195 (in signature of __do_global_dtors_aux : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in esi : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in call_gmon_start : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_5 ()))
T_4: (in signature of call_gmon_start : void)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: 
T_5: (in call_gmon_start() : void)
  Class: Eq_5
  DataType: void
  OrigDataType: void
T_6: (in frame_dummy : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn T_9 (T_2)))
T_7: (in signature of frame_dummy : void)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: 
T_8: (in esi : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_9: (in frame_dummy(esi) : void)
  Class: Eq_9
  DataType: void
  OrigDataType: void
T_10: (in __do_global_ctors_aux : ptr32)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (fn T_12 ()))
T_11: (in signature of __do_global_ctors_aux : void)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: 
T_12: (in __do_global_ctors_aux() : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in esp_3 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in 0x08049640 : ptr32)
  Class: Eq_14
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_15 t0000)))
T_15: (in Mem0[0x08049640:word32] : word32)
  Class: Eq_15
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_16: (in esp_3 : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_17: (in 0x08049644 : ptr32)
  Class: Eq_17
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_18 t0000)))
T_18: (in Mem0[0x08049644:word32] : word32)
  Class: Eq_18
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_19: (in dwArg00 : word32)
  Class: Eq_19
  DataType: word32
  OrigDataType: word32
T_20: (in __align : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_24 (T_23)))
T_21: (in fp : ptr32)
  Class: Eq_21
  DataType: ptr32
  OrigDataType: ptr32
T_22: (in 0x00000004 : word32)
  Class: Eq_22
  DataType: int32
  OrigDataType: int32
T_23: (in fp + 0x00000004 : word32)
  Class: Eq_23
  DataType: ptr32
  OrigDataType: ptr32
T_24: (in __align(fp + 0x00000004) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in fn080482A0 : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_27 ()))
T_26: (in signature of fn080482A0 : void)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: 
T_27: (in fn080482A0() : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in __hlt : ptr32)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (fn T_29 ()))
T_29: (in __hlt() : void)
  Class: Eq_29
  DataType: void
  OrigDataType: void
T_30: (in eax_15 : (ptr code))
  Class: Eq_30
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_31: (in 08049638 : ptr32)
  Class: Eq_31
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_34 t0000)))
T_32: (in 0x00000000 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in 0x08049638 + 0x00000000 : word32)
  Class: Eq_33
  DataType: ptr32
  OrigDataType: ptr32
T_34: (in Mem0[0x08049638 + 0x00000000:word32] : word32)
  Class: Eq_30
  DataType: (ptr code)
  OrigDataType: word32
T_35: (in 0x00000000 : word32)
  Class: Eq_30
  DataType: (ptr code)
  OrigDataType: word32
T_36: (in eax_15 == null : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in esp_31 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in ebp_32 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in ebx_33 : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_40: (in SCZO_34 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in edx_35 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in eax_36 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in SZO_37 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in C_38 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in Z_39 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in 0x0804965C : ptr32)
  Class: Eq_46
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_47 t0000)))
T_47: (in Mem0[0x0804965C:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0x00 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_49: (in globals->b804965C == 0x00 : bool)
  Class: Eq_49
  DataType: bool
  OrigDataType: bool
T_50: (in eax_26 : (ptr (ptr code)))
  Class: Eq_50
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_56 t0000)))
T_51: (in 0x08049650 : word32)
  Class: Eq_51
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_52 t0000)))
T_52: (in Mem0[0x08049650:word32] : word32)
  Class: Eq_50
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_53: (in edx_27 : (ptr code))
  Class: Eq_53
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_54: (in 0x00000000 : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_55: (in eax_26 + 0x00000000 : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in Mem0[eax_26 + 0x00000000:word32] : word32)
  Class: Eq_53
  DataType: (ptr code)
  OrigDataType: word32
T_57: (in 0x00000000 : word32)
  Class: Eq_53
  DataType: (ptr code)
  OrigDataType: word32
T_58: (in edx_27 != null : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
T_59: (in 0x00000004 : word32)
  Class: Eq_59
  DataType: int32
  OrigDataType: int32
T_60: (in eax_26 + 0x00000004 : word32)
  Class: Eq_50
  DataType: (ptr (ptr code))
  OrigDataType: ptr32
T_61: (in 0x08049650 : word32)
  Class: Eq_61
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_62 t0000)))
T_62: (in Mem34[0x08049650:word32] : word32)
  Class: Eq_50
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_63: (in esp_35 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_64: (in ebp_36 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_65: (in SCZO_37 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in Z_38 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in eax_39 : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in edx_40 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in SZO_41 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in C_42 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in 0x01 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_72: (in 0x0804965C : ptr32)
  Class: Eq_72
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_73 t0000)))
T_73: (in Mem31[0x0804965C:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_74: (in 0x08049564 : word32)
  Class: Eq_74
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_75 t0000)))
T_75: (in Mem0[0x08049564:word32] : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in 0x00000000 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_77: (in globals->dw8049564 == 0x00000000 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in 0x00000000 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in 0x00000000 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_80: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_80
  DataType: bool
  OrigDataType: bool
T_81: (in esp_33 : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in ebp_34 : word32)
  Class: Eq_82
  DataType: word32
  OrigDataType: word32
T_83: (in SCZO_35 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in eax_36 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in SZO_37 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in C_38 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in Z_39 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in esi_40 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in 0x00000000 : word32)
  Class: Eq_89
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_90: (in dwArg04 : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_91: (in fn080482B0 : ptr32)
  Class: Eq_91
  DataType: (ptr Eq_91)
  OrigDataType: (ptr (fn T_93 ()))
T_92: (in signature of fn080482B0 : void)
  Class: Eq_91
  DataType: (ptr Eq_91)
  OrigDataType: 
T_93: (in fn080482B0() : void)
  Class: Eq_93
  DataType: void
  OrigDataType: void
T_94: (in dwArg04 : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_95: (in fn080482B0 : ptr32)
  Class: Eq_91
  DataType: (ptr Eq_91)
  OrigDataType: (ptr (fn T_96 ()))
T_96: (in fn080482B0() : void)
  Class: Eq_93
  DataType: void
  OrigDataType: void
T_97: (in __align : ptr32)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: (ptr (fn T_101 (T_100)))
T_98: (in fp : ptr32)
  Class: Eq_98
  DataType: ptr32
  OrigDataType: ptr32
T_99: (in 0x0000001C : word32)
  Class: Eq_99
  DataType: ui32
  OrigDataType: ui32
T_100: (in fp - 0x0000001C : word32)
  Class: Eq_100
  DataType: ptr32
  OrigDataType: ptr32
T_101: (in __align(fp - 0x0000001C) : void)
  Class: Eq_101
  DataType: void
  OrigDataType: void
T_102: (in mid : ptr32)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: (ptr (fn T_105 (T_104)))
T_103: (in signature of mid : void)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: 
T_104: (in 0x08049654 : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_105: (in mid(0x08049654) : void)
  Class: Eq_105
  DataType: void
  OrigDataType: void
T_106: (in fst : ptr32)
  Class: Eq_106
  DataType: (ptr Eq_106)
  OrigDataType: (ptr (fn T_109 (T_108)))
T_107: (in signature of fst : void)
  Class: Eq_106
  DataType: (ptr Eq_106)
  OrigDataType: 
T_108: (in 0x0804964A : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_109: (in fst(0x0804964A) : void)
  Class: Eq_109
  DataType: void
  OrigDataType: void
T_110: (in dwLoc08_28 : int32)
  Class: Eq_110
  DataType: int32
  OrigDataType: int32
T_111: (in 0x00000000 : word32)
  Class: Eq_110
  DataType: int32
  OrigDataType: word32
T_112: (in fn080482B0 : ptr32)
  Class: Eq_91
  DataType: (ptr Eq_91)
  OrigDataType: (ptr (fn T_113 ()))
T_113: (in fn080482B0() : void)
  Class: Eq_93
  DataType: void
  OrigDataType: void
T_114: (in 0x00000001 : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_115: (in dwLoc08_28 + 0x00000001 : word32)
  Class: Eq_110
  DataType: int32
  OrigDataType: word32
T_116: (in 0x00000004 : word32)
  Class: Eq_110
  DataType: int32
  OrigDataType: int32
T_117: (in dwLoc08_28 > 0x00000004 : bool)
  Class: Eq_117
  DataType: bool
  OrigDataType: bool
T_118: (in esi : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_119: (in _init : ptr32)
  Class: Eq_119
  DataType: (ptr Eq_119)
  OrigDataType: (ptr (fn T_121 (T_118)))
T_120: (in signature of _init : void)
  Class: Eq_119
  DataType: (ptr Eq_119)
  OrigDataType: 
T_121: (in _init(esi) : void)
  Class: Eq_121
  DataType: void
  OrigDataType: void
T_122: (in 0x00000000 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in 08049714 : ptr32)
  Class: Eq_123
  DataType: ptr32
  OrigDataType: ptr32
T_124: (in 08049714 : ptr32)
  Class: Eq_124
  DataType: ptr32
  OrigDataType: ptr32
T_125: (in 0x08049714 - 0x08049714 : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: 
T_126: (in 0x00000002 : word32)
  Class: Eq_126
  DataType: Eq_126
  OrigDataType: 
T_127: (in 0x08049714 - 0x08049714 >> 0x00000002 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: 
T_128: (in 0x00000000 >=u 0x08049714 - 0x08049714 >> 0x00000002 : bool)
  Class: Eq_128
  DataType: Eq_128
  OrigDataType: 
T_129: (in esp_47 : word32)
  Class: Eq_129
  DataType: word32
  OrigDataType: word32
T_130: (in ebp_48 : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in edi_49 : Eq_131)
  Class: Eq_131
  DataType: Eq_131
  OrigDataType: (union (int32 u1) (ptr32 u0))
T_132: (in esi_50 : uint32)
  Class: Eq_132
  DataType: uint32
  OrigDataType: uint32
T_133: (in ebx_51 : word32)
  Class: Eq_133
  DataType: word32
  OrigDataType: word32
T_134: (in SCZO_52 : byte)
  Class: Eq_134
  DataType: byte
  OrigDataType: byte
T_135: (in eax_53 : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_136: (in edx_54 : word32)
  Class: Eq_136
  DataType: word32
  OrigDataType: word32
T_137: (in SZO_55 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in C_56 : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_139: (in ecx_57 : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in 08049714 : ptr32)
  Class: Eq_140
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_143 t0000)))
T_141: (in 0x00000000 : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_142: (in 0x08049714 + 0x00000000 : word32)
  Class: Eq_142
  DataType: ptr32
  OrigDataType: ptr32
T_143: (in Mem0[0x08049714 + 0x00000000:word32] : word32)
  Class: Eq_143
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_144: (in 0x00000001 : word32)
  Class: Eq_144
  DataType: uint32
  OrigDataType: uint32
T_145: (in esi_50 + 0x00000001 : word32)
  Class: Eq_145
  DataType: Eq_145
  OrigDataType: uint32
T_146: (in 08049714 : ptr32)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: (union (int32 u1) (ptr32 u0))
T_147: (in 0x08049714 - edi_49 : word32)
  Class: Eq_147
  DataType: Eq_147
  OrigDataType: (union (int32 u1) (ptr32 u0))
T_148: (in 0x00000002 : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_149: (in 0x08049714 - edi_49 >> 0x00000002 : word32)
  Class: Eq_145
  DataType: Eq_145
  OrigDataType: (union (int32 u0) (uint32 u1))
T_150: (in esi_50 + 0x00000001 <u 0x08049714 - edi_49 >> 0x00000002 : bool)
  Class: Eq_150
  DataType: bool
  OrigDataType: bool
T_151: (in edi_18 : (arr (ptr code)))
  Class: Eq_151
  DataType: (ptr (arr (ptr code)))
  OrigDataType: (ptr (struct (0 (arr T_197) a0000)))
T_152: (in 08049714 : ptr32)
  Class: Eq_151
  DataType: (ptr (arr (ptr code)))
  OrigDataType: ptr32
T_153: (in esi_23 : word32)
  Class: Eq_153
  DataType: ui32
  OrigDataType: ui32
T_154: (in 08049714 : ptr32)
  Class: Eq_154
  DataType: ptr32
  OrigDataType: ptr32
T_155: (in 08049714 : ptr32)
  Class: Eq_155
  DataType: ptr32
  OrigDataType: ptr32
T_156: (in 0x08049714 - 0x08049714 : word32)
  Class: Eq_156
  DataType: Eq_156
  OrigDataType: 
T_157: (in 0x00000002 : word32)
  Class: Eq_157
  DataType: Eq_157
  OrigDataType: 
T_158: (in 0x08049714 - 0x08049714 >> 0x00000002 : word32)
  Class: Eq_158
  DataType: Eq_158
  OrigDataType: 
T_159: (in 0x00000001 : word32)
  Class: Eq_159
  DataType: Eq_159
  OrigDataType: 
T_160: (in (0x08049714 - 0x08049714 >> 0x00000002) - 0x00000001 : word32)
  Class: Eq_153
  DataType: ui32
  OrigDataType: 
T_161: (in 0xFFFFFFFF : word32)
  Class: Eq_153
  DataType: ui32
  OrigDataType: word32
T_162: (in esi_23 != 0xFFFFFFFF : bool)
  Class: Eq_162
  DataType: bool
  OrigDataType: bool
T_163: (in esp_45 : word32)
  Class: Eq_163
  DataType: word32
  OrigDataType: word32
T_164: (in ebp_46 : word32)
  Class: Eq_164
  DataType: word32
  OrigDataType: word32
T_165: (in esi_48 : word32)
  Class: Eq_165
  DataType: word32
  OrigDataType: word32
T_166: (in ebx_49 : word32)
  Class: Eq_166
  DataType: word32
  OrigDataType: word32
T_167: (in SCZO_50 : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_168: (in eax_51 : word32)
  Class: Eq_168
  DataType: word32
  OrigDataType: word32
T_169: (in Z_52 : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_170: (in SZO_53 : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_171: (in 0x00000004 : word32)
  Class: Eq_171
  DataType: ui32
  OrigDataType: ui32
T_172: (in esi_23 * 0x00000004 : word32)
  Class: Eq_172
  DataType: ui32
  OrigDataType: ui32
T_173: (in edi_18[esi_23 * 0x00000004] : word32)
  Class: Eq_173
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_174: (in 0x00000001 : word32)
  Class: Eq_174
  DataType: word32
  OrigDataType: word32
T_175: (in esi_48 - 0x00000001 : word32)
  Class: Eq_153
  DataType: ui32
  OrigDataType: word32
T_176: (in _fini : ptr32)
  Class: Eq_176
  DataType: (ptr Eq_176)
  OrigDataType: (ptr (fn T_178 ()))
T_177: (in signature of _fini : void)
  Class: Eq_176
  DataType: (ptr Eq_176)
  OrigDataType: 
T_178: (in _fini() : void)
  Class: Eq_178
  DataType: void
  OrigDataType: void
T_179: (in eax_14 : (ptr code))
  Class: Eq_179
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_180: (in 0x08049554 : word32)
  Class: Eq_180
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_181 t0000)))
T_181: (in Mem0[0x08049554:word32] : word32)
  Class: Eq_179
  DataType: (ptr code)
  OrigDataType: word32
T_182: (in 0xFFFFFFFF : word32)
  Class: Eq_179
  DataType: (ptr code)
  OrigDataType: word32
T_183: (in eax_14 != (<anonymous> *) 0xFFFFFFFF : bool)
  Class: Eq_183
  DataType: bool
  OrigDataType: bool
T_184: (in esp_30 : word32)
  Class: Eq_184
  DataType: word32
  OrigDataType: word32
T_185: (in ebp_31 : word32)
  Class: Eq_185
  DataType: word32
  OrigDataType: word32
T_186: (in ebx_32 : (ptr (ptr code)))
  Class: Eq_186
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_193 t0000)))
T_187: (in edx_33 : word32)
  Class: Eq_187
  DataType: word32
  OrigDataType: word32
T_188: (in eax_34 : word32)
  Class: Eq_188
  DataType: word32
  OrigDataType: word32
T_189: (in SCZO_35 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_190: (in Z_36 : byte)
  Class: Eq_190
  DataType: byte
  OrigDataType: byte
T_191: (in 0x00000000 : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_192: (in ebx_32 + 0x00000000 : word32)
  Class: Eq_192
  DataType: word32
  OrigDataType: word32
T_193: (in Mem0[ebx_32 + 0x00000000:word32] : word32)
  Class: Eq_179
  DataType: (ptr code)
  OrigDataType: word32
T_194: (in __do_global_dtors_aux : ptr32)
  Class: Eq_194
  DataType: (ptr Eq_194)
  OrigDataType: (ptr (fn T_196 ()))
T_195: (in signature of __do_global_dtors_aux : void)
  Class: Eq_194
  DataType: (ptr Eq_194)
  OrigDataType: 
T_196: (in __do_global_dtors_aux() : void)
  Class: Eq_196
  DataType: void
  OrigDataType: void
T_197:
  Class: Eq_197
  DataType: (ptr code)
  OrigDataType: (struct 0004 (0 T_173 t0000))
*/
typedef struct Globals {
	<anonymous> tFFFFFFFF;	// FFFFFFFF
	<anonymous> t80482A6;	// 80482A6
	<anonymous> t80482B6;	// 80482B6
	<anonymous> * ptr8049554;	// 8049554
	<anonymous> * ptr8049560;	// 8049560
	word32 dw8049564;	// 8049564
	<anonymous> * ptr8049638;	// 8049638
	<anonymous> * ptr8049640;	// 8049640
	<anonymous> * ptr8049644;	// 8049644
	<anonymous> ** ptr8049650;	// 8049650
	byte b804965C;	// 804965C
} Eq_1;

typedef void (Eq_3)();

typedef void (Eq_6)(word32);

typedef void (Eq_10)();

typedef void (Eq_20)(ptr32);

typedef void (Eq_25)();

typedef void (Eq_28)();

typedef void (Eq_91)();

typedef void (Eq_97)(ptr32);

typedef void (Eq_102)(word32);

typedef void (Eq_106)(word32);

typedef void (Eq_119)(word32);

typedef union Eq_131 {
	int32 u0;
	ptr32 u1;
} Eq_131;

typedef union Eq_145 {
	int32 u0;
	uint32 u1;
} Eq_145;

typedef union Eq_146 {
	int32 u0;
	ptr32 u1;
} Eq_146;

typedef union Eq_147 {
	int32 u0;
	ptr32 u1;
} Eq_147;

typedef void (Eq_176)();

typedef void (Eq_194)();

