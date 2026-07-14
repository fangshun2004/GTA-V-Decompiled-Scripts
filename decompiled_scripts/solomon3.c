#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = -2;
	var uLocal_14 = -2;
	var uLocal_15 = -2;
	var uLocal_16 = 5;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 2;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 2;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 2;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	char* sLocal_37 = NULL;
	float fLocal_38 = 0f;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	bool bLocal_114 = 0;
	var uLocal_115 = 0;
	bool bLocal_116 = 0;
	bool bLocal_117 = 0;
	bool bLocal_118 = 0;
	bool bLocal_119 = 0;
	bool bLocal_120 = 0;
	bool bLocal_121 = 0;
	bool bLocal_122 = 0;
	bool bLocal_123 = 0;
	bool bLocal_124 = 0;
	bool bLocal_125 = 0;
	float fLocal_126[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_302[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_478[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_654[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_830[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1006 = 0f;
	float fLocal_1007 = 0f;
	float fLocal_1008 = 0f;
	float fLocal_1009 = 0f;
	float fLocal_1010[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1046[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1082[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1118[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1154[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1190[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1226[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1242[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1258[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1274[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1290 = 0f;
	float fLocal_1291 = 0f;
	float fLocal_1292 = 0f;
	float fLocal_1293 = 0f;
	float fLocal_1294 = 0f;
	float fLocal_1295 = 0f;
	float fLocal_1296 = 0f;
	float fLocal_1297 = 0f;
	float fLocal_1298 = 0f;
	float fLocal_1299 = 0f;
	float fLocal_1300 = 0f;
	float fLocal_1301 = 0f;
	float fLocal_1302 = 0f;
	float fLocal_1303 = 0f;
	float fLocal_1304 = 0f;
	float fLocal_1305 = 0f;
	float fLocal_1306 = 0f;
	float fLocal_1307 = 0f;
	float fLocal_1308 = 0f;
	float fLocal_1309 = 0f;
	float fLocal_1310 = 0f;
	int iLocal_1311[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1487[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1663[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1839[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1875[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1911[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1947[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1963 = 0;
	int iLocal_1964 = 0;
	int iLocal_1965 = 0;
	int iLocal_1966 = 0;
	int iLocal_1967 = 0;
	int iLocal_1968 = 0;
	int iLocal_1969 = 0;
	int iLocal_1970 = 0;
	int iLocal_1971 = 0;
	int iLocal_1972 = 0;
	int iLocal_1973 = 0;
	int iLocal_1974 = 0;
	int iLocal_1975 = 0;
	int iLocal_1976 = 0;
	int iLocal_1977 = 0;
	int iLocal_1978 = 0;
	int iLocal_1979 = 0;
	struct<3> Local_1980[175];
	struct<3> Local_2506[15];
	struct<3> Local_2552[35];
	struct<3> Local_2658 = { 0, 0, 0 } ;
	struct<3> Local_2661 = { 0, 0, 0 } ;
	struct<3> Local_2664 = { 0, 0, 0 } ;
	struct<3> Local_2667 = { 0, 0, 0 } ;
	struct<3> Local_2670 = { 0, 0, 0 } ;
	struct<3> Local_2673 = { 0, 0, 0 } ;
	struct<3> Local_2676 = { 0, 0, 0 } ;
	struct<3> Local_2679 = { 0, 0, 0 } ;
	struct<3> Local_2682 = { 0, 0, 0 } ;
	char cLocal_2685[64] = "";
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	int iLocal_2701 = 0;
	int iLocal_2702[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2878[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2894[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2930 = 0;
	int iLocal_2931 = 0;
	int iLocal_2932 = 0;
	int iLocal_2933[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3109[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3122[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3138[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3174[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_3181 = 0;
	int iLocal_3182 = 0;
	int iLocal_3183 = 0;
	var uLocal_3184 = 12;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	int iLocal_3197 = 0;
	int iLocal_3198 = 0;
	int iLocal_3199 = 0;
	int iLocal_3200 = 0;
	int iLocal_3201 = 0;
	int iLocal_3202 = 0;
	int iLocal_3203 = 0;
	int iLocal_3204 = 0;
	int iLocal_3205 = 0;
	int iLocal_3206 = 0;
	int iLocal_3207 = 0;
	int iLocal_3208 = 0;
	int iLocal_3209 = 0;
	int iLocal_3210 = 0;
	int iLocal_3211 = 0;
	int iLocal_3212 = 0;
	int iLocal_3213 = 0;
	int iLocal_3214 = 0;
	int iLocal_3215 = 0;
	int iLocal_3216 = 0;
	int iLocal_3217 = 0;
	int iLocal_3218 = 0;
	int iLocal_3219 = 0;
	int iLocal_3220 = 0;
	int iLocal_3221 = 0;
	int iLocal_3222 = 0;
	int iLocal_3223 = 0;
	int iLocal_3224 = 0;
	int iLocal_3225 = 0;
	int iLocal_3226 = 0;
	int iLocal_3227 = 0;
	int iLocal_3228 = 0;
	int iLocal_3229 = 0;
	int iLocal_3230 = 0;
	int iLocal_3231 = 0;
	int iLocal_3232 = 0;
	int iLocal_3233 = 0;
	int iLocal_3234 = 0;
	int iLocal_3235 = 0;
	int iLocal_3236 = 0;
	int iLocal_3237 = 0;
	int iLocal_3238 = 0;
	int iLocal_3239 = 0;
	int iLocal_3240[4] = { 0, 0, 0, 0 };
	int iLocal_3245 = 0;
	var uLocal_3246[3] = { 0, 0, 0 };
	int iLocal_3250[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3262 = 0;
	int iLocal_3263 = 0;
	int iLocal_3264 = 0;
	int iLocal_3265 = 0;
	int iLocal_3266 = 0;
	int iLocal_3267 = 0;
	int iLocal_3268[2] = { 0, 0 };
	int iLocal_3271[2] = { 0, 0 };
	int iLocal_3274 = 0;
	int iLocal_3275 = 0;
	int iLocal_3276 = 0;
	int iLocal_3277[2] = { 0, 0 };
	int iLocal_3280 = 0;
	int iLocal_3281 = 0;
	int iLocal_3282 = 0;
	int iLocal_3283 = 0;
	int iLocal_3284 = 0;
	int iLocal_3285[2] = { 0, 0 };
	int iLocal_3288 = 0;
	int iLocal_3289[2] = { 0, 0 };
	int iLocal_3292 = 0;
	int iLocal_3293 = 0;
	int iLocal_3294 = 0;
	int iLocal_3295 = 0;
	int iLocal_3296[2] = { 0, 0 };
	int iLocal_3299 = 0;
	int iLocal_3300 = 0;
	int iLocal_3301 = 0;
	int iLocal_3302 = 0;
	int iLocal_3303 = 0;
	int iLocal_3304 = 0;
	int iLocal_3305 = 0;
	int iLocal_3306 = 0;
	int iLocal_3307 = 0;
	int iLocal_3308 = 0;
	int iLocal_3309 = 0;
	int iLocal_3310 = 0;
	struct<3> Local_3311 = { 0, 0, 0 } ;
	struct<3> Local_3314 = { 0, 0, 0 } ;
	struct<3> Local_3317 = { 0, 0, 0 } ;
	struct<3> Local_3320 = { 0, 0, 0 } ;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	struct<3> Local_3329 = { 0, 0, 0 } ;
	struct<3> Local_3332 = { 0, 0, 0 } ;
	struct<3> Local_3335 = { 0, 0, 0 } ;
	float fLocal_3338 = 0f;
	float fLocal_3339 = 0f;
	float fLocal_3340 = 0f;
	float fLocal_3341 = 0f;
	float fLocal_3342 = 0f;
	float fLocal_3343 = 0f;
	int iLocal_3344 = 0;
	int iLocal_3345 = 0;
	var uLocal_3346 = 0;
	int iLocal_3347 = 0;
	int iLocal_3348 = 0;
	int iLocal_3349 = 0;
	int iLocal_3350 = 0;
	int iLocal_3351 = 0;
	int iLocal_3352 = 0;
	int iLocal_3353 = 0;
	int iLocal_3354 = 0;
	int iLocal_3355 = 0;
	int iLocal_3356 = 0;
	int iLocal_3357 = 0;
	int iLocal_3358 = 0;
	int iLocal_3359 = 0;
	int iLocal_3360 = 0;
	int iLocal_3361 = 0;
	int iLocal_3362 = 0;
	int iLocal_3363 = 0;
	int iLocal_3364 = 0;
	int iLocal_3365 = 0;
	int iLocal_3366 = 0;
	int iLocal_3367 = 0;
	int iLocal_3368 = 0;
	int iLocal_3369 = 0;
	int iLocal_3370 = 0;
	int iLocal_3371 = 0;
	int iLocal_3372 = 0;
	int iLocal_3373 = 0;
	int iLocal_3374 = 0;
	int iLocal_3375 = 0;
	int iLocal_3376 = 0;
	int iLocal_3377 = 0;
	int iLocal_3378 = 0;
	int iLocal_3379 = 0;
	int iLocal_3380 = 0;
	int iLocal_3381 = 0;
	int iLocal_3382[3] = { 0, 0, 0 };
	int iLocal_3386[2] = { 0, 0 };
	int iLocal_3389 = 0;
	int iLocal_3390 = 0;
	int iLocal_3391 = 0;
	int iLocal_3392 = 0;
	int iLocal_3393 = 0;
	int iLocal_3394 = 0;
	int iLocal_3395 = 0;
	int iLocal_3396 = 0;
	int iLocal_3397 = 0;
	int iLocal_3398 = 0;
	int iLocal_3399 = 0;
	int iLocal_3400 = 0;
	int iLocal_3401 = 0;
	int iLocal_3402 = 0;
	int iLocal_3403 = 0;
	int iLocal_3404 = 0;
	int iLocal_3405 = 0;
	int iLocal_3406 = 0;
	int iLocal_3407 = 0;
	int iLocal_3408 = 0;
	int iLocal_3409 = 0;
	int iLocal_3410 = 0;
	int iLocal_3411 = 0;
	int iLocal_3412 = 0;
	int iLocal_3413 = 0;
	int iLocal_3414 = 0;
	int iLocal_3415 = 0;
	int iLocal_3416 = 0;
	var uLocal_3417 = 0;
	int iLocal_3418 = 0;
	int iLocal_3419 = 0;
	int iLocal_3420 = 0;
	int iLocal_3421[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3447 = 0;
	int iLocal_3448 = 0;
	int iLocal_3449 = 0;
	int iLocal_3450 = 0;
	int iLocal_3451 = 0;
	int iLocal_3452 = 0;
	int iLocal_3453 = 0;
	int iLocal_3454 = 0;
	int iLocal_3455 = 0;
	int iLocal_3456 = 0;
	int iLocal_3457 = 0;
	int iLocal_3458 = 0;
	int iLocal_3459 = 0;
	int iLocal_3460 = 0;
	int iLocal_3461 = 0;
	int iLocal_3462[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3482 = 0;
	int iLocal_3483 = 0;
	int iLocal_3484 = 0;
	int iLocal_3485 = 0;
	int iLocal_3486 = 0;
	int iLocal_3487 = 0;
	int iLocal_3488 = 0;
	int iLocal_3489 = 0;
	int iLocal_3490 = 0;
	int iLocal_3491 = 0;
	int iLocal_3492 = 0;
	int iLocal_3493 = 0;
	int iLocal_3494 = 0;
	int iLocal_3495 = 0;
	int iLocal_3496 = 0;
	int iLocal_3497[2] = { 0, 0 };
	int iLocal_3500[2] = { 0, 0 };
	int iLocal_3503 = 0;
	int iLocal_3504 = 0;
	int iLocal_3505 = 0;
	int iLocal_3506 = 0;
	int iLocal_3507[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3515[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3523 = 0;
	int iLocal_3524 = 0;
	int iLocal_3525 = 0;
	int iLocal_3526 = 0;
	int iLocal_3527 = 0;
	int iLocal_3528 = 0;
	int iLocal_3529 = 0;
	int iLocal_3530 = 0;
	int iLocal_3531 = 0;
	int iLocal_3532 = 0;
	int iLocal_3533[3] = { 0, 0, 0 };
	int iLocal_3537[2] = { 0, 0 };
	int iLocal_3540 = 0;
	int iLocal_3541[4] = { 0, 0, 0, 0 };
	int iLocal_3546 = 0;
	int iLocal_3547 = 0;
	int iLocal_3548 = 0;
	int iLocal_3549 = 0;
	int iLocal_3550 = 0;
	int iLocal_3551 = 0;
	int iLocal_3552 = 0;
	int iLocal_3553 = 0;
	int iLocal_3554 = 0;
	int iLocal_3555 = 0;
	int iLocal_3556 = 0;
	int iLocal_3557 = 0;
	int iLocal_3558 = 0;
	int iLocal_3559 = 0;
	int iLocal_3560[3] = { 0, 0, 0 };
	int iLocal_3564[3] = { 0, 0, 0 };
	int iLocal_3568 = 0;
	int iLocal_3569 = 0;
	int iLocal_3570 = 0;
	int iLocal_3571 = 0;
	int iLocal_3572 = 0;
	int iLocal_3573 = 0;
	int iLocal_3574 = 0;
	int iLocal_3575 = 0;
	int iLocal_3576 = 0;
	int iLocal_3577 = 0;
	int iLocal_3578 = 0;
	int iLocal_3579 = 0;
	int iLocal_3580 = 0;
	int iLocal_3581 = 0;
	int iLocal_3582 = 0;
	int iLocal_3583 = 0;
	int iLocal_3584 = 0;
	int iLocal_3585 = 0;
	int iLocal_3586 = 0;
	int iLocal_3587 = 0;
	int iLocal_3588[4] = { 0, 0, 0, 0 };
	int iLocal_3593 = 0;
	char* sLocal_3594 = NULL;
	var uLocal_3595 = 16;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 21;
	var uLocal_3768 = 6;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	int iLocal_3772[3] = { 0, 0, 0 };
	int iLocal_3776 = 0;
	int iLocal_3777 = 0;
	int iLocal_3778 = 0;
	int iLocal_3779 = 0;
	int iLocal_3780 = 0;
	int iLocal_3781 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_31 = 0.001f;
	iLocal_34 = -1;
	sLocal_37 = "NULL";
	fLocal_38 = 0f;
	fLocal_42 = -0.0375f;
	fLocal_43 = 0.17f;
	iLocal_72 = 3;
	fLocal_75 = 80f;
	fLocal_76 = 140f;
	fLocal_77 = 180f;
	iLocal_83 = 1;
	iLocal_84 = 65;
	iLocal_85 = 49;
	iLocal_86 = 64;
	iLocal_90 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_91 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	bLocal_95 = true;
	bLocal_102 = true;
	bLocal_124 = true;
	fLocal_1290 = 120f;
	fLocal_1291 = 0f;
	fLocal_1293 = 1f;
	fLocal_1294 = 0f;
	fLocal_1295 = 1f;
	fLocal_1296 = 30f;
	fLocal_1298 = 1f;
	fLocal_1299 = 5f;
	fLocal_1300 = 1f;
	fLocal_1301 = 1f;
	fLocal_1302 = 100f;
	fLocal_1303 = 100f;
	fLocal_1304 = 0f;
	fLocal_1305 = 7000f;
	fLocal_1306 = 0f;
	fLocal_1307 = 0f;
	fLocal_1308 = 0.3f;
	fLocal_1309 = 0.5f;
	fLocal_1310 = 50f;
	iLocal_1966 = -1;
	iLocal_1974 = -1;
	iLocal_1975 = -1;
	Local_3311 = { -1024.1f, -485.3321f, 35.9816f };
	Local_3314 = { -428.0263f, -2153.577f, 9.2997f };
	Local_3317 = { -498.7f, -2136.5f, 8.4f };
	Local_3329 = { -272.8615f, -2186.932f, 9.3174f };
	fLocal_3338 = 209.7233f;
	fLocal_3339 = 90.947f;
	fLocal_3342 = 46.7161f;
	if (func_460(0))
	{
		func_452(24, 0);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 20f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_450(PLAYER::PLAYER_PED_ID(), 0);
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FAIL");
		func_448();
		func_446();
	}
	func_445(1);
	MISC::SET_MISSION_FLAG(true);
	iLocal_3198 = 0;
	iLocal_3197 = 0;
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_LegalTrouble", 0);
		if (iLocal_3224 > MISC::GET_GAME_TIMER())
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		func_441();
		func_440();
		func_438();
		func_434();
		func_433();
		switch (iLocal_3197)
		{
			case 0:
				func_429();
				break;
			
			case 1:
				func_384();
				break;
			
			case 2:
				func_378();
				break;
			
			case 3:
				func_375();
				break;
			
			case 4:
				func_274();
				break;
			
			case 5:
				func_262();
				break;
			
			case 6:
				func_256();
				break;
			
			case 7:
				func_246();
				break;
			
			case 8:
				func_5();
				break;
			
			case 9:
				break;
			
			case 10:
				break;
			
			case 11:
				break;
		}
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()
{
	if (iLocal_3460 == 0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_4(PLAYER::PLAYER_PED_ID(), 476);
			iLocal_3460 = 1;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (iLocal_3461 == 0)
			{
				iLocal_3292 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3292))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3292, false))
					{
						func_3(iLocal_3292, -1);
						func_4(iLocal_3292, 479);
						iLocal_3461 = 1;
					}
				}
			}
		}
		else
		{
			func_4(0, 479);
			func_3(0, -1);
			if (iLocal_3461 == 1)
			{
				iLocal_3461 = 0;
			}
		}
	}
	if (iLocal_3462[0] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_3246[0]))
		{
			if (PED::IS_PED_INJURED(uLocal_3246[0]))
			{
				iLocal_3208++;
				iLocal_3462[0] = 1;
			}
		}
	}
	if (iLocal_3462[1] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_3246[1]))
		{
			if (PED::IS_PED_INJURED(uLocal_3246[1]))
			{
				iLocal_3208++;
				iLocal_3462[1] = 1;
			}
		}
	}
	if (iLocal_3462[2] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_3246[2]))
		{
			if (PED::IS_PED_INJURED(uLocal_3246[2]))
			{
				iLocal_3208++;
				iLocal_3462[2] = 1;
			}
		}
	}
	if (iLocal_3462[3] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[0]))
		{
			if (PED::IS_PED_INJURED(iLocal_3250[0]))
			{
				iLocal_3208++;
				iLocal_3462[3] = 1;
			}
		}
	}
	if (iLocal_3462[4] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_3250[1]))
			{
				iLocal_3208++;
				iLocal_3462[4] = 1;
			}
		}
	}
	if (iLocal_3462[5] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[2]))
		{
			if (PED::IS_PED_INJURED(iLocal_3250[2]))
			{
				iLocal_3208++;
				iLocal_3462[5] = 1;
			}
		}
	}
	if (iLocal_3462[6] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[3]))
		{
			if (PED::IS_PED_INJURED(iLocal_3250[3]))
			{
				iLocal_3208++;
				iLocal_3462[6] = 1;
			}
		}
	}
	if (iLocal_3462[7] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[4]))
		{
			if (PED::IS_PED_INJURED(iLocal_3250[4]))
			{
				iLocal_3208++;
				iLocal_3462[7] = 1;
			}
		}
	}
	if (iLocal_3462[8] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[5]))
		{
			if (PED::IS_PED_INJURED(iLocal_3250[5]))
			{
				iLocal_3208++;
				iLocal_3462[8] = 1;
			}
		}
	}
	if (iLocal_3462[9] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[6]))
		{
			if (PED::IS_PED_INJURED(iLocal_3250[6]))
			{
				iLocal_3208++;
				iLocal_3462[9] = 1;
			}
		}
	}
	if (iLocal_3462[10] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[7]))
		{
			if (PED::IS_PED_INJURED(iLocal_3250[7]))
			{
				iLocal_3208++;
				iLocal_3462[10] = 1;
			}
		}
	}
	if (iLocal_3462[11] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[8]))
		{
			if (PED::IS_PED_INJURED(iLocal_3250[8]))
			{
				iLocal_3208++;
				iLocal_3462[11] = 1;
			}
		}
	}
	if (iLocal_3462[12] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[9]))
		{
			if (PED::IS_PED_INJURED(iLocal_3250[9]))
			{
				iLocal_3208++;
				iLocal_3462[12] = 1;
			}
		}
	}
	if (iLocal_3462[13] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[10]))
		{
			if (PED::IS_PED_INJURED(iLocal_3250[10]))
			{
				iLocal_3208++;
				iLocal_3462[13] = 1;
			}
		}
	}
	if (iLocal_3462[14] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
		{
			if (PED::IS_PED_INJURED(iLocal_3265))
			{
				iLocal_3208++;
				iLocal_3462[14] = 1;
			}
		}
	}
	if (iLocal_3462[15] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
		{
			if (PED::IS_PED_INJURED(iLocal_3266))
			{
				iLocal_3208++;
				iLocal_3462[15] = 1;
			}
		}
	}
	if (iLocal_3462[16] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267))
		{
			if (PED::IS_PED_INJURED(iLocal_3267))
			{
				iLocal_3208++;
				iLocal_3462[16] = 1;
			}
		}
	}
	if (iLocal_3462[17] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3268[0]))
		{
			if (PED::IS_PED_INJURED(iLocal_3268[0]))
			{
				iLocal_3208++;
				iLocal_3462[17] = 1;
			}
		}
	}
	if (iLocal_3197 == 8)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			if (iLocal_3482 == 0)
			{
				func_2(482, 0);
				iLocal_3482 = 1;
			}
		}
	}
}

void func_2(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_65073 = iParam0;
	if (!Global_65071)
	{
		Global_65071 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_77158)
		{
			if (Global_77159[iVar0 /*9*/] == iParam0)
			{
				Global_77159[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_3(int iParam0, int iParam1)
{
	Global_65074 = iParam0;
	Global_65075 = iParam1;
}

void func_4(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_65076 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_77158)
	{
		if (iParam1 == -1 || Global_77159[iVar0 /*9*/] == iParam1)
		{
			if (Global_77159[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_77159[iVar0 /*9*/].f_6 = iParam0;
				Global_77159[iVar0 /*9*/].f_7 = 1;
				Global_77159[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_5()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3284))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3284, 0, false, true);
		}
	}
	if (iLocal_3198 > 0)
	{
		func_244();
	}
	if (iLocal_3198 == 0)
	{
		if (iLocal_3362 == 1)
		{
			func_129();
			iLocal_3362 = 0;
		}
		func_25(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
		iLocal_3391 = 0;
		iLocal_3392 = 0;
		iLocal_3393 = 0;
		iLocal_3363 = 0;
		iLocal_3364 = 0;
		iLocal_3365 = 0;
		iLocal_3447 = 0;
		iLocal_3448 = 0;
		iLocal_3449 = 0;
		iLocal_3486 = 0;
		iLocal_3487 = 0;
		iLocal_3491 = 0;
		iLocal_3494 = 0;
		iLocal_3202 = 0;
		STREAMING::REQUEST_ANIM_DICT("Misssolomon_3");
		STREAMING::REQUEST_MODEL(joaat("oracle2"));
		STREAMING::REQUEST_MODEL(joaat("baller2"));
		if (HUD::DOES_BLIP_EXIST(iLocal_3302))
		{
			HUD::REMOVE_BLIP(&iLocal_3302);
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", false, 1f, 1f);
			TASK::REMOVE_WAYPOINT_RECORDING("Trev4_5");
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3276);
		}
		SYSTEM::SETTIMERA(0);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_24())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			func_21(0, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
		{
			if (!PED::IS_PED_INJURED(iLocal_3245))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_3245, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3245, false);
			}
		}
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_LOSE_COPS");
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
		{
			AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS");
		}
		HUD::CLEAR_PRINTS();
		func_20("TRV4_END1", 7500, 1);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ENGINE_DEATH_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (func_19(2))
		{
			func_18(2, 0);
		}
		iLocal_3238 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, false, 7);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3283, false))
			{
				VEHICLE::SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(iLocal_3283, false);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3284))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3284, false))
			{
				VEHICLE::SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(iLocal_3284, false);
			}
		}
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		func_17(&uLocal_3595, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", false);
		iLocal_3198 = 1;
	}
	if (iLocal_3198 == 1)
	{
		if (iLocal_3486 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3296[0]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("oracle2")))
				{
					iLocal_3296[0] = VEHICLE::CREATE_VEHICLE(joaat("oracle2"), -1025.596f, -2869.237f, 12.9585f, 241.0686f, true, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3296[0], true, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3296[0], 5f);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("oracle2"));
					iLocal_3486 = 1;
				}
			}
		}
		if (iLocal_3487 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3296[1]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("baller2")))
				{
					iLocal_3296[1] = VEHICLE::CREATE_VEHICLE(joaat("baller2"), -971.4223f, -2903.354f, 12.9652f, 61.0213f, true, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3296[1], true, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3296[1], 5f);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller2"));
					iLocal_3487 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3296[0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3296[0], false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3296[0], false))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
					{
						AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3296[0], 1) > 200f || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3296[0], false))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3296[0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3296[1]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3296[1], false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3296[1], false))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
					{
						AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3296[1], 1) > 200f || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3296[1], false))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3296[1]));
			}
		}
		if (iLocal_3447 == 0)
		{
			if (!PED::IS_PED_INJURED(iLocal_3250[0]))
			{
				func_14(iLocal_3250[0], "SURROUNDED", 24);
				iLocal_3447 = 1;
			}
		}
		if (iLocal_3391 == 0)
		{
			if (SYSTEM::TIMERA() > 8000)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3285[0], false))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3285[0], 68, "BB_Chase", true);
					VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_3285[0], 0f, 0f, 0.15f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3285[1], false))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3285[1], 69, "BB_Chase", true);
					VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_3285[1], 0f, 0f, 0.15f);
				}
				iLocal_3391 = 1;
			}
		}
		else
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3285[0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3285[0]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3285[0]) > 5000f)
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_3285[0]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3285[0]);
						}
					}
				}
				else if (iLocal_3392 == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_3250[6]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[6], false);
					}
					if (!PED::IS_PED_INJURED(iLocal_3250[7]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[7], false);
					}
					iLocal_3392 = 1;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3285[1], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3285[1]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3285[1]) > 5000f)
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_3285[1]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3285[1]);
						}
					}
				}
				else if (iLocal_3393 == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_3250[8]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[8], false);
					}
					if (!PED::IS_PED_INJURED(iLocal_3250[9]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[9], false);
					}
					iLocal_3393 = 1;
				}
			}
		}
		func_12();
		if (iLocal_3491 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3284))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3284, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3284, false))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("TRV4_JET_ENTERED");
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
						{
							AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 15f, 4);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3284);
						iLocal_3491 = 1;
					}
					else if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3284, 1) > 200f)
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3284);
					}
				}
			}
		}
		if (iLocal_3491 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3284))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3284, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3284, false))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
						{
							AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
						}
						AUDIO::TRIGGER_MUSIC_EVENT("TRV4_LOSE_COPS");
						iLocal_3491 = 0;
					}
				}
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (iLocal_3494 == 0)
			{
				iLocal_3210 = MISC::GET_GAME_TIMER();
				iLocal_3494 = 1;
			}
		}
		if (iLocal_3494 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3210 + 3500)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
					}
					AUDIO::TRIGGER_MUSIC_EVENT("TRV4_COPS_LOST");
					func_11(0, -1);
					func_6();
				}
			}
			else
			{
				iLocal_3494 = 0;
			}
		}
	}
}

void func_6()
{
	func_10(481, iLocal_3208, 0);
	func_7(0, 0);
	func_446();
}

void func_7(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_65065)
	{
		Global_65065 = iParam1;
	}
	if (bParam0)
	{
		if ((func_460(0) && Global_80584.f_1 == 1) && func_9(Global_80584))
		{
		}
		else
		{
			Global_65063 = 1;
		}
	}
	if (Global_114963.f_9094 || func_460(0))
	{
		iVar0 = func_8();
		iVar1 = Global_93213[iVar0 /*5*/];
		uVar2 = Global_80608.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_114963.f_9094)
			{
			}
			return;
		}
		if (BitTest(Global_93213[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_93213[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_93213[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_80586, true);
		Global_80602 = uVar2;
		Global_80603 = MISC::GET_GAME_TIMER();
	}
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_93213[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_77158)
	{
		if (Global_77159[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_77159[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_77159[iVar0 /*9*/].f_1 = (Global_77159[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_77159[iVar0 /*9*/] != -1)
	{
		if (Global_65288[Global_77159[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_77159[iVar0 /*9*/].f_1 > 1)
			{
				Global_77159[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_77159[iVar0 /*9*/].f_1 < 0)
			{
				Global_77159[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_65071)
	{
	}
	Global_65071 = 0;
	if (bParam0)
	{
		Global_65072 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_77158)
		{
			if (Global_65288[Global_77159[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_77159[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_77158)
		{
			if (Global_77159[iVar0 /*9*/] > 0)
			{
				if (Global_77159[iVar0 /*9*/] == iParam1)
				{
					Global_77159[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12()
{
	iLocal_3206 = 0;
	while (iLocal_3206 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[iLocal_3206]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3250[iLocal_3206]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_3250[iLocal_3206], false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3250[iLocal_3206]) > 200f)
						{
							TASK::CLEAR_PED_TASKS(iLocal_3250[iLocal_3206]);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[iLocal_3206]));
						}
						else if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3250[iLocal_3206]) > 20f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3250[iLocal_3206], joaat("script_task_go_to_entity_while_aiming_at_entity")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3250[iLocal_3206], joaat("script_task_go_to_entity_while_aiming_at_entity")) != 0)
							{
								TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_3250[iLocal_3206], PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, true, 15f, 20f, false, false, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3250[iLocal_3206], joaat("script_task_combat")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3250[iLocal_3206], joaat("script_task_combat")) != 0)
						{
							TASK::TASK_COMBAT_PED(iLocal_3250[iLocal_3206], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_3250[iLocal_3206], 50, true);
						}
					}
					else if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3250[iLocal_3206]) > 200f)
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[iLocal_3206]));
					}
					else if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3250[iLocal_3206]) > 5f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3250[iLocal_3206], joaat("script_task_go_to_entity_while_aiming_at_entity")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3250[iLocal_3206], joaat("script_task_go_to_entity_while_aiming_at_entity")) != 0)
						{
							TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_3250[iLocal_3206], PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, true, 15f, 20f, false, false, joaat("FIRING_PATTERN_BURST_FIRE"));
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3250[iLocal_3206], joaat("script_task_combat")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3250[iLocal_3206], joaat("script_task_combat")) != 0)
					{
						TASK::TASK_COMBAT_PED(iLocal_3250[iLocal_3206], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_3250[iLocal_3206], 50, true);
					}
				}
			}
		}
		iLocal_3206++;
	}
	if (iLocal_3391 == 1)
	{
		if (iLocal_3363 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3285[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3285[0], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3285[0]))
					{
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[6]))
						{
							if (!PED::IS_PED_INJURED(iLocal_3250[6]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[6], false);
								TASK::CLEAR_PED_TASKS(iLocal_3250[6]);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_3309);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_3285[0], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_3309);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_3250[6], iLocal_3309);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_3309);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[7]))
						{
							if (!PED::IS_PED_INJURED(iLocal_3250[7]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[7], false);
								TASK::CLEAR_PED_TASKS(iLocal_3250[7]);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_3309);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_3285[0], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_3309);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_3250[7], iLocal_3309);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_3309);
							}
						}
						iLocal_3363 = 1;
					}
				}
			}
		}
		else if (iLocal_3448 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3285[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3285[0], false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[6]))
					{
						if (!PED::IS_PED_INJURED(iLocal_3250[6]))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_3250[6], iLocal_3285[0], false))
							{
								if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3250[6]) < 20f)
								{
									func_14(iLocal_3250[6], "DRAW_GUN", 24);
									iLocal_3448 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3364 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3285[1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3285[1], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3285[1]))
					{
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[8]))
						{
							if (!PED::IS_PED_INJURED(iLocal_3250[8]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[8], false);
								TASK::CLEAR_PED_TASKS(iLocal_3250[8]);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_3309);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_3285[1], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_3309);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_3250[8], iLocal_3309);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_3309);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[9]))
						{
							if (!PED::IS_PED_INJURED(iLocal_3250[9]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[9], false);
								TASK::CLEAR_PED_TASKS(iLocal_3250[9]);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_3309);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_3285[1], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_3309);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_3250[9], iLocal_3309);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_3309);
							}
						}
						iLocal_3364 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3365 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[10]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3250[10]))
			{
				if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3250[10]) > 200f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[iLocal_3206]));
					STREAMING::REMOVE_ANIM_DICT("misssolomon_3");
				}
				else if (STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3"))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f, 2f, false, true, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_3250[10]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_3250[10]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_3309);
							TASK::TASK_PLAY_ANIM(0, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_3309);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_3250[10], iLocal_3309);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_3309);
							iLocal_3365 = 1;
						}
					}
				}
			}
		}
	}
}

float func_13(int iParam0, int iParam1)
{
	return func_16(iParam0, iParam1, 1);
}

void func_14(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_15(iParam2), 1);
}

int func_15(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

float func_16(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_80337)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

void func_18(bool bParam0, bool bParam1)
{
	if (BitTest(Global_33975, bParam0))
	{
		if (!bParam1)
		{
			MISC::CLEAR_BIT(&Global_33975, bParam0);
			StringCopy(&(Global_33976[bParam0 /*6*/]), "NULL", 24);
			Global_34031[bParam0] = bParam1;
		}
	}
}

int func_19(bool bParam0)
{
	if (BitTest(Global_33975, bParam0))
	{
		return 1;
	}
	return 0;
}

void func_20(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	if (func_23() && func_24())
	{
		while (Global_102481 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_22(0);
	}
}

void func_22(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_102486.f_20), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_102486.f_20), 13);
	}
}

