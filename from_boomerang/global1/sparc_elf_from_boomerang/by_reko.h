// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (209B4 word32 dw209B4) (209F4 ptr32 ptr209F4))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_7: (fn void ())
	T_7 (in atexit : ptr32)
	T_8 (in signature of atexit : void)
	T_33 (in atexit : ptr32)
Eq_13: (fn ui32 (word32))
	T_13 (in _init : ptr32)
	T_14 (in signature of _init : void)
Eq_24: (fn void ())
	T_24 (in main : ptr32)
	T_25 (in signature of main : void)
Eq_27: (fn void ())
	T_27 (in exit : ptr32)
	T_28 (in signature of exit : void)
Eq_30: (fn void ())
	T_30 (in _exit : ptr32)
	T_31 (in signature of _exit : void)
Eq_39: (struct "Eq_39" (C (ptr byte) ptr000C) (10 (ptr (ptr (ptr code))) ptr0010) (14 (ptr word32) ptr0014) (1C word32 dw001C) (20 word32 dw0020) (24 word32 dw0024))
	T_39 (in l7_114 : (ptr Eq_39))
	T_43 (in fn000105A0(o7, 0x0001028C) : word32)
	T_124 (in l7_22 : (ptr Eq_39))
	T_127 (in fn000105A0(o7, 0x000101CC) : word32)
Eq_40: (fn (ptr Eq_39) (word32, word32))
	T_40 (in fn000105A0 : ptr32)
	T_41 (in signature of fn000105A0 : void)
	T_125 (in fn000105A0 : ptr32)
Eq_120: (fn void ())
	T_120 (in fn000208BC : ptr32)
	T_121 (in signature of fn000208BC : void)
Eq_141: (fn void ())
	T_141 (in fn000208C8 : ptr32)
	T_142 (in signature of fn000208C8 : void)
Eq_149: (fn void ())
	T_149 (in fn000208D4 : ptr32)
	T_150 (in signature of fn000208D4 : void)
Eq_155: (fn void ())
	T_155 (in printf : ptr32)
	T_156 (in signature of printf : void)
	T_164 (in printf : ptr32)
Eq_158: (fn void ())
	T_158 (in foo2 : ptr32)
	T_159 (in signature of foo2 : void)
Eq_161: (fn void ())
	T_161 (in foo1 : ptr32)
	T_162 (in signature of foo1 : void)
Eq_172: (struct "Eq_172" (18 (ptr Eq_177) ptr0018))
	T_172 (in l7_22 : (ptr Eq_172))
	T_176 (in fn0001078C(o7, 0x000100A0) : word32)
Eq_173: (fn (ptr Eq_172) (word32, word32))
	T_173 (in fn0001078C : ptr32)
	T_174 (in signature of fn0001078C : void)
Eq_177: (struct "Eq_177" (FFFFFFFC (ptr code) ptrFFFFFFFC))
	T_177 (in o1_25 : (ptr Eq_177))
	T_180 (in Mem0[l7_22 + 0x00000018:word32] : word32)
Eq_215: (fn void (word32))
	T_215 (in frame_dummy : ptr32)
	T_216 (in signature of frame_dummy : void)
Eq_218: (fn word32 (word32))
	T_218 (in __do_global_ctors_aux : ptr32)
	T_219 (in signature of __do_global_ctors_aux : void)
Eq_222: (fn void (word32))
	T_222 (in __do_global_dtors_aux : ptr32)
	T_223 (in signature of __do_global_dtors_aux : void)
