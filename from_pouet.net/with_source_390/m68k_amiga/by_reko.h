// subject.h
// Generated by decompiling subject.exe
// using Reko decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_5: (union "Eq_5" (ui32 u0) (ptr32 u1))
	T_5 (in a3_53 : Eq_5)
	T_13 (in *(ui32 *) 0x00000FFC * 0x00000002 * 0x00000002 : word32)
Eq_15: (struct "Eq_15" (114 (ptr Eq_61) ptr0114))
	T_15 (in a6_55 : (ptr Eq_15))
Eq_47: (fn void (ptr32, word32))
	T_47 (in FreeMem : ptr32)
	T_48 (in signature of FreeMem : void)
Eq_61: (struct "Eq_61" (AC ui32 dw00AC))
	T_61 (in Mem0[a6_55 + 276:word32] : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in d0 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in a1 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_4: (in a6 : word32)
  Class: Eq_4
  DataType: word32
  OrigDataType: word32
T_5: (in a3_53 : Eq_5)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: (union (ui32 u0) (ptr32 u1))
T_6: (in 00000FFC : ptr32)
  Class: Eq_6
  DataType: (ptr ui32)
  OrigDataType: (ptr (struct (0 T_9 t0000)))
T_7: (in 0x00000000 : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_8: (in 0x00000FFC + 0x00000000 : word32)
  Class: Eq_8
  DataType: ptr32
  OrigDataType: ptr32
T_9: (in Mem0[0x00000FFC + 0x00000000:word32] : word32)
  Class: Eq_9
  DataType: ui32
  OrigDataType: ui32
T_10: (in 0x00000002 : word32)
  Class: Eq_10
  DataType: ui32
  OrigDataType: ui32
T_11: (in *(ui32 *) 0x00000FFC * 0x00000002 : word32)
  Class: Eq_11
  DataType: ui32
  OrigDataType: ui32
T_12: (in 0x00000002 : word32)
  Class: Eq_12
  DataType: ui32
  OrigDataType: ui32
T_13: (in *(ui32 *) 0x00000FFC * 0x00000002 * 0x00000002 : word32)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: ui32
T_14: (in a7_54 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in a6_55 : (ptr Eq_15))
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (struct (114 T_61 t0114)))
T_16: (in a5_56 : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_17: (in a3_58 : (ptr uint32))
  Class: Eq_17
  DataType: (ptr uint32)
  OrigDataType: (ptr (struct (0 T_78 t0000)))
T_18: (in a2_59 : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_19: (in a1_60 : ptr32)
  Class: Eq_19
  DataType: ptr32
  OrigDataType: ptr32
T_20: (in a0_61 : word32)
  Class: Eq_20
  DataType: word32
  OrigDataType: word32
T_21: (in d7_62 : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in d6_63 : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_23: (in d5_64 : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_24: (in d4_65 : word32)
  Class: Eq_24
  DataType: word32
  OrigDataType: word32
T_25: (in d3_66 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_26: (in d2_67 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_27: (in d1_68 : word32)
  Class: Eq_27
  DataType: word32
  OrigDataType: word32
T_28: (in d0_69 : word32)
  Class: Eq_28
  DataType: word32
  OrigDataType: word32
T_29: (in ZN_70 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in C_71 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in V_72 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in Z_73 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in CVZN_74 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in N_75 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in CVZNX_76 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in a4_126 : (ptr word32))
  Class: Eq_36
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_41 t0000)))
T_37: (in 4 : int32)
  Class: Eq_37
  DataType: int32
  OrigDataType: int32
T_38: (in a3_53 + 4 : word32)
  Class: Eq_38
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_39: (in 0x00000000 : word32)
  Class: Eq_28
  DataType: word32
  OrigDataType: word32
T_40: (in d0_69 == 0x00000000 : bool)
  Class: Eq_40
  DataType: bool
  OrigDataType: bool
T_41: (in d2_116 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in 0x00000004 : word32)
  Class: Eq_42
  DataType: ui32
  OrigDataType: ui32
T_43: (in a1_60 - 0x00000004 : word32)
  Class: Eq_43
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_46 t0000)))
T_44: (in 0x00000000 : word32)
  Class: Eq_44
  DataType: word32
  OrigDataType: word32
T_45: (in a1_60 - 0x00000004 + 0x00000000 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in Mem0[a1_60 - 0x00000004 + 0x00000000:word32] : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_47: (in FreeMem : ptr32)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: (ptr (fn T_57 (T_52, T_56)))
T_48: (in signature of FreeMem : void)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: 
T_49: (in memoryBlock : word32)
  Class: Eq_49
  DataType: ptr32
  OrigDataType: 
T_50: (in byteSize : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: 
T_51: (in 0x00000008 : word32)
  Class: Eq_51
  DataType: ui32
  OrigDataType: ui32
T_52: (in a1_60 - 0x00000008 : word32)
  Class: Eq_49
  DataType: ptr32
  OrigDataType: ptr32
T_53: (in a1_60 - 0x00000008 : word32)
  Class: Eq_53
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_56 t0000)))
T_54: (in 0x00000000 : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_55: (in a1_60 - 0x00000008 + 0x00000000 : word32)
  Class: Eq_55
  DataType: ptr32
  OrigDataType: ptr32
T_56: (in Mem0[a1_60 - 0x00000008 + 0x00000000:word32] : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_57: (in FreeMem(a1_60 - 0x00000008, *(a1_60 - 0x00000008)) : void)
  Class: Eq_57
  DataType: void
  OrigDataType: void
T_58: (in d0_120 : ui32)
  Class: Eq_58
  DataType: ui32
  OrigDataType: ui32
T_59: (in 276 : int32)
  Class: Eq_59
  DataType: int32
  OrigDataType: int32
T_60: (in a6_55 + 276 : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_61: (in Mem0[a6_55 + 276:word32] : word32)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: (ptr (struct (AC T_64 t00AC)))
T_62: (in 172 : int32)
  Class: Eq_62
  DataType: int32
  OrigDataType: int32
T_63: (in Mem0[a6_55 + 276:word32] + 172 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_64: (in Mem0[Mem0[a6_55 + 276:word32] + 172:word32] : word32)
  Class: Eq_58
  DataType: ui32
  OrigDataType: word32
T_65: (in 0x00000000 : word32)
  Class: Eq_58
  DataType: ui32
  OrigDataType: word32
T_66: (in d0_120 == 0x00000000 : bool)
  Class: Eq_66
  DataType: bool
  OrigDataType: bool
T_67: (in 0x00000000 : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in a4_126 + 0x00000000 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in Mem128[a4_126 + 0x00000000:word32] : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_70: (in 0x00000000 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_71: (in 0x00000000 : word32)
  Class: Eq_71
  DataType: word32
  OrigDataType: word32
T_72: (in a4_126 + 0x00000000 : word32)
  Class: Eq_72
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_73: (in Mem135[a4_126 + 0x00000000:word32] : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_74: (in 0x00000002 : word32)
  Class: Eq_74
  DataType: word32
  OrigDataType: word32
T_75: (in a4_126 >> 0x00000002 : word32)
  Class: Eq_75
  DataType: uint32
  OrigDataType: uint32
T_76: (in 0x00000000 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_77: (in a3_58 + 0x00000000 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_78: (in Mem139[a3_58 + 0x00000000:word32] : word32)
  Class: Eq_75
  DataType: uint32
  OrigDataType: word32
T_79: (in 0x00000002 : word32)
  Class: Eq_79
  DataType: word32
  OrigDataType: word32
T_80: (in d0_120 << 0x00000002 : word32)
  Class: Eq_80
  DataType: int32
  OrigDataType: int32
T_81: (in 60 : int32)
  Class: Eq_81
  DataType: int32
  OrigDataType: int32
T_82: (in (d0_120 << 0x00000002) + 60 : word32)
  Class: Eq_36
  DataType: (ptr word32)
  OrigDataType: int32
*/
typedef struct Globals {
} Eq_1;

typedef union Eq_5 {
	ui32 u0;
	ptr32 u1;
} Eq_5;

typedef struct Eq_15 {
	struct Eq_61 * ptr0114;	// 114
} Eq_15;

typedef void (Eq_47)(ptr32, word32);

typedef struct Eq_61 {
	ui32 dw00AC;	// AC
} Eq_61;

