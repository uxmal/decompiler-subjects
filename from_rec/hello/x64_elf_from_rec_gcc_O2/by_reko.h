// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (400510 Eq_23 t400510) (400530 Eq_27 t400530) (400540 Eq_26 t400540) (600E18 word64 qw600E18) (600E38 word64 qw600E38) (600FE0 word64 qw600FE0) (601020 byte b601020) (601028 uint64 qw601028))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in call_gmon_start : ptr64)
	T_3 (in signature of call_gmon_start : void)
Eq_5: (fn void ())
	T_5 (in frame_dummy : ptr64)
	T_6 (in signature of frame_dummy : void)
Eq_8: (fn word64 ())
	T_8 (in __do_global_ctors_aux : ptr64)
	T_9 (in signature of __do_global_ctors_aux : void)
Eq_12: (fn void ())
	T_12 (in rdx : (ptr Eq_12))
	T_28 (in rtld_fini : (ptr (fn void ())))
Eq_15: (fn void (ptr64))
	T_15 (in __align : ptr64)
Eq_21: (fn int32 ((ptr Eq_23), Eq_24, (ptr (ptr char)), (ptr Eq_26), (ptr Eq_27), (ptr Eq_12), (ptr void)))
	T_21 (in __libc_start_main : ptr64)
	T_22 (in signature of __libc_start_main : void)
Eq_23: (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char))))
	T_23 (in main : (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char))))))
	T_30 (in 0x0000000000400510 : word64)
Eq_24: (union "Eq_24" (int32 u0) (word64 u1))
	T_24 (in argc : int32)
	T_31 (in qwArg00 : word64)
Eq_26: (fn void ())
	T_26 (in init : (ptr (fn void ())))
	T_33 (in 0x0000000000400540 : word64)
Eq_27: (fn void ())
	T_27 (in fini : (ptr (fn void ())))
	T_34 (in 0x0000000000400530 : word64)
Eq_40: (fn void ())
	T_40 (in __hlt : ptr64)
Eq_56: (union "Eq_56" (word32 u0) ((ptr code) u1))
	T_56 (in eax : word32)
Eq_107: (union "Eq_107" (word32 u0) ((ptr code) u1))
	T_107 (in 0x00000000 : word32)
Eq_109: (fn void ())
	T_109 (in _init : ptr64)
	T_110 (in signature of _init : void)
Eq_139: (union "Eq_139" (word32 u0) ((ptr code) u1))
	T_139 (in Mem0[0x0000000000600E14 + 0x0000000000000000:word32] : word32)
Eq_162: (union "Eq_162" (word32 u0) ((ptr code) u1))
	T_162 (in eax : word32)
Eq_169: (fn word64 (word64))
	T_169 (in __do_global_dtors_aux : ptr64)
	T_170 (in signature of __do_global_dtors_aux : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in call_gmon_start : ptr64)
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
T_5: (in frame_dummy : ptr64)
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
T_8: (in __do_global_ctors_aux : ptr64)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_10 ()))
T_9: (in signature of __do_global_ctors_aux : void)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: 
T_10: (in __do_global_ctors_aux() : word64)
  Class: Eq_10
  DataType: word64
  OrigDataType: word64
T_11: (in rax : word64)
  Class: Eq_11
  DataType: word64
  OrigDataType: word64
T_12: (in rdx : (ptr Eq_12))
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (fn void ()))
T_13: (in qwArg00 : word64)
  Class: Eq_13
  DataType: word64
  OrigDataType: word64
T_14: (in dwArg04 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in __align : ptr64)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_19 (T_18)))
T_16: (in fp : ptr64)
  Class: Eq_16
  DataType: ptr64
  OrigDataType: ptr64
T_17: (in 0x0000000000000008 : word64)
  Class: Eq_17
  DataType: int64
  OrigDataType: int64
T_18: (in fp + 0x0000000000000008 : word64)
  Class: Eq_18
  DataType: ptr64
  OrigDataType: ptr64