Eq_225: (fn void ())
	T_225 (in _PROCEDURE_LINKAGE_TABLE_ : ptr32)
	T_226 (in signature of _PROCEDURE_LINKAGE_TABLE_ : void)
	T_228 (in _PROCEDURE_LINKAGE_TABLE_ : ptr32)
	T_230 (in _PROCEDURE_LINKAGE_TABLE_ : ptr32)
	T_232 (in _PROCEDURE_LINKAGE_TABLE_ : ptr32)
	T_234 (in _PROCEDURE_LINKAGE_TABLE_ : ptr32)
	T_236 (in _PROCEDURE_LINKAGE_TABLE_ : ptr32)
	T_238 (in _PROCEDURE_LINKAGE_TABLE_ : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in g1 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in o7 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_4: (in dwArg40 : word32)
  Class: Eq_4
  DataType: word32
  OrigDataType: word32
T_5: (in 0x00000000 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_6: (in g1 == 0x00000000 : bool)
  Class: Eq_6
  DataType: bool
  OrigDataType: bool
T_7: (in atexit : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_9 ()))
T_8: (in signature of atexit : void)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: 
T_9: (in atexit() : void)
  Class: Eq_9
  DataType: void
  OrigDataType: void
T_10: (in fp : ptr32)
  Class: Eq_10
  DataType: ptr32
  OrigDataType: ptr32
T_11: (in 0x00000044 : word32)
  Class: Eq_11
  DataType: int32
  OrigDataType: int32
T_12: (in fp + 0x00000044 : word32)
  Class: Eq_12
  DataType: ptr32
  OrigDataType: ptr32
T_13: (in _init : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_16 (T_3)))
T_14: (in signature of _init : void)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: 
T_15: (in o7 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_16: (in _init(o7) : word32)
  Class: Eq_16
  DataType: ui32
  OrigDataType: ui32
T_17: (in 0x00000002 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in _init(o7) << 0x00000002 : word32)
  Class: Eq_18
  DataType: int32
  OrigDataType: int32
T_19: (in 0x00000004 : word32)
  Class: Eq_19
  DataType: int32
  OrigDataType: int32
T_20: (in (_init(o7) << 0x00000002) + 0x00000004 : word32)
  Class: Eq_20
  DataType: int32
  OrigDataType: int32
T_21: (in fp + 0x00000044 + ((_init(o7) << 0x00000002) + 0x00000004) : word32)
  Class: Eq_21
  DataType: ptr32
  OrigDataType: ptr32
T_22: (in 0x000209F4 : word32)
  Class: Eq_22
  DataType: (ptr ptr32)
  OrigDataType: (ptr (struct (0 T_23 t0000)))
T_23: (in Mem24[0x000209F4:word32] : word32)
  Class: Eq_21
  DataType: ptr32
  OrigDataType: word32
T_24: (in main : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_26 ()))
T_25: (in signature of main : void)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: 
T_26: (in main() : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in exit : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_29 ()))
T_28: (in signature of exit : void)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: 
T_29: (in exit() : void)
  Class: Eq_29
  DataType: void
  OrigDataType: void
T_30: (in _exit : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_32 ()))
T_31: (in signature of _exit : void)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: 
T_32: (in _exit() : void)
  Class: Eq_32
  DataType: void
  OrigDataType: void
T_33: (in atexit : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_34 ()))
T_34: (in atexit() : void)
  Class: Eq_9
  DataType: void
  OrigDataType: void
T_35: (in l7 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_36: (in o7 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_37: (in o7 + l7 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_38: (in o7 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_39: (in l7_114 : (ptr Eq_39))
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (struct (C T_47 t000C) (10 T_57 t0010) (1C T_69 t001C)))
T_40: (in fn000105A0 : ptr32)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (fn T_43 (T_38, T_42)))
T_41: (in signature of fn000105A0 : void)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: 
T_42: (in 0x0001028C : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_43: (in fn000105A0(o7, 0x0001028C) : word32)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: word32
T_44: (in o2_26 : word32)
  Class: Eq_44
  DataType: word32
  OrigDataType: word32
T_45: (in 0x0000000C : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in l7_114 + 0x0000000C : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_47: (in Mem0[l7_114 + 0x0000000C:word32] : word32)
  Class: Eq_47
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_50 t0000)))
T_48: (in 0x00000000 : word32)
  Class: Eq_48
  DataType: word32
  OrigDataType: word32
T_49: (in Mem0[l7_114 + 0x0000000C:word32] + 0x00000000 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in Mem0[Mem0[l7_114 + 0x0000000C:word32] + 0x00000000:byte] : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in (word32) *l7_114->ptr000C : word32)
  Class: Eq_44
  DataType: word32
  OrigDataType: word32
T_52: (in 0x00000000 : word32)
  Class: Eq_44
  DataType: word32
  OrigDataType: word32
T_53: (in o2_26 != 0x00000000 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in o0_54 : (ptr (ptr (ptr code))))
  Class: Eq_54
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_61 t0000)))
T_55: (in 0x00000010 : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in l7_114 + 0x00000010 : word32)
  Class: Eq_56
  DataType: ptr32
  OrigDataType: ptr32
