// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (804825E code t804825E) (804826E code t804826E) (80494A0 (ptr code) ptr80494A0) (80494AC (ptr (ptr code)) ptr80494AC) (8049578 (ptr code) ptr8049578) (8049584 (ptr code) ptr8049584) (8049588 word32 dw8049588) (8049598 (ptr code) ptr8049598) (804959C (ptr code) ptr804959C) (80495A0 (ptr code) ptr80495A0) (80495A4 byte b80495A4))
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
Eq_18: (fn void (ptr32))
	T_18 (in __align : ptr32)
Eq_23: (fn void ())
	T_23 (in __libc_start_main@@GLIBC_2.0 : ptr32)
	T_24 (in signature of __libc_start_main@@GLIBC_2.0 : void)
Eq_26: (fn void ())
	T_26 (in __hlt : ptr32)
Eq_98: (fn void (ptr32))
	T_98 (in __align : ptr32)
Eq_112: (fn void ())
	T_112 (in printf@@GLIBC_2.0 : ptr32)
	T_113 (in signature of printf@@GLIBC_2.0 : void)
	T_117 (in printf@@GLIBC_2.0 : ptr32)
	T_119 (in printf@@GLIBC_2.0 : ptr32)
Eq_131: (fn void ())
	T_131 (in _init : ptr32)
	T_132 (in signature of _init : void)
Eq_150: (fn void ())
	T_150 (in _fini : ptr32)
	T_151 (in signature of _fini : void)
Eq_170: (fn void ())
	T_170 (in __do_global_dtors_aux : ptr32)
	T_171 (in signature of __do_global_dtors_aux : void)
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
T_12: (in 0x08049598 : ptr32)
  Class: Eq_12
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_13 t0000)))
T_13: (in Mem0[0x08049598:word32] : word32)
  Class: Eq_13
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_14: (in esp_3 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in 0x0804959C : ptr32)
  Class: Eq_15
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_16 t0000)))
T_16: (in Mem0[0x0804959C:word32] : word32)
  Class: Eq_16
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_17: (in dwArg00 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in __align : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_22 (T_21)))
T_19: (in fp : ptr32)
  Class: Eq_19
  DataType: ptr32
  OrigDataType: ptr32
T_20: (in 0x00000004 : word32)
  Class: Eq_20
  DataType: int32
  OrigDataType: int32
T_21: (in fp + 0x00000004 : word32)
  Class: Eq_21
  DataType: ptr32
  OrigDataType: ptr32
T_22: (in __align(fp + 0x00000004) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in __libc_start_main@@GLIBC_2.0 : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_25 ()))
T_24: (in signature of __libc_start_main@@GLIBC_2.0 : void)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: 
T_25: (in __libc_start_main@@GLIBC_2.0() : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in __hlt : ptr32)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn T_27 ()))
T_27: (in __hlt() : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in eax_15 : (ptr code))
  Class: Eq_28
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_29: (in 080495A0 : ptr32)
  Class: Eq_29
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_32 t0000)))
T_30: (in 0x00000000 : word32)
  Class: Eq_30
  DataType: word32
  OrigDataType: word32
T_31: (in 0x080495A0 + 0x00000000 : word32)
  Class: Eq_31
  DataType: ptr32
  OrigDataType: ptr32
T_32: (in Mem0[0x080495A0 + 0x00000000:word32] : word32)
  Class: Eq_28
  DataType: (ptr code)
  OrigDataType: word32
T_33: (in 0x00000000 : word32)
  Class: Eq_28
  DataType: (ptr code)
  OrigDataType: word32
T_34: (in eax_15 == null : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in esp_29 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_36: (in ebp_30 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in ebx_31 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in eax_32 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in SCZO_33 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in SZO_34 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in C_35 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in Z_36 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in 0x080495A4 : ptr32)
  Class: Eq_43
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_44 t0000)))
T_44: (in Mem0[0x080495A4:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in 0x00 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_46: (in globals->b80495A4 != 0x00 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in eax_25 : (ptr (ptr code)))
  Class: Eq_47
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_50 t0000)))
T_48: (in 0x080494AC : word32)
  Class: Eq_48
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_49 t0000)))
T_49: (in Mem0[0x080494AC:word32] : word32)
  Class: Eq_47
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_50: (in edx_26 : (ptr code))
  Class: Eq_50
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_51: (in 0x00000000 : word32)
  Class: Eq_51
  DataType: word32
  OrigDataType: word32