T_19: (in __align(fp + 0x0000000000000008) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in rax_22 : word64)
  Class: Eq_20
  DataType: word64
  OrigDataType: word64
T_21: (in __libc_start_main : ptr64)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_38 (T_30, T_31, T_32, T_33, T_34, T_12, T_37)))
T_22: (in signature of __libc_start_main : void)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: 
T_23: (in main : (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char))))))
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: 
T_24: (in argc : int32)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: 
T_25: (in ubp_av : (ptr (ptr char)))
  Class: Eq_25
  DataType: (ptr (ptr char))
  OrigDataType: 
T_26: (in init : (ptr (fn void ())))
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: 
T_27: (in fini : (ptr (fn void ())))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: 
T_28: (in rtld_fini : (ptr (fn void ())))
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: 
T_29: (in stack_end : (ptr void))
  Class: Eq_29
  DataType: (ptr void)
  OrigDataType: 
T_30: (in 0x0000000000400510 : word64)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn int32 (int32, (ptr (ptr char)), (ptr (ptr char)))))
T_31: (in qwArg00 : word64)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: (union (int32 u1) (word64 u0))
T_32: (in fp + 0x0000000000000008 : word64)
  Class: Eq_25
  DataType: (ptr (ptr char))
  OrigDataType: (ptr (ptr char))
T_33: (in 0x0000000000400540 : word64)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn void ()))
T_34: (in 0x0000000000400530 : word64)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn void ()))
T_35: (in 0x0000000000000004 : word64)
  Class: Eq_35
  DataType: int64
  OrigDataType: int64
T_36: (in fp + 0x0000000000000004 : word64)
  Class: Eq_36
  DataType: ptr64
  OrigDataType: ptr64
T_37: (in DPB(qwArg00, fp + 0x0000000000000004, 0) : word64)
  Class: Eq_29
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_38: (in __libc_start_main(&globals->t400510, qwArg00, fp + 0x0000000000000008, &globals->t400540, &globals->t400530, rdx, DPB(qwArg00, fp + 0x0000000000000004, 0)) : int32)
  Class: Eq_38
  DataType: int32
  OrigDataType: int32
T_39: (in DPB(rax, __libc_start_main(&globals->t400510, qwArg00, fp + 0x0000000000000008, &globals->t400540, &globals->t400530, rdx, DPB(qwArg00, fp + 0x0000000000000004, 0)), 0) : word64)
  Class: Eq_20
  DataType: word64
  OrigDataType: word64
T_40: (in __hlt : ptr64)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (fn T_41 ()))
T_41: (in __hlt() : void)
  Class: Eq_41
  DataType: void
  OrigDataType: void
T_42: (in rax_4 : word64)
  Class: Eq_42
  DataType: word64
  OrigDataType: word64
T_43: (in 0000000000600FE0 : ptr64)
  Class: Eq_43
  DataType: (ptr word64)
  OrigDataType: (ptr (struct (0 T_46 t0000)))
T_44: (in 0x0000000000000000 : word64)
  Class: Eq_44
  DataType: word64
  OrigDataType: word64
T_45: (in 0x0000000000600FE0 + 0x0000000000000000 : word64)
  Class: Eq_45
  DataType: ptr64
  OrigDataType: ptr64
T_46: (in Mem0[0x0000000000600FE0 + 0x0000000000000000:word64] : word64)
  Class: Eq_42
  DataType: word64
  OrigDataType: word64
T_47: (in 0x0000000000000000 : word64)
  Class: Eq_42
  DataType: word64
  OrigDataType: word64
T_48: (in rax_4 == 0x0000000000000000 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in rsp_17 : word64)
  Class: Eq_49
  DataType: word64
  OrigDataType: word64
T_50: (in SCZO_18 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in rax_19 : word64)
  Class: Eq_51
  DataType: word64
  OrigDataType: word64
