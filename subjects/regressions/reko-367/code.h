// code.h
// Generated by decompiling code.bin
// using Reko decompiler version 0.8.0.2.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_2: (fn void ())
	T_2 (in fn800003CC : ptr32)
	T_3 (in signature of fn800003CC : void)
Eq_35: (fn real80 (real96, real96))
	T_35 (in fn80000132 : ptr32)
	T_36 (in signature of fn80000132 : void)
	T_65 (in fn80000132 : ptr32)
	T_102 (in fn80000132 : ptr32)
Eq_42: (fn real80 (real96))
	T_42 (in fn8000018E : ptr32)
	T_43 (in signature of fn8000018E : void)
	T_74 (in fn8000018E : ptr32)
	T_108 (in fn8000018E : ptr32)
Eq_55: (union "Eq_55" (real80 u0) (ptr32 u1))
	T_55 (in fp2Out : Eq_55)
	T_93 (in out fp2_28 : ptr32)
	T_120 (in out fp2_40 : ptr32)
Eq_83: (fn void (real96))
	T_83 (in fn800001F2 : ptr32)
	T_84 (in signature of fn800001F2 : void)
	T_112 (in fn800001F2 : ptr32)
Eq_89: (fn real80 (real96, Eq_55))
	T_89 (in fn800002AE : ptr32)
	T_90 (in signature of fn800002AE : void)
	T_117 (in fn800002AE : ptr32)
Eq_122: (fn void (real96))
	T_122 (in fn8000036C : ptr32)
	T_123 (in signature of fn8000036C : void)
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in fn800003CC : ptr32)
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: (ptr32 (fn T_4 ()))
T_3: (in signature of fn800003CC : void)
  Class: Eq_2
  DataType: (ptr32 Eq_2)
  OrigDataType: 
T_4: (in fn800003CC() : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in fp0 : real80)
  Class: Eq_5
  DataType: real80
  OrigDataType: real80