T_52: (in eax_25 + 0x00000000 : word32)
  Class: Eq_52
  DataType: word32
  OrigDataType: word32
T_53: (in Mem0[eax_25 + 0x00000000:word32] : word32)
  Class: Eq_50
  DataType: (ptr code)
  OrigDataType: word32
T_54: (in 0x00000000 : word32)
  Class: Eq_50
  DataType: (ptr code)
  OrigDataType: word32
T_55: (in edx_26 == null : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in 0x01 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_57: (in 0x080495A4 : ptr32)
  Class: Eq_57
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_58 t0000)))
T_58: (in Mem39[0x080495A4:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_59: (in eax_42 : (ptr (ptr code)))
  Class: Eq_47
  DataType: (ptr (ptr code))
  OrigDataType: ptr32
T_60: (in 0x00000004 : word32)
  Class: Eq_60
  DataType: int32
  OrigDataType: int32
T_61: (in eax_25 + 0x00000004 : word32)
  Class: Eq_47
  DataType: (ptr (ptr code))
  OrigDataType: ptr32
T_62: (in 0x080494AC : word32)
  Class: Eq_62
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_63 t0000)))
T_63: (in Mem44[0x080494AC:word32] : word32)
  Class: Eq_47
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_64: (in esp_45 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_65: (in ebp_46 : word32)
  Class: Eq_65
  DataType: word32
  OrigDataType: word32
T_66: (in SCZO_47 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in Z_48 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in eax_49 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in edx_50 : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_70: (in SZO_51 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in C_52 : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in esi_53 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in 0x080494AC : word32)
  Class: Eq_73
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_74 t0000)))
T_74: (in Mem44[0x080494AC:word32] : word32)
  Class: Eq_47
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_75: (in 0x00000000 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in eax_25 + 0x00000000 : word32)
  Class: Eq_76
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_77: (in Mem44[eax_25 + 0x00000000:word32] : word32)
  Class: Eq_50
  DataType: (ptr code)
  OrigDataType: word32
T_78: (in 0x00000000 : word32)
  Class: Eq_50
  DataType: (ptr code)
  OrigDataType: word32
T_79: (in *eax_25 != null : bool)
  Class: Eq_79
  DataType: bool
  OrigDataType: bool