T_52: (in SZO_20 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in C_21 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in Z_22 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in eax_23 : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in eax : word32)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_57: (in rsp : ptr64)
  Class: Eq_57
  DataType: ptr64
  OrigDataType: word64
T_58: (in r8 : word64)
  Class: Eq_58
  DataType: word64
  OrigDataType: word64
T_59: (in 0000000000601020 : ptr64)
  Class: Eq_59
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_62 t0000)))
T_60: (in 0x0000000000000000 : word64)
  Class: Eq_60
  DataType: word64
  OrigDataType: word64
T_61: (in 0x0000000000601020 + 0x0000000000000000 : word64)
  Class: Eq_61
  DataType: ptr64
  OrigDataType: ptr64
T_62: (in Mem0[0x0000000000601020 + 0x0000000000000000:byte] : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in 0x00 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_64: (in globals->b601020 != 0x00 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in fp : ptr64)
  Class: Eq_65
  DataType: ptr64
  OrigDataType: ptr64
T_66: (in 0x0000000000000004 : word64)
  Class: Eq_66
  DataType: int64
  OrigDataType: int64
T_67: (in fp + 0x0000000000000004 : word64)
  Class: Eq_57
  DataType: ptr64
  OrigDataType: ptr64
T_68: (in rdx_30 : uint64)
  Class: Eq_68
  DataType: uint64
  OrigDataType: uint64
T_69: (in 0000000000601028 : ptr64)
  Class: Eq_69
  DataType: (ptr uint64)
  OrigDataType: (ptr (struct (0 T_72 t0000)))
T_70: (in 0x0000000000000000 : word64)
  Class: Eq_70
  DataType: word64
  OrigDataType: word64
T_71: (in 0x0000000000601028 + 0x0000000000000000 : word64)
  Class: Eq_71
  DataType: ptr64
  OrigDataType: ptr64
T_72: (in Mem0[0x0000000000601028 + 0x0000000000000000:word64] : word64)
  Class: Eq_68
  DataType: uint64
  OrigDataType: word64
T_73: (in 0x00000000000C01C5 : word64)
  Class: Eq_68
  DataType: uint64
  OrigDataType: uint64
T_74: (in rdx_30 >= 0x00000000000C01C5 : bool)
  Class: Eq_74
  DataType: bool
  OrigDataType: bool
T_75: (in 0x01 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in 0000000000601020 : ptr64)
  Class: Eq_76
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_79 t0000)))
T_77: (in 0x0000000000000000 : word64)
  Class: Eq_77
  DataType: word64
  OrigDataType: word64
T_78: (in 0x0000000000601020 + 0x0000000000000000 : word64)
  Class: Eq_78
  DataType: ptr64
  OrigDataType: ptr64
