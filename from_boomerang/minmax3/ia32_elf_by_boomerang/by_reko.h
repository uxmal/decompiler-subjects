// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (804825E code t804825E) (804826E code t804826E) (8049488 (ptr code) ptr8049488) (8049494 (ptr (ptr code)) ptr8049494) (8049560 (ptr code) ptr8049560) (804956C (ptr code) ptr804956C) (8049570 word32 dw8049570) (8049580 (ptr code) ptr8049580) (8049584 (ptr code) ptr8049584) (8049588 (ptr code) ptr8049588) (804958C byte b804958C))
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
Eq_97: (fn void ())
	T_97 (in printf@@GLIBC_2.0 : ptr32)
	T_98 (in signature of printf@@GLIBC_2.0 : void)
Eq_101: (fn void (ptr32))
	T_101 (in __align : ptr32)
Eq_106: (fn void (word32))
	T_106 (in test : ptr32)
	T_107 (in signature of test : void)
	T_110 (in test : ptr32)
	T_113 (in test : ptr32)
	T_116 (in test : ptr32)
	T_119 (in test : ptr32)
Eq_122: (fn void ())
	T_122 (in _init : ptr32)
	T_123 (in signature of _init : void)
Eq_141: (fn void ())
	T_141 (in _fini : ptr32)
	T_142 (in signature of _fini : void)
Eq_161: (fn void ())
	T_161 (in __do_global_dtors_aux : ptr32)
	T_162 (in signature of __do_global_dtors_aux : void)
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
T_12: (in 0x08049580 : ptr32)
  Class: Eq_12
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_13 t0000)))
T_13: (in Mem0[0x08049580:word32] : word32)
  Class: Eq_13
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_14: (in esp_3 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in 0x08049584 : ptr32)
  Class: Eq_15
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_16 t0000)))
T_16: (in Mem0[0x08049584:word32] : word32)
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
T_29: (in 08049588 : ptr32)
  Class: Eq_29
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_32 t0000)))
T_30: (in 0x00000000 : word32)
  Class: Eq_30
  DataType: word32
  OrigDataType: word32
T_31: (in 0x08049588 + 0x00000000 : word32)
  Class: Eq_31
  DataType: ptr32
  OrigDataType: ptr32
T_32: (in Mem0[0x08049588 + 0x00000000:word32] : word32)
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
T_43: (in 0x0804958C : ptr32)
  Class: Eq_43
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_44 t0000)))
T_44: (in Mem0[0x0804958C:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in 0x00 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_46: (in globals->b804958C != 0x00 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in eax_25 : (ptr (ptr code)))
  Class: Eq_47
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_50 t0000)))
T_48: (in 0x08049494 : word32)
  Class: Eq_48
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_49 t0000)))
T_49: (in Mem0[0x08049494:word32] : word32)
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
T_57: (in 0x0804958C : ptr32)
  Class: Eq_57
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_58 t0000)))
T_58: (in Mem39[0x0804958C:byte] : byte)
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
T_62: (in 0x08049494 : word32)
  Class: Eq_62
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_63 t0000)))
T_63: (in Mem44[0x08049494:word32] : word32)
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
T_73: (in 0x08049494 : word32)
  Class: Eq_73
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_74 t0000)))
T_74: (in Mem44[0x08049494:word32] : word32)
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
T_80: (in 0x08049570 : word32)
  Class: Eq_80
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_81 t0000)))
T_81: (in Mem0[0x08049570:word32] : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in 0x00000000 : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_83: (in globals->dw8049570 == 0x00000000 : bool)
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
T_96: (in dwArg04 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in printf@@GLIBC_2.0 : ptr32)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: (ptr (fn T_99 ()))
T_98: (in signature of printf@@GLIBC_2.0 : void)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: 
T_99: (in printf@@GLIBC_2.0() : void)
  Class: Eq_99
  DataType: void
  OrigDataType: void
T_100: (in dwArg04 : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_101: (in __align : ptr32)
  Class: Eq_101
  DataType: (ptr Eq_101)
  OrigDataType: (ptr (fn T_105 (T_104)))
T_102: (in fp : ptr32)
  Class: Eq_102
  DataType: ptr32
  OrigDataType: ptr32
T_103: (in 0x0000000C : word32)
  Class: Eq_103
  DataType: ui32
  OrigDataType: ui32
T_104: (in fp - 0x0000000C : word32)
  Class: Eq_104
  DataType: ptr32
  OrigDataType: ptr32
T_105: (in __align(fp - 0x0000000C) : void)
  Class: Eq_105
  DataType: void
  OrigDataType: void
T_106: (in test : ptr32)
  Class: Eq_106
  DataType: (ptr Eq_106)
  OrigDataType: (ptr (fn T_109 (T_108)))
T_107: (in signature of test : void)
  Class: Eq_106
  DataType: (ptr Eq_106)
  OrigDataType: 
T_108: (in 0xFFFFFFFB : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_109: (in test(0xFFFFFFFB) : void)
  Class: Eq_109
  DataType: void
  OrigDataType: void
T_110: (in test : ptr32)
  Class: Eq_106
  DataType: (ptr Eq_106)
  OrigDataType: (ptr (fn T_112 (T_111)))
T_111: (in 0xFFFFFFFE : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_112: (in test(0xFFFFFFFE) : void)
  Class: Eq_109
  DataType: void
  OrigDataType: void
T_113: (in test : ptr32)
  Class: Eq_106
  DataType: (ptr Eq_106)
  OrigDataType: (ptr (fn T_115 (T_114)))
T_114: (in 0x00000000 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_115: (in test(0x00000000) : void)
  Class: Eq_109
  DataType: void
  OrigDataType: void
T_116: (in test : ptr32)
  Class: Eq_106
  DataType: (ptr Eq_106)
  OrigDataType: (ptr (fn T_118 (T_117)))
T_117: (in dwArg04 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_118: (in test(dwArg04) : void)
  Class: Eq_109
  DataType: void
  OrigDataType: void
T_119: (in test : ptr32)
  Class: Eq_106
  DataType: (ptr Eq_106)
  OrigDataType: (ptr (fn T_121 (T_120)))
T_120: (in 0x00000005 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_121: (in test(0x00000005) : void)
  Class: Eq_109
  DataType: void
  OrigDataType: void
T_122: (in _init : ptr32)
  Class: Eq_122
  DataType: (ptr Eq_122)
  OrigDataType: (ptr (fn T_124 ()))
T_123: (in signature of _init : void)
  Class: Eq_122
  DataType: (ptr Eq_122)
  OrigDataType: 
T_124: (in _init() : void)
  Class: Eq_124
  DataType: void
  OrigDataType: void
T_125: (in true : bool)
  Class: Eq_125
  DataType: bool
  OrigDataType: bool
T_126: (in false : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in esp_34 : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in ebp_35 : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in ebx_36 : word32)
  Class: Eq_129
  DataType: word32
  OrigDataType: word32
T_130: (in eax_37 : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in SCZO_38 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in SZO_39 : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_133: (in C_40 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in Z_41 : byte)
  Class: Eq_134
  DataType: byte
  OrigDataType: byte
T_135: (in None_42 : bcuiposr0)
  Class: Eq_135
  DataType: bcuiposr0
  OrigDataType: bcuiposr0
T_136: (in edx_43 : word32)
  Class: Eq_136
  DataType: word32
  OrigDataType: word32
T_137: (in 0x08049488 : word32)
  Class: Eq_137
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_138 t0000)))
T_138: (in Mem0[0x08049488:word32] : word32)
  Class: Eq_138
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_139: (in 0x00000000 : word32)
  Class: Eq_129
  DataType: word32
  OrigDataType: word32
T_140: (in ebx_36 != 0x00000000 : bool)
  Class: Eq_140
  DataType: bool
  OrigDataType: bool
T_141: (in _fini : ptr32)
  Class: Eq_141
  DataType: (ptr Eq_141)
  OrigDataType: (ptr (fn T_143 ()))
T_142: (in signature of _fini : void)
  Class: Eq_141
  DataType: (ptr Eq_141)
  OrigDataType: 
T_143: (in _fini() : void)
  Class: Eq_143
  DataType: void
  OrigDataType: void
T_144: (in eax_13 : (ptr code))
  Class: Eq_144
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_145: (in 0x08049560 : word32)
  Class: Eq_145
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_146 t0000)))
T_146: (in Mem0[0x08049560:word32] : word32)
  Class: Eq_144
  DataType: (ptr code)
  OrigDataType: word32
T_147: (in 0xFFFFFFFF : word32)
  Class: Eq_144
  DataType: (ptr code)
  OrigDataType: word32
T_148: (in eax_13 == (<anonymous> *) 0xFFFFFFFF : bool)
  Class: Eq_148
  DataType: bool
  OrigDataType: bool
T_149: (in esp_29 : word32)
  Class: Eq_149
  DataType: word32
  OrigDataType: word32
T_150: (in ebp_30 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in ebx_31 : (ptr word32))
  Class: Eq_151
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_158 t0000)))
T_152: (in edx_32 : word32)
  Class: Eq_152
  DataType: word32
  OrigDataType: word32
