// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (80482AE code t80482AE) (80482BE code t80482BE) (80482CE code t80482CE) (8049494 (ptr code) ptr8049494) (80494A0 (ptr code) ptr80494A0) (80494A4 word32 dw80494A4) (8049578 word32 dw8049578) (8049580 (ptr code) ptr8049580) (8049584 (ptr code) ptr8049584) (8049588 (ptr code) ptr8049588) (8049594 (ptr (ptr code)) ptr8049594) (8049598 byte b8049598))
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
	T_26 (in fn080482A8 : ptr32)
	T_27 (in signature of fn080482A8 : void)
Eq_29: (fn void ())
	T_29 (in __hlt : ptr32)
Eq_37: (fn void ())
	T_37 (in fn080482C8 : ptr32)
	T_38 (in signature of fn080482C8 : void)
Eq_89: (fn void (ptr32))
	T_89 (in __align : ptr32)
Eq_94: (fn void (word32, word32))
	T_94 (in cparam : ptr32)
	T_95 (in signature of cparam : void)
Eq_101: (fn void ())
	T_101 (in fn080482B8 : ptr32)
	T_102 (in signature of fn080482B8 : void)
Eq_104: (fn void ())
	T_104 (in _init : ptr32)
	T_105 (in signature of _init : void)
Eq_132: (union "Eq_132" (int32 u0) (uint32 u1))
	T_132 (in edi_58 + 0x00000001 : word32)
	T_133 (in eax_21 >> 0x00000002 : word32)
Eq_154: (fn void ())
	T_154 (in __do_global_dtors_aux : ptr32)
	T_155 (in signature of __do_global_dtors_aux : void)
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
T_17: (in esp_3 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in 0x08049588 : ptr32)
  Class: Eq_18
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_19 t0000)))
T_19: (in Mem0[0x08049588:word32] : word32)
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
T_26: (in fn080482A8 : ptr32)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn T_28 ()))
T_27: (in signature of fn080482A8 : void)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: 
T_28: (in fn080482A8() : void)
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
T_31: (in 08049578 : ptr32)
  Class: Eq_31
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_34 t0000)))
T_32: (in 0x00000000 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in 0x08049578 + 0x00000000 : word32)
  Class: Eq_33
  DataType: ptr32
  OrigDataType: ptr32
T_34: (in Mem0[0x08049578 + 0x00000000:word32] : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_35: (in 0x00000000 : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_36: (in globals->dw8049578 == 0x00000000 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in fn080482C8 : ptr32)
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (fn T_39 ()))
T_38: (in signature of fn080482C8 : void)
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: 
T_39: (in fn080482C8() : void)
  Class: Eq_39
  DataType: void
  OrigDataType: void
T_40: (in 0x08049598 : ptr32)
  Class: Eq_40
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_41 t0000)))
T_41: (in Mem0[0x08049598:byte] : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in 0x00 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_43: (in globals->b8049598 == 0x00 : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in eax_26 : (ptr (ptr code)))
  Class: Eq_44
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_50 t0000)))
T_45: (in 0x08049594 : word32)
  Class: Eq_45
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_46 t0000)))
T_46: (in Mem0[0x08049594:word32] : word32)
  Class: Eq_44
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_47: (in edx_27 : (ptr code))
  Class: Eq_47
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_48: (in 0x00000000 : word32)
  Class: Eq_48
  DataType: word32
  OrigDataType: word32
T_49: (in eax_26 + 0x00000000 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in Mem0[eax_26 + 0x00000000:word32] : word32)
  Class: Eq_47
  DataType: (ptr code)
  OrigDataType: word32
T_51: (in 0x00000000 : word32)
  Class: Eq_47
  DataType: (ptr code)
  OrigDataType: word32
T_52: (in edx_27 != null : bool)
  Class: Eq_52
  DataType: bool
  OrigDataType: bool
T_53: (in 0x00000004 : word32)
  Class: Eq_53
  DataType: int32
  OrigDataType: int32
T_54: (in eax_26 + 0x00000004 : word32)
  Class: Eq_44
  DataType: (ptr (ptr code))
  OrigDataType: ptr32
