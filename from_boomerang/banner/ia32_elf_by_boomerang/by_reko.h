// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (4 (arr word32 2) a0004) (80482B6 code t80482B6) (80482C6 code t80482C6) (80482D6 code t80482D6) (8049B04 Eq_127 t8049B04) (804AB28 (ptr (ptr code)) ptr804AB28) (804AB40 (arr int32) a804AB40) (804AD58 (ptr code) ptr804AD58) (804AD64 (ptr code) ptr804AD64) (804AD68 word32 dw804AD68) (804AD7C (ptr code) ptr804AD7C) (804AD80 (ptr code) ptr804AD80) (804AD84 (ptr code) ptr804AD84) (804AD88 (ptr code) ptr804AD88) (804AD8C byte b804AD8C))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in call_gmon_start : ptr32)
	T_3 (in signature of call_gmon_start : void)
Eq_5: (fn void ())
	T_5 (in frame_dummy : ptr32)
	T_6 (in signature of frame_dummy : void)
Eq_8: (fn void ())
	T_8 (in __do_global_ctors_aux : ptr32)
	T_9 (in signature of __do_global_ctors_aux : void)
Eq_21: (fn void (ptr32))
	T_21 (in __align : ptr32)
Eq_26: (fn void ())
	T_26 (in __libc_start_main@@GLIBC_2.0 : ptr32)
	T_27 (in signature of __libc_start_main@@GLIBC_2.0 : void)
Eq_29: (fn void ())
	T_29 (in __hlt : ptr32)
Eq_99: (fn void (ptr32))
	T_99 (in __align : ptr32)
Eq_104: (fn void ())
	T_104 (in malloc@@GLIBC_2.0 : ptr32)
	T_105 (in signature of malloc@@GLIBC_2.0 : void)
Eq_114: (fn void ())
	T_114 (in strlen@@GLIBC_2.0 : ptr32)
	T_115 (in signature of strlen@@GLIBC_2.0 : void)
Eq_125: (fn int32 ((ptr Eq_127), int32, (ptr (ptr char)), (ptr Eq_130), (ptr Eq_131), (ptr Eq_132), (ptr void)))
	T_125 (in __libc_start_main : ptr32)
	T_126 (in signature of __libc_start_main : void)
	T_172 (in __libc_start_main : ptr32)
Eq_127: (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char))))
	T_127 (in main : (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char))))))
	T_134 (in 0x08049B04 : word32)
	T_174 (in fp - 0x0000007C : word32)
Eq_130: (fn void ())
	T_130 (in init : (ptr (fn void ())))
	T_137 (in ptrLocA0 : (ptr (fn void ())))
Eq_131: (fn void ())
	T_131 (in fini : (ptr (fn void ())))
	T_138 (in ptrLoc9C : (ptr (fn void ())))
Eq_132: (fn void ())
	T_132 (in rtld_fini : (ptr (fn void ())))
	T_139 (in ptrLoc98 : (ptr (fn void ())))
Eq_169: (struct "Eq_169" 0001 (0 (arr Eq_169) a0000))
	T_169 (in Mem17[fp - 0x0000007C + dwLoc1C_137:byte] : byte)
	T_170 (in 0x20 : byte)
	T_280
	T_281
Eq_178: (union "Eq_178" (int32 u0) (ptr32 u1))
	T_178 (in dwLoc20_179 : Eq_178)
	T_179 (in 0x00000000 : word32)
	T_237 (in dwLoc20_179 + 0x00000001 : word32)
	T_240 (in 0x00000006 : word32)
Eq_199: (union "Eq_199" (int32 u0) (ptr32 u1))
	T_199 (in 0x00000001 : word32)
Eq_215: (union "Eq_215" (int32 u0) (ptr32 u1))
	T_215 (in edx_229 : Eq_215)
	T_220 (in dwLoc28_173 - ((dwLoc90_221 >> 0x00000003) << 0x00000003) : word32)
Eq_222: (union "Eq_222" (int32 u0) (ptr32 u1))
	T_222 (in edx_229 << 0x00000003 : word32)
Eq_223: (union "Eq_223" (int32 u0) (ptr32 u1))
	T_223 (in (edx_229 << 0x00000003) - edx_229 : word32)
Eq_224: (union "Eq_224" (int32 u0) (ptr32 u1))
	T_224 (in (edx_229 << 0x00000003) - edx_229 + dwLoc20_179 : word32)
Eq_236: (union "Eq_236" (int32 u0) (ptr32 u1))
	T_236 (in 0x00000001 : word32)
Eq_242: (struct "Eq_242" 0001 (0 (arr Eq_242) a0000))
	T_242 (in 0x00 : byte)
	T_246 (in Mem163[fp - 0x0000007C + dwLoc1C_137:byte] : byte)
	T_284
	T_285
Eq_251: (fn void ())
	T_251 (in _init : ptr32)
	T_252 (in signature of _init : void)
Eq_256: (fn void ())
	T_256 (in _fini : ptr32)
	T_257 (in signature of _fini : void)