int func_23()
{
	if (Global_102486 == 10 || Global_102486 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24()
{
	return BitTest(Global_102486.f_20, 13);
}

void func_25(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_102523)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_102523)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_128(1);
		if (iParam0 <= Global_102523)
		{
		}
		iVar1 = func_126(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_114963.f_9094.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_124(iVar1);
			cVar3 = { Global_93249[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_114963.f_9094.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_102523, iParam0);
		}
		else
		{
			iVar5 = func_119(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_114963.f_18583[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_118(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_102523, iParam0);
			}
			else
			{
				iVar10 = func_117(&(Global_102486.f_3));
				if (iVar10 > -1)
				{
					Global_114963.f_24995.f_4[iVar10] = 0;
				}
			}
		}
		Global_96639 = iParam2;
		Global_102523 = iParam0;
		func_26(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_102523)
	{
	}
}

void func_26(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_27(&Global_108504, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_27(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_116();
	uParam0->f_1 = func_105();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_70(&(uParam0->f_2884), 0);
		func_69(PLAYER::PLAYER_PED_ID());
		func_62(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_114963.f_2370.f_539.f_294[iVar1];
		if (iVar1 == func_59())
		{
			func_50(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_102211[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_102211[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_102211[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_102211[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_102211[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_102211[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_102211[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_102211[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_102211[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_102211[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_114963.f_2370.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_114963.f_2370.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_114963.f_20573.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_62237[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_114963.f_2370.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_114963.f_2370.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_114963.f_2370.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_114963.f_2370.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_114963.f_2370.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_114963.f_2370[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_114963.f_2370[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_29(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_28(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_28(var uParam0)
{
	*uParam0 = Global_98310;
	uParam0->f_1 = Global_98311;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_29(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_47(iParam2);
	}
	if (func_44(iParam2, &iVar0, iParam3, iParam5))
	{
		func_30(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				func_30(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_30(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
	{
		func_32(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_31(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_102486.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_32(var uParam0, int iParam1, int iParam2)
{
	func_39(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_35(iParam1, 145, 0);
	uParam0->f_11 = func_34(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_33(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_80032 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_79127.f_484[iVar0]))
		{
			if (iParam0 == Global_79127.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99792[iVar0]))
		{
			if (Global_99792[iVar0] == iParam0)
			{
				return Global_99802[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_35(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99792[iVar0]))
		{
			if (Global_99792[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_99802[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_36(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_38(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_37(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_37(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_114963.f_9094.f_99.f_58[128] && !Global_114963.f_9094.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_114963.f_9094.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_114963.f_9094.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

void func_39(int iParam0, var uParam1)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_43(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_41(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_40(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_41(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_43(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_44(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != 0)
							{
								return 0;
							}
						}
						if (func_45(*uParam1, func_116(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_45(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_46(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_114963.f_7236[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_49(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_49(int iParam0)
{
	return Global_2349[iParam0 /*29*/];
}

void func_50(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_47(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_58(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_57(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_38(iVar0))
		{
			uParam1->f_59 = Global_114963.f_2370.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_114963.f_2370.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_114963.f_2370.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_114963.f_2370.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_114963.f_2370.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_114963.f_2370.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_55(161, iParam3))
			{
				uParam1->f_59 = func_51(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_51(753, iParam3);
			}
			uParam1->f_60 = func_51(754, iParam3);
			uParam1->f_61 = func_51(755, iParam3);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_55(161, iParam3))
			{
				uParam1->f_59 = func_51(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_51(753, iParam3);
			}
		}
	}
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 16764)
	{
		iVar0 = func_52(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_52(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_53(uParam1));
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_54();
		if (iVar1 > -1)
		{
			Global_2741491 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2741491 = 1;
		}
	}
	return iVar0;
}

int func_54()
{
	return Global_1574928;
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_56(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_56(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_53(uParam1));
}

void func_57(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_58(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_59()
{
	func_60();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_60()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_48(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_47(PLAYER::PLAYER_PED_ID());
			if (func_38(iVar0) && (!func_61(14) || Global_113909))
			{
				if (Global_114963.f_2370.f_539.f_4321 != iVar0 && func_38(Global_114963.f_2370.f_539.f_4321))
				{
					Global_114963.f_2370.f_539.f_4322 = Global_114963.f_2370.f_539.f_4321;
				}
				Global_114963.f_2370.f_539.f_4323 = iVar0;
				Global_114963.f_2370.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114963.f_2370.f_539.f_4321 != 145)
			{
				Global_114963.f_2370.f_539.f_4323 = Global_114963.f_2370.f_539.f_4321;
			}
			return;
		}
	}
	Global_114963.f_2370.f_539.f_4321 = 145;
}

bool func_61(int iParam0)
{
	return Global_44921 == iParam0;
}

void func_62(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_63(iParam0, &(Global_114963.f_2370.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_114963.f_2370.f_539.f_1730[iVar2 /*4*/][iVar0] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
					if (Global_114963.f_2370.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_114963.f_2370.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &iVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), iVar3, true);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, true);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, true);
			}
		}
	}
}

void func_63(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	bool bVar73;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_68(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_68(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
					Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_66(Var4.f_0, bVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_66(Var4.f_0, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = FILES::GET_NUM_DLC_WEAPONS_SP();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((FILES::GET_DLC_WEAPON_DATA_SP(iVar9, &Var11) && !func_65(Var11.f_1)) && iVar72 < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
						Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					bVar73 = false;
					bVar1 = false;
					while (bVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar9))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar9, bVar1, &Var50))
						{
							if (!func_64(Var50.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, Var50.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), bVar73);
								}
								bVar73++;
							}
						}
						bVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo_slide"):
		case joaat("component_pistol_mk2_camo_02_slide"):
		case joaat("component_pistol_mk2_camo_03_slide"):
		case joaat("component_pistol_mk2_camo_04_slide"):
		case joaat("component_pistol_mk2_camo_05_slide"):
		case joaat("component_pistol_mk2_camo_06_slide"):
		case joaat("component_pistol_mk2_camo_07_slide"):
		case joaat("component_pistol_mk2_camo_08_slide"):
		case joaat("component_pistol_mk2_camo_09_slide"):
		case joaat("component_pistol_mk2_camo_10_slide"):
		case joaat("component_pistol_mk2_camo_ind_01_slide"):
		case joaat("component_snspistol_mk2_camo_slide"):
		case joaat("component_snspistol_mk2_camo_02_slide"):
		case joaat("component_snspistol_mk2_camo_03_slide"):
		case joaat("component_snspistol_mk2_camo_04_slide"):
		case joaat("component_snspistol_mk2_camo_05_slide"):
		case joaat("component_snspistol_mk2_camo_06_slide"):
		case joaat("component_snspistol_mk2_camo_07_slide"):
		case joaat("component_snspistol_mk2_camo_08_slide"):
		case joaat("component_snspistol_mk2_camo_09_slide"):
		case joaat("component_snspistol_mk2_camo_10_slide"):
		case joaat("component_snspistol_mk2_camo_ind_01_slide"):
		case joaat("component_pistol_mk2_varmod_xm3_slide"):
			return 1;
			break;
	}
	return 0;
}

int func_65(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case joaat("weapon_metaldetector"):
			case joaat("weapon_precisionrifle"):
			case joaat("weapon_tacticalrifle"):
			case joaat("weapon_pistolxm3"):
			case joaat("weapon_candycane"):
			case joaat("weapon_railgunxm3"):
			case 350597077:
			case joaat("weapon_battlerifle"):
			case joaat("weapon_snowlauncher"):
			case -624951259:
			case -1916886713:
				return 1;
				break;
			}
	}
	return 0;
}

int func_66(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
				
				case 5:
					iVar0 = 1400690398;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
				
				case 7:
					iVar0 = joaat("component_microsmg_varmod_xm3");
					break;
				
				case 8:
					iVar0 = 1694268374;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
				
				case 10:
					iVar0 = 1605520746;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
				
				case 4:
					iVar0 = joaat("component_pumpshotgun_varmod_xm3");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 4:
					iVar0 = 221907180;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
				
				case 8:
					iVar0 = 302671608;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		case joaat("weapon_bat"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("component_bat_varmod_xm3");
					break;
				
				case 1:
					iVar0 = joaat("component_bat_varmod_xm3_01");
					break;
				
				case 2:
					iVar0 = joaat("component_bat_varmod_xm3_02");
					break;
				
				case 3:
					iVar0 = joaat("component_bat_varmod_xm3_03");
					break;
				
				case 4:
					iVar0 = joaat("component_bat_varmod_xm3_04");
					break;
				
				case 5:
					iVar0 = joaat("component_bat_varmod_xm3_05");
					break;
				
				case 6:
					iVar0 = joaat("component_bat_varmod_xm3_06");
					break;
				
				case 7:
					iVar0 = joaat("component_bat_varmod_xm3_07");
					break;
				
				case 8:
					iVar0 = joaat("component_bat_varmod_xm3_08");
					break;
				
				case 9:
					iVar0 = joaat("component_bat_varmod_xm3_09");
					break;
			}
			break;
		
		case joaat("weapon_rpg"):
			switch (bParam1)
			{
				case 0:
					iVar0 = -1240142720;
					break;
			}
			break;
		
		case joaat("weapon_battlerifle"):
			switch (bParam1)
			{
				case 0:
					iVar0 = -292433650;
					break;
				
				case 1:
					iVar0 = 494808810;
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			switch (bParam1)
			{
				case 0:
					iVar0 = -1675905033;
					break;
			}
			break;
		
		case -1916886713:
			switch (bParam1)
			{
				case 0:
					iVar0 = -584965981;
					break;
				
				case 1:
					iVar0 = 291145905;
					break;
				
				case 2:
					iVar0 = 1978284360;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_67(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_64(Var43.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_67(int iParam0, var* uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_114963.f_2370.f_539.f_294[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_70(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_80586, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_80586, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_80586, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_80586, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_74(&iVar0))
		{
			if (func_72(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, false, true, 0))
		{
			iVar5 = func_116();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_71(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_71(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam3);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_72(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 62:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 63:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_73(*uParam1, 0f, 0f, 0f, 0);
}

bool func_73(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_74(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_104())
		{
			*uParam0 = func_80(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 6, -1, 0, 1, -1);
			if (func_79(*uParam0) && !func_75(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_75(int iParam0)
{
	return func_76(iParam0, 0, 1);
}

int func_76(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_102538.f_1442[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_78() == 0)
		{
			return BitTest(func_51(func_77(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_114963.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 14815;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		case 61:
			return 12447;
			break;
		
		case 62:
			return 14262;
			break;
		
		case 63:
			return 14263;
			break;
		
		case 64:
			return 14264;
			break;
		
		default:
			break;
	}
	return 16764;
}

int func_78()
{
	return Global_33815;
}

int func_79(int iParam0)
{
	return func_76(iParam0, 5, 1);
}

int func_80(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 64)
	{
		if (iParam3 == 6 || iParam3 == func_103(iVar0))
		{
			if (!bParam5 || func_102(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_81(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_81(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_98(Global_104674);
			break;
		
		case 46:
			if (Global_1845128 != func_97())
			{
				if (func_96(Global_1845128))
				{
					return func_89(2, 2);
				}
				else if (func_88(Global_1845128))
				{
					return func_89(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return func_86(-9.9f, -0.5f, 1f);
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1972060;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.213f, -25.36174f;
			break;
		
		case 55:
			return -2194.123f, 1103.805f, -24.2451f;
			break;
		
		case 56:
			switch (func_85())
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.166f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.718f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
		
		case 58:
			return func_82();
			break;
		
		case 59:
			return 560f, -405f, -69.6591f;
			break;
		
		case 60:
			return -1299.691f, -3017.165f, -48.2612f;
			break;
		
		case 61:
			return 756.7726f, -993.5798f, -47.3777f;
			break;
		
		case 62:
		case 63:
		case 64:
			Var0 = { 1000000f, 1000000f, 1000000f };
			switch (func_85())
			{
				case 177:
					Var0 = { -2586.065f, 1909.995f, 166.3754f };
					Var3 = { 0f, 0f, -84.083f };
					break;
				
				case 178:
					Var0 = { -1666.368f, 478.9271f, 128.2216f };
					Var3 = { 0f, 0f, 17.77f };
					break;
				
				case 179:
					Var0 = { 539.7012f, 749.0894f, 201.3616f };
					Var3 = { 0f, 0f, -51.69f };
					break;
			}
			if (iParam0 == 64)
			{
				return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, Var3.f_2, 12.085f, 11.952f, -10.857f);
			}
			else
			{
				return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, Var3.f_2, 36.914f, -13.045f, -3.654f);
			}
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_82()
{
	if (!func_84(Global_1957326))
	{
		return Global_1957326;
	}
	switch (func_83())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
		
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
		
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
		
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
		
		case 4:
			return 795.583f, 1210.78f, 338.962f;
		
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
		
		case 6:
			return -789.719f, 5400.921f, 33.915f;
		
		case 7:
			return -24.384f, 3048.167f, 40.703f;
		
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
		
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
		
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
		
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
		
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
		
		case 13:
			return -57.208f, -2658.793f, 5.737f;
		
		case 14:
			return 1905.017f, 565.222f, 175.558f;
		
		case 15:
			return 974.484f, -1718.798f, 30.296f;
		
		case 16:
			return 779.077f, -3266.297f, 5.719f;
		
		case 17:
			return -587.728f, -1637.208f, 19.611f;
		
		case 18:
			return 733.99f, -736.803f, 26.165f;
		
		case 19:
			return -1694.632f, -454.082f, 40.712f;
		
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
		
		case 21:
			return -496.618f, 40.231f, 52.316f;
		
		case 22:
			return 275.527f, 66.509f, 94.108f;
		
		case 23:
			return 260.928f, -763.35f, 30.559f;
		
		case 24:
			return -478.025f, -741.45f, 30.299f;
		
		case 25:
			return 894.94f, 3603.911f, 32.56f;
		
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
		
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
		
		case 28:
			return 1101.032f, -335.172f, 66.944f;
		
		case 29:
			return 149.683f, -1655.674f, 29.028f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_83()
{
	return Global_2652581.f_2706;
}

int func_84(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_85()
{
	return Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_8;
}

Vector3 func_86(struct<3> Param0)
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_87(), 0f, Param0);
}

Vector3 func_87()
{
	return -880f, -2770f, -50f;
}

int func_88(int iParam0)
{
	if (iParam0 != func_97())
	{
		if ((BitTest(Global_1845298[iParam0 /*881*/].f_260.f_299, 0) || BitTest(Global_1845298[iParam0 /*881*/].f_260.f_299, 1)) || BitTest(Global_1845298[iParam0 /*881*/].f_260.f_299, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_89(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1845128 != func_97())
	{
		if (iParam1 == 3)
		{
			if (func_90(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1845298[Global_1845128 /*881*/].f_260.f_299, 4))
			{
				if (func_90(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (BitTest(Global_1845298[Global_1845128 /*881*/].f_260.f_299, 5))
			{
				if (func_90(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_90(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_95(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_95(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_93(iParam0) };
	}
	else
	{
		Var12 = { func_92(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_91(Var18, -Var0.f_3.f_2) };
	Var18 = { func_91(Var18, Var6.f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_91(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_92(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_93(int iParam0)
{
	return func_94(iParam0);
}

struct<6> func_94(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_95(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_96(int iParam0)
{
	if (iParam0 != func_97())
	{
		if ((BitTest(Global_1845298[iParam0 /*881*/].f_260.f_299, 3) || BitTest(Global_1845298[iParam0 /*881*/].f_260.f_299, 4)) || BitTest(Global_1845298[iParam0 /*881*/].f_260.f_299, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_97()
{
	return -1;
}

Vector3 func_98(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return func_87();
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 23:
			return 745.7956f, -993.1193f, -47.37674f;
			break;
		
		case 17:
			if (func_100() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		case 24:
			if (Global_2732133.f_1 != -1)
			{
				if (func_100() != 1)
				{
					return func_99(Global_2732133.f_1, 1);
				}
				else
				{
					return func_99(Global_2732133.f_1, 2);
				}
			}
			else if (func_100() != 1)
			{
				return func_99(178, 1);
			}
			else
			{
				return func_99(178, 2);
			}
			break;
		
		case 21:
			return 570f, -415f, -70f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

Vector3 func_99(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 177:
					return -2586.065f, 1909.995f, 166.3754f;
					break;
				
				case 178:
					return -1666.368f, 478.9271f, 128.2216f;
					break;
				
				case 179:
					return 539.7012f, 749.0894f, 201.3616f;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 177:
					return -2568.934f, 1920.203f, 155.5182f;
					break;
				
				case 178:
					return -1679.877f, 493.596f, 117.3644f;
					break;
				
				case 179:
					return 548.6964f, 766.8868f, 190.5045f;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 177:
					return -2587.496f, 1893.193f, 155.5183f;
					break;
				
				case 178:
					return -1649.63f, 480.9779f, 117.3645f;
					break;
				
				case 179:
					return 547.4955f, 734.136f, 190.5045f;
					break;
			}
			break;
		
		case 3:
			return 2588.177f, 5959.916f, -47.935f;
			break;
		
		default:
			switch (iParam0)
			{
				case 177:
					return -2586.065f, 1909.995f, 166.3754f;
					break;
				
				case 178:
					return -1666.368f, 478.9271f, 128.2216f;
					break;
				
				case 179:
					return 539.7012f, 749.0894f, 201.3616f;
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_100()
{
	return func_101(PLAYER::PLAYER_ID());
}

int func_101(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2658293[iParam0 /*468*/].f_325.f_3, 28, 31);
}

int func_102(int iParam0)
{
	return func_76(iParam0, 0, 0);
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
		
		case 61:
			return 3;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 2;
			break;
		
		case 64:
			return 3;
			break;
	}
	return 6;
}

bool func_104()
{
	return Global_102538.f_417 > 0;
}

var func_105()
{
	var uVar0;
	
	func_115(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_114(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_113(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_108(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_107(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_106(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_106(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_107(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_108(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_112(*uParam0);
	iVar1 = func_110(*uParam0);
	if (iParam1 < 1 || iParam1 > func_109(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_109(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_110(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_111(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_111(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_112(int iParam0)
{
	return iParam0 & 15;
}

void func_113(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_114(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_115(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_116()
{
	func_60();
	return Global_114963.f_2370.f_539.f_4321;
}

int func_117(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0))
	{
		return 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
	{
		return 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_118(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_119(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = MISC::GET_HASH_KEY(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_120(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_120(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_121(uParam1, "Abigail1", func_123(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 1:
			func_121(uParam1, "Abigail2", func_123(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 2:
			func_121(uParam1, "Barry1", func_123(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 3:
			func_121(uParam1, "Barry2", func_123(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 4:
			func_121(uParam1, "Barry3", func_123(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 5:
			func_121(uParam1, "Barry3A", func_123(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 6:
			func_121(uParam1, "Barry3C", func_123(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 7:
			func_121(uParam1, "Barry4", func_123(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_122(iParam0), 0, 0);
			break;
		
		case 8:
			func_121(uParam1, "Dreyfuss1", func_123(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 9:
			func_121(uParam1, "Epsilon1", func_123(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 10:
			func_121(uParam1, "Epsilon2", func_123(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 11:
			func_121(uParam1, "Epsilon3", func_123(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 12:
			func_121(uParam1, "Epsilon4", func_123(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 13:
			func_121(uParam1, "Epsilon5", func_123(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 14:
			func_121(uParam1, "Epsilon6", func_123(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 15:
			func_121(uParam1, "Epsilon7", func_123(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 16:
			func_121(uParam1, "Epsilon8", func_123(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 17:
			func_121(uParam1, "Extreme1", func_123(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 18:
			func_121(uParam1, "Extreme2", func_123(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 19:
			func_121(uParam1, "Extreme3", func_123(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 20:
			func_121(uParam1, "Extreme4", func_123(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 21:
			func_121(uParam1, "Fanatic1", func_123(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_122(iParam0), 1, 0);
			break;
		
		case 22:
			func_121(uParam1, "Fanatic2", func_123(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_122(iParam0), 1, 0);
			break;
		
		case 23:
			func_121(uParam1, "Fanatic3", func_123(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_122(iParam0), 0, 1);
			break;
		
		case 24:
			func_121(uParam1, "Hao1", func_123(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_122(iParam0), 0, 1);
			break;
		
		case 25:
			func_121(uParam1, "Hunting1", func_123(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 26:
			func_121(uParam1, "Hunting2", func_123(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 27:
			func_121(uParam1, "Josh1", func_123(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 28:
			func_121(uParam1, "Josh2", func_123(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 29:
			func_121(uParam1, "Josh3", func_123(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 30:
			func_121(uParam1, "Josh4", func_123(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 31:
			func_121(uParam1, "Maude1", func_123(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 32:
			func_121(uParam1, "Minute1", func_123(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 33:
			func_121(uParam1, "Minute2", func_123(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 34:
			func_121(uParam1, "Minute3", func_123(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 35:
			func_121(uParam1, "MrsPhilips1", func_123(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 36:
			func_121(uParam1, "MrsPhilips2", func_123(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 37:
			func_121(uParam1, "Nigel1", func_123(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 38:
			func_121(uParam1, "Nigel1A", func_123(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 39:
			func_121(uParam1, "Nigel1B", func_123(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
		
		case 40:
			func_121(uParam1, "Nigel1C", func_123(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
		
		case 41:
			func_121(uParam1, "Nigel1D", func_123(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_122(iParam0), 1, 1);
			break;
		
		case 42:
			func_121(uParam1, "Nigel2", func_123(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 43:
			func_121(uParam1, "Nigel3", func_123(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 1);
			break;
		
		case 44:
			func_121(uParam1, "Omega1", func_123(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 45:
			func_121(uParam1, "Omega2", func_123(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 46:
			func_121(uParam1, "Paparazzo1", func_123(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 47:
			func_121(uParam1, "Paparazzo2", func_123(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 48:
			func_121(uParam1, "Paparazzo3", func_123(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 49:
			func_121(uParam1, "Paparazzo3A", func_123(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 50:
			func_121(uParam1, "Paparazzo3B", func_123(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 51:
			func_121(uParam1, "Paparazzo4", func_123(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 52:
			func_121(uParam1, "Rampage1", func_123(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 54:
			func_121(uParam1, "Rampage3", func_123(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 55:
			func_121(uParam1, "Rampage4", func_123(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 56:
			func_121(uParam1, "Rampage5", func_123(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_122(iParam0), 0, 0);
			break;
		
		case 53:
			func_121(uParam1, "Rampage2", func_123(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_122(iParam0), 1, 0);
			break;
		
		case 57:
			func_121(uParam1, "TheLastOne", func_123(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 58:
			func_121(uParam1, "Tonya1", func_123(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 59:
			func_121(uParam1, "Tonya2", func_123(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 60:
			func_121(uParam1, "Tonya3", func_123(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 61:
			func_121(uParam1, "Tonya4", func_123(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		case 62:
			func_121(uParam1, "Tonya5", func_123(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_122(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_121(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_123(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_118(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_125(Global_114963.f_9094.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_125(Global_114963.f_9094.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_125(Global_114963.f_9094.f_99.f_205[11]);
			break;
		
		case 90:
			return func_125(Global_114963.f_9094.f_99.f_205[7]);
			break;
		
		case 93:
			return func_125(Global_114963.f_9094.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_126(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = func_127(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_127(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_93249[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_128(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_114963.f_20573.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_114963.f_20573.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_114963.f_20573.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_114963.f_20573.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_114963.f_20573.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_114963.f_20573.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_62245[iVar0 /*3*/][0] = Global_114963.f_20573[iVar0];
		Global_62245.f_31[iVar0 /*3*/][0] = Global_114963.f_20573.f_11[iVar0];
		Global_62245.f_62[iVar0 /*3*/][0] = Global_114963.f_20573.f_22[iVar0];
		Global_62245.f_93[iVar0 /*3*/][0] = Global_114963.f_20573.f_33[iVar0];
		Global_62245.f_124[iVar0 /*3*/][0] = Global_114963.f_20573.f_44[iVar0];
		Global_62245.f_155[iVar0 /*3*/][0] = Global_114963.f_20573.f_55[iVar0];
		Global_62245.f_186[iVar0 /*3*/][0] = Global_114963.f_20573.f_66[iVar0];
		Global_62245.f_217[iVar0 /*3*/][0] = Global_114963.f_20573.f_77[iVar0];
		Global_62245.f_248[iVar0 /*3*/][0] = Global_114963.f_20573.f_88[iVar0];
		if (!bParam0)
		{
			Global_62245[iVar0 /*3*/][1] = Global_114963.f_20573[iVar0];
			Global_62245.f_31[iVar0 /*3*/][1] = Global_114963.f_20573.f_11[iVar0];
			Global_62245.f_62[iVar0 /*3*/][1] = Global_114963.f_20573.f_22[iVar0];
			Global_62245.f_93[iVar0 /*3*/][1] = Global_114963.f_20573.f_33[iVar0];
			Global_62245.f_124[iVar0 /*3*/][1] = Global_114963.f_20573.f_44[iVar0];
			Global_62245.f_155[iVar0 /*3*/][1] = Global_114963.f_20573.f_55[iVar0];
			Global_62245.f_186[iVar0 /*3*/][1] = Global_114963.f_20573.f_66[iVar0];
			Global_62245.f_217[iVar0 /*3*/][1] = Global_114963.f_20573.f_77[iVar0];
			Global_62245.f_248[iVar0 /*3*/][1] = Global_114963.f_20573.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_129()
{
	MISC::SET_WEATHER_TYPE_NOW("EXTRASUNNY");
	func_243();
	func_215();
	func_131();
	if (!func_24())
	{
		func_130();
	}
	iLocal_3368 = 1;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}

void func_130()
{
	switch (iLocal_3197)
	{
		case 2:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1019.579f, -484.872f, 36.0795f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 93.7701f);
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3276, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3276, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3276, -1);
				}
				ENTITY::SET_ENTITY_HEALTH(iLocal_3276, 3000, 0, 0);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3276, false, true, false, false, false, false, false, false);
			}
			break;
		
		case 5:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -935.4413f, -2928.061f, 12.9451f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 178.466f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), true, 1);
			break;
		
		case 8:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -937.5466f, -2968.713f, 12.9451f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 111.5016f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), true, 1);
			break;
	}
}

void func_131()
{
	switch (iLocal_3197)
	{
		case 2:
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::CLEAR_AREA(-1026.8f, -492.1f, 36f, 18f, true, false, false, false);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, false, true);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0);
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("surano"));
			STREAMING::REQUEST_MODEL(joaat("carbonizzare"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")) || !STREAMING::HAS_MODEL_LOADED(joaat("surano"))) || !STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
			{
				MISC::CLEAR_AREA(Local_3311, 5f, true, false, false, false);
				iLocal_3276 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_3311, fLocal_3338, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3276, 112, 112);
				ENTITY::SET_ENTITY_HEALTH(iLocal_3276, 3000, 0, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_3276, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3276, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3276, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3293))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("surano")))
				{
					MISC::CLEAR_AREA(-1037.398f, -491.6539f, 35.5545f, 5f, true, false, false, false);
					iLocal_3293 = VEHICLE::CREATE_VEHICLE(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, true, true, false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_3293, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(iLocal_3293, 3000, 0, 0);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_3293, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surano"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3293, true);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3294))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
				{
					MISC::CLEAR_AREA(Local_3311, 5f, true, false, false, false);
					iLocal_3294 = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, true, true, false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_3294, 89, 89);
					ENTITY::SET_ENTITY_HEALTH(iLocal_3294, 3000, 0, 0);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_3294, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("carbonizzare"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("carbonizzare"), true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3294, true);
				}
			}
			break;
		
		case 3:
			AUDIO::PREPARE_MUSIC_EVENT("TRV4_CHASE");
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			func_212();
			MISC::CLEAR_AREA(Local_3314, 200f, true, false, false, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
			{
				iLocal_3275 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), Local_3314, fLocal_3339, true, true, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3275, true, true, true, true, true, false, false, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3275, 27, 27);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3275, "SOL_3_MOLLY_CAR_Group", 0f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
			{
				iLocal_3239 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3275, 26, joaat("ig_molly"), -1, true, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3239, true, true, true, true, true, false, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3239, true, 0);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_3239, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_molly"));
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3239, joaat("player"));
			}
			if (func_23())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
				{
					if (func_211())
					{
						if (!VEHICLE::IS_THIS_MODEL_A_HELI(func_210()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_210()))
						{
							iLocal_3276 = func_154(Local_3329, fLocal_3342);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_210());
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3276, true);
						}
						else
						{
							iLocal_3276 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_3329, fLocal_3342, true, true, false);
							VEHICLE::SET_VEHICLE_COLOURS(iLocal_3276, 112, 112);
						}
					}
					else
					{
						iLocal_3276 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_3329, fLocal_3342, true, true, false);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_3276, 112, 112);
					}
					ENTITY::SET_ENTITY_HEALTH(iLocal_3276, 3000, 0, 0);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_3276, true);
					ENTITY::SET_ENTITY_PROOFS(iLocal_3276, false, true, false, false, false, false, false, false);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3276, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3276, true);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
			{
				iLocal_3276 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_3329, fLocal_3342, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3276, 112, 112);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				ENTITY::SET_ENTITY_HEALTH(iLocal_3276, 3000, 0, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_3276, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3276, false, true, false, false, false, false, false, false);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3276, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3276, true);
			}
			break;
		
		case 5:
			iLocal_3369 = 0;
			MISC::CLEAR_AREA(-973.3f, -2967.7f, 13.5f, 100f, true, false, false, false);
			SYSTEM::SETTIMERA(0);
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			TASK::REQUEST_WAYPOINT_RECORDING("BB_MOLLY_2");
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("ig_molly"));
			STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("prop_cs_film_reel_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(68, "BB_Chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(69, "BB_Chase");
			TASK::REQUEST_WAYPOINT_RECORDING("Trev4_5");
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("move_f@film_reel_arms");
			STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
			while (((((((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("shamal"))) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("BB_MOLLY_2")) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_molly"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_film_reel_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(68, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(69, "BB_Chase")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !STREAMING::HAS_ANIM_DICT_LOADED("move_f@film_reel_arms")) || !STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3"))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
			{
				iLocal_3239 = PED::CREATE_PED(26, joaat("ig_molly"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, true, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3239, true, 0);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_3239, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3239, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_molly"));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3239, true, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3239, joaat("player"));
			}
			iLocal_3300 = OBJECT::CREATE_OBJECT(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3300, iLocal_3239, PED::GET_PED_BONE_INDEX(iLocal_3239, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
			{
				iLocal_3283 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_3283, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3283, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_3283, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3283, true, true, true, true, true, false, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_3283, 500);
			}
			if (func_23())
			{
				if (func_211())
				{
					func_152();
					while (!func_137())
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
				{
					if (func_211())
					{
						iLocal_3276 = func_154(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3276, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_210());
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3276, true);
					}
					else
					{
						iLocal_3276 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_3276, 112, 112);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3276, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3276, true);
					}
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
			{
				iLocal_3276 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3276, 112, 112);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3276, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3276, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
			{
				iLocal_3275 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3275, 27, 27);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3280))
			{
				iLocal_3280 = VEHICLE::CREATE_VEHICLE(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
			{
				iLocal_3265 = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_3265, joaat("weapon_pistol"), 1000, true, true);
				func_136(iLocal_3265, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
			}
			SYSTEM::SETTIMERA(0);
			func_135(2, 1);
			iLocal_3377 = 1;
			break;
		
		case 8:
			MISC::CLEAR_AREA(-973.3f, -2967.7f, 13.5f, 100f, true, false, false, false);
			SYSTEM::SETTIMERA(0);
			iLocal_3369 = 0;
			iLocal_3377 = 0;
			iLocal_3356 = 0;
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(68, "BB_Chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(69, "BB_Chase");
			STREAMING::REQUEST_PTFX_ASSET();
			while ((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker"))) || !STREAMING::HAS_MODEL_LOADED(joaat("shamal"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(68, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(69, "BB_Chase")) || !STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			func_134();
			if (func_23())
			{
				if (func_211())
				{
					func_152();
					while (!func_137())
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
				{
					if (func_211())
					{
						iLocal_3276 = func_154(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3276, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_210());
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3276, true);
					}
					else
					{
						iLocal_3276 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_3276, 112, 112);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3276, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3276, true);
					}
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
			{
				iLocal_3276 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3276, 112, 112);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3276, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3276, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
			{
				iLocal_3275 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3275, 27, 27);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3280))
			{
				iLocal_3280 = VEHICLE::CREATE_VEHICLE(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
			{
				iLocal_3265 = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_3265, joaat("weapon_pistol"), 1000, true, true);
				func_136(iLocal_3265, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3299))
			{
				iLocal_3299 = OBJECT::CREATE_OBJECT(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_3299, 0f, 0f, -121.5948f, 2, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_3299, 0f, 0f, 0.8729f, -0.4879f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_jet_bloodsplat_01"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
			{
				iLocal_3283 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_3283, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3283, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_3283, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3283, true, true, true, true, true, false, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
				iLocal_3780 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_damage", iLocal_3283, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1f, false, false, false);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_3283, 500);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
			{
				iLocal_3245 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -933.8942f, -2965.785f, 12.9451f, 331.7339f, true, true);
				func_17(&uLocal_3595, 4, iLocal_3245, "HangerWorker", 0, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_airworker"));
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_3245, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3245, true);
				TASK::TASK_SMART_FLEE_PED(iLocal_3245, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_3245, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3245, false, false, false, false, false, false, false, false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3245);
			}
			if (func_133(0) == 0 || func_133(0) == joaat("weapon_unarmed"))
			{
				func_132(1);
			}
			break;
	}
}

void func_132(bool bParam0)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
		if (iVar0 != joaat("weapon_unarmed"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, bParam0);
		}
	}
}

int func_133(int iParam0)
{
	if (Global_102523 > 0)
	{
		return Global_108504.f_21[iParam0];
	}
	return Global_105520.f_21[iParam0];
}

void func_134()
{
	if (iLocal_3356 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3285[0]))
		{
			iLocal_3285[0] = VEHICLE::CREATE_VEHICLE(joaat("police3"), -994.5278f, -2903.285f, 12.9447f, 158.7951f, true, true, false);
			VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iLocal_3285[0], false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3250[0]))
		{
			iLocal_3250[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_3250[0], joaat("weapon_pistol"), 1000, true, true);
			PED::SET_PED_ACCURACY(iLocal_3250[0], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3250[0], true, 1);
			TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_3250[0], PLAYER::PLAYER_PED_ID(), -1, true);
			func_136(iLocal_3250[0], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3284))
		{
			iLocal_3284 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3284, 5f);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
			ENTITY::SET_ENTITY_HEALTH(iLocal_3284, 2000, 0, 0);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3284, 0, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3250[6]))
		{
			iLocal_3250[6] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3285[0], 6, joaat("s_m_y_cop_01"), 0, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_3250[6], joaat("weapon_pistol"), 1000, true, true);
			PED::SET_PED_ACCURACY(iLocal_3250[6], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3250[6], true, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[6], true);
			func_136(iLocal_3250[6], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3250[7]))
		{
			iLocal_3250[7] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3285[0], 6, joaat("s_m_y_cop_01"), -1, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_3250[7], joaat("weapon_pistol"), 1000, true, true);
			PED::SET_PED_ACCURACY(iLocal_3250[7], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3250[7], true, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[7], true);
			func_136(iLocal_3250[7], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3285[1]))
		{
			iLocal_3285[1] = VEHICLE::CREATE_VEHICLE(joaat("police3"), -962.2432f, -2864.16f, 12.9447f, 149.5586f, true, true, false);
			VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iLocal_3285[1], false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3250[8]))
		{
			iLocal_3250[8] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3285[1], 6, joaat("s_m_y_cop_01"), 0, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_3250[8], joaat("weapon_pistol"), 1000, true, true);
			PED::SET_PED_ACCURACY(iLocal_3250[8], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3250[8], true, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[8], true);
			func_136(iLocal_3250[8], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3250[9]))
		{
			iLocal_3250[9] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3285[1], 6, joaat("s_m_y_cop_01"), -1, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_3250[9], joaat("weapon_pistol"), 1000, true, true);
			PED::SET_PED_ACCURACY(iLocal_3250[9], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3250[9], true, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[9], true);
			func_136(iLocal_3250[9], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3250[10]))
		{
			iLocal_3250[10] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -922.1185f, -2939.595f, 12.9451f, 156.1408f, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_3250[10], joaat("weapon_pistol"), 1000, true, true);
			PED::SET_PED_ACCURACY(iLocal_3250[10], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3250[10], true, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[10], true);
			func_136(iLocal_3250[10], 0);
			PED::SET_PED_DUCKING(iLocal_3250[10], true);
		}
		iLocal_3356 = 1;
	}
}

void func_135(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&Global_33975, bParam0);
	StringCopy(&(Global_33976[bParam0 /*6*/]), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_34031[bParam0] = iParam1;
}

void func_136(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_65093[iVar0 /*2*/] != 0)
			{
				if (Global_65093[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_65092)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_65093[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_65093[iVar1 /*2*/] = iParam0;
	Global_65093[iVar1 /*2*/].f_1 = 7;
	Global_65092++;
}

bool func_137()
{
	return func_138(&(Global_108504.f_2890));
}

int func_138(var uParam0)
{
	if (func_139(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_139(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_141(uParam0->f_12.f_66, 0, -1))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_140(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

int func_140(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_141(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_151())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
					{
						return 0;
					}
				}
				else
				{
					iVar0++;
				}
				if (iParam0 == joaat("blimp"))
				{
					if ((((!func_150() && !func_149()) && !func_148()) && !func_147()) && !func_151())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_146() || MISC::IS_PC_VERSION()) || func_145())
					{
					}
					else if (!func_148())
					{
						return 0;
					}
				}
				if (bParam1)
				{
					if (!func_144(iParam0, iParam2))
					{
						return 0;
					}
				}
				if (!func_142(iParam0))
				{
					return 0;
				}
				return 1;
			}

int func_142(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_143())
	{
		return 1;
	}
	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_143()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_2708655)
	{
		return 1;
	}
	if ((!Global_2708656 && iParam1 >= 0) && iParam1 <= 607)
	{
		if (BitTest(Global_1583771[iParam1 /*143*/].f_104, 2))
		{
			return 1;
		}
	}
	iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar1 = 0;
	switch (iParam0)
	{
		case -2060419754:
			iVar1 = Global_262145.f_35677[0];
			break;
		
		case -558471518:
			iVar1 = Global_262145.f_35677[1];
			break;
		
		case 707880171:
			iVar1 = Global_262145.f_35677[2];
			break;
		
		case 679458690:
			iVar1 = Global_262145.f_35677[3];
			break;
		
		case -277011826:
			iVar1 = Global_262145.f_35677[4];
			break;
		
		case 1494708164:
			iVar1 = Global_262145.f_35677[5];
			break;
		
		case -978456382:
			iVar1 = Global_262145.f_35677[6];
			break;
		
		case -1932115890:
			iVar1 = Global_262145.f_35677[7];
			break;
		
		case -2022972089:
			iVar1 = Global_262145.f_35677[8];
			break;
		
		case -1419130662:
			iVar1 = Global_262145.f_35677[9];
			break;
		
		case 621456687:
			iVar1 = Global_262145.f_35677[10];
			break;
		
		case -39084089:
			iVar1 = Global_262145.f_35677[11];
			break;
		
		case -1647260751:
			iVar1 = Global_262145.f_35677[12];
			break;
	}
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_145()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_146()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_147()
{
	return 0;
}

int func_148()
{
	return 1;
}

int func_149()
{
	return 1;
}

int func_150()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	int iVar0;
	
	if (Global_153848 == 2)
	{
		return 1;
	}
	else if (Global_153848 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, false);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_152()
{
	func_153(&(Global_108504.f_2890));
}

void func_153(var uParam0)
{
	if (func_139(uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);
	}
}

int func_154(struct<3> Param0, float fParam3)
{
	return func_155(&(Global_108504.f_2890), Param0, fParam3, 0);
}

int func_155(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_139(uParam0))
	{
		if (func_73(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_138(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
			func_209(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam4, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, false, false, true);
				}
				func_176(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_175(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_175(uParam0->f_11, 2);
						}
					}
					VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, false);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
					func_174(iVar0, uParam0->f_11);
				}
				else if ((!func_172(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar8 = func_171(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_166(iVar8);
					}
				}
				if (((Global_102486 != 13 && Global_102486 != 10) && Global_102486 != 11) && Global_102486 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_102486.f_3)) == Global_80115)
					{
						if (uParam0->f_12.f_66 == Global_114963.f_32759.f_69[21 /*78*/].f_66)
						{
							func_163(24, 0);
							func_166(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_156(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_156(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_157(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_114963.f_2370.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_114963.f_32759.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114963.f_32759.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_114963.f_32759.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_114963.f_32759.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_114963.f_32759.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_114963.f_32759.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114963.f_32759.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_114963.f_32759.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_114963.f_32759.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_114963.f_32759.f_5590 = iParam1;
	Global_80032 = iParam0;
	Global_114963.f_32759.f_5588 = 1;
	func_39(iParam0, &(Global_114963.f_32759.f_5510));
}

int func_157(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_45(iParam0, 0, 0)) || func_45(iParam0, 1, 0)) || func_45(iParam0, 2, 0)) || func_34(iParam0) != 145) || func_162(iParam0)) || func_161(iParam0)) || func_160(iParam0)) || func_159(iParam0)) || !func_158(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_161(iParam0))
		{
		}
		if (func_161(iParam0))
		{
		}
		if (func_45(iParam0, 0, 0))
		{
		}
		if (func_45(iParam0, 1, 0))
		{
		}
		if (func_45(iParam0, 2, 0))
		{
		}
		if (func_34(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_158(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_141(iParam0, 0, -1))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("towtruck3"):
		case joaat("towtruck4"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_159(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_141(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99822[iVar0]))
		{
			if (Global_99822[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_161(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_99792[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_99792[iVar0], false))
			{
				if (Global_99792[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_99792[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_79127.f_484[24]))
	{
		if (iParam0 == Global_79127.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_79127.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_79127.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_163(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_165(iParam0, 0))
		{
			func_164(iParam0, 1, 0);
			func_164(iParam0, 2, 0);
			func_164(iParam0, 3, 0);
			func_164(iParam0, 4, 0);
			func_164(iParam0, 0, 1);
			Global_79127[iParam0] = 1;
		}
	}
	else
	{
		func_164(iParam0, 0, 0);
	}
}

void func_164(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_114963.f_32759[iParam0]), bParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_114963.f_32759[iParam0]), bParam1);
	}
}

int func_165(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_114963.f_32759[iParam0], iParam1);
}

void func_166(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_170(&(Global_79127.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_79127.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_79127.f_139[iParam0], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_79127.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_79127.f_139[iParam0], true, true);
				VEHICLE::DELETE_VEHICLE(&(Global_79127.f_139[iParam0]));
			}
		}
		Global_79127[iParam0] = 1;
		if (BitTest(Global_79127.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_165(iParam0, 0)) && Global_80036.f_66 == 0) && Global_114963.f_32759.f_1958[Global_79127.f_555[0 /*21*/].f_14] != 0) && Global_114963.f_32759.f_1958[Global_79127.f_555[0 /*21*/].f_14] > 3) && (!func_168(0, Global_79127.f_555[0 /*21*/].f_12) || !func_168(1, Global_79127.f_555[0 /*21*/].f_12)))
			{
				func_167(&(Global_114963.f_32759.f_69[Global_79127.f_555[0 /*21*/].f_14 /*78*/]), &Global_80036);
				Global_80114 = Global_114963.f_32759.f_5591;
			}
			func_163(iParam0, 0);
		}
	}
}

void func_167(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_168(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_169(&(Global_114963.f_32759.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_141(Global_114963.f_32759.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_169(var uParam0)
{
	return *uParam0;
}

int func_170(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_151())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), true);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_151())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), true);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), false);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_114963.f_32759.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_73(Global_114963.f_32759.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_114963.f_32759.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_114963.f_32759.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_114963.f_32759.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_73(Global_114963.f_2370.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_114963.f_2370.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114963.f_2370.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_73(Global_114963.f_2370.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_114963.f_2370.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114963.f_2370.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_171(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_79127.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_79127.f_484[iVar0], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_79127.f_484[iVar0], false))
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
			VEHICLE::GET_VEHICLE_COLOURS(Global_79127.f_484[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_79127.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_79127.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_172(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_173(iParam0, Global_79127.f_139[38], 0))
			{
				func_166(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_173(iParam0, Global_79127.f_139[43], 1))
			{
				func_166(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_173(iParam0, uVar1[iVar6], 1) && func_140(ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_73(Param1, 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], true), true) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_79127.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_79127.f_484[14], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_79127.f_484[14]) == joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_79127.f_484[14]))
				{
					func_166(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_79127.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_79127.f_484[20], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_79127.f_484[20]) == joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_79127.f_484[20]))
				{
					func_166(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_173(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (bParam2)
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar0, &iVar1);
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_174(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_99792[iVar0]))
		{
			Global_99792[iVar0] = iParam0;
			Global_99802[iVar0] = iParam1;
			Global_99812[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_99812[iVar0]))
			{
				Global_99840[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_99840[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_175(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99792[iVar0]))
		{
			if (iParam0 == 145 || Global_99802[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_99792[iVar0]) == func_36(iParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_99792[iVar0], false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_99792[iVar0], false, true);
						VEHICLE::DELETE_VEHICLE(&(Global_99792[iVar0]));
						Global_99802[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_176(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_200(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_40(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_40(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_40(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_40(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_40(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_40(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_40(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_40(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_40(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_40(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("surfer3"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_40(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_40(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_40(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_40(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_40(1));
		}
		else if (uParam1->f_66 == joaat("driftyosemite"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_40(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_40(iVar6)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_40(iVar6));
				}
				iVar6++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_198(uParam1->f_5) || func_198(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_197(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_196())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
			VEHICLE::SET_DRIFT_TYRES(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, BitTest(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_195(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_195(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
			}
		}
		if (bParam3)
		{
			func_185(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_40(iVar7 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, true);
				}
				iVar7++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if ((((func_179() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_178(1)))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (!BitTest(uParam1->f_77, 22) && func_177(iParam0, 5f))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_177(int iParam0, float fParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3, false, false))
		{
			if (MISC::ABSF((Var0.f_2 - fVar3)) > fParam1)
			{
				return 1;
			}
		}
		else if (Var0.f_2 > (PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Var0.f_0, Var0.f_1) + fParam1))
		{
			return 1;
		}
		else if (Var0.f_2 > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_178(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_179()
{
	if ((((Global_4718592.f_121958 == 6 || Global_4718592.f_121958 == 7) || Global_4718592.f_121958 == 18) || Global_4718592.f_121958 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_183(7))
	{
		if (func_181(Global_2673273.f_4.f_16) || func_180(Global_2673273.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_180(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1882652[iVar0 /*321*/].f_82.f_75 != 0;
	}
	return 0;
}

int func_181(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_182(iParam0, 9);
	}
	return 0;
}

var func_182(int iParam0, int iParam1)
{
	return BitTest(Global_1892925[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_183(int iParam0)
{
	return func_184(&(Global_2673273.f_194), iParam0);
}

var func_184(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_185(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, 255);
				}
				else
				{
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_193(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_190(ENTITY::GET_ENTITY_MODEL(*iParam0)) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_188(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_188(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_187(iParam0);
	if (func_186(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_186(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 32);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_187(var uParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("starling"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_188(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = func_189(iParam0, 38) + 1;
		iVar1 = func_189(iParam0, 24) + 1;
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_189(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((STREAMING::IS_MODEL_VALID(Global_153860) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_153860)) && Global_153861 == iParam1)
	{
		return Global_153862;
	}
	iVar0 = (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_193(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_190(int iParam0)
{
	if (func_192(iParam0, 1) && !func_191(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1891140410:
			return 1;
			break;
	}
	return 0;
}

int func_191(int iParam0)
{
	switch (iParam0)
	{
		case 707880171:
			return 1;
			break;
	}
	return 0;
}

int func_192(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14790)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14791)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14789)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14792)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14794)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14793)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19037)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19039)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19043)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19040)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19047)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19045)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19050)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20923)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20924)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	if (func_191(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_193(int iParam0, int iParam1, int iParam2)
{
	if (!func_194() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	return 0;
}

void func_195(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_196()
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_197(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return BitTest(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_198(int iParam0)
{
	if (!func_194() && func_199(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_200(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_207(PLAYER::PLAYER_ID(), -1))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	if (func_202(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_201(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_202(int iParam0)
{
	if (func_206(iParam0) == 233)
	{
		return func_203(iParam0);
	}
	return -1;
}

int func_203(int iParam0)
{
	if (func_204(iParam0, 0))
	{
		return Global_1892925[iParam0 /*615*/].f_10.f_183;
	}
	return -1;
}

int func_204(int iParam0, int iParam1)
{
	if (func_205(iParam0))
	{
		if (Global_1892925[iParam0 /*615*/].f_10.f_34 != -1 || (iParam1 && Global_1892925[iParam0 /*615*/].f_10.f_33 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_206(int iParam0)
{
	if (func_205(iParam0))
	{
		if (func_204(iParam0, 0))
		{
			return Global_1892925[iParam0 /*615*/].f_10.f_34;
		}
	}
	return -1;
}

int func_207(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_208(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_208(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2673273.f_3)
				{
					return Global_2673273.f_2;
				}
				else if (Global_2658293[iVar0 /*468*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_209(struct<3> Param0, float fParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_170(&(Global_79127.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_79127.f_555[0 /*21*/], bParam4) <= fParam3)
			{
				func_166(iVar0);
			}
		}
		iVar0++;
	}
}

var func_210()
{
	return Global_108504.f_2890.f_12.f_66;
}

bool func_211()
{
	return func_139(&(Global_108504.f_2890));
}

void func_212()
{
	iLocal_3310 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("BREAKING_NEWS");
	STREAMING::REQUEST_MODEL(joaat("jet"));
	STREAMING::REQUEST_MODEL(joaat("police3"));
	STREAMING::REQUEST_MODEL(joaat("maverick"));
	STREAMING::REQUEST_MODEL(joaat("bison"));
	STREAMING::REQUEST_MODEL(joaat("blista"));
	STREAMING::REQUEST_MODEL(joaat("ig_molly"));
	STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
	STREAMING::REQUEST_MODEL(joaat("rapidgt"));
	VEHICLE::REQUEST_VEHICLE_RECORDING(45, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(35, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(54, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(55, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(67, "BB_Chase");
	func_214(1, "BB_Chase");
	if (func_23())
	{
		if (func_211())
		{
			if (!VEHICLE::IS_THIS_MODEL_A_HELI(func_210()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_210()))
			{
				func_152();
				while (!func_137())
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	while (((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("maverick"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison"))) || !STREAMING::HAS_MODEL_LOADED(joaat("blista"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_molly"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")))
	{
		SYSTEM::WAIT(0);
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3310) || !func_213(1, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
	while (((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "BB_Chase") || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(35, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(54, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(55, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(67, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
}

bool func_213(int iParam0, char* sParam1)
{
	return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1);
}

void func_214(int iParam0, char* sParam1)
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
}

void func_215()
{
	func_241();
	func_239();
	HUD::CLEAR_PRINTS();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_3237))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_3237, 0);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_3238))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_3238);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1019.579f, -484.872f, 36.0795f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 93.7701f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3276, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3276))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3276);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3275, 0f);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3275);
			}
		}
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3776))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3776, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3777))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3777, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3778))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3778, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3779))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3779, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3780))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3780, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3772[0]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3772[0], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3772[1]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3772[1], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3772[2]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3772[2], false);
	}
	STREAMING::REMOVE_PTFX_ASSET();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
	{
		PED::DELETE_PED(&iLocal_3239);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
	{
		PED::DELETE_PED(&iLocal_3245);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3262))
	{
		PED::DELETE_PED(&iLocal_3262);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3263))
	{
		PED::DELETE_PED(&iLocal_3263);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3264))
	{
		PED::DELETE_PED(&iLocal_3264);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
	{
		PED::DELETE_PED(&iLocal_3265);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
	{
		PED::DELETE_PED(&iLocal_3266);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267))
	{
		PED::DELETE_PED(&iLocal_3267);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3240[0]))
	{
		PED::DELETE_PED(&(iLocal_3240[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3240[1]))
	{
		PED::DELETE_PED(&(iLocal_3240[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3240[2]))
	{
		PED::DELETE_PED(&(iLocal_3240[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3240[3]))
	{
		PED::DELETE_PED(&(iLocal_3240[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3246[0]))
	{
		PED::DELETE_PED(&(uLocal_3246[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3246[1]))
	{
		PED::DELETE_PED(&(uLocal_3246[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3246[2]))
	{
		PED::DELETE_PED(&(uLocal_3246[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[0]))
	{
		PED::DELETE_PED(&(iLocal_3250[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[1]))
	{
		PED::DELETE_PED(&(iLocal_3250[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[2]))
	{
		PED::DELETE_PED(&(iLocal_3250[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[3]))
	{
		PED::DELETE_PED(&(iLocal_3250[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[4]))
	{
		PED::DELETE_PED(&(iLocal_3250[4]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[5]))
	{
		PED::DELETE_PED(&(iLocal_3250[5]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[6]))
	{
		PED::DELETE_PED(&(iLocal_3250[6]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[7]))
	{
		PED::DELETE_PED(&(iLocal_3250[7]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[8]))
	{
		PED::DELETE_PED(&(iLocal_3250[8]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[9]))
	{
		PED::DELETE_PED(&(iLocal_3250[9]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[10]))
	{
		PED::DELETE_PED(&(iLocal_3250[10]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3268[0]))
	{
		PED::DELETE_PED(&(iLocal_3268[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271[0]))
	{
		PED::DELETE_PED(&(iLocal_3271[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271[1]))
	{
		PED::DELETE_PED(&(iLocal_3271[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3275);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_3276))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3276, true, false);
		}
		VEHICLE::DELETE_VEHICLE(&iLocal_3276);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3281))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3281);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3282))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3282);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3283);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3284))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3284);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3288))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3288);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3292))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3292);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3296[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3296[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3296[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3296[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3277[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3277[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3277[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3277[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3296[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3296[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3296[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3296[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3285[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3285[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3285[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3285[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3289[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3289[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3280))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3280);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3299))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3299);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3300))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3300);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3301))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3301);
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_DRIVE_TO_AIRPORT"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_MAIN_CHASE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_MAIN_CHASE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_HELI_TAKEOFF"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_HELI_TAKEOFF");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_TANKER_CRASH"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_TANKER_CRASH");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_PLANE_ON_FIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_PLANE_ON_FIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_JET_LANDING"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_JET_LANDING");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ARRIVE_AT_HANGAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ON_FOOT_CHASE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_ON_FOOT_CHASE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ENGINE_DEATH_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_ENGINE_DEATH_SCENE");
	}
	AUDIO::STOP_SOUND(iLocal_3228);
	AUDIO::STOP_SOUND(iLocal_3230);
	AUDIO::STOP_SOUND(iLocal_3231);
	AUDIO::STOP_SOUND(iLocal_3232);
	AUDIO::STOP_SOUND(iLocal_3233);
	AUDIO::STOP_SOUND(iLocal_3234);
	AUDIO::STOP_SOUND(iLocal_3235);
	AUDIO::STOP_SOUND(iLocal_3236);
	AUDIO::STOP_SOUND(iLocal_3229);
	func_237(&uLocal_45, 0, 0, 0);
	if (CAM::DOES_CAM_EXIST(iLocal_3306))
	{
		CAM::DESTROY_CAM(iLocal_3306, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_3307))
	{
		CAM::DESTROY_CAM(iLocal_3307, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_3308))
	{
		CAM::DESTROY_CAM(iLocal_3308, false);
	}
	func_216(1, 1);
	STREAMING::REMOVE_ANIM_DICT("misssolomon_3");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_clipboard@male@base");
	STREAMING::REMOVE_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(9, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(35, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(45, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(54, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(55, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(61, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(63, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(64, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(67, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(68, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(69, "BB_Chase");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_3310);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
}

void func_216(bool bParam0, bool bParam1)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2685))
	{
		iLocal_108 = 0;
		func_236();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_2701);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_124)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_235());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_234());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_233());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_232());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_231();
			func_230();
			func_227();
		}
		else
		{
			func_223();
			func_222();
		}
		if (bParam1)
		{
			func_217(0);
		}
	}
}

void func_217(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_218(iVar0, bParam0);
		iVar0++;
	}
}

void func_218(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_76(iParam0, 2, 1))
		{
			func_221(iParam0, 2, 1);
		}
	}
	else if (func_76(iParam0, 2, 1))
	{
		func_219(iParam0, 2, 1);
	}
}

void func_219(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_102538.f_1442[iParam0]), bParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_78() == 0)
		{
			iVar0 = func_51(func_77(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, bParam1);
			func_220(func_77(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_114963.f_668[iParam0]), bParam1);
	}
}

void func_220(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 16764)
	{
		iVar0 = func_52(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

void func_221(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_102538.f_1442[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_78() == 0)
		{
			iVar0 = func_51(func_77(iParam0), -1);
			MISC::SET_BIT(&iVar0, bParam1);
			func_220(func_77(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_114963.f_668[iParam0]), bParam1);
	}
}

void func_222()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		iLocal_2933[iVar0] = 0;
		Local_1980[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_126[iVar0] = 0f;
		fLocal_302[iVar0] = 0f;
		fLocal_478[iVar0] = 0f;
		fLocal_654[iVar0] = 0f;
		iLocal_1311[iVar0] = 0;
		fLocal_830[iVar0] = 0f;
		iLocal_1487[iVar0] = 0;
		iLocal_2702[iVar0] = 0;
		iLocal_1663[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_3109[iVar0] = 0;
		iVar0++;
	}
	iLocal_1963 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_3122[iVar0] = 0;
		Local_2506[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_1226[iVar0] = 0f;
		fLocal_1242[iVar0] = 0f;
		fLocal_1258[iVar0] = 0f;
		fLocal_1274[iVar0] = 0f;
		iLocal_1947[iVar0] = 0;
		iLocal_2878[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_3174[iVar0] = 0;
		iVar0++;
	}
	iLocal_1965 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_3138[iVar0] = 0;
		Local_2552[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_1010[iVar0] = 0f;
		fLocal_1046[iVar0] = 0f;
		fLocal_1082[iVar0] = 0f;
		fLocal_1118[iVar0] = 0f;
		iLocal_1839[iVar0] = 0;
		fLocal_1154[iVar0] = 0f;
		iLocal_1875[iVar0] = 0;
		iLocal_2894[iVar0] = 0;
		iLocal_1911[iVar0] = 0;
		iVar0++;
	}
	iLocal_1964 = 0;
	iLocal_1967 = 0;
	iLocal_1970 = 0;
	iLocal_1971 = 0;
	iLocal_1972 = 0;
}

void func_223()
{
	func_226();
	func_225();
	func_224();
}

void func_224()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3138[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_3138[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_3138[iVar0]));
			}
		}
		iLocal_1875[iVar0] = 0;
		if (!bLocal_104 && !bLocal_117)
		{
			if (iLocal_1839[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1839[iVar0], &cLocal_2685);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2894[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2894[iVar0]);
		}
		iVar0++;
	}
}

void func_225()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3122[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_3122[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_3122[iVar0]));
			}
		}
		iLocal_1947[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2878[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2878[iVar0]);
		}
		iVar0++;
	}
	iLocal_1968 = 0;
	iLocal_1965 = 0;
}

void func_226()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2933[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2933[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2933[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2933[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2933[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2933[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2933[iVar0]));
			}
		}
		if (!bLocal_104 && !bLocal_117)
		{
			if (iLocal_1311[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1311[iVar0], &cLocal_2685);
			}
		}
		iLocal_1487[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2702[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2702[iVar0]);
		}
		iVar0++;
	}
	iLocal_1967 = 0;
	iLocal_1963 = 0;
}

void func_227()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[iVar0]);
				}
			}
			func_229(iLocal_3138[iVar0]);
			func_228(iLocal_3138[iVar0]);
		}
		iLocal_1875[iVar0] = 0;
		iLocal_1911[iVar0] = 0;
		if (!bLocal_104 && !bLocal_117)
		{
			if (iLocal_1839[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1839[iVar0], &cLocal_2685);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2894[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2894[iVar0]);
		}
		iVar0++;
	}
	iLocal_1969 = 0;
}

void func_228(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

void func_229(int iParam0)
{
	float fVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!iVar1 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				TASK::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, true);
				if (bLocal_125)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

void func_230()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3122[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3122[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_3122[iVar0], true, false);
			}
			func_228(iLocal_3122[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2878[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2878[iVar0]);
		}
		iVar0++;
	}
	iLocal_1968 = 0;
	iLocal_1965 = 0;
}

void func_231()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2933[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2933[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2933[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2933[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2933[iVar0]);
				}
			}
			func_229(iLocal_2933[iVar0]);
			func_228(iLocal_2933[iVar0]);
		}
		iLocal_1487[iVar0] = 0;
		iLocal_1663[iVar0] = 0;
		if (!bLocal_104 && !bLocal_117)
		{
			if (iLocal_1311[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1311[iVar0], &cLocal_2685);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2702[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2702[iVar0]);
		}
		iVar0++;
	}
	iLocal_1967 = 0;
	iLocal_1963 = 0;
}

int func_232()
{
	return joaat("s_m_y_cop_01");
}

int func_233()
{
	return joaat("police");
}

int func_234()
{
	return joaat("sultan");
}

int func_235()
{
	if (iLocal_2930 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2930;
}

void func_236()
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
	VEHICLE::SET_GARBAGE_TRUCKS(true);
	VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(true);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
}

void func_237(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_2733190.f_3788, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	if (!bParam3)
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_238(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_238(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

bool func_238(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_239()
{
	Global_21889 = 0;
	func_240();
}

void func_240()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24034 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23023 = 6;
	}
}

void func_241()
{
	Global_21889 = 0;
	func_242();
}

void func_242()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24034 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21649.f_1 == 9) || Global_21648 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23023 = 6;
		Global_21649.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_23023 = 6;
		return;
	}
}

void func_243()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_3302))
	{
		HUD::REMOVE_BLIP(&iLocal_3302);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_3303))
	{
		HUD::REMOVE_BLIP(&iLocal_3303);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_3304))
	{
		HUD::REMOVE_BLIP(&iLocal_3304);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_3305))
	{
		HUD::REMOVE_BLIP(&iLocal_3305);
	}
}

void func_244()
{
	if (iLocal_3587 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
		{
			if (!PED::IS_PED_INJURED(iLocal_3245))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_3245, PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_3587 = 1;
				}
			}
		}
	}
	if (iLocal_3587 == 0)
	{
		if (iLocal_3551 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
			{
				if (!PED::IS_PED_INJURED(iLocal_3245))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
					{
						if (!PED::IS_PED_INJURED(iLocal_3239))
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_3239))
							{
								if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_3239) > 18)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3301))
									{
										if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3301))
										{
											ENTITY::DETACH_ENTITY(iLocal_3301, true, true);
										}
									}
									iLocal_3227 = PED::CREATE_SYNCHRONIZED_SCENE(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3245, iLocal_3227, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1000f, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_3245, PLAYER::PLAYER_PED_ID(), 9000, 1024, 3);
									iLocal_3551 = 1;
									iLocal_3552 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3551 == 1 && iLocal_3553 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
			{
				if (!PED::IS_PED_INJURED(iLocal_3245))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3227))
					{
						if (!iLocal_3552)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3227) > 0.25f)
							{
								func_17(&uLocal_3595, 4, iLocal_3245, "HangerWorker", 0, 1);
								func_245(iLocal_3245, "T1M4_BCAA", "HangerWorker", 11, 0);
								iLocal_3552 = 1;
							}
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3227) > 0.99f)
						{
							iLocal_3227 = PED::CREATE_SYNCHRONIZED_SCENE(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3245, iLocal_3227, "misssolomon_3", "_react_to_death", 1000f, -1.5f, 3, 16, 1000f, 0);
							iLocal_3553 = 1;
						}
					}
				}
			}
		}
		if (iLocal_3553 == 1 && iLocal_3556 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
			{
				if (!PED::IS_PED_INJURED(iLocal_3245))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3227))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_3245, MISC::GET_HASH_KEY("ENDS_IN_RUN")))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_3309);
							TASK::TASK_FORCE_MOTION_STATE(0, joaat("MotionState_Sprint"), false);
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_3309);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_3245, iLocal_3309);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_3309);
							PED::FORCE_PED_MOTION_STATE(iLocal_3245, joaat("MotionState_Sprint"), false, 0, false);
							iLocal_3556 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_3556 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
		{
			if (!PED::IS_PED_INJURED(iLocal_3245))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_3309);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_3309);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_3245, iLocal_3309);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_3309);
				iLocal_3556 = 1;
			}
		}
	}
}

void func_245(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_15(iParam3), bParam4);
}

void func_246()
{
	if (iLocal_3198 == 0)
	{
		iLocal_3200 = 0;
		iLocal_3228 = AUDIO::GET_SOUND_ID();
		CUTSCENE::REQUEST_CUTSCENE("TRV_4_MCS_2", 8);
		STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", false, 0.5f, 1f);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_3198 = 1;
	}
	if (iLocal_3198 == 1)
	{
		switch (iLocal_3200)
		{
			case 0:
				while (!CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (!PED::IS_PED_INJURED(iLocal_3239))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3239, "Molly", 1, joaat("ig_molly"), 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_3245))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3245, "Airworker_Tackle_trevor", 0, joaat("s_m_y_airworker"), 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3283, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3283, "JET_TRV4", 0, joaat("jet"), 0);
				}
				func_247(1, 1, 1, 0, 0, 0, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_SUCK_CS");
				CUTSCENE::START_CUTSCENE(0);
				iLocal_3200++;
				break;
			
			case 1:
				func_134();
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("JET_TRV4", joaat("jet")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3283, false))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_3283, false))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3283, true);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Airworker_Tackle_trevor", joaat("s_m_y_airworker")))
				{
					if (!PED::IS_PED_INJURED(iLocal_3245))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3245, true);
						TASK::TASK_SMART_FLEE_PED(iLocal_3245, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3245, false, 0);
						PED::SET_PED_CAN_BE_TARGETTED(iLocal_3245, true);
						ENTITY::SET_ENTITY_PROOFS(iLocal_3245, false, false, false, false, false, false, false, false);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					func_134();
					func_132(1);
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					iLocal_3355 = 1;
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3299))
					{
						if (STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01")))
						{
							iLocal_3299 = OBJECT::CREATE_OBJECT(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_3299, 0f, 0f, -121.5948f, 2, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_3299, 0f, 0f, 0.8729f, -0.4879f);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_jet_bloodsplat_01"));
						}
					}
					CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(false);
					func_247(0, 1, 1, 0, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), 0, 2))
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_smg"), 150, true, true);
					}
					iLocal_3198 = 2;
				}
				break;
			}
	}
	if (iLocal_3198 == 2)
	{
		iLocal_3198 = 0;
		iLocal_3197 = 8;
	}
}

void func_247(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_255(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_21649.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_254())
			{
				Global_21649.f_1 = 3;
			}
			Global_23023 = 5;
		}
		func_253(1, bParam3, iParam2, 0);
		Global_65069 = 1;
		Global_77400 = 1;
		Global_80335 = 1;
	}
	else
	{
		func_255(0);
		HUD::THEFEED_RESUME();
		Global_65069 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_253(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_251(PLAYER::PLAYER_ID())) && !func_249(PLAYER::PLAYER_ID(), 0)) && !func_248()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_251(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		Global_80335 = 0;
	}
}

bool func_248()
{
	return BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_36.f_18, 14);
}

bool func_249(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_205(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_250(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845298[iParam0 /*881*/].f_198 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_250(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
	}
	if (Global_1575075[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574922[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_251(int iParam0)
{
	if (func_249(iParam0, 0))
	{
		return 1;
	}
	if (func_252())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2658293[iParam0 /*468*/].f_203, 2))
	{
		return 1;
	}
	return 0;
}

bool func_252()
{
	return BitTest(Global_2621446, 3);
}

int func_253(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && iParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_254()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_255(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_9502, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9502, 13);
	}
}

void func_256()
{
	if (iLocal_3528 == 0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, false, true, 0))
		{
			iLocal_3528 = 1;
		}
	}
	else if (iLocal_3532 == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 22, true);
		PAD::DISABLE_CONTROL_ACTION(0, 25, true);
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -938.5178f, -2972.022f, 12.46715f, -934.1034f, -2974.613f, 15.96715f, 5.25f, false, true, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
		}
		else
		{
			if (fLocal_3343 < 1f)
			{
				fLocal_3343 = 1f;
			}
			fLocal_3343 = (fLocal_3343 * 0.975f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fLocal_3343);
		}
	}
	if (iLocal_3198 > 0)
	{
		func_244();
	}
	if (iLocal_3198 == 0)
	{
		iLocal_3356 = 0;
		iLocal_3357 = 0;
		iLocal_3358 = 0;
		iLocal_3359 = 0;
		iLocal_3361 = 0;
		iLocal_3377 = 0;
		iLocal_3488 = 0;
		iLocal_3489 = 0;
		iLocal_3490 = 0;
		iLocal_3496 = 0;
		iLocal_3529 = 0;
		iLocal_3530 = 0;
		iLocal_3531 = 0;
		iLocal_3532 = 0;
		iLocal_3533[0] = 0;
		iLocal_3537[0] = 0;
		iLocal_3533[1] = 0;
		iLocal_3537[1] = 0;
		iLocal_3533[2] = 0;
		iLocal_3551 = 0;
		iLocal_3553 = 0;
		iLocal_3554 = 0;
		iLocal_3555 = 0;
		iLocal_3556 = 0;
		iLocal_3559 = 0;
		iLocal_3585 = 0;
		iLocal_3587 = 0;
		iLocal_3588[3] = 0;
		STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
		INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("V_60_HangerRm");
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
		{
			if (!PED::IS_PED_INJURED(iLocal_3239))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_3239))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_3239, 3f, true);
				}
			}
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_3198 = 1;
	}
	if (iLocal_3198 == 1)
	{
		if (iLocal_3496 == 0)
		{
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Trv_4_747", false, -1))
			{
				iLocal_3496 = 1;
			}
		}
		if (iLocal_3488 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
			{
				if (!PED::IS_PED_INJURED(iLocal_3239))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_3239))
					{
						if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_3239) > 20)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3283, false))
								{
									func_261(&iLocal_3283);
									AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3228, "Trevor_4_747_Jet_Engine", -937.77f, -2981.36f, 15.44f, 0, false, 0, false);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3283, true, false, false);
									iLocal_3488 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3529 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
			{
				if (!PED::IS_PED_INJURED(iLocal_3239))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_3239))
					{
						if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_3239) > 23)
						{
							TASK::CLEAR_PED_TASKS(iLocal_3239);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3283, false))
								{
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ENGINE_DEATH_SCENE"))
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_ENGINE_DEATH_SCENE");
									}
									iLocal_3226 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3226, iLocal_3283, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3283, "chassis_Control"));
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3239, iLocal_3226, "MISSSOLOMON_3", "molly_death", 1.5f, -8f, 4, 0, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_3226, true);
									iLocal_3529 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3530 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
			{
				if (!PED::IS_PED_INJURED(iLocal_3239))
				{
					if (iLocal_3529 == 1)
					{
						Local_3335 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (Local_3335.f_1 < -2965f)
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_3239, 0f, 0f, 0f, true, 6000, 1000, 2000, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3239, 0);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3239, 4000, 48, 4);
							iLocal_3530 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_3531 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
			{
				CAM::STOP_GAMEPLAY_HINT(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_3250[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_3250[0]);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[0], false);
					}
				}
				iLocal_3531 = 1;
			}
		}
		if (iLocal_3490 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
			{
				if (!PED::IS_PED_INJURED(iLocal_3239))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3300))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_3300, iLocal_3239))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3239, "MISSSOLOMON_3", "molly_death", 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3226) > 0.59f)
								{
									ENTITY::DETACH_ENTITY(iLocal_3300, true, true);
									if (HUD::DOES_BLIP_EXIST(iLocal_3302))
									{
										HUD::REMOVE_BLIP(&iLocal_3302);
									}
									if (!HUD::DOES_BLIP_EXIST(iLocal_3305))
									{
										func_245(iLocal_3239, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11, 0);
										if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ON_FOOT_CHASE"))
										{
											AUDIO::STOP_AUDIO_SCENE("SOL_3_ON_FOOT_CHASE");
										}
										if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
										{
											AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS");
										}
										SYSTEM::SETTIMERB(0);
										iLocal_3490 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3532 == 0)
		{
			if (iLocal_3490 == 1 && SYSTEM::TIMERB() > 2500)
			{
				iLocal_3305 = func_258(iLocal_3300);
				func_20("SOL3_GOD1", 7500, -1);
				SYSTEM::SETTIMERB(0);
				iLocal_3532 = 1;
			}
		}
		if (iLocal_3588[3] == 0)
		{
			if (iLocal_3532 == 1 && iLocal_3531 == 1)
			{
				if (SYSTEM::TIMERB() > 2500)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 2f, 3);
					iLocal_3588[3] = 1;
				}
			}
		}
		if (iLocal_3489 == 0)
		{
			if (!PED::IS_PED_INJURED(iLocal_3239))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3239, "MISSSOLOMON_3", "molly_death", 3))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3226) > 0.89f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3283, false))
							{
								PED::DELETE_PED(&iLocal_3239);
								GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev4_747_blood_impact", iLocal_3283, -12.5793f, 12.2f, -7.09421f, 0f, 0f, 0f, 1f, false, false, false);
								iLocal_3781 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_exhaust_plane_misfire", iLocal_3283, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, false, false, false);
								AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3229, "Trevor_4_747_Man_Sucked_In", -938.6f, -2984.13f, 15.47f, 0, false, 0, false);
								iLocal_3209 = MISC::GET_GAME_TIMER();
								iLocal_3489 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (MISC::GET_GAME_TIMER() > iLocal_3209 + 574)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3299))
				{
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01")))
					{
						iLocal_3299 = OBJECT::CREATE_OBJECT(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(iLocal_3299, 0f, 0f, -121.5948f, 2, true);
						ENTITY::SET_ENTITY_QUATERNION(iLocal_3299, 0f, 0f, 0.8729f, -0.4879f);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_jet_bloodsplat_01"));
					}
				}
				if (iLocal_3585 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3283, false))
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev4_747_engine_debris", iLocal_3283, -12.6286f, 6.85353f, -7.13622f, 180f, 0f, 0f, 1f, false, false, false);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3283, false, false, false);
							func_257();
							AUDIO::STOP_SOUND(iLocal_3228);
							iLocal_3585 = 1;
						}
					}
				}
			}
			if (iLocal_3533[0] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3209 + 300)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3781))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3781, false);
					}
					iLocal_3533[0] = 1;
				}
			}
			else if (iLocal_3537[0] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3209 + 700)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3283, false))
						{
							iLocal_3781 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_exhaust_plane_misfire", iLocal_3283, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, false, false, false);
							iLocal_3537[0] = 1;
						}
					}
				}
			}
			else if (iLocal_3533[1] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3209 + 1000)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3781))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3781, false);
					}
					iLocal_3533[1] = 1;
				}
			}
			else if (iLocal_3537[1] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3209 + 1400)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3283, false))
						{
							iLocal_3781 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_exhaust_plane_misfire", iLocal_3283, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, false, false, false);
							iLocal_3780 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_damage", iLocal_3283, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1f, false, false, false);
							iLocal_3537[1] = 1;
						}
					}
				}
			}
			else if (iLocal_3533[2] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3209 + 3500)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3781))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3781, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3283, false))
						{
							ENTITY::SET_ENTITY_PROOFS(iLocal_3283, false, false, false, false, false, false, false, false);
						}
					}
					iLocal_3533[2] = 1;
				}
			}
		}
		if (iLocal_3554 == 0)
		{
			if (iLocal_3490 == 1)
			{
				if (iLocal_3555 == 0)
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_3300))
					{
						iLocal_3219 = MISC::GET_GAME_TIMER();
						iLocal_3555 = 1;
					}
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_3219 + 2000)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_3300, true);
					iLocal_3554 = 1;
				}
			}
		}
		if (iLocal_3559 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_3283, false);
					iLocal_3559 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3300))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_3305))
			{
				if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3300, 1) < 1.5f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					HUD::REMOVE_BLIP(&iLocal_3305);
					OBJECT::DELETE_OBJECT(&iLocal_3300);
					func_134();
					iLocal_3198 = 0;
					iLocal_3197 = 8;
				}
			}
		}
	}
}

void func_257()
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3776))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3776, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3777))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3777, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3778))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3778, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3779))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3779, false);
	}
}

int func_258(int iParam0)
{
	return func_259(iParam0, 1, 0);
}

int func_259(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_260(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_260(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_260(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_260(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_261(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		Var0 = { 22.6057f, -2.10018f, -6.22841f };
		Var3 = { 12.6349f, 7.89711f, -7.09742f };
		Var6 = { -22.5879f, -2.2931f, -6.22542f };
		Var9 = { -12.6675f, 8.15519f, -6.98833f };
		Var12 = { 180f, 0f, 0f };
		iLocal_3776 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var0, Var12, 1f, false, false, false);
		iLocal_3777 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var3, Var12, 1f, false, false, false);
		iLocal_3778 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var6, Var12, 1f, false, false, false);
		iLocal_3779 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var9, Var12, 1f, false, false, false);
	}
}

void func_262()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
	{
		if (!PED::IS_PED_INJURED(iLocal_3239))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_3239))
			{
				if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3239, 1) < 17f)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_3239, 3f, true);
				}
				if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3239, 1) < 22f && func_16(PLAYER::PLAYER_PED_ID(), iLocal_3239, 1) > 17f)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_3239, 2f, true);
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -921.7f, -2946.4f, 13.4f, true) > 8f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3239))
				{
					if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3239, 1) > 22f)
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_3239, 1f, true);
					}
				}
				else if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3239, 1) > 22f)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_3239, 2f, true);
				}
			}
		}
	}
	if (iLocal_3198 > 0)
	{
		if (iLocal_3528 == 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, false, true, 0))
			{
				iLocal_3528 = 1;
			}
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(0, 22, true);
			PAD::DISABLE_CONTROL_ACTION(0, 25, true);
			if (fLocal_3343 < 1f)
			{
				fLocal_3343 = 1f;
			}
			fLocal_3343 = (fLocal_3343 * 0.98f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fLocal_3343);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
		{
			STREAMING::REQUEST_MODEL(joaat("jet"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
			{
				iLocal_3283 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_3283, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3283, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_3283, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3283, true, true, true, true, true, false, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_3283, 500);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
			STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
			STREAMING::REQUEST_MODEL(joaat("p_amb_clipboard_01"));
			if ((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker")) && STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3")) && STREAMING::HAS_MODEL_LOADED(joaat("p_amb_clipboard_01")))
			{
				iLocal_3245 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -932.1812f, -2967.947f, 12.9451f, 170.7182f, true, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3245, false, false, false, false, false, false, false, false);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_3245, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3245, true);
				func_17(&uLocal_3595, 4, iLocal_3245, "HangerWorker", 0, 1);
				iLocal_3301 = OBJECT::CREATE_OBJECT(joaat("p_amb_clipboard_01"), -932.1812f, -2967.947f, 12.9451f, true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3301, iLocal_3245, PED::GET_PED_BONE_INDEX(iLocal_3239, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				iLocal_3227 = PED::CREATE_SYNCHRONIZED_SCENE(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3245, iLocal_3227, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1000f, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_airworker"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_clipboard_01"));
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3250[0]))
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
			{
				iLocal_3250[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_3250[0], joaat("weapon_pistol"), 1000, true, true);
				PED::SET_PED_ACCURACY(iLocal_3250[0], 20);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3250[0], true, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[0], true);
				TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_3250[0], PLAYER::PLAYER_PED_ID(), -1, true);
				func_136(iLocal_3250[0], 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3284))
		{
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("shamal")))
			{
				iLocal_3284 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, true, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3284, 0, false, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3284, 5f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
				ENTITY::SET_ENTITY_HEALTH(iLocal_3284, 2000, 0, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3284))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3284, false))
			{
				if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3284, 1) > 5f)
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3284, 0, false, false);
				}
			}
		}
	}
	if (iLocal_3198 == 0)
	{
		func_25(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_3362 == 1)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			func_129();
			func_17(&uLocal_3595, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			iLocal_3362 = 0;
		}
		iLocal_3449 = 0;
		iLocal_3450 = 0;
		iLocal_3528 = 0;
		fLocal_3343 = 3f;
		iLocal_3202 = 0;
		func_216(0, 1);
		VEHICLE::REMOVE_VEHICLE_RECORDING(45, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(35, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(2, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(54, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(9, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(61, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(63, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(64, "BB_CHASE");
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_3310);
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3275, 0f);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3275);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3288))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_3288);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271[0]))
		{
			PED::DELETE_PED(&(iLocal_3271[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3277[0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_3277[0]));
		}
		MISC::SET_FAKE_WANTED_LEVEL(0);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
		if (!PED::IS_PED_INJURED(iLocal_3239))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_3302))
			{
				iLocal_3302 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_3239);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_3302, true);
			}
		}
		AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", true);
		if (iLocal_3382[2] == 1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3236))
			{
				AUDIO::STOP_SOUND(iLocal_3236);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_3236);
			iLocal_3414 = 0;
			iLocal_3382[2] = 0;
		}
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_RUN");
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
		{
			STREAMING::REQUEST_MODEL(joaat("jet"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
		}
		STREAMING::REQUEST_MODEL(joaat("shamal"));
		STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("p_amb_clipboard_01"));
		VEHICLE::REQUEST_VEHICLE_RECORDING(68, "BB_Chase");
		VEHICLE::REQUEST_VEHICLE_RECORDING(69, "BB_Chase");
		STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
		SYSTEM::SETTIMERA(0);
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", true, 1f, 1f);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_24())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			func_21(0, -1, 1);
			func_20("TRV4_CHASE1", 7500, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_3198 = 1;
	}
	if (iLocal_3198 == 1)
	{
		iLocal_3198 = 2;
	}
	if (iLocal_3198 == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, false, true, 0))
		{
			func_263("TRV4_FAIL1");
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, false, true, 0))
		{
			func_263("TRV4_FAIL1");
		}
		if (SYSTEM::TIMERA() > 15000)
		{
			func_263("TRV4_FAIL1");
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, false, true, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_3239))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_3239))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_3239, "BB_MOLLY_2", 10, 4, -1);
					TASK::TASK_PLAY_ANIM(iLocal_3239, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0f, false, false, false);
				}
			}
			SYSTEM::SETTIMERA(0);
			iLocal_3198 = 3;
		}
	}
	if (iLocal_3198 == 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_3239))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_3239))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_3239) > 18 && iLocal_3454 == 0)
				{
					iLocal_3369 = 0;
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_3239, 3f, true);
					iLocal_3198 = 0;
					iLocal_3197 = 6;
				}
			}
		}
		if (SYSTEM::TIMERA() > 50000)
		{
			if (!PED::IS_PED_INJURED(iLocal_3239))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_3239);
				ENTITY::SET_ENTITY_COORDS(iLocal_3239, -932.5f, -2964.1f, 13.4f, true, false, false, true);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_3239, "BB_MOLLY_2", 18, 4, -1);
				TASK::TASK_PLAY_ANIM(iLocal_3239, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0f, false, false, false);
				iLocal_3369 = 0;
				iLocal_3198 = 0;
				iLocal_3197 = 6;
			}
		}
	}
}

void func_263(char* sParam0)
{
	if (iLocal_3454 == 0)
	{
		if (iLocal_3353)
		{
			func_253(0, 1, 1, 0);
			CAM::SET_CAM_ACTIVE(iLocal_3306, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(true);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
			{
				AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
			}
			AUDIO::STOP_SOUND(iLocal_3236);
			func_273();
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
			iLocal_3382[2] = 0;
			iLocal_3353 = 0;
		}
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FAIL");
		sLocal_3594 = sParam0;
		HUD::CLEAR_PRINTS();
		func_241();
		func_239();
		func_264(sLocal_3594);
		iLocal_3454 = 1;
	}
}

void func_264(char* sParam0)
{
	func_272(sParam0);
	func_265(0);
}

void func_265(int iParam0)
{
	int iVar0;
	
	if (Global_114963.f_9094 || func_460(0))
	{
		iVar0 = func_8();
		if (!func_266(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_93213[iVar0 /*5*/].f_1), 5);
		Global_102522 = iParam0;
	}
}

int func_266(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_271();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_93213[iParam0 /*5*/];
	iVar1 = Global_80608.f_109[iVar0 /*4*/];
	func_270(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_267(&(Global_114963.f_2370.f_539), iVar1);
	if (Global_96636 == Global_102523)
	{
		Global_114963.f_9094.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_93249[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_114963.f_9094.f_330[iVar1 /*6*/].f_2++;
	Global_96636 = Global_102523;
	if (iParam0 == -1)
	{
		if (Global_114963.f_9094)
		{
		}
		return 0;
	}
	if (BitTest(Global_93213[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_93213[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_267(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_114963.f_18542[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_114963.f_9094.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_269(Global_114963.f_18542[iVar0], &Var2, &fVar5))
			{
				Global_114963.f_18542[iVar0] = 318;
				func_268(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_99851[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_99851[iVar0 /*29*/].f_9 = 0f;
				Global_99851[iVar0 /*29*/].f_12 = 0f;
				Global_99851[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_99851[iVar0 /*29*/].f_10 = 0f;
				Global_99851[iVar0 /*29*/].f_13 = 0f;
				Global_99851[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_99851[iVar0 /*29*/].f_11 = 0f;
				Global_99851[iVar0 /*29*/].f_14 = 0f;
				Global_99851[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_99851[iVar0 /*29*/].f_26 = 0f;
				Global_99851[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_99851[iVar0 /*29*/].f_27 = 0f;
				Global_99851[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_99851[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_268(var uParam0)
{
	*uParam0 = -15;
}

int func_269(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_269(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_269(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_270(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_96446[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_96446[iParam0 /*2*/] = 0;
	}
}

void func_271()
{
	Global_102521 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_80570))
		{
			switch (func_116())
			{
				case 0:
					StringCopy(&Global_80570, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_80570, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_80570, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_80574, "", 16);
		}
		Global_102521 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_80570))
		{
			switch (func_116())
			{
				case 0:
					StringCopy(&Global_80570, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_80570, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_80570, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_80574, "", 16);
		}
		Global_102521 = 0;
		MISC::SET_BIT(&(Global_102486.f_20), 25);
	}
}

void func_272(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_80570, sParam0, 16);
			StringCopy(&Global_80574, "", 16);
			if (RECORDING::IS_REPLAY_RECORDING())
			{
				RECORDING::STOP_REPLAY_RECORDING();
			}
		}
	}
}

void func_273()
{
	Global_65070 = 0;
}

void func_274()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 30000f)
					{
						STREAMING::REQUEST_MODEL(joaat("jet"));
						if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
						{
							iLocal_3283 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, true, true, false);
							VEHICLE::SET_VEHICLE_LIVERY(iLocal_3283, 2);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3283, false);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3283, true);
							ENTITY::SET_ENTITY_PROOFS(iLocal_3283, true, true, true, true, true, false, false, false);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
							ENTITY::SET_ENTITY_LOD_DIST(iLocal_3283, 500);
						}
					}
				}
			}
		}
	}
	func_374();
	if (HUD::DOES_BLIP_EXIST(iLocal_3302))
	{
		func_373(iLocal_3302, iLocal_3239, 300f, 0.9f, 0);
	}
	if (iLocal_3198 == 0)
	{
		if (iLocal_3199 < 2)
		{
			PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), false);
		}
		func_372();
		func_340();
		if (iLocal_3419 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[20]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[20], false))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3138[20], true, true, false);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_3138[20]);
					iLocal_3419 = 1;
				}
			}
		}
		func_339();
		func_338();
		if (iLocal_3366 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
					{
						func_337(iLocal_3306, iLocal_3288, "BB_Chase", 1);
						iLocal_3366 = 1;
					}
				}
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
			{
				func_336(iLocal_3306, iLocal_3288, fLocal_3340);
				CAM::SET_CAM_FOV(iLocal_3306, 45f);
			}
		}
		if (iLocal_3354 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
				{
					if ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 15000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 125464f) && func_328(1, 0, 0))
					{
						iLocal_3369 = 1;
						if (iLocal_3454 == 0)
						{
							HUD::CLEAR_HELP(true);
							func_327("TRV4_HELP1", -1);
							func_320(1);
							func_237(&uLocal_45, 0, 0, 0);
							CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
							iLocal_3354 = 1;
						}
					}
				}
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3310) && func_213(1, "BB_Chase"))
				{
					if (((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 15000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 125464f) && iLocal_3454 == 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						func_298();
					}
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 125464f || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (iLocal_3353)
						{
							HUD::CLEAR_HELP(true);
							func_253(0, 1, 1, 0);
							CAM::SET_CAM_ACTIVE(iLocal_3306, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							HUD::DISPLAY_RADAR(true);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
							}
							AUDIO::STOP_SOUND(iLocal_3236);
							func_273();
							AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
							iLocal_3382[2] = 0;
							iLocal_3353 = 0;
						}
					}
				}
			}
		}
		switch (iLocal_3199)
		{
			case 0:
				if (iLocal_3588[0] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 44255f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1187.3f, -2847.8f, 13.6f, true) < 100f)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 2f, 3);
								iLocal_3588[0] = 1;
							}
						}
					}
				}
				if (iLocal_3588[1] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 52875f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1349f, -2720f, 14f, true) < 50f)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 2f, 3);
								iLocal_3588[1] = 1;
							}
						}
					}
				}
				if (iLocal_3588[2] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 87085f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1507f, -2520f, 14f, true) < 70f)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 2f, 3);
								iLocal_3588[2] = 1;
							}
						}
					}
				}
				func_297();
				func_296();
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_PLANE_ON_FIRE"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 64280f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 72000f)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1149.6f, -2323.7f, 22.5f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 130f)
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 72500f)
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_JET_LANDING"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 78000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 85000f)
								{
									AUDIO::START_AUDIO_SCENE("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 85500f)
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 100000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 107000f)
								{
									AUDIO::START_AUDIO_SCENE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 107500f)
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 10000f)
							{
								func_295();
							}
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 30000f)
						{
							func_294(iLocal_3275, VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275));
						}
					}
				}
				if (iLocal_3457 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 22000f)
							{
								AUDIO::PREPARE_MUSIC_EVENT("TRV4_AIRPORT_ENTERED");
								iLocal_3457 = 1;
							}
						}
					}
				}
				else if (iLocal_3458 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -940.8253f, -2858.602f, 11.94482f, -1001.272f, -2823.764f, 21.00674f, 5.75f, false, true, 0))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("TRV4_AIRPORT_ENTERED");
						iLocal_3458 = 1;
					}
				}
				if (iLocal_3360 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
					{
						if (func_16(iLocal_3275, PLAYER::PLAYER_PED_ID(), 1) < 170f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3275))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_3304))
							{
								HUD::REMOVE_BLIP(&iLocal_3304);
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_DRIVE_TO_AIRPORT"))
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_MAIN_CHASE"))
							{
								AUDIO::START_AUDIO_SCENE("SOL_3_MAIN_CHASE");
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_3302))
							{
								if (!PED::IS_PED_INJURED(iLocal_3239))
								{
									iLocal_3302 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_3239);
									HUD::SET_BLIP_AS_FRIENDLY(iLocal_3302, true);
								}
							}
							HUD::CLEAR_GPS_MULTI_ROUTE();
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								func_20("TRV4_CHASE2", 7500, 1);
								func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
								AUDIO::TRIGGER_MUSIC_EVENT("TRV4_CHASE");
								iLocal_3360 = 1;
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -536.0366f, -2102.793f, 5.672412f, -464.5755f, -2165.133f, 14.75182f, 65.25f, false, true, 0))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_3304))
						{
							HUD::REMOVE_BLIP(&iLocal_3304);
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_3302))
						{
							if (!PED::IS_PED_INJURED(iLocal_3239))
							{
								iLocal_3302 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_3239);
								HUD::SET_BLIP_AS_FRIENDLY(iLocal_3302, true);
							}
						}
						HUD::CLEAR_GPS_MULTI_ROUTE();
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							func_20("TRV4_CHASE2", 7500, 1);
							func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							AUDIO::TRIGGER_MUSIC_EVENT("TRV4_CHASE");
							iLocal_3360 = 1;
						}
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 15000f)
						{
						}
					}
				}
				if (iLocal_3345 == 0)
				{
					STREAMING::REQUEST_MODEL(joaat("jet"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 18490f)
								{
									iLocal_3277[1] = VEHICLE::CREATE_VEHICLE(joaat("jet"), -441.3117f, -3435.736f, 409.9454f, 148.3975f, true, true, false);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3277[1], 2, "BB_Chase", true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
									iLocal_3345 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3277[1]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3277[1], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3277[1]))
						{
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3277[1], fLocal_3340);
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3277[1]) > 20000f)
							{
								if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3277[1], 1) > 200f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3277[1]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3277[1]);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271[1]))
									{
										PED::DELETE_PED(&(iLocal_3271[1]));
									}
									VEHICLE::DELETE_VEHICLE(&(iLocal_3277[1]));
									iLocal_3224 = MISC::GET_GAME_TIMER() + 1000;
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3277[1]))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3277[1]) > 31543f)
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3277[1]);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_3277[1], true);
								}
							}
						}
						else if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3277[1], 1) > 200f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3277[1]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271[1]))
							{
								PED::DELETE_PED(&(iLocal_3271[1]));
							}
							VEHICLE::DELETE_VEHICLE(&(iLocal_3277[1]));
							iLocal_3224 = MISC::GET_GAME_TIMER() + 1000;
						}
					}
				}
				if (iLocal_3504 == 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3282))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 23000f)
								{
									STREAMING::REQUEST_MODEL(joaat("tanker"));
									if (STREAMING::HAS_MODEL_LOADED(joaat("tanker")))
									{
										iLocal_3282 = VEHICLE::CREATE_VEHICLE(joaat("tanker"), -1325f, -2779f, 14f, 233.9563f, true, true, false);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tanker"));
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_3282, 57, 57);
										iLocal_3504 = 1;
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[1]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[1], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[1]))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3138[1]) > 13000f)
							{
								if (iLocal_3394 == 0)
								{
									fLocal_1190[1] = 0.5f;
									iLocal_3262 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3138[1], -1, false);
									iLocal_3394 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3351 == 0)
				{
					STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(-1325f, -2779f, 14f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[1]))
					{
						if (iLocal_3380 == 0)
						{
							VEHICLE::SET_VEHICLE_COLOURS(iLocal_3138[1], 57, 57);
							iLocal_3380 = 1;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3282))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3138[1], false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_3282, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[1]))
									{
										VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_3138[1], iLocal_3282, 1f);
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3282))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 41430f)
									{
										ENTITY::DETACH_ENTITY(iLocal_3282, true, true);
										iLocal_3351 = 1;
									}
								}
							}
						}
					}
				}
				else if (iLocal_3397 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[1], false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 42700f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3262))
									{
										if (!PED::IS_PED_INJURED(iLocal_3262))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_3262, 0, 0, 0);
										}
									}
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[1]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[1]);
										iLocal_3397 = 1;
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
						{
							if (iLocal_3568 == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 38000f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[1], false))
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_4_747_Tanker_Horn", iLocal_3138[1], 0, false, 0);
										iLocal_3568 = 1;
									}
								}
							}
							if (iLocal_3382[1] == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 39000f)
								{
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_TANKER_CRASH"))
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_EVENT_TANKER_CRASH");
									}
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										ENTITY::SET_ENTITY_PROOFS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, true, true, false, false, false, false, false);
									}
									iLocal_3382[1] = 1;
								}
							}
							if (iLocal_3452 == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 41611f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3282))
									{
										if (!ENTITY::IS_ENTITY_DEAD(iLocal_3282, false))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[7]))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_3138[7], false))
												{
													AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_4_747_Tanker_Explosion", iLocal_3282, 0, false, 0);
													VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[7]);
													VEHICLE::EXPLODE_VEHICLE(iLocal_3138[7], true, false);
													VEHICLE::EXPLODE_VEHICLE(iLocal_3282, true, false);
													FIRE::ADD_EXPLOSION(-1221f, -2852f, 17f, 14, 1f, true, false, 1f, false);
													FIRE::ADD_EXPLOSION(-1212f, -2855f, 14.34f, 14, 1f, true, false, 1f, false);
													ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3282);
													ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3138[1]));
													iLocal_3452 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_3386[1] == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 43204f)
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_TANKER_CRASH"))
									{
										AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_TANKER_CRASH");
									}
									AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										ENTITY::SET_ENTITY_PROOFS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, false, false, false, false, false, false, false);
									}
									iLocal_3386[1] = 1;
								}
							}
						}
					}
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_HELI_TAKEOFF"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 36000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 40000f)
										{
											AUDIO::START_AUDIO_SCENE("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[0], false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 43204f)
									{
										AUDIO::STOP_AUDIO_SCENE("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_3344 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 60500f)
							{
								STREAMING::REQUEST_MODEL(joaat("jet"));
							}
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 66500f)
							{
								if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
								{
									iLocal_3277[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), -1119.072f, -1864.548f, -8.2205f, 148.3975f, true, true, false);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3277[0], true, 0);
									VEHICLE::SET_VEHICLE_LIVERY(iLocal_3277[0], 2);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3277[0], 35, "BB_Chase", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3277[0], 3491f);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
									iLocal_3344 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3277[0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3277[0], false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3277[0]))
								{
									VEHICLE::SET_PLAYBACK_SPEED(iLocal_3277[0], fLocal_3340);
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 80000f)
									{
										if (func_16(iLocal_3277[0], PLAYER::PLAYER_PED_ID(), 1) > 200f)
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3277[0]);
										}
									}
								}
								else if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 80000f)
								{
									if (func_16(iLocal_3277[0], PLAYER::PLAYER_PED_ID(), 1) > 200f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3277[0]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271[0]))
										{
											PED::DELETE_PED(&(iLocal_3271[0]));
										}
										VEHICLE::DELETE_VEHICLE(&(iLocal_3277[0]));
										iLocal_3224 = MISC::GET_GAME_TIMER() + 1000;
									}
								}
							}
						}
					}
				}
				if (iLocal_3416 == 0)
				{
					if (iLocal_3415 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 50000f)
									{
										STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
										STREAMING::REQUEST_ANIM_DICT("misstrevor4");
										if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker")))
										{
											iLocal_3263 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -1170.541f, -2507.111f, 12.9455f, 218.3035f, true, true);
											iLocal_3264 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -1168.264f, -2508.715f, 12.9455f, 70.7735f, true, true);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3263, true);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3264, true);
											STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_airworker"));
											iLocal_3415 = 1;
										}
									}
								}
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 58000f)
								{
									if (!PED::IS_PED_INJURED(iLocal_3263))
									{
										if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor4"))
										{
											if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3263, "misstrevor4", "dive_clear_goon1", 3))
											{
												TASK::TASK_PLAY_ANIM(iLocal_3263, "misstrevor4", "dive_clear_goon1", 8f, -8f, -1, 0, 0f, false, false, false);
											}
										}
									}
									if (!PED::IS_PED_INJURED(iLocal_3264))
									{
										if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor4"))
										{
											if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3264, "misstrevor4", "dive_clear_goon2", 3))
											{
												TASK::TASK_PLAY_ANIM(iLocal_3264, "misstrevor4", "dive_clear_goon2", 8f, -8f, -1, 0, 0f, false, false, false);
											}
										}
									}
									iLocal_3416 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3263))
				{
					if (!PED::IS_PED_INJURED(iLocal_3263))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3263, "misstrevor4", "dive_clear_goon1", 3))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3264))
							{
								if (!PED::IS_PED_INJURED(iLocal_3264))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3264, "misstrevor4", "dive_clear_goon2", 3))
									{
										STREAMING::REMOVE_ANIM_DICT("misstrevor4");
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3263);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3264);
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[8]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[8], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[8]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 50200f)
										{
											if (iLocal_3347 == 0)
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_3138[8], 1f);
												if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3138[8], 1) < 100f)
												{
													MISC::SET_TIME_SCALE(0.3f);
													iLocal_3390 = 0;
													if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
													{
														AUDIO::START_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
													}
													CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_3138[8], 0f, 0f, 0f, true, 1500, 500, 100);
												}
												ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3138[8], true, 1);
												VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_3138[8], 1, false);
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3230, "Trevor_4_747_Flying_Car", iLocal_3138[8], 0, false, 0);
												SYSTEM::SETTIMERB(0);
												iLocal_3347 = 1;
											}
										}
										if (iLocal_3347 == 1)
										{
											if (SYSTEM::TIMERB() > 662)
											{
												if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
												{
													AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
												}
												MISC::SET_TIME_SCALE(1f);
												iLocal_3390 = 1;
											}
											if (SYSTEM::TIMERB() > 1872)
											{
												VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[8]);
											}
										}
									}
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 50200f)
									{
										if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_3138[8]))
										{
											if (iLocal_3402 == 0)
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3230, "Trevor_4_747_Carsplosion", iLocal_3138[8], 0, false, 0);
												VEHICLE::EXPLODE_VEHICLE(iLocal_3138[8], true, false);
												iLocal_3402 = 1;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_3390 == 0)
					{
						if (iLocal_3347 == 1)
						{
							if (SYSTEM::TIMERB() > 662)
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
								{
									AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
								}
								MISC::SET_TIME_SCALE(1f);
								iLocal_3390 = 1;
							}
						}
					}
				}
				else if (iLocal_3390 == 0)
				{
					if (iLocal_3347 == 1)
					{
						if (SYSTEM::TIMERB() > 662)
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
							}
							MISC::SET_TIME_SCALE(1f);
							iLocal_3390 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[11]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[11], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[11]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 82683f)
										{
											if (iLocal_3348 == 0)
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3232, "Trevor_4_747_Flying_Car", iLocal_3138[11], 0, false, 0);
												iLocal_3348 = 1;
												SYSTEM::SETTIMERB(0);
											}
											if (iLocal_3348 == 1)
											{
												if (SYSTEM::TIMERB() > 1872)
												{
													if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_3138[11]))
													{
														VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[11]);
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_3348 == 1)
						{
							if (iLocal_3403 == 0)
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_3138[11]))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3232, "Trevor_4_747_Carsplosion", iLocal_3138[11], 0, false, 0);
									VEHICLE::EXPLODE_VEHICLE(iLocal_3138[11], true, false);
									iLocal_3403 = 1;
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[12]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[12], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[12]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 82463f)
										{
											if (iLocal_3349 == 0)
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3233, "Trevor_4_747_Flying_Car", iLocal_3138[12], 0, false, 0);
												iLocal_3349 = 1;
												SYSTEM::SETTIMERB(0);
											}
											if (iLocal_3349 == 1)
											{
												if (SYSTEM::TIMERB() > 1000)
												{
													if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_3138[12]))
													{
														VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[12]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_3558 == 0)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[12]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3138[12]) > 22216f && func_16(iLocal_3276, iLocal_3138[12], 1) < 90f)
									{
										MISC::SET_TIME_SCALE(0.3f);
										CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_3138[12], 0f, 0f, 0f, true, 2000, 1000, 500);
										iLocal_3220 = MISC::GET_GAME_TIMER();
										iLocal_3558 = 1;
									}
								}
							}
						}
						else if (iLocal_3349 == 1)
						{
							if (iLocal_3404 == 0)
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_3138[12]))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3233, "Trevor_4_747_Carsplosion", iLocal_3138[12], 0, false, 0);
									VEHICLE::EXPLODE_VEHICLE(iLocal_3138[12], true, false);
									iLocal_3404 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3558 == 1)
				{
				}
				if (iLocal_3557 == 0 && iLocal_3558 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[12]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[12], false))
						{
							Local_3332 = { ENTITY::GET_ENTITY_COORDS(iLocal_3138[12], true) };
						}
					}
					Local_3335 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					if (MISC::GET_GAME_TIMER() > iLocal_3220 + 1579 || Local_3335.f_1 < Local_3332.f_1)
					{
						MISC::SET_TIME_SCALE(1f);
						CAM::STOP_GAMEPLAY_HINT(false);
						iLocal_3557 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 105000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 113000f)
							{
								STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(-1172.3f, -3027.5f, 13.3f);
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[13]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[13], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[13]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 108830f)
										{
											VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_3138[13], false);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3138[13], true, 1);
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3138[13], false);
											SYSTEM::SETTIMERA(0);
											iLocal_3503 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_3503 == 1)
						{
							ENTITY::SET_ENTITY_HEALTH(iLocal_3138[13], 0, 0, 0);
							VEHICLE::SET_VEHICLE_UNDRIVEABLE(iLocal_3138[13], true);
							ENTITY::SET_ENTITY_HEALTH(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3138[13], -1, false), 0, 0, 0);
						}
					}
				}
				if (iLocal_3495 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[5]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[5], false))
						{
							VEHICLE::SET_VEHICLE_LIVERY(iLocal_3138[5], 0);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3138[5], true, 0);
							iLocal_3495 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[15]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[15], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[15]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 104989f)
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[15]);
											func_292(iLocal_3138[15], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 1);
											func_292(iLocal_3138[15], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 1);
											VEHICLE::EXPLODE_VEHICLE(iLocal_3138[15], true, false);
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
											AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_4_747_Carsplosion", iLocal_3138[15], 0, false, 0);
											AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 112000f)
							{
								TASK::REQUEST_WAYPOINT_RECORDING("BB_MOLLY_2");
								STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
								STREAMING::REQUEST_ANIM_DICT("move_f@film_reel_arms");
								iLocal_3199 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_3525 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, false, true, 0))
					{
						iLocal_3525 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3289[0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3289[0], false))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3289[0], 0f);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3289[0]));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3268[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_3268[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_3268[0]);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3268[0]));
					}
				}
				if (iLocal_3418 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 115000f)
								{
									TASK::REQUEST_WAYPOINT_RECORDING("Trev4_5");
									STREAMING::REQUEST_MODEL(joaat("prop_cs_film_reel_01"));
									if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
									{
										STREAMING::NEW_LOAD_SCENE_START_SPHERE(-930.7f, -2916.9f, 13.4f, 10f, 0);
									}
									iLocal_3418 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3454 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 120000f)
								{
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ARRIVE_AT_HANGAR"))
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_ARRIVE_AT_HANGAR");
									}
									VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_3275);
								}
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 125513f)
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3275);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_3275, true);
									func_291();
									PED::CLEAR_PED_NON_CREATION_AREA();
									PATHFIND::SET_PED_PATHS_IN_AREA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, true, 0);
									AUDIO::STOP_AUDIO_SCENE("TREVOR_4_MAIN_CHASE");
									if (!CAM::DOES_CAM_EXIST(iLocal_3308))
									{
										iLocal_3308 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
									}
									if (!CAM::DOES_CAM_EXIST(iLocal_3307))
									{
										iLocal_3307 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
									}
									iLocal_3211 = MISC::GET_GAME_TIMER();
									CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
									MISC::SET_INSTANCE_PRIORITY_HINT(0);
									iLocal_3199 = 2;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				Local_3335 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_3275);
				if (iLocal_3525 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, false, true, 0))
					{
						iLocal_3525 = 1;
					}
				}
				if (iLocal_3454 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_3335, -930.7f, -2916.9f, 13.4f, true) < 45f)
					{
						iLocal_3199 = 3;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3275))
						{
							if (iLocal_3525 == 1)
							{
								iLocal_3199 = 3;
							}
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_3211 + 5000 && iLocal_3525 == 1)
					{
						iLocal_3199 = 3;
					}
				}
				break;
			
			case 3:
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_3275);
				if (!PED::IS_PED_INJURED(iLocal_3239))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3239, "misssolomon_3", "molly_escapes_car_mol", 3))
					{
					}
				}
				if (iLocal_3483 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3"))
								{
									if (!PED::IS_PED_INJURED(iLocal_3239))
									{
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3300))
										{
											if (STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_film_reel_01")))
											{
												iLocal_3300 = OBJECT::CREATE_OBJECT(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, true, true, false);
												ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3300, iLocal_3239, PED::GET_PED_BONE_INDEX(iLocal_3239, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
											}
										}
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3239, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											ENTITY::FREEZE_ENTITY_POSITION(iLocal_3275, false);
											iLocal_3225 = PED::CREATE_SYNCHRONIZED_SCENE(-929.492f, -2913.472f, 14.16f, 0f, 0f, -28.96f, 2);
											ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3275, iLocal_3225, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3239, iLocal_3225, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1000f, 0);
											PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_3225, false);
											AUDIO::TRIGGER_MUSIC_EVENT("TRV4_EXIT_CARS");
										}
										else
										{
											iLocal_3483 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3485 == 0)
				{
					if (iLocal_3483 == 1)
					{
						if (!PED::IS_PED_INJURED(iLocal_3239))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_3239, -937.6656f, -2927.864f, 12.77007f, -934.8479f, -2929.484f, 14.46523f, 1.5f, false, true, 0))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3239, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3239, -1000f, true);
								}
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_3239);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3239, true);
								ENTITY::SET_ENTITY_COORDS(iLocal_3239, -934.8388f, -2932.831f, 12.9649f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_3239, 236.5739f);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_3239, "BB_MOLLY_2", 1, 4, -1);
								if (STREAMING::HAS_ANIM_DICT_LOADED("move_f@film_reel_arms"))
								{
									TASK::TASK_PLAY_ANIM(iLocal_3239, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0f, false, false, false);
								}
								iLocal_3485 = 1;
							}
						}
					}
				}
				if (iLocal_3454 == 0)
				{
					if (iLocal_3493 == 0)
					{
						if (iLocal_3492 == 0)
						{
							if (!PED::IS_PED_INJURED(iLocal_3239))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3239, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) > 0.18f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -930.7f, -2916.9f, 13.4f, true) < 10f)
									{
										iLocal_3200 = 0;
										iLocal_3492 = 1;
									}
								}
							}
						}
						while (iLocal_3492 == 1)
						{
							RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_LegalTrouble", 0);
							switch (iLocal_3200)
							{
								case 0:
									CAM::SET_CAM_PARAMS(iLocal_3308, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294743f, 28.05799f, 34.66404f, 0, 1, 1, 2);
									CAM::SET_CAM_PARAMS(iLocal_3307, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294742f, 32.59915f, 34.66404f, 0, 1, 1, 2);
									CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_3307, iLocal_3308, 4000, 1, 1);
									HUD::DISPLAY_RADAR(false);
									HUD::DISPLAY_HUD(false);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3288))
									{
										VEHICLE::DELETE_VEHICLE(&iLocal_3288);
									}
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -918.6157f, -2926.646f, 12.9667f, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 47.9465f);
									}
									else
									{
										ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -918.6157f, -2926.646f, 12.9667f, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 47.9465f);
									}
									if (!PED::IS_PED_INJURED(iLocal_3239))
									{
										func_17(&uLocal_3595, 2, iLocal_3239, "MOLLY", 0, 1);
										PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_3239, true);
									}
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 0f, 3);
									RECORDING::REPLAY_START_EVENT(4);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									iLocal_3546 = 0;
									iLocal_3200++;
									break;
								
								case 1:
									if (!PED::IS_PED_INJURED(iLocal_3239))
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3239, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if (iLocal_3546 == 0)
											{
												if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) > 0.3f)
												{
													if (func_290(&uLocal_3595, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0))
													{
														RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 7f, 4);
														iLocal_3546 = 1;
													}
												}
											}
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) > 0.5f)
											{
												CAM::SET_CAM_PARAMS(iLocal_3308, -926.0932f, -2916.891f, 14.47074f, -3.471637f, 1.294743f, 125.8315f, 34.66404f, 0, 1, 1, 2);
												CAM::SET_CAM_PARAMS(iLocal_3307, -926.0932f, -2916.891f, 14.47074f, -3.471636f, 1.294743f, 135.4584f, 34.66404f, 0, 1, 1, 2);
												CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_3307, iLocal_3308, 4000, 1, 1);
												iLocal_3223 = MISC::GET_GAME_TIMER();
												iLocal_3200++;
											}
										}
									}
									break;
								
								case 2:
									if (!PED::IS_PED_INJURED(iLocal_3239))
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3239, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if ((iLocal_3223 != -1 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4) && (MISC::GET_GAME_TIMER() - iLocal_3223) >= 2230)
											{
												GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
												AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
												iLocal_3223 = -1;
											}
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3225) > 0.85f)
											{
												HUD::DISPLAY_HUD(true);
												HUD::DISPLAY_RADAR(true);
												CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
												CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
												iLocal_3237 = 346732587;
												OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3237, joaat("v_ilev_ss_door5_r"), -935.641f, -2927.185f, 14.0945f, true, true, false, 0);
												OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3237, 1f, false, true);
												PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
												if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
												{
													TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0);
													if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
													{
														PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
													}
												}
												PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_3239, false);
												RECORDING::REPLAY_STOP_EVENT();
												RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 4f, 3);
												iLocal_3212 = MISC::GET_GAME_TIMER();
												iLocal_3492 = 0;
												iLocal_3493 = 1;
												iLocal_3200++;
											}
										}
									}
									break;
							}
							SYSTEM::WAIT(0);
						}
					}
				}
				if (iLocal_3493 == 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3237, 5, false, true);
					if (iLocal_3569 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
						{
							if (!PED::IS_PED_INJURED(iLocal_3239))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_3239, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, false, true, 0))
								{
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f, 13.2f, 0, false, 0, false);
									iLocal_3569 = 1;
								}
							}
						}
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_MAIN_CHASE"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_MAIN_CHASE");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ARRIVE_AT_HANGAR"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_ARRIVE_AT_HANGAR");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ON_FOOT_CHASE"))
					{
						AUDIO::START_AUDIO_SCENE("SOL_3_ON_FOOT_CHASE");
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_275();
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -929.7908f, -2928.213f, 12.19499f, -935.7283f, -2924.685f, 15.44832f, 4.75f, false, true, 1))
				{
					if (iLocal_3485 == 0)
					{
						if (!PED::IS_PED_INJURED(iLocal_3239))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3239, "misssolomon_3", "molly_escapes_car_mol", 3))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3239, -1000f, true);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_3239);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3239, true);
							ENTITY::SET_ENTITY_COORDS(iLocal_3239, -934.8388f, -2932.831f, 12.9649f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_3239, 236.5739f);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_3239, "BB_MOLLY_2", 1, 4, -1);
							if (STREAMING::HAS_ANIM_DICT_LOADED("move_f@film_reel_arms"))
							{
								TASK::TASK_PLAY_ANIM(iLocal_3239, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0f, false, false, false);
							}
							iLocal_3485 = 1;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_3283);
					}
					iLocal_3198 = 0;
					iLocal_3200 = 0;
					iLocal_3197 = 5;
				}
				break;
			}
	}
}