T_57: (in Mem0[l7_114 + 0x00000010:word32] : word32)
  Class: Eq_54
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: word32
T_58: (in o1_56 : (ptr code))
  Class: Eq_58
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_59: (in 0x00000000 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_60: (in o0_54 + 0x00000000 : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_61: (in Mem0[o0_54 + 0x00000000:word32] : word32)
  Class: Eq_61
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_64 t0000)))
T_62: (in 0x00000000 : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_63: (in Mem0[o0_54 + 0x00000000:word32] + 0x00000000 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_64: (in Mem0[Mem0[o0_54 + 0x00000000:word32] + 0x00000000:word32] : word32)
  Class: Eq_58
  DataType: (ptr code)
  OrigDataType: word32
T_65: (in 0x00000000 : word32)
  Class: Eq_58
  DataType: (ptr code)
  OrigDataType: word32
T_66: (in o1_56 == null : bool)
  Class: Eq_66
  DataType: bool
  OrigDataType: bool
T_67: (in 0x0000001C : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in l7_114 + 0x0000001C : word32)
  Class: Eq_68
  DataType: ptr32
  OrigDataType: ptr32
T_69: (in Mem0[l7_114 + 0x0000001C:word32] : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_70: (in 0x00000000 : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_71: (in l7_114->dw001C == 0x00000000 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in l0_118 : (ptr (ptr (ptr code))))
  Class: Eq_54
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_61 t0000)))
T_73: (in o0_126 : (ptr (ptr code)))
  Class: Eq_61
  DataType: (ptr (ptr code))
  OrigDataType: ptr32
T_74: (in 0x00000000 : word32)
  Class: Eq_74
  DataType: word32
  OrigDataType: word32
T_75: (in o0_54 + 0x00000000 : word32)
  Class: Eq_75
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (ptr (struct (0 T_64 t0000))))
T_76: (in Mem0[o0_54 + 0x00000000:word32] : word32)
  Class: Eq_61
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_64 t0000)))
T_77: (in 0x00000004 : word32)
  Class: Eq_77
  DataType: int32
  OrigDataType: int32
T_78: (in Mem0[o0_54 + 0x00000000:word32] + 0x00000004 : word32)
  Class: Eq_61
  DataType: (ptr (ptr code))
  OrigDataType: ptr32
T_79: (in 0x00000000 : word32)
  Class: Eq_79
  DataType: word32
  OrigDataType: word32
T_80: (in l0_118 + 0x00000000 : word32)
  Class: Eq_80
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (ptr (struct (0 T_64 t0000))))
T_81: (in Mem96[l0_118 + 0x00000000:word32] : word32)
  Class: Eq_61
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_64 t0000)))
T_82: (in sp_97 : word32)
  Class: Eq_82
  DataType: word32
  OrigDataType: word32
T_83: (in i0_98 : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_84: (in o0_99 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in i1_100 : word32)
  Class: Eq_85
  DataType: word32
  OrigDataType: word32
T_86: (in o1_101 : word32)
  Class: Eq_86
  DataType: word32
  OrigDataType: word32
T_87: (in i2_102 : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_88: (in o2_103 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in i3_104 : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_90: (in o3_105 : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_91: (in i4_106 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_92: (in o4_107 : word32)
  Class: Eq_92
  DataType: word32
  OrigDataType: word32
T_93: (in i5_108 : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_94: (in o5_109 : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_95: (in i6_110 : word32)
  Class: Eq_95
  DataType: word32
  OrigDataType: word32
T_96: (in i7_111 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in o7_112 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in l1_113 : word32)
  Class: Eq_98
  DataType: word32
  OrigDataType: word32
T_99: (in g0_115 : word32)
  Class: Eq_99
  DataType: word32
  OrigDataType: word32
T_100: (in NZVC_116 : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in Z_117 : bool)
  Class: Eq_101
  DataType: bool
  OrigDataType: bool
T_102: (in o0_119 : (ptr (ptr code)))
  Class: Eq_61
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_58 t0000)))
T_103: (in 0x00000000 : word32)
  Class: Eq_103
  DataType: word32
  OrigDataType: word32
T_104: (in l0_118 + 0x00000000 : word32)
  Class: Eq_104
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (ptr (struct (0 T_64 t0000))))
T_105: (in Mem96[l0_118 + 0x00000000:word32] : word32)
  Class: Eq_61
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_64 t0000)))
T_106: (in 0x00000000 : word32)
  Class: Eq_106
  DataType: word32
  OrigDataType: word32