Eq_276: (fn void ())
	T_276 (in __do_global_dtors_aux : ptr32)
	T_277 (in signature of __do_global_dtors_aux : void)
Eq_282: (struct "Eq_282" 0008 (0 byte b0000))
	T_282
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in call_gmon_start : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_4 ()))
T_3: (in signature of call_gmon_start : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: 
T_4: (in call_gmon_start() : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in frame_dummy : ptr32)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (fn T_7 ()))
T_6: (in signature of frame_dummy : void)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: 
T_7: (in frame_dummy() : void)
  Class: Eq_7
  DataType: void
  OrigDataType: void
T_8: (in __do_global_ctors_aux : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_10 ()))
T_9: (in signature of __do_global_ctors_aux : void)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: 
T_10: (in __do_global_ctors_aux() : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in esp_3 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in 0x0804AD7C : ptr32)
  Class: Eq_12
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_13 t0000)))
T_13: (in Mem0[0x0804AD7C:word32] : word32)
  Class: Eq_13
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_14: (in esp_3 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in 0x0804AD80 : ptr32)
  Class: Eq_15
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_16 t0000)))
T_16: (in Mem0[0x0804AD80:word32] : word32)
  Class: Eq_16
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_17: (in esp_3 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in 0x0804AD84 : ptr32)
  Class: Eq_18
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_19 t0000)))
T_19: (in Mem0[0x0804AD84:word32] : word32)
  Class: Eq_19
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_20: (in dwArg00 : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_21: (in __align : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_25 (T_24)))
T_22: (in fp : ptr32)
  Class: Eq_22
  DataType: ptr32
  OrigDataType: ptr32
T_23: (in 0x00000004 : word32)
  Class: Eq_23
  DataType: int32
  OrigDataType: int32
T_24: (in fp + 0x00000004 : word32)
  Class: Eq_24
  DataType: ptr32
  OrigDataType: ptr32
T_25: (in __align(fp + 0x00000004) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in __libc_start_main@@GLIBC_2.0 : ptr32)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn T_28 ()))
T_27: (in signature of __libc_start_main@@GLIBC_2.0 : void)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: 
T_28: (in __libc_start_main@@GLIBC_2.0() : void)
  Class: Eq_28
  DataType: void
  OrigDataType: void
T_29: (in __hlt : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_30 ()))
T_30: (in __hlt() : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in eax_15 : (ptr code))
  Class: Eq_31
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_32: (in 0804AD88 : ptr32)
  Class: Eq_32
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_35 t0000)))
T_33: (in 0x00000000 : word32)
  Class: Eq_33
  DataType: word32
  OrigDataType: word32
T_34: (in 0x0804AD88 + 0x00000000 : word32)
  Class: Eq_34
  DataType: ptr32
  OrigDataType: ptr32
T_35: (in Mem0[0x0804AD88 + 0x00000000:word32] : word32)
  Class: Eq_31
  DataType: (ptr code)
  OrigDataType: word32
T_36: (in 0x00000000 : word32)
  Class: Eq_31
  DataType: (ptr code)
  OrigDataType: word32
T_37: (in eax_15 == null : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in esp_29 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in ebp_30 : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_40: (in ebx_31 : word32)
  Class: Eq_40
  DataType: word32
  OrigDataType: word32
T_41: (in eax_32 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in SCZO_33 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in SZO_34 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in C_35 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in Z_36 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in 0x0804AD8C : ptr32)
  Class: Eq_46
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_47 t0000)))
T_47: (in Mem0[0x0804AD8C:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0x00 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_49: (in globals->b804AD8C != 0x00 : bool)
  Class: Eq_49
  DataType: bool
  OrigDataType: bool
T_50: (in eax_25 : (ptr (ptr code)))
  Class: Eq_50
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_53 t0000)))
T_51: (in 0x0804AB28 : word32)
  Class: Eq_51
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_52 t0000)))
T_52: (in Mem0[0x0804AB28:word32] : word32)
  Class: Eq_50
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_53: (in edx_26 : (ptr code))
  Class: Eq_53
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_54: (in 0x00000000 : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_55: (in eax_25 + 0x00000000 : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in Mem0[eax_25 + 0x00000000:word32] : word32)
  Class: Eq_53
  DataType: (ptr code)
  OrigDataType: word32
T_57: (in 0x00000000 : word32)
  Class: Eq_53
  DataType: (ptr code)
  OrigDataType: word32
T_58: (in edx_26 == null : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
T_59: (in 0x01 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_60: (in 0x0804AD8C : ptr32)
  Class: Eq_60
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_61 t0000)))
T_61: (in Mem39[0x0804AD8C:byte] : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_62: (in eax_42 : (ptr (ptr code)))
  Class: Eq_50
  DataType: (ptr (ptr code))
  OrigDataType: ptr32
T_63: (in 0x00000004 : word32)
  Class: Eq_63
  DataType: int32
  OrigDataType: int32
T_64: (in eax_25 + 0x00000004 : word32)
  Class: Eq_50
  DataType: (ptr (ptr code))
  OrigDataType: ptr32
T_65: (in 0x0804AB28 : word32)
  Class: Eq_65
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_66 t0000)))
T_66: (in Mem44[0x0804AB28:word32] : word32)
  Class: Eq_50
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_67: (in esp_45 : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in ebp_46 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in SCZO_47 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in Z_48 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in eax_49 : word32)
  Class: Eq_71
  DataType: word32
  OrigDataType: word32