void func_275()
{
	if (iLocal_3450 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[14]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[14], false))
			{
				iLocal_3265 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3138[14], -1, false);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_3265, joaat("weapon_pistol"), 1000, true, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3265, true, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3265, true);
				PED::SET_PED_ACCURACY(iLocal_3265, 5);
				ENTITY::SET_ENTITY_HEALTH(iLocal_3265, 150, 0, 0);
				func_17(&uLocal_3595, 3, iLocal_3265, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_3450 = 1;
	}
	else if (iLocal_3449 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
		{
			if (!PED::IS_PED_INJURED(iLocal_3265))
			{
				TASK::CLEAR_PED_TASKS(iLocal_3265);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_3265, ENTITY::GET_ENTITY_COORDS(iLocal_3265, true), 5f, false, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_3309);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 5000, true);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_3309);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_3265, iLocal_3309);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_3309);
				iLocal_3449 = 1;
			}
		}
	}
	else if (iLocal_3506 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
		{
			if (!PED::IS_PED_INJURED(iLocal_3265))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_3265, false) && func_13(PLAYER::PLAYER_PED_ID(), iLocal_3265) < 20f)
				{
					if (!func_289())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							func_17(&uLocal_3595, 4, iLocal_3265, "SOL3COP", 0, 1);
							if (func_276(&uLocal_3595, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0))
							{
								iLocal_3506 = 1;
							}
						}
					}
				}
			}
		}
	}
}