T_107: (in o0_119 + 0x00000000 : word32)
  Class: Eq_107
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_108: (in Mem96[o0_119 + 0x00000000:word32] : word32)
  Class: Eq_58
  DataType: (ptr code)
  OrigDataType: word32
T_109: (in 0x00000000 : word32)
  Class: Eq_58
  DataType: (ptr code)
  OrigDataType: word32
T_110: (in *o0_119 != null : bool)
  Class: Eq_110
  DataType: bool
  OrigDataType: bool
T_111: (in 0x00000004 : word32)
  Class: Eq_111
  DataType: int32
  OrigDataType: int32
T_112: (in o0_119 + 0x00000004 : word32)
  Class: Eq_61
  DataType: (ptr (ptr code))
  OrigDataType: ptr32
T_113: (in 0x01 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_114: (in 0x0000000C : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_115: (in l7_114 + 0x0000000C : word32)
  Class: Eq_115
  DataType: (ptr (ptr byte))
  OrigDataType: (ptr (ptr (struct (0 T_50 t0000))))
T_116: (in Mem0[l7_114 + 0x0000000C:word32] : word32)
  Class: Eq_47
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_50 t0000)))
T_117: (in 0x00000000 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in Mem0[l7_114 + 0x0000000C:word32] + 0x00000000 : word32)
  Class: Eq_118
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_119: (in Mem89[Mem0[l7_114 + 0x0000000C:word32] + 0x00000000:byte] : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_120: (in fn000208BC : ptr32)
  Class: Eq_120
  DataType: (ptr Eq_120)
  OrigDataType: (ptr (fn T_122 ()))
T_121: (in signature of fn000208BC : void)
  Class: Eq_120
  DataType: (ptr Eq_120)
  OrigDataType: 
T_122: (in fn000208BC() : void)
  Class: Eq_122
  DataType: void
  OrigDataType: void
T_123: (in o7 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_124: (in l7_22 : (ptr Eq_39))
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (struct (14 T_135 t0014) (20 T_130 t0020) (24 T_146 t0024)))
T_125: (in fn000105A0 : ptr32)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (fn T_127 (T_123, T_126)))
T_126: (in 0x000101CC : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_127: (in fn000105A0(o7, 0x000101CC) : word32)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: word32
T_128: (in 0x00000020 : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in l7_22 + 0x00000020 : word32)
  Class: Eq_129
  DataType: word32
  OrigDataType: word32
T_130: (in Mem0[l7_22 + 0x00000020:word32] : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in 0x00000000 : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_132: (in l7_22->dw0020 == 0x00000000 : bool)
  Class: Eq_132
  DataType: bool
  OrigDataType: bool
T_133: (in 0x00000014 : word32)
  Class: Eq_133
  DataType: word32
  OrigDataType: word32
T_134: (in l7_22 + 0x00000014 : word32)
  Class: Eq_134
  DataType: ptr32
  OrigDataType: ptr32
T_135: (in Mem0[l7_22 + 0x00000014:word32] : word32)
  Class: Eq_135
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_138 t0000)))
T_136: (in 0x00000000 : word32)
  Class: Eq_136
  DataType: word32
  OrigDataType: word32
T_137: (in Mem0[l7_22 + 0x00000014:word32] + 0x00000000 : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_138: (in Mem0[Mem0[l7_22 + 0x00000014:word32] + 0x00000000:word32] : word32)
  Class: Eq_138
  DataType: word32
  OrigDataType: word32
T_139: (in 0x00000000 : word32)
  Class: Eq_138
  DataType: word32
  OrigDataType: word32
T_140: (in *l7_22->ptr0014 == 0x00000000 : bool)
  Class: Eq_140
  DataType: bool
  OrigDataType: bool
T_141: (in fn000208C8 : ptr32)
  Class: Eq_141
  DataType: (ptr Eq_141)
  OrigDataType: (ptr (fn T_143 ()))
T_142: (in signature of fn000208C8 : void)
  Class: Eq_141
  DataType: (ptr Eq_141)
  OrigDataType: 
T_143: (in fn000208C8() : void)
  Class: Eq_143
  DataType: void
  OrigDataType: void
T_144: (in 0x00000024 : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_145: (in l7_22 + 0x00000024 : word32)
  Class: Eq_145
  DataType: ptr32
  OrigDataType: ptr32
T_146: (in Mem0[l7_22 + 0x00000024:word32] : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in 0x00000000 : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_148: (in l7_22->dw0024 == 0x00000000 : bool)
  Class: Eq_148
  DataType: bool
  OrigDataType: bool
T_149: (in fn000208D4 : ptr32)
  Class: Eq_149
  DataType: (ptr Eq_149)
  OrigDataType: (ptr (fn T_151 ()))
T_150: (in signature of fn000208D4 : void)
  Class: Eq_149
  DataType: (ptr Eq_149)
  OrigDataType: 
T_151: (in fn000208D4() : void)
  Class: Eq_151
  DataType: void
  OrigDataType: void
T_152: (in 0x0000000C : word32)
  Class: Eq_152
  DataType: word32
  OrigDataType: word32
T_153: (in 0x000209B4 : word32)
  Class: Eq_153
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_154 t0000)))
T_154: (in Mem22[0x000209B4:word32] : word32)
  Class: Eq_152
  DataType: word32
  OrigDataType: word32