T_72: (in edx_50 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in SZO_51 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in C_52 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in esi_53 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in 0x0804AB28 : word32)
  Class: Eq_76
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_77 t0000)))
T_77: (in Mem44[0x0804AB28:word32] : word32)
  Class: Eq_50
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_78: (in 0x00000000 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in eax_25 + 0x00000000 : word32)
  Class: Eq_79
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_80: (in Mem44[eax_25 + 0x00000000:word32] : word32)
  Class: Eq_53
  DataType: (ptr code)
  OrigDataType: word32
T_81: (in 0x00000000 : word32)
  Class: Eq_53
  DataType: (ptr code)
  OrigDataType: word32
T_82: (in *eax_25 != null : bool)
  Class: Eq_82
  DataType: bool
  OrigDataType: bool
T_83: (in 0x0804AD68 : word32)
  Class: Eq_83
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_84 t0000)))
T_84: (in Mem0[0x0804AD68:word32] : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in 0x00000000 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_86: (in globals->dw804AD68 == 0x00000000 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in 0x00000000 : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_88: (in 0x00000000 : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_89: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_89
  DataType: bool
  OrigDataType: bool
T_90: (in esp_31 : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_91: (in ebp_32 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_92: (in SCZO_33 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_93: (in eax_34 : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_94: (in SZO_35 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in C_36 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in Z_37 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in fn00000000 : ptr32)
  Class: Eq_97
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_98: (in signature of fn00000000 : void)
  Class: Eq_97
  DataType: (ptr code)
  OrigDataType: 
T_99: (in __align : ptr32)
  Class: Eq_99
  DataType: (ptr Eq_99)
  OrigDataType: (ptr (fn T_103 (T_102)))
T_100: (in fp : ptr32)
  Class: Eq_100
  DataType: ptr32
  OrigDataType: ptr32
T_101: (in 0x0000009C : word32)
  Class: Eq_101
  DataType: ui32
  OrigDataType: ui32
T_102: (in fp - 0x0000009C : word32)
  Class: Eq_102
  DataType: ptr32
  OrigDataType: ptr32
T_103: (in __align(fp - 0x0000009C) : void)
  Class: Eq_103
  DataType: void
  OrigDataType: void
T_104: (in malloc@@GLIBC_2.0 : ptr32)
  Class: Eq_104
  DataType: (ptr Eq_104)
  OrigDataType: (ptr (fn T_106 ()))
T_105: (in signature of malloc@@GLIBC_2.0 : void)
  Class: Eq_104
  DataType: (ptr Eq_104)
  OrigDataType: 
T_106: (in malloc@@GLIBC_2.0() : void)
  Class: Eq_106
  DataType: void
  OrigDataType: void
T_107: (in 0x08049AF9 : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in 0x00000004 : word32)
  Class: Eq_108
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_109 t0000)))
T_109: (in Mem17[0x00000004:word32] : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_110: (in dwLoc10_18 : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: word32
T_111: (in 0x00000002 : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: word32
T_112: (in dwLoc14_113 : (ptr int32))
  Class: Eq_112
  DataType: (ptr int32)
  OrigDataType: (ptr (struct (0 T_147 t0000)))
T_113: (in 0x00000004 : word32)
  Class: Eq_112
  DataType: (ptr int32)
  OrigDataType: word32
T_114: (in strlen@@GLIBC_2.0 : ptr32)
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: (ptr (fn T_116 ()))
T_115: (in signature of strlen@@GLIBC_2.0 : void)
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: 
T_116: (in strlen@@GLIBC_2.0() : void)
  Class: Eq_116
  DataType: void
  OrigDataType: void
T_117: (in dwLoc24_251 : (ptr int32))
  Class: Eq_112
  DataType: (ptr int32)
  OrigDataType: int32
T_118: (in 0x0000000A : word32)
  Class: Eq_112
  DataType: (ptr int32)
  OrigDataType: int32
T_119: (in dwLoc14_113 <= (int32 *) 0x0000000A : bool)
  Class: Eq_119
  DataType: bool
  OrigDataType: bool
T_120: (in dwLoc18_154 : int32)
  Class: Eq_120
  DataType: int32
  OrigDataType: int32
T_121: (in 0x00000000 : word32)
  Class: Eq_120
  DataType: int32
  OrigDataType: word32
T_122: (in 0x0000000A : word32)
  Class: Eq_112
  DataType: (ptr int32)
  OrigDataType: word32
T_123: (in dwLoc1C_115 : (ptr int32))
  Class: Eq_112
  DataType: (ptr int32)
  OrigDataType: (union ((ptr (struct (0 T_147 t0000))) u0) (ptr32 u1))
T_124: (in 0x00000000 : word32)
  Class: Eq_112
  DataType: (ptr int32)
  OrigDataType: word32
T_125: (in __libc_start_main : ptr32)
  Class: Eq_125
  DataType: (ptr Eq_125)
  OrigDataType: (ptr (fn T_141 (T_134, T_135, T_136, T_137, T_138, T_139, T_140)))
T_126: (in signature of __libc_start_main : void)
  Class: Eq_125
  DataType: (ptr Eq_125)
  OrigDataType: 
T_127: (in main : (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char))))))
  Class: Eq_127
  DataType: (ptr Eq_127)
  OrigDataType: 
T_128: (in argc : int32)
  Class: Eq_128
  DataType: int32
  OrigDataType: 
T_129: (in ubp_av : (ptr (ptr char)))
  Class: Eq_129
  DataType: (ptr (ptr char))
  OrigDataType: 
T_130: (in init : (ptr (fn void ())))
  Class: Eq_130
  DataType: (ptr Eq_130)
  OrigDataType: 
T_131: (in fini : (ptr (fn void ())))
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: 
T_132: (in rtld_fini : (ptr (fn void ())))
  Class: Eq_132
  DataType: (ptr Eq_132)
  OrigDataType: 
T_133: (in stack_end : (ptr void))
  Class: Eq_133
  DataType: (ptr void)
  OrigDataType: 
T_134: (in 0x08049B04 : word32)
  Class: Eq_127
  DataType: (ptr Eq_127)
  OrigDataType: (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char)))))
