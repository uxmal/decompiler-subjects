// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFFFFFF code tFFFFFFFF) (804825E code t804825E) (804826E code t804826E) (8049478 (ptr code) ptr8049478) (8049484 (ptr (ptr code)) ptr8049484) (8049550 (ptr code) ptr8049550) (804955C (ptr code) ptr804955C) (8049560 word32 dw8049560) (8049570 (ptr code) ptr8049570) (8049574 (ptr code) ptr8049574) (8049578 (ptr code) ptr8049578) (804957C byte b804957C))
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
Eq_97: (fn void (ptr32))
	T_97 (in __align : ptr32)
Eq_102: (fn void ())
	T_102 (in printf@@GLIBC_2.0 : ptr32)
	T_103 (in signature of printf@@GLIBC_2.0 : void)
	T_105 (in printf@@GLIBC_2.0 : ptr32)
	T_110 (in printf@@GLIBC_2.0 : ptr32)
Eq_112: (fn void ())
	T_112 (in _init : ptr32)
	T_113 (in signature of _init : void)
Eq_131: (fn void ())
	T_131 (in _fini : ptr32)
	T_132 (in signature of _fini : void)
Eq_151: (fn void ())
	T_151 (in __do_global_dtors_aux : ptr32)
	T_152 (in signature of __do_global_dtors_aux : void)
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
T_12: (in 0x08049570 : ptr32)
  Class: Eq_12
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_13 t0000)))
T_13: (in Mem0[0x08049570:word32] : word32)
  Class: Eq_13
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_14: (in esp_3 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in 0x08049574 : ptr32)
  Class: Eq_15
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_16 t0000)))
T_16: (in Mem0[0x08049574:word32] : word32)
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
T_29: (in 08049578 : ptr32)
  Class: Eq_29
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_32 t0000)))
T_30: (in 0x00000000 : word32)
  Class: Eq_30
  DataType: word32
  OrigDataType: word32
T_31: (in 0x08049578 + 0x00000000 : word32)
  Class: Eq_31
  DataType: ptr32
  OrigDataType: ptr32
T_32: (in Mem0[0x08049578 + 0x00000000:word32] : word32)
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
T_43: (in 0x0804957C : ptr32)
  Class: Eq_43
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_44 t0000)))
T_44: (in Mem0[0x0804957C:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in 0x00 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_46: (in globals->b804957C != 0x00 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in eax_25 : (ptr (ptr code)))
  Class: Eq_47
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_50 t0000)))
T_48: (in 0x08049484 : word32)
  Class: Eq_48
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_49 t0000)))
T_49: (in Mem0[0x08049484:word32] : word32)
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
T_57: (in 0x0804957C : ptr32)
  Class: Eq_57
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_58 t0000)))
T_58: (in Mem39[0x0804957C:byte] : byte)
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
T_62: (in 0x08049484 : word32)
  Class: Eq_62
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_63 t0000)))
T_63: (in Mem44[0x08049484:word32] : word32)
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
T_73: (in 0x08049484 : word32)
  Class: Eq_73
  DataType: (ptr (ptr (ptr code)))
  OrigDataType: (ptr (struct (0 T_74 t0000)))
