// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (1018 (arr Eq_198) a1018) (1058 word32 dw1058) (1182 word16 w1182) (1186 word16 w1186) (118A word16 w118A) (118E word16 w118E) (1192 word16 w1192) (1196 word16 w1196) (119B ui8 b119B))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_6: (struct "Eq_6" (9C (ptr Eq_271) ptr009C))
	T_6 (in a6_3 : (ptr Eq_6))
	T_10 (in Mem0[0x00000004 + 0x00000000:word32] : word32)
Eq_17: (fn (ptr (arr Eq_66)) (word32, word32))
	T_17 (in AllocMem : ptr32)
	T_18 (in signature of AllocMem : void)
Eq_37: (fn uint32 (word32))
	T_37 (in __swap : ptr32)
Eq_61: (fn bool (Eq_66, word32, byte))
	T_61 (in __bset : ptr32)
Eq_66: (struct "Eq_66" 0001 (0 (arr Eq_66) a0000))
	T_66 (in Mem55[a1_47 + (int32) (v29_205 >> 0x0003):byte] : byte)
	T_70 (in Mem55[a1_47 + (int32) (v29_205 >> 0x0003):byte] : byte)
	T_279
	T_280
	T_281
	T_282
Eq_113: (fn word32 (word32))
	T_113 (in __swap : ptr32)
Eq_121: (struct "Eq_121" 006C (1F18 word32 dw1F18) (1F4E word32 dw1F4E))
	T_121 (in a1_104 : (ptr Eq_121))
	T_122 (in d0_10 + 0x00005460 : word32)
	T_144 (in a1_104 + 0x0000006C : word32)
Eq_198: (struct "Eq_198" 0001 (0 (arr Eq_198) a0000))
	T_198 (in Mem136[0x00001018 + (int32) v48_157:byte] : byte)
	T_283
	T_284
Eq_223: (union "Eq_223" (int32 u0) (uint32 u1))
	T_223 (in DPB(d0_162, (word16) d0_162 >>u 0x0003, 0) : word32)
Eq_227: (struct "Eq_227" 0001 (0 (arr Eq_227) a0000))
	T_227 (in Mem174[0x00001018 + (int32) v57_178:byte] : byte)
	T_285
	T_286
Eq_228: (union "Eq_228" (int32 u0) (uint32 u1))
	T_228 (in (int32) globals->a1018[(int32) v57_178] : int32)
Eq_242: (fn word32 (word32))
	T_242 (in __swap : ptr32)
Eq_252: (fn bool (byte, word16))
	T_252 (in __btst : ptr32)
Eq_264: (fn void ((ptr (arr Eq_66)), word32))
	T_264 (in FreeMem : ptr32)
	T_265 (in signature of FreeMem : void)