T_135: (in dwLocA8 : int32)
  Class: Eq_128
  DataType: int32
  OrigDataType: int32
T_136: (in ptrLocA4 : (ptr (ptr char)))
  Class: Eq_129
  DataType: (ptr (ptr char))
  OrigDataType: (ptr (ptr char))
T_137: (in ptrLocA0 : (ptr (fn void ())))
  Class: Eq_130
  DataType: (ptr Eq_130)
  OrigDataType: (ptr (fn void ()))
T_138: (in ptrLoc9C : (ptr (fn void ())))
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: (ptr (fn void ()))
T_139: (in ptrLoc98 : (ptr (fn void ())))
  Class: Eq_132
  DataType: (ptr Eq_132)
  OrigDataType: (ptr (fn void ()))
T_140: (in ptrLoc94 : (ptr void))
  Class: Eq_133
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_141: (in __libc_start_main(&globals->t8049B04, dwLocA8, ptrLocA4, ptrLocA0, ptrLoc9C, ptrLoc98, ptrLoc94) : int32)
  Class: Eq_141
  DataType: int32
  OrigDataType: int32
T_142: (in 0x00000004 : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_143: (in dwLoc14_113 + 0x00000004 : word32)
  Class: Eq_112
  DataType: (ptr int32)
  OrigDataType: word32
T_144: (in eax_171 : int32)
  Class: Eq_144
  DataType: int32
  OrigDataType: int32
T_145: (in 0x00000000 : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in dwLoc14_113 + 0x00000000 : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in Mem17[dwLoc14_113 + 0x00000000:word32] : word32)
  Class: Eq_147
  DataType: int32
  OrigDataType: int32
T_148: (in dwLoc1C_115 + Mem17[dwLoc14_113 + 0x00000000:word32] : word32)
  Class: Eq_148
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_149 t0000)))
T_149: (in Mem17[dwLoc1C_115 + Mem17[dwLoc14_113 + 0x00000000:word32]:byte] : byte)
  Class: Eq_149
  DataType: byte
  OrigDataType: byte
T_150: (in (int32) dwLoc1C_115[*dwLoc14_113] : int32)
  Class: Eq_144
  DataType: int32
  OrigDataType: int32
T_151: (in dwLoc28_173 : int32)
  Class: Eq_151
  DataType: int32
  OrigDataType: int32
T_152: (in 0x00000020 : word32)
  Class: Eq_152
  DataType: int32
  OrigDataType: int32
T_153: (in eax_171 - 0x00000020 : word32)
  Class: Eq_151
  DataType: int32
  OrigDataType: int32
T_154: (in 0x00000020 : word32)
  Class: Eq_144
  DataType: int32
  OrigDataType: int32
T_155: (in eax_171 >= 0x00000020 : bool)
  Class: Eq_155
  DataType: bool
  OrigDataType: bool
T_156: (in dwLoc1C_137 : int32)
  Class: Eq_156
  DataType: int32
  OrigDataType: int32