bool func_276(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_288(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_23030 = 0;
	Global_23037 = 0;
	Global_23032 = 0;
	Global_24014 = 1;
	Global_24016 = 0;
	Global_24020 = 0;
	StringCopy(&Global_24027, sParam3, 24);
	Global_2883585 = 0;
	return func_277(sParam2, iParam4, 0);
}

int func_277(char* sParam0, int iParam1, bool bParam2)
{
	Global_23024 = 0;
	if (Global_23023 == 0 || Global_23025 == 2)
	{
		if (Global_23023 != 0)
		{
			if (iParam1 > Global_23025)
			{
				if (Global_23030 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21649.f_1 = 3;
					Global_23023 = 0;
					Global_23024 = 1;
					Global_23076 = 0;
					Global_23019 = 0;
					Global_23020 = 0;
					Global_23034 = 0;
					Global_23033 = 0;
					Global_21648 = 0;
				}
				else
				{
					func_242();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_287(8, -1))
		{
			return 0;
		}
		Global_23099 = { Global_23093 };
		func_286();
		Global_22312 = { Global_22477 };
		Global_23029 = Global_23030;
		Global_23036 = Global_23037;
		Global_2883586 = Global_2883585;
		Global_23038 = { Global_23054 };
		Global_23031 = Global_23032;
		Global_24013 = Global_24014;
		Global_24021 = { Global_24027 };
		Global_24015 = Global_24016;
		Global_24017 = Global_24018;
		Global_24019 = Global_24020;
		Global_22642.f_370 = Global_24012;
		Global_22642.f_368 = Global_24010;
		Global_22642.f_369 = Global_24011;
		Global_23019 = Global_23020;
		if (Global_23029)
		{
			MISC::CLEAR_BIT(&Global_9502, 20);
			MISC::CLEAR_BIT(&Global_9503, 17);
			MISC::CLEAR_BIT(&Global_9504, false);
			if (bParam2)
			{
				func_285();
				if (Global_10324[Global_21649 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_21649.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_21615 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_284())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_80337)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_254())
			{
				return 0;
			}
			else
			{
				switch (Global_21649.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_9502, 9))
				{
					return 0;
				}
			}
			func_283();
			Global_23033 = bParam2;
		}
		Global_23025 = iParam1;
		StringCopy(&Global_22642, sParam0, 24);
		Global_21889 = 0;
		func_282();
		func_278();
		return 1;
	}
	if (Global_23023 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_23025 || iParam1 == Global_23025)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_242();
	}
	return 0;
}

void func_278()
{
	if (!func_279())
	{
		return;
	}
	if (Global_23029)
	{
		MemCopy(&(Global_1979099.f_1), {Global_22642}, 4);
		Global_1979099 = Global_8817;
		Global_1979099.f_6 = Global_23033;
	}
}

int func_279()
{
	if (!Global_262145.f_28486)
	{
		return 0;
	}
	if (!Global_80337)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_97())
	{
		return 0;
	}
	if (func_280(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1892925[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

int func_280(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_281(8))
		{
			return 1;
		}
		if (Global_2733190.f_5975.f_1 > 0)
		{
			return 1;
		}
	}
	return func_182(iParam0, 20);
}

bool func_281(int iParam0)
{
	return BitTest(Global_2733190.f_5964, iParam0);
}

void func_282()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21891[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_23023 = 1;
}

void func_283()
{
	Global_23076 = Global_23075;
	Global_23070 = Global_23071;
	Global_23117 = { Global_23105 };
	Global_23123 = { Global_23111 };
	Global_23078 = Global_23077;
	Global_23147 = { Global_23129 };
	Global_23153 = { Global_23135 };
	Global_23159 = { Global_23141 };
	Global_23165 = { Global_23171 };
	Global_8817 = Global_8818;
	Global_8819 = Global_8820;
	Global_23034 = Global_23035;
	Global_23036 = Global_23037;
	Global_23038 = { Global_23054 };
	Global_23027 = Global_23028;
	Global_24039 = 0;
	Global_23072 = 0;
	Global_23073 = 0;
	MISC::CLEAR_BIT(&Global_9503, 16);
}

int func_284()
{
	int iVar0;
	int iVar1;
	
	if (Global_80337)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_285()
{
	if (func_61(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114963.f_28060[0 /*29*/])
			{
				Global_21649 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114963.f_28060[1 /*29*/])
			{
				Global_21649 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114963.f_28060[2 /*29*/])
			{
				Global_21649 = 2;
			}
			else
			{
				Global_21649 = 0;
			}
		}
	}
	else
	{
		Global_21649 = func_116();
		if (Global_21649 == 145)
		{
			Global_21649 = 3;
		}
		if (Global_80337)
		{
			Global_21649 = 3;
		}
		if (Global_21649 > 3)
		{
			Global_21649 = 3;
		}
	}
}

void func_286()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_22312[iVar0 /*10*/] = 0;
		StringCopy(&(Global_22312[iVar0 /*10*/].f_1), "", 24);
		Global_22312[iVar0 /*10*/].f_7 = 0;
		Global_22312[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_22312.f_161 = -99;
	Global_22312.f_162 = { 0f, 0f, 0f };
}

bool func_287(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1677555.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1677555.f_1048, iParam0);
}

void func_288(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_22477 = { *uParam0 };
	Global_8818 = iParam1;
	StringCopy(&Global_23093, sParam2, 24);
	Global_24012 = iParam5;
	if (iParam3 == 0)
	{
		Global_24010 = 1;
		Global_24008 = 0;
	}
	else
	{
		Global_24010 = 0;
		Global_24008 = 1;
	}
	if (iParam4 == 0)
	{
		Global_24011 = 1;
		Global_24009 = 0;
	}
	else
	{
		Global_24011 = 0;
		Global_24009 = 1;
	}
}

int func_289()
{
	if (Global_23023 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_290(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_288(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_23030 = 0;
	Global_23032 = 0;
	Global_23037 = 0;
	Global_24014 = 0;
	Global_24016 = 0;
	Global_24020 = 0;
	Global_2883585 = 0;
	return func_277(sParam2, iParam3, 0);
}

void func_291()
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3772[0]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3772[0], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3772[1]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3772[1], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3772[2]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3772[2], false);
	}
	if (iLocal_3405 == 1)
	{
		AUDIO::RELEASE_SOUND_ID(iLocal_3234);
		iLocal_3413 = 0;
	}
}

void func_292(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7, bool bParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
		}
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if (bParam8)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Param1) };
		}
		else
		{
			Var0 = { Param1 };
		}
		Var6 = { func_293(Var0 - Var3) };
		Var6 = { Var6 * Vector(fParam7, fParam7, fParam7) };
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 3, Var6, Param4, 0, false, true, true, false, true);
	}
}