T_153: (in eax_33 : word32)
  Class: Eq_153
  DataType: word32
  OrigDataType: word32
T_154: (in SCZO_34 : byte)
  Class: Eq_154
  DataType: byte
  OrigDataType: byte
T_155: (in Z_35 : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_156: (in 0x00000000 : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_157: (in ebx_31 + 0x00000000 : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_158: (in Mem0[ebx_31 + 0x00000000:word32] : word32)
  Class: Eq_158
  DataType: word32
  OrigDataType: word32
T_159: (in 0xFFFFFFFF : word32)
  Class: Eq_158
  DataType: word32
  OrigDataType: word32
T_160: (in *ebx_31 != 0xFFFFFFFF : bool)
  Class: Eq_160
  DataType: bool
  OrigDataType: bool
T_161: (in __do_global_dtors_aux : ptr32)
  Class: Eq_161
  DataType: (ptr Eq_161)
  OrigDataType: (ptr (fn T_163 ()))
T_162: (in signature of __do_global_dtors_aux : void)
  Class: Eq_161
  DataType: (ptr Eq_161)
  OrigDataType: 
T_163: (in __do_global_dtors_aux() : void)
  Class: Eq_163
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
	<anonymous> tFFFFFFFF;	// FFFFFFFF
	<anonymous> t804825E;	// 804825E
	<anonymous> t804826E;	// 804826E
	<anonymous> * ptr8049488;	// 8049488
	<anonymous> ** ptr8049494;	// 8049494
	<anonymous> * ptr8049560;	// 8049560
	<anonymous> * ptr804956C;	// 804956C
	word32 dw8049570;	// 8049570
	<anonymous> * ptr8049580;	// 8049580
	<anonymous> * ptr8049584;	// 8049584
	<anonymous> * ptr8049588;	// 8049588
	byte b804958C;	// 804958C
} Eq_1;

typedef void (Eq_2)();

typedef void (Eq_5)();

typedef void (Eq_8)();

typedef void (Eq_18)(ptr32);

typedef void (Eq_23)();

typedef void (Eq_26)();

typedef void (Eq_97)();

typedef void (Eq_101)(ptr32);

typedef void (Eq_106)(word32);

typedef void (Eq_122)();

typedef void (Eq_141)();

typedef void (Eq_161)();