T_157: (in 0x00000003 : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_158: (in dwLoc24_251 << 0x00000003 : word32)
  Class: Eq_158
  DataType: ui32
  OrigDataType: ui32
T_159: (in 0x00000001 : word32)
  Class: Eq_159
  DataType: ui32
  OrigDataType: ui32
T_160: (in (dwLoc24_251 << 0x00000003) - 0x00000001 : word32)
  Class: Eq_156
  DataType: int32
  OrigDataType: ui32
T_161: (in v7_60 : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: word32
T_162: (in 0x00000001 : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in dwLoc10_18 - 0x00000001 : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: word32
T_164: (in 0x00000000 : word32)
  Class: Eq_110
  DataType: word32
  OrigDataType: word32
T_165: (in v7_60 != 0x00000000 : bool)
  Class: Eq_165
  DataType: bool
  OrigDataType: bool
T_166: (in 0x0000007C : word32)
  Class: Eq_166
  DataType: ui32
  OrigDataType: ui32
T_167: (in fp - 0x0000007C : (arr Eq_169))
  Class: Eq_167
  DataType: (ptr (arr Eq_169))
  OrigDataType: (ptr (struct (0 (arr T_280) a0000)))
T_168: (in fp - 0x0000007C + dwLoc1C_137 : word32)
  Class: Eq_168
  DataType: (ptr Eq_169)
  OrigDataType: (ptr (struct (0 T_169 t0000)))
T_169: (in Mem17[fp - 0x0000007C + dwLoc1C_137:byte] : byte)
  Class: Eq_169
  DataType: Eq_169
  OrigDataType: byte
T_170: (in 0x20 : byte)
  Class: Eq_169
  DataType: Eq_169
  OrigDataType: byte
T_171: (in Mem17[fp - 0x0000007C + dwLoc1C_137:byte] == 0x20 : bool)
  Class: Eq_171
  DataType: bool
  OrigDataType: bool
T_172: (in __libc_start_main : ptr32)
  Class: Eq_125
  DataType: (ptr Eq_125)
  OrigDataType: (ptr (fn T_175 (T_174, T_135, T_136, T_137, T_138, T_139, T_140)))
T_173: (in 0x0000007C : word32)
  Class: Eq_173
  DataType: ui32
  OrigDataType: ui32
T_174: (in fp - 0x0000007C : word32)
  Class: Eq_127
  DataType: (ptr Eq_127)
  OrigDataType: (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char)))))
T_175: (in __libc_start_main(fp - 0x0000007C, dwLocA8, ptrLocA4, ptrLocA0, ptrLoc9C, ptrLoc98, ptrLoc94) : int32)
  Class: Eq_141
  DataType: int32
  OrigDataType: int32
T_176: (in 0x00000001 : word32)
  Class: Eq_176
  DataType: word32
  OrigDataType: word32
T_177: (in dwLoc18_154 + 0x00000001 : word32)
  Class: Eq_120
  DataType: int32
  OrigDataType: word32
T_178: (in dwLoc20_179 : Eq_178)
  Class: Eq_178
  DataType: Eq_178
  OrigDataType: word32
T_179: (in 0x00000000 : word32)
  Class: Eq_178
  DataType: int32
  OrigDataType: word32
T_180: (in 0x00000000 : word32)
  Class: Eq_151
  DataType: int32
  OrigDataType: word32
T_181: (in 0x00000006 : word32)
  Class: Eq_120
  DataType: int32
  OrigDataType: int32
T_182: (in dwLoc18_154 <= 0x00000006 : bool)
  Class: Eq_182
  DataType: bool
  OrigDataType: bool
T_183: (in eax_202 : ptr32)
  Class: Eq_183
  DataType: ptr32
  OrigDataType: ptr32
T_184: (in 0x00000003 : word32)
  Class: Eq_184
  DataType: word32
  OrigDataType: word32
T_185: (in dwLoc1C_115 << 0x00000003 : word32)
  Class: Eq_185
  DataType: int32
  OrigDataType: int32
T_186: (in 0x0000000C : word32)
  Class: Eq_186
  DataType: ui32
  OrigDataType: ui32
T_187: (in fp - 0x0000000C : word32)
  Class: Eq_187
  DataType: ptr32
  OrigDataType: ptr32
T_188: (in (dwLoc1C_115 << 0x00000003) + (fp - 0x0000000C) : word32)
  Class: Eq_188
  DataType: ptr32
  OrigDataType: ptr32
T_189: (in (dwLoc1C_115 << 0x00000003) + (fp - 0x0000000C) + dwLoc20_179 : word32)
  Class: Eq_183
  DataType: ptr32
  OrigDataType: ptr32
T_190: (in dwLoc84_206 : int32)
  Class: Eq_151
  DataType: int32
  OrigDataType: int32
T_191: (in 0x00000000 : word32)
  Class: Eq_151
  DataType: int32
  OrigDataType: int32
T_192: (in dwLoc28_173 >= 0x00000000 : bool)
  Class: Eq_192
  DataType: bool
  OrigDataType: bool
T_193: (in 0x20 : byte)
  Class: Eq_193
  DataType: byte
  OrigDataType: byte
T_194: (in 0x00000075 : word32)
  Class: Eq_194
  DataType: ui32
  OrigDataType: ui32
T_195: (in fp - 0x00000075 : (arr Eq_282))
  Class: Eq_195
  DataType: (ptr (arr Eq_282))
  OrigDataType: (ptr (struct (0 (arr T_282) a0000)))