Vector3 func_293(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_294(int iParam0, float fParam1)
{
	int iVar0;
	struct<3> Var1;
	
	if (iLocal_1973 < 15)
	{
		if (iLocal_1973 == 0)
		{
			Local_2673 = { 99999.9f, 99999.9f, 99999.9f };
			Local_2676 = { -99999.9f, -99999.9f, -99999.9f };
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
				Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, (fParam1 + (SYSTEM::TO_FLOAT((iLocal_1973 - 1)) * 2000f))) };
				if (Var1.f_0 < Local_2673.f_0)
				{
					Local_2673.f_0 = Var1.f_0;
				}
				if (Var1.f_1 < Local_2673.f_1)
				{
					Local_2673.f_1 = Var1.f_1;
				}
				if (Var1.f_2 < Local_2673.f_2)
				{
					Local_2673.f_2 = Var1.f_2;
				}
				if (Var1.f_0 > Local_2676.f_0)
				{
					Local_2676.f_0 = Var1.f_0;
				}
				if (Var1.f_1 > Local_2676.f_1)
				{
					Local_2676.f_1 = Var1.f_1;
				}
				if (Var1.f_2 > Local_2676.f_2)
				{
					Local_2676.f_2 = Var1.f_2;
				}
			}
		}
		iLocal_1973++;
	}
	else if (!bLocal_123)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, 1);
		Local_2673 = { Local_2673 + Vector((fLocal_1310 * -1f), (fLocal_1310 * -1f), (fLocal_1310 * -1f)) };
		Local_2676 = { Local_2676 + Vector(fLocal_1310, fLocal_1310, fLocal_1310) };
		Local_2667 = { Local_2673 };
		Local_2670 = { Local_2676 };
		PATHFIND::SET_ROADS_IN_AREA(Local_2667, Local_2670, false, false);
		iLocal_1973 = 0;
	}
}

void func_295()
{
	iLocal_106 = 1;
}

void func_296()
{
	if (iLocal_3350 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 55000f)
				{
					STREAMING::REQUEST_MODEL(joaat("firetruk"));
					STREAMING::REQUEST_MODEL(joaat("s_m_y_fireman_01"));
					STREAMING::REQUEST_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
					if ((STREAMING::HAS_MODEL_LOADED(joaat("firetruk")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_fireman_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency3aig_lift_waitped_a"))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3281))
						{
							MISC::CLEAR_AREA(-1129.566f, -2319.888f, 12.9445f, 10f, false, false, false, false);
							iLocal_3281 = VEHICLE::CREATE_VEHICLE(joaat("firetruk"), -1129.566f, -2319.888f, 12.9445f, 16.5423f, true, true, false);
						}
						iLocal_3772[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1f, false, false, false, false);
						if (iLocal_3405 == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3234, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0, false, 0, false);
							iLocal_3405 = 1;
						}
						iLocal_3772[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1f, false, false, false, false);
						iLocal_3772[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1f, false, false, false, false);
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3240[0]))
						{
							iLocal_3240[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3281, 21, joaat("s_m_y_fireman_01"), -1, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3240[0], true);
							PED::SET_PED_KEEP_TASK(iLocal_3240[0], true);
							TASK::TASK_VEHICLE_SHOOT_AT_COORD(iLocal_3240[0], -1147.07f, -2320.65f, 18.93f, 20f);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3240[1]))
						{
							iLocal_3240[1] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), -1138.313f, -2313.277f, 12.9445f, 155.4271f, true, true);
							TASK::TASK_PLAY_ANIM(iLocal_3240[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, 0f, false, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3240[1], true);
							PED::SET_PED_KEEP_TASK(iLocal_3240[1], true);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3240[2]))
						{
							iLocal_3240[2] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), -1145.362f, -2309.387f, 12.9445f, 96.0786f, true, true);
							TASK::TASK_PLAY_ANIM(iLocal_3240[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, 0f, false, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3240[2], true);
							PED::SET_PED_KEEP_TASK(iLocal_3240[2], true);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3240[3]))
						{
							iLocal_3240[3] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), -1147.461f, -2314.511f, 13.1518f, 57.8707f, true, true);
							TASK::TASK_PLAY_ANIM(iLocal_3240[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, 0f, false, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3240[3], true);
							PED::SET_PED_KEEP_TASK(iLocal_3240[3], true);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_fireman_01"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("firetruk"));
						iLocal_3350 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3350 == 1)
	{
		if (iLocal_3560[0] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3240[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_3240[1]))
				{
					if (iLocal_3564[0] == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3240[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							iLocal_3564[0] = 1;
						}
					}
					if (iLocal_3564[0] == 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3240[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							TASK::TASK_COWER(iLocal_3240[1], -1);
							PED::SET_PED_KEEP_TASK(iLocal_3240[1], true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3240[1], false);
							iLocal_3560[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3560[1] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3240[2]))
			{
				if (!PED::IS_PED_INJURED(iLocal_3240[2]))
				{
					if (iLocal_3564[1] == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3240[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							iLocal_3564[1] = 1;
						}
					}
					if (iLocal_3564[1] == 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3240[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							TASK::TASK_COWER(iLocal_3240[2], -1);
							PED::SET_PED_KEEP_TASK(iLocal_3240[2], true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3240[2], false);
							iLocal_3560[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3560[2] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3240[3]))
			{
				if (!PED::IS_PED_INJURED(iLocal_3240[3]))
				{
					if (iLocal_3564[2] == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3240[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							iLocal_3564[2] = 1;
						}
					}
					if (iLocal_3564[2] == 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3240[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							TASK::TASK_COWER(iLocal_3240[3], -1);
							PED::SET_PED_KEEP_TASK(iLocal_3240[3], true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3240[3], false);
							iLocal_3560[2] = 1;
						}
					}
				}
			}
		}
	}
}

void func_297()
{
	if (iLocal_3451 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "BB_AIChase");
		if (STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 15500f)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						iLocal_3289[0] = VEHICLE::CREATE_VEHICLE(joaat("police3"), -847.2593f, -2379.987f, 15.9304f, 196.4921f, true, true, false);
						iLocal_3268[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3289[0], 6, joaat("s_m_y_cop_01"), -1, true, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3268[0], true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3289[0], "SOL_3_POLICE_CARS_Group", 0f);
						func_136(iLocal_3268[0], 0);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3289[0], true, true, false);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3289[0], 1, "BB_AIChase", true);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_3268[0], joaat("weapon_pistol"), 1000, true, true);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_3289[0], true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
						iLocal_3451 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3451 == 1)
	{
		if (iLocal_3497[0] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3289[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3289[0], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3289[0]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3289[0], fLocal_3340);
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3289[0]) > 13000f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3289[0]);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3268[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_3268[0]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3268[0], true);
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								TASK::TASK_VEHICLE_CHASE(iLocal_3268[0], PLAYER::PLAYER_PED_ID());
								PED::SET_PED_KEEP_TASK(iLocal_3268[0], true);
							}
							else
							{
								TASK::TASK_COMBAT_PED(iLocal_3268[0], PLAYER::PLAYER_PED_ID(), 0, 16);
								PED::SET_PED_KEEP_TASK(iLocal_3268[0], true);
							}
							VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_AIChase");
							iLocal_3213 = MISC::GET_GAME_TIMER();
							iLocal_3497[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3500[0] == 0)
		{
			if (iLocal_3497[0] == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3213 + 500)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3268[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_3268[0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(iLocal_3268[0], 16, true);
								TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(iLocal_3268[0], 1, true);
								iLocal_3500[0] = 1;
							}
							else
							{
								iLocal_3500[0] = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_298()
{
	if (!iLocal_3352)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[20], false))
		{
			iLocal_3306 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
			CAM::SET_CAM_ACTIVE(iLocal_3306, true);
			iLocal_3353 = 0;
			iLocal_3352 = 1;
		}
	}
	else if (func_313(&uLocal_45, 1, 0, 0) && iLocal_3454 == 0)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_289())
		{
			HUD::CLEAR_PRINTS();
			func_239();
		}
		if (iLocal_3382[2] == 0)
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
			{
				AUDIO::START_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
			}
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_3236, "Trevor_4_747_TV", 0, true);
			iLocal_3382[2] = 1;
		}
		func_304(1, 1, 30, 5, 0);
		if (iLocal_3371 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3310, "SET_TEXT");
			func_303("TRV4_NEWS1");
			func_303("");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_3371 = 1;
		}
		if (iLocal_3372 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3310, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			func_303("TRV4_NEWS2");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3310, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			func_303("TRV4_NEWS6");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3310, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
			func_303("TRV4_NEWS7");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3310, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
			func_303("TRV4_NEWS8");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3310, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
			func_303("TRV4_NEWS9");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3310, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(4f);
			func_303("TRV4_NEWS10");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3310, "DISPLAY_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_3218 = (MISC::GET_GAME_TIMER() - 5000);
			iLocal_3372 = 1;
		}
		if (MISC::GET_GAME_TIMER() > iLocal_3218 + 5000)
		{
			func_302();
			iLocal_3218 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_3373 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 25000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 50000f)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3310, "SET_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						func_303("TRV4_NEWS5");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3310, "DISPLAY_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_3373 = 1;
					}
				}
			}
		}
		if (iLocal_3374 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 77600f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 115000f)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3310, "SET_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
						func_303("TRV4_NEWS3");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3310, "DISPLAY_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_3374 = 1;
					}
				}
			}
		}
		if (iLocal_3375 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 115000f)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3310, "SET_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
						func_303("TRV4_NEWS4");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3310, "DISPLAY_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_3375 = 1;
					}
				}
			}
		}
		HUD::SET_TEXT_RENDER_ID(iLocal_3201);
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_3310, 255, 255, 255, 0, 0);
		if (iLocal_3353 == 0)
		{
			func_253(1, 1, 1, 0);
			CAM::SHAKE_CAM(iLocal_3306, "ROAD_VIBRATION_SHAKE", 1f);
			CAM::SET_CAM_ACTIVE(iLocal_3306, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(false);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			func_301();
			iLocal_3353 = 1;
		}
		func_299();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		PAD::DISABLE_CONTROL_ACTION(0, 85, true);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
	}
	else if (iLocal_3353)
	{
		func_253(0, 1, 1, 0);
		CAM::SET_CAM_ACTIVE(iLocal_3306, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		HUD::DISPLAY_RADAR(true);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
		}
		AUDIO::STOP_SOUND(iLocal_3236);
		func_273();
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
		iLocal_3382[2] = 0;
		iLocal_3353 = 0;
	}
}

void func_299()
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_300();
}

void func_300()
{
	Global_24430.f_134 = 1;
}

void func_301()
{
	Global_65070 = 1;
}

void func_302()
{
	if (iLocal_3203 > 4)
	{
		iLocal_3203 = 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3310, "DISPLAY_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_3203);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_3203++;
}

void func_303(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_304(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_312())
	{
		func_312();
	}
	else if (bParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_67 <= 225 && iLocal_61 == 0)
			{
				iLocal_67 += 30;
				if (iLocal_67 >= 225)
				{
					iLocal_61 = 1;
				}
			}
			else if (iLocal_67 >= 30)
			{
				iLocal_67 = (iLocal_67 - 30);
				if (iLocal_67 <= 30)
				{
					iLocal_61 = 0;
				}
			}
		}
		func_311(1, 200);
		if (iLocal_65 <= iParam2 && iLocal_60 == 0)
		{
			iLocal_65++;
			func_308(1, iLocal_65);
			if (iLocal_65 == iParam2)
			{
				iLocal_60 = 1;
				iLocal_66 = MISC::GET_RANDOM_INT_IN_RANGE(iParam3, iParam2);
			}
		}
		else if (iLocal_65 > 0)
		{
			if (iLocal_65 > iLocal_66)
			{
				iLocal_65 = (iLocal_65 - 1);
				func_308(1, iLocal_65);
				if (iLocal_65 == iLocal_66)
				{
					iLocal_60 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_305(1, 40, 1, 1, 1);
		}
	}
}

void func_305(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_312())
	{
		func_312();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_307(0))
			{
				func_306(0);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz1", 0.5f, fLocal_68, 1f, 0.2f, 0f, 255, 255, 255, iParam1, false, 0);
			}
			if (fLocal_68 < 1f)
			{
				fLocal_68 = (fLocal_68 + 0.01f);
			}
			else
			{
				fLocal_68 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_307(1))
			{
				func_306(1);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz2", 0.5f, fLocal_69, 1f, 0.2f, 0f, 255, 255, 255, iParam1, false, 0);
			}
			if (fLocal_69 < 1f)
			{
				fLocal_69 = (fLocal_69 + 0.02f);
			}
			else
			{
				fLocal_69 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_307(2))
			{
				func_306(2);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz3", 0.5f, fLocal_70, 1f, 0.2f, 0f, 255, 255, 255, iParam1, false, 0);
			}
			if (fLocal_70 < 1f)
			{
				fLocal_70 = (fLocal_70 + 0.028f);
			}
			else
			{
				fLocal_70 = 0f;
			}
		}
	}
}

void func_306(bool bParam0)
{
	if (bParam0 < 32)
	{
		MISC::SET_BIT(&uLocal_71, bParam0);
	}
}

int func_307(bool bParam0)
{
	if (BitTest(uLocal_71, bParam0))
	{
		return 1;
	}
	return 0;
}

void func_308(bool bParam0, int iParam1)
{
	if (!func_312())
	{
		func_312();
	}
	else if (bParam0)
	{
		iLocal_63 = func_310(5);
		iLocal_62 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		while (iLocal_64 == iLocal_63)
		{
			iLocal_63 = func_310(5);
		}
		if (iLocal_63 == 0)
		{
			if (!func_307(3))
			{
				func_306(3);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * func_309(bLocal_57)), (1f * func_309(bLocal_58)), 0f, 255, 255, 255, iParam1, false, 0);
			}
		}
		if (iLocal_63 == 1)
		{
			if (!func_307(4))
			{
				func_306(4);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * func_309(bLocal_57)), (1f * func_309(bLocal_58)), 0f, 255, 255, 255, iParam1, false, 0);
			}
		}
		if (iLocal_63 == 2)
		{
			if (!func_307(5))
			{
				func_306(5);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * func_309(bLocal_57)), (1f * func_309(bLocal_58)), 0f, 255, 255, 255, iParam1, false, 0);
			}
		}
		if (iLocal_63 == 3)
		{
			if (!func_307(6))
			{
				func_306(6);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * func_309(bLocal_57)), (1f * func_309(bLocal_58)), 0f, 255, 255, 255, iParam1, false, 0);
			}
		}
		if (iLocal_63 == 4)
		{
			if (!func_307(7))
			{
				func_306(7);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * func_309(bLocal_57)), (1f * func_309(bLocal_58)), 0f, 255, 255, 255, iParam1, false, 0);
			}
		}
	}
}

float func_309(bool bParam0)
{
	if (bParam0)
	{
		return -1f;
	}
	else
	{
		return 1f;
	}
	return 1f;
}

int func_310(int iParam0)
{
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 50) > 25)
	{
		bLocal_57 = true;
	}
	else
	{
		bLocal_57 = false;
	}
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 50) > 25)
	{
		bLocal_58 = true;
	}
	else
	{
		bLocal_58 = false;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, iParam0);
}

void func_311(bool bParam0, int iParam1)
{
	if (!func_312())
	{
		func_312();
	}
	else if (bParam0)
	{
		if (iLocal_59)
		{
			if (!func_307(8))
			{
				func_306(8);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, iParam1, false, 0);
			}
			iLocal_59 = 0;
		}
		else
		{
			if (!func_307(8))
			{
				func_306(8);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, iParam1, false, 0);
			}
			iLocal_59 = 1;
		}
	}
}

int func_312()
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("digitalOverlay", false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("digitalOverlay"))
	{
		return 1;
	}
	return 0;
}

int func_313(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_319(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_318(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_318(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_319(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_317(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_319(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_318(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_318(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_319(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (!func_319(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_318(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_318(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_319(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (func_316(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_315(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_315(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_316(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_317(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_328(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_314();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_314()
{
	MISC::SET_BIT(&Global_9503, 4);
}

int func_315(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_328(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_316(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_328(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_317(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_318(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_328(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_117)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_319(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_328(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_117)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_320(bool bParam0)
{
	if (bParam0)
	{
		func_326();
		if (Global_21649.f_1 == 10 || Global_21649.f_1 == 9)
		{
			MISC::SET_BIT(&Global_9503, 16);
		}
		Global_21649.f_1 = 1;
		if (func_325(0))
		{
			func_321(0);
		}
	}
	else if (Global_21649.f_1 == 1)
	{
		if (!Global_21649.f_1 == 0)
		{
			Global_21649.f_1 = 3;
		}
	}
}

void func_321(int iParam0)
{
	if (func_324())
	{
		return;
	}
	if (Global_21882)
	{
		if (func_323())
		{
			func_322(1, 1);
		}
		else
		{
			func_322(0, 0);
		}
	}
	if (Global_21649.f_1 == 10 || Global_21649.f_1 == 9)
	{
		MISC::SET_BIT(&Global_9503, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_23023 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_9502, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9502, 30);
	}
	if (!func_254())
	{
		Global_21649.f_1 = 3;
	}
}

void func_322(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_325(0))
		{
			Global_21882 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21586);
			}
			Global_21577 = { Global_21595[Global_21594 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21577);
		}
	}
	else if (Global_21882 == 1)
	{
		Global_21882 = 0;
		Global_21577 = { Global_21602[Global_21594 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21586);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21577);
		}
	}
}

bool func_323()
{
	return BitTest(Global_1964670, 5);
}

bool func_324()
{
	return BitTest(Global_1964670, 19);
}

int func_325(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_21649.f_1 > 3)
		{
			if (BitTest(Global_9502, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_21649.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_326()
{
	if (Global_21649.f_1 == 9 || Global_21649.f_1 == 10)
	{
		Global_23076 = 0;
		Global_23072 = 1;
	}
}

void func_327(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_328(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_325(0))
	{
		return 0;
	}
	if (func_335())
	{
		return 0;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 0;
	}
	if (Global_77397)
	{
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_62244)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_334() || func_333(Global_4718592.f_197291)) || func_332())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_331(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_330(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1963699)
	{
		return 0;
	}
	if (func_329(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_329(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_208(iParam0, 1, 1))
		{
			return Global_2658293[iParam0 /*468*/].f_325.f_8 != -1;
		}
		else if ((Global_1575095 && iParam0 == PLAYER::PLAYER_ID()) && func_208(iParam0, 1, 0))
		{
			return Global_2658293[iParam0 /*468*/].f_325.f_8 != -1;
		}
	}
	return 0;
}

int func_330(int iParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_331(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_332()
{
	return Global_2685152.f_20;
}

bool func_333(int iParam0)
{
	return iParam0 == 51;
}

var func_334()
{
	return Global_2685152.f_19;
}

bool func_335()
{
	return MISC::GET_GAME_TIMER() <= Global_24569.f_6481 + 100;
}

void func_336(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1))
		{
			VEHICLE::SET_PLAYBACK_SPEED(iParam1, fParam2);
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
			Var3 = { ENTITY::GET_ENTITY_ROTATION(iParam1, 2) };
			CAM::SET_CAM_COORD(iParam0, Var0);
			CAM::SET_CAM_ROT(iParam0, Var3, 2);
		}
	}
}

void func_337(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true, 0);
		ENTITY::SET_ENTITY_PROOFS(iParam1, true, true, true, true, true, false, false, false);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam1, iParam3, sParam2, true);
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		CAM::SET_CAM_COORD(iParam0, Var0);
		CAM::SET_CAM_ROT(iParam0, ENTITY::GET_ENTITY_ROTATION(iParam1, 2), 2);
	}
}

void func_338()
{
	if (iLocal_3235 != -1)
	{
		if (iLocal_3406 == 1)
		{
			if (iLocal_3398 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_3235);
				iLocal_3408 = 0;
				iLocal_3398 = 1;
			}
		}
	}
	if (iLocal_3230 != -1)
	{
		if (iLocal_3402 == 1)
		{
			if (iLocal_3400 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_3230);
				iLocal_3409 = 0;
				iLocal_3400 = 1;
			}
		}
	}
	if (iLocal_3231 != -1)
	{
		if (iLocal_3407 == 1)
		{
			if (iLocal_3389 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_3231);
				iLocal_3410 = 0;
				iLocal_3389 = 1;
			}
		}
	}
	if (iLocal_3232 != -1)
	{
		if (iLocal_3403 == 1)
		{
			if (iLocal_3399 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_3232);
				iLocal_3411 = 0;
				iLocal_3399 = 1;
			}
		}
	}
	if (iLocal_3233 != -1)
	{
		if (iLocal_3404 == 1)
		{
			if (iLocal_3401 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_3233);
				iLocal_3412 = 0;
				iLocal_3401 = 1;
			}
		}
	}
}

void func_339()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[19]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3138[19], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3138[19]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3138[19], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[7]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3138[7], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3138[7]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3138[7], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[8]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3138[8], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3138[8]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3138[8], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[9]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3138[9], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3138[9]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3138[9], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[10]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3138[10], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3138[10]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3138[10], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[11]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3138[11], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3138[11]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3138[11], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[13]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3138[13], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3138[13]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3138[13], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[14]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3138[14], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3138[14]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3138[14], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[15]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3138[15], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3138[15]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3138[15], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[16]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3138[16], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3138[16]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3138[16], true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[17]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3138[17], false))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3138[17]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3138[17], true);
			}
		}
	}
}

void func_340()
{
	if (func_371())
	{
		fLocal_3341 = 0.5f;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 40f)
		{
			fLocal_3341 = 0.85f;
		}
		else
		{
			fLocal_3341 = 0.9f;
		}
	}
	else
	{
		fLocal_3341 = 0.9f;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3275, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
			{
				if (iLocal_3376 == 0)
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 10000f)
					{
						if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3275, 1) < 100f || ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3275))
						{
							func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 40f, 55f, 100f, 1.7f, 1f, fLocal_3341, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
							func_341(iLocal_3275, fLocal_3340);
						}
						else
						{
							func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 0.6f, 40f, 50f, 60f, 1.7f, 1f, fLocal_3341, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
							func_341(iLocal_3275, fLocal_3340);
						}
					}
				}
				else if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3275, 1) > 175f)
				{
					fLocal_3340 = 0.6f;
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
					func_341(iLocal_3275, fLocal_3340);
				}
				else if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 10000f)
				{
					func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 25f, 40f, 180f, 1.7f, 1f, fLocal_3341, 0);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
					func_341(iLocal_3275, fLocal_3340);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 10000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 23000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[8], false))
					{
						func_367(iLocal_3138[8], PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 25f, 30f, 50f, 1.7f, 0.5f, fLocal_3341, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
						func_341(iLocal_3275, fLocal_3340);
					}
					else
					{
						func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 25f, 35f, 180f, 1.7f, 0.5f, fLocal_3341, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
						func_341(iLocal_3275, fLocal_3340);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 23000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 32000f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[7]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[7], false))
						{
							func_367(iLocal_3138[7], PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 20f, 30f, 100f, 1.8f, 1f, fLocal_3341, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
							func_341(iLocal_3275, fLocal_3340);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[8]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[8], false))
							{
								func_367(iLocal_3138[8], PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3341, 0);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
								func_341(iLocal_3275, fLocal_3340);
							}
							else
							{
								func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3341, 0);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
								func_341(iLocal_3275, fLocal_3340);
							}
						}
						else
						{
							func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3341, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
							func_341(iLocal_3275, fLocal_3340);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[8]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[8], false))
						{
							func_367(iLocal_3138[8], PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3341, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
							func_341(iLocal_3275, fLocal_3340);
						}
						else
						{
							func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3341, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
							func_341(iLocal_3275, fLocal_3340);
						}
					}
					else
					{
						func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3341, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
						func_341(iLocal_3275, fLocal_3340);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 32000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 39000f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[7]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[7], false))
						{
							func_367(iLocal_3138[7], PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 22f, 25f, 100f, 1.8f, 0.5f, fLocal_3341, 1);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
							func_341(iLocal_3275, fLocal_3340);
						}
						else
						{
							func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3341, 1);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
							func_341(iLocal_3275, fLocal_3340);
						}
					}
					else
					{
						func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3341, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
						func_341(iLocal_3275, fLocal_3340);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 39000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 56000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[8], false))
					{
						func_367(iLocal_3138[8], PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3341, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
						func_341(iLocal_3275, fLocal_3340);
					}
					else
					{
						func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 25f, 35f, 150f, 1.8f, 1f, fLocal_3341, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
						func_341(iLocal_3275, fLocal_3340);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 56000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 65000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[11], false))
					{
						func_367(iLocal_3138[11], PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 25f, 30f, 100f, 1.8f, 1f, fLocal_3341, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
						func_341(iLocal_3275, fLocal_3340);
					}
					else
					{
						func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 25f, 35f, 100f, 1.8f, 1f, fLocal_3341, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
						func_341(iLocal_3275, fLocal_3340);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 65000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 90000f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[13]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[13], false))
						{
							func_367(iLocal_3138[13], PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 30f, 35f, 50f, 1.8f, 1f, fLocal_3341, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
							func_341(iLocal_3275, fLocal_3340);
						}
						else
						{
							func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3341, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
							func_341(iLocal_3275, fLocal_3340);
						}
					}
					else
					{
						func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3341, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
						func_341(iLocal_3275, fLocal_3340);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 90000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 110000f)
				{
					func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 60f, 70f, 150f, 1.5f, 0.5f, fLocal_3341, 1);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
					func_341(iLocal_3275, fLocal_3340);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 110000f)
				{
					func_367(iLocal_3275, PLAYER::PLAYER_PED_ID(), &fLocal_3340, 1f, 100f, 120f, 150f, 1.6f, 1f, fLocal_3341, 0);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3275, fLocal_3340);
					func_341(iLocal_3275, fLocal_3340);
				}
			}
		}
	}
}

void func_341(int iParam0, float fParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_123 = false;
	if (!bLocal_105)
	{
		if (bLocal_104)
		{
			func_366();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_105 = true;
		}
	}
	else if (!bLocal_104)
	{
		func_236();
		bLocal_105 = false;
	}
	if (bLocal_104)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_98)
	{
		if (iLocal_93)
		{
			fLocal_1295 = 0f;
		}
		else
		{
			fLocal_1295 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (func_365(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_103 = 1;
					}
					else
					{
						iLocal_103 = 0;
					}
				}
				fLocal_1292 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_1293) * fLocal_1295));
				if (bLocal_102)
				{
					func_364(iParam0, fLocal_1292);
					func_363(iParam0, fLocal_1302);
					if (fLocal_1297 > 1000f)
					{
						if (iLocal_1979 == 0)
						{
							func_362(iParam0, fLocal_1302);
						}
						fVar0 = ((fLocal_1292 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_1979) * 2000f));
						func_361(iParam0, fVar0, fLocal_1296);
						iLocal_1979++;
						if (iLocal_1979 > 2)
						{
							fLocal_1297 = 0f;
						}
					}
					else
					{
						iLocal_1979 = 0;
						fLocal_1297 = (fLocal_1297 + (MISC::GET_FRAME_TIME() * 1000f));
					}
				}
			}
		}
		iVar4 = 0;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				iVar4 = 1;
			}
		}
		if (fLocal_1292 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_110)
		{
			if (!iLocal_92)
			{
				func_358(iParam0, ((fParam1 * fLocal_1293) * fLocal_1295), 0);
				if (!iLocal_113)
				{
				}
				iLocal_113 = 0;
			}
			if (bLocal_95)
			{
				func_357(iParam0);
			}
			if (!iLocal_92)
			{
				func_344(iParam0, ((fParam1 * fLocal_1293) * fLocal_1295), 0);
			}
		}
		if (iLocal_100)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_3181 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_2658 = { ENTITY::GET_ENTITY_COORDS(iLocal_3181, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_3181, &fLocal_1006, &fLocal_1007, &fLocal_1008, &fLocal_1009);
				}
			}
			iLocal_100 = 0;
		}
		if (iLocal_99)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3181))
			{
				func_228(iLocal_3182);
				iLocal_3182 = iLocal_3181;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3182, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_3182, Local_2658, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_3182, fLocal_1006, fLocal_1007, fLocal_1008, fLocal_1009);
			}
			fLocal_1291 = fLocal_1294;
			iLocal_92 = 1;
			iLocal_99 = 0;
		}
		if (iLocal_92)
		{
			while (!func_342(&iParam0, fLocal_1291))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_93 = 1;
		}
		if (iLocal_106)
		{
			iLocal_106 = 0;
		}
	}
}

int func_342(int iParam0, float fParam1)
{
	if (!iLocal_107)
	{
		iLocal_92 = 1;
		func_223();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_1966 == -1)
			{
				while (!func_343(iParam0, iLocal_1966, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_97)
				{
					iLocal_93 = 1;
					fLocal_1295 = 0f;
					iLocal_1967 = 0;
					iLocal_1969 = 0;
					iLocal_1968 = 0;
					iLocal_1963 = 0;
					iLocal_1964 = 0;
					iLocal_1965 = 0;
					iLocal_1970 = 0;
					iLocal_1971 = 0;
					iLocal_1972 = 0;
				}
			}
		}
		iLocal_107 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_1293) * fLocal_1295));
				func_343(iParam0, iLocal_1966, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1292 = fParam1;
		iLocal_1973 = 0;
		iLocal_1976 = 0;
		fLocal_1307 = 0f;
		fLocal_1306 = 0f;
		func_344(*iParam0, ((1f * fLocal_1293) * fLocal_1295), 1);
		func_358(*iParam0, ((1f * fLocal_1293) * fLocal_1295), 1);
		func_357(*iParam0);
		if ((iLocal_1970 == 0 && iLocal_1971 == 0) && iLocal_1972 == 0)
		{
			iLocal_93 = 0;
			iLocal_92 = 0;
			iLocal_107 = 0;
			return 1;
		}
	}
	return 0;
}