T_74: (in Mem44[0x08049484:word32] : word32)
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
T_80: (in 0x08049560 : word32)
  Class: Eq_80
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_81 t0000)))
T_81: (in Mem0[0x08049560:word32] : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_82: (in 0x00000000 : word32)
  Class: Eq_81
  DataType: word32
  OrigDataType: word32
T_83: (in globals->dw8049560 == 0x00000000 : bool)
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
T_102: (in printf@@GLIBC_2.0 : ptr32)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: (ptr (fn T_104 ()))
T_103: (in signature of printf@@GLIBC_2.0 : void)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: 
T_104: (in printf@@GLIBC_2.0() : void)
  Class: Eq_104
  DataType: void
  OrigDataType: void
T_105: (in printf@@GLIBC_2.0 : ptr32)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: (ptr (fn T_106 ()))
T_106: (in printf@@GLIBC_2.0() : void)
  Class: Eq_104
  DataType: void
  OrigDataType: void
T_107: (in dwArg04 : word32)
  Class: Eq_107
  DataType: int32
  OrigDataType: int32
T_108: (in 0x00000003 : word32)
  Class: Eq_107
  DataType: int32
  OrigDataType: int32
T_109: (in dwArg04 > 0x00000003 : bool)
  Class: Eq_109
  DataType: bool
  OrigDataType: bool
T_110: (in printf@@GLIBC_2.0 : ptr32)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: (ptr (fn T_111 ()))
T_111: (in printf@@GLIBC_2.0() : void)
  Class: Eq_104
  DataType: void
  OrigDataType: void
T_112: (in _init : ptr32)
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: (ptr (fn T_114 ()))
T_113: (in signature of _init : void)
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: 
T_114: (in _init() : void)
  Class: Eq_114
  DataType: void
  OrigDataType: void
T_115: (in true : bool)
  Class: Eq_115
  DataType: bool
  OrigDataType: bool
T_116: (in false : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in esp_34 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in ebp_35 : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_119: (in ebx_36 : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_120: (in eax_37 : word32)
  Class: Eq_120
  DataType: word32
  OrigDataType: word32
T_121: (in SCZO_38 : byte)
  Class: Eq_121
  DataType: byte
  OrigDataType: byte
T_122: (in SZO_39 : byte)
  Class: Eq_122
  DataType: byte
  OrigDataType: byte
T_123: (in C_40 : byte)
  Class: Eq_123
  DataType: byte
  OrigDataType: byte
T_124: (in Z_41 : byte)
  Class: Eq_124
  DataType: byte
  OrigDataType: byte
T_125: (in None_42 : bcuiposr0)
  Class: Eq_125
  DataType: bcuiposr0
  OrigDataType: bcuiposr0
T_126: (in edx_43 : word32)
  Class: Eq_126
  DataType: word32
  OrigDataType: word32
T_127: (in 0x08049478 : word32)
  Class: Eq_127
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_128 t0000)))
T_128: (in Mem0[0x08049478:word32] : word32)
  Class: Eq_128
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_129: (in 0x00000000 : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_130: (in ebx_36 != 0x00000000 : bool)
  Class: Eq_130
  DataType: bool
  OrigDataType: bool
T_131: (in _fini : ptr32)
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: (ptr (fn T_133 ()))
T_132: (in signature of _fini : void)
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: 
T_133: (in _fini() : void)
  Class: Eq_133
  DataType: void
  OrigDataType: void
T_134: (in eax_13 : (ptr code))
  Class: Eq_134
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_135: (in 0x08049550 : word32)
  Class: Eq_135
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (struct (0 T_136 t0000)))
T_136: (in Mem0[0x08049550:word32] : word32)
  Class: Eq_134
  DataType: (ptr code)
  OrigDataType: word32
T_137: (in 0xFFFFFFFF : word32)
  Class: Eq_134
  DataType: (ptr code)
  OrigDataType: word32
T_138: (in eax_13 == (<anonymous> *) 0xFFFFFFFF : bool)
  Class: Eq_138
  DataType: bool
  OrigDataType: bool
T_139: (in esp_29 : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in ebp_30 : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_141: (in ebx_31 : (ptr word32))
  Class: Eq_141
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_148 t0000)))
T_142: (in edx_32 : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_143: (in eax_33 : word32)
  Class: Eq_143
  DataType: word32
  OrigDataType: word32
T_144: (in SCZO_34 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in Z_35 : byte)
  Class: Eq_145
  DataType: byte
  OrigDataType: byte
T_146: (in 0x00000000 : word32)
  Class: Eq_146
  DataType: word32
  OrigDataType: word32
T_147: (in ebx_31 + 0x00000000 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_148: (in Mem0[ebx_31 + 0x00000000:word32] : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_149: (in 0xFFFFFFFF : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_150: (in *ebx_31 != 0xFFFFFFFF : bool)
  Class: Eq_150
  DataType: bool
  OrigDataType: bool
T_151: (in __do_global_dtors_aux : ptr32)
  Class: Eq_151
  DataType: (ptr Eq_151)
  OrigDataType: (ptr (fn T_153 ()))
T_152: (in signature of __do_global_dtors_aux : void)
  Class: Eq_151
  DataType: (ptr Eq_151)
  OrigDataType: 
T_153: (in __do_global_dtors_aux() : void)
  Class: Eq_153
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
	<anonymous> tFFFFFFFF;	// FFFFFFFF
	<anonymous> t804825E;	// 804825E
	<anonymous> t804826E;	// 804826E
	<anonymous> * ptr8049478;	// 8049478
	<anonymous> ** ptr8049484;	// 8049484
	<anonymous> * ptr8049550;	// 8049550
	<anonymous> * ptr804955C;	// 804955C
	word32 dw8049560;	// 8049560
	<anonymous> * ptr8049570;	// 8049570
	<anonymous> * ptr8049574;	// 8049574
	<anonymous> * ptr8049578;	// 8049578
	byte b804957C;	// 804957C
} Eq_1;

typedef void (Eq_2)();

typedef void (Eq_5)();

typedef void (Eq_8)();

typedef void (Eq_18)(ptr32);

typedef void (Eq_23)();

typedef void (Eq_26)();

typedef void (Eq_97)(ptr32);

typedef void (Eq_102)();

typedef void (Eq_112)();

typedef void (Eq_131)();

typedef void (Eq_151)();