T_155: (in printf : ptr32)
  Class: Eq_155
  DataType: (ptr Eq_155)
  OrigDataType: (ptr (fn T_157 ()))
T_156: (in signature of printf : void)
  Class: Eq_155
  DataType: (ptr Eq_155)
  OrigDataType: 
T_157: (in printf() : void)
  Class: Eq_157
  DataType: void
  OrigDataType: void
T_158: (in foo2 : ptr32)
  Class: Eq_158
  DataType: (ptr Eq_158)
  OrigDataType: (ptr (fn T_160 ()))
T_159: (in signature of foo2 : void)
  Class: Eq_158
  DataType: (ptr Eq_158)
  OrigDataType: 
T_160: (in foo2() : void)
  Class: Eq_160
  DataType: void
  OrigDataType: void
T_161: (in foo1 : ptr32)
  Class: Eq_161
  DataType: (ptr Eq_161)
  OrigDataType: (ptr (fn T_163 ()))
T_162: (in signature of foo1 : void)
  Class: Eq_161
  DataType: (ptr Eq_161)
  OrigDataType: 
T_163: (in foo1() : void)
  Class: Eq_163
  DataType: void
  OrigDataType: void
T_164: (in printf : ptr32)
  Class: Eq_155
  DataType: (ptr Eq_155)
  OrigDataType: (ptr (fn T_165 ()))
T_165: (in printf() : void)
  Class: Eq_157
  DataType: void
  OrigDataType: void
T_166: (in l7 : word32)
  Class: Eq_166
  DataType: word32
  OrigDataType: word32
T_167: (in o7 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_168: (in o7 + l7 : word32)
  Class: Eq_166
  DataType: word32
  OrigDataType: word32
T_169: (in l0 : (ptr word32))
  Class: Eq_169
  DataType: (ptr word32)
  OrigDataType: word32
T_170: (in o7 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_171: (in l0_30 : (ptr word32))
  Class: Eq_169
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 word32 dw0000)))
T_172: (in l7_22 : (ptr Eq_172))
  Class: Eq_172
  DataType: (ptr Eq_172)
  OrigDataType: (ptr (struct (18 T_180 t0018)))
T_173: (in fn0001078C : ptr32)
  Class: Eq_173
  DataType: (ptr Eq_173)
  OrigDataType: (ptr (fn T_176 (T_170, T_175)))
T_174: (in signature of fn0001078C : void)
  Class: Eq_173
  DataType: (ptr Eq_173)
  OrigDataType: 
T_175: (in 0x000100A0 : word32)
  Class: Eq_166
  DataType: word32
  OrigDataType: word32
T_176: (in fn0001078C(o7, 0x000100A0) : word32)
  Class: Eq_172
  DataType: (ptr Eq_172)
  OrigDataType: word32
T_177: (in o1_25 : (ptr Eq_177))
  Class: Eq_177
  DataType: (ptr Eq_177)
  OrigDataType: (ptr (struct (FFFFFFFC T_184 tFFFFFFFC)))
T_178: (in 0x00000018 : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in l7_22 + 0x00000018 : word32)
  Class: Eq_179
  DataType: word32
  OrigDataType: word32
T_180: (in Mem0[l7_22 + 0x00000018:word32] : word32)
  Class: Eq_177
  DataType: (ptr Eq_177)
  OrigDataType: word32