T_79: (in Mem38[0x0000000000601020 + 0x0000000000000000:byte] : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_80: (in 0x0000000000000001 : word64)
  Class: Eq_80
  DataType: word64
  OrigDataType: word64
T_81: (in rdx_30 + 0x0000000000000001 : word64)
  Class: Eq_81
  DataType: word64
  OrigDataType: word64
T_82: (in 0000000000601028 : ptr64)
  Class: Eq_82
  DataType: (ptr word64)
  OrigDataType: (ptr (struct (0 T_85 t0000)))
T_83: (in 0x0000000000000000 : word64)
  Class: Eq_83
  DataType: word64
  OrigDataType: word64
T_84: (in 0x0000000000601028 + 0x0000000000000000 : word64)
  Class: Eq_84
  DataType: ptr64
  OrigDataType: ptr64
T_85: (in Mem37[0x0000000000601028 + 0x0000000000000000:word64] : word64)
  Class: Eq_81
  DataType: word64
  OrigDataType: word64
T_86: (in 0000000000600E38 : ptr64)
  Class: Eq_86
  DataType: (ptr word64)
  OrigDataType: (ptr (struct (0 T_89 t0000)))
T_87: (in 0x0000000000000000 : word64)
  Class: Eq_87
  DataType: word64
  OrigDataType: word64
T_88: (in 0x0000000000600E38 + 0x0000000000000000 : word64)
  Class: Eq_88
  DataType: ptr64
  OrigDataType: ptr64
T_89: (in Mem0[0x0000000000600E38 + 0x0000000000000000:word64] : word64)
  Class: Eq_89
  DataType: word64
  OrigDataType: word64
T_90: (in 0x0000000000000000 : word64)
  Class: Eq_89
  DataType: word64
  OrigDataType: word64
T_91: (in globals->qw600E38 == 0x0000000000000000 : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in 0x0000000000000000 : uint64)
  Class: Eq_92
  DataType: uint64
  OrigDataType: uint64
T_93: (in 0x0000000000000000 : word64)
  Class: Eq_92
  DataType: uint64
  OrigDataType: word64
T_94: (in 0x0000000000000000 == 0x0000000000000000 : bool)
  Class: Eq_94
  DataType: bool
  OrigDataType: bool
T_95: (in rsp_47 : word64)
  Class: Eq_95
  DataType: word64
  OrigDataType: word64
T_96: (in rbp_48 : word64)
  Class: Eq_96
  DataType: word64
  OrigDataType: word64
T_97: (in SCZO_49 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in Z_50 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in eax_51 : word32)
  Class: Eq_99
  DataType: word32
  OrigDataType: word32
T_100: (in rax_52 : word64)
  Class: Eq_100
  DataType: word64
  OrigDataType: word64
T_101: (in SZO_53 : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in C_54 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in edi_55 : word32)
  Class: Eq_103
  DataType: word32
  OrigDataType: word32
T_104: (in rdi_56 : word64)
  Class: Eq_104
  DataType: word64
  OrigDataType: word64
T_105: (in r11_57 : word64)
  Class: Eq_105
  DataType: word64
  OrigDataType: word64
T_106: (in r11d_58 : word32)
  Class: Eq_106
  DataType: word32
  OrigDataType: word32
T_107: (in 0x00000000 : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_108: (in edi : word32)
  Class: Eq_108
  DataType: word32
  OrigDataType: word32
T_109: (in _init : ptr64)
  Class: Eq_109
  DataType: (ptr Eq_109)
  OrigDataType: (ptr (fn T_111 ()))
T_110: (in signature of _init : void)
  Class: Eq_109
  DataType: (ptr Eq_109)
  OrigDataType: 
T_111: (in _init() : void)
  Class: Eq_111
  DataType: void
  OrigDataType: void
T_112: (in 0000000000600E14 : ptr64)
  Class: Eq_112
  DataType: ptr64
  OrigDataType: ptr64
T_113: (in 0000000000600E14 : ptr64)
  Class: Eq_113
  DataType: ptr64
  OrigDataType: ptr64
T_114: (in 0x0000000000600E14 - 0x0000000000600E14 : word64)
  Class: Eq_114
  DataType: Eq_114
  OrigDataType: 
T_115: (in 0x0000000000000003 : word64)
  Class: Eq_115
  DataType: Eq_115
  OrigDataType: 
T_116: (in 0x0000000000600E14 - 0x0000000000600E14 >> 0x0000000000000003 : word64)
  Class: Eq_116
  DataType: Eq_116
  OrigDataType: 
T_117: (in 0x0000000000000000 : word64)
  Class: Eq_116
  DataType: Eq_116
  OrigDataType: 
T_118: (in 0x0000000000600E14 - 0x0000000000600E14 >> 0x0000000000000003 == 0x0000000000000000 : bool)
  Class: Eq_118
  DataType: Eq_118
  OrigDataType: 
T_119: (in rsp_61 : word64)
  Class: Eq_119
  DataType: word64
  OrigDataType: word64
T_120: (in rbp_62 : uint64)
  Class: Eq_120
  DataType: uint64
  OrigDataType: uint64
T_121: (in r15_63 : word64)
  Class: Eq_121
  DataType: word64
  OrigDataType: word64
T_122: (in r12_64 : word64)
  Class: Eq_122
  DataType: word64
  OrigDataType: word64
T_123: (in r13_65 : word64)
  Class: Eq_123
  DataType: word64
  OrigDataType: word64
T_124: (in r14_66 : word64)
  Class: Eq_124
  DataType: word64
  OrigDataType: word64
T_125: (in rbx_67 : uint64)
  Class: Eq_125
  DataType: uint64
  OrigDataType: uint64
T_126: (in SCZO_68 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in r14d_69 : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in edi_70 : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in rsi_71 : word64)
  Class: Eq_129
  DataType: word64
  OrigDataType: word64
T_130: (in rdx_72 : word64)
  Class: Eq_130
  DataType: word64
  OrigDataType: word64
T_131: (in SZO_73 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in C_74 : byte)
  Class: Eq_132
  DataType: byte
  OrigDataType: byte
T_133: (in Z_75 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in ebx_76 : word32)
  Class: Eq_134
  DataType: word32
  OrigDataType: word32
T_135: (in rdi_77 : word64)
  Class: Eq_135
  DataType: word64
  OrigDataType: word64
T_136: (in 0000000000600E14 : ptr64)
  Class: Eq_136
  DataType: (ptr Eq_139)
  OrigDataType: (ptr (struct (0 T_139 t0000)))
T_137: (in 0x0000000000000000 : word64)
  Class: Eq_137
  DataType: word64
  OrigDataType: word64
T_138: (in 0x0000000000600E14 + 0x0000000000000000 : word64)
  Class: Eq_138
  DataType: ptr64
  OrigDataType: ptr64
T_139: (in Mem0[0x0000000000600E14 + 0x0000000000000000:word32] : word32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_140: (in 0x0000000000000001 : word64)
  Class: Eq_140
  DataType: uint64
  OrigDataType: uint64
T_141: (in rbx_67 + 0x0000000000000001 : word64)
  Class: Eq_120
  DataType: uint64
  OrigDataType: uint64
T_142: (in rbx_67 + 0x0000000000000001 < rbp_62 : bool)
  Class: Eq_142
  DataType: bool
  OrigDataType: bool
T_143: (in rsp : ptr64)
  Class: Eq_143
  DataType: ptr64
  OrigDataType: word64
T_144: (in rax_11 : word64)
  Class: Eq_144
  DataType: word64
  OrigDataType: word64
T_145: (in 0000000000600E18 : ptr64)
  Class: Eq_145
  DataType: (ptr word64)
  OrigDataType: (ptr (struct (0 T_148 t0000)))
T_146: (in 0x0000000000000000 : word64)
  Class: Eq_146
  DataType: word64
  OrigDataType: word64
T_147: (in 0x0000000000600E18 + 0x0000000000000000 : word64)
  Class: Eq_147
  DataType: ptr64
  OrigDataType: ptr64
T_148: (in Mem0[0x0000000000600E18 + 0x0000000000000000:word64] : word64)
  Class: Eq_144
  DataType: word64
  OrigDataType: word64
T_149: (in 0xFFFFFFFFFFFFFFFF : word64)
  Class: Eq_144
  DataType: word64
  OrigDataType: word64
T_150: (in rax_11 == 0xFFFFFFFFFFFFFFFF : bool)
  Class: Eq_150
  DataType: bool
  OrigDataType: bool
T_151: (in fp : ptr64)
  Class: Eq_151
  DataType: ptr64
  OrigDataType: ptr64
T_152: (in 0x0000000000000004 : word64)
  Class: Eq_152
  DataType: int64
  OrigDataType: int64
T_153: (in fp + 0x0000000000000004 : word64)
  Class: Eq_143
  DataType: ptr64
  OrigDataType: ptr64
T_154: (in rsp_34 : word64)
  Class: Eq_154
  DataType: word64
  OrigDataType: word64
T_155: (in rbp_35 : word64)
  Class: Eq_155
  DataType: word64
  OrigDataType: word64
T_156: (in rbx_36 : (ptr word64))
  Class: Eq_156
  DataType: (ptr word64)
  OrigDataType: (ptr (struct (0 T_165 t0000)))
T_157: (in SCZO_37 : byte)
  Class: Eq_157
  DataType: byte
  OrigDataType: byte
T_158: (in rax_38 : word64)
  Class: Eq_158
  DataType: word64
  OrigDataType: word64
T_159: (in Z_39 : byte)
  Class: Eq_159
  DataType: byte
  OrigDataType: byte
T_160: (in ebx_40 : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_161: (in eax_41 : word32)
  Class: Eq_161
  DataType: word32
  OrigDataType: word32
T_162: (in eax : word32)
  Class: Eq_162
  DataType: Eq_162
  OrigDataType: (union (word32 u0) ((ptr code) u1))
T_163: (in 0x0000000000000000 : word64)
  Class: Eq_163
  DataType: word64
  OrigDataType: word64
T_164: (in rbx_36 + 0x0000000000000000 : word64)
  Class: Eq_164
  DataType: word64
  OrigDataType: word64
T_165: (in Mem0[rbx_36 + 0x0000000000000000:word64] : word64)
  Class: Eq_165
  DataType: word64
  OrigDataType: word64
T_166: (in 0xFFFFFFFFFFFFFFFF : word64)
  Class: Eq_165
  DataType: word64
  OrigDataType: word64
T_167: (in *rbx_36 != 0xFFFFFFFFFFFFFFFF : bool)
  Class: Eq_167
  DataType: bool
  OrigDataType: bool
T_168: (in r8 : word64)
  Class: Eq_58
  DataType: word64
  OrigDataType: word64
T_169: (in __do_global_dtors_aux : ptr64)
  Class: Eq_169
  DataType: (ptr Eq_169)
  OrigDataType: (ptr (fn T_171 (T_168)))
T_170: (in signature of __do_global_dtors_aux : void)
  Class: Eq_169
  DataType: (ptr Eq_169)
  OrigDataType: 
T_171: (in __do_global_dtors_aux(r8) : word64)
  Class: Eq_171
  DataType: word64
  OrigDataType: word64
*/
typedef struct Globals {
	Eq_23 t400510;	// 400510
	Eq_27 t400530;	// 400530
	Eq_26 t400540;	// 400540
	word64 qw600E18;	// 600E18
	word64 qw600E38;	// 600E38
	word64 qw600FE0;	// 600FE0
	byte b601020;	// 601020
	uint64 qw601028;	// 601028
} Eq_1;

typedef void (Eq_2)();

typedef void (Eq_5)();

typedef word64 (Eq_8)();

typedef void (Eq_12)();

typedef void (Eq_15)(ptr64);

typedef int32 (Eq_21)( *, Eq_24, char * *,  *,  *,  *, void);

typedef int32 (Eq_23)(int32 rdi, char * * rsi, char * * rdx);

typedef union Eq_24 {
	int32 u0;
	word64 u1;
} Eq_24;

typedef void (Eq_26)();

typedef void (Eq_27)();

typedef void (Eq_40)();

typedef union Eq_56 {
	word32 u0;
	<anonymous> * u1;
} Eq_56;

typedef union Eq_107 {
	word32 u0;
	<anonymous> * u1;
} Eq_107;

typedef void (Eq_109)();

typedef union Eq_139 {
	word32 u0;
	<anonymous> * u1;
} Eq_139;

typedef union Eq_162 {
	word32 u0;
	<anonymous> * u1;
} Eq_162;

typedef word64 (Eq_169)(word64);