T_80: (in 0x08049588 : word32)
  Class: Eq_80
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_81 t0000)))
T_81: (in Mem0[0x08049588:word32] : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in 0x00000000 : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_83: (in globals->dw8049588 == 0x00000000 : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_84: (in 0x00000000 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in 0x00000000 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_86: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in esp_31 : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_88: (in ebp_32 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in SCZO_33 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in eax_34 : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_91: (in SZO_35 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in C_36 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_93: (in Z_37 : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_94: (in fn00000000 : ptr32)
  Class: Eq_94
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_95: (in signature of fn00000000 : void)
  Class: Eq_94
  DataType: (ptr code)
  OrigDataType: 
T_96: (in ebp : ptr32)
  Class: Eq_96
  DataType: ptr32
  OrigDataType: ptr32
T_97: (in dwArg04 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in __align : ptr32)
  Class: Eq_98
  DataType: (ptr Eq_98)
  OrigDataType: (ptr (fn T_102 (T_101)))
T_99: (in fp : ptr32)
  Class: Eq_99
  DataType: ptr32
  OrigDataType: ptr32
T_100: (in 0x0000000C : word32)
  Class: Eq_100
  DataType: ui32
  OrigDataType: ui32
T_101: (in fp - 0x0000000C : word32)
  Class: Eq_101
  DataType: ptr32
  OrigDataType: ptr32
T_102: (in __align(fp - 0x0000000C) : void)
  Class: Eq_102
  DataType: void
  OrigDataType: void
T_103: (in dwArg04 : word32)
  Class: Eq_103
  DataType: int32
  OrigDataType: int32
T_104: (in 0x00000002 : word32)
  Class: Eq_103
  DataType: int32
  OrigDataType: int32
T_105: (in dwArg04 <= 0x00000002 : bool)
  Class: Eq_105
  DataType: bool
  OrigDataType: bool
T_106: (in 0x0000000B : word32)
  Class: Eq_103
  DataType: int32
  OrigDataType: word32
T_107: (in dwArg04 != 0x0000000B : bool)
  Class: Eq_107
  DataType: bool
  OrigDataType: bool
T_108: (in 0x00000002 : word32)
  Class: Eq_103
  DataType: int32
  OrigDataType: int32
T_109: (in dwArg04 <= 0x00000002 : bool)
  Class: Eq_109
  DataType: bool
  OrigDataType: bool
T_110: (in 0x00000003 : word32)
  Class: Eq_103
  DataType: int32
  OrigDataType: int32
T_111: (in dwArg04 <= 0x00000003 : bool)
  Class: Eq_111
  DataType: bool
  OrigDataType: bool
T_112: (in printf@@GLIBC_2.0 : ptr32)
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: (ptr (fn T_114 ()))
T_113: (in signature of printf@@GLIBC_2.0 : void)
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: 
T_114: (in printf@@GLIBC_2.0() : void)
  Class: Eq_114
  DataType: void
  OrigDataType: void
T_115: (in 0x0000000B : word32)
  Class: Eq_103
  DataType: int32
  OrigDataType: int32
T_116: (in dwArg04 <= 0x0000000B : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in printf@@GLIBC_2.0 : ptr32)
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: (ptr (fn T_118 ()))
T_118: (in printf@@GLIBC_2.0() : void)
  Class: Eq_114
  DataType: void
  OrigDataType: void
T_119: (in printf@@GLIBC_2.0 : ptr32)
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: (ptr (fn T_120 ()))
T_120: (in printf@@GLIBC_2.0() : void)
  Class: Eq_114
  DataType: void
  OrigDataType: void
T_121: (in 0x00000005 : word32)
  Class: Eq_103
  DataType: int32
  OrigDataType: int32
T_122: (in dwArg04 <= 0x00000005 : bool)
  Class: Eq_122
  DataType: bool
  OrigDataType: bool
T_123: (in 0x00000004 : word32)
  Class: Eq_103
  DataType: int32
  OrigDataType: int32
T_124: (in dwArg04 <= 0x00000004 : bool)
  Class: Eq_124
  DataType: bool
  OrigDataType: bool
T_125: (in 0x00000007 : word32)
  Class: Eq_125
  DataType: word32
  OrigDataType: word32
T_126: (in 0x00000004 : word32)
  Class: Eq_126
  DataType: ui32
  OrigDataType: ui32
T_127: (in ebp - 0x00000004 : word32)
  Class: Eq_127
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_130 t0000)))
T_128: (in 0x00000000 : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in ebp - 0x00000004 + 0x00000000 : word32)
  Class: Eq_129
  DataType: word32
  OrigDataType: word32
T_130: (in Mem22[ebp - 0x00000004 + 0x00000000:word32] : word32)
  Class: Eq_125
  DataType: word32
  OrigDataType: word32
T_131: (in _init : ptr32)
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: (ptr (fn T_133 ()))
T_132: (in signature of _init : void)
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: 
T_133: (in _init() : void)
  Class: Eq_133
  DataType: void
  OrigDataType: void
T_134: (in true : bool)
  Class: Eq_134
  DataType: bool
  OrigDataType: bool
T_135: (in false : bool)
  Class: Eq_135
  DataType: bool
  OrigDataType: bool
T_136: (in esp_34 : word32)
  Class: Eq_136
  DataType: word32
  OrigDataType: word32
T_137: (in ebp_35 : word32)
  Class: Eq_137
  DataType: word32
  OrigDataType: word32
T_138: (in ebx_36 : word32)
  Class: Eq_138
  DataType: word32
  OrigDataType: word32
T_139: (in eax_37 : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in SCZO_38 : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_141: (in SZO_39 : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_142: (in C_40 : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_143: (in Z_41 : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_144: (in None_42 : bcuiposr0)
  Class: Eq_144
  DataType: bcuiposr0
  OrigDataType: bcuiposr0
T_145: (in edx_43 : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in 0x080494A0 : word32)
  Class: Eq_146
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_147 t0000)))
T_147: (in Mem0[0x080494A0:word32] : word32)
  Class: Eq_147
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_148: (in 0x00000000 : word32)
  Class: Eq_138
  DataType: word32
  OrigDataType: word32
T_149: (in ebx_36 != 0x00000000 : bool)
  Class: Eq_149
  DataType: bool
  OrigDataType: bool
T_150: (in _fini : ptr32)
  Class: Eq_150
  DataType: (ptr Eq_150)
  OrigDataType: (ptr (fn T_152 ()))
T_151: (in signature of _fini : void)
  Class: Eq_150
  DataType: (ptr Eq_150)
  OrigDataType: 
T_152: (in _fini() : void)
  Class: Eq_152
  DataType: void
  OrigDataType: void
T_153: (in eax_13 : (ptr code))
  Class: Eq_153
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_154: (in 0x08049578 : word32)
  Class: Eq_154
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_155 t0000)))
T_155: (in Mem0[0x08049578:word32] : word32)
  Class: Eq_153
  DataType: (ptr code)
  OrigDataType: word32
T_156: (in 0xFFFFFFFF : word32)
  Class: Eq_153
  DataType: (ptr code)
  OrigDataType: word32
T_157: (in eax_13 == (<anonymous> *) 0xFFFFFFFF : bool)
  Class: Eq_157
  DataType: bool
  OrigDataType: bool
T_158: (in esp_29 : word32)
  Class: Eq_158
  DataType: word32
  OrigDataType: word32
T_159: (in ebp_30 : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_160: (in ebx_31 : (ptr word32))
  Class: Eq_160
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_167 t0000)))
T_161: (in edx_32 : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_162: (in eax_33 : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in SCZO_34 : byte)
  Class: Eq_163
  DataType: byte
  OrigDataType: byte
T_164: (in Z_35 : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_165: (in 0x00000000 : word32)
  Class: Eq_165
  DataType: word32
  OrigDataType: word32
T_166: (in ebx_31 + 0x00000000 : word32)
  Class: Eq_166
  DataType: word32
  OrigDataType: word32
T_167: (in Mem0[ebx_31 + 0x00000000:word32] : word32)
  Class: Eq_167
  DataType: word32
  OrigDataType: word32
T_168: (in 0xFFFFFFFF : word32)
  Class: Eq_167
  DataType: word32
  OrigDataType: word32
T_169: (in *ebx_31 != 0xFFFFFFFF : bool)
  Class: Eq_169
  DataType: bool
  OrigDataType: bool
T_170: (in __do_global_dtors_aux : ptr32)
  Class: Eq_170
  DataType: (ptr Eq_170)
  OrigDataType: (ptr (fn T_172 ()))
T_171: (in signature of __do_global_dtors_aux : void)
  Class: Eq_170
  DataType: (ptr Eq_170)
  OrigDataType: 
T_172: (in __do_global_dtors_aux() : void)
  Class: Eq_172
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
	<anonymous> tFFFFFFFF;	// FFFFFFFF
	<anonymous> t804825E;	// 804825E
	<anonymous> t804826E;	// 804826E
	<anonymous> * ptr80494A0;	// 80494A0
	<anonymous> ** ptr80494AC;	// 80494AC
	<anonymous> * ptr8049578;	// 8049578
	<anonymous> * ptr8049584;	// 8049584
	word32 dw8049588;	// 8049588
	<anonymous> * ptr8049598;	// 8049598
	<anonymous> * ptr804959C;	// 804959C
	<anonymous> * ptr80495A0;	// 80495A0
	byte b80495A4;	// 80495A4
} Eq_1;

typedef void (Eq_2)();

typedef void (Eq_5)();

typedef void (Eq_8)();

typedef void (Eq_18)(ptr32);

typedef void (Eq_23)();

typedef void (Eq_26)();

typedef void (Eq_98)(ptr32);

typedef void (Eq_112)();

typedef void (Eq_131)();

typedef void (Eq_150)();

typedef void (Eq_170)();