T_181: (in o0_26 : (ptr code))
  Class: Eq_181
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_182: (in -4 : int32)
  Class: Eq_182
  DataType: int32
  OrigDataType: int32
T_183: (in o1_25 + -4 : word32)
  Class: Eq_183
  DataType: word32
  OrigDataType: word32
T_184: (in Mem0[o1_25 + -4:word32] : word32)
  Class: Eq_181
  DataType: (ptr code)
  OrigDataType: word32
T_185: (in 0xFFFFFFFF : word32)
  Class: Eq_181
  DataType: (ptr code)
  OrigDataType: word32
T_186: (in o0_26 == (<anonymous> *) 0xFFFFFFFF : bool)
  Class: Eq_186
  DataType: bool
  OrigDataType: bool
T_187: (in sp_55 : word32)
  Class: Eq_187
  DataType: word32
  OrigDataType: word32
T_188: (in i0_56 : word32)
  Class: Eq_188
  DataType: word32
  OrigDataType: word32
T_189: (in o0_57 : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_190: (in i1_58 : word32)
  Class: Eq_190
  DataType: word32
  OrigDataType: word32
T_191: (in o1_59 : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_192: (in i2_60 : word32)
  Class: Eq_192
  DataType: word32
  OrigDataType: word32
T_193: (in o2_61 : word32)
  Class: Eq_193
  DataType: word32
  OrigDataType: word32
T_194: (in i3_62 : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_195: (in o3_63 : word32)
  Class: Eq_195
  DataType: word32
  OrigDataType: word32
T_196: (in i4_64 : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_197: (in o4_65 : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_198: (in i5_66 : word32)
  Class: Eq_198
  DataType: word32
  OrigDataType: word32
T_199: (in o5_67 : word32)
  Class: Eq_199
  DataType: word32
  OrigDataType: word32
T_200: (in i6_68 : word32)
  Class: Eq_200
  DataType: word32
  OrigDataType: word32
T_201: (in i7_69 : word32)
  Class: Eq_201
  DataType: word32
  OrigDataType: word32
T_202: (in o7_70 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_203: (in l7_71 : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_204: (in g0_72 : word32)
  Class: Eq_204
  DataType: word32
  OrigDataType: word32
T_205: (in NZVC_73 : byte)
  Class: Eq_205
  DataType: byte
  OrigDataType: byte
T_206: (in Z_74 : bool)
  Class: Eq_206
  DataType: bool
  OrigDataType: bool
T_207: (in 0x00000000 : word32)
  Class: Eq_207
  DataType: word32
  OrigDataType: word32
T_208: (in l0_30 + 0x00000000 : word32)
  Class: Eq_208
  DataType: word32
  OrigDataType: word32
T_209: (in Mem0[l0_30 + 0x00000000:word32] : word32)
  Class: Eq_209
  DataType: word32
  OrigDataType: word32
T_210: (in 0xFFFFFFFF : word32)
  Class: Eq_209
  DataType: word32
  OrigDataType: word32
T_211: (in *l0_30 != 0xFFFFFFFF : bool)
  Class: Eq_211
  DataType: bool
  OrigDataType: bool
T_212: (in 0xFFFFFFFC : word32)
  Class: Eq_212
  DataType: int32
  OrigDataType: int32
T_213: (in o1_25 + 0xFFFFFFFC : word32)
  Class: Eq_169
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_214: (in l0 : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_215: (in frame_dummy : ptr32)
  Class: Eq_215
  DataType: (ptr Eq_215)
  OrigDataType: (ptr (fn T_217 (T_15)))
T_216: (in signature of frame_dummy : void)
  Class: Eq_215
  DataType: (ptr Eq_215)
  OrigDataType: 
T_217: (in frame_dummy(o7) : void)
  Class: Eq_217
  DataType: void
  OrigDataType: void
T_218: (in __do_global_ctors_aux : ptr32)
  Class: Eq_218
  DataType: (ptr Eq_218)
  OrigDataType: (ptr (fn T_220 (T_15)))
T_219: (in signature of __do_global_ctors_aux : void)
  Class: Eq_218
  DataType: (ptr Eq_218)
  OrigDataType: 
T_220: (in __do_global_ctors_aux(o7) : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_221: (in o7 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_222: (in __do_global_dtors_aux : ptr32)
  Class: Eq_222
  DataType: (ptr Eq_222)
  OrigDataType: (ptr (fn T_224 (T_221)))
T_223: (in signature of __do_global_dtors_aux : void)
  Class: Eq_222
  DataType: (ptr Eq_222)
  OrigDataType: 
T_224: (in __do_global_dtors_aux(o7) : void)
  Class: Eq_224
  DataType: void
  OrigDataType: void
T_225: (in _PROCEDURE_LINKAGE_TABLE_ : ptr32)
  Class: Eq_225
  DataType: (ptr Eq_225)
  OrigDataType: (ptr (fn T_227 ()))
T_226: (in signature of _PROCEDURE_LINKAGE_TABLE_ : void)
  Class: Eq_225
  DataType: (ptr Eq_225)
  OrigDataType: 
T_227: (in _PROCEDURE_LINKAGE_TABLE_() : void)
  Class: Eq_227
  DataType: void
  OrigDataType: void
T_228: (in _PROCEDURE_LINKAGE_TABLE_ : ptr32)
  Class: Eq_225
  DataType: (ptr Eq_225)
  OrigDataType: (ptr (fn T_229 ()))
T_229: (in _PROCEDURE_LINKAGE_TABLE_() : void)
  Class: Eq_227
  DataType: void
  OrigDataType: void
T_230: (in _PROCEDURE_LINKAGE_TABLE_ : ptr32)
  Class: Eq_225
  DataType: (ptr Eq_225)
  OrigDataType: (ptr (fn T_231 ()))
T_231: (in _PROCEDURE_LINKAGE_TABLE_() : void)
  Class: Eq_227
  DataType: void
  OrigDataType: void
T_232: (in _PROCEDURE_LINKAGE_TABLE_ : ptr32)
  Class: Eq_225
  DataType: (ptr Eq_225)
  OrigDataType: (ptr (fn T_233 ()))
T_233: (in _PROCEDURE_LINKAGE_TABLE_() : void)
  Class: Eq_227
  DataType: void
  OrigDataType: void
T_234: (in _PROCEDURE_LINKAGE_TABLE_ : ptr32)
  Class: Eq_225
  DataType: (ptr Eq_225)
  OrigDataType: (ptr (fn T_235 ()))
T_235: (in _PROCEDURE_LINKAGE_TABLE_() : void)
  Class: Eq_227
  DataType: void
  OrigDataType: void
T_236: (in _PROCEDURE_LINKAGE_TABLE_ : ptr32)
  Class: Eq_225
  DataType: (ptr Eq_225)
  OrigDataType: (ptr (fn T_237 ()))
T_237: (in _PROCEDURE_LINKAGE_TABLE_() : void)
  Class: Eq_227
  DataType: void
  OrigDataType: void
T_238: (in _PROCEDURE_LINKAGE_TABLE_ : ptr32)
  Class: Eq_225
  DataType: (ptr Eq_225)
  OrigDataType: (ptr (fn T_239 ()))
T_239: (in _PROCEDURE_LINKAGE_TABLE_() : void)
  Class: Eq_227
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
	<anonymous> tFFFFFFFF;	// FFFFFFFF
	word32 dw209B4;	// 209B4
	ptr32 ptr209F4;	// 209F4
} Eq_1;

typedef void (Eq_7)();

typedef ui32 (Eq_13)(word32);

typedef void (Eq_24)();

typedef void (Eq_27)();

typedef void (Eq_30)();

typedef struct Eq_39 {
	byte * ptr000C;	// C
	<anonymous> *** ptr0010;	// 10
	word32 * ptr0014;	// 14
	word32 dw001C;	// 1C
	word32 dw0020;	// 20
	word32 dw0024;	// 24
} Eq_39;

typedef Eq_39 * (Eq_40)(word32, word32);

typedef void (Eq_120)();

typedef void (Eq_141)();

typedef void (Eq_149)();

typedef void (Eq_155)();

typedef void (Eq_158)();

typedef void (Eq_161)();

typedef struct Eq_172 {
	struct Eq_177 * ptr0018;	// 18
} Eq_172;

typedef Eq_172 * (Eq_173)(word32, word32);

typedef struct Eq_177 {
	<anonymous> * ptrFFFFFFFC;	// FFFFFFFC
} Eq_177;

typedef void (Eq_215)(word32);

typedef word32 (Eq_218)(word32);

typedef void (Eq_222)(word32);

typedef void (Eq_225)();