Eq_271: (struct "Eq_271" (26 word32 dw0026))
	T_271 (in Mem197[a6_3 + 156:word32] : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in d0 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in d2 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_4: (in d4 : word32)
  Class: Eq_4
  DataType: word32
  OrigDataType: word32
T_5: (in d5 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_6: (in a6_3 : (ptr Eq_6))
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (struct (9C T_271 t009C)))
T_7: (in 00000004 : ptr32)
  Class: Eq_7
  DataType: (ptr (ptr Eq_6))
  OrigDataType: (ptr (struct (0 T_10 t0000)))
T_8: (in 0x00000000 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in 0x00000004 + 0x00000000 : word32)
  Class: Eq_9
  DataType: ptr32
  OrigDataType: ptr32
T_10: (in Mem0[0x00000004 + 0x00000000:word32] : word32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: word32
T_11: (in d0_5 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in 0xA8C0 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in DPB(d0, 0xA8C0, 0) : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_14: (in d1_63 : uint32)
  Class: Eq_14
  DataType: uint32
  OrigDataType: uint32
T_15: (in 0x00010002 : word32)
  Class: Eq_14
  DataType: uint32
  OrigDataType: word32
T_16: (in d0_10 : (arr Eq_66))
  Class: Eq_16
  DataType: (ptr (arr Eq_66))
  OrigDataType: word32
T_17: (in AllocMem : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_22 (T_11, T_21)))
T_18: (in signature of AllocMem : void)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: 
T_19: (in byteSize : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: 
T_20: (in requirements : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: 
T_21: (in 0x00010002 : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_22: (in AllocMem(d0_5, 0x00010002) : word32)
  Class: Eq_16
  DataType: (ptr (arr Eq_66))
  OrigDataType: word32
T_23: (in true : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24: (in 0x4000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in 00DFF09A : ptr32)
  Class: Eq_25
  DataType: (ptr word16)
  OrigDataType: (ptr (struct (0 T_28 t0000)))
T_26: (in 0x00000000 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_27: (in 0x00DFF09A + 0x00000000 : word32)
  Class: Eq_27
  DataType: ptr32
  OrigDataType: ptr32
T_28: (in Mem45[0x00DFF09A + 0x00000000:word16] : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_29: (in 0x000006C4 : word32)
  Class: Eq_29
  DataType: word32
  OrigDataType: word32
T_30: (in d0_10 + 0x000006C4 : word32)
  Class: Eq_30
  DataType: word32
  OrigDataType: word32
T_31: (in (word16) (d0_10 + 1732)->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in 00001186 : ptr32)
  Class: Eq_32
  DataType: (ptr word16)
  OrigDataType: (ptr (struct (0 T_35 t0000)))
T_33: (in 0x00000000 : word32)
  Class: Eq_33
  DataType: word32
  OrigDataType: word32
T_34: (in 0x00001186 + 0x00000000 : word32)
  Class: Eq_34
  DataType: ptr32
  OrigDataType: ptr32
T_35: (in Mem52[0x00001186 + 0x00000000:word16] : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_36: (in d0_208 : uint32)
  Class: Eq_36
  DataType: uint32
  OrigDataType: uint32
T_37: (in __swap : ptr32)
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (fn T_39 (T_38)))
T_38: (in d0_10 + 0x000006C4 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in __swap((d0_10 + 1732)->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000) : word32)
  Class: Eq_36
  DataType: uint32
  OrigDataType: word32
T_40: (in (word16) d0_208 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in 00001182 : ptr32)
  Class: Eq_41
  DataType: (ptr word16)
  OrigDataType: (ptr (struct (0 T_44 t0000)))
T_42: (in 0x00000000 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in 0x00001182 + 0x00000000 : word32)
  Class: Eq_43
  DataType: ptr32
  OrigDataType: ptr32
T_44: (in Mem55[0x00001182 + 0x00000000:word16] : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_45: (in a1_47 : (arr Eq_66))
  Class: Eq_16
  DataType: (ptr (arr Eq_66))
  OrigDataType: (ptr (struct (0 (arr T_279) a0000)))
T_46: (in d4_100 : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_47: (in 0x018F : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in DPB(d4, 0x018F, 0) : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_49: (in 0x00000001 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in d5 - 0x00000001 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_51: (in 0xFFFFFFFF : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_52: (in d5 != 0xFFFFFFFF : bool)
  Class: Eq_52
  DataType: bool
  OrigDataType: bool
T_53: (in v29_205 : cu16)
  Class: Eq_53
  DataType: cu16
  OrigDataType: cu16
T_54: (in (word16) d5 : word16)
  Class: Eq_53
  DataType: cu16
  OrigDataType: word16
T_55: (in (word16) d5 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in (byte) (word16) d5 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in -(byte) (word16) d5 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in 0x01 : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in -(byte) (word16) d5 - 0x01 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in DPB(d2, -(byte) (word16) d5 - 0x01, 0) : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_61: (in __bset : ptr32)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: (ptr (fn T_72 (T_66, T_3, T_71)))
T_62: (in 0x0003 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in v29_205 >> 0x0003 : word16)
  Class: Eq_63
  DataType: uint16
  OrigDataType: uint16
T_64: (in (int32) (v29_205 >> 0x0003) : int32)
  Class: Eq_64
  DataType: int32
  OrigDataType: int32
T_65: (in a1_47 + (int32) (v29_205 >> 0x0003) : word32)
  Class: Eq_65
  DataType: (ptr Eq_66)
  OrigDataType: (ptr (struct (0 T_66 t0000)))
T_66: (in Mem55[a1_47 + (int32) (v29_205 >> 0x0003):byte] : byte)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: byte
T_67: (in v29_205 >> 0x0003 : word16)
  Class: Eq_67
  DataType: uint16
  OrigDataType: uint16
T_68: (in (int32) (v29_205 >> 0x0003) : int32)
  Class: Eq_68
  DataType: int32
  OrigDataType: int32
T_69: (in a1_47 + (int32) (v29_205 >> 0x0003) : word32)
  Class: Eq_69
  DataType: (ptr Eq_66)
  OrigDataType: (ptr (struct (0 T_70 t0000)))
T_70: (in Mem55[a1_47 + (int32) (v29_205 >> 0x0003):byte] : byte)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: byte
T_71: (in out Mem55[a1_47 + (int32) (v29_205 >> 0x0003):byte] : ptr32)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in __bset((&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&a1_47[(int32) (v29_205 >> 0x0003)].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0], d2, out (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&a1_47[(int32) (v29_205 >> 0x0003)].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0].a0000)[0]) : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
T_73: (in d0_79 : uint32)
  Class: Eq_73
  DataType: uint32
  OrigDataType: uint32
T_74: (in v29_205 >> 0x0003 : word16)
  Class: Eq_74
  DataType: uint16
  OrigDataType: uint16
T_75: (in DPB(d0_79, v29_205 >>u 0x0003, 0) : word32)
  Class: Eq_36
  DataType: uint32
  OrigDataType: word32
T_76: (in (word16) d4_100 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in 0x01B0 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in (word16) d4_100 - 0x01B0 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in DPB(d0_208, (word16) d4_100 - 0x01B0, 0) : word32)
  Class: Eq_79
  DataType: uint32
  OrigDataType: uint32
T_80: (in (word16) d4_100 : word16)
  Class: Eq_80
  DataType: uint16
  OrigDataType: uint16
T_81: (in DPB(d0_208, (word16) d4_100 - 0x01B0, 0) * (word16) d4_100 : word32)
  Class: Eq_73
  DataType: uint32
  OrigDataType: uint32
T_82: (in (word16) d5 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in 0x01C0 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in (word16) d5 - 0x01C0 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in DPB(d1_63, (word16) d5 - 0x01C0, 0) : word32)
  Class: Eq_85
  DataType: uint32
  OrigDataType: uint32
T_86: (in (word16) d5 : word16)
  Class: Eq_86
  DataType: uint16
  OrigDataType: uint16
T_87: (in DPB(d1_63, (word16) d5 - 0x01C0, 0) * (word16) d5 : word32)
  Class: Eq_14
  DataType: uint32
  OrigDataType: uint32
T_88: (in v27_85 : cui16)
  Class: Eq_88
  DataType: cui16
  OrigDataType: cui16
T_89: (in (word16) d0_79 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in (word16) d1_63 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in (word16) d0_79 + (word16) d1_63 : word16)
  Class: Eq_88
  DataType: cui16
  OrigDataType: word16
T_92: (in 0x0800 : word16)
  Class: Eq_92
  DataType: cui16
  OrigDataType: cui16
T_93: (in v27_85 & 0x0800 : word16)
  Class: Eq_93
  DataType: cui16
  OrigDataType: cui16
T_94: (in DPB(d0_79, v27_85 & 0x0800, 0) : word32)
  Class: Eq_36
  DataType: uint32
  OrigDataType: uint32
T_95: (in v27_85 & 0x0800 : word16)
  Class: Eq_95
  DataType: cui16
  OrigDataType: cui16
T_96: (in 0x0000 : word16)
  Class: Eq_95
  DataType: cui16
  OrigDataType: word16
T_97: (in (v27_85 & 0x0800) == 0x0000 : bool)
  Class: Eq_97
  DataType: bool
  OrigDataType: bool
T_98: (in 0x00000036 : word32)
  Class: Eq_98
  DataType: int32
  OrigDataType: int32
T_99: (in a1_47 + 0x00000036 : word32)
  Class: Eq_16
  DataType: (ptr (arr Eq_66))
  OrigDataType: ptr32
T_100: (in 0x00000001 : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_101: (in d4_100 - 0x00000001 : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_102: (in 0xFFFFFFFF : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_103: (in d4_100 != 0xFFFFFFFF : bool)
  Class: Eq_103
  DataType: bool
  OrigDataType: bool
T_104: (in 0x01AF : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in DPB(d5, 0x01AF, 0) : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_106: (in 0x00005460 : word32)
  Class: Eq_106
  DataType: word32
  OrigDataType: word32
T_107: (in d0_10 + 0x00005460 : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in (word16) (d0_10 + 21600)->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in 00001196 : ptr32)
  Class: Eq_109
  DataType: (ptr word16)
  OrigDataType: (ptr (struct (0 T_112 t0000)))
T_110: (in 0x00000000 : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: word32
T_111: (in 0x00001196 + 0x00000000 : word32)
  Class: Eq_111
  DataType: ptr32
  OrigDataType: ptr32
T_112: (in Mem106[0x00001196 + 0x00000000:word16] : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_113: (in __swap : ptr32)
  Class: Eq_113
  DataType: (ptr Eq_113)
  OrigDataType: (ptr (fn T_115 (T_114)))
T_114: (in d0_10 + 0x00005460 : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_115: (in __swap((d0_10 + 21600)->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000) : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in (word16) __swap((d0_10 + 21600)->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000->a0000) : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in 00001192 : ptr32)
  Class: Eq_117
  DataType: (ptr word16)
  OrigDataType: (ptr (struct (0 T_120 t0000)))
T_118: (in 0x00000000 : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_119: (in 0x00001192 + 0x00000000 : word32)
  Class: Eq_119
  DataType: ptr32
  OrigDataType: ptr32
T_120: (in Mem109[0x00001192 + 0x00000000:word16] : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_121: (in a1_104 : (ptr Eq_121))
  Class: Eq_121
  DataType: (ptr Eq_121)
  OrigDataType: (ptr (struct 006C (1F18 word32 dw1F18) (1F4E word32 dw1F4E)))
T_122: (in d0_10 + 0x00005460 : word32)
  Class: Eq_121
  DataType: (ptr Eq_121)
  OrigDataType: word32
T_123: (in a0_110 : (ptr word32))
  Class: Eq_123
  DataType: (ptr word32)
  OrigDataType: (ptr (struct 0004 (0 word32 dw0000)))
T_124: (in 00001058 : ptr32)
  Class: Eq_123
  DataType: (ptr word32)
  OrigDataType: ptr32
T_125: (in a2_111 : (ptr byte))
  Class: Eq_125
  DataType: (ptr byte)
  OrigDataType: (ptr (struct 0001 (0 byte b0000)))
T_126: (in 00001058 : ptr32)
  Class: Eq_125
  DataType: (ptr byte)
  OrigDataType: ptr32
T_127: (in d6_112 : int32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_128: (in 4 : int32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_129: (in 0x00000000 : word32)
  Class: Eq_129
  DataType: word32
  OrigDataType: word32
T_130: (in a0_110 + 0x00000000 : word32)
  Class: Eq_130
  DataType: ptr32
  OrigDataType: ptr32
T_131: (in Mem109[a0_110 + 0x00000000:word32] : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_132: (in 7960 : int32)
  Class: Eq_132
  DataType: int32
  OrigDataType: int32
T_133: (in a1_104 + 7960 : word32)
  Class: Eq_133
  DataType: word32
  OrigDataType: word32
T_134: (in Mem118[a1_104 + 7960:word32] : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_135: (in 0x00000000 : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_136: (in a0_110 + 0x00000000 : word32)
  Class: Eq_136
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_137: (in Mem118[a0_110 + 0x00000000:word32] : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_138: (in 8014 : int32)
  Class: Eq_138
  DataType: int32
  OrigDataType: int32
T_139: (in a1_104 + 8014 : word32)
  Class: Eq_139
  DataType: ptr32
  OrigDataType: ptr32
T_140: (in Mem122[a1_104 + 8014:word32] : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_141: (in 0x00000004 : word32)
  Class: Eq_141
  DataType: int32
  OrigDataType: int32
T_142: (in a0_110 + 0x00000004 : word32)
  Class: Eq_123
  DataType: (ptr word32)
  OrigDataType: ptr32
T_143: (in 0x0000006C : word32)
  Class: Eq_143
  DataType: int32
  OrigDataType: int32
T_144: (in a1_104 + 0x0000006C : word32)
  Class: Eq_121
  DataType: (ptr Eq_121)
  OrigDataType: ptr32
T_145: (in 0x00000001 : word32)
  Class: Eq_145
  DataType: int32
  OrigDataType: int32
T_146: (in d6_112 - 0x00000001 : word32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_147: (in 0xFFFFFFFF : word32)
  Class: Eq_127
  DataType: int32
  OrigDataType: word32
T_148: (in d6_112 != 0xFFFFFFFF : bool)
  Class: Eq_148
  DataType: bool
  OrigDataType: bool
T_149: (in 00001180 : ptr32)
  Class: Eq_149
  DataType: ptr32
  OrigDataType: ptr32
T_150: (in 00DFF080 : ptr32)
  Class: Eq_150
  DataType: (ptr ptr32)
  OrigDataType: (ptr (struct (0 T_153 t0000)))
T_151: (in 0x00000000 : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_152: (in 0x00DFF080 + 0x00000000 : word32)
  Class: Eq_152
  DataType: ptr32
  OrigDataType: ptr32
T_153: (in Mem127[0x00DFF080 + 0x00000000:word32] : word32)
  Class: Eq_149
  DataType: ptr32
  OrigDataType: word32
T_154: (in a1_128 : (ptr byte))
  Class: Eq_154
  DataType: (ptr byte)
  OrigDataType: (ptr (struct 0001 (0 byte b0000)))
T_155: (in 00001058 : ptr32)
  Class: Eq_154
  DataType: (ptr byte)
  OrigDataType: ptr32
T_156: (in d1_129 : int32)
  Class: Eq_156
  DataType: int32
  OrigDataType: int32
T_157: (in 63 : int32)
  Class: Eq_156
  DataType: int32
  OrigDataType: int32
T_158: (in 0x00000001 : word32)
  Class: Eq_158
  DataType: ui32
  OrigDataType: ui32
T_159: (in a2_111 - 0x00000001 : word32)
  Class: Eq_125
  DataType: (ptr byte)
  OrigDataType: ptr32
T_160: (in 0x00000000 : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_161: (in a2_111 + 0x00000000 : word32)
  Class: Eq_161
  DataType: ptr32
  OrigDataType: ptr32
T_162: (in Mem127[a2_111 + 0x00000000:byte] : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in 0x00000000 : word32)
  Class: Eq_163
  DataType: word32
  OrigDataType: word32
T_164: (in a1_128 + 0x00000000 : word32)
  Class: Eq_164
  DataType: ptr32
  OrigDataType: ptr32
T_165: (in Mem136[a1_128 + 0x00000000:byte] : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_166: (in 0x00000001 : word32)
  Class: Eq_166
  DataType: int32
  OrigDataType: int32
T_167: (in a1_128 + 0x00000001 : word32)
  Class: Eq_154
  DataType: (ptr byte)
  OrigDataType: ptr32
T_168: (in 0x00000001 : word32)
  Class: Eq_168
  DataType: int32
  OrigDataType: int32
T_169: (in d1_129 - 0x00000001 : word32)
  Class: Eq_156
  DataType: int32
  OrigDataType: int32
T_170: (in 0xFFFFFFFF : word32)
  Class: Eq_156
  DataType: int32
  OrigDataType: word32
T_171: (in d1_129 != 0xFFFFFFFF : bool)
  Class: Eq_171
  DataType: bool
  OrigDataType: bool
T_172: (in d5_140 : int32)
  Class: Eq_172
  DataType: int32
  OrigDataType: int32
T_173: (in 32 : int32)
  Class: Eq_172
  DataType: int32
  OrigDataType: int32
T_174: (in 00DFF006 : ptr32)
  Class: Eq_174
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_177 t0000)))
T_175: (in 0x00000000 : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_176: (in 0x00DFF006 + 0x00000000 : word32)
  Class: Eq_176
  DataType: ptr32
  OrigDataType: ptr32
T_177: (in Mem136[0x00DFF006 + 0x00000000:byte] : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in 0xE0 : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_179: (in *(byte *) 0x00DFF006 != 0xE0 : bool)
  Class: Eq_179
  DataType: bool
  OrigDataType: bool
T_180: (in 00DFF006 : ptr32)
  Class: Eq_180
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_183 t0000)))
T_181: (in 0x00000000 : word32)
  Class: Eq_181
  DataType: word32
  OrigDataType: word32
T_182: (in 0x00DFF006 + 0x00000000 : word32)
  Class: Eq_182
  DataType: ptr32
  OrigDataType: ptr32
T_183: (in Mem136[0x00DFF006 + 0x00000000:byte] : byte)
  Class: Eq_183
  DataType: byte
  OrigDataType: byte
T_184: (in 0xF0 : byte)
  Class: Eq_183
  DataType: byte
  OrigDataType: byte
T_185: (in *(byte *) 0x00DFF006 != 0xF0 : bool)
  Class: Eq_185
  DataType: bool
  OrigDataType: bool
T_186: (in v48_157 : cui16)
  Class: Eq_186
  DataType: cui16
  OrigDataType: cui16
T_187: (in (byte) d6_112 : byte)
  Class: Eq_187
  DataType: byte
  OrigDataType: byte
T_188: (in 0x01 : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_189: (in (byte) d6_112 + 0x01 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_190: (in DPB(d6_112, (byte) d6_112 + 0x01, 0) : word32)
  Class: Eq_190
  DataType: int32
  OrigDataType: int32
T_191: (in (word16) DPB(d6_112, (byte) d6_112 + 0x01, 0) : word16)
  Class: Eq_191
  DataType: cui16
  OrigDataType: cui16
T_192: (in 0x007F : word16)
  Class: Eq_192
  DataType: cui16
  OrigDataType: cui16
T_193: (in (word16) DPB(d6_112, (byte) d6_112 + 0x01, 0) & 0x007F : word16)
  Class: Eq_186
  DataType: cui16
  OrigDataType: cui16
T_194: (in d0_162 : int32)
  Class: Eq_194
  DataType: int32
  OrigDataType: int32
T_195: (in 00001018 : ptr32)
  Class: Eq_195
  DataType: (ptr (arr Eq_198))
  OrigDataType: (ptr (struct (0 (arr T_283) a0000)))
T_196: (in (int32) v48_157 : int32)
  Class: Eq_196
  DataType: int32
  OrigDataType: int32
T_197: (in 0x00001018 + (int32) v48_157 : word32)
  Class: Eq_197
  DataType: (ptr Eq_198)
  OrigDataType: (ptr (struct (0 T_198 t0000)))
T_198: (in Mem136[0x00001018 + (int32) v48_157:byte] : byte)
  Class: Eq_198
  DataType: Eq_198
  OrigDataType: byte
T_199: (in (int32) globals->a1018[(int32) v48_157] : int32)
  Class: Eq_194
  DataType: int32
  OrigDataType: int32
T_200: (in (byte) d0_162 : byte)
  Class: Eq_200
  DataType: byte
  OrigDataType: byte
T_201: (in -(byte) d0_162 : byte)
  Class: Eq_201
  DataType: byte
  OrigDataType: byte
T_202: (in 0x01 : byte)
  Class: Eq_202
  DataType: byte
  OrigDataType: byte
T_203: (in -(byte) d0_162 - 0x01 : byte)
  Class: Eq_203
  DataType: byte
  OrigDataType: byte
T_204: (in 0x04 : byte)
  Class: Eq_204
  DataType: byte
  OrigDataType: byte
T_205: (in -(byte) d0_162 - 0x01 << 0x04 : byte)
  Class: Eq_205
  DataType: ui8
  OrigDataType: ui8
T_206: (in 0000119B : ptr32)
  Class: Eq_206
  DataType: (ptr ui8)
  OrigDataType: (ptr (struct (0 T_209 t0000)))
T_207: (in 0x00000000 : word32)
  Class: Eq_207
  DataType: word32
  OrigDataType: word32
T_208: (in 0x0000119B + 0x00000000 : word32)
  Class: Eq_208
  DataType: ptr32
  OrigDataType: ptr32
T_209: (in Mem174[0x0000119B + 0x00000000:byte] : byte)
  Class: Eq_205
  DataType: ui8
  OrigDataType: byte
T_210: (in v57_178 : cui16)
  Class: Eq_210
  DataType: cui16
  OrigDataType: cui16
T_211: (in (byte) d5_140 : byte)
  Class: Eq_211
  DataType: byte
  OrigDataType: byte
T_212: (in 0x01 : byte)
  Class: Eq_212
  DataType: byte
  OrigDataType: byte
T_213: (in (byte) d5_140 + 0x01 : byte)
  Class: Eq_213
  DataType: byte
  OrigDataType: byte
T_214: (in DPB(d5_140, (byte) d5_140 + 0x01, 0) : word32)
  Class: Eq_214
  DataType: int32
  OrigDataType: int32
T_215: (in (word16) DPB(d5_140, (byte) d5_140 + 0x01, 0) : word16)
  Class: Eq_215
  DataType: cui16
  OrigDataType: cui16
T_216: (in 0x007F : word16)
  Class: Eq_216
  DataType: cui16
  OrigDataType: cui16
T_217: (in (word16) DPB(d5_140, (byte) d5_140 + 0x01, 0) & 0x007F : word16)
  Class: Eq_210
  DataType: cui16
  OrigDataType: cui16
T_218: (in d2_186 : word32)
  Class: Eq_218
  DataType: word32
  OrigDataType: word32
T_219: (in (word16) d0_10 : word16)
  Class: Eq_219
  DataType: word16
  OrigDataType: word16
T_220: (in (word16) d0_162 : word16)
  Class: Eq_220
  DataType: cu16
  OrigDataType: cu16
T_221: (in 0x0003 : word16)
  Class: Eq_221
  DataType: word16
  OrigDataType: word16
T_222: (in (word16) d0_162 >> 0x0003 : word16)
  Class: Eq_222
  DataType: uint16
  OrigDataType: uint16
T_223: (in DPB(d0_162, (word16) d0_162 >>u 0x0003, 0) : word32)
  Class: Eq_223
  DataType: Eq_223
  OrigDataType: (union (int32 u0) (uint32 u1))
T_224: (in 00001018 : ptr32)
  Class: Eq_224
  DataType: (ptr (arr Eq_227))
  OrigDataType: (ptr (struct (0 (arr T_285) a0000)))
T_225: (in (int32) v57_178 : int32)
  Class: Eq_225
  DataType: int32
  OrigDataType: int32
T_226: (in 0x00001018 + (int32) v57_178 : word32)
  Class: Eq_226
  DataType: (ptr Eq_227)
  OrigDataType: (ptr (struct (0 T_227 t0000)))
T_227: (in Mem174[0x00001018 + (int32) v57_178:byte] : byte)
  Class: Eq_227
  DataType: Eq_227
  OrigDataType: byte
T_228: (in (int32) globals->a1018[(int32) v57_178] : int32)
  Class: Eq_228
  DataType: Eq_228
  OrigDataType: (union (int32 u0) (uint32 u1))
T_229: (in 0x0036 : word16)
  Class: Eq_229
  DataType: uint16
  OrigDataType: uint16
T_230: (in (int32) globals->a1018[(int32) v57_178] * 0x0036 : word32)
  Class: Eq_230
  DataType: uint32
  OrigDataType: uint32
T_231: (in DPB(d0_162, (word16) d0_162 >> 0x0003, 0) + (int32) (globals->a1018)[(int32) v57_178] * 0x0036 : word32)
  Class: Eq_231
  DataType: uint32
  OrigDataType: uint32
T_232: (in (word16) (DPB(d0_162, (word16) d0_162 >> 0x0003, 0) + (int32) (globals->a1018)[(int32) v57_178] * 0x0036) : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_233: (in (word16) d0_10 + (word16) (DPB(d0_162, (word16) d0_162 >> 0x0003, 0) + (int32) (globals->a1018)[(int32) v57_178] * 0x0036) : word16)
  Class: Eq_233
  DataType: word16
  OrigDataType: word16
T_234: (in DPB(d0_10, (word16) d0_10 + (word16) (DPB(d0_162, (word16) d0_162 >> 0x0003, 0) + (int32) (globals->a1018)[(int32) v57_178] * 0x0036), 0) : word32)
  Class: Eq_218
  DataType: word32
  OrigDataType: word32
T_235: (in 0x00000002 : word32)
  Class: Eq_235
  DataType: word32
  OrigDataType: word32
T_236: (in d2_186 + 0x00000002 : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_237: (in (word16) (d2_186 + 0x00000002) : word16)
  Class: Eq_237
  DataType: word16
  OrigDataType: word16
T_238: (in 0000118E : ptr32)
  Class: Eq_238
  DataType: (ptr word16)
  OrigDataType: (ptr (struct (0 T_241 t0000)))
T_239: (in 0x00000000 : word32)
  Class: Eq_239
  DataType: word32
  OrigDataType: word32
T_240: (in 0x0000118E + 0x00000000 : word32)
  Class: Eq_240
  DataType: ptr32
  OrigDataType: ptr32
T_241: (in Mem190[0x0000118E + 0x00000000:word16] : word16)
  Class: Eq_237
  DataType: word16
  OrigDataType: word16
T_242: (in __swap : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_244 (T_243)))
T_243: (in d2_186 + 0x00000002 : word32)
  Class: Eq_243
  DataType: word32
  OrigDataType: word32
T_244: (in __swap(d2_186 + 0x00000002) : word32)
  Class: Eq_244
  DataType: word32
  OrigDataType: word32
T_245: (in (word16) __swap(d2_186 + 0x00000002) : word16)
  Class: Eq_245
  DataType: word16
  OrigDataType: word16
T_246: (in 0000118A : ptr32)
  Class: Eq_246
  DataType: (ptr word16)
  OrigDataType: (ptr (struct (0 T_249 t0000)))
T_247: (in 0x00000000 : word32)
  Class: Eq_247
  DataType: word32
  OrigDataType: word32
T_248: (in 0x0000118A + 0x00000000 : word32)
  Class: Eq_248
  DataType: ptr32
  OrigDataType: ptr32
T_249: (in Mem193[0x0000118A + 0x00000000:word16] : word16)
  Class: Eq_245
  DataType: word16
  OrigDataType: word16
T_250: (in DPB(d6_112, v48_157, 0) : word32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_251: (in DPB(d5_140, v57_178, 0) : word32)
  Class: Eq_172
  DataType: int32
  OrigDataType: int32
T_252: (in __btst : ptr32)
  Class: Eq_252
  DataType: (ptr Eq_252)
  OrigDataType: (ptr (fn T_258 (T_256, T_257)))
T_253: (in 00BFE001 : ptr32)
  Class: Eq_253
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_256 t0000)))
T_254: (in 0x00000000 : word32)
  Class: Eq_254
  DataType: word32
  OrigDataType: word32
T_255: (in 0x00BFE001 + 0x00000000 : word32)
  Class: Eq_255
  DataType: ptr32
  OrigDataType: ptr32
T_256: (in Mem193[0x00BFE001 + 0x00000000:byte] : byte)
  Class: Eq_256
  DataType: byte
  OrigDataType: byte
T_257: (in 0x0006 : word16)
  Class: Eq_257
  DataType: word16
  OrigDataType: word16
T_258: (in __btst(*(byte *) 0x00BFE001, 0x0006) : bool)
  Class: Eq_258
  DataType: bool
  OrigDataType: bool
T_259: (in 0xC000 : word16)
  Class: Eq_259
  DataType: word16
  OrigDataType: word16
T_260: (in 00DFF09A : ptr32)
  Class: Eq_260
  DataType: (ptr word16)
  OrigDataType: (ptr (struct (0 T_263 t0000)))
T_261: (in 0x00000000 : word32)
  Class: Eq_261
  DataType: word32
  OrigDataType: word32
T_262: (in 0x00DFF09A + 0x00000000 : word32)
  Class: Eq_262
  DataType: ptr32
  OrigDataType: ptr32
T_263: (in Mem197[0x00DFF09A + 0x00000000:word16] : word16)
  Class: Eq_259
  DataType: word16
  OrigDataType: word16
T_264: (in FreeMem : ptr32)
  Class: Eq_264
  DataType: (ptr Eq_264)
  OrigDataType: (ptr (fn T_268 (T_16, T_11)))
T_265: (in signature of FreeMem : void)
  Class: Eq_264
  DataType: (ptr Eq_264)
  OrigDataType: 
T_266: (in memoryBlock : word32)
  Class: Eq_16
  DataType: (ptr (arr Eq_66))
  OrigDataType: 
T_267: (in byteSize : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: 
T_268: (in FreeMem(d0_10, d0_5) : void)
  Class: Eq_268
  DataType: void
  OrigDataType: void
T_269: (in 156 : int32)
  Class: Eq_269
  DataType: int32
  OrigDataType: int32
T_270: (in a6_3 + 156 : word32)
  Class: Eq_270
  DataType: word32
  OrigDataType: word32
T_271: (in Mem197[a6_3 + 156:word32] : word32)
  Class: Eq_271
  DataType: (ptr Eq_271)
  OrigDataType: (ptr (struct (26 T_274 t0026)))
T_272: (in 38 : int32)
  Class: Eq_272
  DataType: int32
  OrigDataType: int32
T_273: (in Mem197[a6_3 + 156:word32] + 38 : word32)
  Class: Eq_273
  DataType: word32
  OrigDataType: word32
T_274: (in Mem197[Mem197[a6_3 + 156:word32] + 38:word32] : word32)
  Class: Eq_274
  DataType: word32
  OrigDataType: word32
T_275: (in 00DFF080 : ptr32)
  Class: Eq_275
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_278 t0000)))
T_276: (in 0x00000000 : word32)
  Class: Eq_276
  DataType: word32
  OrigDataType: word32
T_277: (in 0x00DFF080 + 0x00000000 : word32)
  Class: Eq_277
  DataType: ptr32
  OrigDataType: ptr32
T_278: (in Mem202[0x00DFF080 + 0x00000000:word32] : word32)
  Class: Eq_274
  DataType: word32
  OrigDataType: word32
T_279:
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: (struct 0001 (0 T_66 t0000))
T_280:
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: (arr T_66)
T_281:
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: (struct 0001 (0 T_70 t0000))
T_282:
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: (arr T_281)
T_283:
  Class: Eq_198
  DataType: Eq_198
  OrigDataType: (struct 0001 (0 T_198 t0000))
T_284:
  Class: Eq_198
  DataType: Eq_198
  OrigDataType: (arr Eq_198)
T_285:
  Class: Eq_227
  DataType: Eq_227
  OrigDataType: (struct 0001 (0 T_227 t0000))
T_286:
  Class: Eq_227
  DataType: Eq_227
  OrigDataType: (arr Eq_227)
*/
typedef struct Globals {
	Eq_198 a1018[];	// 1018
	word32 dw1058;	// 1058
	word16 w1182;	// 1182
	word16 w1186;	// 1186
	word16 w118A;	// 118A
	word16 w118E;	// 118E
	word16 w1192;	// 1192
	word16 w1196;	// 1196
	ui8 b119B;	// 119B
} Eq_1;

typedef struct Eq_6 {
	struct Eq_271 * ptr009C;	// 9C
} Eq_6;

typedef Eq_66 *[] (Eq_17)(word32, word32);

typedef uint32 (Eq_37)(word32);

typedef bool (Eq_61)(Eq_66, word32, byte);

typedef struct Eq_66 {	// size: 1 1
	Eq_66 a0000[];	// 0
} Eq_66;

typedef word32 (Eq_113)(word32);

typedef struct Eq_121 {	// size: 108 6C
	word32 dw1F18;	// 1F18
	word32 dw1F4E;	// 1F4E
} Eq_121;

typedef struct Eq_198 {	// size: 1 1
	Eq_198 a0000[];	// 0
} Eq_198;

typedef union Eq_223 {
	int32 u0;
	uint32 u1;
} Eq_223;

typedef struct Eq_227 {	// size: 1 1
	Eq_227 a0000[];	// 0
} Eq_227;

typedef union Eq_228 {
	int32 u0;
	uint32 u1;
} Eq_228;

typedef word32 (Eq_242)(word32);

typedef bool (Eq_252)(byte, word16);

typedef void (Eq_264)(Eq_66 *[], word32);

typedef struct Eq_271 {
	word32 dw0026;	// 26
} Eq_271;