T_196: (in 0x00000008 : word32)
  Class: Eq_196
  DataType: ui32
  OrigDataType: ui32
T_197: (in dwLoc1C_115 * 0x00000008 : word32)
  Class: Eq_197
  DataType: ui32
  OrigDataType: ui32
T_198: (in (fp - 0x00000075)[dwLoc1C_115 * 0x00000008] : byte)
  Class: Eq_193
  DataType: byte
  OrigDataType: byte
T_199: (in 0x00000001 : word32)
  Class: Eq_199
  DataType: int32
  OrigDataType: (union (int32 u1) (ptr32 u0))
T_200: (in dwLoc1C_115 + 0x00000001 : word32)
  Class: Eq_112
  DataType: (ptr int32)
  OrigDataType: (union (int32 u1) (ptr32 u0))
T_201: (in edx_211 : int32)
  Class: Eq_201
  DataType: int32
  OrigDataType: int32
T_202: (in 0x00000003 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_203: (in dwLoc84_206 >> 0x00000003 : word32)
  Class: Eq_201
  DataType: int32
  OrigDataType: int32
T_204: (in edx_216 : ui32)
  Class: Eq_204
  DataType: ui32
  OrigDataType: ui32
T_205: (in 0x00000003 : word32)
  Class: Eq_205
  DataType: word32
  OrigDataType: word32
T_206: (in edx_211 << 0x00000003 : word32)
  Class: Eq_206
  DataType: ui32
  OrigDataType: ui32
T_207: (in (edx_211 << 0x00000003) - edx_211 : word32)
  Class: Eq_207
  DataType: ui32
  OrigDataType: ui32
T_208: (in dwLoc18_154 + ((edx_211 << 0x00000003) - edx_211) : word32)
  Class: Eq_204
  DataType: ui32
  OrigDataType: ui32
T_209: (in dwLoc90_221 : int32)
  Class: Eq_151
  DataType: int32
  OrigDataType: int32
T_210: (in 0x00000000 : word32)
  Class: Eq_151
  DataType: int32
  OrigDataType: int32
T_211: (in dwLoc28_173 >= 0x00000000 : bool)
  Class: Eq_211
  DataType: bool
  OrigDataType: bool
T_212: (in 0x00000007 : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_213: (in dwLoc28_173 + 0x00000007 : word32)
  Class: Eq_151
  DataType: int32
  OrigDataType: word32
T_214: (in dwLoc1C_115 < dwLoc24_251 : bool)
  Class: Eq_214
  DataType: bool
  OrigDataType: bool
T_215: (in edx_229 : Eq_215)
  Class: Eq_215
  DataType: Eq_215
  OrigDataType: (union (int32 u0) (ptr32 u1))
T_216: (in 0x00000003 : word32)
  Class: Eq_216
  DataType: word32
  OrigDataType: word32
T_217: (in dwLoc90_221 >> 0x00000003 : word32)
  Class: Eq_217
  DataType: int32
  OrigDataType: int32
T_218: (in 0x00000003 : word32)
  Class: Eq_218
  DataType: word32
  OrigDataType: word32
T_219: (in dwLoc90_221 >> 0x00000003 << 0x00000003 : word32)
  Class: Eq_219
  DataType: int32
  OrigDataType: int32
T_220: (in dwLoc28_173 - ((dwLoc90_221 >> 0x00000003) << 0x00000003) : word32)
  Class: Eq_215
  DataType: Eq_215
  OrigDataType: int32
T_221: (in 0x00000003 : word32)
  Class: Eq_221
  DataType: word32
  OrigDataType: word32
T_222: (in edx_229 << 0x00000003 : word32)
  Class: Eq_222
  DataType: Eq_222
  OrigDataType: (union (int32 u0) (ptr32 u1))
T_223: (in (edx_229 << 0x00000003) - edx_229 : word32)
  Class: Eq_223
  DataType: Eq_223
  OrigDataType: (union (int32 u0) (ptr32 u1))
T_224: (in (edx_229 << 0x00000003) - edx_229 + dwLoc20_179 : word32)
  Class: Eq_224
  DataType: Eq_224
  OrigDataType: (union (int32 u0) (ptr32 u1))
T_225: (in 0x0804AB40 : word32)
  Class: Eq_225
  DataType: (ptr (arr int32))
  OrigDataType: (ptr (struct (0 (arr T_283) a0000)))
T_226: (in 0x00000004 : word32)
  Class: Eq_226
  DataType: ui32
  OrigDataType: ui32
T_227: (in edx_216 * 0x00000004 : word32)
  Class: Eq_227
  DataType: ui32
  OrigDataType: ui32
T_228: (in 0x0804AB40[edx_216 * 0x00000004] : word32)
  Class: Eq_228
  DataType: int32
  OrigDataType: int32
T_229: (in (edx_229 << 0x00000003) - edx_229 + dwLoc20_179 + 0x0804AB40[edx_216 * 0x00000004] : word32)
  Class: Eq_229
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_230 t0000)))
T_230: (in Mem17[(edx_229 << 0x00000003) - edx_229 + dwLoc20_179 + 0x0804AB40[edx_216 * 0x00000004]:byte] : byte)
  Class: Eq_230
  DataType: byte
  OrigDataType: byte