T_6: (in rArg04 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_7: (in rArg10 : real96)
  Class: Eq_7
  DataType: real96
  OrigDataType: real96
T_8: (in dwLoc14_16 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in 0x00000000 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_10: (in rLoc24 : real96)
  Class: Eq_10
  DataType: real96
  OrigDataType: real96
T_11: (in dwLoc10 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in DPB(rLoc24, dwLoc10, 0) : real96)
  Class: Eq_12
  DataType: real96
  OrigDataType: real96
T_13: (in (real80) DPB(rLoc24, dwLoc10, 0) : real80)
  Class: Eq_5
  DataType: real80
  OrigDataType: real80
T_14: (in 0x00000001 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in dwLoc14_16 + 0x00000001 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_16: (in (real80) dwLoc14_16 : real80)
  Class: Eq_16
  DataType: real80
  OrigDataType: real80
T_17: (in (real96) (real80) dwLoc14_16 : real96)
  Class: Eq_7
  DataType: real96
  OrigDataType: real96
T_18: (in (real96) (real80) dwLoc14_16 >= rArg10 : bool)
  Class: Eq_18
  DataType: bool
  OrigDataType: bool
T_19: (in fp0 : real80)
  Class: Eq_19
  DataType: real80
  OrigDataType: real80
T_20: (in rArg04 : real96)
  Class: Eq_20
  DataType: real96
  OrigDataType: real96
T_21: (in dwLoc14_18 : int32)
  Class: Eq_21
  DataType: int32
  OrigDataType: int32
T_22: (in 1 : int32)
  Class: Eq_21
  DataType: int32
  OrigDataType: int32
T_23: (in rLoc24 : real96)
  Class: Eq_23
  DataType: real96
  OrigDataType: real96
T_24: (in dwLoc10 : word32)
  Class: Eq_24
  DataType: word32
  OrigDataType: word32
T_25: (in DPB(rLoc24, dwLoc10, 0) : real96)
  Class: Eq_25
  DataType: real96
  OrigDataType: real96
T_26: (in (real80) DPB(rLoc24, dwLoc10, 0) : real80)
  Class: Eq_19
  DataType: real80
  OrigDataType: real80
T_27: (in 0x00000001 : word32)
  Class: Eq_27
  DataType: word32
  OrigDataType: word32
T_28: (in dwLoc14_18 + 0x00000001 : word32)
  Class: Eq_21
  DataType: int32
  OrigDataType: int32
T_29: (in (real80) dwLoc14_18 : real80)
  Class: Eq_29
  DataType: real80
  OrigDataType: real80
T_30: (in (real96) (real80) dwLoc14_18 : real96)
  Class: Eq_20
  DataType: real96
  OrigDataType: real96
T_31: (in (real96) (real80) dwLoc14_18 > rArg04 : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in rArg04 : real96)
  Class: Eq_32
  DataType: real96
  OrigDataType: real96
T_33: (in dwLoc20_25 : int32)
  Class: Eq_33
  DataType: int32
  OrigDataType: int32
T_34: (in 3 : int32)
  Class: Eq_33
  DataType: int32
  OrigDataType: int32
T_35: (in fn80000132 : ptr32)
  Class: Eq_35
  DataType: (ptr32 Eq_35)
  OrigDataType: (ptr32 (fn T_41 (T_38, T_40)))
T_36: (in signature of fn80000132 : void)
  Class: Eq_35
  DataType: (ptr32 Eq_35)
  OrigDataType: 
T_37: (in (real80) rArg04 : real80)
  Class: Eq_37
  DataType: real80
  OrigDataType: real80
T_38: (in (real96) (real80) rArg04 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_39: (in (real80) dwLoc20_25 : real80)
  Class: Eq_39
  DataType: real80
  OrigDataType: real80
T_40: (in (real96) (real80) dwLoc20_25 : real96)
  Class: Eq_7
  DataType: real96
  OrigDataType: real96
T_41: (in fn80000132((real96) (real80) rArg04, (real96) (real80) dwLoc20_25) : real80)
  Class: Eq_41
  DataType: real80
  OrigDataType: real80
T_42: (in fn8000018E : ptr32)
  Class: Eq_42
  DataType: (ptr32 Eq_42)
  OrigDataType: (ptr32 (fn T_46 (T_45)))
T_43: (in signature of fn8000018E : void)
  Class: Eq_42
  DataType: (ptr32 Eq_42)
  OrigDataType: 
T_44: (in (real80) dwLoc20_25 : real80)
  Class: Eq_44
  DataType: real80
  OrigDataType: real80
T_45: (in (real96) (real80) dwLoc20_25 : real96)
  Class: Eq_20
  DataType: real96
  OrigDataType: real96
T_46: (in fn8000018E((real96) (real80) dwLoc20_25) : real80)
  Class: Eq_46
  DataType: real80
  OrigDataType: real80
T_47: (in 0x00000002 : word32)
  Class: Eq_47
  DataType: word32
  OrigDataType: word32
T_48: (in dwLoc20_25 + 0x00000002 : word32)
  Class: Eq_33
  DataType: int32
  OrigDataType: int32
T_49: (in 100 : int32)
  Class: Eq_49
  DataType: int32
  OrigDataType: int32
T_50: (in 100 - dwLoc20_25 : word32)
  Class: Eq_50
  DataType: int32
  OrigDataType: int32
T_51: (in 0x00000000 : word32)
  Class: Eq_50
  DataType: int32
  OrigDataType: int32
T_52: (in 100 - dwLoc20_25 < 0x00000000 : bool)
  Class: Eq_52
  DataType: bool
  OrigDataType: bool
T_53: (in fp0 : real80)
  Class: Eq_53
  DataType: real80
  OrigDataType: real80
T_54: (in rArg04 : real96)
  Class: Eq_54
  DataType: real96
  OrigDataType: real96
T_55: (in fp2Out : Eq_55)
  Class: Eq_55
  DataType: Eq_55
  OrigDataType: ptr32
T_56: (in dwLoc20_24 : int32)
  Class: Eq_56
  DataType: int32
  OrigDataType: int32
T_57: (in 2 : int32)
  Class: Eq_56
  DataType: int32
  OrigDataType: int32
T_58: (in fp2_102 : real80)
  Class: Eq_58
  DataType: real80
  OrigDataType: real80
T_59: (in fp2 : real80)
  Class: Eq_59
  DataType: real80
  OrigDataType: real80
T_60: (in *fp2Out : real80)
  Class: Eq_59
  DataType: real80
  OrigDataType: real80
T_61: (in rLoc3C : real96)
  Class: Eq_20
  DataType: real96
  OrigDataType: real96
T_62: (in dwLoc10 : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_63: (in DPB(rLoc3C, dwLoc10, 0) : real96)
  Class: Eq_63
  DataType: real96
  OrigDataType: real96
T_64: (in (real80) DPB(rLoc3C, dwLoc10, 0) : real80)
  Class: Eq_53
  DataType: real80
  OrigDataType: real80
T_65: (in fn80000132 : ptr32)
  Class: Eq_35
  DataType: (ptr32 Eq_35)
  OrigDataType: (ptr32 (fn T_70 (T_67, T_69)))
T_66: (in (real80) rArg04 : real80)
  Class: Eq_66
  DataType: real80
  OrigDataType: real80
T_67: (in (real96) (real80) rArg04 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_68: (in (real80) dwLoc20_24 : real80)
  Class: Eq_68
  DataType: real80
  OrigDataType: real80
T_69: (in (real96) (real80) dwLoc20_24 : real96)
  Class: Eq_7
  DataType: real96
  OrigDataType: real96
T_70: (in fn80000132((real96) (real80) rArg04, (real96) (real80) dwLoc20_24) : real80)
  Class: Eq_41
  DataType: real80
  OrigDataType: real80
T_71: (in v19_59 : real96)
  Class: Eq_20
  DataType: real96
  OrigDataType: real96
T_72: (in (real80) dwLoc20_24 : real80)
  Class: Eq_72
  DataType: real80
  OrigDataType: real80
T_73: (in (real96) (real80) dwLoc20_24 : real96)
  Class: Eq_20
  DataType: real96
  OrigDataType: real96
T_74: (in fn8000018E : ptr32)
  Class: Eq_42
  DataType: (ptr32 Eq_42)
  OrigDataType: (ptr32 (fn T_75 (T_71)))
T_75: (in fn8000018E(v19_59) : real80)
  Class: Eq_46
  DataType: real80
  OrigDataType: real80
T_76: (in 0x00000002 : word32)
  Class: Eq_76
  DataType: word32
  OrigDataType: word32
T_77: (in dwLoc20_24 + 0x00000002 : word32)
  Class: Eq_56
  DataType: int32
  OrigDataType: int32
T_78: (in 100 : int32)
  Class: Eq_78
  DataType: int32
  OrigDataType: int32
T_79: (in 100 - dwLoc20_24 : word32)
  Class: Eq_79
  DataType: int32
  OrigDataType: int32
T_80: (in 0x00000000 : word32)
  Class: Eq_79
  DataType: int32
  OrigDataType: int32
T_81: (in 100 - dwLoc20_24 < 0x00000000 : bool)
  Class: Eq_81
  DataType: bool
  OrigDataType: bool
T_82: (in rArg04 : real96)
  Class: Eq_82
  DataType: real96
  OrigDataType: real96
T_83: (in fn800001F2 : ptr32)
  Class: Eq_83
  DataType: (ptr32 Eq_83)
  OrigDataType: (ptr32 (fn T_87 (T_86)))
T_84: (in signature of fn800001F2 : void)
  Class: Eq_83
  DataType: (ptr32 Eq_83)
  OrigDataType: 
T_85: (in (real80) rArg04 : real80)
  Class: Eq_85
  DataType: real80
  OrigDataType: real80
T_86: (in (real96) (real80) rArg04 : real96)
  Class: Eq_32
  DataType: real96
  OrigDataType: real96
T_87: (in fn800001F2((real96) (real80) rArg04) : void)
  Class: Eq_87
  DataType: void
  OrigDataType: void
T_88: (in fp2_28 : real80)
  Class: Eq_88
  DataType: real80
  OrigDataType: real80
T_89: (in fn800002AE : ptr32)
  Class: Eq_89
  DataType: (ptr32 Eq_89)
  OrigDataType: (ptr32 (fn T_94 (T_92, T_93)))
T_90: (in signature of fn800002AE : void)
  Class: Eq_89
  DataType: (ptr32 Eq_89)
  OrigDataType: 
T_91: (in (real80) rArg04 : real80)
  Class: Eq_91
  DataType: real80
  OrigDataType: real80
T_92: (in (real96) (real80) rArg04 : real96)
  Class: Eq_54
  DataType: real96
  OrigDataType: real96
T_93: (in out fp2_28 : ptr32)
  Class: Eq_55
  DataType: Eq_55
  OrigDataType: (union (real80 u0) (ptr32 u1))
T_94: (in fn800002AE((real96) (real80) rArg04, out fp2_28) : real80)
  Class: Eq_94
  DataType: real80
  OrigDataType: real80
T_95: (in v6_9 : real96)
  Class: Eq_95
  DataType: real96
  OrigDataType: real96
T_96: (in 80000538 : ptr32)
  Class: Eq_96
  DataType: (ptr32 real96)
  OrigDataType: (ptr32 (struct (0 T_99 t0000)))
T_97: (in 0x00000000 : word32)
  Class: Eq_97
  DataType: word32
  OrigDataType: word32
T_98: (in 0x80000538 + 0x00000000 : word32)
  Class: Eq_98
  DataType: ptr32
  OrigDataType: ptr32
T_99: (in Mem0[0x80000538 + 0x00000000:real96] : real96)
  Class: Eq_99
  DataType: real96
  OrigDataType: real96
T_100: (in (real80) *(real96 *) 0x80000538 : real80)
  Class: Eq_100
  DataType: real80
  OrigDataType: real80
T_101: (in (real96) (real80) *(real96 *) 0x80000538 : real96)
  Class: Eq_95
  DataType: real96
  OrigDataType: real96
T_102: (in fn80000132 : ptr32)
  Class: Eq_35
  DataType: (ptr32 Eq_35)
  OrigDataType: (ptr32 (fn T_107 (T_104, T_106)))
T_103: (in (real80) v6_9 : real80)
  Class: Eq_103
  DataType: real80
  OrigDataType: real80
T_104: (in (real96) (real80) v6_9 : real96)
  Class: Eq_6
  DataType: real96
  OrigDataType: real96
T_105: (in (real80) v6_9 : real80)
  Class: Eq_105
  DataType: real80
  OrigDataType: real80
T_106: (in (real96) (real80) v6_9 : real96)
  Class: Eq_7
  DataType: real96
  OrigDataType: real96
T_107: (in fn80000132((real96) (real80) v6_9, (real96) (real80) v6_9) : real80)
  Class: Eq_41
  DataType: real80
  OrigDataType: real80
T_108: (in fn8000018E : ptr32)
  Class: Eq_42
  DataType: (ptr32 Eq_42)
  OrigDataType: (ptr32 (fn T_111 (T_110)))
T_109: (in (real80) v6_9 : real80)
  Class: Eq_109
  DataType: real80
  OrigDataType: real80
T_110: (in (real96) (real80) v6_9 : real96)
  Class: Eq_20
  DataType: real96
  OrigDataType: real96
T_111: (in fn8000018E((real96) (real80) v6_9) : real80)
  Class: Eq_46
  DataType: real80
  OrigDataType: real80
T_112: (in fn800001F2 : ptr32)
  Class: Eq_83
  DataType: (ptr32 Eq_83)
  OrigDataType: (ptr32 (fn T_115 (T_114)))
T_113: (in (real80) v6_9 : real80)
  Class: Eq_113
  DataType: real80
  OrigDataType: real80
T_114: (in (real96) (real80) v6_9 : real96)
  Class: Eq_32
  DataType: real96
  OrigDataType: real96
T_115: (in fn800001F2((real96) (real80) v6_9) : void)
  Class: Eq_87
  DataType: void
  OrigDataType: void
T_116: (in fp2_40 : real80)
  Class: Eq_116
  DataType: real80
  OrigDataType: real80
T_117: (in fn800002AE : ptr32)
  Class: Eq_89
  DataType: (ptr32 Eq_89)
  OrigDataType: (ptr32 (fn T_121 (T_119, T_120)))
T_118: (in (real80) v6_9 : real80)
  Class: Eq_118
  DataType: real80
  OrigDataType: real80
T_119: (in (real96) (real80) v6_9 : real96)
  Class: Eq_54
  DataType: real96
  OrigDataType: real96
T_120: (in out fp2_40 : ptr32)
  Class: Eq_55
  DataType: Eq_55
  OrigDataType: (union (real80 u0) (ptr32 u1))
T_121: (in fn800002AE((real96) (real80) v6_9, out fp2_40) : real80)
  Class: Eq_94
  DataType: real80
  OrigDataType: real80
T_122: (in fn8000036C : ptr32)
  Class: Eq_122
  DataType: (ptr32 Eq_122)
  OrigDataType: (ptr32 (fn T_126 (T_125)))
T_123: (in signature of fn8000036C : void)
  Class: Eq_122
  DataType: (ptr32 Eq_122)
  OrigDataType: 
T_124: (in (real80) v6_9 : real80)
  Class: Eq_124
  DataType: real80
  OrigDataType: real80
T_125: (in (real96) (real80) v6_9 : real96)
  Class: Eq_82
  DataType: real96
  OrigDataType: real96
T_126: (in fn8000036C((real96) (real80) v6_9) : void)
  Class: Eq_126
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)();

typedef real80 (Eq_35)(real96, real96);

typedef real80 (Eq_42)(real96);

typedef union Eq_55 {
	real80 u0;
	ptr32 u1;
} Eq_55;

typedef void (Eq_83)(real96);

typedef real80 (Eq_89)(real96, Eq_55);

typedef void (Eq_122)(real96);