int func_343(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2685);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_2685))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_2685, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1974 && iParam1 != iLocal_1975)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2685, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2685, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2685, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2685, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_2685))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2685);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_2685, 10f, 786603);
					}
					else if (iParam1 != iLocal_1974 && iParam1 != iLocal_1975)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2685, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2685, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2685, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2685, true);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_344(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	float fVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	
	bVar15 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	bVar16 = PED::CAN_CREATE_RANDOM_DRIVER();
	bVar17 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	bVar18 = false;
	if (bVar15)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		Var9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = iLocal_1969;
		while (iVar0 < 35)
		{
			if (iLocal_1875[iVar0] != 99)
			{
				if (iLocal_1875[iVar0] == 0)
				{
					if (iLocal_1839[iVar0] > 0)
					{
						if (!iLocal_92)
						{
							if (fLocal_1292 > (fLocal_1154[iVar0] - (7000f * fParam1)))
							{
								if (func_356(iLocal_2894[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1911[iVar0]), false);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2894[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1911[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_1911[iVar0]), true);
								iLocal_1875[iVar0]++;
								iLocal_1971++;
							}
						}
						else
						{
							fVar12 = (fLocal_1292 - fLocal_1154[iVar0]);
							fVar12 = (fVar12 * fLocal_1190[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_355(iLocal_1839[iVar0]))
								{
									if (func_356(iLocal_2894[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1911[iVar0]), false);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2894[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1911[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1911[iVar0]), true);
									iLocal_1875[iVar0]++;
									iLocal_1971++;
								}
								else
								{
									iLocal_1875[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1875[iVar0] = 99;
					}
				}
				else if (iLocal_1875[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1839[iVar0], &cLocal_2685);
					if (BitTest(iLocal_1911[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(func_232());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_232());
					}
					else if (!bLocal_119 && ((!BitTest(iLocal_1911[iVar0], 2) && bVar16) || (BitTest(iLocal_1911[iVar0], 2) && bVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_235());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_235());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3138[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2894[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2894[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1839[iVar0], &cLocal_2685))
							{
								if (fLocal_1292 >= (fLocal_1154[iVar0] - (fLocal_1305 * fParam1)))
								{
									if ((iLocal_106 || bParam2) || (!bLocal_123 && !func_354(Local_2552[iVar0 /*3*/], Var9, 5f, fLocal_1303)))
									{
										if (bLocal_102)
										{
											func_353(Local_2552[iVar0 /*3*/], Var9, fLocal_1296);
										}
										iLocal_3138[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2894[iVar0], Local_2552[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_2894[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_3138[iVar0], 0);
										}
										if (uLocal_115 && !BitTest(iLocal_1911[iVar0], 0))
										{
											func_352(iLocal_3138[iVar0]);
										}
										if (BitTest(iLocal_1911[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3138[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3138[iVar0], Local_2552[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_3138[iVar0], fLocal_1010[iVar0], fLocal_1046[iVar0], fLocal_1082[iVar0], fLocal_1118[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2894[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2894[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3138[iVar0], 5f);
										}
										if (!BitTest(iLocal_1911[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3138[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3138[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_3138[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2894[iVar0]);
										iLocal_1971 = (iLocal_1971 - 1);
										iLocal_1875[iVar0]++;
										bLocal_123 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_3138[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3138[iVar0], Local_2552[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_3138[iVar0], fLocal_1010[iVar0], fLocal_1046[iVar0], fLocal_1082[iVar0], fLocal_1118[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2894[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2894[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3138[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3138[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2894[iVar0]);
							iLocal_1971 = (iLocal_1971 - 1);
							iLocal_1875[iVar0]++;
						}
					}
				}
				else if (iLocal_1875[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1839[iVar0], &cLocal_2685);
					if (!BitTest(iLocal_1911[iVar0], 1))
					{
						bVar14 = false;
						if (BitTest(iLocal_1911[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(func_232());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_232());
							iVar19 = 2;
						}
						else if (!bLocal_119 && ((!BitTest(iLocal_1911[iVar0], 2) && bVar16) || (BitTest(iLocal_1911[iVar0], 2) && bVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_235());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_235());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_3138[iVar0], false))
						{
							if (!bLocal_123 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_3138[iVar0], -1, false))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_3138[iVar0], true), Var9) < 10000f || bParam2) || iLocal_106)
									{
										func_350(&(iLocal_3138[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_1911[iVar0]), true);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[iVar0], false))
					{
						if (fLocal_1292 >= fLocal_1154[iVar0])
						{
							if (14 > iLocal_1964)
							{
								fVar12 = (fLocal_1292 - fLocal_1154[iVar0]);
								fVar12 = (fVar12 * fLocal_1190[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1839[iVar0], &cLocal_2685))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1839[iVar0], &cLocal_2685))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_3138[iVar0], true) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1839[iVar0], fVar12, &cLocal_2685) };
										if (((!func_354(Var3, Var9, 5f, fLocal_1303) && func_354(Var6, Var9, 5f, fLocal_1303)) && !iLocal_106) && !bParam2)
										{
											if (!BitTest(iLocal_1911[iVar0], 1))
											{
												func_350(&(iLocal_3138[iVar0]), iVar19, 1);
											}
											iLocal_1964++;
											iLocal_1875[iVar0]++;
										}
										else if (((!bLocal_123 || BitTest(iLocal_1911[iVar0], 1)) || iLocal_106) || bParam2)
										{
											if (func_343(&(iLocal_3138[iVar0]), iLocal_1839[iVar0], fVar12, 1, 0, 0, bLocal_121, bLocal_120))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_3138[iVar0], (fParam1 * fLocal_1190[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[iVar0], false))
												{
													if (BitTest(iLocal_1911[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3138[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_3138[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3138[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2894[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_3138[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_1911[iVar0], 1))
												{
													func_350(&(iLocal_3138[iVar0]), iVar19, 1);
												}
												iLocal_1964++;
												iLocal_1875[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_1911[iVar0], 1))
										{
											func_350(&(iLocal_3138[iVar0]), iVar19, 1);
										}
										iLocal_1964++;
										iLocal_1875[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_1911[iVar0], 1))
								{
									func_350(&(iLocal_3138[iVar0]), iVar19, 1);
								}
								iLocal_1964++;
								iLocal_1875[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_1911[iVar0], 1))
						{
							func_350(&(iLocal_3138[iVar0]), iVar19, 1);
						}
						iLocal_1964++;
						iLocal_1875[iVar0]++;
					}
				}
				else if (iLocal_1875[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3138[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_96 && !iLocal_93) && !bLocal_112) && (((!bLocal_121 && !bLocal_120) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3138[iVar0])) || func_349(iLocal_3138[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (bLocal_114)
											{
												bVar14 = true;
											}
											else
											{
												fVar13 = ENTITY::GET_ENTITY_SPEED(iVar2);
												if (fVar13 < 1f)
												{
													bVar14 = true;
												}
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_3138[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!func_348(iLocal_3138[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (func_346(iVar2, iLocal_3138[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_345(iLocal_3138[iVar0]);
												iLocal_1875[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_3138[iVar0], (fParam1 * fLocal_1190[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[iVar0]);
							}
						}
						else
						{
							iLocal_1875[iVar0]++;
						}
					}
					else
					{
						iLocal_1875[iVar0]++;
					}
				}
				else if (iLocal_1875[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[iVar0]))
						{
							iLocal_1875[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3138[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_3138[iVar0], (fParam1 * fLocal_1190[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1839[iVar0], &cLocal_2685))
							{
								if (fLocal_1292 > (fLocal_1154[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1839[iVar0], &cLocal_2685)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1875[iVar0]++;
					}
				}
				else if (iLocal_1875[iVar0] == 5)
				{
					if (!iLocal_3138[iVar0] == iLocal_3183)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3138[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("script_task_perform_sequence"));
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_3138[iVar0]);
									if (fVar13 < 8f)
									{
										fVar13 = 8f;
									}
									if (fVar13 > 62.9f)
									{
										fVar13 = 62.9f;
									}
									TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar1, fVar13);
								}
							}
						}
						if (!bLocal_104 && !bLocal_117)
						{
							if (iLocal_1839[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1839[iVar0], &cLocal_2685);
							}
						}
						if (!bLocal_94)
						{
							if (!bLocal_122)
							{
								func_228(iLocal_3138[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_3138[iVar0]));
						}
					}
					iLocal_1964 = (iLocal_1964 - 1);
					iLocal_1875[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1969 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_227();
	}
}

void func_345(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_229(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_346(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		if (bParam2)
		{
			Var15 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
			Var12 = { Var15 / FtoV(SYSTEM::VMAG(Var15)) };
		}
		else
		{
			Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) };
			Var12 = { Var6 - Var3 };
		}
	}
	Var9 = { Var3 - Var0 };
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	if (func_347(Var9, Var12) < 0f)
	{
		return 1;
	}
	return 0;
}

float func_347(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_348(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, false) };
	}
	else
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, false) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var3.f_2 = 0f;
	fVar6 = func_347(Var0, Var3);
	if (fVar6 < 0f)
	{
		return 0;
	}
	fVar6 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1);
	if (!fVar6 < fParam2)
	{
		return 0;
	}
	return 1;
}

int func_349(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_118)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar1))
				{
					if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar1, &iVar0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_350(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, false))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, func_232(), -1, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_2701);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_232());
			}
			else if (iParam1 == 1)
			{
				iVar0 = PED::CREATE_RANDOM_PED_AS_DRIVER(*uParam0, true);
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
				{
					PED::GIVE_PED_HELMET(iVar0, true, 4096, -1);
				}
			}
			else
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_235(), -1, false, false);
				if (bLocal_124)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_235());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, false);
			}
			if (bLocal_125)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			func_351(iVar0);
			bLocal_123 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_351(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

void func_352(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_2931 >= -1 && iLocal_2932 >= -1)
	{
		while (iVar0 == iLocal_2931 || iVar0 == iLocal_2932)
		{
			iVar0++;
		}
	}
	else if (iLocal_2931 >= -1)
	{
		if (iVar0 == iLocal_2931)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 0, 0);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 2, 2);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 4, 4);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 27, 27);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 7, 7);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 68, 68);
			break;
		
		case 7:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 62, 62);
			break;
		
		case 8:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 132, 132);
			break;
		
		case 9:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 117, 0);
			break;
		
		case 10:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 52, 52);
			break;
		
		case 11:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 88, 88);
			break;
		
		case 12:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 1, 1);
			break;
		
		case 13:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 36, 36);
			break;
		
		case 14:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 95, 95);
			break;
		
		default:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
	}
}

void func_353(struct<3> Param0, struct<3> Param3, float fParam6)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_105)
	{
		if (!func_354(Param0, Param3, fParam6, 200f))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iVar1, Param0, fParam6, fParam6, fParam6, false, true, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Param0, fParam6, false, false, false, false, false, false, 0);
			}
		}
	}
}

int func_354(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_105)
		{
			if (!iLocal_92)
			{
				if (SYSTEM::VMAG2(Param3 - Param0) - fParam6) < (fParam7 * fParam7)
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam6))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_355(int iParam0)
{
	float fVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_2685);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_2685))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_2685);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_2685);
	return fVar0;
}

int func_356(int iParam0)
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return 1;
	}
	return 0;
}

void func_357(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	bool bVar7;
	bool bVar8;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		bVar7 = false;
		bVar8 = false;
		iVar0 = iLocal_1968;
		while (iVar0 < 15)
		{
			switch (iLocal_1947[iVar0])
			{
				case 0:
					if (!iLocal_2878[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_2506[iVar0 /*3*/], fLocal_1290, fLocal_1290, fLocal_1290, false, true, 0))
						{
							iLocal_1970++;
							iLocal_1947[iVar0]++;
						}
					}
					else
					{
						iLocal_1947[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_1965)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3122[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2878[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2878[iVar0]))
							{
								if ((iLocal_92 || iLocal_106) || (!bLocal_123 && !func_354(Local_2506[iVar0 /*3*/], Var1, 5f, fLocal_1303)))
								{
									if (bLocal_102)
									{
										func_353(Local_2506[iVar0 /*3*/], Var1, fLocal_1296);
									}
									iLocal_3122[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2878[iVar0], Local_2506[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_2878[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_3122[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_3122[iVar0], fLocal_1226[iVar0], fLocal_1242[iVar0], fLocal_1258[iVar0], fLocal_1274[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2878[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_3122[iVar0], func_233()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_3122[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2878[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_3122[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_3122[iVar0], func_234()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_3122[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3122[iVar0], true);
									iLocal_1970 = (iLocal_1970 - 1);
									iLocal_1965++;
									iLocal_1947[iVar0]++;
									bLocal_123 = true;
								}
							}
						}
						else
						{
							iLocal_1970 = (iLocal_1970 - 1);
							iLocal_1965++;
							iLocal_1947[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3122[iVar0], false))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_3122[iVar0], true) };
						}
						if (fLocal_1304 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_1304 * fLocal_1304))
						{
							if (!func_346(iLocal_3122[iVar0], iParam0, 0))
							{
								if (!bLocal_94)
								{
									func_228(iLocal_3122[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_3122[iVar0]));
								}
								iLocal_1965 = (iLocal_1965 - 1);
								iLocal_1947[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1947[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1968 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_230();
	}
}

void func_358(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	float fVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	bool bVar24;
	struct<3> Var25;
	
	iVar5 = 0;
	bVar18 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	bVar19 = PED::CAN_CREATE_RANDOM_DRIVER();
	bVar20 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	if (bVar18)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		Var12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	iVar1 = 0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fLocal_1292 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1967;
		while (iVar0 < 175 && !bVar23)
		{
			if (iLocal_1487[iVar0] != 99)
			{
				if (iLocal_1487[iVar0] == 0)
				{
					if (iLocal_1311[iVar0] > 0 && iLocal_2702[iVar0] != 0)
					{
						if (!iLocal_92)
						{
							if (fLocal_1292 < (fLocal_830[iVar0] + 20000f))
							{
								if (fLocal_1292 >= (fLocal_830[iVar0] - (7000f * fParam1)))
								{
									if (func_356(iLocal_2702[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1663[iVar0]), false);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2702[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1663[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1663[iVar0]), true);
									iLocal_1972++;
									iLocal_1487[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar23 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_360(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1292 - fLocal_830[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_355(iLocal_1311[iVar0]))
								{
									if (func_356(iLocal_2702[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1663[iVar0]), false);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2702[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1663[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1663[iVar0]), true);
									iLocal_1972++;
									iLocal_1487[iVar0]++;
								}
								else
								{
									func_360(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_360(iVar0, 1090519040);
					}
				}
				else if (iLocal_1487[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1311[iVar0], &cLocal_2685);
					bVar17 = false;
					if (BitTest(iLocal_1663[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(func_232());
						if (STREAMING::HAS_MODEL_LOADED(func_232()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_119 && ((!BitTest(iLocal_1663[iVar0], 2) && bVar19) || (BitTest(iLocal_1663[iVar0], 2) && bVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_235());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_235());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2933[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_2702[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_2702[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1311[iVar0], &cLocal_2685)) && bVar17)
						{
							if (fLocal_1292 >= (fLocal_830[iVar0] - (fLocal_1305 * fParam1)))
							{
								if ((iLocal_106 || iParam2) || (!bLocal_123 && !func_354(Local_1980[iVar0 /*3*/], Var12, 5f, fLocal_1303)))
								{
									if (bLocal_102)
									{
										func_353(Local_1980[iVar0 /*3*/], Var12, fLocal_1296);
									}
									iLocal_2933[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2702[iVar0], Local_1980[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_2702[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2933[iVar0], 0);
									}
									if (uLocal_115 && !BitTest(iLocal_1663[iVar0], 0))
									{
										func_352(iLocal_2933[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2933[iVar0], Local_1980[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2933[iVar0], fLocal_126[iVar0], fLocal_302[iVar0], fLocal_478[iVar0], fLocal_654[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2702[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2702[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2933[iVar0], 5f);
									}
									if (BitTest(iLocal_1663[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_2933[iVar0], true);
									}
									if (!BitTest(iLocal_1663[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2933[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2933[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2933[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2933[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2702[iVar0]);
									iLocal_1972 = (iLocal_1972 - 1);
									iLocal_1487[iVar0]++;
									bLocal_123 = true;
								}
								else if (fLocal_1292 > fLocal_830[iVar0])
								{
									iLocal_1972 = (iLocal_1972 - 1);
									func_360(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1487[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1978 || iLocal_1978 == 0)) || iLocal_106) || iParam2)
					{
						if (!BitTest(iLocal_1663[iVar0], 1))
						{
							if (BitTest(iLocal_1663[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(func_232());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_232());
								iVar21 = 2;
							}
							else if (!bLocal_119 && ((!BitTest(iLocal_1663[iVar0], 2) && bVar19) || (BitTest(iLocal_1663[iVar0], 2) && bVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_235());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_235());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933[iVar0], false))
							{
								if (!bLocal_123 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2933[iVar0], -1, false))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2933[iVar0], true), Var12) < 10000f || iParam2) || iLocal_106)
										{
											func_350(&(iLocal_2933[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_1663[iVar0]), true);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2933[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1311[iVar0], &cLocal_2685);
							if (fLocal_1292 >= fLocal_830[iVar0])
							{
								if (12 > iLocal_1963)
								{
									fVar15 = (fLocal_1292 - fLocal_830[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1311[iVar0], &cLocal_2685))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1311[iVar0], &cLocal_2685))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_2933[iVar0], true) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1311[iVar0], fVar15, &cLocal_2685) };
											if (!func_354(Var6, Var12, 5f, fLocal_1303) && func_354(Var9, Var12, 5f, fLocal_1303))
											{
												if (!BitTest(iLocal_1663[iVar0], 1))
												{
													func_350(&(iLocal_2933[iVar0]), iVar21, 0);
												}
												func_360(iVar0, 1090519040);
											}
											else if (((!bLocal_123 || BitTest(iLocal_1663[iVar0], 1)) || iLocal_106) || iParam2)
											{
												if (func_343(&(iLocal_2933[iVar0]), iLocal_1311[iVar0], fVar15, 1, 0, 0, 1, bLocal_120))
												{
													if (!BitTest(iLocal_1663[iVar0], 1))
													{
														func_350(&(iLocal_2933[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_2933[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_2933[iVar0], fParam1);
													iLocal_1963++;
													iLocal_1487[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_1663[iVar0], 1))
											{
												func_350(&(iLocal_2933[iVar0]), iVar21, 0);
											}
											func_360(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1311[iVar0], &cLocal_2685))
									{
										if (!BitTest(iLocal_1663[iVar0], 1))
										{
											func_350(&(iLocal_2933[iVar0]), iVar21, 0);
										}
										func_360(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_1663[iVar0], 1))
									{
										func_350(&(iLocal_2933[iVar0]), iVar21, 0);
									}
									func_360(iVar0, 1090519040);
								}
							}
							else if (iLocal_103 && !bLocal_111)
							{
								if (!BitTest(iLocal_1663[iVar0], 1))
								{
									func_350(&(iLocal_2933[iVar0]), iVar21, 0);
								}
								func_360(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_1663[iVar0], 1))
							{
								func_350(&(iLocal_2933[iVar0]), iVar21, 0);
							}
							func_360(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1978 = iVar0;
					}
				}
				else if (iLocal_1487[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2933[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2933[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2933[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_101)
									{
										if ((!bLocal_96 && !iLocal_93) && func_349(iLocal_2933[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1977 || iLocal_1977 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar17 = false;
													if (!func_359(iLocal_2933[iVar0], iVar5) || func_346(iVar5, iLocal_2933[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1977 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_116 && !BitTest(iLocal_1663[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1977 || iLocal_1977 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_2933[iVar0], true)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.f_0))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1977 = iVar0;
										}
									}
									if (bVar24)
									{
										func_345(iLocal_2933[iVar0]);
										iLocal_1487[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2933[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2933[iVar0]);
							}
						}
						else
						{
							iLocal_1487[iVar0]++;
						}
					}
					else
					{
						iLocal_1487[iVar0]++;
					}
				}
				else if (iLocal_1487[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2933[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2933[iVar0]))
						{
							iLocal_1487[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2933[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2933[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2933[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1311[iVar0], &cLocal_2685))
							{
								if (fLocal_1292 > (fLocal_830[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1311[iVar0], &cLocal_2685)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2933[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2933[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1487[iVar0]++;
					}
				}
				else if (iLocal_1487[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933[iVar0], false))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_2933[iVar0]);
					}
					iLocal_1963 = (iLocal_1963 - 1);
					func_360(iVar0, fVar16);
				}
				if (iVar22 == -1)
				{
					iVar22 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar22 != -1)
		{
			iLocal_1967 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1977 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1978 = 0;
		}
	}
	else
	{
		func_231();
	}
}

int func_359(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, false) };
	}
	else
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, false) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var3.f_2 = 0f;
	fVar6 = func_347(Var0, Var3);
	if (fVar6 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_360(int iParam0, float fParam1)
{
	int iVar0;
	
	if (!iLocal_2702[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2702[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933[iParam0], false))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_2933[iParam0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2933[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2933[iParam0], -1, false);
		if (!PED::IS_PED_INJURED(iVar0) && iVar0 != PLAYER::PLAYER_PED_ID())
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_2933[iParam0], 0, 1, fParam1, 786603, 5f, 5f, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
			if (bLocal_125)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_94)
	{
		if (!bLocal_122)
		{
			func_351(iVar0);
			func_228(iLocal_2933[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2933[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_2933[iParam0]));
		}
	}
	if (!bLocal_104 && !bLocal_117)
	{
		if (iLocal_1311[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1311[iParam0], &cLocal_2685);
		}
	}
	iLocal_1487[iParam0] = 99;
}

void func_361(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fParam1) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Var7 = { Var4 - Var1 };
			fVar13 = SYSTEM::VMAG(Var7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_353(Var1, Var10, fVar13);
		}
	}
}

void func_362(int iParam0, float fParam1)
{
	if (!bLocal_105)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (fParam1 * fParam1))
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
				}
				else
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				}
			}
		}
	}
}

void func_363(int iParam0, float fParam1)
{
	if (!bLocal_105)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (fParam1 * fParam1))
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				}
			}
		}
	}
}

void func_364(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_1306 + 2000f);
		fVar2 = (fLocal_1307 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_1973 == 0)
				{
					Local_2673 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_1306) };
					iLocal_1973++;
				}
				else if (iLocal_1973 == 1)
				{
					Local_2676 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_1973++;
				}
				else if (!bLocal_123)
				{
					if (Local_2673.f_0 > Local_2676.f_0)
					{
						fVar3 = Local_2673.f_0;
						Local_2673.f_0 = Local_2676.f_0;
						Local_2676.f_0 = fVar3;
					}
					if (Local_2673.f_1 > Local_2676.f_1)
					{
						fVar3 = Local_2673.f_1;
						Local_2673.f_1 = Local_2676.f_1;
						Local_2676.f_1 = fVar3;
					}
					if (Local_2673.f_2 > Local_2676.f_2)
					{
						fVar3 = Local_2673.f_2;
						Local_2673.f_2 = Local_2676.f_2;
						Local_2676.f_2 = fVar3;
					}
					Local_2673 = { Local_2673 - Vector(fLocal_1310, fLocal_1310, fLocal_1310) };
					Local_2676 = { Local_2676 + Vector(fLocal_1310, fLocal_1310, fLocal_1310) };
					PATHFIND::SET_ROADS_IN_AREA(Local_2673, Local_2676, false, false);
					fLocal_1306 = fVar1;
					iLocal_1973 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_1976 == 0)
			{
				Local_2679 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_1307) };
				iLocal_1976++;
			}
			else if (iLocal_1976 == 1)
			{
				Local_2682 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_1976++;
			}
			else if (!bLocal_123 && !bVar4)
			{
				if (Local_2679.f_0 > Local_2682.f_0)
				{
					fVar3 = Local_2679.f_0;
					Local_2679.f_0 = Local_2682.f_0;
					Local_2682.f_0 = fVar3;
				}
				if (Local_2679.f_1 > Local_2682.f_1)
				{
					fVar3 = Local_2679.f_1;
					Local_2679.f_1 = Local_2682.f_1;
					Local_2682.f_1 = fVar3;
				}
				if (Local_2679.f_2 > Local_2682.f_2)
				{
					fVar3 = Local_2679.f_2;
					Local_2679.f_2 = Local_2682.f_2;
					Local_2682.f_2 = fVar3;
				}
				Local_2679 = { Local_2679 - Vector(fLocal_1310, fLocal_1310, fLocal_1310) };
				Local_2682 = { Local_2682 + Vector(fLocal_1310, fLocal_1310, fLocal_1310) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_2679, Local_2682, 1);
				fLocal_1307 = fVar2;
				iLocal_1976 = 0;
			}
		}
	}
}

int func_365(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
			{
				return 0;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) };
		Var12 = { Var6 - Var3 };
	}
	Var9 = { Var3 - Var0 };
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	fVar15 = func_347(Var9, Var12);
	if (fVar15 < 0f)
	{
		return 1;
	}
	return 0;
}

void func_366()
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, true);
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
	VEHICLE::SET_GARBAGE_TRUCKS(false);
	VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(false);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
}

void func_367(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (iLocal_108 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_108 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1301;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_370(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (func_365(iParam1, iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_369(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_368(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_109 = 1;
		}
		else if (iLocal_109)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_109 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *fParam2);
	if (fVar1 > 0f)
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_1308 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	else
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_1309 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				iVar9 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9, false))
				{
					iVar10 = ENTITY::GET_ENTITY_MODEL(iVar9);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, false))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_1299 - fLocal_1300));
							fVar1 = (fVar1 + fLocal_1300);
							fLocal_1298 = fVar1;
							if (fLocal_1298 < fLocal_1300)
							{
								fLocal_1298 = fLocal_1300;
							}
							if (fLocal_1298 > fLocal_1299)
							{
								fLocal_1298 = fLocal_1299;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_1298);
						}
					}
				}
			}
		}
	}
}

float func_368(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	int iVar13;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0.f_0 = ENTITY::GET_ENTITY_FORWARD_X(iParam0);
		Var0.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(iParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
		{
			iVar13 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
			Var9.f_0 = ENTITY::GET_ENTITY_FORWARD_X(iVar13);
			Var9.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(iVar13);
		}
		else
		{
			Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 5f, 0f) };
			Var9 = { Var6 - Var3 };
		}
	}
	fVar12 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var9.f_0, Var9.f_1);
	return fVar12;
}

float func_369(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	Var6 = { Var3 - Var0 };
	Var6.f_2 = 0f;
	fVar9 = SYSTEM::VMAG(Var6);
	return fVar9;
}

float func_370(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Var0.f_0 = ENTITY::GET_ENTITY_FORWARD_X(iParam0);
		Var0.f_1 = ENTITY::GET_ENTITY_FORWARD_Y(iParam0);
		Var6 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var9 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	Var3 = { Var9 - Var6 };
	fVar12 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1);
	fVar12 = (fVar12 + -90f);
	if (fVar12 < 0f)
	{
		fVar12 = (fVar12 * -1f);
	}
	Var3.f_2 = 0f;
	return (SYSTEM::VMAG(Var3) * SYSTEM::SIN(fVar12));
}

int func_371()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3275))
			{
				iLocal_3420 = 1;
			}
			else
			{
				iLocal_3420 = 0;
			}
		}
		else
		{
			iLocal_3420 = 1;
		}
	}
	else
	{
		iLocal_3420 = 1;
	}
	iLocal_3207 = 0;
	while (iLocal_3207 <= 24)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[iLocal_3207]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[iLocal_3207], false))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3138[iLocal_3207]))
				{
					iLocal_3421[iLocal_3207] = 1;
				}
				else
				{
					iLocal_3421[iLocal_3207] = 0;
				}
			}
			else
			{
				iLocal_3421[iLocal_3207] = 1;
			}
		}
		else
		{
			iLocal_3421[iLocal_3207] = 1;
		}
		iLocal_3207++;
	}
	if (((((((((((((((((((((((((iLocal_3420 == 1 && iLocal_3421[0] == 1) && iLocal_3421[1] == 1) && iLocal_3421[2] == 1) && iLocal_3421[3] == 1) && iLocal_3421[4] == 1) && iLocal_3421[5] == 1) && iLocal_3421[6] == 1) && iLocal_3421[7] == 1) && iLocal_3421[8] == 1) && iLocal_3421[9] == 1) && iLocal_3421[10] == 1) && iLocal_3421[11] == 1) && iLocal_3421[12] == 1) && iLocal_3421[13] == 1) && iLocal_3421[14] == 1) && iLocal_3421[15] == 1) && iLocal_3421[16] == 1) && iLocal_3421[17] == 1) && iLocal_3421[18] == 1) && iLocal_3421[19] == 1) && iLocal_3421[20] == 1) && iLocal_3421[21] == 1) && iLocal_3421[22] == 1) && iLocal_3421[23] == 1) && iLocal_3421[24] == 1)
	{
		return 1;
	}
	return 0;
}

void func_372()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[4]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[4], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[4]))
			{
				Local_3320 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_3138[4], true) };
				if (Local_3320.f_0 < (Var3.f_0 - 10f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3138[4]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[4]);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3138[4]));
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[3]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[3], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[3]))
			{
				Local_3320 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_3138[3], true) };
				if (Local_3320.f_0 < (Var0.f_0 - 10f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3138[3]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[3]);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3138[3]));
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[21]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[21], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[21]))
			{
				Local_3320 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_3138[21], true) };
				if (Local_3320.f_0 < (Var6.f_0 - 10f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3138[21]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[21]);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3138[21]));
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[0], false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 50000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3138[0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3138[0]))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3138[0]);
							}
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3138[0]));
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3281))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3281, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 90000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3281))
						{
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3772[0], false);
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3772[1], false);
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3772[2], false);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3240[0]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3240[0]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3240[1]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3240[1]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3240[2]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3240[2]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3240[3]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3240[3]));
							}
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3281);
							STREAMING::REMOVE_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}

void func_373(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), false))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, true);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, false);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, true);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, false);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_374()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[2], false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 50530f)
						{
							if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_3138[2]))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3138[2], true, true, false);
							}
						}
						else if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_3138[2]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3138[2], false, false, false);
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[5]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[5], false))
		{
			if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_3138[5]))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3138[5], true, true, false);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3277[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3277[0], false))
		{
			if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_3277[0]))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3277[0], true, true, false);
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_3277[0], -1, false))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3271[0]))
				{
					STREAMING::REQUEST_MODEL(joaat("s_m_m_gentransport"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_gentransport")))
					{
						iLocal_3271[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3277[0], 26, joaat("s_m_m_gentransport"), -1, true, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3277[1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3277[1], false))
		{
			if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_3277[1]))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3277[1], true, true, false);
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_3277[1], -1, false))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3271[1]))
				{
					STREAMING::REQUEST_MODEL(joaat("s_m_m_gentransport"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_gentransport")))
					{
						iLocal_3271[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3277[1], 26, joaat("s_m_m_gentransport"), -1, true, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
}

void func_375()
{
	if (iLocal_3198 == 0)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Cop_Cars", false, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Plane_Explosion", false, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Tanker_Explosion", false, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TV_Monitors", false, -1);
		if (iLocal_3409 == 0)
		{
			iLocal_3230 = AUDIO::GET_SOUND_ID();
			iLocal_3409 = 1;
		}
		if (iLocal_3410 == 0)
		{
			iLocal_3231 = AUDIO::GET_SOUND_ID();
			iLocal_3410 = 1;
		}
		if (iLocal_3411 == 0)
		{
			iLocal_3232 = AUDIO::GET_SOUND_ID();
			iLocal_3411 = 1;
		}
		if (iLocal_3412 == 0)
		{
			iLocal_3233 = AUDIO::GET_SOUND_ID();
			iLocal_3412 = 1;
		}
		if (iLocal_3413 == 0)
		{
			iLocal_3234 = AUDIO::GET_SOUND_ID();
			iLocal_3413 = 1;
		}
		if (iLocal_3408 == 0)
		{
			iLocal_3235 = AUDIO::GET_SOUND_ID();
			iLocal_3408 = 1;
		}
		if (iLocal_3414 == 0)
		{
			iLocal_3236 = AUDIO::GET_SOUND_ID();
			iLocal_3414 = 1;
		}
		if (iLocal_3362 == 1)
		{
			func_129();
			iLocal_3362 = 0;
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_3306))
		{
			iLocal_3306 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			CAM::SET_CAM_FOV(iLocal_3306, 40f);
		}
		iLocal_3360 = 0;
		iLocal_3354 = 0;
		iLocal_3366 = 0;
		iLocal_3350 = 0;
		iLocal_3345 = 0;
		iLocal_3351 = 0;
		iLocal_3344 = 0;
		iLocal_3380 = 0;
		iLocal_3382[0] = 0;
		iLocal_3386[0] = 0;
		iLocal_3382[1] = 0;
		iLocal_3386[1] = 0;
		iLocal_3382[2] = 0;
		iLocal_3389 = 0;
		iLocal_3390 = 0;
		iLocal_3348 = 0;
		iLocal_3349 = 0;
		iLocal_3347 = 0;
		iLocal_3394 = 0;
		iLocal_3397 = 0;
		iLocal_3398 = 0;
		iLocal_3399 = 0;
		iLocal_3401 = 0;
		iLocal_3400 = 0;
		iLocal_3402 = 0;
		iLocal_3403 = 0;
		iLocal_3404 = 0;
		iLocal_3405 = 0;
		iLocal_3406 = 0;
		iLocal_3407 = 0;
		iLocal_3415 = 0;
		iLocal_3416 = 0;
		iLocal_3418 = 0;
		iLocal_3419 = 0;
		iLocal_3451 = 0;
		iLocal_3452 = 0;
		iLocal_3568 = 0;
		iLocal_3368 = 1;
		iLocal_3369 = 1;
		iLocal_3377 = 1;
		iLocal_3457 = 0;
		iLocal_3458 = 0;
		iLocal_3483 = 0;
		iLocal_3485 = 0;
		iLocal_3492 = 0;
		iLocal_3493 = 0;
		iLocal_3495 = 0;
		iLocal_3497[0] = 0;
		iLocal_3497[1] = 0;
		iLocal_3500[0] = 0;
		iLocal_3500[1] = 0;
		iLocal_3503 = 0;
		iLocal_3504 = 0;
		iLocal_3506 = 0;
		iLocal_3525 = 0;
		iLocal_3526 = 0;
		iLocal_3527 = 0;
		iLocal_3557 = 0;
		iLocal_3558 = 0;
		iLocal_3569 = 0;
		iLocal_3202 = 0;
		iLocal_3215 = 0;
		iLocal_3206 = 0;
		while (iLocal_3206 <= 2)
		{
			iLocal_3560[iLocal_3206] = 0;
			iLocal_3564[iLocal_3206] = 0;
			iLocal_3206++;
		}
		iLocal_3206 = 0;
		while (iLocal_3206 <= 2)
		{
			iLocal_3588[iLocal_3206] = 0;
			iLocal_3206++;
		}
		iLocal_3206 = 0;
		while (iLocal_3206 <= 6)
		{
			iLocal_3507[iLocal_3206] = 0;
			iLocal_3515[iLocal_3206] = 0;
			iLocal_3206++;
		}
		STREAMING::REQUEST_PTFX_ASSET();
		iLocal_106 = 1;
		bLocal_112 = true;
		func_312();
		iLocal_3201 = HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID();
		MISC::CLEAR_AREA(-823.71f, -2548.2f, 13.75f, 20f, true, false, false, false);
		PED::SET_PED_NON_CREATION_AREA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
		PATHFIND::SET_PED_PATHS_IN_AREA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, false, 0);
		PATHFIND::SET_ROADS_IN_AREA(-482f, -2118f, 6f, -1072f, -2724f, 17f, false, true);
		func_135(2, 1);
		func_377("BB_Chase", 45, 0, 1);
		PLAYER::SET_MAX_WANTED_LEVEL(3);
		func_17(&uLocal_3595, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_24())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			func_21(iLocal_3276, -1, 1);
		}
		iLocal_3199 = 0;
		iLocal_3198 = 1;
	}
	if (iLocal_3198 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		func_376();
		iLocal_3198 = 2;
	}
	if (iLocal_3198 == 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3288))
		{
			iLocal_3288 = VEHICLE::CREATE_VEHICLE(joaat("blista"), 0f, 0f, 1f, 0f, true, true, false);
		}
		while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "BB_Chase"))
		{
			SYSTEM::WAIT(0);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3276, false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3276, true, true, false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_3276, 30f);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3275, 45, "BB_Chase", true);
				SYSTEM::SETTIMERB(0);
				func_295();
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3276, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3276);
					}
				}
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_3198 = 0;
				iLocal_3197 = 4;
			}
		}
	}
}