T_55: (in 0x08049594 : word32)
  Class: Eq_55
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_56 t0000)))
T_56: (in Mem34[0x08049594:word32] : word32)
  Class: Eq_44
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_57: (in esp_35 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_58: (in ebp_36 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in SCZO_37 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in Z_38 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in eax_39 : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_62: (in edx_40 : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_63: (in SZO_41 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in C_42 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in 0x01 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_66: (in 0x08049598 : ptr32)
  Class: Eq_66
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_67 t0000)))
T_67: (in Mem31[0x08049598:byte] : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_68: (in 0x080494A4 : word32)
  Class: Eq_68
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_69 t0000)))
T_69: (in Mem0[0x080494A4:word32] : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_70: (in 0x00000000 : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_71: (in globals->dw80494A4 == 0x00000000 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in 0x00000000 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in 0x00000000 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_74: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_74
  DataType: bool
  OrigDataType: bool
T_75: (in esp_31 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in ebp_32 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_77: (in SCZO_33 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in eax_34 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in SZO_35 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in C_36 : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_81: (in Z_37 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in 0x00000000 : word32)
  Class: Eq_82
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_83: (in dwArg04 : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_84: (in dwArg08 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in dwArg04 : word32)
  Class: Eq_85
  DataType: int32
  OrigDataType: int32
T_86: (in 0x00000000 : word32)
  Class: Eq_85
  DataType: int32
  OrigDataType: int32
T_87: (in dwArg04 >= 0x00000000 : bool)
  Class: Eq_87
  DataType: bool
  OrigDataType: bool
T_88: (in dwArg04 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in __align : ptr32)
  Class: Eq_89
  DataType: (ptr Eq_89)
  OrigDataType: (ptr (fn T_93 (T_92)))
T_90: (in fp : ptr32)
  Class: Eq_90
  DataType: ptr32
  OrigDataType: ptr32
T_91: (in 0x0000000C : word32)
  Class: Eq_91
  DataType: ui32
  OrigDataType: ui32
T_92: (in fp - 0x0000000C : word32)
  Class: Eq_92
  DataType: ptr32
  OrigDataType: ptr32
T_93: (in __align(fp - 0x0000000C) : void)
  Class: Eq_93
  DataType: void
  OrigDataType: void
T_94: (in cparam : ptr32)
  Class: Eq_94
  DataType: (ptr Eq_94)
  OrigDataType: (ptr (fn T_100 (T_98, T_99)))
T_95: (in signature of cparam : void)
  Class: Eq_94
  DataType: (ptr Eq_94)
  OrigDataType: 
T_96: (in dwArg04 : word32)
  Class: Eq_96
  DataType: word32
  OrigDataType: word32
T_97: (in 0x00000003 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in dwArg04 - 0x00000003 : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_99: (in 0x00000002 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_100: (in cparam(dwArg04 - 0x00000003, 0x00000002) : void)
  Class: Eq_100
  DataType: void
  OrigDataType: void
T_101: (in fn080482B8 : ptr32)
  Class: Eq_101
  DataType: (ptr Eq_101)
  OrigDataType: (ptr (fn T_103 ()))
T_102: (in signature of fn080482B8 : void)
  Class: Eq_101
  DataType: (ptr Eq_101)
  OrigDataType: 
T_103: (in fn080482B8() : void)
  Class: Eq_103
  DataType: void
  OrigDataType: void
T_104: (in _init : ptr32)
  Class: Eq_104
  DataType: (ptr Eq_104)
  OrigDataType: (ptr (fn T_106 ()))
T_105: (in signature of _init : void)
  Class: Eq_104
  DataType: (ptr Eq_104)
  OrigDataType: 
T_106: (in _init() : void)
  Class: Eq_106
  DataType: void
  OrigDataType: void
T_107: (in eax_21 : int32)
  Class: Eq_107
  DataType: int32
  OrigDataType: int32
T_108: (in 08049654 : ptr32)
  Class: Eq_108
  DataType: ptr32
  OrigDataType: ptr32
T_109: (in 08049654 : ptr32)
  Class: Eq_109
  DataType: ptr32
  OrigDataType: ptr32
T_110: (in 0x08049654 - 0x08049654 : word32)
  Class: Eq_107
  DataType: int32
  OrigDataType: 
T_111: (in 0x00000002 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_112: (in eax_21 >> 0x00000002 : word32)
  Class: Eq_112
  DataType: int32
  OrigDataType: int32
T_113: (in 0x00000000 : word32)
  Class: Eq_112
  DataType: int32
  OrigDataType: word32
T_114: (in eax_21 >> 0x00000002 != 0x00000000 : bool)
  Class: Eq_114
  DataType: bool
  OrigDataType: bool
T_115: (in esp_56 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in ebp_57 : word32)
  Class: Eq_116
  DataType: word32
  OrigDataType: word32
T_117: (in edi_58 : uint32)
  Class: Eq_117
  DataType: uint32
  OrigDataType: uint32
T_118: (in esi_59 : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_119: (in ebx_60 : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_120: (in SCZO_61 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in eax_62 : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_122: (in edx_63 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in Z_64 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_124: (in SZO_65 : byte)
  Class: Eq_124
  DataType: byte
  OrigDataType: byte
T_125: (in C_66 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in None_67 : bcuiposr0)
  Class: Eq_126
  DataType: bcuiposr0
  OrigDataType: bcuiposr0
T_127: (in 08049654 : ptr32)
  Class: Eq_127
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_130 t0000)))
T_128: (in 0x00000000 : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in 0x08049654 + 0x00000000 : word32)
  Class: Eq_129
  DataType: ptr32
  OrigDataType: ptr32
T_130: (in Mem0[0x08049654 + 0x00000000:word32] : word32)
  Class: Eq_130
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_131: (in 0x00000001 : word32)
  Class: Eq_131
  DataType: uint32
  OrigDataType: uint32
T_132: (in edi_58 + 0x00000001 : word32)
  Class: Eq_132
  DataType: Eq_132
  OrigDataType: uint32
T_133: (in eax_21 >> 0x00000002 : word32)
  Class: Eq_132
  DataType: Eq_132
  OrigDataType: (union (int32 u0) (uint32 u1))
T_134: (in edi_58 + 0x00000001 < eax_21 >> 0x00000002 : bool)
  Class: Eq_134
  DataType: bool
  OrigDataType: bool
T_135: (in eax_13 : (ptr code))
  Class: Eq_135
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_136: (in 0x08049494 : word32)
  Class: Eq_136
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_137 t0000)))
T_137: (in Mem0[0x08049494:word32] : word32)
  Class: Eq_135
  DataType: (ptr code)
  OrigDataType: word32
T_138: (in 0xFFFFFFFF : word32)
  Class: Eq_135
  DataType: (ptr code)
  OrigDataType: word32
T_139: (in eax_13 == (<anonymous> *) 0xFFFFFFFF : bool)
  Class: Eq_139
  DataType: bool
  OrigDataType: bool
T_140: (in esp_26 : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_141: (in ebp_27 : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_142: (in ebx_28 : ptr32)
  Class: Eq_142
  DataType: ptr32
  OrigDataType: ptr32
T_143: (in edx_29 : word32)
  Class: Eq_143
  DataType: word32
  OrigDataType: word32
T_144: (in eax_30 : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_145: (in SCZO_31 : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_146: (in Z_32 : byte)
  Class: Eq_146
  DataType: byte
  OrigDataType: byte
T_147: (in 0x00000004 : word32)
  Class: Eq_147
  DataType: ui32
  OrigDataType: ui32
T_148: (in ebx_28 - 0x00000004 : word32)
  Class: Eq_148
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_151 t0000)))
T_149: (in 0x00000000 : word32)
  Class: Eq_149
  DataType: word32
  OrigDataType: word32
T_150: (in ebx_28 - 0x00000004 + 0x00000000 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in Mem0[ebx_28 - 0x00000004 + 0x00000000:word32] : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_152: (in 0xFFFFFFFF : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_153: (in *(ebx_28 - 0x00000004) != 0xFFFFFFFF : bool)
  Class: Eq_153
  DataType: bool
  OrigDataType: bool
T_154: (in __do_global_dtors_aux : ptr32)
  Class: Eq_154
  DataType: (ptr Eq_154)
  OrigDataType: (ptr (fn T_156 ()))
T_155: (in signature of __do_global_dtors_aux : void)
  Class: Eq_154
  DataType: (ptr Eq_154)
  OrigDataType: 
T_156: (in __do_global_dtors_aux() : void)
  Class: Eq_156
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
	<anonymous> tFFFFFFFF;	// FFFFFFFF
	<anonymous> t80482AE;	// 80482AE
	<anonymous> t80482BE;	// 80482BE
	<anonymous> t80482CE;	// 80482CE
	<anonymous> * ptr8049494;	// 8049494
	<anonymous> * ptr80494A0;	// 80494A0
	word32 dw80494A4;	// 80494A4
	word32 dw8049578;	// 8049578
	<anonymous> * ptr8049580;	// 8049580
	<anonymous> * ptr8049584;	// 8049584
	<anonymous> * ptr8049588;	// 8049588
	<anonymous> ** ptr8049594;	// 8049594
	byte b8049598;	// 8049598
} Eq_1;

typedef void (Eq_2)();

typedef void (Eq_5)();

typedef void (Eq_8)();

typedef void (Eq_21)(ptr32);

typedef void (Eq_26)();

typedef void (Eq_29)();

typedef void (Eq_37)();

typedef void (Eq_89)(ptr32);

typedef void (Eq_94)(word32, word32);

typedef void (Eq_101)();

typedef void (Eq_104)();

typedef union Eq_132 {
	int32 u0;
	uint32 u1;
} Eq_132;

typedef void (Eq_154)();