T_231: (in 0x00000070 : word32)
  Class: Eq_231
  DataType: ui32
  OrigDataType: ui32
T_232: (in eax_202 - 0x00000070 : word32)
  Class: Eq_232
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_235 t0000)))
T_233: (in 0x00000000 : word32)
  Class: Eq_233
  DataType: word32
  OrigDataType: word32
T_234: (in eax_202 - 0x00000070 + 0x00000000 : word32)
  Class: Eq_234
  DataType: ptr32
  OrigDataType: ptr32
T_235: (in Mem239[eax_202 - 0x00000070 + 0x00000000:byte] : byte)
  Class: Eq_230
  DataType: byte
  OrigDataType: byte
T_236: (in 0x00000001 : word32)
  Class: Eq_236
  DataType: int32
  OrigDataType: (union (int32 u0) (ptr32 u1))
T_237: (in dwLoc20_179 + 0x00000001 : word32)
  Class: Eq_178
  DataType: Eq_178
  OrigDataType: (union (int32 u0) (ptr32 u1))
T_238: (in 0x00000007 : word32)
  Class: Eq_238
  DataType: word32
  OrigDataType: word32
T_239: (in dwLoc28_173 + 0x00000007 : word32)
  Class: Eq_151
  DataType: int32
  OrigDataType: word32
T_240: (in 0x00000006 : word32)
  Class: Eq_178
  DataType: int32
  OrigDataType: int32
T_241: (in dwLoc20_179 <= 0x00000006 : bool)
  Class: Eq_241
  DataType: bool
  OrigDataType: bool
T_242: (in 0x00 : byte)
  Class: Eq_242
  DataType: Eq_242
  OrigDataType: byte
T_243: (in 0x0000007C : word32)
  Class: Eq_243
  DataType: ui32
  OrigDataType: ui32
T_244: (in fp - 0x0000007C : word32)
  Class: Eq_244
  DataType: (ptr (arr Eq_242))
  OrigDataType: (ptr (struct (0 (arr T_284) a0000)))
T_245: (in fp - 0x0000007C + dwLoc1C_137 : word32)
  Class: Eq_245
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (struct (0 T_246 t0000)))
T_246: (in Mem163[fp - 0x0000007C + dwLoc1C_137:byte] : byte)
  Class: Eq_242
  DataType: Eq_242
  OrigDataType: byte
T_247: (in 0x00000001 : word32)
  Class: Eq_247
  DataType: int32
  OrigDataType: int32
T_248: (in dwLoc1C_137 - 0x00000001 : word32)
  Class: Eq_156
  DataType: int32
  OrigDataType: int32
T_249: (in 0x00000000 : word32)
  Class: Eq_156
  DataType: int32
  OrigDataType: int32
T_250: (in dwLoc1C_137 >= 0x00000000 : bool)
  Class: Eq_250
  DataType: bool
  OrigDataType: bool
T_251: (in _init : ptr32)
  Class: Eq_251
  DataType: (ptr Eq_251)
  OrigDataType: (ptr (fn T_253 ()))
T_252: (in signature of _init : void)
  Class: Eq_251
  DataType: (ptr Eq_251)
  OrigDataType: 
T_253: (in _init() : void)
  Class: Eq_253
  DataType: void
  OrigDataType: void
T_254: (in true : bool)
  Class: Eq_254
  DataType: bool
  OrigDataType: bool
T_255: (in false : bool)
  Class: Eq_255
  DataType: bool
  OrigDataType: bool
T_256: (in _fini : ptr32)
  Class: Eq_256
  DataType: (ptr Eq_256)
  OrigDataType: (ptr (fn T_258 ()))
T_257: (in signature of _fini : void)
  Class: Eq_256
  DataType: (ptr Eq_256)
  OrigDataType: 
T_258: (in _fini() : void)
  Class: Eq_258
  DataType: void
  OrigDataType: void
T_259: (in eax_13 : (ptr code))
  Class: Eq_259
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_260: (in 0x0804AD58 : word32)
  Class: Eq_260
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_261 t0000)))
T_261: (in Mem0[0x0804AD58:word32] : word32)
  Class: Eq_259
  DataType: (ptr code)
  OrigDataType: word32
T_262: (in 0xFFFFFFFF : word32)
  Class: Eq_259
  DataType: (ptr code)
  OrigDataType: word32
T_263: (in eax_13 == (<anonymous> *) 0xFFFFFFFF : bool)
  Class: Eq_263
  DataType: bool
  OrigDataType: bool
T_264: (in esp_29 : word32)
  Class: Eq_264
  DataType: word32
  OrigDataType: word32
T_265: (in ebp_30 : word32)
  Class: Eq_265
  DataType: word32
  OrigDataType: word32
T_266: (in ebx_31 : (ptr word32))
  Class: Eq_266
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_273 t0000)))
T_267: (in edx_32 : word32)
  Class: Eq_267
  DataType: word32
  OrigDataType: word32