void func_376()
{
	Local_2506[0 /*3*/] = { -583.6427f, -2157.497f, 5.7947f };
	fLocal_1226[0] = -0.0003f;
	fLocal_1242[0] = -0.0085f;
	fLocal_1258[0] = 0.9998f;
	fLocal_1274[0] = 0.0158f;
	iLocal_2878[0] = joaat("blista");
	Local_1980[4 /*3*/] = { -827.2035f, -2575.697f, 13.5688f };
	fLocal_126[4] = 0.0004f;
	fLocal_302[4] = -0.0003f;
	fLocal_478[4] = -0.2526f;
	fLocal_654[4] = 0.9676f;
	iLocal_1311[4] = 50;
	fLocal_830[4] = 20310f;
	iLocal_2702[4] = joaat("manana");
	Local_2506[1 /*3*/] = { -1033.717f, -2949.014f, 13.4922f };
	fLocal_1226[1] = 0.0032f;
	fLocal_1242[1] = -0.0003f;
	fLocal_1258[1] = -0.0255f;
	fLocal_1274[1] = 0.9997f;
	iLocal_2878[1] = joaat("bison2");
	Local_2552[0 /*3*/] = { -1178.365f, -2845.981f, 13.9027f };
	fLocal_1010[0] = 0.0018f;
	fLocal_1046[0] = 0.0123f;
	fLocal_1082[0] = 0.9644f;
	fLocal_1118[0] = 0.2642f;
	iLocal_1839[0] = 9;
	fLocal_1154[0] = 22357f;
	fLocal_1190[0] = 1f;
	iLocal_2894[0] = joaat("buzzard");
	Local_2552[1 /*3*/] = { -1376.197f, -2755.167f, 14.0646f };
	fLocal_1010[1] = -0.0012f;
	fLocal_1046[1] = 0.0013f;
	fLocal_1082[1] = 0.8439f;
	fLocal_1118[1] = -0.5365f;
	iLocal_1839[1] = 10;
	fLocal_1154[1] = 27135f;
	fLocal_1190[1] = 1f;
	iLocal_2894[1] = joaat("packer");
	Local_2552[2 /*3*/] = { -1342.543f, -2688.482f, 22.8254f };
	fLocal_1010[2] = 0.0057f;
	fLocal_1046[2] = -0.0014f;
	fLocal_1082[2] = -0.2451f;
	fLocal_1118[2] = 0.9695f;
	iLocal_1839[2] = 11;
	fLocal_1154[2] = 35135f;
	fLocal_1190[2] = 1f;
	iLocal_2894[2] = joaat("jet");
	Local_2552[3 /*3*/] = { -898.3506f, -2698.965f, 20.159f };
	fLocal_1010[3] = 0.0065f;
	fLocal_1046[3] = 0.0191f;
	fLocal_1082[3] = -0.2629f;
	fLocal_1118[3] = 0.9646f;
	iLocal_1839[3] = 3;
	fLocal_1154[3] = 6764f;
	fLocal_1190[3] = 1f;
	iLocal_2894[3] = joaat("bus");
	Local_2552[4 /*3*/] = { -576.655f, -2231.905f, 5.2834f };
	fLocal_1010[4] = 0.0043f;
	fLocal_1046[4] = 0.0331f;
	fLocal_1082[4] = -0.3125f;
	fLocal_1118[4] = 0.9493f;
	iLocal_1839[4] = 4;
	fLocal_1154[4] = 2102f;
	fLocal_1190[4] = 1f;
	iLocal_2894[4] = joaat("bison");
	Local_2552[5 /*3*/] = { -994.9925f, -3154.125f, 23.1145f };
	fLocal_1010[5] = 0.0056f;
	fLocal_1046[5] = 0.0029f;
	fLocal_1082[5] = 0.4915f;
	fLocal_1118[5] = 0.8708f;
	iLocal_1839[5] = 21;
	fLocal_1154[5] = 92500f;
	fLocal_1190[5] = 1f;
	iLocal_2894[5] = joaat("jet");
	Local_2552[7 /*3*/] = { -553.3315f, -2073.951f, 6.8909f };
	fLocal_1010[7] = 0.0072f;
	fLocal_1046[7] = 0.0176f;
	fLocal_1082[7] = 0.9739f;
	fLocal_1118[7] = -0.2263f;
	iLocal_1839[7] = 54;
	fLocal_1154[7] = 0f;
	fLocal_1190[7] = 1f;
	iLocal_2894[7] = joaat("police3");
	Local_2552[8 /*3*/] = { -561.7264f, -2076.761f, 6.7664f };
	fLocal_1010[8] = -0.027f;
	fLocal_1046[8] = 0.0016f;
	fLocal_1082[8] = 0.9169f;
	fLocal_1118[8] = -0.3981f;
	iLocal_1839[8] = 108;
	fLocal_1154[8] = 150f;
	fLocal_1190[8] = 1f;
	iLocal_2894[8] = joaat("police3");
	Local_2552[11 /*3*/] = { -1563.918f, -2745.409f, 13.5643f };
	fLocal_1010[11] = -0.0022f;
	fLocal_1046[11] = -0.0019f;
	fLocal_1082[11] = 0.928f;
	fLocal_1118[11] = -0.3726f;
	iLocal_1839[11] = 111;
	fLocal_1154[11] = 36000f;
	fLocal_1190[11] = 1f;
	iLocal_2894[11] = joaat("police3");
	Local_2552[12 /*3*/] = { -1026.024f, -2336.396f, 13.5678f };
	fLocal_1010[12] = -0.0083f;
	fLocal_1046[12] = -0.0054f;
	fLocal_1082[12] = 0.55f;
	fLocal_1118[12] = 0.8351f;
	iLocal_1839[12] = 112;
	fLocal_1154[12] = 60000f;
	fLocal_1190[12] = 1f;
	iLocal_2894[12] = joaat("police3");
	Local_2552[13 /*3*/] = { -1013.316f, -2340.457f, 13.5678f };
	fLocal_1010[13] = -0.0086f;
	fLocal_1046[13] = -0.005f;
	fLocal_1082[13] = 0.5052f;
	fLocal_1118[13] = 0.8629f;
	iLocal_1839[13] = 113;
	fLocal_1154[13] = 60000f;
	fLocal_1190[13] = 1f;
	iLocal_2894[13] = joaat("police3");
	Local_2552[14 /*3*/] = { -1221.049f, -2731.169f, 13.5681f };
	fLocal_1010[14] = -0.0083f;
	fLocal_1046[14] = -0.0057f;
	fLocal_1082[14] = 0.6469f;
	fLocal_1118[14] = 0.7625f;
	iLocal_1839[14] = 61;
	fLocal_1154[14] = 80000f;
	fLocal_1190[14] = 1f;
	iLocal_2894[14] = joaat("police3");
	Local_2552[15 /*3*/] = { -1227.203f, -2735.872f, 13.568f };
	fLocal_1010[15] = -0.0041f;
	fLocal_1046[15] = -0.0091f;
	fLocal_1082[15] = 0.9133f;
	fLocal_1118[15] = 0.4072f;
	iLocal_1839[15] = 62;
	fLocal_1154[15] = 80000f;
	fLocal_1190[15] = 1f;
	iLocal_2894[15] = joaat("police3");
	Local_2552[19 /*3*/] = { -1240.048f, -2203.457f, 14.0347f };
	fLocal_1010[19] = 0.0002f;
	fLocal_1046[19] = 0.0018f;
	fLocal_1082[19] = 0.9611f;
	fLocal_1118[19] = -0.2763f;
	iLocal_1839[19] = 66;
	fLocal_1154[19] = 55125f;
	fLocal_1190[19] = 1f;
	iLocal_2894[19] = joaat("firetruk");
	Local_2552[20 /*3*/] = { -438.0192f, -2060.751f, 73.6354f };
	fLocal_1010[20] = -0.0005f;
	fLocal_1046[20] = 0.0018f;
	fLocal_1082[20] = 0.9559f;
	fLocal_1118[20] = 0.2938f;
	iLocal_1839[20] = 67;
	fLocal_1154[20] = 0f;
	fLocal_1190[20] = 1f;
	iLocal_2894[20] = joaat("maverick");
	Local_2552[21 /*3*/] = { -546.8047f, -2187.925f, 5.8819f };
	fLocal_1010[21] = -0.0252f;
	fLocal_1046[21] = -0.0034f;
	fLocal_1082[21] = 0.9369f;
	fLocal_1118[21] = 0.3487f;
	iLocal_1839[21] = 5;
	fLocal_1154[21] = 3834f;
	fLocal_1190[21] = 1f;
	iLocal_2894[21] = joaat("blista");
	Local_2552[22 /*3*/] = { -1001.674f, -2947.732f, 13.3947f };
	fLocal_1010[22] = 0.001f;
	fLocal_1046[22] = -0.0004f;
	fLocal_1082[22] = 0.8616f;
	fLocal_1118[22] = 0.5075f;
	iLocal_1839[22] = 6;
	fLocal_1154[22] = 20176f;
	fLocal_1190[22] = 1f;
	iLocal_2894[22] = joaat("airtug");
	Local_2552[23 /*3*/] = { -1249.588f, -2525.9f, 13.3942f };
	fLocal_1010[23] = 0.001f;
	fLocal_1046[23] = -0.0001f;
	fLocal_1082[23] = 0.9749f;
	fLocal_1118[23] = -0.2228f;
	iLocal_1839[23] = 7;
	fLocal_1154[23] = 48538f;
	fLocal_1190[23] = 1f;
	iLocal_2894[23] = joaat("airtug");
	Local_2552[24 /*3*/] = { -1362.538f, -2625.609f, 13.3895f };
	fLocal_1010[24] = -0.0001f;
	fLocal_1046[24] = 0.0018f;
	fLocal_1082[24] = 0.5344f;
	fLocal_1118[24] = 0.8452f;
	iLocal_1839[24] = 8;
	fLocal_1154[24] = 75112f;
	fLocal_1190[24] = 1f;
	iLocal_2894[24] = joaat("airtug");
}

void func_377(char* sParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2685, sParam0, 64);
	bLocal_102 = true;
	iLocal_107 = 0;
	iLocal_1963 = 0;
	iLocal_1964 = 0;
	iLocal_1965 = 0;
	iLocal_1966 = iParam1;
	iLocal_1967 = 0;
	iLocal_1968 = 0;
	iLocal_1969 = 0;
	iLocal_1973 = 0;
	iLocal_1976 = 0;
	iLocal_1974 = -1;
	iLocal_1975 = -1;
	iLocal_1977 = 0;
	iLocal_1978 = 0;
	fLocal_1306 = 0f;
	fLocal_1307 = 0f;
	fLocal_1292 = 0f;
	iLocal_108 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_2661.f_0 = (Var0.f_0 - 100f);
		Local_2661.f_1 = (Var0.f_1 - 100f);
		Local_2661.f_2 = (Var0.f_2 - 100f);
		Local_2664.f_0 = (Var0.f_0 + 100f);
		Local_2664.f_1 = (Var0.f_1 + 100f);
		Local_2664.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_2661, Local_2664, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_2701);
	func_366();
	if (bParam3)
	{
		func_217(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	func_222();
}

void func_378()
{
	if (iLocal_3198 == 0)
	{
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 14f, 4);
		if (iLocal_3362 == 1)
		{
			func_129();
			iLocal_3362 = 0;
		}
		iLocal_3376 = 0;
		iLocal_3377 = 0;
		iLocal_3379 = 0;
		iLocal_3381 = 0;
		iLocal_3396 = 0;
		iLocal_3344 = 0;
		iLocal_3345 = 0;
		iLocal_3348 = 0;
		iLocal_3350 = 0;
		iLocal_3351 = 0;
		iLocal_3352 = 0;
		iLocal_3353 = 0;
		iLocal_3354 = 0;
		iLocal_3355 = 0;
		iLocal_3360 = 0;
		iLocal_3369 = 0;
		iLocal_3367 = 0;
		iLocal_3456 = 0;
		iLocal_3459 = 0;
		iLocal_3540 = 0;
		iLocal_3395 = 0;
		iLocal_3368 = 1;
		iLocal_3202 = 0;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_3378 = 1;
		}
		else
		{
			iLocal_3378 = 0;
		}
		func_17(&uLocal_3595, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		PATHFIND::SET_IGNORE_NO_GPS_FLAG(true);
		PATHFIND::SET_ROADS_IN_AREA(-617f, -2274f, 0f, -406.01f, -2044f, 15f, false, true);
		iLocal_3205 = MISC::GET_GAME_TIMER();
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_24())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			func_21(0, -1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3276);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3293);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3294);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_3304))
		{
			iLocal_3304 = func_383(Local_3317, 0);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_GAMEPLAY_START");
		Local_3335 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		iLocal_3198 = 1;
	}
	if (iLocal_3198 == 1)
	{
		if (iLocal_3367 == 0 && iLocal_3381 == 1)
		{
			if (!func_289() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				func_20("TRV4_GO1", 7500, 1);
				iLocal_3367 = 1;
			}
		}
		if (iLocal_3395 == 0 && !func_382())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_3317, true) < 800f)
			{
				iLocal_3204 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				if (iLocal_3204 == 0)
				{
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 6f, 3);
					iLocal_3395 = 1;
				}
				if (iLocal_3204 == 1)
				{
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 6f, 3);
					iLocal_3395 = 1;
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_3317, true) < 600f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
			{
				STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio")))
				{
					iLocal_3275 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), -428.0226f, -2153.558f, 9.2992f, 90.9098f, true, true, false);
					ENTITY::SET_ENTITY_PROOFS(iLocal_3275, false, true, true, true, false, false, false, false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_3275, 27, 27);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3275, "SOL_3_MOLLY_CAR_Group", 0f);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
			{
				STREAMING::REQUEST_MODEL(joaat("ig_molly"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("ig_molly")))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
						{
							iLocal_3239 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3275, 26, joaat("ig_molly"), -1, true, true);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3239, true, 0);
							PED::SET_PED_CAN_BE_TARGETTED(iLocal_3239, false);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_molly"));
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3239, joaat("player"));
							iLocal_3377 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
			{
				PED::DELETE_PED(&iLocal_3239);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_3275);
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_3317, true) < 500f)
		{
			if (iLocal_3379 == 0)
			{
				iLocal_3310 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("BREAKING_NEWS");
				STREAMING::REQUEST_MODEL(joaat("police3"));
				STREAMING::REQUEST_MODEL(joaat("maverick"));
				STREAMING::REQUEST_MODEL(joaat("bison"));
				STREAMING::REQUEST_MODEL(joaat("blista"));
				VEHICLE::REQUEST_VEHICLE_RECORDING(45, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(35, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(2, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(54, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(55, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(67, "BB_Chase");
				func_214(1, "BB_Chase");
				AUDIO::PREPARE_MUSIC_EVENT("TRV4_CHASE");
				iLocal_3379 = 1;
			}
		}
		else if (iLocal_3379 == 1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("maverick"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blista"));
			VEHICLE::REMOVE_VEHICLE_RECORDING(45, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(35, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(2, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(54, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(55, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(67, "BB_Chase");
			func_381(1, "BB_Chase");
			AUDIO::CANCEL_MUSIC_EVENT("TRV4_CHASE");
			iLocal_3379 = 0;
		}
		if (iLocal_3396 == 0)
		{
			if (MISC::GET_GAME_TIMER() > (iLocal_3205 + 135000))
			{
				HUD::CLEAR_PRINTS();
				func_20("TRV4_WARN1", 7500, 1);
				iLocal_3205 = MISC::GET_GAME_TIMER();
				iLocal_3396 = 1;
			}
		}
		if (iLocal_3396 == 1)
		{
			if (MISC::GET_GAME_TIMER() > (iLocal_3205 + 135000))
			{
				func_263("TRV4_FAIL1");
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_DRIVE_TO_AIRPORT"))
			{
				AUDIO::START_AUDIO_SCENE("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_3456 == 0)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_CAR_ENTERED");
				iLocal_3456 = 1;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
			{
				iLocal_3276 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3276, false, true, false, false, false, false, false, false);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_3276);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3276, true);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3276, false))
			{
				if (iLocal_3378 == 0)
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_3276, false, false, false, false, false, false, false, false);
					iLocal_3378 = 1;
				}
				if (iLocal_3370 == 1)
				{
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(iLocal_3276);
					iLocal_3370 = 0;
				}
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_3276, true))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3276);
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (iLocal_3459 == 0)
			{
				HUD::START_GPS_MULTI_ROUTE(156, true, false);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-244f, -1842.74f, 28.48f);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-1.5f, -2014.4f, 11.5f);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-498.7f, -2136.5f, 8.4f);
				HUD::SET_GPS_MULTI_ROUTE_RENDER(true);
				iLocal_3459 = 1;
			}
		}
		else if (iLocal_3459 == 1)
		{
			HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
			iLocal_3459 = 0;
		}
		if ((iLocal_3379 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_3275)) && ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_3275, func_380(PLAYER::PLAYER_PED_ID()), 0))
				{
					func_379();
					iLocal_3198 = 0;
					iLocal_3200 = 0;
					iLocal_3197 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_3275))
				{
					func_379();
					iLocal_3198 = 0;
					iLocal_3200 = 0;
					iLocal_3197 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_3275, true), 200f, 132f, 100f, false, true, 0))
				{
					iLocal_3376 = 0;
					func_379();
					iLocal_3198 = 0;
					iLocal_3200 = 0;
					iLocal_3197 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, false, true, 0))
				{
					iLocal_3376 = 1;
					func_379();
					iLocal_3198 = 0;
					iLocal_3200 = 0;
					iLocal_3197 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, false, true, 0))
				{
					HUD::CLEAR_GPS_MULTI_ROUTE();
					PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
					iLocal_3376 = 1;
					func_379();
					iLocal_3198 = 0;
					iLocal_3200 = 0;
					iLocal_3197 = 3;
				}
			}
		}
	}
}

void func_379()
{
	while (((!STREAMING::HAS_MODEL_LOADED(joaat("police3")) || !STREAMING::HAS_MODEL_LOADED(joaat("maverick"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison"))) || !STREAMING::HAS_MODEL_LOADED(joaat("blista")))
	{
		SYSTEM::WAIT(0);
	}
	while (((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "BB_Chase") || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(35, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(54, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(55, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(67, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
}

var func_380(int iParam0)
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true);
	return uVar0;
}

void func_381(int iParam0, char* sParam1)
{
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, sParam1);
}

int func_382()
{
	if (Global_23023 == 4)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_383(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_260(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

void func_384()
{
	if (iLocal_3198 == 0)
	{
		iLocal_3355 = 1;
		iLocal_3484 = 0;
		iLocal_3505 = 0;
		iLocal_3523 = 0;
		while (iLocal_3355 == 1)
		{
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_LegalTrouble", 0);
			switch (iLocal_3200)
			{
				case 0:
					CUTSCENE::REQUEST_CUTSCENE("sol_3_int", 8);
					if (func_428())
					{
						while (!func_400(61, &uLocal_3760, 0, 1, 0, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
						iLocal_3455 = 0;
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						func_247(1, 1, 1, 0, 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Global_98958[0]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98958[0], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98958[0], true, true);
								iLocal_3276 = Global_98958[0];
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_98958[1]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98958[1], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98958[1], true, true);
								iLocal_3293 = Global_98958[1];
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_98958[2]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98958[2], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98958[2], true, true);
								iLocal_3294 = Global_98958[2];
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_98958[3]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98958[3], false))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98958[3], true, true);
								iLocal_3295 = Global_98958[3];
							}
						}
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::REPLAY_START_EVENT(4);
						func_399();
						if (!CAM::IS_SCREEN_FADED_IN())
						{
							CAM::DO_SCREEN_FADE_IN(250);
						}
						iLocal_3200++;
					}
					break;
				
				case 1:
					if (iLocal_3484 == 0)
					{
						if (CUTSCENE::IS_CUTSCENE_ACTIVE())
						{
							if (iLocal_3523 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_3295))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3295, false))
									{
										if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3295)))
										{
											VEHICLE::CONTROL_LANDING_GEAR(iLocal_3295, 2);
											ENTITY::SET_ENTITY_COORDS(iLocal_3295, -1048.722f, -506.8387f, 35.0386f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(iLocal_3295, 357.1288f);
											VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_3295, true);
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3295, 5f);
											func_389(-1048.722f, -506.8387f, 35.0386f, 357.1288f, 0, 145);
											iLocal_3523 = 1;
										}
										if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3295)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3295))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3295))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3295)))
										{
											if ((((((((ENTITY::GET_ENTITY_MODEL(iLocal_3295) != joaat("bus") && ENTITY::GET_ENTITY_MODEL(iLocal_3295) != joaat("pounder")) && ENTITY::GET_ENTITY_MODEL(iLocal_3295) != joaat("packer")) && ENTITY::GET_ENTITY_MODEL(iLocal_3295) != joaat("airbus")) && ENTITY::GET_ENTITY_MODEL(iLocal_3295) != joaat("ambulance")) && ENTITY::GET_ENTITY_MODEL(iLocal_3295) != joaat("barracks")) && ENTITY::GET_ENTITY_MODEL(iLocal_3295) != joaat("barracks2")) && ENTITY::GET_ENTITY_MODEL(iLocal_3295) != joaat("benson")) && ENTITY::GET_ENTITY_MODEL(iLocal_3295) != joaat("biff"))
											{
												ENTITY::SET_ENTITY_COORDS(iLocal_3295, -1027.657f, -486.6945f, 35.9571f, true, false, false, true);
												ENTITY::SET_ENTITY_HEADING(iLocal_3295, 207.7515f);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3295, 5f);
												func_389(-1027.657f, -486.6945f, 35.9571f, 207.7515f, 0, 145);
												iLocal_3523 = 1;
											}
										}
										if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3295)) && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3295))) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3295))) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3295))) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3295)))
										{
											VEHICLE::DELETE_VEHICLE(&iLocal_3295);
											iLocal_3523 = 1;
										}
									}
								}
							}
							func_387(&uLocal_3760, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_3484 = 1;
						}
					}
					if (iLocal_3455 == 0)
					{
						PED::ADD_RELATIONSHIP_GROUP("SecGuards", &iLocal_3593);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_3593);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3593, joaat("player"));
						HUD::REQUEST_ADDITIONAL_TEXT("TREV4", 0);
						iLocal_3455 = 1;
					}
					if (iLocal_3505 == 0)
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
							PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
							PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
							if (CUTSCENE::GET_CUTSCENE_TIME() > 120000)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START");
								iLocal_3505 = 1;
							}
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1012.268f, -480.0742f, 38.9757f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 121.4087f);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 3000, 0f, true, false, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 0, false);
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
					if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						func_386(61);
						if (iLocal_3505 == 0)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_CS_SKIP");
							iLocal_3505 = 1;
						}
						RECORDING::REPLAY_STOP_EVENT();
						func_247(0, 1, 1, 0, 0, 0, 0);
						iLocal_3200++;
					}
					break;
				
				case 2:
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3276, false))
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_3276, true))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3276);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3293))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3293, false))
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_3293, true))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3293);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3294))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3294, false))
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_3294, true))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3294);
							}
						}
					}
					func_385();
					iLocal_3355 = 0;
					iLocal_3200 = 0;
					iLocal_3198 = 0;
					iLocal_3197 = 2;
					break;
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_385()
{
	Global_65069 = 0;
}

void func_386(int iParam0)
{
	if (Global_99383 != -1)
	{
		if (iParam0 == Global_99383)
		{
			Global_99387 = 1;
			return;
		}
	}
}

void func_387(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, true, false, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(true);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, false);
			}
			CAM::DESTROY_CAM(uParam0->f_4, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	func_247(bParam1, 1, 0, 0, 0, 0, 0);
	func_388();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_114963.f_32759.f_4801 != -15)
		{
			Global_114963.f_32759.f_4801 = func_105();
		}
	}
}

void func_388()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_114963.f_14150[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

void func_389(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_105520.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_105520.f_4, false))
		{
			if (func_398(24) != Global_105520.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_395(ENTITY::GET_ENTITY_COORDS(Global_105520.f_4, true), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_390(Global_105520.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_390(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_79127.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_79127.f_484[25], false))
			{
				if (Global_79127.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_394(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_39(iParam0, &Var0);
		if (func_73(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_80115 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_392(iParam5, &Var0, Param1, fParam4, func_34(iParam0));
		func_391(iParam5, iParam0, 0);
	}
}

void func_391(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_170(&(Global_79127.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_79127.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_79127.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_79127.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_80034 != -1 && Global_80034 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_114963.f_32759.f_4801 = func_105();
			}
			if (iParam1 != Global_79127.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_398(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						func_156(iVar0, 145);
					}
				}
				Global_80033 = iParam1;
				Global_80034 = iParam0;
				Global_80035 = iParam2;
			}
		}
	}
}

void func_392(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_170(&(Global_79127.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_79127.f_555[0 /*21*/].f_9, 10))
		{
			func_393(iParam0);
			func_167(uParam1, &(Global_114963.f_32759.f_69[Global_79127.f_555[0 /*21*/].f_14 /*78*/]));
			if (BitTest(Global_79127.f_555[0 /*21*/].f_9, 11))
			{
				Global_114963.f_32759.f_1864[Global_79127.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_114963.f_32759.f_1934[Global_79127.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_114963.f_32759.f_1864[Global_79127.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_114963.f_32759.f_1934[Global_79127.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_114963.f_32759.f_1958[Global_79127.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_163(iParam0, 1);
		}
	}
}

void func_393(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_170(&(Global_79127.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_79127.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_79127.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_79127.f_139[iParam0]));
			Global_79127.f_139[iParam0] = 0;
		}
		if (BitTest(Global_79127.f_555[0 /*21*/].f_9, 13))
		{
			func_163(iParam0, 0);
		}
	}
}

void func_394(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_393(iParam0);
	func_163(iParam0, 0);
}

int func_395(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_396(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_396(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_97499[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_97499[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_397(iVar0) || iParam4 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_97499[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

var func_397(int iParam0)
{
	return BitTest(Global_114963.f_7236[iParam0], 0);
}

int func_398(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_79127.f_139[iParam0];
}

void func_399()
{
	Global_65069 = 1;
}

bool func_400(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<2> Var0;
	
	func_427(iParam0, &Var0);
	func_426(iParam0, &Var0, &(Var0.f_1));
	return func_401(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_401(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((func_460(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !func_424(uParam0->f_8, uParam0->f_7))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", false, -1))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			CAM::DESTROY_CAM(uParam0->f_4, false);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, true);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
				}
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
				}
			}
			fVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, true, true, false, false);
			}
			func_423(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			func_387(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!func_424(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				CAM::DESTROY_CAM(uParam0->f_4, false);
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, true);
				if (!bParam6)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, false);
						}
						ENTITY::SET_ENTITY_VISIBLE(iVar2, false, false);
					}
				}
				fVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, true, true, false, false);
				}
				func_423(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				func_387(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			CAM::DESTROY_CAM(uParam0->f_4, false);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, true);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
				}
				iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, true, false);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar4, false, false);
				}
			}
			fVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, false, true, false, false);
			}
			func_423(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			func_387(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, false, true, false, false);
		}
		if (!uParam0->f_5)
		{
			if (func_404(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
					CAM::SET_CAM_ACTIVE(uParam0->f_4, true);
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (func_404(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, true);
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (func_402(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					func_404(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, false, true, false, false);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4) && CAM::IS_CAM_INTERPOLATING(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (func_402(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, false, true, false, false);
		}
		if (uParam0->f_9 + 1000 > MISC::GET_GAME_TIMER())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}

int func_402(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_29) > iParam0)
		{
			Global_28 = MISC::GET_GAME_TIMER();
		}
		Global_29 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			if (func_403())
			{
				Global_28 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_403()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_404(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_105();
			iVar5 = func_105();
			func_113(&iVar5, iParam0);
			func_114(&iVar5, iParam1);
			func_115(&iVar5, 0);
			if (func_421(*uParam4, iVar5))
			{
				func_420(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_418(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_411((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(false);
			}
			func_410();
			uParam4->f_10 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			func_388();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4))
				{
					fVar0 = CAM::GET_CAM_SPLINE_PHASE(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (MISC::GET_HASH_KEY(sParam2) != 0)
						{
							MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam2, fParam8);
						}
						if (MISC::GET_HASH_KEY(sParam3) != 0)
						{
							MISC::UNLOAD_ALL_CLOUD_HATS();
							MISC::LOAD_CLOUD_HAT(sParam3, 0f);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_420(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(func_409(iVar5), func_408(iVar5), func_407(iVar5));
				if (bParam7)
				{
					GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				}
				AUDIO::STOP_SOUND(uParam4->f_10);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				if (bParam7)
				{
					GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(true);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_406(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			func_420(&iVar5, iVar4, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(func_409(iVar5), func_408(iVar5), func_407(iVar5));
			if (func_405(iVar5) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(func_405(iVar5), func_112(iVar5), func_110(iVar5));
			}
			func_299();
			GRAPHICS::RESET_ADAPTATION(6);
			break;
	}
	return 0;
}

int func_405(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

float func_406(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_407(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_408(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_409(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_410()
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 0;
	}
	AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
	return 1;
}

void func_411(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_417(&(Global_114963.f_18112.f_175[iVar0 /*19*/].f_5)))
		{
			func_412(&(Global_114963.f_18112.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_417(&(Global_114963.f_18112.f_362[iVar1 /*3*/])))
		{
			func_412(&(Global_114963.f_18112.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	AUDIO::SKIP_RADIO_FORWARD();
}

void func_412(int* iParam0, float fParam1)
{
	if (func_417(iParam0))
	{
		func_413(iParam0, (func_415(iParam0) + fParam1));
	}
}

void func_413(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_414(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, true);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_414(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

float func_415(var uParam0)
{
	if (func_417(uParam0))
	{
		if (func_416(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_414(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_416(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_417(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_418(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_421(iParam0, iParam1))
	{
		iVar0 = func_112(iParam1);
		iVar1 = func_110(iParam0);
		iVar2 = (func_110(iParam0) - func_110(iParam1));
		iVar3 = (func_112(iParam0) - func_112(iParam1));
		iVar4 = (func_405(iParam0) - func_405(iParam1));
		iVar5 = (func_409(iParam0) - func_409(iParam1));
		iVar6 = (func_408(iParam0) - func_408(iParam1));
		iVar7 = (func_407(iParam0) - func_407(iParam1));
	}
	else
	{
		iVar0 = func_112(iParam0);
		iVar1 = func_110(iParam1);
		iVar2 = (func_110(iParam1) - func_110(iParam0));
		iVar3 = (func_112(iParam1) - func_112(iParam0));
		iVar4 = (func_405(iParam1) - func_405(iParam0));
		iVar5 = (func_409(iParam1) - func_409(iParam0));
		iVar6 = (func_408(iParam1) - func_408(iParam0));
		iVar7 = (func_407(iParam1) - func_407(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_109(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_419(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_419(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_420(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_110(*iParam0);
	iVar1 = func_112(*iParam0);
	iVar2 = func_405(*iParam0);
	iVar3 = func_409(*iParam0);
	iVar4 = func_408(*iParam0);
	iVar5 = func_407(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_109(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_109(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_423(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_421(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_422(iParam1) || !func_422(iParam0))
	{
		return 1;
	}
	iVar0 = func_110(iParam0);
	iVar1 = func_110(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_112(iParam0);
	iVar1 = func_112(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_405(iParam0);
	iVar1 = func_405(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_409(iParam0);
	iVar1 = func_409(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_408(iParam0);
	iVar1 = func_408(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_407(iParam0);
	iVar1 = func_407(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_422(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_407(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_408(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_409(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_110(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_112(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_405(iParam0);
	if (iVar5 < 1 || iVar5 > func_109(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_423(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_115(uParam0, iParam1);
	func_114(uParam0, iParam2);
	func_113(uParam0, iParam3);
	func_107(uParam0, iParam5);
	func_108(uParam0, iParam4);
	func_106(uParam0, iParam6);
}

bool func_424(int iParam0, int iParam1)
{
	return func_425(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_425(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_426(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 65:
			*uParam1 = 20;
			*uParam2 = 22;
			break;
		
		case 27:
			*uParam1 = 20;
			*uParam2 = 20;
			break;
		
		default:
			*uParam1 = Global_93249[iParam0 /*34*/].f_14;
			*uParam2 = Global_93249[iParam0 /*34*/].f_13;
			break;
	}
}

void func_427(int iParam0, var uParam1)
{
	uParam1->f_17 = -1;
	switch (iParam0)
	{
		case 1:
		case 2:
			uParam1->f_2 = { -58.1338f, -1115.653f, 25.8856f };
			uParam1->f_5 = { 18.4907f, 0f, 3.566f };
			uParam1->f_8 = { -58.3857f, -1115.083f, 26.0824f };
			uParam1->f_11 = { 18.4907f, 0f, 2.0628f };
			uParam1->f_14 = 40.0256f;
			uParam1->f_15 = 4000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 17:
		case 18:
			uParam1->f_2 = { -830.1f, 171.4f, 71.5f };
			uParam1->f_5 = { 17.5f, 0f, -76f };
			uParam1->f_8 = { -829.5f, 171.6f, 71.7f };
			uParam1->f_11 = { 17.9f, 0f, -75.4f };
			uParam1->f_14 = 47.9931f;
			uParam1->f_15 = 6600;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 21:
		case 22:
			uParam1->f_2 = { -776.5807f, 181.1033f, 72.2059f };
			uParam1->f_5 = { 11.8135f, 0f, 95.7275f };
			uParam1->f_8 = { -776.8288f, 181.0926f, 72.2551f };
			uParam1->f_11 = { 11.8134f, 0f, 95.7284f };
			uParam1->f_14 = 46.7255f;
			uParam1->f_15 = 5500;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 20:
			switch (func_116())
			{
				case 0:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
				
				case 2:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 40:
			uParam1->f_2 = { -8.0845f, -1450.367f, 36.8585f };
			uParam1->f_5 = { 13.3776f, 0f, 4.513f };
			uParam1->f_8 = { -9.0519f, -1450.444f, 36.8585f };
			uParam1->f_11 = { 13.3776f, 0f, 4.513f };
			uParam1->f_14 = 39.9659f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 27:
			uParam1->f_2 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_5 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_8 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_11 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_14 = 40f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 43:
			uParam1->f_2 = { -7.205f, -1471.656f, 31.1614f };
			uParam1->f_5 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_8 = { -7.2909f, -1471.232f, 31.2546f };
			uParam1->f_11 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_14 = 38.5265f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 61:
			uParam1->f_2 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_5 = { 5.6441f, 0f, -138.7474f };
			uParam1->f_8 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_11 = { 4.8242f, 0f, -118.3167f };
			uParam1->f_14 = 37f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 91:
		case 93:
			uParam1->f_2 = { 1406.112f, 3590.231f, 34.4113f };
			uParam1->f_5 = { 17.5005f, 0f, 55.9579f };
			uParam1->f_8 = { 1405.673f, 3590.525f, 34.4113f };
			uParam1->f_11 = { 18.4979f, 0f, 55.9579f };
			uParam1->f_14 = 56.3199f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 69:
		case 86:
		case 90:
			uParam1->f_2 = { 739.1493f, -990.3961f, 29.85194f };
			uParam1->f_5 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_8 = { 738.4197f, -989.6462f, 30.17581f };
			uParam1->f_11 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_14 = 47.56362f;
			uParam1->f_15 = 6000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 70:
			uParam1->f_2 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_5 = { -0.2f, 0f, -169.6f };
			uParam1->f_8 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_11 = { -0.2f, 0f, -169.6f };
			uParam1->f_14 = 47.6f;
			uParam1->f_15 = 5000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 1;
			break;
		
		case 45:
			uParam1->f_2 = { -458.5666f, 1010.097f, 316.3736f };
			uParam1->f_5 = { 14.47186f, 0f, -18.28884f };
			uParam1->f_8 = { -457.3f, 1011.6f, 316.9f };
			uParam1->f_11 = { 14.5f, 0f, -18.5f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 49:
			uParam1->f_2 = { -723.9982f, -155.7184f, 38.12362f };
			uParam1->f_5 = { 30.12048f, 0f, -99.11243f };
			uParam1->f_8 = { -722.4385f, -155.7817f, 37.4443f };
			uParam1->f_11 = { 2.0429f, 0f, -101.5132f };
			uParam1->f_14 = 45f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 9:
			switch (func_116())
			{
				case 2:
					uParam1->f_2 = { 416.3221f, -960.2586f, 30.6696f };
					uParam1->f_5 = { 21.5747f, 0f, -135.2969f };
					uParam1->f_8 = { 416.8894f, -960.832f, 30.9887f };
					uParam1->f_11 = { 21.9916f, 0f, -135.2969f };
					uParam1->f_14 = 47.1057f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
				
				case 1:
					uParam1->f_2 = { 1393.363f, -2052.581f, 65.4054f };
					uParam1->f_5 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_8 = { 1393.456f, -2052.656f, 68.146f };
					uParam1->f_11 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_14 = 35.9859f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 30:
			uParam1->f_2 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_5 = { 61.9f, 0f, -63.8f };
			uParam1->f_8 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_11 = { 61.9f, 0f, -63.8f };
			uParam1->f_14 = 46.6f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 39:
			uParam1->f_2 = { 3841.93f, 4464.658f, 2.6587f };
			uParam1->f_5 = { 8.4859f, 0.0024f, 143.0775f };
			uParam1->f_8 = { 3842.54f, 4464.184f, 2.6587f };
			uParam1->f_11 = { 8.4859f, 0.0024f, 142.0089f };
			uParam1->f_14 = 34.1544f;
			uParam1->f_15 = 3000;
			uParam1->f_16 = 0;
			break;
		
		case 71:
			uParam1->f_2 = { -1193.1f, -1525.3f, 4.4f };
			uParam1->f_5 = { 9.4f, 0f, -78.8f };
			uParam1->f_8 = { -1192.2f, -1525.1f, 4.4f };
			uParam1->f_11 = { 9.4f, 0f, -78.5f };
			uParam1->f_14 = 30.4f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 74:
			uParam1->f_2 = { -24.2f, -2417.6f, 7.8f };
			uParam1->f_5 = { 10.4f, 0f, 80.4f };
			uParam1->f_8 = { -23.8f, -2414.8f, 7.8f };
			uParam1->f_11 = { 10.4f, 0f, 81.4f };
			uParam1->f_14 = 48.1095f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 84:
		case 85:
		case 65:
			uParam1->f_2 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_5 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_8 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_11 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_14 = 39.4027f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 62:
		case 15:
		case 16:
			uParam1->f_2 = { 1998.215f, 3816.983f, 33.0117f };
			uParam1->f_5 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_8 = { 1997.154f, 3817.004f, 33.1215f };
			uParam1->f_11 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_14 = 36.8186f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			if (iParam0 == 62)
			{
				if (func_116() != 2)
				{
					uParam1->f_2 = { 0f, 0f, 0f };
					uParam1->f_5 = { 0f, 0f, 0f };
					uParam1->f_8 = { 0f, 0f, 0f };
					uParam1->f_11 = { 0f, 0f, 0f };
					uParam1->f_14 = -1f;
					uParam1->f_15 = -1;
					uParam1->f_16 = 0;
				}
			}
			break;
		
		case 63:
			uParam1->f_2 = { 1576f, 3363.9f, 55.5f };
			uParam1->f_5 = { 0.5f, 0f, -123.8f };
			uParam1->f_8 = { 1575.2f, 3364.4f, 49.2f };
			uParam1->f_11 = { -4.3f, 0f, -124.1f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 64:
			uParam1->f_2 = { 1566f, 3378.8f, 42.8f };
			uParam1->f_5 = { -2.4f, 0f, -126.3f };
			uParam1->f_8 = { 1567.6f, 3376.9f, 45f };
			uParam1->f_11 = { 1.6f, 0f, -124.6f };
			uParam1->f_14 = 34.7f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 24:
			uParam1->f_2 = { 1339.573f, -2550.873f, 56.28254f };
			uParam1->f_5 = { -2.348373f, -2.1E-05f, 159.736f };
			uParam1->f_8 = { 1334.491f, -2549.345f, 47.69109f };
			uParam1->f_11 = { 2.789334f, -2.1E-05f, -156.4397f };
			uParam1->f_14 = 25.66f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 25:
			uParam1->f_2 = { 2383.651f, 2624.787f, 46.9527f };
			uParam1->f_5 = { 14.6191f, 0f, 64.366f };
			uParam1->f_8 = { 2383.929f, 2622.802f, 47.2707f };
			uParam1->f_11 = { 33.17714f, -0.13073f, 12.31436f };
			uParam1->f_14 = 35.31843f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 26:
			uParam1->f_2 = { 1755.519f, -1474.981f, 126.1743f };
			uParam1->f_5 = { 4.5341f, 0f, 89.6405f };
			uParam1->f_8 = { 1772.26f, -1475.085f, 125.9465f };
			uParam1->f_11 = { 5.8327f, 0f, 89.6405f };
			uParam1->f_14 = 32.7f;
			uParam1->f_15 = 6500;
			uParam1->f_16 = 0;
			break;
		
		case 3:
			uParam1->f_2 = { -1514.257f, -947.7281f, 15.0253f };
			uParam1->f_5 = { -3.5807f, -0.0001f, -46.3209f };
			uParam1->f_8 = { -1512.601f, -949.2796f, 14.8827f };
			uParam1->f_11 = { -4.7682f, -0.0001f, -34.1393f };
			uParam1->f_14 = 29.9555f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 4:
			uParam1->f_2 = { -698.2578f, -934.4238f, 31.6909f };
			uParam1->f_5 = { -22.0467f, 0f, 32.1888f };
			uParam1->f_8 = { -697.8695f, -935.0406f, 31.9861f };
			uParam1->f_11 = { -20.6093f, 0f, 32.1888f };
			uParam1->f_14 = 30f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 5:
			uParam1->f_2 = { 221.8613f, -830.6434f, 45.3154f };
			uParam1->f_5 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_8 = { 227.5233f, -832.8285f, 45.3154f };
			uParam1->f_11 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 6:
			uParam1->f_2 = { -23.3747f, -120.3161f, 64.139f };
			uParam1->f_5 = { -5.7232f, 0f, 5.1015f };
			uParam1->f_8 = { -22.5824f, -122.52f, 64.139f };
			uParam1->f_11 = { -5.7232f, 0f, 6.6362f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 7:
			uParam1->f_2 = { 803.5977f, -1075.869f, 37.1981f };
			uParam1->f_5 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_8 = { 803.5977f, -1075.869f, 32.7981f };
			uParam1->f_11 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		default:
			uParam1->f_2 = { 0f, 0f, 0f };
			uParam1->f_5 = { 0f, 0f, 0f };
			uParam1->f_8 = { 0f, 0f, 0f };
			uParam1->f_11 = { 0f, 0f, 0f };
			uParam1->f_14 = -1f;
			uParam1->f_15 = -1;
			uParam1->f_16 = 0;
			break;
	}
	if (MISC::GET_HASH_KEY("RAIN") == MISC::GET_PREV_WEATHER_TYPE_HASH_NAME())
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_18)))
		{
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_22)))
		{
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
		}
	}
}

bool func_428()
{
	bool bVar0;
	
	bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
	if (!Global_80336)
	{
		if (!bVar0)
		{
			Global_80336 = 1;
		}
	}
	return bVar0;
}

void func_429()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!func_23())
	{
		if (func_460(0))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("surano"));
			STREAMING::REQUEST_MODEL(joaat("carbonizzare"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")) || !STREAMING::HAS_MODEL_LOADED(joaat("surano"))) || !STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
			{
				MISC::CLEAR_AREA(Local_3311, 5f, true, false, false, false);
				iLocal_3276 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_3311, fLocal_3338, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3276, 112, 112);
				ENTITY::SET_ENTITY_HEALTH(iLocal_3276, 3000, 0, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_3276, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3276, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3276, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3293))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("surano")))
				{
					MISC::CLEAR_AREA(-1037.398f, -491.6539f, 35.5545f, 5f, true, false, false, false);
					iLocal_3293 = VEHICLE::CREATE_VEHICLE(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, true, true, false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_3293, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(iLocal_3293, 3000, 0, 0);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_3293, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surano"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3293, true);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3294))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
				{
					MISC::CLEAR_AREA(Local_3311, 5f, true, false, false, false);
					iLocal_3294 = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, true, true, false);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_3294, 89, 89);
					ENTITY::SET_ENTITY_HEALTH(iLocal_3294, 3000, 0, 0);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_3294, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("carbonizzare"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("carbonizzare"), true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3294, true);
				}
			}
		}
		iLocal_3198 = 0;
		iLocal_3200 = 0;
		iLocal_3362 = 0;
		iLocal_3197 = 1;
	}
	else
	{
		PED::ADD_RELATIONSHIP_GROUP("SecGuards", &iLocal_3593);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_3593);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3593, joaat("player"));
		if (Global_96638 == 1)
		{
			if (func_432() == 0)
			{
				func_431(Local_3329, fLocal_3342, 1, 0);
				iLocal_3198 = 0;
				iLocal_3362 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_RT");
				iLocal_3197 = 3;
			}
			if (func_432() == 1)
			{
				func_431(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3198 = 0;
				iLocal_3362 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FOOT_CHASE_RT");
				iLocal_3197 = 5;
			}
			if (func_432() == 2)
			{
				func_431(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3198 = 0;
				iLocal_3362 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_EVADE_RT");
				iLocal_3197 = 8;
			}
			if (func_432() == 3)
			{
				func_431(-920.0547f, -2744.661f, 12.9322f, 357.1374f, 1, 0);
				func_430();
			}
		}
		else
		{
			if (func_432() == 0)
			{
				func_431(-1019.579f, -484.872f, 36.0795f, 93.7701f, 1, 0);
				iLocal_3198 = 0;
				iLocal_3362 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_RT");
				iLocal_3197 = 2;
			}
			if (func_432() == 1)
			{
				func_431(Local_3329, fLocal_3342, 1, 0);
				iLocal_3198 = 0;
				iLocal_3362 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_RT");
				iLocal_3197 = 3;
			}
			if (func_432() == 2)
			{
				func_431(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3198 = 0;
				iLocal_3362 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FOOT_CHASE_RT");
				iLocal_3197 = 5;
			}
			if (func_432() == 3)
			{
				func_431(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3198 = 0;
				iLocal_3362 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_EVADE_RT");
				iLocal_3197 = 8;
			}
		}
		HUD::REQUEST_ADDITIONAL_TEXT("TREV4", 0);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_430()
{
	if (iLocal_3198 == 0)
	{
		MISC::CLEAR_AREA(-920.0547f, -2744.662f, 12.8434f, 20f, true, false, false, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		iLocal_3198++;
	}
	if (iLocal_3198 == 1)
	{
		STREAMING::LOAD_SCENE(-920.0547f, -2744.662f, 12.8434f);
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			func_21(0, -1, 1);
			CAM::DO_SCREEN_FADE_IN(800);
		}
		func_6();
	}
}

void func_431(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_23())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		MISC::CLEAR_BIT(&(Global_102486.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		Global_102482 = { Param0 };
		Global_102485 = fParam3;
		Global_102481 = 1;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(Global_102486.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_102486.f_20), 14);
		}
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_102486.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_102486.f_20), 24);
		}
		func_22(1);
	}
}

int func_432()
{
	if (!Global_102486 == 10 && !Global_102486 == 9)
	{
		return 0;
	}
	return Global_102486.f_2;
}

void func_433()
{
	if (iLocal_3507[0] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[7]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[7], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3138[7], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_3507[0] = 1;
			}
		}
	}
	if (iLocal_3515[0] == 0)
	{
		if (iLocal_3507[0] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[7]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[7], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3138[7], 0f);
					iLocal_3515[0] = 1;
				}
				else if (iLocal_3197 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3138[7], 0f);
					iLocal_3515[0] = 1;
				}
			}
			else
			{
				iLocal_3515[0] = 1;
			}
		}
	}
	if (iLocal_3507[1] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[8]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[8], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3138[8], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_3507[1] = 1;
			}
		}
	}
	if (iLocal_3515[1] == 0)
	{
		if (iLocal_3507[1] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[8]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[8], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3138[8], 0f);
					iLocal_3515[1] = 1;
				}
				else if (iLocal_3197 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3138[8], 0f);
					iLocal_3515[1] = 1;
				}
			}
			else
			{
				iLocal_3515[1] = 1;
			}
		}
	}
	if (iLocal_3507[2] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[11]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[11], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3138[11], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_3507[2] = 1;
			}
		}
	}
	if (iLocal_3515[2] == 0)
	{
		if (iLocal_3507[2] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[11]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[11], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3138[11], 0f);
					iLocal_3515[2] = 1;
				}
				else if (iLocal_3197 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3138[11], 0f);
					iLocal_3515[2] = 1;
				}
			}
			else
			{
				iLocal_3515[2] = 1;
			}
		}
	}
	if (iLocal_3507[3] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[12]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[12], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3138[12], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_3507[3] = 1;
			}
		}
	}
	if (iLocal_3515[3] == 0)
	{
		if (iLocal_3507[3] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[12]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[12], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3138[12], 0f);
					iLocal_3515[3] = 1;
				}
				else if (iLocal_3197 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3138[12], 0f);
					iLocal_3515[3] = 1;
				}
			}
			else
			{
				iLocal_3515[3] = 1;
			}
		}
	}
	if (iLocal_3507[4] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[13]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[13], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3138[13], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_3507[4] = 1;
			}
		}
	}
	if (iLocal_3515[4] == 0)
	{
		if (iLocal_3507[4] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[13]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[13], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3138[13], 0f);
					iLocal_3515[4] = 1;
				}
				else if (iLocal_3197 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3138[13], 0f);
					iLocal_3515[4] = 1;
				}
			}
			else
			{
				iLocal_3515[4] = 1;
			}
		}
	}
	if (iLocal_3507[5] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[14]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[14], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3138[14], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_3507[5] = 1;
			}
		}
	}
	if (iLocal_3515[5] == 0)
	{
		if (iLocal_3507[5] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[14]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[14], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3138[14], 0f);
					iLocal_3515[5] = 1;
				}
				else if (iLocal_3197 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3138[14], 0f);
					iLocal_3515[5] = 1;
				}
			}
			else
			{
				iLocal_3515[5] = 1;
			}
		}
	}
	if (iLocal_3507[6] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[15]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[15], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3138[15], "SOL_3_POLICE_CARS_Group", 0f);
				iLocal_3507[6] = 1;
			}
		}
	}
	if (iLocal_3515[6] == 0)
	{
		if (iLocal_3507[6] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[15]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[15], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3138[15], 0f);
					iLocal_3515[6] = 1;
				}
				else if (iLocal_3197 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3138[15], 0f);
					iLocal_3515[6] = 1;
				}
			}
			else
			{
				iLocal_3515[6] = 1;
			}
		}
	}
}

void func_434()
{
	switch (iLocal_3197)
	{
		case 2:
			if (iLocal_3198 > 0)
			{
				if (iLocal_3202 == 0)
				{
					iLocal_3381 = 0;
					iLocal_3540 = 0;
					iLocal_3573 = 0;
					iLocal_3574 = 0;
					func_17(&uLocal_3595, 1, 0, "Devin", 0, 1);
					func_17(&uLocal_3595, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					iLocal_3202 = 1;
				}
				if (iLocal_3202 == 1)
				{
					if (iLocal_3381 == 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_3335, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 2f)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0))
								{
									iLocal_3381 = 1;
								}
							}
						}
					}
					if (iLocal_3540 == 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_3335, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 100f)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (func_437(&uLocal_3595, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 4);
									iLocal_3540 = 1;
								}
							}
						}
					}
					if (iLocal_3573 == 0 && iLocal_3540 == 1)
					{
						if (func_436())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0))
								{
									iLocal_3573 = 1;
								}
							}
						}
					}
					if (iLocal_3574 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
							{
								if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3275, 1) < 200f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3275))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 12f, 4);
												iLocal_3574 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_3198 >= 0)
			{
				if (iLocal_3202 == 0)
				{
					iLocal_3541[0] = 0;
					iLocal_3541[1] = 0;
					iLocal_3541[2] = 0;
					iLocal_3541[3] = 0;
					iLocal_3570 = 0;
					iLocal_3571 = 0;
					iLocal_3572 = 0;
					iLocal_3575 = 0;
					iLocal_3576 = 0;
					iLocal_3577 = 0;
					iLocal_3578 = 0;
					iLocal_3579 = 0;
					iLocal_3216 = MISC::GET_GAME_TIMER();
					func_17(&uLocal_3595, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					func_17(&uLocal_3595, 4, 0, "SOL3COP", 0, 1);
					iLocal_3202 = 1;
				}
				if (iLocal_3202 == 1)
				{
					if (iLocal_3574 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
							{
								if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3275, 1) < 200f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3275))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												iLocal_3574 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
							{
								if (iLocal_3541[0] == 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[7], false) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[8], false))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 7000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 28000f)
										{
											if (!func_289())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0))
													{
														iLocal_3541[0] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3541[1] == 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[7], false) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[8], false))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 28000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 34500f)
										{
											if (!func_289())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0))
													{
														RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
														iLocal_3541[1] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3541[2] == 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[7], false) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3138[8], false))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 36000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 41000f)
										{
											if (!func_289())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0))
													{
														RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 4f, 4);
														iLocal_3541[2] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3571 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 41000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 43500f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3282) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3282))
										{
											if (!func_289())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0))
													{
														RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
														iLocal_3571 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3572 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 50509f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 50872f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3282) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3282))
										{
											if (!func_289())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0))
													{
														iLocal_3572 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3541[3] == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 58000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 68000f)
									{
										if (!func_289())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0))
												{
													iLocal_3541[3] = 1;
												}
											}
										}
									}
								}
								if (iLocal_3575 == 0 && iLocal_3541[3] == 1)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 76000f)
									{
										if (!func_289())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0))
												{
													iLocal_3575 = 1;
												}
											}
										}
									}
								}
								if (iLocal_3570 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 80000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 82000f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3277[0]))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3277[0], false))
											{
												if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3277[0]))
												{
													if (!func_289())
													{
														if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														{
															if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0))
															{
																RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
																iLocal_3570 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3576 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 82100f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 83500f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[11]))
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3138[11]))
											{
												if (!func_289())
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3576 = 1;
														}
													}
												}
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3138[12]))
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3138[12]))
											{
												if (!func_289())
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3576 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3579 == 0)
								{
									if ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 101891f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 105000f) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3275))
									{
										if (!func_289())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0))
												{
													RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
													iLocal_3579 = 1;
												}
											}
										}
									}
								}
								if (((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 105500f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 119000f) && MISC::GET_GAME_TIMER() > iLocal_3216 + 7000) && iLocal_3578 == 0)
								{
									if (!func_289())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3216 = MISC::GET_GAME_TIMER();
												iLocal_3578 = 1;
											}
										}
									}
								}
								if (iLocal_3577 == 0 && iLocal_3578 == 1)
								{
									if (!func_289())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0))
											{
												iLocal_3577 = 1;
											}
										}
									}
								}
								if (((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 105500f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 119000f) && MISC::GET_GAME_TIMER() > iLocal_3216 + 7000) && iLocal_3577 == 1)
								{
									if (!func_289())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3216 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_3198 > 0)
			{
				if (iLocal_3202 == 0)
				{
					iLocal_3547 = 0;
					iLocal_3580 = 0;
					iLocal_3586 = 0;
					iLocal_3581 = 1;
					iLocal_3221 = MISC::GET_GAME_TIMER();
					func_17(&uLocal_3595, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_3239))
					{
						func_17(&uLocal_3595, 2, iLocal_3239, "MOLLY", 0, 1);
					}
					iLocal_3202 = 1;
				}
				if (iLocal_3202 == 1)
				{
					if (iLocal_3586 == 0)
					{
						AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_3586 = 1;
					}
					if (iLocal_3581 == 1)
					{
						if (iLocal_3547 == 0)
						{
							if (!func_289())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (func_290(&uLocal_3595, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 6f, 4);
										iLocal_3217 = MISC::GET_GAME_TIMER();
										iLocal_3547 = 1;
										iLocal_3580 = 1;
										iLocal_3581 = 0;
									}
								}
							}
						}
						if (MISC::GET_GAME_TIMER() > iLocal_3217 + 5000)
						{
							if (!func_289())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (func_290(&uLocal_3595, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 6f, 4);
										iLocal_3217 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_3580 == 1 && MISC::GET_GAME_TIMER() > iLocal_3221 + 4000)
					{
						if (!func_289())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 6f, 4);
									iLocal_3221 = MISC::GET_GAME_TIMER();
									iLocal_3581 = 1;
									iLocal_3580 = 0;
								}
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_3198 > 0)
			{
				if (iLocal_3202 == 0)
				{
					iLocal_3548 = 0;
					iLocal_3549 = 0;
					iLocal_3550 = 0;
					iLocal_3582 = 0;
					iLocal_3583 = 0;
					func_17(&uLocal_3595, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_3239))
					{
						func_17(&uLocal_3595, 2, iLocal_3239, "MOLLY", 0, 1);
					}
					iLocal_3202 = 1;
				}
				if (iLocal_3202 == 1)
				{
					if (iLocal_3548 == 0)
					{
						if (!func_289())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_290(&uLocal_3595, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0))
								{
									iLocal_3548 = 1;
								}
							}
						}
					}
					if (iLocal_3548 == 1 && iLocal_3550 == 0)
					{
						if (!func_289())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_290(&uLocal_3595, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0))
								{
									iLocal_3550 = 1;
								}
							}
						}
					}
					if (iLocal_3549 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
						{
							if (!PED::IS_PED_INJURED(iLocal_3239))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3226))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3226) > 0.65f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3226) < 0.835f)
									{
										if (!func_289())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (func_290(&uLocal_3595, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0))
												{
													RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 8f, 4);
													iLocal_3549 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3582 == 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
						{
							if (!func_289())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0))
									{
										iLocal_3582 = 1;
									}
								}
							}
						}
					}
					if (iLocal_3582 == 1 && iLocal_3583 == 0)
					{
						if (!func_289())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0))
								{
									iLocal_3583 = 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (iLocal_3198 > 0)
			{
				if (iLocal_3202 == 0)
				{
					iLocal_3584 = 0;
					iLocal_3222 = MISC::GET_GAME_TIMER();
					func_17(&uLocal_3595, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					iLocal_3202 = 1;
				}
				if (iLocal_3202 == 1)
				{
					if (iLocal_3584 == 0)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_3274 = func_435(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3274))
							{
								if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3274, 1) < 40f)
								{
									if (!func_289())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3584 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3584 == 1 && MISC::GET_GAME_TIMER() > iLocal_3222 + 5000)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_3274 = func_435(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3274))
							{
								if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3274, 1) < 40f)
								{
									if (!func_289())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_290(&uLocal_3595, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3222 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_435(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar17]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar17]))
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar17]))
								{
									return iVar0[iVar17];
								}
							}
							else
							{
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2) <= (iVar0 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar0[(iVar17 + iParam2)]))
							{
								if (!PED::IS_PED_INJURED(iVar0[(iVar17 + iParam2)]))
								{
									if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[(iVar17 + iParam2)]))
											{
												return iVar0[(iVar17 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar17 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}

int func_436()
{
	if (Global_23023 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_437(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_288(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_23071 = 1;
	Global_23030 = 1;
	Global_23037 = 0;
	Global_23032 = 0;
	Global_24014 = 0;
	Global_24016 = 0;
	Global_24020 = 0;
	Global_23028 = 0;
	Global_23075 = 0;
	Global_23077 = 0;
	Global_2883585 = 0;
	return func_277(sParam3, iParam4, bParam7);
}

void func_438()
{
	if (((iLocal_3197 == 4 || iLocal_3197 == 5) || iLocal_3197 == 8) || iLocal_3197 == 6)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_439(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2, 200, 0))
			{
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			}
		}
	}
	if (iLocal_3527 == 0)
	{
		if (iLocal_3197 == 4)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_439(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2, 200, 0))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					iLocal_3527 = 1;
				}
			}
		}
	}
}

int func_439(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	bool bVar110;
	int iVar111;
	
	bVar110 = false;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], bVar110, true))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

void func_440()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_3276 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
}

void func_441()
{
	if (iLocal_3368 == 1)
	{
		if (iLocal_3197 == 4)
		{
			if (iLocal_3199 > 1 && iLocal_3492 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -828.6987f, -2938.073f, 12.21745f, -807.6911f, -2905.148f, 16.35626f, 28f, false, true, 0))
				{
					func_263("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3197 == 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3300))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_3305))
				{
					if (func_16(PLAYER::PLAYER_PED_ID(), iLocal_3300, 1) > 100f)
					{
						func_263("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_3197 == 4)
		{
			if (iLocal_3199 == 2)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3211 + 7000 && iLocal_3525 == 0)
				{
					func_263("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3197 == 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 62000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 77000f)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1219f, -2570f, 13f, true) < 210f)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (ENTITY::GET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < 200f && ENTITY::GET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 125f)
									{
										if (iLocal_3524 == 0)
										{
											iLocal_3214 = MISC::GET_GAME_TIMER();
											iLocal_3524 = 1;
										}
										if (iLocal_3524 == 1 && MISC::GET_GAME_TIMER() > iLocal_3214 + 4000)
										{
											func_263("TRV4_FAIL1");
										}
									}
									else if (iLocal_3524 == 1)
									{
										iLocal_3524 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3197 == 5 || iLocal_3197 == 6)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -928.9f, -2935f, 13f, true) < 5f && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_263("TRV4_FAIL1");
			}
		}
		if (iLocal_3197 == 2 || iLocal_3197 == 4)
		{
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (func_439(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2, 200, 0))
				{
					func_263("TRV4_FAIL2");
				}
				else if (!func_238("TRV4_HELP3"))
				{
					func_444("TRV4_HELP3");
				}
			}
			else if (func_238("TRV4_HELP3"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
				{
					if (!PED::IS_PED_INJURED(iLocal_3239))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3239, false, 0);
						ENTITY::SET_ENTITY_HEALTH(iLocal_3239, 0, 0, 0);
					}
				}
			}
		}
		if (iLocal_3377 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
			{
				if (PED::IS_PED_INJURED(iLocal_3239))
				{
					func_263("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_3197 == 4)
		{
			if (iLocal_3369 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_3239))
				{
					if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3239) > 300f)
					{
						if (iLocal_3453 == 1)
						{
							HUD::CLEAR_PRINTS();
							func_20("TRV4_WARN1", 7500, 1);
							iLocal_3453 = 0;
						}
					}
					else if (iLocal_3453 == 0)
					{
						iLocal_3453 = 1;
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) < 40000f)
							{
								if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3239) > 400f)
								{
									func_263("TRV4_FAIL1");
								}
							}
							else if (func_13(PLAYER::PLAYER_PED_ID(), iLocal_3239) > 350f)
							{
								func_263("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_3199 == 3)
			{
				if (iLocal_3493 == 1)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -934.4f, -2927.2f, 13.2f, true) > 25f || MISC::GET_GAME_TIMER() > iLocal_3212 + 12000)
					{
						func_263("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_3197 == 2 || iLocal_3197 == 4)
		{
			if (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				func_263("TRV4_FAIL1");
			}
		}
		if (iLocal_3197 == 4)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3275))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 111509f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1070.838f, -2942.241f, 12.19534f, -1009.038f, -2977.609f, 17.44443f, 89.5f, false, true, 0))
						{
							func_263("TRV4_FAIL1");
						}
					}
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3275) > 122000f)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (ENTITY::IS_ENTITY_UPSIDEDOWN(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (iLocal_3526 == 0)
								{
									iLocal_3215 = MISC::GET_GAME_TIMER();
									iLocal_3526 = 1;
								}
								if (iLocal_3526 == 1)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_3215 + 4000)
									{
										func_263("TRV4_FAIL1");
									}
								}
							}
							else
							{
								iLocal_3526 = 0;
							}
						}
					}
				}
			}
		}
		if (iLocal_3197 == 2)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.4108f, -2173.417f, -1.911488f, -605.6846f, -2358.229f, 27.32842f, 250f, false, true, 0))
			{
				func_263("TRV4_FAIL1");
			}
		}
		if (iLocal_3454 == 1)
		{
			if (func_443())
			{
				func_442();
			}
		}
	}
}

void func_442()
{
	func_450(PLAYER::PLAYER_PED_ID(), 0);
	func_446();
}

int func_443()
{
	if (Global_4)
	{
		return 1;
	}
	if (Global_102486 == 7 || Global_102486 == 8)
	{
		return 1;
	}
	return 0;
}

void func_444(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_445(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_114019, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_114013 = 1;
	}
	else
	{
		StringCopy(&Global_114019, "NULL", 24);
		Global_114013 = 0;
	}
}

void func_446()
{
	func_452(24, 1);
	AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, true, true);
	func_447();
	func_237(&uLocal_45, 0, 0, 0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3288))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3288);
	}
	func_445(0);
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_3238))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_3238);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3239))
	{
		if (!PED::IS_PED_INJURED(iLocal_3239))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3239, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3239);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
	{
		if (!PED::IS_PED_INJURED(iLocal_3245))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3245, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3245);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3262))
	{
		if (!PED::IS_PED_INJURED(iLocal_3262))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3262, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3262);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3263))
	{
		if (!PED::IS_PED_INJURED(iLocal_3263))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3263, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3263);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3264))
	{
		if (!PED::IS_PED_INJURED(iLocal_3264))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3264, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3264);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
	{
		if (!PED::IS_PED_INJURED(iLocal_3265))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3265, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3265);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
	{
		if (!PED::IS_PED_INJURED(iLocal_3266))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3266, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3266);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267))
	{
		if (!PED::IS_PED_INJURED(iLocal_3267))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3267, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3267);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3240[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3240[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3240[0], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3240[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3240[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3240[1]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3240[1], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3240[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3240[2]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3240[2]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3240[2], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3240[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3240[3]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3240[3]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3240[3], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3240[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3246[0]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3246[0]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_3246[0], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_3246[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3246[1]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3246[1]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_3246[1], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_3246[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3246[2]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3246[2]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_3246[2], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_3246[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3250[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3250[0], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3250[1]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3250[1], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[2]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3250[2]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3250[2], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[3]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3250[3]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3250[3], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[4]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3250[4]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3250[4], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[4]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[5]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3250[5]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3250[5], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[5]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[6]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3250[6]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3250[6], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[6]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[7]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3250[7]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3250[7], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[7]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[8]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3250[8]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3250[8], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[8]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[9]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3250[9]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3250[9], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[9]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[10]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3250[10]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3250[10], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[10]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3268[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3268[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3268[0], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3268[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3271[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3271[0], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3271[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3271[1]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3271[1], true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3271[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3275);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_3276, false))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3276);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3281))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3281);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3282))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3282);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3283);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3284))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3284);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3288))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3288);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3292))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_3292, false))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3292);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3296[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3296[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3296[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3296[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3277[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3277[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3277[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3277[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3296[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3296[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3296[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3296[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3285[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3285[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3285[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3285[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3289[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3289[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3280))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3280);
	}
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_START");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_GAMEPLAY_START");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_START_CS_SKIP");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_START_RT");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_FOOT_CHASE_RT");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_EVADE_RT");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_CAR_ENTERED");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_AIRPORT_ENTERED");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_CHASE");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_JET_ENTERED");
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_3237))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_3237, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3780))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3780, false);
	}
	HUD::CLEAR_GPS_MULTI_ROUTE();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_3310);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
	PATHFIND::SET_ROADS_IN_AREA(-617f, -2274f, 0f, -406.01f, -2044f, 15f, true, true);
	PATHFIND::SET_ROADS_IN_AREA(-482f, -2118f, 6f, -1072f, -2724f, 17f, true, true);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", false, 0.5f, 1f);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	MISC::SET_TIME_SCALE(1f);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	STREAMING::REMOVE_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
	func_320(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	if (func_19(2))
	{
		func_18(2, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_447()
{
	int iVar0;
	
	Global_65092 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_65093[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_448()
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_114963.f_9094 || func_460(0))
	{
		if (!func_449())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_266(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_93213[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_271();
		}
	}
}

int func_449()
{
	if (((Global_102486 == 13 || Global_102486 == 10) || Global_102486 == 11) || Global_102486 == 12)
	{
		return 0;
	}
	return 1;
}

void func_450(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_451(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_102523 > 0)
	{
		Global_108504.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_105520.f_21[iParam1] = iVar0;
	}
}

int func_451(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_102523 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_108504.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_108504.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_108504.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_108504.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_105520.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_105520.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_105520.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_105520.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_452(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_456(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_455(iParam0, 1);
				return;
			}
			iVar2 = INTERIOR::GET_INTERIOR_FROM_PRIMARY_VIEW();
			if (iVar2 != 0 && iVar2 == iVar1)
			{
				func_455(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (func_453(iParam0))
			{
				func_455(iParam0, 0);
			}
		}
		INTERIOR::DISABLE_INTERIOR(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_453(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_454(iParam0) };
	if (Var0.f_1 != -1 && BitTest(Global_40258[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_454(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = (iParam0 % 32);
	Var0.f_1 = (iParam0 / 32);
	if (Var0.f_1 >= 8)
	{
		Var0.f_0 = -1;
		Var0.f_1 = -1;
	}
	return Var0;
}

void func_455(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_454(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_40258[Var0.f_1]), Var0.f_0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_40258[Var0.f_1]), Var0.f_0);
	}
}

var func_456(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_457(iParam0) };
	*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_457(int iParam0)
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_459(1, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_459(2, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_459(3, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_459(4, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_459(5, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_459(6, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_459(7, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1312440[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_459(35, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_459(36, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_459(37, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_459(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_459(39, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_459(40, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_459(41, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_459(42, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_459(43, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var5 = { func_459(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_459(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_459(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_459(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_459(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_459(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_459(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_459(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_459(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_459(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_459(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_459(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_459(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_459(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_459(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_459(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_459(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_459(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_459(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_459(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_459(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_459(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_459(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_459(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_459(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_459(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_459(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_459(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_459(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_459(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_459(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_459(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_459(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_459(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_459(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_459(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_459(91, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_459(97, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var5 = { func_459(103, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var5 = { func_459(104, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var5 = { func_459(105, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var5 = { func_459(106, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var5 = { func_459(107, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var5 = { func_459(108, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var5 = { func_459(109, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var5 = { func_459(110, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var5 = { func_459(111, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var5 = { func_459(112, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var5 = { func_459(113, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var5 = { func_459(114, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var5 = { func_459(103, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var5 = { func_459(106, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var5 = { func_459(109, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var5 = { func_459(112, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
		case 212:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 223:
			Var0 = { 2920f, 4470f, -100f };
			Var0.f_3 = "sf_dlc_warehouse_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 197:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 1103.562f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 214:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 215:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 216:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 217:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 218:
			Var0 = { -2000f, 1113.4f, 25.7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 219:
			Var0 = { -1350f, 160f, -99.2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 220:
			Var0 = { 1.1f, -705.6f, 16.1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 221:
			Var0 = { -1010f, -70f, -99.4f };
			Var0.f_3 = "sf_dlc_studio_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 222:
			Var0 = { 1550f, 250f, -50f };
			Var0.f_3 = "h4_dlc_int_02_h4";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 224:
			Var0 = { -935.7f, -2992.2f, 13.9f };
			Var0.f_3 = "v_hanger";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 225:
			Var0 = { 730f, -2990f, -39f };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 226:
			Var0 = { 152.3f, -1004.4f, -97.8f };
			Var0.f_3 = "v_motel_mp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 227:
			Var0 = { 170f, 5190f, 10f };
			Var0.f_3 = "xs_x18_int_mod2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 228:
			Var0 = { 850f, -3000f, -50f };
			Var0.f_3 = "reh_dlc_int_04_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 229:
			Var0 = { 495f, -2560f, -50f };
			Var0.f_3 = "xm3_DLC_INT_04_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 230:
			Var0 = { 570f, -415.1f, -69.6f };
			Var0.f_3 = "xm3_DLC_INT_03_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 231:
			Var0 = { 984.4f, -95.4f, 76.8f };
			Var0.f_3 = "bkr_biker_dlc_int_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 232:
			Var0 = { -880f, -2770f, -49f };
			Var0.f_3 = "M23_1_dlc_int_01_M23_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 233:
			Var0 = { 800f, -3000f, -69f };
			Var0.f_3 = "reh_dlc_int_03_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 234:
			Var0 = { 930.1f, -2269.9f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 235:
			Var0 = { 930.1f, -2240.1f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 236:
			Var0 = { 930.1f, -2213.2f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 237:
			Var0 = { 930.1f, -2183.4f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 238:
			Var0 = { 1000f, -2200f, -50f };
			Var0.f_3 = "m23_2_dlc_int_warehouse2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 239:
			Var0 = { 1000f, -2230f, -50f };
			Var0.f_3 = "m23_2_dlc_int_warehouse2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 240:
			Var0 = { 1220f, -2280f, -49f };
			Var0.f_3 = "m23_2_int_warehouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 241:
			Var0 = { -1421.015f, -3012.587f, -80f };
			Var0.f_3 = "ba_dlc_int_03_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 242:
			Var0 = { -2000f, 1113.2f, 27.6f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 243:
			Var0 = { Global_4718592.f_236570[0 /*160*/].f_16 };
			Var0.f_3 = func_458(&(Global_4718592.f_236570[0 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 244:
			Var0 = { Global_4718592.f_236570[1 /*160*/].f_16 };
			Var0.f_3 = func_458(&(Global_4718592.f_236570[1 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 245:
			Var0 = { Global_4718592.f_236570[2 /*160*/].f_16 };
			Var0.f_3 = func_458(&(Global_4718592.f_236570[2 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 246:
			Var0 = { Global_4718592.f_236570[3 /*160*/].f_16 };
			Var0.f_3 = func_458(&(Global_4718592.f_236570[3 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 247:
			Var0 = { Global_4718592.f_236570[4 /*160*/].f_16 };
			Var0.f_3 = func_458(&(Global_4718592.f_236570[4 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 248:
			Var0 = { -196.14f, -580.65f, 135f };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = "imp_dt1_02_cargarage_a";
			break;
	}
	switch (iParam0)
	{
		case 249:
			Var0 = { -24.4f, -73.8f, -75f };
			Var0.f_3 = "m25_1_int_tycoon_studio_lo";
			Var0.f_4 = "m25_1_int_tycoon_studio_lo";
			break;
		
		case 250:
			Var0 = { 60.37f, -80.918f, -75f };
			Var0.f_3 = "m25_1_int_tycoon_studio_mid";
			Var0.f_4 = "m25_1_int_tycoon_studio_mid";
			break;
		
		case 251:
			Var0 = { 2675.3f, 5927.8f, -65.6f };
			Var0.f_3 = "m26_1_int_sewers_access";
			Var0.f_4 = "m26_1_int_sewers_access";
			break;
		
		case 252:
			Var0 = { 2693.7f, 5877.5f, -61f };
			Var0.f_3 = "m26_1_int_loading_bay_tun";
			Var0.f_4 = "m26_1_int_loading_bay_tun";
			break;
		
		case 253:
			Var0 = { 2603.2f, 5903.8f, -49f };
			Var0.f_3 = "m26_1_int_exhibition_room";
			Var0.f_4 = "m26_1_int_exhibition_room";
			break;
		
		case 254:
			Var0 = { 2631.4f, 5893.9f, -61f };
			Var0.f_3 = "m26_1_int_exhibition_base";
			Var0.f_4 = "m26_1_int_exhibition_base";
			break;
		
		case 255:
			Var0 = { 2583.9f, 5961.4f, -49f };
			Var0.f_3 = "m26_1_int_art_worshop";
			Var0.f_4 = "m26_1_int_art_worshop";
			break;
	}
	if (func_84(Var0))
	{
	}
	return Var0;
}

var func_458(var uParam0)
{
	return uParam0;
}

struct<6> func_459(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_460(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_80586, 0);
}