T_268: (in eax_33 : word32)
  Class: Eq_268
  DataType: word32
  OrigDataType: word32
T_269: (in SCZO_34 : byte)
  Class: Eq_269
  DataType: byte
  OrigDataType: byte
T_270: (in Z_35 : byte)
  Class: Eq_270
  DataType: byte
  OrigDataType: byte
T_271: (in 0x00000000 : word32)
  Class: Eq_271
  DataType: word32
  OrigDataType: word32
T_272: (in ebx_31 + 0x00000000 : word32)
  Class: Eq_272
  DataType: word32
  OrigDataType: word32
T_273: (in Mem0[ebx_31 + 0x00000000:word32] : word32)
  Class: Eq_273
  DataType: word32
  OrigDataType: word32
T_274: (in 0xFFFFFFFF : word32)
  Class: Eq_273
  DataType: word32
  OrigDataType: word32
T_275: (in *ebx_31 != 0xFFFFFFFF : bool)
  Class: Eq_275
  DataType: bool
  OrigDataType: bool
T_276: (in __do_global_dtors_aux : ptr32)
  Class: Eq_276
  DataType: (ptr Eq_276)
  OrigDataType: (ptr (fn T_278 ()))
T_277: (in signature of __do_global_dtors_aux : void)
  Class: Eq_276
  DataType: (ptr Eq_276)
  OrigDataType: 
T_278: (in __do_global_dtors_aux() : void)
  Class: Eq_278
  DataType: void
  OrigDataType: void
T_279:
  Class: Eq_107
  DataType: word32
  OrigDataType: (struct 0004 (0 word32 dw0000))
T_280:
  Class: Eq_169
  DataType: Eq_169
  OrigDataType: (struct 0001 (0 T_169 t0000))
T_281:
  Class: Eq_169
  DataType: Eq_169
  OrigDataType: (arr Eq_169)
T_282:
  Class: Eq_282
  DataType: Eq_282
  OrigDataType: (struct 0008 (0 T_198 t0000))
T_283:
  Class: Eq_283
  DataType: int32
  OrigDataType: (struct 0004 (0 T_228 t0000))
T_284:
  Class: Eq_242
  DataType: Eq_242
  OrigDataType: (struct 0001 (0 T_246 t0000))
T_285:
  Class: Eq_242
  DataType: Eq_242
  OrigDataType: (arr Eq_242)
*/
typedef struct Globals {
	<anonymous> tFFFFFFFF;	// FFFFFFFF
	word32 a0004[2];	// 4
	<anonymous> t80482B6;	// 80482B6
	<anonymous> t80482C6;	// 80482C6
	<anonymous> t80482D6;	// 80482D6
	Eq_127 t8049B04;	// 8049B04
	<anonymous> ** ptr804AB28;	// 804AB28
	int32 a804AB40[];	// 804AB40
	<anonymous> * ptr804AD58;	// 804AD58
	<anonymous> * ptr804AD64;	// 804AD64
	word32 dw804AD68;	// 804AD68
	<anonymous> * ptr804AD7C;	// 804AD7C
	<anonymous> * ptr804AD80;	// 804AD80
	<anonymous> * ptr804AD84;	// 804AD84
	<anonymous> * ptr804AD88;	// 804AD88
	byte b804AD8C;	// 804AD8C
} Eq_1;

typedef void (Eq_2)();

typedef void (Eq_5)();

typedef void (Eq_8)();

typedef void (Eq_21)(ptr32);

typedef void (Eq_26)();

typedef void (Eq_29)();

typedef void (Eq_99)(ptr32);

typedef void (Eq_104)();

typedef void (Eq_114)();

typedef int32 (Eq_125)( *, int32, char * *,  *,  *,  *, void);

typedef int32 (Eq_127)(int32, char * *, char * *);

typedef void (Eq_130)();

typedef void (Eq_131)();

typedef void (Eq_132)();

typedef struct Eq_169 {	// size: 1 1
	Eq_169 a0000[];	// 0
} Eq_169;

typedef union Eq_178 {
	int32 u0;
	ptr32 u1;
} Eq_178;

typedef union Eq_199 {
	int32 u0;
	ptr32 u1;
} Eq_199;

typedef union Eq_215 {
	int32 u0;
	ptr32 u1;
} Eq_215;

typedef union Eq_222 {
	int32 u0;
	ptr32 u1;
} Eq_222;

typedef union Eq_223 {
	int32 u0;
	ptr32 u1;
} Eq_223;

typedef union Eq_224 {
	int32 u0;
	ptr32 u1;
} Eq_224;

typedef union Eq_236 {
	int32 u0;
	ptr32 u1;
} Eq_236;

typedef struct Eq_242 {	// size: 1 1
	Eq_242 a0000[];	// 0
} Eq_242;

typedef void (Eq_251)();

typedef void (Eq_256)();

typedef void (Eq_276)();

typedef struct Eq_282 {	// size: 8 8
	byte b0000;	// 0
} Eq_282;

