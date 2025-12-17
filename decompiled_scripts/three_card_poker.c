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
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = -1;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = -2;
	var uLocal_108 = -2;
	var uLocal_109 = -2;
	var uLocal_110 = 5;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 2;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 2;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	struct<592> Local_138 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 32, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 32;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	struct<9> Local_771[32];
	struct<857> Local_1060 = { 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, -1, -1, 0, 0, 0, 4, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1917 = 3;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	struct<23> Local_1925 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_1948 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_1964 = 0;
	int iLocal_1965 = 0;
	int iLocal_1966 = 0;
	bool bLocal_1967 = 0;
	int iLocal_1968 = 0;
	int iLocal_1969 = 0;
	int iLocal_1970 = 0;
	bool bLocal_1971 = 0;
	bool bLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	int iLocal_1975 = 0;
	int iLocal_1976 = 0;
	int iLocal_1977 = 0;
	int iLocal_1978[4] = { 0, 0, 0, 0 };
	int iLocal_1983[4] = { 0, 0, 0, 0 };
	int iLocal_1988 = 0;
	int iLocal_1989 = 0;
	bool bLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	int iLocal_1993 = 0;
	int iLocal_1994 = 0;
	int iLocal_1995 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	fLocal_63 = 0f;
	iLocal_1966 = 1;
	func_460();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_452())
		{
			func_448();
		}
		if (Global_1971512)
		{
			Global_1971512 = 0;
			func_448();
		}
		if (Global_2635562.f_2982 && Global_2640098 != 0)
		{
			if (Global_2640098 != 6)
			{
				func_448();
			}
		}
		if (func_447() && CAM::IS_SCREEN_FADED_OUT())
		{
			func_448();
		}
		if ((!func_446(PLAYER::PLAYER_ID()) && !func_445(PLAYER::PLAYER_ID())) && !func_444(PLAYER::PLAYER_ID()))
		{
			func_448();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !BitTest(Global_4718592.f_35, 6))
		{
			func_448();
		}
		if (func_445(PLAYER::PLAYER_ID()) && func_440() != func_439())
		{
			if (BitTest(Global_2658291[func_440() /*468*/].f_325.f_4, 0) && CAM::IS_SCREEN_FADED_OUT())
			{
				func_448();
			}
		}
		if (func_445(PLAYER::PLAYER_ID()) && func_440() != func_439())
		{
			if (Global_2658291[func_440() /*468*/].f_459 != Global_1971521 && CAM::IS_SCREEN_FADED_OUT())
			{
				func_448();
			}
		}
		if (func_445(PLAYER::PLAYER_ID()) && func_437() != 0)
		{
			func_448();
		}
		if (func_445(PLAYER::PLAYER_ID()) && func_435(PLAYER::PLAYER_ID()))
		{
			func_448();
		}
		iVar0 = 0;
		while (iVar0 < Local_1060.f_28)
		{
			if ((!func_434() && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_50[iVar0])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iVar0]))
			{
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_138.f_50[iVar0], true);
			}
			iVar0++;
		}
		func_91();
		if (func_434())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	func_90();
	func_87();
	func_81();
	iVar0 = 0;
	while (iVar0 < Local_1060.f_28)
	{
		switch (Local_138.f_586[iVar0])
		{
			case 0:
				if (Global_2709979 != iVar0 && (Global_2709979 != -1 || func_445(PLAYER::PLAYER_ID())))
				{
					Local_138.f_25[iVar0] = 1;
					func_80(&(Local_138.f_168[iVar0 /*55*/]));
					func_79(1, iVar0);
				}
				break;
			
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iVar0])))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iVar0]))
					{
						Local_138.f_45[iVar0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_138.f_35[iVar0]);
						if (Local_138.f_45[iVar0] != -1)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iVar0]), func_78(), func_77(iVar0), 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iVar0]), joaat("blend_out")))
								{
									Local_138.f_35[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iVar0]), Local_138.f_35[iVar0], func_78(), func_74(iVar0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iVar0]);
								}
							}
							else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iVar0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iVar0]), joaat("blend_out")))
							{
								Local_138.f_35[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iVar0]), Local_138.f_35[iVar0], func_78(), func_77(iVar0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iVar0]);
							}
						}
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_50[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_138.f_117[(iVar0 * 4 + iVar1)] != func_439() && Global_2709979 != iVar0) && (Global_2709979 != -1 || func_445(PLAYER::PLAYER_ID())))
					{
						func_79(2, iVar0);
						Local_138.f_40[iVar0] = iVar1;
						func_73(&(Local_138.f_159[iVar0 /*2*/]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			
			case 2:
				if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iVar0])) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iVar0])))
				{
					if (func_72(&(Local_138.f_159[iVar0 /*2*/])) && func_71(&(Local_138.f_159[iVar0 /*2*/]), 2000, 0))
					{
						Local_138.f_35[iVar0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iVar0), 0f, 0f, func_75(iVar0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iVar0]), Local_138.f_35[iVar0], func_78(), func_70(iVar0, Local_138.f_40[iVar0]), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iVar0]);
						func_69(&(Local_138.f_159[iVar0 /*2*/]));
					}
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	struct<3> Var11;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	struct<5> Var25;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	bool bVar34;
	
	iVar3 = 0;
	iVar4 = 0;
	bVar6 = false;
	if (Local_138.f_576[iParam0] > 7 && Local_138.f_576[iParam0] < 12)
	{
		bVar6 = true;
	}
	if ((!func_68(iParam0, bVar6) || Global_2709979 == iParam0) || Local_138[iParam0])
	{
		Local_138[iParam0] = 1;
		func_67(iParam0);
		return;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_50[iParam0]))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
		{
			Local_138.f_10[iParam0] = 0;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]);
		}
		else if (!Local_138.f_10[iParam0])
		{
			NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_138.f_50[iParam0], false);
			Local_138.f_10[iParam0] = 1;
		}
	}
	Local_138.f_45[iParam0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_138.f_35[iParam0]);
	switch (Local_138.f_576[iParam0])
	{
		case 0:
			func_66(1, iParam0);
			break;
		
		case 1:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_138.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (Local_771[iVar1 /*9*/] != 0 || Local_771[iVar1 /*9*/].f_6 != 0)
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_65(&(Local_138.f_168[iParam0 /*55*/]));
				func_64(iParam0);
				func_66(2, iParam0);
			}
			break;
		
		case 2:
			bVar0 = true;
			iVar2 = 0;
			while (iVar2 < 4)
			{
				iVar1 = Local_138.f_117[(iParam0 * 4 + iVar2)];
				if (iVar1 != -1)
				{
					if (!BitTest(Local_771[iVar1 /*9*/].f_6, 0))
					{
						bVar0 = false;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_66(3, iParam0);
			}
			break;
		
		case 3:
			if (!func_63(iParam0, 18))
			{
				if (func_53(12, &(Local_138.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 18);
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
				{
					if (Local_138.f_45[iParam0] != -1)
					{
						if (Local_138.f_30[iParam0] == 1)
						{
							if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out"))) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), func_78(), func_77(iParam0), 3))
							{
								Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
							}
						}
						else if (((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
						{
							Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_78(), func_50(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), func_78(), func_77(iParam0), 3))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out")))
							{
								Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_78(), func_74(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
							}
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out")))
						{
							Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
						}
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]);
				}
			}
			bVar0 = true;
			iVar3 = 0;
			iVar4 = 0;
			if (!func_72(&(Local_138.f_150[iParam0 /*2*/])))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_138.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						iVar3++;
						if (Local_771[iVar1 /*9*/].f_3 > 0 || Local_771[iVar1 /*9*/].f_5 > 0)
						{
							func_73(&(Local_138.f_150[iParam0 /*2*/]), 0, 0);
						}
						else
						{
							iVar4++;
						}
					}
					iVar2++;
				}
				if (iVar3 == iVar4)
				{
					if (!func_72(&(Local_138.f_591[iParam0 /*2*/])))
					{
						func_73(&(Local_138.f_591[iParam0 /*2*/]), 0, 0);
					}
					else if (func_71(&(Local_138.f_591[iParam0 /*2*/]), 60000, 0))
					{
						func_64(iParam0);
						func_69(&(Local_138.f_591[iParam0 /*2*/]));
					}
					else if (func_71(&(Local_138.f_591[iParam0 /*2*/]), 30000, 0))
					{
						if (!func_63(iParam0, 17))
						{
							if (func_53(8, &(Local_138.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 17);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_138.f_591[iParam0 /*2*/]));
				}
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_138.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if (Local_771[iVar1 /*9*/].f_3 > 0 || Local_771[iVar1 /*9*/].f_5 > 0)
						{
							iVar8++;
						}
						if (!BitTest(Local_771[iVar1 /*9*/], 2))
						{
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (iVar8 > 0)
				{
					if (func_71(&(Local_138.f_150[iParam0 /*2*/]), 30000, 0) || bVar0)
					{
						func_69(&(Local_138.f_150[iParam0 /*2*/]));
						func_64(iParam0);
						func_66(4, iParam0);
					}
					else if (func_71(&(Local_138.f_150[iParam0 /*2*/]), 18000, 0))
					{
						if (!func_63(iParam0, 19))
						{
							if (func_53(13, &(Local_138.f_50[iParam0]), 0, -1))
							{
								func_52(iParam0, 19);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_138.f_150[iParam0 /*2*/]));
				}
			}
			break;
		
		case 4:
			func_64(iParam0);
			if (!BitTest(Local_138.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					MISC::SET_BIT(&(Local_138.f_20[iParam0]), 11);
				}
			}
			else if (func_47(iParam0))
			{
				MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 11);
				func_66(5, iParam0);
			}
			break;
		
		case 5:
			if (!func_63(iParam0, 20))
			{
				if (func_53(21, &(Local_138.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 20);
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
			{
				if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_55[func_46(iParam0, 2)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 0)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 0)]);
						bVar9 = true;
					}
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 1)]);
						bVar9 = true;
					}
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 2)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 2)]);
						bVar9 = true;
					}
					if (bVar9)
					{
						return;
					}
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
					{
						if (!BitTest(Local_138.f_20[iParam0], 0))
						{
							Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
							MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
						}
						else if (!BitTest(Local_138.f_20[iParam0], 8))
						{
							if (Local_138.f_45[iParam0] != -1)
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out")))
								{
									Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_43(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 0)]), Local_138.f_35[iParam0], func_45(), "deck_shuffle_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 1)]), Local_138.f_35[iParam0], func_45(), "deck_shuffle_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 2)]), Local_138.f_35[iParam0], func_45(), "deck_shuffle_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
									MISC::SET_BIT(&(Local_138.f_20[iParam0]), 8);
								}
							}
						}
						else if (Local_138.f_45[iParam0] != -1)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out")))
							{
								Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
								MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
								MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 8);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 0)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 1)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 2)]), true, false);
								func_66(6, iParam0);
							}
							else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), -1813854677))
							{
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 0)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 1)]), true, false);
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 2)]), true, false);
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (!BitTest(Local_138.f_20[iParam0], 11))
			{
				if (func_48(iParam0))
				{
					MISC::SET_BIT(&(Local_138.f_20[iParam0]), 11);
				}
			}
			else
			{
				Local_138.f_168[iParam0 /*55*/] = 0;
				func_66(7, iParam0);
			}
			break;
		
		case 7:
			Var11 = { func_76(iParam0) };
			Var11.f_2 = (Var11.f_2 + 0.914f);
			switch (Local_138.f_571[iParam0])
			{
				case 0:
					iVar1 = Local_138.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_771[iVar1 /*9*/].f_2 == iParam0 && (Local_771[iVar1 /*9*/].f_3 > 0 || Local_771[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_68[func_41(iParam0, 0, 0)]))
								{
									iVar10 = Local_138.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5)))
									{
										func_39(&(Local_138.f_68[func_41(iParam0, 0, 0)]), func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_68[func_41(iParam0, 1, 0)]))
								{
									iVar10 = Local_138.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5)))
									{
										func_39(&(Local_138.f_68[func_41(iParam0, 1, 0)]), func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_68[func_41(iParam0, 2, 0)]))
								{
									iVar10 = Local_138.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5)))
									{
										func_39(&(Local_138.f_68[func_41(iParam0, 2, 0)]), func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 0)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 0)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 0)]);
										bVar14 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 0)]);
										bVar14 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 0)]);
										bVar14 = true;
									}
									if (bVar14)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
									{
										if (!BitTest(Local_138.f_20[iParam0], 0))
										{
											Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_38(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 0)]), Local_138.f_35[iParam0], func_45(), "deck_deal_p01_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 0)]), Local_138.f_35[iParam0], func_45(), "deck_deal_p01_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 0)]), Local_138.f_35[iParam0], func_45(), "deck_deal_p01_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
											MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
										}
										else if (Local_138.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_138.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
													Local_138.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
													Local_138.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
													Local_138.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_138.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_138.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
												Local_138.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
												Local_138.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
												Local_138.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_138.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(1, iParam0);
					}
					break;
				
				case 1:
					iVar1 = Local_138.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_771[iVar1 /*9*/].f_2 == iParam0 && (Local_771[iVar1 /*9*/].f_3 > 0 || Local_771[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_68[func_41(iParam0, 0, 1)]))
								{
									iVar10 = Local_138.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5)))
									{
										func_39(&(Local_138.f_68[func_41(iParam0, 0, 1)]), func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_68[func_41(iParam0, 1, 1)]))
								{
									iVar10 = Local_138.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5)))
									{
										func_39(&(Local_138.f_68[func_41(iParam0, 1, 1)]), func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_68[func_41(iParam0, 2, 1)]))
								{
									iVar10 = Local_138.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5)))
									{
										func_39(&(Local_138.f_68[func_41(iParam0, 2, 1)]), func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 1)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 1)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 1)]);
										bVar15 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 1)]);
										bVar15 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 1)]);
										bVar15 = true;
									}
									if (bVar15)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
									{
										if (!BitTest(Local_138.f_20[iParam0], 0))
										{
											Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_35(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 1)]), Local_138.f_35[iParam0], func_45(), "deck_deal_p02_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 1)]), Local_138.f_35[iParam0], func_45(), "deck_deal_p02_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 1)]), Local_138.f_35[iParam0], func_45(), "deck_deal_p02_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
											MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
										}
										else if (Local_138.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_138.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
													Local_138.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
													Local_138.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
													Local_138.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_138.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_138.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
												Local_138.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
												Local_138.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
												Local_138.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_138.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(2, iParam0);
					}
					break;
				
				case 2:
					iVar1 = Local_138.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_771[iVar1 /*9*/].f_2 == iParam0 && (Local_771[iVar1 /*9*/].f_3 > 0 || Local_771[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_68[func_41(iParam0, 0, 2)]))
								{
									iVar10 = Local_138.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5)))
									{
										func_39(&(Local_138.f_68[func_41(iParam0, 0, 2)]), func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_68[func_41(iParam0, 1, 2)]))
								{
									iVar10 = Local_138.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5)))
									{
										func_39(&(Local_138.f_68[func_41(iParam0, 1, 2)]), func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_68[func_41(iParam0, 2, 2)]))
								{
									iVar10 = Local_138.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5)))
									{
										func_39(&(Local_138.f_68[func_41(iParam0, 2, 2)]), func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 2)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 2)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 2)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 2)]);
										bVar16 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 2)]);
										bVar16 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 2)]);
										bVar16 = true;
									}
									if (bVar16)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
									{
										if (!BitTest(Local_138.f_20[iParam0], 0))
										{
											Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_34(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 2)]), Local_138.f_35[iParam0], func_45(), "deck_deal_p03_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 2)]), Local_138.f_35[iParam0], func_45(), "deck_deal_p03_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 2)]), Local_138.f_35[iParam0], func_45(), "deck_deal_p03_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
											MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
										}
										else if (Local_138.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_138.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
													Local_138.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
													Local_138.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
													Local_138.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_138.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_138.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
												Local_138.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
												Local_138.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
												Local_138.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_138.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(3, iParam0);
					}
					break;
				
				case 3:
					iVar1 = Local_138.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_771[iVar1 /*9*/].f_2 == iParam0 && (Local_771[iVar1 /*9*/].f_3 > 0 || Local_771[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_68[func_41(iParam0, 0, 3)]))
								{
									iVar10 = Local_138.f_168[iParam0 /*55*/];
									STREAMING::REQUEST_MODEL(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5)))
									{
										func_39(&(Local_138.f_68[func_41(iParam0, 0, 3)]), func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_68[func_41(iParam0, 1, 3)]))
								{
									iVar10 = Local_138.f_168[iParam0 /*55*/] + 1;
									STREAMING::REQUEST_MODEL(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5)))
									{
										func_39(&(Local_138.f_68[func_41(iParam0, 1, 3)]), func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_68[func_41(iParam0, 2, 3)]))
								{
									iVar10 = Local_138.f_168[iParam0 /*55*/] + 2;
									STREAMING::REQUEST_MODEL(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5));
									if (STREAMING::HAS_MODEL_LOADED(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5)))
									{
										func_39(&(Local_138.f_68[func_41(iParam0, 2, 3)]), func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
									}
									return;
								}
								if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 3)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 3)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 3)]))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 3)]);
										bVar17 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 3)]);
										bVar17 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 3)]);
										bVar17 = true;
									}
									if (bVar17)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
									{
										if (!BitTest(Local_138.f_20[iParam0], 0))
										{
											Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_33(iParam0), 2f, -2f, 13, 16, 1000f, 0);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 3)]), Local_138.f_35[iParam0], func_45(), "deck_deal_p04_card_a", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 3)]), Local_138.f_35[iParam0], func_45(), "deck_deal_p04_card_b", 1000f, -1000f, 13);
											NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 3)]), Local_138.f_35[iParam0], func_45(), "deck_deal_p04_card_c", 1000f, -1000f, 13);
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
											MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
										}
										else if (Local_138.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												if (Local_138.f_410[iVar1 /*5*/] == 0)
												{
													func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
													Local_138.f_410[iVar1 /*5*/].f_1[0] = uVar5;
													func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
													Local_138.f_410[iVar1 /*5*/].f_1[1] = uVar5;
													func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
													Local_138.f_410[iVar1 /*5*/].f_1[2] = uVar5;
													Local_138.f_410[iVar1 /*5*/] = 3;
												}
												MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
											}
										}
										else
										{
											bVar7 = true;
											if (Local_138.f_410[iVar1 /*5*/] == 0)
											{
												func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
												Local_138.f_410[iVar1 /*5*/].f_1[0] = uVar5;
												func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
												Local_138.f_410[iVar1 /*5*/].f_1[1] = uVar5;
												func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
												Local_138.f_410[iVar1 /*5*/].f_1[2] = uVar5;
												Local_138.f_410[iVar1 /*5*/] = 3;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(4, iParam0);
					}
					break;
				
				case 4:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
					{
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_55[func_46(iParam0, 0)]))
						{
							iVar10 = Local_138.f_168[iParam0 /*55*/];
							STREAMING::REQUEST_MODEL(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5));
							if (STREAMING::HAS_MODEL_LOADED(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5)))
							{
								func_39(&(Local_138.f_55[func_46(iParam0, 0)]), func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
							}
							return;
						}
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_55[func_46(iParam0, 1)]))
						{
							iVar10 = Local_138.f_168[iParam0 /*55*/] + 1;
							STREAMING::REQUEST_MODEL(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5));
							if (STREAMING::HAS_MODEL_LOADED(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5)))
							{
								func_39(&(Local_138.f_55[func_46(iParam0, 1)]), func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
							}
							return;
						}
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_55[func_46(iParam0, 2)]))
						{
							iVar10 = Local_138.f_168[iParam0 /*55*/] + 2;
							STREAMING::REQUEST_MODEL(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5));
							if (STREAMING::HAS_MODEL_LOADED(func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5)))
							{
								func_39(&(Local_138.f_55[func_46(iParam0, 2)]), func_40(Local_138.f_168[iParam0 /*55*/].f_2[iVar10], Local_1060.f_5), Var11, 1, 1, 1, 1, 1, 1, 0, 0);
							}
							return;
						}
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_55[func_46(iParam0, 2)]))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 0)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 0)]);
								bVar18 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 1)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 1)]);
								bVar18 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 2)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 2)]);
								bVar18 = true;
							}
							if (bVar18)
							{
								return;
							}
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
							{
								if (!BitTest(Local_138.f_20[iParam0], 0))
								{
									Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_32(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 0)]), Local_138.f_35[iParam0], func_45(), "deck_deal_self_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 1)]), Local_138.f_35[iParam0], func_45(), "deck_deal_self_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 2)]), Local_138.f_35[iParam0], func_45(), "deck_deal_self_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
									MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
								}
								else if (Local_138.f_45[iParam0] != -1)
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out")))
									{
										bVar7 = true;
										Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
										if (Local_138.f_389[iParam0 /*5*/] == 0)
										{
											func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
											Local_138.f_389[iParam0 /*5*/].f_1[0] = uVar5;
											func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
											Local_138.f_389[iParam0 /*5*/].f_1[1] = uVar5;
											func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
											Local_138.f_389[iParam0 /*5*/].f_1[2] = uVar5;
											Local_138.f_389[iParam0 /*5*/] = 3;
										}
										MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
									if (Local_138.f_389[iParam0 /*5*/] == 0)
									{
										func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
										Local_138.f_389[iParam0 /*5*/].f_1[0] = uVar5;
										func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
										Local_138.f_389[iParam0 /*5*/].f_1[1] = uVar5;
										func_37(&(Local_138.f_168[iParam0 /*55*/]), &uVar5);
										Local_138.f_389[iParam0 /*5*/].f_1[2] = uVar5;
										Local_138.f_389[iParam0 /*5*/] = 3;
									}
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
						bVar7 = false;
						func_36(0, iParam0);
						func_66(8, iParam0);
					}
					break;
			}
			break;
		
		case 8:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]) && Local_138.f_45[iParam0] != -1)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out")))
					{
						Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
						func_64(iParam0);
						func_66(9, iParam0);
					}
				}
			}
			break;
		
		case 9:
			bVar0 = true;
			if (!func_72(&(Local_138.f_150[iParam0 /*2*/])))
			{
				func_73(&(Local_138.f_150[iParam0 /*2*/]), 0, 0);
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					iVar1 = Local_138.f_117[(iParam0 * 4 + iVar2)];
					if (iVar1 != -1)
					{
						if ((!BitTest(Local_771[iVar1 /*9*/], 1) && !BitTest(Local_771[iVar1 /*9*/], 3)) && (Local_771[iVar1 /*9*/].f_3 > 0 || Local_771[iVar1 /*9*/].f_5 > 0))
						{
							if (!func_63(iParam0, 18))
							{
								if (func_53(14, &(Local_138.f_50[iParam0]), 0, -1))
								{
									func_52(iParam0, 18);
								}
							}
							bVar0 = false;
						}
					}
					iVar2++;
				}
				if (bVar0)
				{
					func_69(&(Local_138.f_150[iParam0 /*2*/]));
					func_66(10, iParam0);
				}
				else if (func_71(&(Local_138.f_150[iParam0 /*2*/]), 15000, 0))
				{
					if (!func_63(iParam0, 19))
					{
						if (func_53(9, &(Local_138.f_50[iParam0]), 0, -1))
						{
							func_52(iParam0, 19);
						}
					}
				}
			}
			break;
		
		case 10:
			switch (Local_138.f_581[iParam0])
			{
				case 0:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_55[func_46(iParam0, 2)]))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 0)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 0)]);
								bVar19 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 1)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 1)]);
								bVar19 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 2)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 2)]);
								bVar19 = true;
							}
							if (bVar19)
							{
								return;
							}
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
							{
								if (!BitTest(Local_138.f_20[iParam0], 0))
								{
									Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_30(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 0)]), Local_138.f_35[iParam0], func_45(), "reveal_self_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 1)]), Local_138.f_35[iParam0], func_45(), "reveal_self_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 2)]), Local_138.f_35[iParam0], func_45(), "reveal_self_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
									MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
								}
								else if (Local_138.f_45[iParam0] != -1)
								{
									if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), 2116425869))
									{
										bVar7 = true;
										Local_138.f_5[iParam0] = 1;
										MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
									}
								}
								else
								{
									bVar7 = true;
									Local_138.f_5[iParam0] = 1;
									MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
								}
							}
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						bVar7 = false;
						func_29(1, iParam0);
					}
					break;
				
				case 1:
					iVar1 = Local_138.f_117[iParam0 * 4];
					if (iVar1 >= 0)
					{
						if (Local_771[iVar1 /*9*/].f_2 == iParam0 && (Local_771[iVar1 /*9*/].f_3 > 0 || Local_771[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 0)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 0)])) && (BitTest(Local_771[iVar1 /*9*/], 1) || BitTest(Local_771[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 0)]);
										bVar20 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 0)]);
										bVar20 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 0)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 0)]);
										bVar20 = true;
									}
									if (bVar20)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
									{
										if (!BitTest(Local_138.f_20[iParam0], 0))
										{
											Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_771[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_28(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 0)]), Local_138.f_35[iParam0], func_45(), "reveal_blind_p01_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 0)]), Local_138.f_35[iParam0], func_45(), "reveal_blind_p01_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 0)]), Local_138.f_35[iParam0], func_45(), "reveal_blind_p01_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_771[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_27(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 0)]), Local_138.f_35[iParam0], func_45(), "reveal_played_p01_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 0)]), Local_138.f_35[iParam0], func_45(), "reveal_played_p01_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 0)]), Local_138.f_35[iParam0], func_45(), "reveal_played_p01_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_771[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_26(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 0)]), Local_138.f_35[iParam0], func_45(), "reveal_folded_p01_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 0)]), Local_138.f_35[iParam0], func_45(), "reveal_folded_p01_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 0)]), Local_138.f_35[iParam0], func_45(), "reveal_folded_p01_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
											MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
										}
										else if (Local_138.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_138.f_20[iParam0]), 12);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::SET_BIT(&(Local_138.f_20[iParam0]), 12);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(2, iParam0);
					}
					break;
				
				case 2:
					iVar1 = Local_138.f_117[iParam0 * 4 + 1];
					if (iVar1 >= 0)
					{
						if (Local_771[iVar1 /*9*/].f_2 == iParam0 && (Local_771[iVar1 /*9*/].f_3 > 0 || Local_771[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 1)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 1)])) && (BitTest(Local_771[iVar1 /*9*/], 1) || BitTest(Local_771[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 1)]);
										bVar21 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 1)]);
										bVar21 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 1)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 1)]);
										bVar21 = true;
									}
									if (bVar21)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
									{
										if (!BitTest(Local_138.f_20[iParam0], 0))
										{
											Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_771[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_20(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 1)]), Local_138.f_35[iParam0], func_45(), "reveal_blind_p02_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 1)]), Local_138.f_35[iParam0], func_45(), "reveal_blind_p02_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 1)]), Local_138.f_35[iParam0], func_45(), "reveal_blind_p02_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_771[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_19(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 1)]), Local_138.f_35[iParam0], func_45(), "reveal_played_p02_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 1)]), Local_138.f_35[iParam0], func_45(), "reveal_played_p02_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 1)]), Local_138.f_35[iParam0], func_45(), "reveal_played_p02_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_771[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_18(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 1)]), Local_138.f_35[iParam0], func_45(), "reveal_folded_p02_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 1)]), Local_138.f_35[iParam0], func_45(), "reveal_folded_p02_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 1)]), Local_138.f_35[iParam0], func_45(), "reveal_folded_p02_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
											MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
										}
										else if (Local_138.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_138.f_20[iParam0]), 13);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::SET_BIT(&(Local_138.f_20[iParam0]), 13);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(3, iParam0);
					}
					break;
				
				case 3:
					iVar1 = Local_138.f_117[iParam0 * 4 + 2];
					if (iVar1 >= 0)
					{
						if (Local_771[iVar1 /*9*/].f_2 == iParam0 && (Local_771[iVar1 /*9*/].f_3 > 0 || Local_771[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 2)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 2)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 2)])) && (BitTest(Local_771[iVar1 /*9*/], 1) || BitTest(Local_771[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 2)]);
										bVar22 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 2)]);
										bVar22 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 2)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 2)]);
										bVar22 = true;
									}
									if (bVar22)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
									{
										if (!BitTest(Local_138.f_20[iParam0], 0))
										{
											Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_771[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_17(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 2)]), Local_138.f_35[iParam0], func_45(), "reveal_blind_p03_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 2)]), Local_138.f_35[iParam0], func_45(), "reveal_blind_p03_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 2)]), Local_138.f_35[iParam0], func_45(), "reveal_blind_p03_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_771[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_16(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 2)]), Local_138.f_35[iParam0], func_45(), "reveal_played_p03_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 2)]), Local_138.f_35[iParam0], func_45(), "reveal_played_p03_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 2)]), Local_138.f_35[iParam0], func_45(), "reveal_played_p03_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_771[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_15(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 2)]), Local_138.f_35[iParam0], func_45(), "reveal_folded_p03_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 2)]), Local_138.f_35[iParam0], func_45(), "reveal_folded_p03_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 2)]), Local_138.f_35[iParam0], func_45(), "reveal_folded_p03_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
											MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
										}
										else if (Local_138.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_138.f_20[iParam0]), 14);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::SET_BIT(&(Local_138.f_20[iParam0]), 14);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(4, iParam0);
					}
					break;
				
				case 4:
					iVar1 = Local_138.f_117[iParam0 * 4 + 3];
					if (iVar1 >= 0)
					{
						if (Local_771[iVar1 /*9*/].f_2 == iParam0 && (Local_771[iVar1 /*9*/].f_3 > 0 || Local_771[iVar1 /*9*/].f_5 > 0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
							{
								if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 3)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 3)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 3)])) && (BitTest(Local_771[iVar1 /*9*/], 1) || BitTest(Local_771[iVar1 /*9*/], 3)))
								{
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 3)]);
										bVar23 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 3)]);
										bVar23 = true;
									}
									if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 3)]))
									{
										NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 3)]);
										bVar23 = true;
									}
									if (bVar23)
									{
										return;
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
									{
										if (!BitTest(Local_138.f_20[iParam0], 0))
										{
											Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
											if (BitTest(Local_771[iVar1 /*9*/], 4))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_14(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 3)]), Local_138.f_35[iParam0], func_45(), "reveal_blind_p04_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 3)]), Local_138.f_35[iParam0], func_45(), "reveal_blind_p04_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 3)]), Local_138.f_35[iParam0], func_45(), "reveal_blind_p04_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_771[iVar1 /*9*/], 1))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_13(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 3)]), Local_138.f_35[iParam0], func_45(), "reveal_played_p04_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 3)]), Local_138.f_35[iParam0], func_45(), "reveal_played_p04_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 3)]), Local_138.f_35[iParam0], func_45(), "reveal_played_p04_card_c", 1000f, -1000f, 13);
											}
											else if (BitTest(Local_771[iVar1 /*9*/], 3))
											{
												NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_12(iParam0), 2f, -2f, 13, 16, 1000f, 0);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 3)]), Local_138.f_35[iParam0], func_45(), "reveal_folded_p04_card_a", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 3)]), Local_138.f_35[iParam0], func_45(), "reveal_folded_p04_card_b", 1000f, -1000f, 13);
												NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 3)]), Local_138.f_35[iParam0], func_45(), "reveal_folded_p04_card_c", 1000f, -1000f, 13);
											}
											NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
											MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
										}
										else if (Local_138.f_45[iParam0] != -1)
										{
											if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), 2116425869))
											{
												bVar7 = true;
												MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
											}
											else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.5f)
											{
												MISC::SET_BIT(&(Local_138.f_20[iParam0]), 15);
											}
										}
										else
										{
											bVar7 = true;
											MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
										}
									}
								}
							}
							else
							{
								bVar7 = true;
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					else
					{
						bVar7 = true;
					}
					if (bVar7)
					{
						MISC::SET_BIT(&(Local_138.f_20[iParam0]), 15);
						bVar7 = false;
						func_21(iParam0, iVar1);
						func_29(0, iParam0);
						func_66(11, iParam0);
					}
					break;
			}
			break;
		
		case 11:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
				{
					if (!BitTest(Local_138.f_20[iParam0], 0))
					{
						Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_78(), func_8(iParam0), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
						MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
					}
					else if (BitTest(Local_138.f_20[iParam0], 0) && !BitTest(Local_138.f_20[iParam0], 2))
					{
						if (Local_138.f_45[iParam0] != -1)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out")))
							{
								Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_44(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
								MISC::SET_BIT(&(Local_138.f_20[iParam0]), 9);
								MISC::SET_BIT(&(Local_138.f_20[iParam0]), 2);
							}
						}
					}
					else if (BitTest(Local_138.f_20[iParam0], 9))
					{
						if (Local_138.f_45[iParam0] != -1)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out")))
							{
								Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_42(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
								MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
								MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 9);
								func_64(iParam0);
								func_66(12, iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_63(iParam0, 21))
			{
				if (func_53(1, &(Local_138.f_50[iParam0]), 0, -1))
				{
					func_52(iParam0, 21);
				}
			}
			Var25.f_1 = 3;
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
			{
				if (!BitTest(Local_138.f_20[iParam0], 3))
				{
					iVar2 = iParam0 * 4;
					iVar24 = Local_138.f_117[iVar2];
					if (iVar24 != func_439() && iVar24 > -1)
					{
						if (Local_138.f_410[iVar24 /*5*/] > 0 || BitTest(Local_138.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 0)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 0)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 0)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 0)]);
									bVar30 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 0)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 0)]);
									bVar30 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 0)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 0)]);
									bVar30 = true;
								}
								if (bVar30)
								{
									return;
								}
								if (!BitTest(Local_138.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
									{
										Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_7(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 0)]), Local_138.f_35[iParam0], func_45(), "cards_collect_p01_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 0)]), Local_138.f_35[iParam0], func_45(), "cards_collect_p01_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 0)]), Local_138.f_35[iParam0], func_45(), "cards_collect_p01_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
										MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
								{
									if (Local_138.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), 2116425869))
										{
											MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_138.f_20[iParam0]), 3);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 0)]), false, false);
											Local_138.f_410[iVar24 /*5*/] = { Var25 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), -1406739296))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 0)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 0)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_138.f_20[iParam0]), 3);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 0)]), false, false);
										Local_138.f_410[iVar24 /*5*/] = { Var25 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_138.f_20[iParam0]), 3);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_138.f_20[iParam0]), 3);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_138.f_20[iParam0]), 3);
					}
				}
				else if (!BitTest(Local_138.f_20[iParam0], 4))
				{
					iVar2 = iParam0 * 4 + 1;
					iVar24 = Local_138.f_117[iVar2];
					if (iVar24 != func_439() && iVar24 > -1)
					{
						if (Local_138.f_410[iVar24 /*5*/] > 0 || BitTest(Local_138.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 1)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 1)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 1)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 1)]);
									bVar31 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 1)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 1)]);
									bVar31 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 1)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 1)]);
									bVar31 = true;
								}
								if (bVar31)
								{
									return;
								}
								if (!BitTest(Local_138.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
									{
										Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_6(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 1)]), Local_138.f_35[iParam0], func_45(), "cards_collect_p02_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 1)]), Local_138.f_35[iParam0], func_45(), "cards_collect_p02_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 1)]), Local_138.f_35[iParam0], func_45(), "cards_collect_p02_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
										MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
								{
									if (Local_138.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), 2116425869))
										{
											MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_138.f_20[iParam0]), 4);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 1)]), false, false);
											Local_138.f_410[iVar24 /*5*/] = { Var25 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), -1406739296))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 1)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 1)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_138.f_20[iParam0]), 4);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 1)]), false, false);
										Local_138.f_410[iVar24 /*5*/] = { Var25 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_138.f_20[iParam0]), 4);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_138.f_20[iParam0]), 4);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_138.f_20[iParam0]), 4);
					}
				}
				else if (!BitTest(Local_138.f_20[iParam0], 5))
				{
					iVar2 = iParam0 * 4 + 2;
					iVar24 = Local_138.f_117[iVar2];
					if (iVar24 != func_439() && iVar24 > -1)
					{
						if (Local_138.f_410[iVar24 /*5*/] > 0 || BitTest(Local_138.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 2)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 2)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 2)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 2)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 2)]);
									bVar32 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 2)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 2)]);
									bVar32 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 2)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 2)]);
									bVar32 = true;
								}
								if (bVar32)
								{
									return;
								}
								if (!BitTest(Local_138.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
									{
										Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_5(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 2)]), Local_138.f_35[iParam0], func_45(), "cards_collect_p03_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 2)]), Local_138.f_35[iParam0], func_45(), "cards_collect_p03_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 2)]), Local_138.f_35[iParam0], func_45(), "cards_collect_p03_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
										MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
								{
									if (Local_138.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), 2116425869))
										{
											MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_138.f_20[iParam0]), 5);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 2)]), false, false);
											Local_138.f_410[iVar24 /*5*/] = { Var25 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), -1406739296))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 2)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 2)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_138.f_20[iParam0]), 5);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 2)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 2)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 2)]), false, false);
										Local_138.f_410[iVar24 /*5*/] = { Var25 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_138.f_20[iParam0]), 5);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_138.f_20[iParam0]), 5);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_138.f_20[iParam0]), 5);
					}
				}
				else if (!BitTest(Local_138.f_20[iParam0], 6))
				{
					iVar2 = iParam0 * 4 + 3;
					iVar24 = Local_138.f_117[iVar2];
					if (iVar24 != func_439() && iVar24 > -1)
					{
						if (Local_138.f_410[iVar24 /*5*/] > 0 || BitTest(Local_138.f_20[iParam0], 0))
						{
							if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 3)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 3)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 3)]))
							{
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 3)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, 3)]);
									bVar33 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 3)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, 3)]);
									bVar33 = true;
								}
								if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 3)]))
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, 3)]);
									bVar33 = true;
								}
								if (bVar33)
								{
									return;
								}
								if (!BitTest(Local_138.f_20[iParam0], 0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
									{
										Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_4(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 3)]), Local_138.f_35[iParam0], func_45(), "cards_collect_p04_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 3)]), Local_138.f_35[iParam0], func_45(), "cards_collect_p04_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 3)]), Local_138.f_35[iParam0], func_45(), "cards_collect_p04_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
										MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
									}
								}
								else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
								{
									if (Local_138.f_45[iParam0] != -1)
									{
										if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out"))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), 2116425869))
										{
											MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
											MISC::SET_BIT(&(Local_138.f_20[iParam0]), 6);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 3)]), false, false);
											Local_138.f_410[iVar24 /*5*/] = { Var25 };
										}
										else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), -1406739296))
										{
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 3)]), false, false);
											ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 3)]), false, false);
										}
									}
									else
									{
										MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_138.f_20[iParam0]), 6);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 0, 3)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 1, 3)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(iParam0, 2, 3)]), false, false);
										Local_138.f_410[iVar24 /*5*/] = { Var25 };
									}
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
								MISC::SET_BIT(&(Local_138.f_20[iParam0]), 6);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_138.f_20[iParam0]), 6);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_138.f_20[iParam0]), 6);
					}
				}
				else if (!BitTest(Local_138.f_20[iParam0], 7))
				{
					if (Local_138.f_389[iParam0 /*5*/] > 0 || BitTest(Local_138.f_20[iParam0], 0))
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_55[func_46(iParam0, 0)]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_55[func_46(iParam0, 1)])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_55[func_46(iParam0, 2)]))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 0)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 0)]);
								bVar34 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 1)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 1)]);
								bVar34 = true;
							}
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 2)]))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_55[func_46(iParam0, 2)]);
								bVar34 = true;
							}
							if (bVar34)
							{
								return;
							}
							if (!BitTest(Local_138.f_20[iParam0], 0))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
								{
									Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_3(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 0)]), Local_138.f_35[iParam0], func_45(), "cards_collect_self_card_a", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 1)]), Local_138.f_35[iParam0], func_45(), "cards_collect_self_card_b", 1000f, -1000f, 13);
									NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 2)]), Local_138.f_35[iParam0], func_45(), "cards_collect_self_card_c", 1000f, -1000f, 13);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
									MISC::SET_BIT(&(Local_138.f_20[iParam0]), false);
								}
							}
							else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
							{
								if (Local_138.f_45[iParam0] != -1)
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out")))
									{
										Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
										MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
										MISC::SET_BIT(&(Local_138.f_20[iParam0]), 7);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 2)]), false, false);
										Local_138.f_389[iParam0 /*5*/] = { Var25 };
									}
									else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), -1406739296))
									{
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 0)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 1)]), false, false);
										ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 2)]), false, false);
									}
								}
								else
								{
									Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, true, false, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_45(), func_31(iParam0), 2f, -2f, 13, 16, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
									MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
									MISC::SET_BIT(&(Local_138.f_20[iParam0]), 7);
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 0)]), false, false);
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 1)]), false, false);
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_138.f_55[func_46(iParam0, 2)]), false, false);
									Local_138.f_389[iParam0 /*5*/] = { Var25 };
								}
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
							MISC::SET_BIT(&(Local_138.f_20[iParam0]), 7);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 0);
						MISC::SET_BIT(&(Local_138.f_20[iParam0]), 7);
					}
				}
				else if (!BitTest(Local_138.f_20[iParam0], 10))
				{
					if (Local_138.f_45[iParam0] != -1)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out")))
						{
							if (Local_138.f_30[iParam0] == 1)
							{
								Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_78(), func_51(iParam0, -1), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
							}
							else
							{
								Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
							}
							MISC::SET_BIT(&(Local_138.f_20[iParam0]), 10);
						}
					}
				}
				else
				{
					Local_138.f_5[iParam0] = 0;
					Local_138.f_20[iParam0] = 0;
					Local_138.f_25[iParam0]++;
					func_69(&(Local_138.f_150[iParam0 /*2*/]));
					func_66(0, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_self";
	}
	return "cards_collect_self";
}

char* func_4(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p04";
	}
	return "cards_collect_p04";
}

char* func_5(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p03";
	}
	return "cards_collect_p03";
}

char* func_6(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p02";
	}
	return "cards_collect_p02";
}

char* func_7(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_cards_collect_p01";
	}
	return "cards_collect_p01";
}

char* func_8(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = false;
	iVar1 = func_9(&(Local_138.f_389[iParam0 /*5*/].f_1), 0, 0);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar2 = Local_138.f_117[(iParam0 * 4 + iVar3)];
		if (iVar2 != func_439())
		{
			iVar4 = func_9(&(Local_138.f_410[iVar2 /*5*/].f_1), 0, 0);
			if (iVar4 > iVar1 && (BitTest(Local_771[iVar2 /*9*/], 1) || Local_771[iVar2 /*9*/].f_3 <= 0))
			{
				bVar0 = true;
			}
		}
		iVar3++;
	}
	if (Local_138.f_15[iParam0] >= 7)
	{
		if (iVar1 < 12)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_impartial_var01";
				
				case 1:
					return "female_dealer_reaction_impartial_var02";
				
				case 2:
					return "female_dealer_reaction_impartial_var03";
				
				default:
			}
		}
		else if (bVar0)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_good_var01";
				
				case 1:
					return "female_dealer_reaction_good_var02";
				
				case 2:
					return "female_dealer_reaction_good_var03";
				
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "female_dealer_reaction_bad_var01";
				
				case 1:
					return "female_dealer_reaction_bad_var02";
				
				case 2:
					return "female_dealer_reaction_bad_var03";
				}
			
			default:
		}
	}
	else if (iVar1 < 12)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			default:
		}
	}
	else if (bVar0)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

int func_9(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if ((func_11((*uParam0)[0]) != func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2])) && func_11((*uParam0)[1]) != func_11((*uParam0)[2]))
	{
		bVar0 = false;
		iVar1 = ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2]));
		if (iVar1 == 19)
		{
			if ((((func_11((*uParam0)[0]) == 14 || func_11((*uParam0)[0]) == 2) || func_11((*uParam0)[0]) == 3) && ((func_11((*uParam0)[1]) == 14 || func_11((*uParam0)[1]) == 2) || func_11((*uParam0)[1]) == 3)) && ((func_11((*uParam0)[2]) == 14 || func_11((*uParam0)[2]) == 2) || func_11((*uParam0)[2]) == 3))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 9)
		{
			if ((((func_11((*uParam0)[0]) == 2 || func_11((*uParam0)[0]) == 3) || func_11((*uParam0)[0]) == 4) && ((func_11((*uParam0)[1]) == 2 || func_11((*uParam0)[1]) == 3) || func_11((*uParam0)[1]) == 4)) && ((func_11((*uParam0)[2]) == 2 || func_11((*uParam0)[2]) == 3) || func_11((*uParam0)[2]) == 4))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 12)
		{
			if ((((func_11((*uParam0)[0]) == 3 || func_11((*uParam0)[0]) == 4) || func_11((*uParam0)[0]) == 5) && ((func_11((*uParam0)[1]) == 3 || func_11((*uParam0)[1]) == 4) || func_11((*uParam0)[1]) == 5)) && ((func_11((*uParam0)[2]) == 3 || func_11((*uParam0)[2]) == 4) || func_11((*uParam0)[2]) == 5))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 15)
		{
			if ((((func_11((*uParam0)[0]) == 4 || func_11((*uParam0)[0]) == 5) || func_11((*uParam0)[0]) == 6) && ((func_11((*uParam0)[1]) == 4 || func_11((*uParam0)[1]) == 5) || func_11((*uParam0)[1]) == 6)) && ((func_11((*uParam0)[2]) == 4 || func_11((*uParam0)[2]) == 5) || func_11((*uParam0)[2]) == 6))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 18)
		{
			if ((((func_11((*uParam0)[0]) == 5 || func_11((*uParam0)[0]) == 6) || func_11((*uParam0)[0]) == 7) && ((func_11((*uParam0)[1]) == 5 || func_11((*uParam0)[1]) == 6) || func_11((*uParam0)[1]) == 7)) && ((func_11((*uParam0)[2]) == 5 || func_11((*uParam0)[2]) == 6) || func_11((*uParam0)[2]) == 7))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 21)
		{
			if ((((func_11((*uParam0)[0]) == 6 || func_11((*uParam0)[0]) == 7) || func_11((*uParam0)[0]) == 8) && ((func_11((*uParam0)[1]) == 6 || func_11((*uParam0)[1]) == 7) || func_11((*uParam0)[1]) == 8)) && ((func_11((*uParam0)[2]) == 6 || func_11((*uParam0)[2]) == 7) || func_11((*uParam0)[2]) == 8))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 24)
		{
			if ((((func_11((*uParam0)[0]) == 7 || func_11((*uParam0)[0]) == 8) || func_11((*uParam0)[0]) == 9) && ((func_11((*uParam0)[1]) == 7 || func_11((*uParam0)[1]) == 8) || func_11((*uParam0)[1]) == 9)) && ((func_11((*uParam0)[2]) == 7 || func_11((*uParam0)[2]) == 8) || func_11((*uParam0)[2]) == 9))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 27)
		{
			if ((((func_11((*uParam0)[0]) == 8 || func_11((*uParam0)[0]) == 9) || func_11((*uParam0)[0]) == 10) && ((func_11((*uParam0)[1]) == 8 || func_11((*uParam0)[1]) == 9) || func_11((*uParam0)[1]) == 10)) && ((func_11((*uParam0)[2]) == 8 || func_11((*uParam0)[2]) == 9) || func_11((*uParam0)[2]) == 10))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 30)
		{
			if ((((func_11((*uParam0)[0]) == 9 || func_11((*uParam0)[0]) == 10) || func_11((*uParam0)[0]) == 11) && ((func_11((*uParam0)[1]) == 9 || func_11((*uParam0)[1]) == 10) || func_11((*uParam0)[1]) == 11)) && ((func_11((*uParam0)[2]) == 9 || func_11((*uParam0)[2]) == 10) || func_11((*uParam0)[2]) == 11))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 33)
		{
			if ((((func_11((*uParam0)[0]) == 10 || func_11((*uParam0)[0]) == 11) || func_11((*uParam0)[0]) == 12) && ((func_11((*uParam0)[1]) == 10 || func_11((*uParam0)[1]) == 11) || func_11((*uParam0)[1]) == 12)) && ((func_11((*uParam0)[2]) == 10 || func_11((*uParam0)[2]) == 11) || func_11((*uParam0)[2]) == 12))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 36)
		{
			if ((((func_11((*uParam0)[0]) == 11 || func_11((*uParam0)[0]) == 12) || func_11((*uParam0)[0]) == 13) && ((func_11((*uParam0)[1]) == 11 || func_11((*uParam0)[1]) == 12) || func_11((*uParam0)[1]) == 13)) && ((func_11((*uParam0)[2]) == 11 || func_11((*uParam0)[2]) == 12) || func_11((*uParam0)[2]) == 13))
			{
				bVar0 = true;
			}
		}
		else if (iVar1 == 39)
		{
			if ((((func_11((*uParam0)[0]) == 12 || func_11((*uParam0)[0]) == 13) || func_11((*uParam0)[0]) == 14) && ((func_11((*uParam0)[1]) == 12 || func_11((*uParam0)[1]) == 13) || func_11((*uParam0)[1]) == 14)) && ((func_11((*uParam0)[2]) == 12 || func_11((*uParam0)[2]) == 13) || func_11((*uParam0)[2]) == 14))
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			if (iVar1 == 19)
			{
				iVar1 = 6;
			}
			if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
			{
				return iVar1 + 500;
			}
			return iVar1 + 300;
		}
	}
	iVar2 = 0;
	if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) != func_11((*uParam0)[2]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + 100;
		}
		else
		{
			return func_11((*uParam0)[2]);
		}
	}
	else if (func_11((*uParam0)[1]) == func_11((*uParam0)[2]) && func_11((*uParam0)[1]) != func_11((*uParam0)[0]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[1]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[0]);
		}
	}
	else if (func_11((*uParam0)[2]) == func_11((*uParam0)[0]) && func_11((*uParam0)[2]) != func_11((*uParam0)[1]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0]) + func_11((*uParam0)[2])) + 100;
		}
		else
		{
			return func_11((*uParam0)[1]);
		}
	}
	else if (func_11((*uParam0)[0]) == func_11((*uParam0)[1]) && func_11((*uParam0)[0]) == func_11((*uParam0)[2]))
	{
		return ((func_11((*uParam0)[0]) + func_11((*uParam0)[1])) + func_11((*uParam0)[2])) + 400;
	}
	else if (func_10((*uParam0)[0]) == func_10((*uParam0)[1]) && func_10((*uParam0)[0]) == func_10((*uParam0)[2]))
	{
		iVar2 = 200;
	}
	if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]) && func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		return (func_11((*uParam0)[0]) + iVar2);
	}
	else if (func_11((*uParam0)[1]) > func_11((*uParam0)[0]) && func_11((*uParam0)[1]) > func_11((*uParam0)[2]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[2]))
			{
				return (func_11((*uParam0)[2]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[1]) + iVar2);
	}
	else if (func_11((*uParam0)[2]) > func_11((*uParam0)[0]) && func_11((*uParam0)[2]) > func_11((*uParam0)[1]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0]) > func_11((*uParam0)[1]))
			{
				return (func_11((*uParam0)[1]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0]) + iVar2);
			}
		}
		return (func_11((*uParam0)[2]) + iVar2);
	}
	return 0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 0;
		
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			return 1;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			return 2;
		
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			return 3;
		
		default:
	}
	return 3;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 15:
		case 28:
		case 41:
			return 2;
		
		case 3:
		case 16:
		case 29:
		case 42:
			return 3;
		
		case 4:
		case 17:
		case 30:
		case 43:
			return 4;
		
		case 5:
		case 18:
		case 31:
		case 44:
			return 5;
		
		case 6:
		case 19:
		case 32:
		case 45:
			return 6;
		
		case 7:
		case 20:
		case 33:
		case 46:
			return 7;
		
		case 8:
		case 21:
		case 34:
		case 47:
			return 8;
		
		case 9:
		case 22:
		case 35:
		case 48:
			return 9;
		
		case 10:
		case 23:
		case 36:
		case 49:
			return 10;
		
		case 11:
		case 24:
		case 37:
		case 50:
			return 11;
		
		case 12:
		case 25:
		case 38:
		case 51:
			return 12;
		
		case 13:
		case 26:
		case 39:
		case 52:
			return 13;
		
		case 1:
		case 14:
		case 27:
		case 40:
			return 14;
		
		default:
	}
	return 0;
}

char* func_12(int iParam0)
{
	if (Local_138.f_15[iParam0] > 7)
	{
		return "female_reveal_folded_p04";
	}
	return "reveal_folded_p04";
}

char* func_13(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p04";
	}
	return "reveal_played_p04";
}

char* func_14(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p04";
	}
	return "reveal_blind_p04";
}

char* func_15(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p03";
	}
	return "reveal_folded_p03";
}

char* func_16(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p03";
	}
	return "reveal_played_p03";
}

char* func_17(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p03";
	}
	return "reveal_blind_p03";
}

char* func_18(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p02";
	}
	return "reveal_folded_p02";
}

char* func_19(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p02";
	}
	return "reveal_played_p02";
}

char* func_20(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p02";
	}
	return "reveal_blind_p02";
}

int func_21(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return 1;
	}
	if (!func_24(iParam0, iParam1) && !func_22(iParam1))
	{
		return func_53(11, &(Local_138.f_50[iParam0]), 0, -1);
	}
	return 1;
}

int func_22(int iParam0)
{
	int iVar0;
	
	if (Local_771[iParam0 /*9*/].f_5 > 0)
	{
		iVar0 = func_9(&(Local_138.f_410[iParam0 /*5*/].f_1), 0, 0);
		if (func_23(iVar0) > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_23(int iParam0)
{
	if (iParam0 > 500)
	{
		return 40;
	}
	else if (iParam0 > 400)
	{
		return 30;
	}
	else if (iParam0 > 300)
	{
		return 6;
	}
	else if (iParam0 > 200)
	{
		return 4;
	}
	else if (iParam0 > 100)
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Local_771[iParam1 /*9*/].f_3 > 0 && BitTest(Local_771[iParam1 /*9*/], 1))
	{
		iVar0 = func_9(&(Local_138.f_410[iParam1 /*5*/].f_1), 0, 0);
		iVar1 = func_9(&(Local_138.f_389[iParam0 /*5*/].f_1), 0, 0);
		if (!func_25(iVar1))
		{
			return 1;
		}
		if (iVar0 > iVar1)
		{
			return 1;
		}
		if (iVar0 == iVar1)
		{
			iVar0 = func_9(&(Local_138.f_410[iParam1 /*5*/].f_1), 1, 0);
			iVar1 = func_9(&(Local_138.f_389[iParam0 /*5*/].f_1), 1, 0);
			if (iVar0 > iVar1)
			{
				return 1;
			}
			if (iVar0 == iVar1)
			{
				iVar0 = func_9(&(Local_138.f_410[iParam1 /*5*/].f_1), 0, 1);
				iVar1 = func_9(&(Local_138.f_389[iParam0 /*5*/].f_1), 0, 1);
				if (iVar0 > iVar1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	if (iParam0 >= 12)
	{
		return 1;
	}
	return 0;
}

char* func_26(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_reveal_folded_p01";
	}
	return "reveal_folded_p01";
}

char* func_27(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_reveal_played_p01";
	}
	return "reveal_played_p01";
}

char* func_28(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_reveal_blind_p01";
	}
	return "reveal_blind_p01";
}

void func_29(int iParam0, int iParam1)
{
	Local_138.f_581[iParam1] = iParam0;
}

char* func_30(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_reveal_self";
	}
	return "reveal_self";
}

char* func_31(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_deck_put_down";
	}
	return "deck_put_down";
}

char* func_32(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_self";
	}
	return "deck_deal_self";
}

char* func_33(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p04";
	}
	return "deck_deal_p04";
}

char* func_34(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p03";
	}
	return "deck_deal_p03";
}

char* func_35(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p02";
	}
	return "deck_deal_p02";
}

void func_36(int iParam0, int iParam1)
{
	Local_138.f_571[iParam1] = iParam0;
}

int func_37(var uParam0, var uParam1)
{
	if (*uParam0 >= uParam0->f_1)
	{
		return 0;
	}
	*uParam1 = uParam0->f_2[*uParam0];
	*uParam0++;
	return 1;
}

char* func_38(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_deck_deal_p01";
	}
	return "deck_deal_p01";
}

int func_39(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, bParam6, bParam5, bParam7, iParam12));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(*uParam0), bParam8);
		if (bParam10)
		{
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_OBJ(*uParam0), true);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, false);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_a_a");
			
			case 2:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_02a");
			
			case 3:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_03a");
			
			case 4:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_04a");
			
			case 5:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_05a");
			
			case 6:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_06a");
			
			case 7:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_07a");
			
			case 8:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_08a");
			
			case 9:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_09a");
			
			case 10:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_10a");
			
			case 11:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_j_a");
			
			case 12:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_q_a");
			
			case 13:
				return MISC::GET_HASH_KEY("vw_prop_vw_club_char_k_a");
			
			case 14:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_a_a");
			
			case 15:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_02a");
			
			case 16:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_03a");
			
			case 17:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_04a");
			
			case 18:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_05a");
			
			case 19:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_06a");
			
			case 20:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_07a");
			
			case 21:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_08a");
			
			case 22:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_09a");
			
			case 23:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_10a");
			
			case 24:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_j_a");
			
			case 25:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_q_a");
			
			case 26:
				return MISC::GET_HASH_KEY("vw_prop_vw_dia_char_k_a");
			
			case 27:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_a_a");
			
			case 28:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_02a");
			
			case 29:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_03a");
			
			case 30:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_04a");
			
			case 31:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_05a");
			
			case 32:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_06a");
			
			case 33:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_07a");
			
			case 34:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_08a");
			
			case 35:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_09a");
			
			case 36:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_10a");
			
			case 37:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_j_a");
			
			case 38:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_q_a");
			
			case 39:
				return MISC::GET_HASH_KEY("vw_prop_vw_hrt_char_k_a");
			
			case 40:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_a_a");
			
			case 41:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_02a");
			
			case 42:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_03a");
			
			case 43:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_04a");
			
			case 44:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_05a");
			
			case 45:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_06a");
			
			case 46:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_07a");
			
			case 47:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_08a");
			
			case 48:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_09a");
			
			case 49:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_10a");
			
			case 50:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_j_a");
			
			case 51:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_q_a");
			
			case 52:
				return MISC::GET_HASH_KEY("vw_prop_vw_spd_char_k_a");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_ace");
			
			case 2:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_02");
			
			case 3:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_03");
			
			case 4:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_04");
			
			case 5:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_05");
			
			case 6:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_06");
			
			case 7:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_07");
			
			case 8:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_08");
			
			case 9:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_09");
			
			case 10:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_10");
			
			case 11:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_jack");
			
			case 12:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_queen");
			
			case 13:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_club_king");
			
			case 14:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_ace");
			
			case 15:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_02");
			
			case 16:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_03");
			
			case 17:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_04");
			
			case 18:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_05");
			
			case 19:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_06");
			
			case 20:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_07");
			
			case 21:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_08");
			
			case 22:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_09");
			
			case 23:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_10");
			
			case 24:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_jack");
			
			case 25:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_queen");
			
			case 26:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_dia_king");
			
			case 27:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_ace");
			
			case 28:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_02");
			
			case 29:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_03");
			
			case 30:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_04");
			
			case 31:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_05");
			
			case 32:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_06");
			
			case 33:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_07");
			
			case 34:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_08");
			
			case 35:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_09");
			
			case 36:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_10");
			
			case 37:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_jack");
			
			case 38:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_queen");
			
			case 39:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_hrt_king");
			
			case 40:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_ace");
			
			case 41:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_02");
			
			case 42:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_03");
			
			case 43:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_04");
			
			case 44:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_05");
			
			case 45:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_06");
			
			case 46:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_07");
			
			case 47:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_08");
			
			case 48:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_09");
			
			case 49:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_10");
			
			case 50:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_jack");
			
			case 51:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_queen");
			
			case 52:
				return MISC::GET_HASH_KEY("vw_prop_cas_card_spd_king");
			}
		
		default:
	}
	return 0;
}

int func_41(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 3 * 4 + iParam2 * 3) + iParam1);
}

char* func_42(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_deck_idle";
	}
	return "deck_idle";
}

char* func_43(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_deck_shuffle";
	}
	return "deck_shuffle";
}

char* func_44(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_deck_pick_up";
	}
	return "deck_pick_up";
}

char* func_45()
{
	return "anim_casino_b@amb@casino@games@threecardpoker@dealer";
}

int func_46(int iParam0, int iParam1)
{
	return (iParam0 * 3 + iParam1);
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	
	Var3 = { func_76(iParam0) };
	Var3.f_2 = (Var3.f_2 + 0.914f);
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar0 = func_46(iParam0, iVar6);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 53);
		iVar1 = func_40(iVar2, Local_1060.f_5);
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_55[iVar0]))
		{
			STREAMING::REQUEST_MODEL(iVar1);
			if (!STREAMING::HAS_MODEL_LOADED(iVar1) || !func_39(&(Local_138.f_55[iVar0]), iVar1, Var3, 1, 1, 1, 1, 1, 1, 1, 0))
			{
				return 0;
			}
		}
		iVar6++;
	}
	return 1;
}

int func_48(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = false;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar1 = func_41(iParam0, iVar3, iVar2);
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_68[iVar1]))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[iVar1]))
				{
					func_49(&(Local_138.f_68[iVar1]));
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[iVar1]);
					bVar0 = true;
				}
			}
			iVar3++;
		}
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar1 = func_46(iParam0, iVar4);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_138.f_55[iVar1]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_55[iVar1]))
			{
				func_49(&(Local_138.f_55[iVar1]));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_55[iVar1]);
				bVar0 = true;
			}
		}
		iVar4++;
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

void func_49(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

char* func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), func_78(), func_51(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), func_78(), func_51(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), func_78(), func_51(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), func_78(), func_51(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_138.f_117[(iParam0 * 4 + iVar2)] != func_439())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_138.f_15[iParam0] >= 7)
	{
		switch (iVar1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

char* func_51(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_138.f_117[(iParam0 * 4 + iVar1)] != func_439())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_138.f_15[iParam0] >= 7)
	{
		switch (iVar0)
		{
			case 0:
				return "female_idle_single_p01";
			
			case 1:
				return "female_idle_single_p02";
			
			case 2:
				return "female_idle_single_p03";
			
			case 3:
				return "female_idle_single_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return "idle_single_p01";
			
			case 1:
				return "idle_single_p02";
			
			case 2:
				return "idle_single_p03";
			
			case 3:
				return "idle_single_p04";
			}
		
		default:
	}
	return "";
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	MISC::SET_BIT(&(Local_138.f_20[iParam0]), bParam1);
}

int func_53(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char cVar0[64];
	int iVar16;
	char* sVar17;
	
	StringCopy(&cVar0, func_55(iParam0, iParam3), 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	iVar16 = NETWORK::NET_TO_PED(*uParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar16, false))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar16))
	{
		return 0;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar16))
	{
		return 0;
	}
	sVar17 = func_54(7);
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iVar16, &cVar0, sVar17, 1);
	return 1;
}

int func_54(int iParam0)
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

char* func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 1:
			return "MINIGAME_DEALER_ANOTHER_GO";
		
		case 3:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		
		case 2:
			return func_56(iParam1);
		
		case 4:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		
		case 5:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		
		case 6:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		
		case 7:
			return "MINIGAME_DEALER_REFUSE_BETS";
		
		case 9:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		
		case 21:
			return "MINIGAME_DEALER_CLOSED_BETS";
		
		case 8:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		case 10:
			return "MINIGAME_DEALER_BUSTS";
		
		case 11:
			return "MINIGAME_DEALER_WINS";
		
		case 12:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 13:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		case 14:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 15:
			return "";
		
		case 16:
			return "";
		
		case 17:
			return "";
		
		case 18:
			return "";
		
		case 19:
			return "";
		
		case 20:
			return "";
		
		default:
	}
	return "";
}

char* func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!func_62(iVar1, 1, 1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (func_60(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_58(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (func_57(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

int func_57(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_771[*iParam0 /*9*/].f_2;
	return func_59(iVar0, Local_1060.f_28);
}

int func_59(int iParam0, int iParam1)
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_61(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_61(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_45880[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_45880[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_62(int iParam0, bool bParam1, bool bParam2)
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
				if (iVar0 == Global_2673271.f_3)
				{
					return Global_2673271.f_2;
				}
				else if (Global_2658291[iVar0 /*468*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return BitTest(Local_138.f_20[iParam0], iParam1);
}

void func_64(int iParam0)
{
	MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 16);
	MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 17);
	MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 18);
	MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 19);
	MISC::CLEAR_BIT(&(Local_138.f_20[iParam0]), 21);
}

void func_65(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = 0;
	uParam0->f_1 = 52;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1)
		{
			iVar0 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, uParam0->f_1);
			uVar2 = uParam0->f_2[iVar1];
			uParam0->f_2[iVar1] = uParam0->f_2[iVar0];
			uParam0->f_2[iVar0] = uVar2;
			iVar1++;
		}
		iVar3++;
	}
}

void func_66(int iParam0, int iParam1)
{
	Local_138.f_576[iParam1] = iParam0;
}

void func_67(int iParam0)
{
	struct<5> Var0;
	
	Local_138[iParam0] = 1;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0])))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), func_78(), func_77(iParam0), 3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]))
			{
				Local_138.f_45[iParam0] = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_138.f_35[iParam0]);
				if (Local_138.f_45[iParam0] == -1 || (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_138.f_45[iParam0]) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), joaat("blend_out"))))
				{
					Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_78(), func_77(iParam0), 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_50[iParam0]);
			}
			return;
		}
	}
	if (func_48(iParam0))
	{
		Local_138.f_20[iParam0] = 0;
		Var0.f_1 = 3;
		Local_138.f_389[iParam0 /*5*/] = { Var0 };
		Local_138.f_5[iParam0] = 0;
		func_69(&(Local_138.f_150[iParam0 /*2*/]));
		func_79(1, iParam0);
		func_66(0, iParam0);
		func_36(0, iParam0);
		func_29(0, iParam0);
		Local_138.f_25[iParam0]++;
		Local_138[iParam0] = 0;
	}
}

int func_68(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_138.f_117[(iParam0 * 4 + iVar1)] != func_439() && Local_138.f_410[Local_138.f_117[(iParam0 * 4 + iVar1)] /*5*/] > 0)
			{
				iVar0++;
			}
			else
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, iVar1)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, iVar1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, iVar1)]);
					}
					else
					{
						func_49(&(Local_138.f_68[func_41(iParam0, 0, iVar1)]));
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, iVar1)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, iVar1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, iVar1)]);
					}
					else
					{
						func_49(&(Local_138.f_68[func_41(iParam0, 1, iVar1)]));
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, iVar1)]))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, iVar1)]))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, iVar1)]);
					}
					else
					{
						func_49(&(Local_138.f_68[func_41(iParam0, 2, iVar1)]));
					}
				}
			}
		}
		else if (Local_138.f_117[(iParam0 * 4 + iVar1)] != func_439())
		{
			iVar0++;
		}
		else
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, iVar1)]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, iVar1)]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 0, iVar1)]);
				}
				else
				{
					func_49(&(Local_138.f_68[func_41(iParam0, 0, iVar1)]));
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, iVar1)]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, iVar1)]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 1, iVar1)]);
				}
				else
				{
					func_49(&(Local_138.f_68[func_41(iParam0, 1, iVar1)]));
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, iVar1)]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, iVar1)]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(iParam0, 2, iVar1)]);
				}
				else
				{
					func_49(&(Local_138.f_68[func_41(iParam0, 2, iVar1)]));
				}
			}
		}
		iVar1++;
	}
	if (Local_138.f_30[iParam0] != iVar0)
	{
		Local_138.f_30[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

void func_69(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_70(int iParam0, int iParam1)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

int func_71(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_73(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_72(var uParam0)
{
	return uParam0->f_1;
}

void func_73(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

char* func_74(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_idle_var_01";
			
			case 1:
				return "female_idle_var_02";
			
			case 2:
				return "female_idle_var_03";
			
			case 3:
				return "female_idle_var_04";
			
			case 4:
				return "female_idle_var_05";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "idle_var_01";
			
			case 1:
				return "idle_var_02";
			
			case 2:
				return "idle_var_03";
			
			case 3:
				return "idle_var_04";
			
			case 4:
				return "idle_var_05";
			}
		
		default:
	}
	return "";
}

float func_75(int iParam0)
{
	if (Local_1060.f_28 == 1)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -135f;
			
			case 1:
				return 45f;
			
			case 2:
				return -45f;
			
			case 3:
				return -45f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_76(int iParam0)
{
	if (Local_1060.f_28 == 1)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1143.338f, 264.2453f, -52.8409f;
			
			case 1:
				return 1146.329f, 261.2543f, -52.8409f;
			
			case 2:
				return 1133.74f, 266.6947f, -52.0409f;
			
			case 3:
				return 1148.74f, 251.6947f, -52.0409f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_77(int iParam0)
{
	if (Local_138.f_15[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_78()
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_79(int iParam0, int iParam1)
{
	Local_138.f_586[iParam1] = iParam0;
}

void func_80(var uParam0)
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	
	iVar4 = 52;
	iVar5 = 0;
	while (iVar5 < 52)
	{
		iVar3 = MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, iVar4);
		iVar6 = 0;
		while (iVar6 < 52)
		{
			iVar8 = (iVar6 / 32);
			bVar9 = (iVar6 % 32);
			if (iVar7 == iVar3 && !BitTest(uVar0[iVar8], bVar9))
			{
				MISC::SET_BIT(&(uVar0[iVar8]), bVar9);
				uParam0->f_2[iVar5] = iVar6 + 1;
			}
			else
			{
				if (!BitTest(uVar0[iVar8], bVar9))
				{
					iVar7++;
				}
				iVar6++;
			}
		}
		iVar7 = 0;
		iVar4 = (iVar4 - 1);
		iVar5++;
	}
	uParam0->f_1 = 52;
}

void func_81()
{
	int iVar0;
	
	if (!func_85(PLAYER::PLAYER_ID()))
	{
		iVar0 = iLocal_1995;
		if (Global_2709979 != iVar0 && (Global_2709979 != -1 || func_445(PLAYER::PLAYER_ID())))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iVar0]))
			{
				func_82(iVar0);
			}
		}
		else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_50[iVar0]))
			{
				func_49(&(Local_138.f_50[iVar0]));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_50[iVar0]);
			}
		}
	}
	iLocal_1995++;
	if (iLocal_1995 >= Local_1060.f_28)
	{
		iLocal_1995 = 0;
	}
}

void func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("s_m_y_casino_01");
	if (Local_138.f_15[iParam0] >= 7)
	{
		iVar0 = joaat("s_f_y_casino_01");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT(func_78());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_78()))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]))
	{
		if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(true);
			}
			iVar1 = PED::CREATE_PED(26, iVar0, func_76(iParam0), func_75(iParam0), true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
			PED::SET_PED_AS_ENEMY(iVar1, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			PED::SET_PED_RESET_FLAG(iVar1, 249, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 185, true);
			PED::SET_PED_CONFIG_FLAG(iVar1, 108, true);
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar1, true);
			PED::SET_PED_CAN_EVASIVE_DIVE(iVar1, false);
			PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(iVar1, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar1, false);
			PED::SET_PED_CONFIG_FLAG(iVar1, 208, true);
			PED::SET_PED_CAN_RAGDOLL(iVar1, false);
			func_84(Local_138.f_15[iParam0], &iVar1);
			func_83(Local_138.f_15[iParam0], &iVar1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, func_76(iParam0), false, false, true);
			ENTITY::SET_ENTITY_HEADING(iVar1, func_75(iParam0));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				Local_138.f_50[iParam0] = NETWORK::PED_TO_NET(iVar1);
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iParam0]))
				{
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_138.f_50[iParam0], false);
					Local_138.f_10[iParam0] = 1;
					Local_138.f_35[iParam0] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_76(iParam0), 0f, 0f, func_75(iParam0), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_138.f_50[iParam0]), Local_138.f_35[iParam0], func_78(), func_77(iParam0), 1000f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_138.f_35[iParam0]);
					STREAMING::REMOVE_ANIM_DICT(func_78());
				}
			}
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(false);
			}
		}
	}
}

void func_83(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 1:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 2:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_02"));
			break;
		
		case 3:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 4:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 5:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_02"));
			break;
		
		case 6:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 7:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 8:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 9:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 10:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 11:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
		
		case 12:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_02"));
			break;
		
		case 13:
			AUDIO::SET_PED_VOICE_GROUP(*iParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 1:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 2:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 3:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 4:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 5:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 6:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 1, 0, 0);
			break;
		
		case 7:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 8:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 9:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 2, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 10:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 3, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 11:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, false, 1);
			break;
		
		case 12:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			break;
		
		case 13:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*iParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*iParam1, 1, 0, 0, false, 1);
			break;
	}
}

int func_85(int iParam0)
{
	if (iParam0 != func_439() && func_62(iParam0, 1, 1))
	{
		if (func_86(iParam0) && !func_444(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if (iParam0 != func_439() && func_62(iParam0, 1, 1))
	{
		return BitTest(Global_2658291[iParam0 /*468*/].f_325, 3);
	}
	return 0;
}

void func_87()
{
	struct<5> Var0;
	bool bVar5;
	int iVar6;
	
	Var0.f_1 = 3;
	bVar5 = false;
	iVar6 = iLocal_1994;
	if (Local_771[iVar6 /*9*/].f_2 == -1)
	{
		Local_138.f_410[iVar6 /*5*/] = { Var0 };
	}
	if (Local_771[iVar6 /*9*/].f_7 == 0)
	{
		if (Local_138.f_600[iVar6] != 0)
		{
			Local_138.f_600[iVar6] = 0;
		}
	}
	if (!bVar5)
	{
		if (func_88(iVar6))
		{
			bVar5 = true;
		}
	}
	iLocal_1994++;
	if (iLocal_1994 >= 32)
	{
		iLocal_1994 = 0;
	}
}

int func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_434())
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (!func_62(iVar1, 1, 1))
	{
		return 0;
	}
	iVar2 = Local_771[iParam0 /*9*/].f_7.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return 0;
	}
	if (Local_771[iParam0 /*9*/].f_7 == 1)
	{
		if (func_53(2, &(Local_138.f_50[iVar2]), 0, iParam0))
		{
			func_89(iParam0, 1);
		}
		return 1;
	}
	if (Local_771[iParam0 /*9*/].f_7 == 2)
	{
		if (func_53(3, &(Local_138.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 2);
		}
		return 1;
	}
	if (Local_771[iParam0 /*9*/].f_7 == 4)
	{
		if (func_53(4, &(Local_138.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 4);
		}
		return 1;
	}
	if (Local_771[iParam0 /*9*/].f_7 == 5)
	{
		if (func_53(5, &(Local_138.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 5);
		}
		return 1;
	}
	if (Local_771[iParam0 /*9*/].f_7 == 6)
	{
		if (func_53(6, &(Local_138.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 6);
		}
		return 1;
	}
	if (Local_771[iParam0 /*9*/].f_7 == 7)
	{
		if (func_53(7, &(Local_138.f_50[iVar2]), 0, -1))
		{
			func_89(iParam0, 7);
		}
		return 1;
	}
	return 0;
}

void func_89(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	MISC::SET_BIT(&(Local_138.f_600[iParam0]), iVar0);
}

void func_90()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_1993;
	if (Local_138.f_117[iVar0] != func_439())
	{
		iVar1 = Local_138.f_117[iVar0];
		if (((!func_62(Local_138.f_117[iVar0], 1, 1) || Local_771[iVar1 /*9*/].f_1 == -1) || Local_771[iVar1 /*9*/].f_1 != iVar0) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_138.f_117[iVar0]))
		{
			Local_138.f_117[iVar0] = func_439();
			if (Local_138.f_600[iVar0] != 0)
			{
				Local_138.f_600[iVar0] = 0;
			}
		}
	}
	if (func_62(iVar0, 1, 1) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		if (Local_771[iVar0 /*9*/].f_1 > -1 && Local_771[iVar0 /*9*/].f_1 < 32)
		{
			if (Local_138.f_117[Local_771[iVar0 /*9*/].f_1] == func_439())
			{
				if (func_62(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1))
				{
					Local_138.f_117[Local_771[iVar0 /*9*/].f_1] = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				}
			}
		}
	}
	iLocal_1993++;
	if (iLocal_1993 >= 32)
	{
		iLocal_1993 = 0;
	}
}

void func_91()
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<16> Var6;
	struct<3> Var22;
	
	if (!Local_1060.f_5)
	{
		if (func_445(PLAYER::PLAYER_ID()) && func_440() != func_439())
		{
			if (BitTest(Global_2658291[func_440() /*468*/].f_325.f_4, 4))
			{
				Local_1060.f_5 = 1;
				func_433();
				iLocal_1988 = 1;
			}
		}
	}
	else if (iLocal_1988)
	{
		if (func_432())
		{
			iLocal_1988 = 0;
		}
	}
	func_431();
	Local_1060.f_21 = func_427();
	func_417();
	func_413();
	func_410();
	if (Local_1060.f_800 > 2)
	{
		PAD::DISABLE_CONTROL_ACTION(2, 210, true);
		PAD::SET_INPUT_EXCLUSIVE(2, 210);
		PAD::DISABLE_CONTROL_ACTION(2, 26, true);
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 210))
		{
		}
		if (func_409(Local_1060.f_20) >= 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_76(func_409(Local_1060.f_20)), true) > 5f)
		{
			func_404(0);
		}
	}
	if (Local_1060.f_800 > 5)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
		func_402(1);
		func_401(1, 0);
	}
	if (Local_1060.f_800 > 6)
	{
		PAD::DISABLE_CONTROL_ACTION(2, 0, true);
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 0))
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 0)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 4);
			}
			else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
			}
		}
		CAM::BLOCK_FIRST_PERSON_ORIENTATION_RESET_THIS_UPDATE();
	}
	if (Local_1060.f_800 > 7)
	{
		func_397(&(Local_771[PLAYER::PLAYER_ID() /*9*/]));
	}
	if (func_396())
	{
		bLocal_1990 = true;
	}
	else if (bLocal_1990)
	{
		func_395(&uLocal_1991, 0, 0);
		bLocal_1990 = false;
	}
	else if (func_72(&uLocal_1991) && func_71(&uLocal_1991, 500, 0))
	{
		func_69(&uLocal_1991);
	}
	switch (Local_1060.f_800)
	{
		case 0:
			if (func_390())
			{
				Local_1060.f_798 = "idle_cardgames";
				Local_1060.f_24 = 0;
				Local_771[PLAYER::PLAYER_ID() /*9*/] = 0;
				Local_771[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
				Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
				Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
				func_389(PLAYER::PLAYER_ID());
				func_388(1);
			}
			break;
		
		case 1:
			switch (func_409(Local_1060.f_20))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_1060.f_18 = 5000;
					Local_1060.f_19 = 10;
					Local_1060.f_29 = 500;
					Local_1060.f_30 = 10;
					break;
				
				case 2:
				case 3:
					bVar0 = true;
					Local_1060.f_18 = 50000;
					Local_1060.f_19 = 1000;
					Local_1060.f_29 = 5000;
					Local_1060.f_30 = 1000;
					break;
			}
			if (Local_1060.f_28 == 1)
			{
				bVar0 = true;
				Local_1060.f_18 = 50000;
				Local_1060.f_19 = 1000;
				Local_1060.f_29 = 5000;
				Local_1060.f_30 = 1000;
			}
			if (((((((((((((((((((((((!Global_262145.f_26597 && !(Global_262145.f_26599 && !bVar0)) && !(Global_262145.f_26598 && bVar0)) && ((func_387(joaat("rm_GamingFloor_02")) || func_387(joaat("rm_GamingFloor_03"))) || func_445(PLAYER::PLAYER_ID()))) && func_385(PLAYER::PLAYER_PED_ID(), func_386(Local_1060.f_20), 1.5f, 1)) && func_379(PLAYER::PLAYER_PED_ID(), func_384(Local_1060.f_20), 40f)) && Local_138.f_410[PLAYER::PLAYER_ID() /*5*/] == 0) && !BitTest(Global_1950198.f_4, 2)) && !Global_2635562.f_2982) && Global_2709979 != func_409(Local_1060.f_20)) && (Global_2709979 != -1 || func_445(PLAYER::PLAYER_ID()))) && func_378()) && !func_374()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && func_371(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2635562.f_2982) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !func_370()) && !func_369()) && !func_367()) && !Global_2697006.f_14) && Global_1950191 != 33) && !func_366())
			{
				func_388(2);
			}
			else
			{
				Local_1060.f_20++;
				if (Local_1060.f_20 >= Local_1060.f_28 * 4)
				{
					Local_1060.f_20 = 0;
				}
			}
			break;
		
		case 2:
			func_365();
			func_389(PLAYER::PLAYER_ID());
			if (((((((((((((((((((((func_387(joaat("rm_GamingFloor_02")) || func_387(joaat("rm_GamingFloor_03"))) || func_445(PLAYER::PLAYER_ID())) && func_385(PLAYER::PLAYER_PED_ID(), func_386(Local_1060.f_20), 1.5f, 1)) && func_379(PLAYER::PLAYER_PED_ID(), func_384(Local_1060.f_20), 40f)) && Local_138.f_410[PLAYER::PLAYER_ID() /*5*/] == 0) && Global_2709979 != func_409(Local_1060.f_20)) && (Global_2709979 != -1 || func_445(PLAYER::PLAYER_ID()))) && func_378()) && !func_374()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && func_371(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2635562.f_2982) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !func_370()) && !func_369()) && !func_367()) && !Global_2697006.f_14) && Global_1950191 != 33) && !Local_138[func_409(Local_1060.f_20)]) && !func_366())
			{
				if ((((((func_62(PLAYER::PLAYER_ID(), 1, 1) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_364()) && !func_363()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !bLocal_1990) && !func_72(&uLocal_1991))
				{
					if (func_362(2, &uVar1))
					{
						if (!func_361("TCP_NA"))
						{
							func_360("TCP_NA");
						}
					}
					else if (Local_138.f_117[Local_1060.f_20] != func_439())
					{
						if (!func_361("TCP_USED"))
						{
							func_360("TCP_USED");
						}
					}
					else if (func_359())
					{
						if (func_355() == 2)
						{
							if (!func_361("CAS_MG_CTIME"))
							{
								func_360("CAS_MG_CTIME");
							}
						}
						else if (!func_361("CAS_MG_CBAN"))
						{
							func_360("CAS_MG_CBAN");
						}
					}
					else if ((!func_354(PLAYER::PLAYER_ID()) && (func_409(Local_1060.f_20) == 2 || func_409(Local_1060.f_20) == 3)) && !(func_353(1) && func_354(func_352())))
					{
						if (!func_361("CAS_MG_SUITE2"))
						{
							func_360("CAS_MG_SUITE2");
						}
					}
					else if (!func_351() && !(func_353(1) && func_350(func_352())))
					{
						if (!func_348("CAS_MG_MEMB2", func_349(1)))
						{
							func_347("CAS_MG_MEMB2", func_349(1));
						}
						else if (PAD::IS_CONTROL_JUST_PRESSED(2, 52))
						{
							HUD::CLEAR_HELP(true);
							func_346();
							func_388(3);
						}
					}
					else if (Local_1060.f_21 <= 0)
					{
						if (func_445(PLAYER::PLAYER_ID()))
						{
							if (!func_361("CAS_MG_NOCHIPS7"))
							{
								func_360("CAS_MG_NOCHIPS7");
							}
						}
						else if (!func_361("CAS_MG_NOCHIPS3"))
						{
							func_360("CAS_MG_NOCHIPS3");
						}
					}
					else if (Local_1060.f_21 < Local_1060.f_30)
					{
						if (func_445(PLAYER::PLAYER_ID()))
						{
							if (!func_361("CAS_MG_LOWCHIPS7"))
							{
								func_360("CAS_MG_LOWCHIPS7");
							}
						}
						else if (!func_361("CAS_MG_LOWCHIPS3"))
						{
							func_360("CAS_MG_LOWCHIPS3");
						}
					}
					else if (Local_1060.f_33 == -1)
					{
						if (func_345())
						{
							HUD::CLEAR_HELP(true);
						}
						if (((!func_354(PLAYER::PLAYER_ID()) && (func_409(Local_1060.f_20) == 2 || func_409(Local_1060.f_20) == 3)) && !(func_353(1) && func_354(func_352()))) || (!func_351() && (func_353(1) && func_350(func_352()))))
						{
							if (func_342(func_352()) == 1)
							{
								Local_1060.f_27 = 1;
								func_341(&(Local_1060.f_33), 4, "TCP_PLAY_A", 0, 0, 0, 0);
							}
							else if (func_340(func_352()))
							{
								Local_1060.f_27 = 2;
								func_341(&(Local_1060.f_33), 4, "TCP_PLAY_B", 0, 0, 0, 0);
							}
							else
							{
								Local_1060.f_27 = 3;
								func_341(&(Local_1060.f_33), 4, "TCP_PLAY_C", 0, 0, 0, 0);
							}
						}
						else
						{
							Local_1060.f_27 = 0;
							func_341(&(Local_1060.f_33), 4, "TCP_PLAY", 0, 0, 0, 0);
						}
					}
					else if (func_339(Local_1060.f_33, 1))
					{
						func_337(&(Local_1060.f_33));
						Local_1060.f_33 = -1;
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
						func_336();
						func_325(PLAYER::PLAYER_ID(), 0, 1048832, 0);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
						func_388(4);
					}
				}
				else
				{
					if (func_345())
					{
						HUD::CLEAR_HELP(true);
					}
					if (Local_1060.f_33 != -1)
					{
						func_337(&(Local_1060.f_33));
						Local_1060.f_33 = -1;
					}
					Local_1060.f_20 = 0;
					func_388(1);
				}
			}
			else
			{
				if (func_345())
				{
					HUD::CLEAR_HELP(true);
				}
				if (Local_1060.f_33 != -1)
				{
					func_337(&(Local_1060.f_33));
					Local_1060.f_33 = -1;
				}
				Local_1060.f_20 = 0;
				func_388(1);
			}
			break;
		
		case 3:
			if (!func_324())
			{
				func_388(2);
			}
			break;
		
		case 4:
			func_402(1);
			sVar2 = "CasinoUI_Cards_Three";
			if ((func_409(Local_1060.f_20) == 2 || func_409(Local_1060.f_20) == 3) || func_445(PLAYER::PLAYER_ID()))
			{
				sVar2 = "CasinoUI_Cards_Three_High";
			}
			if (BitTest(Global_1950198.f_5, 22))
			{
				func_395(&(Local_1060.f_794), 0, 0);
				func_323(Local_1060.f_20);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					func_325(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				else
				{
					func_325(PLAYER::PLAYER_ID(), 0, 256, 0);
				}
				func_388(5);
			}
			else
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar2, false);
				if (func_321(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar2))
				{
					if (!iLocal_1989)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
						func_319(0, 0);
						func_317(1, sVar2, sVar2);
						func_316("TCP_TITLE");
						func_315(-1, 1, 1);
						func_314("TCP_DIS", 0, 0);
						func_313("TCP_DIS1");
						func_313("TCP_DIS2");
						func_313("TCP_DIS3");
						func_312(202, "TCP_EXIT", -1);
						func_312(201, "TCP_CONT", -1);
						iLocal_1989 = 1;
					}
					func_283(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					func_280(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_1989 = 0;
					func_271();
				}
				else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
					func_280(1, -1);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar2);
					iLocal_1989 = 0;
					MISC::SET_BIT(&(Global_1950198.f_5), 22);
					func_395(&(Local_1060.f_794), 0, 0);
					func_323(Local_1060.f_20);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						func_325(PLAYER::PLAYER_ID(), 0, 0, 0);
					}
					else
					{
						func_325(PLAYER::PLAYER_ID(), 0, 256, 0);
					}
					func_388(5);
				}
			}
			break;
		
		case 5:
			if ((((func_270(Local_1060.f_20) && !func_363()) && !func_396()) && func_378()) && !func_374())
			{
				func_69(&(Local_1060.f_794));
				MISC::SET_BIT(&(Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_4), 3);
				func_261(2);
				func_388(6);
			}
			else
			{
				if (func_363())
				{
					func_271();
				}
				if (func_396())
				{
					func_271();
				}
				if (func_260(Local_1060.f_20))
				{
					func_271();
				}
				if (func_259())
				{
					func_271();
				}
				if (!func_378())
				{
					func_271();
				}
				if (func_374())
				{
					func_271();
				}
			}
			break;
		
		case 6:
			if (!func_363() && !func_396())
			{
				if (func_258())
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 1 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 2)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
					}
					fVar3 = func_256(PLAYER::PLAYER_PED_ID(), func_257(Local_1060.f_20, 0), 1);
					fVar4 = func_256(PLAYER::PLAYER_PED_ID(), func_257(Local_1060.f_20, 1), 1);
					fVar5 = func_256(PLAYER::PLAYER_PED_ID(), func_257(Local_1060.f_20, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_1060.f_23 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_1060.f_23 = 2;
					}
					else
					{
						Local_1060.f_23 = 0;
					}
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), func_257(Local_1060.f_20, Local_1060.f_23), 1f, 5000, func_255(Local_1060.f_20, Local_1060.f_23), 0.01f);
					func_388(7);
				}
			}
			else
			{
				func_271();
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_go_straight_to_coord")) != 0)
			{
				Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_1060.f_20), func_253(Local_1060.f_20), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_252(), func_251(Local_1060.f_23), 2f, -2f, 13, 16, 2f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
				Local_771[PLAYER::PLAYER_ID() /*9*/].f_7.f_1 = Local_771[PLAYER::PLAYER_ID() /*9*/].f_2;
				func_388(8);
			}
			break;
		
		case 8:
			CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(-1938411241);
			Local_1060.f_32 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_1060.f_26);
			if (func_250())
			{
				func_249(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), 2);
			}
			else
			{
				func_249(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), 1);
			}
			if (Local_1060.f_32 != -1)
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1060.f_32) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("ShowUi"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out")))
				{
					func_325(PLAYER::PLAYER_ID(), 0, 256, 0);
					Local_1948 = { Var6 };
					if (func_445(PLAYER::PLAYER_ID()))
					{
						Local_1948.f_0 = 1695074466;
					}
					else if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 == 2 || Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 == 3)
					{
						Local_1948.f_0 = 1952785842;
					}
					else
					{
						Local_1948.f_0 = joaat("standard");
					}
					Local_1948.f_1 = Local_771[PLAYER::PLAYER_ID() /*9*/].f_2;
					Local_1948.f_6 = 1;
					if (func_354(PLAYER::PLAYER_ID()))
					{
						Local_1948.f_15 = 1983458449;
					}
					else if (func_351())
					{
						Local_1948.f_15 = 1334658487;
					}
					else if (func_353(1) && (func_354(func_352()) || func_247(PLAYER::PLAYER_ID())))
					{
						Local_1948.f_15 = 980726932;
					}
					else
					{
						Local_1948.f_15 = 939907746;
					}
					func_395(&uLocal_1923, 0, 0);
					func_246();
					Local_1060.f_34 = func_427();
					func_388(9);
				}
			}
			break;
		
		case 9:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(-1938411241);
			func_95();
			break;
		
		case 10:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
			{
				AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_synchronized_scene")) == 1)
			{
				func_249(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), func_94());
				Var22 = { PAD::GET_CONTROL_NORMAL(2, 218), PAD::GET_CONTROL_NORMAL(2, 219), 0f };
				Local_1060.f_32 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_1060.f_26);
				if (Local_1060.f_7)
				{
					if (Local_1060.f_32 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1060.f_32) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
					{
						Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_1060.f_20), func_253(Local_1060.f_20), 2, false, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_252(), func_93(Local_1060.f_20), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
						Local_1060.f_7 = 0;
					}
				}
				else if (Local_1060.f_32 != -1 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1060.f_32) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) || (SYSTEM::VMAG(Var22) >= 0.24f && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 2116425869))))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_325(PLAYER::PLAYER_ID(), 1, 0, 0);
					STREAMING::REMOVE_ANIM_DICT(func_45());
					STREAMING::REMOVE_ANIM_DICT(func_78());
					STREAMING::REMOVE_ANIM_DICT(func_92());
					STREAMING::REMOVE_ANIM_DICT(func_252());
					func_433();
					MISC::CLEAR_BIT(&(Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_4), 3);
					func_365();
					func_388(2);
				}
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_325(PLAYER::PLAYER_ID(), 1, 0, 0);
				STREAMING::REMOVE_ANIM_DICT(func_45());
				STREAMING::REMOVE_ANIM_DICT(func_78());
				STREAMING::REMOVE_ANIM_DICT(func_92());
				STREAMING::REMOVE_ANIM_DICT(func_252());
				MISC::CLEAR_BIT(&(Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_4), 3);
				func_365();
				func_388(2);
			}
			break;
	}
}

char* func_92()
{
	return "anim_casino_b@amb@casino@games@threecardpoker@player";
}

char* func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 8:
		case 9:
		case 12:
		case 13:
			return "sit_exit_left";
		
		default:
	}
	return "sit_exit_left";
}

int func_94()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_427();
	iVar1 = (iVar0 - Local_1060.f_34);
	if (iVar1 < 0)
	{
		return 5;
	}
	if (iVar1 > 0)
	{
		return 4;
	}
	return 6;
}

void func_95()
{
	int iVar0;
	bool bVar1;
	struct<9> Var2;
	struct<5> Var11;
	struct<23> Var16;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	bool bVar50;
	int iVar51;
	int iVar52;
	bool bVar53;
	int iVar54;
	int iVar55;
	bool bVar56;
	bool bVar57;
	int iVar58;
	int iVar59;
	bool bVar60;
	bool bVar61;
	int iVar62;
	int iVar63;
	char* sVar64;
	bool bVar65;
	bool bVar66;
	
	if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
	{
		if (func_245(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2))
		{
			func_244("TCP_ERROR", -1);
			return;
		}
	}
	func_228();
	if (func_434())
	{
		Local_1948.f_10 = 1;
	}
	bVar1 = func_226();
	if (BitTest(Local_1060.f_24, 0) && !bVar1)
	{
		MISC::CLEAR_BIT(&(Local_1060.f_24), 0);
		HUD::CLEAR_HELP(true);
		func_224();
		return;
	}
	Local_1948.f_11 = func_222();
	if ((((((((PAD::IS_CONTROL_JUST_PRESSED(2, 202) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_363()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_pickup", 3)) && !BitTest(Local_1060.f_22, 0)) && !BitTest(Local_1060.f_22, 3)) && (!Local_1060.f_1 || !bVar1)) && !func_221())
	{
		Local_1925.f_4 = joaat("quit");
		Local_1948.f_2 = joaat("quit");
		Local_1925.f_22 = joaat("quit");
		Local_1925.f_7 = func_427();
		Local_1925.f_17 = func_220(&uLocal_1921, 0, 0);
		Local_1925.f_18 = func_434();
		Local_1925.f_19 = func_222();
		if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
		{
			Local_1925.f_9 = Local_138.f_30[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2];
		}
		if ((Local_1060.f_799 > 1 || Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 != 0) || Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 != 0)
		{
			if (Global_262145.f_26472)
			{
				STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1925);
			}
		}
		if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 > 0 && !Local_1060.f_2)
		{
			func_219(Local_771[PLAYER::PLAYER_ID() /*9*/].f_3);
		}
		if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 > 0 && !Local_1060.f_6)
		{
			func_219(Local_771[PLAYER::PLAYER_ID() /*9*/].f_5);
		}
		if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 > 0 && !Local_1060.f_3)
		{
			func_219(Local_771[PLAYER::PLAYER_ID() /*9*/].f_4);
		}
		SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_771[PLAYER::PLAYER_ID() /*9*/].f_3));
		SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_771[PLAYER::PLAYER_ID() /*9*/].f_5));
		SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_771[PLAYER::PLAYER_ID() /*9*/].f_4));
		func_404(1);
		HUD::CLEAR_HELP(true);
		return;
	}
	if (((Global_2709979 == Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 || Global_2697006.f_14) || Global_1950191 == 33) || !func_217())
	{
		Local_1925.f_7 = func_427();
		Local_1925.f_17 = func_220(&uLocal_1921, 0, 0);
		Local_1925.f_18 = func_434();
		Local_1925.f_19 = func_222();
		if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
		{
			Local_1925.f_9 = Local_138.f_30[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2];
		}
		if (Global_262145.f_26472)
		{
			STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1925);
		}
		func_404(1);
		HUD::CLEAR_HELP(true);
		return;
	}
	if (Local_1060.f_26 > -1)
	{
		Local_1060.f_32 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_1060.f_26);
		if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_idle", 3)) && !BitTest(Local_1060.f_24, 0)) && (!Local_1060.f_1 || !bVar1))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_252(), "idle_cardgames", 3))
			{
				if (Local_1060.f_32 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1060.f_32) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
				{
					Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), func_253(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_252(), "idle_cardgames", 2f, -2f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
					Local_1060.f_798 = "idle_cardgames";
				}
			}
			else if (Local_1060.f_32 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1060.f_32) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
			{
				Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), func_253(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_252(), func_216(0), 2f, -2f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
			}
		}
	}
	if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
	{
		func_214(&(Local_1060.f_92));
		if (!BitTest(Local_1060.f_22, 0) && !BitTest(Local_1060.f_22, 3))
		{
			func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 202, true), "TCP_EXIT", &(Local_1060.f_92), 0);
			if (((((Local_1060.f_799 == 3 && Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 > 0) && !BitTest(Local_1060.f_24, 2)) && !BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 1)) && !BitTest(Local_1060.f_24, 1)) && !BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 3))
			{
				func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 201, true), "TCP_PLAY_HAND", &(Local_1060.f_92), 0);
				func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 203, true), "TCP_FOLD_HAND", &(Local_1060.f_92), 0);
			}
			if (Local_138.f_576[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2] == 3 && ((Local_1060.f_21 >= Local_1060.f_30 || Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 != 0) || Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 != 0))
			{
				if (!BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 0) && !BitTest(Local_1060.f_24, 0))
				{
					if (Local_1060.f_21 >= Local_1060.f_19 * 2)
					{
						func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 201, true), "TCP_PLACE", &(Local_1060.f_92), 0);
					}
					func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 203, true), "TCP_DECLINEA", &(Local_1060.f_92), 0);
					if (Local_1060.f_21 >= Local_1060.f_19 * 2)
					{
						if (!BitTest(Local_1060.f_24, 8))
						{
							func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 204, true), "TCP_BET_MAX", &(Local_1060.f_92), 0);
						}
						func_212(2, 7, "TCP_BET_NUM", &(Local_1060.f_92));
					}
				}
				else if ((!BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 2) && Local_1060.f_21 >= (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 + Local_1060.f_30)) && !BitTest(Local_1060.f_24, 0))
				{
					func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 201, true), "TCP_PLACE_PP", &(Local_1060.f_92), 0);
					func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 203, true), "TCP_DECLINE", &(Local_1060.f_92), 0);
					if (!BitTest(Local_1060.f_24, 8))
					{
						func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 204, true), "TCP_BET_MAX", &(Local_1060.f_92), 0);
					}
					func_212(2, 7, "TCP_BET_NUM", &(Local_1060.f_92));
				}
			}
		}
		if (BitTest(Local_1060.f_22, 0))
		{
			func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 202, true), "IB_BACK", &(Local_1060.f_92), 0);
			func_212(2, 8, "IB_TAB", &(Local_1060.f_92));
		}
		else if (BitTest(Local_1060.f_22, 3))
		{
			func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 202, true), "IB_BACK", &(Local_1060.f_92), 0);
		}
		if (Local_138.f_576[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2] < 12)
		{
			if (Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/] > 0)
			{
				func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 208, true), "TCP_DLR", &(Local_1060.f_92), 0);
			}
			if (Local_138.f_410[PLAYER::PLAYER_ID() /*5*/] > 0)
			{
				if (BitTest(Local_1060.f_24, 4) || BitTest(Local_138.f_20[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2], func_211(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1)))
				{
					func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 207, true), "TCP_CARDS", &(Local_1060.f_92), 0);
				}
				else if (((((Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 > 0 && Local_1060.f_799 == 3) && !BitTest(Local_1060.f_24, 2)) && !BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 1)) && !BitTest(Local_1060.f_24, 1)) && !BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 3))
				{
					func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 207, true), "TCP_PICK_UP", &(Local_1060.f_92), 0);
				}
			}
		}
		if (!BitTest(Local_1060.f_22, 0) && !BitTest(Local_1060.f_22, 3))
		{
			func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 210, true), "TCP_RULESb", &(Local_1060.f_92), 0);
			func_213(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, 209, true), "TCP_HANDSb", &(Local_1060.f_92), 0);
		}
		Var2 = { func_210() };
		func_209(&(Local_1060.f_92), 1f);
		func_201(&(Local_1060.f_91), &Var2, &(Local_1060.f_92), func_208(&(Local_1060.f_92)));
		func_200(1);
	}
	func_195();
	func_168();
	switch (Local_1060.f_799)
	{
		case 0:
			if (Local_138.f_576[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2] == 3)
			{
				if ((Local_1060.f_17 > (Local_1060.f_21 / 2) || Local_1060.f_17 < Local_1060.f_19) || Local_1060.f_17 > Local_1060.f_18)
				{
					Local_1060.f_17 = Local_1060.f_19;
				}
				if ((((Local_1060.f_25 > Local_1060.f_21 || Local_1060.f_25 > Local_1060.f_29) || Local_1060.f_25 < Local_1060.f_30) || Local_1060.f_25 > (Local_1060.f_21 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_3)) || Local_1060.f_25 > Local_1060.f_21)
				{
					Local_1060.f_25 = Local_1060.f_30;
				}
				Var11.f_1 = 3;
				Local_1060.f_856 = { Var11 };
				Local_1925 = { Var16 };
				Local_1925.f_10 = 1;
				Local_1925.f_0 = -941885798;
				Local_1925.f_11 = func_354(PLAYER::PLAYER_ID());
				if (func_354(PLAYER::PLAYER_ID()))
				{
					Local_1925.f_20 = 1983458449;
				}
				else if (func_351())
				{
					Local_1925.f_20 = 1334658487;
				}
				else if (func_353(1) && (func_354(func_352()) || func_247(PLAYER::PLAYER_ID())))
				{
					Local_1925.f_20 = 980726932;
				}
				else
				{
					Local_1925.f_20 = 939907746;
				}
				if (func_445(PLAYER::PLAYER_ID()))
				{
					Local_1925.f_1 = 1695074466;
				}
				else if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 == 2 || Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 == 3)
				{
					Local_1925.f_1 = 1952785842;
				}
				else
				{
					Local_1925.f_1 = joaat("standard");
				}
				func_395(&uLocal_1921, 0, 0);
				Local_1925.f_3 = Local_138.f_25[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2];
				Local_1925.f_2 = Local_771[PLAYER::PLAYER_ID() /*9*/].f_2;
				func_167(1);
			}
			break;
		
		case 1:
			if ((!func_351() && !(func_353(1) && func_350(func_352()))) || ((!func_354(PLAYER::PLAYER_ID()) && (func_409(Local_1060.f_20) == 2 || func_409(Local_1060.f_20) == 3)) && !(func_353(1) && func_354(func_352()))))
			{
				if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_1925.f_9 = Local_138.f_30[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				Local_1948.f_2 = 939907746;
				Local_1925.f_4 = 939907746;
				Local_1925.f_7 = func_427();
				Local_1925.f_17 = func_220(&uLocal_1921, 0, 0);
				Local_1925.f_18 = func_434();
				Local_1925.f_19 = func_222();
				if (Global_262145.f_26472)
				{
					STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1925);
				}
				func_404(1);
				HUD::CLEAR_HELP(true);
				if (Local_1060.f_27 == 1)
				{
					func_244("IT_MEMBOc", -1);
				}
				else if (Local_1060.f_27 == 2)
				{
					func_244("IT_MEMBOa", -1);
				}
				else if (Local_1060.f_27 == 3)
				{
					func_244("IT_MEMBOb", -1);
				}
				return;
			}
			if ((((Local_1060.f_21 < Local_1060.f_30 && Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 == 0) && Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 == 0) && Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 == 0) && !Local_1060.f_1)
			{
				Local_1925.f_4 = -1275559872;
				Local_1948.f_2 = -1275559872;
				Local_1925.f_7 = func_427();
				Local_1925.f_17 = func_220(&uLocal_1921, 0, 0);
				Local_1925.f_18 = func_434();
				Local_1925.f_19 = func_222();
				if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_1925.f_9 = Local_138.f_30[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				if (Global_262145.f_26472)
				{
					STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1925);
				}
				func_404(1);
				HUD::CLEAR_HELP(true);
				if (func_445(PLAYER::PLAYER_ID()))
				{
					if (Local_1060.f_21 <= 0)
					{
						func_244("CAS_MG_NOCHIPS7", -1);
					}
					else
					{
						func_244("CAS_MG_LOWCHIPS7", -1);
					}
				}
				else if (Local_1060.f_21 <= 0)
				{
					func_244("CAS_MG_NOCHIPS3", -1);
				}
				else
				{
					func_244("CAS_MG_LOWCHIPS3", -1);
				}
				return;
			}
			if (func_359())
			{
				switch (func_355())
				{
					case 0:
						Local_1925.f_4 = 1982714739;
						break;
					
					case 1:
						Local_1925.f_4 = -633175758;
						break;
					
					case 2:
						Local_1925.f_4 = -1625999354;
						break;
				}
				switch (func_355())
				{
					case 0:
						Local_1948.f_2 = 1982714739;
						break;
					
					case 1:
						Local_1948.f_2 = -633175758;
						break;
					
					case 2:
						Local_1948.f_2 = -1625999354;
						break;
				}
				Local_1925.f_7 = func_427();
				Local_1925.f_17 = func_220(&uLocal_1921, 0, 0);
				Local_1925.f_18 = func_434();
				Local_1925.f_19 = func_222();
				if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_1925.f_9 = Local_138.f_30[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				if (Global_262145.f_26472)
				{
					STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1925);
				}
				func_404(1);
				HUD::CLEAR_HELP(true);
				if (func_355() == 2)
				{
					func_244("CAS_MG_CTIME", -1);
				}
				else
				{
					func_244("CAS_MG_CBAN", -1);
				}
				return;
			}
			if (((!BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 0) && !BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 2)) && !BitTest(Local_1060.f_24, 0)) && (!func_378() || func_374()))
			{
				Local_1925.f_7 = func_427();
				Local_1925.f_17 = func_220(&uLocal_1921, 0, 0);
				Local_1925.f_18 = func_434();
				Local_1925.f_19 = func_222();
				if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
				{
					Local_1925.f_9 = Local_138.f_30[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2];
				}
				if (Global_262145.f_26472)
				{
					STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1925);
				}
				func_404(1);
				HUD::CLEAR_HELP(true);
				return;
			}
			if (!BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 0))
			{
				if (!BitTest(Local_1060.f_24, 0))
				{
					if ((((((!BitTest(Local_1060.f_31, 1) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !PAD::IS_CONTROL_JUST_PRESSED(2, 204)) && !func_363()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1060.f_22, 0)) && !BitTest(Local_1060.f_22, 3))
					{
						bVar40 = PAD::IS_CONTROL_PRESSED(2, 188);
						bVar41 = PAD::IS_CONTROL_PRESSED(2, 187);
						if (bVar41 || ((((((bVar40 && !PAD::IS_CONTROL_JUST_PRESSED(2, 204)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_363()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1060.f_22, 0)) && !BitTest(Local_1060.f_22, 3)))
						{
							func_73(&(Local_1060.f_792), 0, 0);
							MISC::SET_BIT(&(Local_1060.f_31), true);
						}
					}
					else if (func_71(&(Local_1060.f_792), 100, 0))
					{
						func_69(&(Local_1060.f_792));
						MISC::CLEAR_BIT(&(Local_1060.f_31), 1);
					}
					if ((((((((PAD::IS_CONTROL_JUST_PRESSED(2, 204) && !bVar41) && !bVar40) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_363()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1060.f_22, 0)) && !BitTest(Local_1060.f_22, 3)) && !BitTest(Local_1060.f_24, 8))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", true);
						bVar39 = true;
					}
					if (bVar39)
					{
						while (bVar39)
						{
							if (Local_1060.f_17 >= 10000)
							{
								iVar42 = 5000;
							}
							else if (Local_1060.f_17 >= 5000)
							{
								iVar42 = 1000;
							}
							else if (Local_1060.f_17 >= 500)
							{
								iVar42 = 500;
							}
							else if (Local_1060.f_17 >= 100)
							{
								iVar42 = 50;
							}
							else
							{
								iVar42 = 10;
							}
							if (Local_1060.f_17 > (Local_1060.f_21 / 2))
							{
								Local_1060.f_17 = (Local_1060.f_17 - iVar42);
							}
							if (Local_1060.f_17 < Local_1060.f_19)
							{
								Local_1060.f_17 = Local_1060.f_19;
							}
							if (Local_1060.f_17 > Local_1060.f_18)
							{
								Local_1060.f_17 = Local_1060.f_18;
							}
							Local_1060.f_17 = (Local_1060.f_17 + iVar42);
							if (Local_1060.f_17 > (Local_1060.f_21 / 2))
							{
								bVar39 = false;
								Local_1060.f_17 = (Local_1060.f_17 - iVar42);
							}
							if (Local_1060.f_17 < Local_1060.f_19)
							{
								Local_1060.f_17 = Local_1060.f_19;
							}
							if (Local_1060.f_17 > Local_1060.f_18)
							{
								bVar39 = false;
								Local_1060.f_17 = Local_1060.f_18;
							}
						}
					}
					else
					{
						if (Local_1060.f_17 >= 10000)
						{
							iVar42 = 5000;
						}
						else if (Local_1060.f_17 >= 5000)
						{
							iVar42 = 1000;
						}
						else if (Local_1060.f_17 >= 500)
						{
							iVar42 = 500;
						}
						else if (Local_1060.f_17 >= 100)
						{
							iVar42 = 50;
						}
						else
						{
							iVar42 = 10;
						}
						if (Local_1060.f_17 > (Local_1060.f_21 / 2))
						{
							Local_1060.f_17 = (Local_1060.f_17 - iVar42);
						}
						if (Local_1060.f_17 < Local_1060.f_19)
						{
							Local_1060.f_17 = Local_1060.f_19;
						}
						if (Local_1060.f_17 > Local_1060.f_18)
						{
							Local_1060.f_17 = Local_1060.f_18;
						}
						iVar43 = Local_1060.f_17;
						if (bVar40)
						{
							Local_1060.f_17 = (Local_1060.f_17 + iVar42);
							if (Local_1060.f_17 > (Local_1060.f_21 / 2))
							{
								Local_1060.f_17 = (Local_1060.f_17 - iVar42);
							}
							if (Local_1060.f_17 < Local_1060.f_19)
							{
								Local_1060.f_17 = Local_1060.f_19;
							}
							if (Local_1060.f_17 > Local_1060.f_18)
							{
								Local_1060.f_17 = Local_1060.f_18;
							}
							if (Local_1060.f_17 == iVar43)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || !BitTest(Local_1060.f_24, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_1060.f_24), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_1060.f_24), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
						if (bVar41)
						{
							if (Local_1060.f_17 <= 100)
							{
								iVar42 = 10;
							}
							else if (Local_1060.f_17 <= 500)
							{
								iVar42 = 50;
							}
							else if (Local_1060.f_17 <= 5000)
							{
								iVar42 = 500;
							}
							else if (Local_1060.f_17 <= 10000)
							{
								iVar42 = 1000;
							}
							else
							{
								iVar42 = 5000;
							}
							Local_1060.f_17 = (Local_1060.f_17 - iVar42);
							if (Local_1060.f_17 < Local_1060.f_19)
							{
								Local_1060.f_17 = Local_1060.f_19;
							}
							if (Local_1060.f_17 == iVar43)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || !BitTest(Local_1060.f_24, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_1060.f_24), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_1060.f_24), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
					}
					if ((Local_1060.f_17 == Local_1060.f_18 || (Local_1060.f_17 + iVar42) > Local_1060.f_18) || (Local_1060.f_17 + iVar42) > (Local_1060.f_21 / 2))
					{
						MISC::SET_BIT(&(Local_1060.f_24), 8);
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_1060.f_24), 8);
					}
					MISC::SET_BIT(&(Local_1060.f_31), false);
					iVar0 = (30 - (func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])))
					{
						if ((((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !func_363()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1060.f_22, 0)) && !BitTest(Local_1060.f_22, 3))
						{
							if (((PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !PAD::IS_CONTROL_PRESSED(2, 203)) && Local_1060.f_17 >= Local_1060.f_19) && Local_1060.f_21 >= Local_1060.f_19 * 2)
							{
								MISC::SET_BIT(&(Local_1060.f_24), false);
								Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), func_253(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
								if (func_166(Local_1060.f_17))
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_92(), "bet_ante_large", 2f, -2f, 13, 16, 1000f, 0);
								}
								else
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_92(), "bet_ante", 2f, -2f, 13, 16, 1000f, 0);
								}
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
							}
							else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 203) && !PAD::IS_CONTROL_PRESSED(2, 201)) || Local_1060.f_21 < Local_1060.f_30)
							{
								Local_1060.f_21 = func_427();
								if ((((Local_1060.f_25 > Local_1060.f_21 || Local_1060.f_25 > Local_1060.f_29) || Local_1060.f_25 < Local_1060.f_30) || Local_1060.f_25 > (Local_1060.f_21 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_3)) || Local_1060.f_25 > Local_1060.f_21)
								{
									Local_1060.f_25 = Local_1060.f_30;
								}
								MISC::SET_BIT(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), false);
							}
						}
						if (func_72(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								func_165((30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_165((30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (Local_1060.f_21 < Local_1060.f_19 * 2)
						{
							if (((!func_361("TCP_LOW") && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
							{
								func_164("TCP_LOW");
							}
						}
						else if (((!func_361("TCP_PLACE_ANTE") && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
						{
							func_164("TCP_PLACE_ANTE");
						}
					}
				}
				else
				{
					if (((!func_361("TCP_PLACE_ANTE") && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
					{
						func_164("TCP_PLACE_ANTE");
					}
					if (func_72(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_165((30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_165((30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_1060.f_32 != -1 && !BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 0))
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1060.f_32) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) && Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
						{
							MISC::SET_BIT(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), false);
							MISC::CLEAR_BIT(&(Local_1060.f_24), 0);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844) && Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
						{
							Local_1060.f_1 = 1;
						}
						if (Local_1060.f_1)
						{
							if (func_155(Local_1060.f_17, &(Local_1060.f_16), 2, Local_1060.f_0))
							{
								if (Local_1060.f_16 == 3)
								{
									Local_1060.f_1 = 0;
									MISC::CLEAR_BIT(&(Local_1060.f_24), 0);
									Local_1060.f_16 = 0;
								}
								else
								{
									Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 = Local_1060.f_17;
									SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_771[PLAYER::PLAYER_ID() /*9*/].f_3));
									if (Local_1060.f_17 >= 10000)
									{
										iVar44 = 5000;
									}
									else if (Local_1060.f_17 >= 5000)
									{
										iVar44 = 1000;
									}
									else if (Local_1060.f_17 >= 500)
									{
										iVar44 = 500;
									}
									else if (Local_1060.f_17 >= 100)
									{
										iVar44 = 50;
									}
									else
									{
										iVar44 = 10;
									}
									if ((Local_1060.f_17 == Local_1060.f_18 || (Local_1060.f_17 + iVar44) > Local_1060.f_18) || (Local_1060.f_17 + iVar44) > (Local_1060.f_21 / 2))
									{
										Local_1925.f_5 = 1;
									}
									Local_1925.f_6 = (Local_1925.f_6 - Local_1060.f_17);
									Local_1948.f_3 = (Local_1948.f_3 - Local_1060.f_17);
									Local_1948.f_7 = (Local_1948.f_7 + Local_1060.f_17);
									Local_1925.f_12 = (Local_1925.f_12 + Local_1060.f_17);
									Local_1060.f_21 = func_427();
									if ((((Local_1060.f_25 > Local_1060.f_21 || Local_1060.f_25 > Local_1060.f_29) || Local_1060.f_25 < Local_1060.f_30) || Local_1060.f_25 > (Local_1060.f_21 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_3)) || Local_1060.f_25 > Local_1060.f_21)
									{
										Local_1060.f_25 = Local_1060.f_30;
									}
									Local_1060.f_1 = 0;
								}
							}
						}
					}
				}
				func_151(Local_1060.f_17, "TCP_BET2", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
			}
			else if (!BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 2))
			{
				if (!BitTest(Local_1060.f_24, 0))
				{
					if ((((((!BitTest(Local_1060.f_31, 1) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_363()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1060.f_22, 0)) && !BitTest(Local_1060.f_22, 3)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 204))
					{
						bVar45 = PAD::IS_CONTROL_PRESSED(2, 188);
						bVar46 = PAD::IS_CONTROL_PRESSED(2, 187);
						if (bVar46 || ((((((bVar45 && !PAD::IS_CONTROL_JUST_PRESSED(2, 204)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_363()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1060.f_22, 0)) && !BitTest(Local_1060.f_22, 3)))
						{
							func_73(&(Local_1060.f_792), 0, 0);
							MISC::SET_BIT(&(Local_1060.f_31), true);
						}
					}
					else if (func_71(&(Local_1060.f_792), 100, 0))
					{
						func_69(&(Local_1060.f_792));
						MISC::CLEAR_BIT(&(Local_1060.f_31), 1);
					}
					if ((((((((PAD::IS_CONTROL_JUST_PRESSED(2, 204) && !bVar46) && !bVar45) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_363()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1060.f_22, 0)) && !BitTest(Local_1060.f_22, 3)) && !BitTest(Local_1060.f_24, 8))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", true);
						bVar39 = true;
					}
					if (bVar39)
					{
						while (bVar39)
						{
							if (Local_1060.f_25 >= 10000)
							{
								iVar47 = 5000;
							}
							else if (Local_1060.f_25 >= 5000)
							{
								iVar47 = 1000;
							}
							else if (Local_1060.f_25 >= 500)
							{
								iVar47 = 500;
							}
							else if (Local_1060.f_25 >= 100)
							{
								iVar47 = 50;
							}
							else
							{
								iVar47 = 10;
							}
							if (Local_1060.f_25 > Local_1060.f_21)
							{
								Local_1060.f_25 = (Local_1060.f_25 - iVar47);
							}
							if (Local_1060.f_25 > Local_1060.f_29)
							{
								Local_1060.f_25 = Local_1060.f_29;
							}
							if (Local_1060.f_25 < Local_1060.f_30)
							{
								Local_1060.f_25 = Local_1060.f_30;
							}
							if (Local_1060.f_25 > (Local_1060.f_21 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								Local_1060.f_25 = (Local_1060.f_25 - iVar47);
							}
							Local_1060.f_25 = (Local_1060.f_25 + iVar47);
							if (Local_1060.f_25 > Local_1060.f_21)
							{
								bVar39 = false;
								Local_1060.f_25 = (Local_1060.f_25 - iVar47);
							}
							if (Local_1060.f_25 > Local_1060.f_29)
							{
								bVar39 = false;
								Local_1060.f_25 = Local_1060.f_29;
							}
							if (Local_1060.f_25 < Local_1060.f_30)
							{
								Local_1060.f_25 = Local_1060.f_30;
							}
							if (Local_1060.f_25 > (Local_1060.f_21 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								bVar39 = false;
								Local_1060.f_25 = (Local_1060.f_25 - iVar47);
							}
						}
					}
					else
					{
						if (Local_1060.f_25 >= 10000)
						{
							iVar47 = 5000;
						}
						else if (Local_1060.f_25 >= 5000)
						{
							iVar47 = 1000;
						}
						else if (Local_1060.f_25 >= 500)
						{
							iVar47 = 500;
						}
						else if (Local_1060.f_25 >= 100)
						{
							iVar47 = 50;
						}
						else
						{
							iVar47 = 10;
						}
						if (Local_1060.f_25 > Local_1060.f_21)
						{
							Local_1060.f_25 = (Local_1060.f_25 - iVar47);
						}
						if (Local_1060.f_25 > Local_1060.f_29)
						{
							Local_1060.f_25 = Local_1060.f_29;
						}
						if (Local_1060.f_25 < Local_1060.f_30)
						{
							Local_1060.f_25 = Local_1060.f_30;
						}
						if (Local_1060.f_25 > (Local_1060.f_21 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_3))
						{
							Local_1060.f_25 = (Local_1060.f_25 - iVar47);
						}
						iVar48 = Local_1060.f_25;
						if (bVar45)
						{
							Local_1060.f_25 = (Local_1060.f_25 + iVar47);
							if (Local_1060.f_25 > Local_1060.f_21)
							{
								Local_1060.f_25 = (Local_1060.f_25 - iVar47);
							}
							if (Local_1060.f_25 > Local_1060.f_29)
							{
								Local_1060.f_25 = Local_1060.f_29;
							}
							if (Local_1060.f_25 < Local_1060.f_30)
							{
								Local_1060.f_25 = Local_1060.f_30;
							}
							if (Local_1060.f_25 > (Local_1060.f_21 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								Local_1060.f_25 = (Local_1060.f_25 - iVar47);
							}
							if (Local_1060.f_25 == iVar48)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 188) || !BitTest(Local_1060.f_24, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_1060.f_24), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_1060.f_24), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
						if (bVar46)
						{
							if (Local_1060.f_25 <= 100)
							{
								iVar47 = 10;
							}
							else if (Local_1060.f_25 <= 500)
							{
								iVar47 = 50;
							}
							else if (Local_1060.f_25 <= 5000)
							{
								iVar47 = 500;
							}
							else if (Local_1060.f_25 <= 10000)
							{
								iVar47 = 1000;
							}
							else
							{
								iVar47 = 5000;
							}
							Local_1060.f_25 = (Local_1060.f_25 - iVar47);
							if (Local_1060.f_25 < Local_1060.f_30)
							{
								Local_1060.f_25 = Local_1060.f_30;
							}
							if (Local_1060.f_25 == iVar48)
							{
								if (PAD::IS_CONTROL_JUST_PRESSED(2, 187) || !BitTest(Local_1060.f_24, 10))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_1060.f_24), 10);
								}
							}
							else
							{
								MISC::CLEAR_BIT(&(Local_1060.f_24), 10);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", true);
							}
						}
					}
					if ((Local_1060.f_25 == Local_1060.f_29 || (Local_1060.f_25 + iVar47) > Local_1060.f_29) || (Local_1060.f_25 + iVar47) > (Local_1060.f_21 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_3))
					{
						MISC::SET_BIT(&(Local_1060.f_24), 8);
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_1060.f_24), 8);
					}
					MISC::SET_BIT(&(Local_1060.f_31), false);
					iVar0 = (30 - (func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
					if (iVar0 > 0 || !func_72(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])))
					{
						if ((((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !func_363()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1060.f_22, 0)) && !BitTest(Local_1060.f_22, 3))
						{
							if (((((PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !PAD::IS_CONTROL_PRESSED(2, 203)) && !PAD::IS_CONTROL_PRESSED(2, 204)) && Local_1060.f_25 >= Local_1060.f_30) && Local_1060.f_25 <= Local_1060.f_21) && Local_1060.f_21 >= (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 + Local_1060.f_30))
							{
								MISC::SET_BIT(&(Local_1060.f_24), false);
								Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), func_253(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
								if (func_166(Local_1060.f_25))
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_92(), "bet_plus_large", 2f, -2f, 13, 16, 1000f, 0);
								}
								else
								{
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_92(), "bet_plus", 2f, -2f, 13, 16, 1000f, 0);
								}
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
							}
							else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 203) && !PAD::IS_CONTROL_PRESSED(2, 201)) && !PAD::IS_CONTROL_PRESSED(2, 204)) || Local_1060.f_21 < (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 + Local_1060.f_30))
							{
								if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
								{
									MISC::SET_BIT(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), 2);
								}
								else
								{
									Local_1925.f_4 = joaat("quit");
									Local_1948.f_2 = joaat("quit");
									Local_1925.f_7 = func_427();
									Local_1925.f_17 = func_220(&uLocal_1921, 0, 0);
									Local_1925.f_18 = func_434();
									Local_1925.f_19 = func_222();
									if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
									{
										Local_1925.f_9 = Local_138.f_30[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2];
									}
									if (Global_262145.f_26472)
									{
										STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1925);
									}
									func_404(1);
									HUD::CLEAR_HELP(true);
									return;
								}
							}
						}
						if (func_72(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
						{
							if (func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
							{
								func_165((30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_165((30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (((!func_361("TCP_PLACE_PAIR") && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
						{
							func_164("TCP_PLACE_PAIR");
						}
					}
				}
				else
				{
					if (((!func_361("TCP_PLACE_PAIR") && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
					{
						func_164("TCP_PLACE_PAIR");
					}
					if (func_72(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_165((30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_165((30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
					if (Local_1060.f_32 != -1 && !BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 2))
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1060.f_32) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) && Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 > 0)
						{
							MISC::SET_BIT(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), 2);
							MISC::CLEAR_BIT(&(Local_1060.f_24), 0);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844) && Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 <= 0)
						{
							Local_1060.f_1 = 1;
						}
						if (Local_1060.f_1)
						{
							if (func_155(Local_1060.f_25, &(Local_1060.f_16), 2, Local_1060.f_0))
							{
								if (Local_1060.f_16 == 3)
								{
									Local_1060.f_1 = 0;
									MISC::CLEAR_BIT(&(Local_1060.f_24), 0);
									Local_1060.f_16 = 0;
								}
								else
								{
									Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 = Local_1060.f_25;
									SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_771[PLAYER::PLAYER_ID() /*9*/].f_5));
									if (Local_1060.f_25 >= 10000)
									{
										iVar49 = 5000;
									}
									else if (Local_1060.f_25 >= 5000)
									{
										iVar49 = 1000;
									}
									else if (Local_1060.f_25 >= 500)
									{
										iVar49 = 500;
									}
									else if (Local_1060.f_25 >= 100)
									{
										iVar49 = 50;
									}
									else
									{
										iVar49 = 10;
									}
									if ((Local_1060.f_25 == Local_1060.f_29 || (Local_1060.f_25 + iVar49) > Local_1060.f_29) || (Local_1060.f_25 + iVar49) > (Local_1060.f_21 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_3))
									{
										Local_1925.f_5 = 1;
									}
									Local_1925.f_6 = (Local_1925.f_6 - Local_1060.f_25);
									Local_1948.f_3 = (Local_1948.f_3 - Local_1060.f_25);
									Local_1948.f_8 = (Local_1948.f_8 + Local_1060.f_25);
									Local_1925.f_13 = (Local_1925.f_13 + Local_1060.f_25);
									Local_1060.f_21 = func_427();
									Local_1060.f_1 = 0;
								}
							}
						}
					}
				}
				func_151(Local_1060.f_25, "TCP_BET3", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
			}
			else
			{
				bVar50 = true;
				iVar51 = 0;
				while (iVar51 < 4)
				{
					iVar52 = Local_138.f_117[(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4 + iVar51)];
					if (iVar52 != -1)
					{
						if (!BitTest(Local_771[iVar52 /*9*/], 2))
						{
							bVar50 = false;
						}
					}
					iVar51++;
				}
				if ((((!func_361("TCP_WAIT") && !bVar50) && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
				{
					func_164("TCP_WAIT");
				}
				if (func_72(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
				{
					if (func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
					{
						func_165((30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						func_165((30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
				}
			}
			if ((Local_138.f_576[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2] > 3 && !BitTest(Local_1060.f_24, 0)) && !Local_1060.f_1)
			{
				if (BitTest(Local_1060.f_31, 0))
				{
					HUD::CLEAR_HELP(true);
					Local_1948.f_12++;
					if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0 && Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 <= 0)
					{
						MISC::SET_BIT(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), 5);
					}
					func_167(2);
				}
				else
				{
					bVar53 = true;
					iVar54 = 0;
					while (iVar54 < 4)
					{
						iVar55 = Local_138.f_117[(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4 + iVar54)];
						if (iVar55 != -1)
						{
							if (!BitTest(Local_771[iVar55 /*9*/], 2))
							{
								bVar53 = false;
							}
						}
						iVar54++;
					}
					if ((((!func_361("TCP_WAIT") && !bVar53) && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
					{
						func_164("TCP_WAIT");
					}
					if (func_72(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
					{
						if (func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
						{
							func_165((30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
						else
						{
							func_165((30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
			{
				if (Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/] == 3)
				{
					if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
					{
						MISC::SET_BIT(&(Local_1060.f_24), 6);
					}
					MISC::CLEAR_BIT(&(Local_1060.f_24), 0);
					func_167(3);
				}
			}
			break;
		
		case 3:
			if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0 && Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 <= 0)
			{
				MISC::SET_BIT(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), 3);
				if (!BitTest(Local_1060.f_24, 4))
				{
					MISC::SET_BIT(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), 4);
				}
				func_167(4);
				return;
			}
			if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]);
					bVar56 = true;
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]);
					bVar56 = true;
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]);
					bVar56 = true;
				}
				if (bVar56)
				{
					return;
				}
				if ((((((!BitTest(Local_1060.f_24, 0) && !BitTest(Local_1060.f_24, 4)) && !BitTest(Local_1060.f_24, 2)) && !BitTest(Local_1060.f_24, 1)) && !BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 1)) && !BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 3)) && Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
				{
					if ((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !func_363()) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if ((PAD::IS_CONTROL_JUST_PRESSED(2, 207) && !PAD::IS_CONTROL_PRESSED(2, 203)) && !PAD::IS_CONTROL_PRESSED(2, 201))
						{
							Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), func_253(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_92(), "cards_pickup", 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_pickup_card_a", 1000f, -1000f, 13);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_pickup_card_b", 1000f, -1000f, 13);
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_pickup_card_c", 1000f, -1000f, 13);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
							MISC::SET_BIT(&(Local_1060.f_24), 7);
							MISC::SET_BIT(&(Local_1060.f_24), false);
						}
					}
				}
				if (!BitTest(Local_1060.f_24, 0))
				{
					if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
					{
						iVar0 = (30 - (func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) / 1000));
						if (iVar0 > 0)
						{
							if (func_72(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])) && (30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)) >= 0)
							{
								if (func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0) <= 24000)
								{
									func_165((30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
								}
								else
								{
									func_165((30000 - func_220(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/]), 0, 0)), "TCP_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
							if (((!func_361("TCP_PLACE_PLAY") && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
							{
								func_164("TCP_PLACE_PLAY");
							}
							if ((((!NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && !func_363()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !BitTest(Local_1060.f_22, 0)) && !BitTest(Local_1060.f_22, 3))
							{
								if ((PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !PAD::IS_CONTROL_PRESSED(2, 203)) && (!PAD::IS_CONTROL_PRESSED(2, 207) || BitTest(Local_1060.f_24, 4)))
								{
									if (BitTest(Local_1060.f_24, 4))
									{
										Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), func_253(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_92(), "cards_play", 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_play_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_play_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_play_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
									}
									MISC::SET_BIT(&(Local_1060.f_24), false);
									MISC::SET_BIT(&(Local_1060.f_24), 2);
								}
								else if ((PAD::IS_CONTROL_JUST_PRESSED(2, 203) && !PAD::IS_CONTROL_PRESSED(2, 201)) && (!PAD::IS_CONTROL_PRESSED(2, 207) || BitTest(Local_1060.f_24, 4)))
								{
									if (BitTest(Local_1060.f_24, 4))
									{
										Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), func_253(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_92(), "cards_fold", 2f, -2f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
									}
									MISC::SET_BIT(&(Local_1060.f_24), false);
									MISC::SET_BIT(&(Local_1060.f_24), true);
								}
							}
						}
						else if (func_72(&(Local_138.f_150[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*2*/])))
						{
							if (BitTest(Local_1060.f_24, 4))
							{
								Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), func_253(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_92(), "cards_fold", 2f, -2f, 13, 16, 1000f, 0);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
								NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
							}
							MISC::SET_BIT(&(Local_1060.f_24), false);
							MISC::SET_BIT(&(Local_1060.f_24), true);
						}
					}
					else
					{
						MISC::SET_BIT(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), 3);
						if (!BitTest(Local_1060.f_24, 4))
						{
							MISC::SET_BIT(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), 4);
						}
						func_167(4);
						return;
					}
				}
				else if (BitTest(Local_1060.f_24, 2))
				{
					if (!BitTest(Local_1060.f_24, 3))
					{
						if ((Local_1060.f_32 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1060.f_32) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out")))) || !BitTest(Local_1060.f_24, 4))
						{
							Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), func_253(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							if (func_166(Local_771[PLAYER::PLAYER_ID() /*9*/].f_3))
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_92(), "cards_bet_large", 2f, -2f, 13, 16, 1000f, 0);
							}
							else
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_92(), "cards_bet", 2f, -2f, 13, 16, 1000f, 0);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
							MISC::SET_BIT(&(Local_1060.f_24), 3);
						}
					}
					else if (Local_1060.f_32 != -1)
					{
						if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1060.f_32) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))) && Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 > 0)
						{
							Local_1060.f_798 = "idle_cardgames";
							Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), func_253(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_252(), Local_1060.f_798, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
							MISC::CLEAR_BIT(&(Local_1060.f_24), 0);
							MISC::CLEAR_BIT(&(Local_1060.f_24), 1);
							MISC::CLEAR_BIT(&(Local_1060.f_24), 2);
							MISC::CLEAR_BIT(&(Local_1060.f_24), 3);
							MISC::SET_BIT(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), true);
							if (!BitTest(Local_1060.f_24, 4))
							{
								MISC::SET_BIT(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), 4);
							}
							func_167(4);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1503712844) && Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 <= 0)
						{
							Local_1060.f_1 = 1;
						}
						if (Local_1060.f_1)
						{
							if (func_155(Local_771[PLAYER::PLAYER_ID() /*9*/].f_3, &(Local_1060.f_16), 2, Local_1060.f_0))
							{
								if (Local_1060.f_16 == 3)
								{
									Local_1060.f_1 = 0;
									MISC::CLEAR_BIT(&(Local_1060.f_24), 0);
									MISC::CLEAR_BIT(&(Local_1060.f_24), 1);
									MISC::CLEAR_BIT(&(Local_1060.f_24), 2);
									MISC::CLEAR_BIT(&(Local_1060.f_24), 3);
									if (BitTest(Local_1060.f_24, 4))
									{
										Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), func_253(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), 2, false, true, 1f, 0f, 1f);
										NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_92(), "cards_idle", 1000f, -1000f, 13, 16, 1000f, 0);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
										NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
										NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
									}
									Local_1060.f_16 = 0;
								}
								else
								{
									Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 = Local_771[PLAYER::PLAYER_ID() /*9*/].f_3;
									SECURITY::REGISTER_SCRIPT_VARIABLE(&(Local_771[PLAYER::PLAYER_ID() /*9*/].f_4));
									Local_1925.f_6 = (Local_1925.f_6 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_3);
									Local_1948.f_3 = (Local_1948.f_3 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_3);
									Local_1060.f_21 = func_427();
									Local_1060.f_1 = 0;
								}
							}
						}
					}
				}
				else if (BitTest(Local_1060.f_24, 1))
				{
					if ((Local_1060.f_32 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1060.f_32) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out")))) || !BitTest(Local_1060.f_24, 4))
					{
						Local_1060.f_798 = "idle_cardgames";
						Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), func_253(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_252(), Local_1060.f_798, 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
						MISC::CLEAR_BIT(&(Local_1060.f_24), 0);
						MISC::CLEAR_BIT(&(Local_1060.f_24), 1);
						MISC::CLEAR_BIT(&(Local_1060.f_24), 2);
						MISC::CLEAR_BIT(&(Local_1060.f_24), 3);
						MISC::SET_BIT(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), 3);
						if (!BitTest(Local_1060.f_24, 4))
						{
							MISC::SET_BIT(&(Local_771[PLAYER::PLAYER_ID() /*9*/]), 4);
						}
						func_167(4);
					}
				}
				else if (BitTest(Local_1060.f_24, 7) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_pickup", 3))
				{
					if (Local_1060.f_32 != -1 && (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_1060.f_32) >= 0.99f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("blend_out"))))
					{
						Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), func_253(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_92(), "cards_idle", 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_idle_card_a", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_idle_card_b", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_idle_card_c", 1000f, -1000f, 13);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
						MISC::CLEAR_BIT(&(Local_1060.f_24), 0);
						MISC::CLEAR_BIT(&(Local_1060.f_24), 7);
						MISC::SET_BIT(&(Local_1060.f_24), 4);
					}
				}
				if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
				{
					func_151(Local_771[PLAYER::PLAYER_ID() /*9*/].f_3, "TCP_BET4", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
				}
			}
			break;
		
		case 4:
			if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0)
			{
				bVar57 = true;
				iVar58 = 0;
				while (iVar58 < 4)
				{
					iVar59 = Local_138.f_117[(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4 + iVar58)];
					if (iVar59 != -1)
					{
						if ((!BitTest(Local_771[iVar59 /*9*/], 1) && !BitTest(Local_771[iVar59 /*9*/], 3)) && (Local_771[iVar59 /*9*/].f_3 > 0 || Local_771[iVar59 /*9*/].f_5 > 0))
						{
							bVar57 = false;
						}
					}
					iVar58++;
				}
				if (Local_138.f_576[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2] == 9 && !bVar57)
				{
					if (((!func_361("TCP_WAIT") && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
					{
						func_164("TCP_WAIT");
					}
				}
				else if (func_361("TCP_WAIT") || func_361("TCP_PLACE_PLAY"))
				{
					HUD::CLEAR_HELP(true);
				}
				if (Local_138.f_576[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2] == 1)
				{
					if (BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 5))
					{
						bVar60 = true;
					}
					if (Local_1060.f_33 != -1)
					{
						func_337(&(Local_1060.f_33));
						Local_1060.f_33 = -1;
					}
					Local_1060.f_2 = 0;
					Local_1060.f_3 = 0;
					Local_1060.f_4 = 0;
					Local_1060.f_6 = 0;
					Local_1060.f_24 = 0;
					Local_771[PLAYER::PLAYER_ID() /*9*/] = 0;
					Local_771[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
					Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
					Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
					Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
					func_167(0);
					Local_1925.f_7 = func_427();
					Local_1925.f_17 = func_220(&uLocal_1921, 0, 0);
					Local_1925.f_18 = func_434();
					Local_1925.f_19 = func_222();
					if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 > -1)
					{
						Local_1925.f_9 = Local_138.f_30[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2];
					}
					if (!func_378() || func_374())
					{
						if (Global_262145.f_26472 && !bVar60)
						{
							STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1925);
						}
						func_404(1);
						HUD::CLEAR_HELP(true);
						return;
					}
					if (func_359())
					{
						switch (func_355())
						{
							case 0:
								Local_1925.f_4 = 1982714739;
								break;
							
							case 1:
								Local_1925.f_4 = -633175758;
								break;
							
							case 2:
								Local_1925.f_4 = -1625999354;
								break;
						}
						switch (func_355())
						{
							case 0:
								Local_1948.f_2 = 1982714739;
								break;
							
							case 1:
								Local_1948.f_2 = -633175758;
								break;
							
							case 2:
								Local_1948.f_2 = -1625999354;
								break;
						}
						if (Global_262145.f_26472 && !bVar60)
						{
							STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1925);
						}
						func_404(1);
						HUD::CLEAR_HELP(true);
						if (func_355() == 2)
						{
							func_244("CAS_MG_CTIME", -1);
						}
						else
						{
							func_244("CAS_MG_CBAN", -1);
						}
						return;
					}
					if (Global_262145.f_26472 && !bVar60)
					{
						STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1925);
					}
					return;
				}
				if ((Local_138.f_5[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2] && Local_138.f_410[PLAYER::PLAYER_ID() /*5*/] > 0) && BitTest(Local_138.f_20[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2], func_211(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1)))
				{
					iVar62 = func_9(&(Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0);
					iVar63 = func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0);
					if (func_25(iVar62))
					{
						bVar61 = true;
					}
					if (iVar63 > 500)
					{
						Local_1925.f_22 = 745220304;
					}
					else if (iVar63 > 400)
					{
						Local_1925.f_22 = 588481795;
					}
					else if (iVar63 > 300)
					{
						Local_1925.f_22 = joaat("straight");
					}
					else if (iVar63 > 200)
					{
						Local_1925.f_22 = joaat("flush");
					}
					else if (iVar63 > 100)
					{
						Local_1925.f_22 = 378531009;
					}
					else
					{
						Local_1925.f_22 = 201584577;
					}
					if (((Local_1060.f_2 && Local_1060.f_3) && Local_1060.f_4) && Local_1060.f_6)
					{
						if (!BitTest(Local_1060.f_24, 5))
						{
							Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), func_253(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
							sVar64 = func_150(Local_1925.f_6);
							if ((Local_1060.f_28 == 1 || func_409(Local_1060.f_20) == 2) || func_409(Local_1060.f_20) == 3)
							{
								if (((Local_1060.f_17 >= 35000 && iVar63 > iVar62) && iVar63 > 300) || (Local_1060.f_25 >= 3500 && iVar63 > 300))
								{
									sVar64 = func_149();
								}
								else if (((Local_1060.f_17 >= 35000 && iVar63 > 300) && iVar63 < iVar62) && !(Local_1060.f_25 >= 3500 && iVar63 > 300))
								{
									sVar64 = func_147();
								}
							}
							else if (((Local_1060.f_17 >= 4500 && iVar63 > iVar62) && iVar63 > 300) || (Local_1060.f_25 >= 450 && iVar63 > 300))
							{
								sVar64 = func_149();
							}
							else if (((Local_1060.f_17 >= 4500 && iVar63 > 300) && iVar63 < iVar62) && !(Local_1060.f_25 >= 450 && iVar63 > 300))
							{
								sVar64 = func_147();
							}
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_252(), sVar64, 2f, -2f, 13, 16, 1000f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
							MISC::SET_BIT(&(Local_1060.f_24), 5);
						}
						if (Local_1925.f_14 > 0)
						{
							if (!BitTest(Local_1060.f_24, 9))
							{
								if (func_102(Local_1925.f_14, &(Local_1060.f_16), 2))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", true);
									MISC::SET_BIT(&(Local_1060.f_24), 9);
									if (func_446(PLAYER::PLAYER_ID()) && iVar63 > 500)
									{
										MISC::SET_BIT(&(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_858), 11);
									}
								}
							}
						}
					}
					if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 > 0)
					{
						if (!BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/], 3))
						{
							if (!bVar61)
							{
								if ((((((Local_1060.f_2 && Local_1060.f_3) && Local_1060.f_4) && Local_1060.f_6) && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
								{
									if (!func_100("TCP_WIN_NP", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1925.f_14))
									{
										func_99("TCP_WIN_NP", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1925.f_14);
									}
								}
								if (!Local_1060.f_2)
								{
									Local_1060.f_2 = 1;
									SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
									Local_1948.f_3 = (Local_1948.f_3 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_1925.f_6 = (Local_1925.f_6 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_1925.f_14 = (Local_1925.f_14 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
								}
								if (!Local_1060.f_3)
								{
									Local_1060.f_3 = 1;
									SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
									Local_1948.f_3 = (Local_1948.f_3 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_4);
									Local_1925.f_6 = (Local_1925.f_6 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_4);
									Local_1948.f_13++;
									Local_1925.f_15 = 1;
									Local_1925.f_14 = (Local_1925.f_14 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_4);
									Local_1925.f_4 = joaat("win");
								}
							}
							else if (iVar63 > iVar62)
							{
								if ((((((Local_1060.f_2 && Local_1060.f_3) && Local_1060.f_4) && Local_1060.f_6) && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
								{
									if (iVar63 > 500 && iVar62 > 500)
									{
										bVar65 = true;
									}
									if ((iVar63 > 400 && iVar62 > 400) && (iVar63 < 500 && iVar62 < 500))
									{
										bVar65 = true;
									}
									if ((iVar63 > 300 && iVar62 > 300) && (iVar63 < 400 && iVar62 < 400))
									{
										bVar65 = true;
									}
									if ((iVar63 > 200 && iVar62 > 200) && (iVar63 < 300 && iVar62 < 300))
									{
										bVar65 = true;
									}
									if ((iVar63 > 100 && iVar62 > 100) && (iVar63 < 200 && iVar62 < 200))
									{
										bVar65 = true;
									}
									if (bVar65)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1925.f_14))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1925.f_14);
										}
									}
									else if (!func_100("TCP_WIN", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1925.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1925.f_14);
									}
								}
								if (!Local_1060.f_2)
								{
									Local_1060.f_2 = 1;
									SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
									Local_1948.f_3 = (Local_1948.f_3 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_1925.f_6 = (Local_1925.f_6 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									Local_1925.f_14 = (Local_1925.f_14 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
								}
								if (!Local_1060.f_3)
								{
									Local_1060.f_3 = 1;
									SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
									Local_1948.f_3 = (Local_1948.f_3 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
									Local_1925.f_6 = (Local_1925.f_6 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
									Local_1925.f_14 = (Local_1925.f_14 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
									Local_1948.f_13++;
									Local_1925.f_15 = 1;
									Local_1925.f_4 = joaat("win");
								}
							}
							else if (iVar63 == iVar62)
							{
								iVar62 = func_9(&(Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 1, 0);
								iVar63 = func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 1, 0);
								if (iVar63 == iVar62)
								{
									iVar62 = func_9(&(Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 1);
									iVar63 = func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 1);
									if (iVar63 > iVar62)
									{
										if ((((((Local_1060.f_2 && Local_1060.f_3) && Local_1060.f_4) && Local_1060.f_6) && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
										{
											if (!func_100("TCP_WIN2", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1925.f_14))
											{
												func_99("TCP_WIN2", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1925.f_14);
											}
										}
										if (!Local_1060.f_2)
										{
											Local_1060.f_2 = 1;
											SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
											Local_1948.f_3 = (Local_1948.f_3 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
											Local_1925.f_6 = (Local_1925.f_6 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
											Local_1925.f_14 = (Local_1925.f_14 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
										}
										if (!Local_1060.f_3)
										{
											Local_1060.f_3 = 1;
											SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
											Local_1948.f_3 = (Local_1948.f_3 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
											Local_1925.f_6 = (Local_1925.f_6 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
											Local_1925.f_14 = (Local_1925.f_14 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
											Local_1948.f_13++;
											Local_1925.f_15 = 1;
											Local_1925.f_4 = joaat("win");
										}
									}
									else if (iVar63 == iVar62)
									{
										if ((((((Local_1060.f_2 && Local_1060.f_3) && Local_1060.f_4) && Local_1060.f_6) && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
										{
											if (!func_361("TCP_LOSE_PUSH"))
											{
												func_164("TCP_LOSE_PUSH");
											}
										}
										if (!Local_1060.f_2)
										{
											Local_1060.f_2 = 1;
											SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
											Local_1948.f_3 = (Local_1948.f_3 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3);
											Local_1925.f_6 = (Local_1925.f_6 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3);
											Local_1925.f_14 = (Local_1925.f_14 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3);
											func_219(Local_771[PLAYER::PLAYER_ID() /*9*/].f_3);
										}
										if (!Local_1060.f_3)
										{
											Local_1060.f_3 = 1;
											SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
											Local_1948.f_3 = (Local_1948.f_3 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_4);
											Local_1925.f_6 = (Local_1925.f_6 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_4);
											Local_1925.f_14 = (Local_1925.f_14 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_4);
											Local_1948.f_13++;
											Local_1925.f_15 = 1;
											Local_1925.f_4 = joaat("win");
										}
										Local_1060.f_2 = 1;
									}
									else
									{
										if ((((((Local_1060.f_2 && Local_1060.f_3) && Local_1060.f_4) && Local_1060.f_6) && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
										{
											if (Local_1925.f_14 > 0)
											{
												if (!func_100("TCP_WIN", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1925.f_14))
												{
													func_99("TCP_WIN", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1925.f_14);
												}
											}
											else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
											{
												func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
											}
										}
										Local_1925.f_4 = joaat("lose");
										if (!Local_1060.f_3)
										{
											func_219((Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3));
											Local_1060.f_3 = 1;
											Local_1948.f_14++;
										}
										Local_1060.f_2 = 1;
									}
								}
								else if (iVar63 > iVar62)
								{
									if ((((((Local_1060.f_2 && Local_1060.f_3) && Local_1060.f_4) && Local_1060.f_6) && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1925.f_14))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1925.f_14);
										}
									}
									if (!Local_1060.f_2)
									{
										Local_1060.f_2 = 1;
										SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
										Local_1948.f_3 = (Local_1948.f_3 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
										Local_1925.f_6 = (Local_1925.f_6 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
										Local_1925.f_14 = (Local_1925.f_14 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 * 2);
									}
									if (!Local_1060.f_3)
									{
										Local_1060.f_3 = 1;
										SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
										Local_1948.f_3 = (Local_1948.f_3 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
										Local_1925.f_6 = (Local_1925.f_6 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
										Local_1948.f_13++;
										Local_1925.f_15 = 1;
										Local_1925.f_14 = (Local_1925.f_14 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 * 2);
										Local_1925.f_4 = joaat("win");
									}
								}
								else
								{
									if ((((((Local_1060.f_2 && Local_1060.f_3) && Local_1060.f_4) && Local_1060.f_6) && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
									{
										if (Local_1925.f_14 > 0)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1925.f_14))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1925.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									Local_1925.f_4 = joaat("lose");
									if (!Local_1060.f_3)
									{
										func_219((Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3));
										Local_1060.f_3 = 1;
										Local_1948.f_14++;
									}
									Local_1060.f_2 = 1;
								}
							}
							else
							{
								if ((((((Local_1060.f_2 && Local_1060.f_3) && Local_1060.f_4) && Local_1060.f_6) && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
								{
									if (iVar63 > 500 && iVar62 > 500)
									{
										bVar66 = true;
									}
									if ((iVar63 > 400 && iVar62 > 400) && (iVar63 < 500 && iVar62 < 500))
									{
										bVar66 = true;
									}
									if ((iVar63 > 300 && iVar62 > 300) && (iVar63 < 400 && iVar62 < 400))
									{
										bVar66 = true;
									}
									if ((iVar63 > 200 && iVar62 > 200) && (iVar63 < 300 && iVar62 < 300))
									{
										bVar66 = true;
									}
									if ((iVar63 > 100 && iVar62 > 100) && (iVar63 < 200 && iVar62 < 200))
									{
										bVar66 = true;
									}
									if (bVar66)
									{
										if (Local_1925.f_14 > 0)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1925.f_14))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 1), Local_1925.f_14);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 1));
										}
									}
									else if (Local_1925.f_14 > 0)
									{
										if (!func_100("TCP_WIN", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1925.f_14))
										{
											func_99("TCP_WIN", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1925.f_14);
										}
									}
									else if (!func_98("TCP_LOSE_PLAY", func_101(func_9(&(Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PLAY", func_101(func_9(&(Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
									}
								}
								Local_1925.f_4 = joaat("lose");
								if (!Local_1060.f_3)
								{
									func_219((Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 + Local_771[PLAYER::PLAYER_ID() /*9*/].f_3));
									Local_1060.f_3 = 1;
									Local_1948.f_14++;
								}
								Local_1060.f_2 = 1;
							}
							iVar63 = func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0);
							if (!Local_1060.f_4)
							{
								SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
								if (func_96(iVar63) > 0)
								{
									Local_1948.f_3 = (Local_1948.f_3 + (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 * func_96(iVar63)));
									Local_1925.f_6 = (Local_1925.f_6 + (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 * func_96(iVar63)));
									Local_1948.f_13++;
									Local_1925.f_15 = 1;
									Local_1925.f_14 = (Local_1925.f_14 + (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 * func_96(iVar63)));
								}
								Local_1060.f_4 = 1;
							}
						}
						else
						{
							if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 >= 0)
							{
								Local_1925.f_4 = joaat("fold");
							}
							if ((((((Local_1060.f_2 && Local_1060.f_3) && Local_1060.f_4) && Local_1060.f_6) && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
							{
								if (Local_1925.f_14 > 0)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1925.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1925.f_14);
									}
								}
								else if (!func_98("TCP_LOSE_FOLD", func_101(func_9(&(Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0)))
								{
									func_97("TCP_LOSE_FOLD", func_101(func_9(&(Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
								}
							}
							if (!Local_1060.f_3)
							{
								func_219(Local_771[PLAYER::PLAYER_ID() /*9*/].f_3);
								Local_1060.f_3 = 1;
								Local_1948.f_14++;
							}
							Local_1060.f_4 = 1;
							Local_1060.f_2 = 1;
						}
					}
					else
					{
						Local_1060.f_2 = 1;
						Local_1060.f_3 = 1;
						Local_1060.f_4 = 1;
					}
					iVar63 = func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0);
					if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 > 0)
					{
						Local_1925.f_21 = 1;
						if (func_23(iVar63) > 0)
						{
							if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
							{
								if ((((((Local_1060.f_2 && Local_1060.f_3) && Local_1060.f_4) && Local_1060.f_6) && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1925.f_14))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0), Local_1925.f_14);
									}
								}
							}
							if (!Local_1060.f_6)
							{
								Local_1060.f_6 = 1;
								SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
								Local_1948.f_3 = (Local_1948.f_3 + (Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 + (Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 * func_23(iVar63))));
								Local_1925.f_6 = (Local_1925.f_6 + (Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 + (Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 * func_23(iVar63))));
								Local_1948.f_13++;
								Local_1925.f_15 = 1;
								Local_1925.f_14 = (Local_1925.f_14 + (Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 + (Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 * func_23(iVar63))));
								Local_1925.f_4 = joaat("win");
							}
						}
						else
						{
							if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
							{
								Local_1925.f_4 = joaat("lose");
								if ((((((Local_1060.f_2 && Local_1060.f_3) && Local_1060.f_4) && Local_1060.f_6) && !bLocal_1971) && !bLocal_1972) && !bLocal_1967)
								{
									if (!func_98("TCP_LOSE_PP", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0)))
									{
										func_97("TCP_LOSE_PP", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0));
									}
								}
							}
							if (!Local_1060.f_6)
							{
								func_219(Local_771[PLAYER::PLAYER_ID() /*9*/].f_5);
								Local_1060.f_6 = 1;
								if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 <= 0)
								{
									Local_1948.f_14++;
								}
							}
						}
					}
					else
					{
						Local_1060.f_6 = 1;
					}
				}
				else
				{
					if (!Local_138.f_5[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2])
					{
					}
					if (Local_138.f_410[PLAYER::PLAYER_ID() /*5*/] <= 0)
					{
					}
					if (!BitTest(Local_138.f_20[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2], func_211(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1)))
					{
					}
					if (((Local_1060.f_2 && Local_1060.f_3) && Local_1060.f_4) && Local_1060.f_6)
					{
						if (Local_138.f_410[PLAYER::PLAYER_ID() /*5*/] <= 0)
						{
							Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
							Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
							Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
							SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_771[PLAYER::PLAYER_ID() /*9*/].f_3));
							SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_771[PLAYER::PLAYER_ID() /*9*/].f_5));
							SECURITY::UNREGISTER_SCRIPT_VARIABLE(&(Local_771[PLAYER::PLAYER_ID() /*9*/].f_4));
						}
					}
				}
			}
			break;
	}
}

int func_96(int iParam0)
{
	if (iParam0 > 500)
	{
		return 5;
	}
	else if (iParam0 > 400)
	{
		return 4;
	}
	else if (iParam0 > 300)
	{
		return 1;
	}
	return 0;
}

void func_97(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_98(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_99(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

bool func_100(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_101(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 > 500)
		{
			return "TCP_STRAIGHTF_F";
		}
		else if (iParam0 > 400)
		{
			return "TCP_TOFAKIND_F";
		}
		else if (iParam0 > 300)
		{
			return "TCP_STRAIGHT_F";
		}
		else if (iParam0 > 200)
		{
			return "TCP_FLUSH_F";
		}
		else if (iParam0 > 100)
		{
			return "TCP_PAIR_F";
		}
		else if (iParam0 == 12)
		{
			return "TCP_HIGH_Q_F";
		}
		else if (iParam0 == 13)
		{
			return "TCP_HIGH_K_F";
		}
		else
		{
			return "TCP_HIGH_A_F";
		}
	}
	else if (iParam0 > 500)
	{
		return "TCP_STRAIGHTF";
	}
	else if (iParam0 > 400)
	{
		return "TCP_TOFAKIND";
	}
	else if (iParam0 > 300)
	{
		return "TCP_STRAIGHT";
	}
	else if (iParam0 > 200)
	{
		return "TCP_FLUSH";
	}
	else if (iParam0 > 100)
	{
		if (iParam0 == 128)
		{
			return "TCP_PAIR_A";
		}
		else if (iParam0 == 104)
		{
			return "TCP_PAIR_2";
		}
		else if (iParam0 == 106)
		{
			return "TCP_PAIR_3";
		}
		else if (iParam0 == 108)
		{
			return "TCP_PAIR_4";
		}
		else if (iParam0 == 110)
		{
			return "TCP_PAIR_5";
		}
		else if (iParam0 == 112)
		{
			return "TCP_PAIR_6";
		}
		else if (iParam0 == 114)
		{
			return "TCP_PAIR_7";
		}
		else if (iParam0 == 116)
		{
			return "TCP_PAIR_8";
		}
		else if (iParam0 == 118)
		{
			return "TCP_PAIR_9";
		}
		else if (iParam0 == 120)
		{
			return "TCP_PAIR_10";
		}
		else if (iParam0 == 122)
		{
			return "TCP_PAIR_J";
		}
		else if (iParam0 == 124)
		{
			return "TCP_PAIR_Q";
		}
		else if (iParam0 == 126)
		{
			return "TCP_PAIR_K";
		}
	}
	else if (iParam0 == 5)
	{
		return "TCP_HIGH_5";
	}
	else if (iParam0 == 6)
	{
		return "TCP_HIGH_6";
	}
	else if (iParam0 == 7)
	{
		return "TCP_HIGH_7";
	}
	else if (iParam0 == 8)
	{
		return "TCP_HIGH_8";
	}
	else if (iParam0 == 9)
	{
		return "TCP_HIGH_9";
	}
	else if (iParam0 == 10)
	{
		return "TCP_HIGH_10";
	}
	else if (iParam0 == 11)
	{
		return "TCP_HIGH_J";
	}
	else if (iParam0 == 12)
	{
		return "TCP_HIGH_Q";
	}
	else if (iParam0 == 13)
	{
		return "TCP_HIGH_K";
	}
	else
	{
		return "TCP_HIGH_A";
	}
	return "";
}

bool func_102(int iParam0, var uParam1, int iParam2)
{
	return func_103(iParam0, 3, uParam1, iParam2, -1);
}

int func_103(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_427();
		iVar1 = (Global_262145.f_26824 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_144();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_124(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_427() - Global_1971517);
			func_123(iVar4, 1);
			func_121();
			func_120();
			Global_1971517 = (Global_1971517 + iVar4);
			if (iParam1 == 0)
			{
				func_114(iVar4);
				Global_2696915 = 1;
			}
			else if (iParam1 == 3)
			{
				func_107(iVar4);
				if (iVar4 >= Global_262145.f_26832)
				{
					Global_2696914 = 1;
				}
				else if (iVar4 >= Global_262145.f_26831)
				{
					Global_2696915 = 1;
				}
			}
			Var5.f_0 = func_106(iParam1);
			Var5.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var5.f_6 = Global_1971517;
			STATS::PLAYSTATS_CASINO_CHIP(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
			case 12:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
			
			case 11:
				iVar0 = 29;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("ccur_buy");
			break;
		
		case 1:
			iVar0 = joaat("ccur_sell");
			break;
		
		case 2:
			iVar0 = joaat("ccur_bet");
			break;
		
		case 3:
			iVar0 = joaat("ccur_payout");
			break;
		
		case 4:
			iVar0 = joaat("ccur_collectible_reward");
			break;
		
		case 5:
			iVar0 = joaat("ccur_membership_purchase");
			break;
		
		case 6:
			iVar0 = joaat("ccur_mission_reward");
			break;
		
		case 11:
			iVar0 = joaat("ccur_mission_reward");
			break;
		
		case 7:
			iVar0 = joaat("ccur_daily_bonus");
			break;
		
		case 8:
			iVar0 = joaat("ccur_payout");
			break;
		
		case 9:
			iVar0 = joaat("ccur_veh_purchase_reward");
			break;
		
		case 10:
			iVar0 = joaat("ccu_purchase_shop_item");
			break;
		
		case 12:
			iVar0 = joaat("ccur_mission_reward");
			break;
	}
	return iVar0;
}

void func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_113();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_111();
	if (iVar0 == 0)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26826)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26828)
	{
		func_108(joaat("mpply_casino_chips_won_gd"), Global_262145.f_26828);
		func_109();
		Global_2696915 = 1;
	}
	else
	{
		func_108(joaat("mpply_casino_chips_won_gd"), (iVar2 + iParam0));
	}
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

void func_109()
{
	func_110();
}

void func_110()
{
	func_108(joaat("mpply_casino_chips_wontim"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_111()
{
	return func_112(joaat("mpply_casino_chips_won_gd"));
}

int func_112(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_113()
{
	return func_112(joaat("mpply_casino_chips_wontim"));
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_119();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_118();
	if (iVar0 == 0)
	{
		func_117();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26825)
	{
		func_116();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_115()
	{
		func_108(joaat("mpply_casino_chips_pur_gd"), func_115());
		func_116();
	}
	else
	{
		func_108(joaat("mpply_casino_chips_pur_gd"), (iVar2 + iParam0));
	}
}

int func_115()
{
	if (func_354(PLAYER::PLAYER_ID()))
	{
		return Global_262145.f_26623;
	}
	return Global_262145.f_26622;
}

void func_116()
{
	func_117();
}

void func_117()
{
	func_108(joaat("mpply_casino_chips_purtim"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_118()
{
	return func_112(joaat("mpply_casino_chips_pur_gd"));
}

int func_119()
{
	return func_112(joaat("mpply_casino_chips_purtim"));
}

void func_120()
{
	if (BitTest(Global_1971596, 6))
	{
		MISC::SET_BIT(&Global_1971596, 9);
		func_395(&Global_1971599, 0, 0);
	}
}

void func_121()
{
	if (func_122())
	{
		MISC::SET_BIT(&Global_1971596, true);
	}
}

bool func_122()
{
	return (BitTest(Global_1971596, 6) || BitTest(Global_1971596, 5));
}

void func_123(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	MISC::SET_BIT(&Global_1971596, 6);
	Global_1971597 = iParam0;
	Global_1971598 = iParam1;
}

bool func_124(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_104(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_143())
	{
		if (*uParam0 == 0)
		{
			if (func_142() != -1)
			{
				return 0;
			}
			iVar3 = joaat("casino_chips_v0");
			iVar4 = func_106(iParam1);
			iVar5 = -22148635;
			if (func_146(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_138(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_138(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_132())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_131(func_142()))
			{
				if (func_130(func_142()) == 2)
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_129(func_142()));
					if (func_146(iParam1))
					{
						MONEY::NETWORK_CASINO_BUY_CHIPS(iVar0, iParam2);
					}
					else
					{
						MONEY::NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_125(func_142());
			}
		}
	}
	else if (iVar0 > 0 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
	{
		if (func_146(iParam1))
		{
			MONEY::NETWORK_CASINO_BUY_CHIPS(iVar0, iParam2);
		}
		else
		{
			MONEY::NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_125(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_128(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4515413[iParam0 /*84*/].f_65);
		}
		func_126(&(Global_4515413[iParam0 /*84*/]));
	}
}

void func_126(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_12 = 0;
	uParam0->f_2 = 0;
	func_127(&(uParam0->f_13));
	func_127(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_127(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_128(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4515413[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4515413[iParam0 /*84*/].f_65;
	}
	return -1;
}

int func_130(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4515413[iParam0 /*84*/].f_65.f_2;
	}
	return 0;
}

int func_131(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4515413[iParam0 /*84*/].f_65.f_2 != 1;
	}
	return 0;
}

int func_132()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_142();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_137()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_136(Global_4515413[iVar2 /*84*/].f_65.f_6, Global_4515413[iVar2 /*84*/].f_65.f_4, Global_4515413[iVar2 /*84*/].f_65.f_1) == 1)
			{
				Global_4516903 = 1;
			}
			return 0;
		}
		if (Global_2698442)
		{
			if (Global_4515413[iVar2 /*84*/].f_65.f_6 == 1067618600 || Global_4515413[iVar2 /*84*/].f_65.f_6 == -1303831698)
			{
				Global_4516904 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_129(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4515413[iVar2 /*84*/].f_65.f_13 = 1;
			Global_4515413[iVar2 /*84*/].f_65.f_12 = 0;
			Global_4515413[iVar2 /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4515413[iVar2 /*84*/].f_65.f_8 = 1;
				Global_4515413[iVar2 /*84*/].f_65.f_12 = 1;
			}
			Global_4515413[iVar2 /*84*/].f_65.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_133(Global_4515413[iVar2 /*84*/], iVar2);
			}
			Global_4516884 = 1;
			return 1;
		}
	}
	return 0;
}

void func_133(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)
{
	struct<4> Var0;
	int iVar36;
	
	if (iParam84 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_65 };
	Var0.f_3.f_32 = iParam84;
	iVar36 = func_134(Var0.f_1);
	if (Global_262145.f_23800 && !Global_262145.f_23801)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 36, iVar36, Var0.f_0);
	}
}

var func_134(bool bParam0)
{
	var uVar0;
	
	if (func_135(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_135(var uParam0)
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

int func_136(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case joaat("service_spend_match_entry_fee"):
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("service_earn_pickup"):
			case joaat("service_earn_ambient_mugging"):
			case joaat("service_earn_ambient_pickup"):
			case joaat("service_earn_deathmatch_bounty"):
			case joaat("service_earn_cashing_out"):
			case joaat("service_earn_refund_arena_spec_box_entry"):
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case joaat("service_earn_debug"):
				return 0;
				break;
			
			case joaat("service_earn_initial_cash"):
			case joaat("service_earn_jobs"):
			case joaat("service_earn_betting"):
			case joaat("service_earn_lottery"):
			case joaat("service_earn_challenge_win"):
			case joaat("service_earn_property_sales"):
			case joaat("service_earn_vehicle_sales"):
			case joaat("service_earn_lester_target_kill"):
			case joaat("service_earn_bounty_collected"):
			case joaat("service_earn_crate_drop"):
			case joaat("service_earn_holdups"):
			case joaat("service_earn_import_export"):
			case joaat("service_earn_armored_trucks"):
			case joaat("service_earn_jobshare_cash"):
			case joaat("service_earn_not_badsport"):
			case joaat("service_earn_bank_interest"):
			case joaat("service_earn_cncw"):
			case joaat("service_earn_cncb"):
			case joaat("service_earn_job_bonus"):
			case joaat("service_earn_bend_job"):
			case joaat("service_earn_personal_vehicle"):
			case joaat("service_earn_daily_objectives"):
			case joaat("service_earn_ambient_job_plane_takedown"):
			case joaat("service_earn_ambient_job_distract_cops"):
			case joaat("service_earn_ambient_job_destroy_veh"):
			case joaat("service_earn_refund_backup_vagos"):
			case joaat("service_earn_refund_backup_lost"):
			case joaat("service_earn_refund_backup_families"):
			case joaat("service_earn_refund_hire_mugger"):
			case joaat("service_earn_refund_hire_mercenary"):
			case joaat("service_earn_refund_buy_cardropoff"):
			case joaat("service_earn_refund_heli_pickup"):
			case joaat("service_earn_refund_boat_pickup"):
			case joaat("service_earn_refund_clear_wanted"):
			case joaat("service_earn_refund_head_2_head"):
			case joaat("service_earn_refund_challenge"):
			case joaat("service_earn_refund_share_last_job"):
			case joaat("service_earn_refund_lottery"):
			case -1426920838:
			case joaat("service_earn_gangattack_pickup"):
			case joaat("service_earn_ambient_job_hot_target_deliver"):
			case joaat("service_earn_ambient_job_hot_target_kill"):
			case joaat("service_earn_ambient_job_urban_warfare"):
			case joaat("service_earn_ambient_job_checkpoint_collection"):
			case joaat("service_earn_ambient_job_time_trial"):
			case joaat("service_earn_ambient_job_challenges"):
			case joaat("service_earn_ambient_job_heli_hot_target"):
			case joaat("service_earn_ambient_job_dead_drop"):
			case joaat("service_earn_ambient_job_penned_in"):
			case joaat("service_earn_ambient_job_pass_parcel"):
			case joaat("service_earn_ambient_job_blast"):
			case joaat("service_earn_ambient_job_hot_property"):
			case joaat("service_earn_ambient_job_king"):
			case joaat("service_earn_ambient_job_beast"):
			case joaat("service_earn_boss"):
			case joaat("service_earn_goon"):
			case joaat("service_earn_boss_agency"):
			case joaat("service_earn_from_destroying_contraband"):
			case joaat("service_earn_premium_job"):
			case joaat("service_earn_from_vehicle_export"):
			case joaat("service_earn_smuggler_agency"):
			case joaat("service_earn_wage_payment_bonus"):
			case joaat("service_earn_refundammodrop"):
			case joaat("service_earn_salvage_checkpoint_collection"):
			case joaat("service_earn_job_bonus_criminal_mastermind"):
			case joaat("service_earn_job_bonus_heist_award"):
			case joaat("service_earn_job_bonus_first_time_bonus"):
			case joaat("service_earn_refund_orbital_manual"):
			case joaat("service_earn_refund_orbital_auto"):
			case joaat("service_earn_gangops_wages"):
			case joaat("service_earn_gangops_wages_bonus"):
			case joaat("service_earn_gangops_prep_participation"):
			case joaat("service_earn_gangops_setup"):
			case joaat("service_earn_gangops_setup_fail"):
			case joaat("service_earn_gangops_finale"):
			case joaat("service_earn_gangops_award_mastermind_2"):
			case joaat("service_earn_gangops_award_mastermind_3"):
			case joaat("service_earn_gangops_award_mastermind_4"):
			case joaat("service_earn_gangops_award_loyalty_award_2"):
			case joaat("service_earn_gangops_award_loyalty_award_3"):
			case joaat("service_earn_gangops_award_loyalty_award_4"):
			case joaat("service_earn_gangops_award_first_time_xm_base"):
			case joaat("service_earn_gangops_award_first_time_xm_submarine"):
			case joaat("service_earn_gangops_award_first_time_xm_silo"):
			case joaat("service_earn_gangops_award_supporting"):
			case joaat("service_earn_gangops_award_order"):
			case joaat("service_earn_gangops_elite_xm_base"):
			case joaat("service_earn_gangops_elite_xm_submarine"):
			case joaat("service_earn_gangops_elite_xm_silo"):
			case joaat("service_earn_gangops_rival_delivery"):
			case joaat("service_earn_doomsday_finale_bonus"):
			case joaat("service_earn_bounty_hunter_reward"):
			case joaat("service_earn_from_business_battle"):
			case joaat("service_earn_from_club_management_participation"):
			case joaat("service_earn_from_fmbb_phonecall_mission"):
			case joaat("service_earn_from_business_hub_sell"):
			case joaat("service_earn_from_fmbb_boss_work"):
			case joaat("service_earn_fmbb_wage_bonus"):
			case joaat("service_earn_nightclub_dancing_award"):
			case joaat("service_earn_bb_event_bonus"):
			case joaat("service_earn_arena_skill_lvl_award"):
			case joaat("service_earn_arena_career_tier_progression_1"):
			case joaat("service_earn_arena_career_tier_progression_2"):
			case joaat("service_earn_arena_career_tier_progression_3"):
			case joaat("service_earn_arena_career_tier_progression_4"):
			case joaat("service_earn_spin_the_wheel_cash"):
			case joaat("service_earn_assassinate_target_killed"):
			case joaat("service_earn_arena_war"):
			case joaat("service_earn_ambient_job_rc_time_trial"):
			case joaat("service_earn_daily_objective_event"):
			case joaat("service_earn_collectables_action_figures"):
			case joaat("service_earn_casino_mission_reward"):
			case joaat("service_earn_casino_story_mission_reward"):
			case joaat("service_earn_casino_award_mission_one_first_time"):
			case joaat("service_earn_casino_award_mission_two_first_time"):
			case joaat("service_earn_casino_award_mission_three_first_time"):
			case joaat("service_earn_casino_award_mission_four_first_time"):
			case joaat("service_earn_casino_award_mission_five_first_time"):
			case joaat("service_earn_casino_award_mission_six_first_time"):
			case joaat("service_earn_casino_award_straight_flush"):
			case joaat("service_earn_casino_award_top_pair"):
			case joaat("service_earn_casino_award_full_house"):
			case joaat("service_earn_casino_award_lucky_lucky"):
			case joaat("service_earn_casino_award_high_roller_bronze"):
			case joaat("service_earn_casino_award_high_roller_silver"):
			case joaat("service_earn_casino_award_high_roller_gold"):
			case joaat("service_earn_casino_award_high_roller_platinum"):
			case joaat("service_earn_casino_heist_setup_mission"):
			case joaat("service_earn_casino_heist_prep_mission"):
				return 1;
				break;
			
			case joaat("service_spend_airstrike"):
			case joaat("service_spend_ammo_drop"):
			case joaat("service_spend_backup_gang"):
			case joaat("service_spend_backup_heli"):
			case joaat("service_spend_boat_pickup"):
			case joaat("service_spend_bounty"):
			case joaat("service_spend_bull_shark"):
			case joaat("service_spend_car_impound"):
			case joaat("service_spend_cash_shared"):
			case joaat("service_spend_challenge_wager"):
			case joaat("service_spend_cops_turn_eye"):
			case joaat("service_spend_heli_pickup"):
			case joaat("service_spend_hire_mercenary"):
			case joaat("service_spend_hire_mugger"):
			case joaat("service_spend_locate_vehicle"):
			case joaat("service_spend_lose_wanted_level"):
			case joaat("service_spend_off_the_radar"):
			case joaat("service_spend_pegasus_delivery"):
			case joaat("service_spend_reveal_players"):
			case joaat("service_spend_vehicle_insurance"):
			case joaat("service_spend_vehicle_insurance_premium"):
				return 2;
				break;
		}
		switch (iParam1)
		{
			case joaat("service_earn_casino_heist_award_smash_n_grab"):
			case joaat("service_earn_casino_heist_award_in_plain_sight"):
			case joaat("service_earn_casino_heist_award_undetected"):
			case joaat("service_earn_casino_heist_award_all_rounder"):
			case joaat("service_earn_casino_heist_award_elite_thief"):
			case joaat("service_earn_casino_heist_award_professional"):
			case joaat("service_earn_casino_heist_finale"):
			case joaat("service_earn_casino_heist_elite_stealth"):
			case joaat("service_earn_casino_heist_elite_subterfuge"):
			case joaat("service_earn_casino_heist_elite_direct"):
			case joaat("service_earn_collectable_completed_collection"):
			case joaat("service_earn_collectables_signal_jammers_complete"):
			case joaat("service_earn_island_heist_finale"):
			case joaat("service_earn_island_heist_elite_challenge"):
			case joaat("service_earn_island_heist_award_professional"):
			case joaat("service_earn_island_heist_award_elite_thief"):
			case joaat("service_earn_island_heist_award_the_island_heist"):
			case joaat("service_earn_island_heist_award_going_alone"):
			case joaat("service_earn_island_heist_award_team_work"):
			case joaat("service_earn_island_heist_award_cat_burglar"):
			case joaat("service_earn_island_heist_award_pro_thief"):
			case joaat("service_earn_island_heist_award_mixing_it_up"):
			case joaat("service_earn_island_heist_prep"):
			case joaat("service_earn_island_heist_dj_mission"):
			case joaat("service_earn_tuner_robbery_prep"):
			case joaat("service_earn_tuner_robbery_finale"):
			case joaat("service_earn_tuner_car_club_membership"):
			case joaat("service_earn_tuner_daily_vehicle"):
			case joaat("service_earn_tuner_daily_vehicle_bonus"):
			case joaat("service_earn_tuner_award_union_depository"):
			case joaat("service_earn_tuner_award_military_convoy"):
			case joaat("service_earn_tuner_award_fleeca_bank"):
			case joaat("service_earn_tuner_award_freight_train"):
			case joaat("service_earn_tuner_award_bolingbroke_ass"):
			case joaat("service_earn_tuner_award_iaa_raid"):
			case joaat("service_earn_tuner_award_meth_job"):
			case joaat("service_earn_tuner_award_bunker_raid"):
			case joaat("service_earn_auto_shop_delivery_award"):
			case joaat("service_earn_agency_security_contract"):
			case joaat("service_earn_agency_payphone_hit"):
			case joaat("service_earn_agency_story_prep"):
			case joaat("service_earn_agency_story_finale"):
			case joaat("service_earn_fixer_award_sec_con"):
			case joaat("service_earn_fixer_award_phone_hit"):
			case joaat("service_earn_fixer_award_agency_story"):
			case joaat("service_earn_fixer_award_short_trip"):
			case joaat("service_earn_fixer_rival_delivery"):
			case joaat("service_earn_music_studio_short_trip"):
			case joaat("service_earn_from_contraband"):
			case joaat("service_earn_nclub_troublemaker"):
			case joaat("service_earn_sightseeing_reward"):
			case joaat("service_earn_ambient_job_clubhouse_contract"):
			case joaat("service_earn_ambient_job_underwater_cargo"):
			case joaat("service_earn_ambient_job_crime_scene"):
			case joaat("service_earn_ambient_job_metal_detector"):
			case joaat("service_earn_ambient_job_smuggler_plane"):
			case joaat("service_earn_ambient_job_smuggler_trail"):
			case joaat("service_earn_ambient_job_golden_gun"):
			case joaat("service_earn_ambient_job_ammunation_delivery"):
			case joaat("service_earn_ambient_job_source_research"):
			case joaat("service_earn_yohan_source_goods"):
			case joaat("service_earn_taxi_job"):
			case joaat("service_earn_daily_stash_house_participation"):
			case joaat("service_earn_daily_stash_house_completed"):
			case joaat("service_earn_ambient_job_gang_convoy"):
			case joaat("service_earn_ambient_job_shop_robbery"):
			case joaat("service_earn_ambient_job_xmas_mugger"):
			case joaat("service_earn_ambient_job_maze_bank"):
			case joaat("service_earn_acid_lab_setup_participation"):
			case joaat("service_earn_acid_lab_source_participation"):
			case joaat("service_earn_acid_lab_sell_participation"):
			case joaat("service_earn_smuggler_ops"):
			case joaat("service_earn_ambient_job_armored_truck"):
			case joaat("service_earn_ambient_job_bicycle_time_trial"):
			case joaat("service_earn_cayo_attrition_bonus_objective"):
			case joaat("service_earn_avenger_operations"):
			case joaat("service_earn_avenger_ops_bonus"):
			case joaat("service_earn_ambient_job_drug_vehicle"):
			case 649031587:
			case -1539520895:
			case 560526114:
			case -256590568:
			case -470808433:
			case 1245164680:
			case 1648751987:
			case 674719198:
			case -1433838369:
			case 1424147761:
			case 617724895:
			case 2131157548:
			case 1237940902:
			case -1688538833:
			case 918785029:
			case -1343182760:
			case -1725871206:
			case 1435585629:
			case 1851118721:
			case -1961446392:
			case -1726080156:
			case 300207193:
			case 1378095557:
			case -1948553812:
			case -1672547752:
			case -485163763:
			case -243568299:
			case 1226579288:
			case -2107356056:
			case -428381543:
			case joaat("service_earn_wage_payment"):
			case 72361536:
			case 565434243:
			case -1154756209:
			case 1496037489:
			case -804351832:
			case 1570992221:
				if (iParam2 == 0)
				{
					return 0;
				}
				return 1;
				break;
			
			case joaat("service_earn_collectable_item"):
			case joaat("service_earn_collectables_signal_jammers"):
			case -1919450538:
				return 2;
				break;
		}
		return 0;
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_137()
{
	return Global_1574927;
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_137()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4516903 = 1;
			return 0;
		}
		if (Global_2698442)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4516904 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_142();
	if (iVar1 == -1)
	{
		if (!func_140(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_139(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4515413[iVar1 /*84*/].f_65.f_1 = Var2.f_2;
		Global_4515413[iVar1 /*84*/].f_65.f_15 = Var2.f_0;
		Global_4515413[iVar1 /*84*/].f_65.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_143())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_137()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4516903 = 1;
			return 0;
		}
		if (Global_2698442)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4516904 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4515413[iVar1 /*84*/].f_65.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4515413[iVar1 /*84*/].f_65.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_ACTIVE())
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_END();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_141(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_141(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4515413[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_143())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4515413[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4515413[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4515413[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4515413[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4515413[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4515413[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4515413[iVar0 /*84*/].f_65 = uParam0;
			Global_4515413[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4515413[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4515413[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4515413[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4515413[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4515413[iVar0 /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			Global_4515413[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4516884 = 0;
			if (bParam6)
			{
				Global_4515413[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_133(Global_4515413[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_142()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_129(iVar0) != 2147483647)
		{
			if (func_128(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_143()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_115() - func_118());
	iVar1 = (Global_262145.f_26824 - func_427());
	iVar2 = func_145();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_145()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_115();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (MONEY::NETWORK_CASINO_CAN_BUY_CHIPS_PVC())
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (MONEY::NETWORK_GET_VC_BANK_BALANCE() + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1));
		}
	}
	else if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = MONEY::NETWORK_GET_EVC_BALANCE();
	}
	return iVar1;
}

int func_146(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_147()
{
	if (func_148())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_reaction_terrible_var_01";
			
			case 1:
				return "female_reaction_terrible_var_02";
			
			case 2:
				return "female_reaction_terrible_var_03";
			
			case 3:
				return "female_reaction_terrible_var_04";
			
			case 4:
				return "female_reaction_terrible_var_05";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_terrible_var_01";
			
			case 1:
				return "reaction_terrible_var_02";
			
			case 2:
				return "reaction_terrible_var_03";
			
			case 3:
				return "reaction_terrible_var_04";
			}
		
		default:
	}
	return "";
}

bool func_148()
{
	return func_57(PLAYER::PLAYER_ID());
}

char* func_149()
{
	if (func_148())
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
		{
			case 0:
				return "female_reaction_great_var_01";
			
			case 1:
				return "female_reaction_great_var_02";
			
			case 2:
				return "female_reaction_great_var_03";
			
			case 3:
				return "female_reaction_great_var_04";
			
			case 4:
				return "female_reaction_great_var_05";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_great_var_01";
			
			case 1:
				return "reaction_great_var_02";
			
			case 2:
				return "reaction_great_var_03";
			
			case 3:
				return "reaction_great_var_04";
			}
		
		default:
	}
	return "";
}

char* func_150(int iParam0)
{
	if (func_148())
	{
		if ((func_445(PLAYER::PLAYER_ID()) || func_409(Local_1060.f_20) == 2) || func_409(Local_1060.f_20) == 3)
		{
			if (iParam0 > 10000)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "female_reaction_good_var_01";
					
					case 1:
						return "female_reaction_good_var_02";
					
					case 2:
						return "female_reaction_good_var_03";
					
					case 3:
						return "female_reaction_good_var_04";
					
					default:
				}
			}
			else if (iParam0 > -10000)
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
				{
					case 0:
						return "female_reaction_impartial_var_01";
					
					case 1:
						return "female_reaction_impartial_var_02";
					
					case 2:
						return "female_reaction_impartial_var_03";
					
					case 3:
						return "female_reaction_impartial_var_04";
					
					case 4:
						return "female_reaction_impartial_var_05";
					
					case 5:
						return "female_reaction_impartial_var_06";
					
					case 6:
						return "female_reaction_impartial_var_07";
					
					default:
				}
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						return "female_reaction_bad_var_01";
					
					case 1:
						return "female_reaction_bad_var_02";
					
					case 2:
						return "female_reaction_bad_var_03";
					
					case 3:
						return "female_reaction_bad_var_04";
					}
				
				default:
			}
		}
		else if (iParam0 > 1000)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "female_reaction_good_var_01";
				
				case 1:
					return "female_reaction_good_var_02";
				
				case 2:
					return "female_reaction_good_var_03";
				
				case 3:
					return "female_reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -1000)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
			{
				case 0:
					return "female_reaction_impartial_var_01";
				
				case 1:
					return "female_reaction_impartial_var_02";
				
				case 2:
					return "female_reaction_impartial_var_03";
				
				case 3:
					return "female_reaction_impartial_var_04";
				
				case 4:
					return "female_reaction_impartial_var_05";
				
				case 5:
					return "female_reaction_impartial_var_06";
				
				case 6:
					return "female_reaction_impartial_var_07";
				
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "female_reaction_bad_var_01";
				
				case 1:
					return "female_reaction_bad_var_02";
				
				case 2:
					return "female_reaction_bad_var_03";
				
				case 3:
					return "female_reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if ((func_445(PLAYER::PLAYER_ID()) || func_409(Local_1060.f_20) == 2) || func_409(Local_1060.f_20) == 3)
	{
		if (iParam0 > 10000)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "reaction_good_var_01";
				
				case 1:
					return "reaction_good_var_02";
				
				case 2:
					return "reaction_good_var_03";
				
				case 3:
					return "reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -10000)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					return "reaction_impartial_var_01";
				
				case 1:
					return "reaction_impartial_var_02";
				
				case 2:
					return "reaction_impartial_var_03";
				
				case 3:
					return "reaction_impartial_var_04";
				
				case 4:
					return "reaction_impartial_var_05";
				
				case 5:
					return "reaction_impartial_var_06";
				
				case 6:
					return "reaction_impartial_var_07";
				
				case 7:
					return "reaction_impartial_var_08";
				
				default:
			}
		}
		else
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					return "reaction_bad_var_01";
				
				case 1:
					return "reaction_bad_var_02";
				
				case 2:
					return "reaction_bad_var_03";
				
				case 3:
					return "reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if (iParam0 > 1000)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			case 3:
				return "reaction_good_var_04";
			
			default:
		}
	}
	else if (iParam0 > -1000)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			case 4:
				return "reaction_impartial_var_05";
			
			case 5:
				return "reaction_impartial_var_06";
			
			case 6:
				return "reaction_impartial_var_07";
			
			case 7:
				return "reaction_impartial_var_08";
			
			default:
		}
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

void func_151(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	if (func_154(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_153(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1679103.f_1 = 1;
		func_152(3, iVar0);
		Global_1679103.f_2872[iVar0] = uParam0;
		StringCopy(&(Global_1679103.f_2872.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1679103.f_2872.f_183[iVar0] = iParam3;
		Global_1679103.f_2872.f_172[iVar0] = iParam2;
		Global_1679103.f_2872.f_205[iVar0] = iParam4;
		Global_1679103.f_2872.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1679103.f_2872.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1679103.f_2872.f_420[iVar0] = iParam7;
		Global_1679103.f_2872.f_453[iVar0] = iParam8;
		Global_1679103.f_2872.f_431[iVar0] = iParam9;
		Global_1679103.f_2872.f_442[iVar0] = iParam10;
		Global_1679103.f_2872.f_464[iVar0] = iParam11;
		Global_1679103.f_2872.f_475[iVar0] = iParam12;
		Global_1679103.f_2872.f_486[iVar0] = iParam13;
		Global_1679103.f_2872.f_497[iVar0] = iParam14;
		Global_1679103.f_2872.f_508[iVar0] = iParam15;
	}
}

void func_152(int iParam0, bool bParam1)
{
	MISC::SET_BIT(&(Global_1679103.f_7064[iParam0]), iParam1);
}

int func_153(int iParam0, int iParam1)
{
	return BitTest(Global_1679103.f_7064[iParam0], iParam1);
}

int func_154(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_155(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_143() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_163(iParam0))
	{
		return func_156(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_156(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0)
	{
	}
	else if (func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_427();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_143() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_124(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1971517 - func_427());
			if (iParam1 == 1)
			{
				func_157(iParam0);
				Global_2696914 = 1;
			}
			else if (iVar2 >= Global_262145.f_26833)
			{
				Global_2696915 = 1;
			}
			func_123(iVar2, 0);
			func_121();
			func_120();
			Global_1971517 = (Global_1971517 - iVar2);
			Var3.f_0 = func_106(iParam1);
			Var3.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var3.f_6 = Global_1971517;
			Var3.f_7 = iParam5;
			STATS::PLAYSTATS_CASINO_CHIP(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_162();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_161();
	if (iVar0 == 0)
	{
		func_160();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26625)
	{
		func_159();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_158()
	{
		func_108(-1989650268, func_158());
		func_159();
	}
	else
	{
		func_108(-1989650268, (iVar2 + iParam0));
	}
}

int func_158()
{
	return Global_262145.f_26624;
}

void func_159()
{
	func_160();
}

void func_160()
{
	func_108(1447512463, NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_161()
{
	return func_112(-1989650268);
}

int func_162()
{
	return func_112(1447512463);
}

int func_163(int iParam0)
{
	int iVar0;
	
	if (func_359())
	{
		return 0;
	}
	iVar0 = func_427();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_164(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
}

void func_165(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_153(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1679103.f_1 = 1;
		func_152(7, iVar0);
		Global_1679103.f_4714[iVar0] = iParam0;
		StringCopy(&(Global_1679103.f_4714.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1679103.f_4714.f_172[iVar0] = iParam2;
		Global_1679103.f_4714.f_216[iVar0] = iParam3;
		Global_1679103.f_4714.f_183[iVar0] = iParam4;
		Global_1679103.f_4714.f_194[iVar0] = iParam5;
		Global_1679103.f_4714.f_249[iVar0] = iParam6;
		Global_1679103.f_4714.f_260[iVar0] = iParam7;
		Global_1679103.f_4714.f_205[iVar0] = iParam8;
		Global_1679103.f_4714.f_314[iVar0] = iParam9;
		Global_1679103.f_4714.f_325[iVar0] = iParam10;
		Global_1679103.f_4714.f_357[iVar0] = iParam11;
		Global_1679103.f_4714.f_238[iVar0] = iParam12;
		Global_1679103.f_4714.f_271[iVar0] = iParam13;
		Global_1679103.f_4714.f_368[iVar0] = iParam14;
		Global_1679103.f_4714.f_379[iVar0] = iParam15;
		Global_1679103.f_4714.f_390[iVar0] = iParam16;
		Global_1679103.f_4714.f_227[iVar0] = iParam17;
	}
}

int func_166(int iParam0)
{
	if ((Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 == 2 || Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 == 3) || func_445(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_167(int iParam0)
{
	Local_1060.f_799 = iParam0;
}

void func_168()
{
	char* sVar0;
	int iVar1;
	
	PAD::DISABLE_CONTROL_ACTION(2, 209, true);
	PAD::SET_INPUT_EXCLUSIVE(2, 209);
	if (!BitTest(Local_1060.f_22, 3))
	{
		if ((PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 209) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, 210)) && !BitTest(Local_1060.f_22, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
			MISC::SET_BIT(&(Local_1060.f_22), 3);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_409(Local_1060.f_20) == 2 || func_409(Local_1060.f_20) == 3) || func_445(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, false);
		if (func_321(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0))
		{
			if (!BitTest(Local_1060.f_22, 4))
			{
				func_319(0, 0);
				func_317(1, sVar0, sVar0);
				func_316("TCP_HANDS");
				func_194(1, 2, 2, 2, 1);
				func_193(1, 1, 1, 1, 0);
				iVar1 = 0;
				func_189(iVar1, "TCP_HAND1", 0, 1, 0, 0, 0);
				func_189(iVar1, "TCP_10", 1, 1, 0, 0, 0);
				func_169(64, 0);
				func_189(iVar1, "TCP_9", 1, 1, 0, 0, 0);
				func_169(64, 0);
				func_189(iVar1, "TCP_8", 1, 1, 0, 0, 0);
				func_169(64, 0);
				iVar1 = 1;
				func_189(iVar1, "TCP_HAND2", 0, 1, 0, 0, 0);
				func_189(iVar1, "TCP_5", 1, 1, 0, 0, 0);
				func_169(62, 0);
				func_189(iVar1, "TCP_5", 1, 1, 0, 0, 0);
				func_169(63, 0);
				func_189(iVar1, "TCP_5", 1, 1, 0, 0, 0);
				func_169(61, 0);
				iVar1 = 2;
				func_189(iVar1, "TCP_HAND3", 0, 1, 0, 0, 0);
				func_189(iVar1, "TCP_2", 1, 1, 0, 0, 0);
				func_169(62, 0);
				func_189(iVar1, "TCP_3", 1, 1, 0, 0, 0);
				func_169(64, 0);
				func_189(iVar1, "TCP_4", 1, 1, 0, 0, 0);
				func_169(62, 0);
				iVar1 = 3;
				func_189(iVar1, "TCP_HAND4", 0, 1, 0, 0, 0);
				func_189(iVar1, "TCP_A", 1, 1, 0, 0, 0);
				func_169(64, 0);
				func_189(iVar1, "TCP_Q", 1, 1, 0, 0, 0);
				func_169(64, 0);
				func_189(iVar1, "TCP_9", 1, 1, 0, 0, 0);
				func_169(64, 0);
				iVar1 = 4;
				func_189(iVar1, "TCP_HAND5", 0, 1, 0, 0, 0);
				func_189(iVar1, "TCP_K", 1, 1, 0, 0, 0);
				func_169(62, 0);
				func_189(iVar1, "TCP_K", 1, 1, 0, 0, 0);
				func_169(64, 0);
				func_189(iVar1, "TCP_7", 1, 1, 0, 0, 0);
				func_169(61, 0);
				iVar1 = 5;
				func_189(iVar1, "TCP_HAND6", 0, 1, 0, 0, 0);
				func_189(iVar1, "TCP_A", 1, 1, 0, 0, 0);
				func_169(61, 0);
				func_189(iVar1, "TCP_7", 1, 1, 0, 0, 0);
				func_169(62, 0);
				func_189(iVar1, "TCP_3", 1, 1, 0, 0, 0);
				func_169(64, 0);
				func_315(-1, 1, 1);
				MISC::SET_BIT(&(Local_1060.f_22), 4);
			}
			func_283(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			func_280(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
			iLocal_1966 = 1;
			Local_1060.f_22 = 0;
			MISC::SET_BIT(&(Local_1060.f_22), 2);
		}
	}
}

void func_169(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_24529.f_5827 >= 256)
	{
		return;
	}
	if (Global_24529.f_6346 >= 4)
	{
		return;
	}
	if (Global_24529.f_6347 != 1)
	{
		return;
	}
	if (Global_24529.f_6346 >= Global_24529.f_6344)
	{
		return;
	}
	Global_24529.f_4984[Global_24529.f_5827] = iParam0;
	Global_24529.f_5827++;
	Global_24529.f_2387[Global_24529.f_6345 /*5*/][Global_24529.f_6346] = 4;
	Global_24529.f_6346++;
	if (Global_24529.f_6346 >= Global_24529.f_6344)
	{
		fVar0 = func_179();
		if (Global_24529.f_5678[Global_24529.f_5822] && Global_24529.f_6346 == Global_24529.f_6344)
		{
			func_171(27, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_24529.f_5671[(Global_24529.f_5822 - 1)])
		{
			Global_24529.f_5671[(Global_24529.f_5822 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_24529.f_6346 >= Global_24529.f_6344)
		{
			fVar3 = func_170();
			if (fVar3 > Global_24529.f_6348[Global_24529.f_5821])
			{
				Global_24529.f_6348[Global_24529.f_5821] = fVar3;
			}
		}
	}
}

float func_170()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_24529.f_6346)
	{
		if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_24529.f_4984[((Global_24529.f_5827 - iVar1) + iVar0)] != 0)
		{
			if (func_171(Global_24529.f_4984[((Global_24529.f_5827 - iVar1) + iVar0)], 1, 0, &fVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

int func_171(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_178(iParam0), 64);
	StringCopy(&cVar16, func_175(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_173(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		fVar38 = (func_172(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 31)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 30 && MISC::GET_HASH_KEY(&(Global_24529.f_7744[30 /*16*/])) == joaat("crew_logo"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 31)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 30)
		{
			if (*fParam3 > Global_24528)
			{
				*fParam4 = (*fParam4 * (Global_24528 / *fParam3));
				*fParam3 = Global_24528;
			}
		}
		return 1;
	}
	return 0;
}

float func_172(int iParam0)
{
	switch (iParam0)
	{
		case 34:
		case 4:
		case 12:
		case 32:
		case 21:
		case 16:
		case 11:
		case 13:
		case 14:
		case 33:
		case 10:
		case 5:
		case 6:
		case 7:
		case 8:
		case 15:
		case 19:
		case 20:
		case 18:
		case 29:
		case 27:
		case 28:
		case 57:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 69:
		case 68:
			return 0.5f;
			break;
		
		case 66:
			return 0.8f;
			break;
	}
	return 1f;
}

void func_173(bool bParam0, int* iParam1, int* iParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (func_174(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = SYSTEM::ROUND((fVar1 * fVar2));
		*iParam2 = SYSTEM::ROUND(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*iParam1 = SYSTEM::ROUND((fVar0 / *fParam3));
	*iParam2 = SYSTEM::ROUND((fVar1 / *fParam3));
}

bool func_174(int iParam0, int iParam1)
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

var func_175(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24529.f_7744[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_24529.f_7744[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var19 = { func_177(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_176(&uVar3);
			}
		}
		else
		{
			return func_176(&(Global_24529.f_7744[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 26:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 7:
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 8:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 9:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 10:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 21:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 16:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 17:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 27:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 28:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 29:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 30:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 32:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 34:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 56:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 57:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 59:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 60:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 61:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 62:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 63:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 64:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 65:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 67:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 66:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 68:
			sVar0[0] = "Shop_Garage_Podium_Icon_B";
			sVar0[1] = "Shop_Garage_Podium_Icon_A";
			break;
		
		case 69:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_176(var uParam0)
{
	return uParam0;
}

struct<13> func_177(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_178(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24529.f_6623[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_24529.f_6623[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var16 = { func_177(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_176(&uVar0);
		}
		else
		{
			return func_176(&(Global_24529.f_6623[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 56)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_179()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_24529.f_6346)
	{
		if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_184(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_24529.f_79[Global_24529.f_6345 /*6*/])) != 0)
	{
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_24529.f_79[Global_24529.f_6345 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_24529.f_6346)
	{
		if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_24529.f_79[Global_24529.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_79[(Global_24529.f_6345 + iVar8) /*6*/]));
			}
		}
		else if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_24529.f_79[Global_24529.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_79[(Global_24529.f_6345 + iVar8) /*6*/]));
			}
		}
		else if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_24529.f_79[Global_24529.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24529.f_4469[((Global_24529.f_5825 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_24529.f_79[Global_24529.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24529.f_4726[((Global_24529.f_5826 - iVar4) + iVar10)], Global_24529.f_4855[((Global_24529.f_5826 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_24529.f_79[Global_24529.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2697529[((Global_24529.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_24529.f_79[Global_24529.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2697529[((Global_24529.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_24529.f_79[Global_24529.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2697529[((Global_24529.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_24529.f_2387[Global_24529.f_6345 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_24529.f_79[Global_24529.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2697529[((Global_24529.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_24529.f_79[Global_24529.f_6345 /*6*/])) != 0)
	{
		fVar0 = func_180(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_24529.f_4984[((Global_24529.f_5827 - iVar5) + iVar7)] != 0)
		{
			func_171(Global_24529.f_4984[((Global_24529.f_5827 - iVar5) + iVar7)], 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

float func_180(bool bParam0)
{
	return func_181(HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(bParam0));
}

float func_181(float fParam0)
{
	fParam0 = (fParam0 * func_182());
	return fParam0;
}

float func_182()
{
	return (func_183() / 1.777778f);
}

float func_183()
{
	return Global_24529.f_9245;
}

void func_184(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_188(Global_24529.f_6614[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	func_185(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_185(float fParam0, float fParam1)
{
	HUD::SET_TEXT_WRAP(func_186(fParam0), func_186(fParam1));
}

float func_186(float fParam0)
{
	fParam0 = (fParam0 * func_187());
	return fParam0;
}

float func_187()
{
	return (1.777778f / func_183());
}

void func_188(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_189(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_24529.f_5821 > iParam0)
	{
		return;
	}
	if (Global_24529.f_5821 >= 128)
	{
		return;
	}
	if (Global_24529.f_5823 >= 256)
	{
		return;
	}
	if (Global_24529.f_6346 < Global_24529.f_6344)
	{
		return;
	}
	if (Global_24529.f_5821 != iParam0)
	{
		Global_24529.f_5821 = iParam0;
		Global_24529.f_5822 = 0;
	}
	iVar0 = Global_24529.f_5659[Global_24529.f_5822];
	if (iVar0 != 1)
	{
		while (Global_24529.f_5822 < 4 && iVar0 != 1)
		{
			Global_24529.f_5822++;
			iVar0 = Global_24529.f_5659[Global_24529.f_5822];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_24529.f_79[Global_24529.f_5823 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_24529.f_1616[Global_24529.f_5823] = bParam3;
	Global_24529.f_1873[Global_24529.f_5823] = iParam4;
	Global_24529.f_2130[Global_24529.f_5823] = iParam6;
	Global_24529.f_5823++;
	if (!bParam3)
	{
		func_192(Global_24529.f_5821, 1);
	}
	else
	{
		func_192(Global_24529.f_5821, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_191(&(Global_24529.f_79[Global_24529.f_5823 /*6*/]));
		if (Global_24529.f_5678[Global_24529.f_5822])
		{
			func_171(27, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_24529.f_5671[Global_24529.f_5822])
		{
			Global_24529.f_5671[Global_24529.f_5822] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_190(&(Global_24529.f_79[Global_24529.f_5823 /*6*/]));
			if (fVar4 > Global_24529.f_6348[iParam0])
			{
				Global_24529.f_6348[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_24529.f_5692[iParam0]), Global_24529.f_5822);
	Global_24529.f_5822++;
	Global_24529.f_6347 = 1;
	Global_24529.f_6345 = (Global_24529.f_5823 - 1);
	Global_24529.f_6346 = 0;
	Global_24529.f_6344 = iParam2;
}

float func_190(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_191(char* sParam0)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_184(0, 1, 0, 0, 0, 0, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return func_180(1);
}

void func_192(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_24529.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_24529.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_24529.f_5659[0] = iParam0;
	Global_24529.f_5659[1] = iParam1;
	Global_24529.f_5659[2] = iParam2;
	Global_24529.f_5659[3] = iParam3;
	Global_24529.f_5659[4] = iParam4;
	Global_24529.f_5829 = 0;
	if (iParam0 != 0)
	{
		Global_24529.f_5829++;
	}
	if (iParam1 != 0)
	{
		Global_24529.f_5829++;
	}
	if (iParam2 != 0)
	{
		Global_24529.f_5829++;
	}
	if (iParam3 != 0)
	{
		Global_24529.f_5829++;
	}
	if (iParam4 != 0)
	{
		Global_24529.f_5829++;
	}
}

void func_194(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_24529.f_5686[0] = iParam0;
	Global_24529.f_5686[1] = iParam1;
	Global_24529.f_5686[2] = iParam2;
	Global_24529.f_5686[3] = iParam3;
	Global_24529.f_5686[4] = iParam4;
}

void func_195()
{
	char* sVar0;
	
	if (BitTest(Local_1060.f_22, 2))
	{
		MISC::CLEAR_BIT(&(Local_1060.f_22), 2);
	}
	PAD::DISABLE_CONTROL_ACTION(2, 210, true);
	PAD::SET_INPUT_EXCLUSIVE(2, 210);
	if (!BitTest(Local_1060.f_22, 0))
	{
		if ((PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 210) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, 209)) && !BitTest(Local_1060.f_22, 3))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", true);
			MISC::SET_BIT(&(Local_1060.f_22), false);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_409(Local_1060.f_20) == 2 || func_409(Local_1060.f_20) == 3) || func_445(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, false);
		if (func_321(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0))
		{
			if (!BitTest(Local_1060.f_22, 1))
			{
				func_319(0, 0);
				func_317(1, sVar0, sVar0);
				func_316("TCP_RULES");
				func_199(1, iLocal_1966, 6);
				func_198(1, 1, 1, 1, 1);
				func_315(-1, 1, 1);
				func_314(func_197(iLocal_1966), 0, 0);
				func_313(func_196(iLocal_1966));
				MISC::SET_BIT(&(Local_1060.f_22), true);
			}
			func_283(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", true);
			func_280(1, -1);
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
			iLocal_1966 = 1;
			Local_1060.f_22 = 0;
			MISC::SET_BIT(&(Local_1060.f_22), 2);
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 190))
		{
			iLocal_1966++;
			if (iLocal_1966 > 6)
			{
				iLocal_1966 = 1;
			}
			MISC::CLEAR_BIT(&(Local_1060.f_22), 1);
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 189))
		{
			iLocal_1966 = (iLocal_1966 - 1);
			if (iLocal_1966 < 1)
			{
				iLocal_1966 = 6;
			}
			MISC::CLEAR_BIT(&(Local_1060.f_22), 1);
		}
	}
}

char* func_196(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1";
		
		case 2:
			return "TCP_RULE_2";
		
		case 3:
			return "TCP_RULE_3";
		
		case 4:
			return "TCP_RULE_4";
		
		case 5:
			return "TCP_RULE_5";
		
		case 6:
			if ((func_409(Local_1060.f_20) == 2 || func_409(Local_1060.f_20) == 3) || func_445(PLAYER::PLAYER_ID()))
			{
				return "TCP_RULE_6b";
			}
			else
			{
				return "TCP_RULE_6a";
			}
			break;
	}
	return "";
}

char* func_197(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "TCP_RULE_1T";
		
		case 2:
			return "TCP_RULE_2T";
		
		case 3:
			return "TCP_RULE_3T";
		
		case 4:
			return "TCP_RULE_4T";
		
		case 5:
			return "TCP_RULE_5T";
		
		case 6:
			if ((func_409(Local_1060.f_20) == 2 || func_409(Local_1060.f_20) == 3) || func_445(PLAYER::PLAYER_ID()))
			{
				return "TCP_RULE_6Tb";
			}
			else
			{
				return "TCP_RULE_6Ta";
			}
			break;
	}
	return "";
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_24529.f_5678[0] = iParam0;
	Global_24529.f_5678[1] = iParam1;
	Global_24529.f_5678[2] = iParam2;
	Global_24529.f_5678[3] = iParam3;
	Global_24529.f_5678[4] = iParam4;
}

void func_199(int iParam0, int iParam1, int iParam2)
{
	Global_24529.f_6338 = iParam0;
	Global_24529.f_6339 = iParam1;
	Global_24529.f_6340 = iParam2;
}

void func_200(int iParam0)
{
	Global_1679103.f_1163 = iParam0;
}

void func_201(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || PAD::HAVE_CONTROLS_CHANGED(2))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_207(uParam2);
	}
	if (Global_1576384 < 2)
	{
		func_206(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_205(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, true));
						if (iVar3 < 402)
						{
							func_205(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_205(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar4, iVar5, true));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_204(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(402);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					func_205(&(uParam2->f_1[bVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_205(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_204(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(402);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				bVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_203(*uParam0, uParam1);
	}
	func_202();
}

void func_202()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_203(int iParam0, var uParam1)
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_204(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_205(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_206(int iParam0)
{
	Global_1576384 = iParam0;
}

void func_207(var uParam0)
{
	Global_1988495 = 0;
	uParam0->f_692 = 0;
}

int func_208(var uParam0)
{
	return (Global_1988495 || uParam0->f_692);
}

void func_209(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

struct<9> func_210()
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return 12;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return 13;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return 14;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 15;
		
		default:
	}
	return 0;
}

void func_212(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[bVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[bVar0 /*57*/].f_55 = iParam1;
	MISC::SET_BIT(&(uParam3->f_690), bVar0);
	uParam3->f_693++;
}

void func_213(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_214(var uParam0)
{
	func_215(uParam0);
	uParam0->f_692 = 1;
}

void func_215(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 402;
		uParam0->f_1[iVar0 /*57*/].f_56 = 402;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
	Global_1988495 = 0;
}

var func_216(bool bParam0)
{
	if (func_148())
	{
		if (!bParam0)
		{
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
			{
				case 0:
					Local_1060.f_798 = "female_idle_cardgames_var_01";
					break;
				
				case 1:
					Local_1060.f_798 = "female_idle_cardgames_var_02";
					break;
				
				case 2:
					Local_1060.f_798 = "female_idle_cardgames_var_03";
					break;
				
				case 3:
					Local_1060.f_798 = "female_idle_cardgames_var_04";
					break;
				
				case 4:
					Local_1060.f_798 = "female_idle_cardgames_var_05";
					break;
				
				case 5:
					Local_1060.f_798 = "female_idle_cardgames_var_06";
					break;
				
				case 6:
					Local_1060.f_798 = "female_idle_cardgames_var_07";
					break;
				
				case 7:
					Local_1060.f_798 = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 13))
		{
			case 0:
				Local_1060.f_798 = "idle_cardgames_var_01";
				break;
			
			case 1:
				Local_1060.f_798 = "idle_cardgames_var_02";
				break;
			
			case 2:
				Local_1060.f_798 = "idle_cardgames_var_03";
				break;
			
			case 3:
				Local_1060.f_798 = "idle_cardgames_var_04";
				break;
			
			case 4:
				Local_1060.f_798 = "idle_cardgames_var_05";
				break;
			
			case 5:
				Local_1060.f_798 = "idle_cardgames_var_06";
				break;
			
			case 6:
				Local_1060.f_798 = "idle_cardgames_var_07";
				break;
			
			case 7:
				Local_1060.f_798 = "idle_cardgames_var_08";
				break;
			
			case 8:
				Local_1060.f_798 = "idle_cardgames_var_09";
				break;
			
			case 9:
				Local_1060.f_798 = "idle_cardgames_var_10";
				break;
			
			case 10:
				Local_1060.f_798 = "idle_cardgames_var_11";
				break;
			
			case 11:
				Local_1060.f_798 = "idle_cardgames_var_12";
				break;
			
			case 12:
				Local_1060.f_798 = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_1060.f_798;
}

int func_217()
{
	if (func_218() == 0)
	{
		return 1;
	}
	return 0;
}

int func_218()
{
	return Global_1574634.f_18;
}

void func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_113();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_111();
	if (iVar0 == 0)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26826)
	{
		func_109();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_26827)
	{
		func_108(joaat("mpply_casino_chips_won_gd"), Global_262145.f_26827);
		func_109();
		Global_2696915 = 1;
	}
	else
	{
		func_108(joaat("mpply_casino_chips_won_gd"), (iVar2 - iParam0));
	}
}

int func_220(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

int func_221()
{
	if ((((Local_1060.f_2 && Local_1060.f_3) && Local_1060.f_4) && Local_1060.f_6) && (!BitTest(Local_1060.f_24, 9) && Local_1925.f_14 > 0))
	{
		return 1;
	}
	return 0;
}

int func_222()
{
	if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_223())
	{
		return NETWORK::NETWORK_GET_PLAYER_ACCOUNT_ID(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
	}
	return 0;
}

int func_223()
{
	return -1;
}

void func_224()
{
	char* sVar0;
	
	func_225();
	if (BitTest(Local_1060.f_22, 0) || BitTest(Local_1060.f_22, 3))
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_409(Local_1060.f_20) == 2 || func_409(Local_1060.f_20) == 3) || func_445(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		func_280(1, -1);
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
		iLocal_1966 = 1;
		Local_1060.f_22 = 0;
	}
	if (Local_1060.f_33 != -1)
	{
		func_337(&(Local_1060.f_33));
		Local_1060.f_33 = -1;
	}
	Local_1060.f_17 = 0;
	Local_1060.f_25 = 0;
	Local_1060.f_24 = 0;
	Local_1060.f_31 = 0;
	Local_771[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
	Local_1060.f_1 = 0;
	Local_1060.f_2 = 0;
	Local_1060.f_3 = 0;
	Local_1060.f_4 = 0;
	Local_1060.f_6 = 0;
	Local_1060.f_16 = 0;
	Local_1060.f_24 = 0;
	Local_771[PLAYER::PLAYER_ID() /*9*/] = 0;
	Local_771[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
	Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
	Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
	Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
	Local_1948.f_4 = func_427();
	Local_1948.f_5 = func_220(&uLocal_1923, 0, 0);
	func_167(0);
}

void func_225()
{
}

bool func_226()
{
	bool bVar0;
	
	bVar0 = func_227();
	if (bVar0)
	{
		Local_1060.f_13 = 0;
	}
	else
	{
		Local_1060.f_13++;
	}
	return Local_1060.f_13 < 5;
}

int func_227()
{
	int iVar0;
	float fVar1;
	
	if (Local_1060.f_26 == -1)
	{
		return 0;
	}
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_1060.f_26);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
	{
		return 0;
	}
	fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0);
	if (Local_1060.f_14 == fVar1)
	{
		return 0;
	}
	Local_1060.f_14 = fVar1;
	return 1;
}

void func_228()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	float fVar23;
	
	if (!PAD::IS_CONTROL_PRESSED(2, 207))
	{
		if (bLocal_1972)
		{
			func_325(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_1972 = false;
	}
	if (!PAD::IS_CONTROL_PRESSED(2, 208))
	{
		if (bLocal_1971)
		{
			func_325(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_1971 = false;
	}
	if ((((Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 >= 0 && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !func_363()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && Local_138.f_576[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2] < 12)
	{
		if (Local_138.f_410[PLAYER::PLAYER_ID() /*5*/] > 0 && (BitTest(Local_1060.f_24, 4) || BitTest(Local_138.f_20[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2], func_211(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1))))
		{
			if ((((PAD::IS_CONTROL_PRESSED(2, 207) && !PAD::IS_CONTROL_PRESSED(2, 208)) && !bLocal_1971) && !func_72(&uLocal_1973)) && !CAM::DOES_CAM_EXIST(Local_1060.f_15))
			{
				if (!bLocal_1972)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						bLocal_1967 = true;
					}
					func_325(PLAYER::PLAYER_ID(), 0, 0, 0);
					bLocal_1972 = true;
				}
			}
		}
		else
		{
			if (bLocal_1972)
			{
				func_325(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_1972 = false;
		}
		if (Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/] > 0)
		{
			if ((((PAD::IS_CONTROL_PRESSED(2, 208) && !PAD::IS_CONTROL_PRESSED(2, 207)) && !bLocal_1972) && !func_72(&uLocal_1973)) && !CAM::DOES_CAM_EXIST(Local_1060.f_15))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					func_325(PLAYER::PLAYER_ID(), 0, 0, 0);
				}
				bLocal_1971 = true;
			}
		}
		else
		{
			if (bLocal_1971)
			{
				func_325(PLAYER::PLAYER_ID(), 0, 256, 0);
			}
			bLocal_1971 = false;
		}
	}
	else
	{
		if (bLocal_1972 || bLocal_1971)
		{
			func_325(PLAYER::PLAYER_ID(), 0, 256, 0);
		}
		bLocal_1972 = false;
		bLocal_1971 = false;
	}
	if (bLocal_1971 || bLocal_1972)
	{
		CAM::SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(true);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 166, true);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!CAM::DOES_CAM_EXIST(Local_1060.f_15))
		{
			Local_1060.f_15 = CAM::CREATE_CAMERA(26379945, true);
			CAM::SET_CAM_PARAMS(Local_1060.f_15, func_243(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1, Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_1971), func_242(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1, Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_1971), func_241(bLocal_1971), 0, 1, 1, 2);
			CAM::SHAKE_CAM(Local_1060.f_15, "HAND_SHAKE", 0.03f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		else if (bLocal_1971)
		{
			if (Local_138.f_5[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2])
			{
				if (!func_98("TCP_D_HAND", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0)))
				{
					func_97("TCP_D_HAND", func_101(func_9(&(Local_138.f_389[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 /*5*/].f_1), 0, 0), 0));
				}
			}
			else if (!func_361("TCP_D_HAND_D"))
			{
				func_164("TCP_D_HAND_D");
			}
			fVar0 = CAM::GET_CAM_FOV(Local_1060.f_15);
			fVar1 = 50f;
			fVar1 = func_240();
			fVar0 = func_235(fVar0, fVar1, 0.2f, 4);
			CAM::SET_CAM_PARAMS(Local_1060.f_15, func_243(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1, Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_1971), func_242(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1, Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_1971), fVar0, 0, 1, 1, 2);
		}
		else if (bLocal_1972)
		{
			if (bLocal_1967)
			{
				fVar2 = CAM::GET_CAM_FOV(Local_1060.f_15);
				fVar3 = 50f;
				Var4 = { CAM::GET_CAM_ROT(Local_1060.f_15, 2) };
				Var7 = { 0f, 0f, 0f };
				Var10 = { -38.1166f, -0.0930717f, -102.613f };
				Var13 = { CAM::GET_CAM_COORD(Local_1060.f_15) };
				Var16 = { 0f, 0f, 0f };
				Var19 = { 966.621f, 32.009f, 116.621f };
				if (Var4.f_2 < 0f)
				{
					Var4.f_2 = (Var4.f_2 + 360f);
				}
				Var19 = { func_234(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1) };
				Var10 = { func_233(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1) };
				fVar3 = func_240();
				if (Var10.f_2 < 0f)
				{
					Var10.f_2 = (Var10.f_2 + 360f);
				}
				Var7 = { func_231(Var4, Var10, 0.35f, 4) };
				Var16 = { func_230(Var13, Var19, 0.35f, 4) };
				if (Var7.f_2 > 180f)
				{
					Var7.f_2 = (Var7.f_2 - 360f);
				}
				else if (Var7.f_2 < -180f)
				{
					Var7.f_2 = (Var7.f_2 + 360f);
				}
				if (func_229(Var4, Var10, 10f, 0) && func_229(Var13, Var19, 0.1f, 0))
				{
					fVar2 = func_235(fVar2, fVar3, 0.35f, 4);
				}
				CAM::SET_CAM_PARAMS(Local_1060.f_15, Var16, Var7, fVar2, 0, 1, 1, 2);
			}
			else
			{
				fVar22 = CAM::GET_CAM_FOV(Local_1060.f_15);
				fVar23 = 50f;
				fVar23 = func_240();
				fVar22 = func_235(fVar22, fVar23, 0.35f, 4);
				CAM::SET_CAM_PARAMS(Local_1060.f_15, func_243(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1, Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_1971), func_242(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1, Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, bLocal_1971), fVar22, 0, 1, 1, 2);
			}
		}
	}
	else
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (CAM::DOES_CAM_EXIST(Local_1060.f_15))
		{
			CAM::SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(true);
			if (!func_72(&uLocal_1973) && bLocal_1967)
			{
				func_73(&uLocal_1973, 0, 0);
				GRAPHICS::ANIMPOSTFX_PLAY("PokerCamTransition", 0, false);
			}
			else if (func_71(&uLocal_1973, 100, 0) || !bLocal_1967)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(Local_1060.f_15, false);
				HUD::CLEAR_HELP(true);
				func_69(&uLocal_1973);
				bLocal_1967 = false;
			}
		}
	}
	if (bLocal_1972 || bLocal_1967)
	{
		if (BitTest(Local_1060.f_24, 4) || BitTest(Local_138.f_20[Local_771[PLAYER::PLAYER_ID() /*9*/].f_2], func_211(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1)))
		{
			if (!func_98("TCP_P_HAND", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0)))
			{
				func_97("TCP_P_HAND", func_101(func_9(&(Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1), 0, 0), 0));
			}
		}
	}
}

int func_229(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

Vector3 func_230(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	struct<3> Var0;
	
	Var0.f_0 = func_235(Param0.f_0, Param3.f_0, fParam6, iParam7);
	Var0.f_1 = func_235(Param0.f_1, Param3.f_1, fParam6, iParam7);
	Var0.f_2 = func_235(Param0.f_2, Param3.f_2, fParam6, iParam7);
	return Var0;
}

Vector3 func_231(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	struct<3> Var0;
	
	Var0.f_0 = func_232(Param0.f_0, Param3.f_0, fParam6, iParam7);
	Var0.f_1 = func_232(Param0.f_1, Param3.f_1, fParam6, iParam7);
	Var0.f_2 = func_232(Param0.f_2, Param3.f_2, fParam6, iParam7);
	return Var0;
}

float func_232(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = MISC::ABSF((fParam1 - fParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > fParam0)
		{
			fParam0 = (fParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_235(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_233(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_253(iParam0) };
	Var3 = { -47.16f, 0f, -87.475f };
	return Vector(Var0.f_2, 0f, 0f) + Var3;
}

Vector3 func_234(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_253(iParam0) };
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_386(iParam0), Var0.f_2, 0.198f, 0f, 1.388f);
}

float func_235(float fParam0, float fParam1, float fParam2, int iParam3)
{
	var uVar0;
	
	fParam2 = func_238(fParam2, iParam3);
	switch (iParam3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			uVar0 = func_237(fParam0, fParam1, fParam2);
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			uVar0 = func_236(fParam0, fParam1, fParam2);
			break;
	}
	return uVar0;
}

float func_236(float fParam0, float fParam1, float fParam2)
{
	return ((fParam0 * (1f - fParam2)) + (fParam1 * fParam2));
}

float func_237(float fParam0, float fParam1, float fParam2)
{
	return (fParam0 + ((fParam1 - fParam0) * fParam2));
}

float func_238(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
		case 6:
			fParam0 = SYSTEM::POW(fParam0, 2f);
			break;
		
		case 2:
		case 7:
			fParam0 = (1f - SYSTEM::POW((1f - fParam0), 2f));
			break;
		
		case 3:
		case 8:
			fParam0 = ((-SYSTEM::COS(func_239((3.141593f * fParam0))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam0 = (SYSTEM::POW(fParam0, 2f) * (3f - (2f * fParam0)));
			break;
	}
	return fParam0;
}

float func_239(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_240()
{
	if (bLocal_1971)
	{
		return 37.8425f;
	}
	return 43.3518f;
}

float func_241(bool bParam0)
{
	float fVar0;
	
	fVar0 = 44.6546f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	if (bLocal_1967)
	{
		fVar0 = 50f;
	}
	return fVar0;
}

Vector3 func_242(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		Var0 = { -74.52f, 0f, 0f };
	}
	else if (bLocal_1967)
	{
		return CAM::GET_GAMEPLAY_CAM_ROT(2);
	}
	else
	{
		return func_233(iParam0);
	}
	return Vector(func_75(iParam1), 0f, 0f) + Var0;
}

Vector3 func_243(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		Var0 = { 0f, -0.02f, 1.62f };
	}
	else if (bLocal_1967)
	{
		return CAM::GET_GAMEPLAY_CAM_COORD();
	}
	else
	{
		return func_234(iParam0);
	}
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iParam1), func_75(iParam1), Var0);
}

void func_244(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_245(int iParam0)
{
	if (Local_138.f_576[iParam0] == 2)
	{
		if (!BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/].f_6, 0))
		{
			Local_1060.f_801 = { Local_138.f_168[iParam0 /*55*/] };
			MISC::SET_BIT(&(Local_771[PLAYER::PLAYER_ID() /*9*/].f_6), false);
		}
	}
	else if (Local_138.f_576[iParam0] > 2 && BitTest(Local_771[PLAYER::PLAYER_ID() /*9*/].f_6, 0))
	{
		if (Local_138.f_410[PLAYER::PLAYER_ID() /*5*/] > 0)
		{
			if (Local_1060.f_856 != Local_138.f_410[PLAYER::PLAYER_ID() /*5*/])
			{
				Local_1060.f_856 = { Local_138.f_410[PLAYER::PLAYER_ID() /*5*/] };
			}
			else
			{
				if (Local_1060.f_856.f_1[iLocal_1970] != Local_138.f_410[PLAYER::PLAYER_ID() /*5*/].f_1[iLocal_1970])
				{
					iLocal_1969 = 0;
					iLocal_1970 = 0;
					if (Global_262145.f_26472)
					{
						STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1925);
					}
					func_404(1);
					HUD::CLEAR_HELP(true);
					return 1;
				}
				iLocal_1970++;
				if (iLocal_1970 >= Local_1060.f_856)
				{
					iLocal_1970 = 0;
				}
			}
		}
		if (Local_138.f_168[iParam0 /*55*/].f_2[iLocal_1969] != Local_1060.f_801.f_2[iLocal_1969])
		{
			iLocal_1969 = 0;
			iLocal_1970 = 0;
			if (Global_262145.f_26472)
			{
				STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1925);
			}
			func_404(1);
			HUD::CLEAR_HELP(true);
			return 1;
		}
		iLocal_1969++;
		if (iLocal_1969 >= 52)
		{
			iLocal_1969 = 0;
		}
	}
	return 0;
}

void func_246()
{
	int iVar0;
	
	iVar0 = func_409(Local_1060.f_20);
	if (iVar0 < 32)
	{
		MISC::SET_BIT(&(Local_1060.f_35), iVar0);
	}
}

int func_247(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_439())
	{
		return 0;
	}
	iVar0 = func_248(iParam0);
	if (iVar0 != func_439())
	{
		return func_350(iVar0);
	}
	return 0;
}

int func_248(int iParam0)
{
	if (func_135(iParam0))
	{
		return Global_1892653[iParam0 /*615*/].f_10;
	}
	return func_439();
}

void func_249(var uParam0, int iParam1)
{
	if (uParam0->f_7 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_7 && iParam1 != 0)
	{
		return;
	}
	if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 6)
	{
		if (func_359())
		{
			func_249(uParam0, 7);
			return;
		}
	}
	uParam0->f_7 = iParam1;
	func_69(&(Local_1060.f_796));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		func_73(&(Local_1060.f_796), 0, 0);
	}
}

int func_250()
{
	int iVar0;
	
	iVar0 = func_409(Local_1060.f_20);
	if (iVar0 < 32)
	{
		return BitTest(Local_1060.f_35, iVar0);
	}
	return 0;
}

char* func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sit_enter_left";
		
		case 1:
			return "sit_enter_left_side";
		
		case 2:
			return "sit_enter_right_side";
		
		default:
	}
	return "sit_enter_left";
}

char* func_252()
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_253(int iParam0)
{
	int iVar0;
	
	if (Local_1060.f_28 == 1)
	{
		if (func_440() != func_439())
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_409(iParam0)), 1f, func_254(Global_2658291[func_440() /*468*/].f_459), false, false, false);
		}
	}
	else if (func_409(iParam0) == 0 || func_409(iParam0) == 1)
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_409(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01"), false, false, false);
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_409(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 1:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 2:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 3:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 4:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 5:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 6:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 7:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 8:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 9:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 10:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 11:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 12:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 13:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 14:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 15:
				return ENTITY::GET_ENTITY_BONE_ROTATION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("h4_prop_casino_3cardpoker_01a");
			break;
		
		case 2:
			return joaat("h4_prop_casino_3cardpoker_01b");
			break;
		
		case 3:
			return joaat("h4_prop_casino_3cardpoker_01c");
			break;
		
		case 4:
			return joaat("h4_prop_casino_3cardpoker_01e");
			break;
	}
	return joaat("vw_prop_casino_3cardpoker_01b");
}

var func_255(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_252(), func_251(iParam1), func_386(iParam0), func_253(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

float func_256(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

Vector3 func_257(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_252(), func_251(iParam1), func_386(iParam0), func_253(iParam0), 0.01f, 2) };
	return Var0;
}

int func_258()
{
	STREAMING::REQUEST_ANIM_DICT(func_45());
	STREAMING::REQUEST_ANIM_DICT(func_78());
	STREAMING::REQUEST_ANIM_DICT(func_92());
	STREAMING::REQUEST_ANIM_DICT(func_252());
	if (((STREAMING::HAS_ANIM_DICT_LOADED(func_45()) && STREAMING::HAS_ANIM_DICT_LOADED(func_78())) && STREAMING::HAS_ANIM_DICT_LOADED(func_92())) && STREAMING::HAS_ANIM_DICT_LOADED(func_252()))
	{
		return 1;
	}
	return 0;
}

int func_259()
{
	if (func_71(&(Local_1060.f_794), 3500, 0))
	{
		func_69(&(Local_1060.f_794));
		return 1;
	}
	return 0;
}

bool func_260(int iParam0)
{
	if (Local_138.f_117[iParam0] == func_439())
	{
		return 0;
	}
	return Local_138.f_117[iParam0] != PLAYER::PLAYER_ID();
}

void func_261(int iParam0)
{
	Global_1971535 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Global_1971553 = iParam0;
	if (!func_269())
	{
		func_266();
	}
	if (!func_265())
	{
		func_262();
	}
}

void func_262()
{
	func_108(joaat("mpply_cas_gmblng_l24_px"), NETWORK::GET_CLOUD_TIME_AS_INT());
	func_264();
	func_263();
	Global_1971549 = 1;
	Global_1971544 = 0;
}

void func_263()
{
	func_108(joaat("mpply_cas_24h_gmblng_px"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

void func_264()
{
	func_108(joaat("mpply_cas_gmblng_l24"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_1"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_2"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_3"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_4"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_5"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_6"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_7"), 0);
	func_108(joaat("mpply_cas_gmblng_l24_8"), 0);
	func_108(joaat("mpply_cas_cur_gmblng_hr"), 0);
	func_108(joaat("mpply_cas_24h_gmblng_px"), 0);
}

bool func_265()
{
	return Global_1971549;
}

void func_266()
{
	func_108(joaat("mpply_casino_gmblng_gd"), NETWORK::GET_CLOUD_TIME_AS_INT());
	func_268();
	func_267((NETWORK::GET_CLOUD_TIME_AS_INT() + 86400));
	Global_1971548 = 1;
}

void func_267(int iParam0)
{
	Global_1971543 = iParam0;
}

void func_268()
{
	func_108(joaat("mpply_cas_cur_gmblng_px"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

bool func_269()
{
	return func_112(joaat("mpply_casino_gmblng_gd")) != 0;
}

bool func_270(int iParam0)
{
	return Local_138.f_117[iParam0] == PLAYER::PLAYER_ID();
}

void func_271()
{
	func_388(2);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
	func_365();
	func_325(PLAYER::PLAYER_ID(), 1, 0, 0);
	func_279();
	MISC::CLEAR_BIT(&(Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_4), 3);
	func_272();
}

void func_272()
{
	int iVar0;
	int iVar1;
	
	if (Global_1971553 != -1)
	{
		iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1971535);
		iVar1 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1971536);
		if (Global_1971536 == -1)
		{
			func_273(iVar0);
		}
		else
		{
			func_273(iVar1);
		}
		func_268();
		func_263();
		Global_1971535 = -1;
		Global_1971536 = -1;
		Global_1971553 = -1;
	}
}

void func_273(int iParam0)
{
	int iVar0;
	
	iVar0 = func_278();
	Global_1971544 = (Global_1971544 + iParam0);
	func_274(iVar0, iParam0);
	func_263();
}

void func_274(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[9];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	
	iVar11 = (iParam0 + 1 * 12 - 12);
	iVar12 = 1;
	if ((iVar11 % 32) + 12 > 32)
	{
		iVar12 = 2;
	}
	iVar13 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar11) / 32f));
	if (iVar13 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		if ((iVar13 + iVar0) >= 9)
		{
			return;
		}
		iVar14 = func_277((iVar13 + iVar0));
		uVar1[(iVar13 + iVar0)] = func_112(iVar14);
		iVar0++;
	}
	iVar15 = func_276(&uVar1, iParam0, 12);
	iVar15 = (iVar15 + iParam1);
	func_275(&uVar1, iParam0, 12, iVar15);
	iVar0 = 0;
	while (iVar0 < iVar12)
	{
		uVar16 = func_277((iVar13 + iVar0));
		func_108(uVar16, uVar1[(iVar13 + iVar0)]);
		iVar0++;
	}
}

void func_275(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar3) / 32f));
	iVar5 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	bVar6 = false;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - bVar6))
		{
			iVar8 = (iParam2 - bVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (BitTest(iParam3, bVar6))
			{
				MISC::SET_BIT(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				MISC::CLEAR_BIT(uParam0[(iVar4 + iVar0)], bVar1);
			}
			bVar6++;
			bVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_276(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar4) / 32f));
	iVar6 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		bVar1 = iVar8;
		while (bVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (BitTest((*uParam0)[(iVar5 + iVar0)], bVar1))
			{
				MISC::SET_BIT(&uVar2, iVar7);
			}
			bVar7++;
			bVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_277(int iParam0)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_278()
{
	return func_112(joaat("mpply_cas_cur_gmblng_hr"));
}

void func_279()
{
	if (Global_2673271.f_1023.f_10)
	{
		Global_2673271.f_1023.f_10 = 0;
	}
}

void func_280(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_282(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_24529.f_9244)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_24529.f_9244 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_24529.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_24529.f_6231[iVar0] = 0;
	}
	if (Global_24529.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_24529.f_6217[iVar0] = 0;
	}
	if (Global_24529.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_24529.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_281(&(Global_24529.f_6263[iVar0 /*10*/]));
		Global_24529.f_6324[iVar0] = 0;
	}
	else
	{
		Global_24529.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_281(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_282(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_24529.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_24529.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_24529.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_283(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int* iVar60;
	int* iVar61;
	float fVar62;
	struct<8> Var63;
	char cVar79[64];
	float fVar95;
	float fVar96;
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_282(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_309(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_24529)
	{
		if (func_171(30, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_24529 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_24528;
	}
	fVar57 = (fParam5 * fVar58);
	if (MISC::GET_HASH_KEY(&(Global_24529.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_24527;
	}
	else
	{
		fVar59 = (((Global_24527 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_173(bParam7, &iVar60, &iVar61, &fVar62);
	if (bParam3)
	{
		if (Global_24529.f_5821 <= 1)
		{
			func_189(Global_24529.f_5821 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_24529.f_6617 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_24529.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_24529.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_24527;
			}
			else
			{
				if (Global_24529)
				{
					StringCopy(&Var63, func_178(30), 64);
					StringCopy(&cVar79, func_175(30, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_24529.f_7744[30 /*16*/])) == joaat("crew_logo"))
					{
						func_308(Global_24526, Global_24527, fParam5, fVar57, 0, 0, 0, 255);
						func_307(&Var63, &cVar79, (Global_24526 + (fParam5 * 0.5f)), (Global_24527 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
					else
					{
						func_307(&Var63, &cVar79, (Global_24526 + (fParam5 * 0.5f)), (Global_24527 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
				}
				if (Global_24529.f_9214)
				{
					iVar1 = Global_24529.f_9210;
					iVar2 = Global_24529.f_9211;
					iVar3 = Global_24529.f_9212;
					iVar4 = Global_24529.f_9213;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_308(Global_24526, (Global_24527 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_24527 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_24529.f_1)) != 0)
				{
					func_306();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24529.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_24529.f_74)
					{
						if (Global_24529.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24529.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_24529.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24529.f_14[iVar16], Global_24529.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_24529.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_24529.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_24529.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24529.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_24529.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_24529.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24529.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_24529.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24529.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					func_305((Global_24526 + 0.00390625f), ((Global_24527 + fVar57) + 0.00416664f), 0);
				}
				if (Global_24529.f_6338)
				{
					func_306();
					func_303((((Global_24526 + fParam5) - 0.00390625f) - func_304("CM_ITEM_COUNT", Global_24529.f_6339, Global_24529.f_6340)), ((Global_24527 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_24529.f_6339, Global_24529.f_6340);
				}
				else if (Global_24529.f_6334 > Global_24529.f_5828)
				{
					if (Global_24529.f_6337 != 0)
					{
						func_306();
						func_303((((Global_24526 + fParam5) - 0.00390625f) - func_304("CM_ITEM_COUNT", Global_24529.f_6337, Global_24529.f_6336)), ((Global_24527 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_24529.f_6337, Global_24529.f_6336);
					}
				}
			}
			iVar6 = Global_24529.f_6341;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_24529.f_9224)
			{
				iVar1 = Global_24529.f_9220;
				iVar2 = Global_24529.f_9221;
				iVar3 = Global_24529.f_9222;
				iVar4 = Global_24529.f_9223;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_24529.f_5828 && iVar6 <= Global_24529.f_5821)
			{
				if (iVar6 >= 0)
				{
					if (Global_24529.f_6088[iVar6])
					{
						if (Global_24529.f_5959[iVar6] && iVar6 != Global_24529.f_6341)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_24529.f_6348[iVar6] != 0f)
						{
							fVar56 = Global_24529.f_6348[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			func_307("CommonMenu", "Gradient_Bgd", (Global_24526 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, 0, 0);
			if (Global_24529.f_6334 > Global_24529.f_5828)
			{
				if (Global_24529.f_9229)
				{
					iVar1 = Global_24529.f_9225;
					iVar2 = Global_24529.f_9226;
					iVar3 = Global_24529.f_9227;
					iVar4 = Global_24529.f_9228;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_308(Global_24526, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_24529.f_9242)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				func_307("CommonMenu", "shop_arrows_upANDdown", (Global_24526 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_24529.f_5241)) != 0 && Global_24529.f_5323 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_24526 + 0.0046875f);
				if (Global_24529.f_5325 != 0)
				{
					func_171(Global_24529.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_24526 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_302(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_24529.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_24529.f_5319)
				{
					if (Global_24529.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24529.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_24529.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24529.f_5262[iVar16], Global_24529.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_24529.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24529.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24529.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24529.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24529.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_308(Global_24526, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_24529.f_9234)
				{
					iVar1 = Global_24529.f_9230;
					iVar2 = Global_24529.f_9231;
					iVar3 = Global_24529.f_9232;
					iVar4 = Global_24529.f_9233;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				func_307("CommonMenu", "Gradient_Bgd", (Global_24526 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_302(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24529.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_24529.f_5319)
				{
					if (Global_24529.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24529.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_24529.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24529.f_5262[iVar16], Global_24529.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_24529.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24529.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24529.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24529.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24529.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24529.f_5253[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				func_305(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_24529.f_5325 != 0)
				{
					func_171(Global_24529.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					func_301(Global_24529.f_5325, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					func_307(func_178(Global_24529.f_5325), func_175(Global_24529.f_5325, 1), ((Global_24526 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24529.f_5247)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_302(fVar42);
					fVar96 = 0.35f;
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_24529.f_5247))) > 600)
					{
						fVar96 = (0.35f * 0.625f);
					}
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_24529.f_5247));
					iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
					HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_308(Global_24526, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_24529.f_9234)
					{
						iVar1 = Global_24529.f_9230;
						iVar2 = Global_24529.f_9231;
						iVar3 = Global_24529.f_9232;
						iVar4 = Global_24529.f_9233;
					}
					else
					{
						HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					func_307("CommonMenu", "Gradient_Bgd", (Global_24526 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, 0, 0);
					func_302(fVar42);
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24529.f_5247));
					func_305(fVar42, (fVar51 + 0.00277776f), 0);
					fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_24529.f_5323 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_24529.f_5324) > Global_24529.f_5323)
					{
						StringCopy(&(Global_24529.f_5241), "", 24);
						Global_24529.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24529.f_5247)))
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_24526 + 0.0046875f);
				fVar97 = 0.35f;
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_24529.f_5247))) > 600)
				{
					fVar97 = (0.35f * 0.625f);
				}
				func_302(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_24529.f_5247));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_24529.f_5319)
				{
					if (Global_24529.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24529.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_24529.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24529.f_5262[iVar16], Global_24529.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_24529.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24529.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24529.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24529.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24529.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24529.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_308(Global_24526, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_24529.f_9234)
				{
					iVar1 = Global_24529.f_9230;
					iVar2 = Global_24529.f_9231;
					iVar3 = Global_24529.f_9232;
					iVar4 = Global_24529.f_9233;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				func_307("CommonMenu", "Gradient_Bgd", (Global_24526 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, 0, 0);
				func_302(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24529.f_5247));
				func_305(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (MISC::GET_HASH_KEY(&(Global_4521195.f_21)) != 0 && Global_4521195.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_24526 + 0.0046875f);
				if (Global_4521195.f_67 != 0)
				{
					func_171(Global_4521195.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_24526 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_302(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4521195.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4521195.f_61)
				{
					if (Global_4521195.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4521195.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4521195.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4521195.f_34[iVar16], Global_4521195.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4521195.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521195.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521195.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521195.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521195.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521195.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521195.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521195.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521195.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521195.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521195.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521195.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_308(Global_24526, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_24529.f_9234)
				{
					iVar1 = Global_24529.f_9230;
					iVar2 = Global_24529.f_9231;
					iVar3 = Global_24529.f_9232;
					iVar4 = Global_24529.f_9233;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				func_307("CommonMenu", "Gradient_Bgd", (Global_24526 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_302(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4521195.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4521195.f_61)
				{
					if (Global_4521195.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4521195.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4521195.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4521195.f_34[iVar16], Global_4521195.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4521195.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521195.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521195.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521195.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521195.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521195.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521195.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521195.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521195.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521195.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521195.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521195.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				func_305(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4521195.f_67 != 0)
				{
					func_171(Global_4521195.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_301(Global_4521195.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					func_307(func_178(Global_4521195.f_67), func_175(Global_4521195.f_67, 1), ((Global_24526 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4521195.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4521195.f_66) > Global_4521195.f_65)
					{
						StringCopy(&(Global_4521195.f_21), "", 16);
						Global_4521195.f_65 = -1;
					}
				}
			}
			func_296(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_24529.f_6331)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_24529.f_5821;
			if (Global_24529.f_6332)
			{
				iVar98 = (Global_24529.f_6335 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_24529.f_6348[iVar6] != 0f)
				{
					fVar56 = Global_24529.f_6348[iVar6];
				}
				if (Global_24529.f_6332)
				{
					iVar6 = Global_24529.f_8865[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_24529.f_6341 && iVar9 < Global_24529.f_5828)
				{
					bVar33 = true;
					if (Global_24529.f_6342 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_24529.f_5959[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_24529.f_6482[iVar6] = fVar35;
				fVar34 = (Global_24526 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_24529.f_6342 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_24529.f_9236)
					{
						HUD::GET_HUD_COLOUR(Global_24529.f_9235, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					func_307("CommonMenu", "Gradient_Nav", (Global_24526 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, 0, 0);
					Global_24529.f_6480 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_24529.f_5829)
				{
					if (BitTest(Global_24529.f_5692[iVar6], iVar8) || Global_24529.f_5659[iVar8] == 5)
					{
						if (Global_24529.f_6332)
						{
							iVar19 = Global_24529.f_8881[((iVar9 * Global_24529.f_5829) + iVar8)];
							iVar20 = Global_24529.f_8922[((iVar9 * Global_24529.f_5829) + iVar8)];
							iVar21 = Global_24529.f_8963[((iVar9 * Global_24529.f_5829) + iVar8)];
							iVar22 = Global_24529.f_9004[((iVar9 * Global_24529.f_5829) + iVar8)];
							iVar23 = Global_24529.f_9045[((iVar9 * Global_24529.f_5829) + iVar8)];
						}
						else
						{
							Global_24529.f_8881[((iVar9 * Global_24529.f_5829) + iVar8)] = iVar19;
							Global_24529.f_8922[((iVar9 * Global_24529.f_5829) + iVar8)] = iVar20;
							Global_24529.f_8963[((iVar9 * Global_24529.f_5829) + iVar8)] = iVar21;
							Global_24529.f_9004[((iVar9 * Global_24529.f_5829) + iVar8)] = iVar22;
							Global_24529.f_9045[((iVar9 * Global_24529.f_5829) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_24529.f_6614[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_24529.f_6611[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_24529.f_6614[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_24529.f_6611[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_24529.f_5665[iVar8] != -1f)
						{
							fVar34 = ((Global_24526 + 0.0046875f) + Global_24529.f_5665[iVar8]);
						}
						if ((iVar8 < 4 && Global_24529.f_5665[iVar8 + 1] != -1f) && fVar34 < Global_24529.f_5665[iVar8 + 1])
						{
							fVar46 = (Global_24529.f_5665[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_24526 + Global_24528) - 0.0046875f) - fVar34);
						}
						if ((Global_24529.f_5678[iVar8] && Global_24529.f_6477) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_24529.f_5659[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_24529.f_6332)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_24529.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_24529.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_184(bVar32, Global_24529.f_1616[iVar24], Global_24529.f_1873[iVar24], bVar55, iVar106, bVar53, bVar52);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_24529.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2697529[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2697529[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2697529[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2697529[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24529.f_4469[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24529.f_4726[(iVar21 + iVar27)], Global_24529.f_4855[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = func_180(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_171(Global_24529.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_24529.f_4984[(iVar22 + iVar14)] == 2 || Global_24529.f_4984[(iVar22 + iVar14)] == 56) || Global_24529.f_4984[(iVar22 + iVar14)] == 66)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_24529.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_24529.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_24529.f_9086[((iVar9 * Global_24529.f_5829) + iVar8)] = fVar42;
										Global_24529.f_9127[((iVar9 * Global_24529.f_5829) + iVar8)] = fVar43;
										Global_24529.f_9168[((iVar9 * Global_24529.f_5829) + iVar8)] = fVar44;
										if (Global_24529.f_5686[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_24529.f_5686[iVar101] == 2)
												{
													Global_24529.f_9086[((iVar9 * Global_24529.f_5829) + iVar101)] = (Global_24529.f_9086[((iVar9 * Global_24529.f_5829) + iVar101)] - Global_24529.f_5671[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_24529.f_9086[((iVar9 * Global_24529.f_5829) + iVar8)];
										fVar43 = Global_24529.f_9127[((iVar9 * Global_24529.f_5829) + iVar8)];
										fVar44 = Global_24529.f_9168[((iVar9 * Global_24529.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_171(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_24529.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_171(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_301(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													func_307(func_178(27), func_175(27, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_171(28, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_171(28, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_301(28, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													func_307(func_178(28), func_175(28, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_24529.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_24529.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_184(bVar32, Global_24529.f_1616[iVar24], Global_24529.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_24529.f_9240 && Global_24529.f_9241 == iVar6)
										{
											func_295(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24529.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24529.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2697529[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2697529[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2697529[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2697529[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24529.f_4469[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24529.f_4726[(iVar21 + iVar27)], Global_24529.f_4855[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_24529.f_4984[(iVar22 + iVar28)] == 2 || Global_24529.f_4984[(iVar22 + iVar28)] == 56) || Global_24529.f_4984[(iVar22 + iVar28)] == 66)
											{
												if (func_171(Global_24529.f_4984[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_171(Global_24529.f_4984[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_301(Global_24529.f_4984[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_24529.f_5686[iVar8] == 2)
															{
																func_307(func_178(Global_24529.f_4984[(iVar22 + iVar28)]), func_175(Global_24529.f_4984[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																func_307(func_178(Global_24529.f_4984[(iVar22 + iVar28)]), func_175(Global_24529.f_4984[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_24529.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_24529.f_5686[iVar8] == 2)
										{
											func_305(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											func_305((fVar34 + fVar42), fVar35, 0);
											if (func_294() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_24529.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_184(0, Global_24529.f_1616[iVar24], Global_24529.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_24529.f_6341 + iVar30));
													func_305((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_24529.f_4984[(iVar22 + iVar14)] != 2 && Global_24529.f_4984[(iVar22 + iVar14)] != 56) && Global_24529.f_4984[(iVar22 + iVar14)] != 66)
											{
												if (func_171(Global_24529.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_171(Global_24529.f_4984[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_301(Global_24529.f_4984[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_24529.f_4984[(iVar22 + iVar14)] == 31)
															{
																func_307(func_178(Global_24529.f_4984[(iVar22 + iVar14)]), func_175(Global_24529.f_4984[(iVar22 + iVar14)], bVar32), (Global_24526 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else if (Global_24529.f_5686[iVar8] == 2)
															{
																func_307(func_178(Global_24529.f_4984[(iVar22 + iVar14)]), func_175(Global_24529.f_4984[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																func_307(func_178(Global_24529.f_4984[(iVar22 + iVar14)]), func_175(Global_24529.f_4984[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_24529.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_24529.f_6332)
									{
										func_184(bVar32, Global_24529.f_1616[iVar24], Global_24529.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_24529.f_9240 && Global_24529.f_9241 == iVar6)
										{
											func_295(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24529.f_4469[iVar20]);
										fVar43 = func_180(1);
										fVar42 = 0f;
										if (Global_24529.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_24529.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_24529.f_9086[((iVar9 * Global_24529.f_5829) + iVar8)] = fVar42;
										Global_24529.f_9127[((iVar9 * Global_24529.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_24529.f_9086[((iVar9 * Global_24529.f_5829) + iVar8)];
										fVar43 = Global_24529.f_9127[((iVar9 * Global_24529.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_171(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_24529.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_171(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_301(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													func_307(func_178(27), func_175(27, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_171(28, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_171(28, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_301(28, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													func_307(func_178(28), func_175(28, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_184(bVar32, Global_24529.f_1616[iVar24], Global_24529.f_1873[iVar24], bVar55, 0, 0, 0);
										func_293((fVar34 + fVar42), fVar35, "NUMBER", Global_24529.f_4469[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_24529.f_6332)
									{
										func_184(bVar32, Global_24529.f_1616[iVar24], Global_24529.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_24529.f_9240 && Global_24529.f_9241 == iVar6)
										{
											func_295(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24529.f_4726[iVar21], Global_24529.f_4855[iVar21]);
										fVar43 = func_180(1);
										fVar42 = 0f;
										if (Global_24529.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_24529.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_24529.f_9086[((iVar9 * Global_24529.f_5829) + iVar8)] = fVar42;
										Global_24529.f_9127[((iVar9 * Global_24529.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_24529.f_9086[((iVar9 * Global_24529.f_5829) + iVar8)];
										fVar43 = Global_24529.f_9127[((iVar9 * Global_24529.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_171(27, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_24529.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_171(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_301(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													func_307(func_178(27), func_175(27, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_171(28, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_171(28, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_301(28, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													func_307(func_178(28), func_175(28, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									func_184(bVar32, Global_24529.f_1616[iVar24], Global_24529.f_1873[iVar24], bVar55, 0, 0, 0);
									func_292((fVar34 + fVar42), fVar35, "NUMBER", Global_24529.f_4726[iVar21], Global_24529.f_4855[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_171(Global_24529.f_4984[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_24529.f_6332)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_24529.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_24529.f_5686[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_24529.f_9086[((iVar9 * Global_24529.f_5829) + iVar8)] = fVar42;
											Global_24529.f_9168[((iVar9 * Global_24529.f_5829) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_24529.f_9086[((iVar9 * Global_24529.f_5829) + iVar8)];
											fVar44 = Global_24529.f_9168[((iVar9 * Global_24529.f_5829) + iVar8)];
										}
										if (bVar54)
										{
											if (func_171(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_24529.f_5686[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_171(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_301(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														func_307(func_178(27), func_175(27, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
											if (func_171(28, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_171(28, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_301(28, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														func_307(func_178(28), func_175(28, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_171(Global_24529.f_4984[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_301(Global_24529.f_4984[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												func_307(func_178(Global_24529.f_4984[iVar22]), func_175(Global_24529.f_4984[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_291(Global_24529.f_4984[iVar22])), (fVar37 * func_291(Global_24529.f_4984[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_24529.f_5659[iVar8] == 5)
						{
							if (Global_24529.f_5671[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_24529.f_5671[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_24529.f_5671[iVar8]);
							if (Global_24529.f_5678[iVar8])
							{
								if (func_171(27, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_24529.f_5671[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_24529.f_8865[iVar9] = iVar6;
						Global_24529.f_6343 = iVar6;
						iVar9++;
						if (Global_24529.f_5959[iVar6])
						{
							iVar13++;
						}
						if (Global_24529.f_6348[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_24529.f_6348[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_24529.f_6331)
					{
						Global_24529.f_6088[iVar6] = 1;
						if (Global_24529.f_5830[iVar6])
						{
							if (bVar32)
							{
								Global_24529.f_6337 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_24529.f_6337 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_24529.f_6331)
			{
				Global_24529.f_6333 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_24529.f_6336 = iVar11;
				Global_24529.f_6334 = iVar10;
				Global_24529.f_6331 = 1;
			}
		}
		if (!Global_24529.f_6332)
		{
			Global_24529.f_6335 = iVar9;
			Global_24529.f_6332 = 1;
		}
		iVar5++;
	}
	Global_24529.f_6479 = fVar51;
	Global_24529.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_24529.f_6479);
	if (!Global_24529.f_9209)
	{
		func_284(0);
	}
	Global_24529.f_9209 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_200(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_284(int iParam0)
{
	if (func_290())
	{
		return;
	}
	if (!Global_21610.f_1 == 1)
	{
		if (func_289(0))
		{
			func_285(iParam0);
		}
		MISC::SET_BIT(&Global_9464, 2);
	}
}

void func_285(int iParam0)
{
	if (func_290())
	{
		return;
	}
	if (Global_21842)
	{
		if (func_288())
		{
			func_287(1, 1);
		}
		else
		{
			func_287(0, 0);
		}
	}
	if (Global_21610.f_1 == 10 || Global_21610.f_1 == 9)
	{
		MISC::SET_BIT(&Global_9464, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22983 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_9463, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9463, 30);
	}
	if (!func_286())
	{
		Global_21610.f_1 = 3;
	}
}

int func_286()
{
	if (Global_21610.f_1 == 1 || Global_21610.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_287(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_289(0))
		{
			Global_21842 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21547);
			}
			Global_21538 = { Global_21556[Global_21555 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21538);
		}
	}
	else if (Global_21842 == 1)
	{
		Global_21842 = 0;
		Global_21538 = { Global_21563[Global_21555 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21547);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21538);
		}
	}
}

bool func_288()
{
	return BitTest(Global_1964145, 5);
}

int func_289(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_21610.f_1 > 3)
		{
			if (BitTest(Global_9463, 14))
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
	if (Global_21610.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_290()
{
	return BitTest(Global_1964145, 19);
}

float func_291(int iParam0)
{
	switch (iParam0)
	{
		case 36:
		case 35:
		case 52:
		case 51:
		case 43:
		case 37:
		case 38:
		case 40:
		case 41:
		case 39:
		case 58:
		case 48:
		case 49:
		case 50:
		case 55:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_292(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_186(fParam0), fParam1, 0);
}

void func_293(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_186(fParam0), fParam1, iParam4);
}

bool func_294()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_295(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_24529.f_9237[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_24529.f_9237[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_296(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_282(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_309(bParam4, bParam8))
	{
		return;
	}
	if (func_299())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_297(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return;
		}
	}
	if (Global_24529.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_24529.f_5326)
			{
				if (Global_24529.f_5625[iVar1] != 402)
				{
					StringCopy(&(Global_24529.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, Global_24529.f_5625[iVar1], true), 64);
				}
				else if (Global_24529.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_24529.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, Global_24529.f_5640[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_24529.f_5327 = 0;
		}
		if (!Global_24529.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_24529.f_5684 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_24529.f_5326)
			{
				if (MISC::GET_HASH_KEY(&(Global_24529.f_5553[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_205(&(Global_24529.f_5328[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_24529.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_205(&(Global_24529.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_24529.f_5610[bVar1] == -1)
					{
						func_204(&(Global_24529.f_5553[bVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_24529.f_5610[bVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_24529.f_5553[bVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_24529.f_5625[bVar1] != 402 && BitTest(Global_24529.f_5655, bVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_24529.f_5625[bVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(402);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				bVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4521195.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_24529.f_5326);
				func_205(&Global_4521195);
				if (Global_4521195.f_20 == -1)
				{
					func_204(&(Global_4521195.f_16));
				}
				else
				{
					iVar4 = Global_24529.f_5610[bVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4521195.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_24529.f_5685)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_24529.f_5327 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_24529.f_5326)
		{
			if (Global_24529.f_5610[bVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_24529.f_5553[bVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			bVar1++;
		}
		if (Global_4521195.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24529.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4521195.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_24529.f_9244)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_24529.f_9244 = 1;
			}
		}
		else if (Global_24529.f_9244)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_24529.f_9244 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_24529.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_24529.f_6263[iVar0 /*10*/], Global_24529.f_5656, Global_24529.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_24529.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_297(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_135(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_298(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845250[iParam0 /*880*/].f_198 == 8;
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

int func_298(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_137();
	}
	if (Global_1575070[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574921[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_299()
{
	struct<3> Var0;
	
	if (Global_21610.f_1 > 3)
	{
		return 1;
	}
	if (func_300())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_21555 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
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

int func_300()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_301(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 29:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 16:
		case 4:
		case 17:
		case 27:
		case 28:
		case 36:
		case 35:
		case 52:
		case 51:
		case 43:
		case 37:
		case 38:
		case 58:
		case 40:
		case 41:
		case 39:
		case 45:
		case 44:
		case 48:
		case 49:
		case 50:
		case 57:
		case 61:
		case 62:
		case 63:
		case 64:
		case 55:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 59:
			*iParam5 = 100;
			break;
		
		case 67:
			*iParam5 = 100;
			break;
		
		case 60:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
		
		case 7:
			HUD::GET_HUD_COLOUR(6, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_302(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	func_185(fParam0, ((Global_24526 + Global_24528) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_303(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_186(fParam0), fParam1, 0);
}

float func_304(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_306();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return func_180(1);
}

void func_305(float fParam0, float fParam1, int iParam2)
{
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_186(fParam0), fParam1, iParam2);
}

void func_306()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_24529.f_9219)
	{
		iVar0 = Global_24529.f_9215;
		iVar1 = Global_24529.f_9216;
		iVar2 = Global_24529.f_9217;
		iVar3 = Global_24529.f_9218;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	func_185((Global_24526 + 0.0046875f), ((Global_24526 + Global_24528) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_307(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_186(fParam2), fParam3, func_186(fParam4), fParam5, fParam6, iParam7, iParam8, iParam9, iParam10, bParam11, iParam12);
}

void func_308(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT(func_186((fParam0 + (fParam2 * 0.5f))), (fParam1 + (fParam3 * 0.5f)), func_186(fParam2), fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

int func_309(bool bParam0, bool bParam1)
{
	if (Global_2673271.f_1762.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_311(8, -1) && func_310() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_80541) || Global_24529.f_9243) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_102481.f_1514)
	{
		return 0;
	}
	return 1;
}

int func_310()
{
	return Global_1575018;
}

var func_311(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1677542.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1677542.f_1048, iParam0);
}

void func_312(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, true);
	if (Global_24529.f_5326 >= 14)
	{
		StringCopy(&Global_4521195, sVar0, 64);
		StringCopy(&(Global_4521195.f_16), sParam1, 16);
		Global_4521195.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_24529.f_5655), Global_24529.f_5326);
	StringCopy(&(Global_24529.f_5328[Global_24529.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_24529.f_5553[Global_24529.f_5326 /*4*/]), sParam1, 16);
	Global_24529.f_5610[Global_24529.f_5326] = iParam2;
	Global_24529.f_5625[Global_24529.f_5326] = iParam0;
	Global_24529.f_5640[Global_24529.f_5326] = 32;
	Global_24529.f_5326++;
}

void func_313(char* sParam0)
{
	if (Global_24529.f_5322 >= 3 || Global_24529.f_5319 >= 4)
	{
		return;
	}
	Global_24529.f_5253[Global_24529.f_5319] = 1;
	Global_24529.f_5319++;
	StringCopy(&(Global_24529.f_5270[Global_24529.f_5322 /*16*/]), sParam0, 64);
	Global_24529.f_5322++;
}

void func_314(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_24529.f_5241), sParam0, 24);
	Global_24529.f_5319 = 0;
	Global_24529.f_5320 = 0;
	Global_24529.f_5321 = 0;
	Global_24529.f_5322 = 0;
	Global_24529.f_5323 = iParam1;
	Global_24529.f_5324 = MISC::GET_GAME_TIMER();
	Global_24529.f_5325 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_24529.f_5253[iVar0] = 0;
		iVar0++;
	}
}

void func_315(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_24529.f_6342 = iParam0;
	Global_24529.f_6477 = iParam2;
	if (Global_24529.f_6342 < Global_24529.f_6341)
	{
		Global_24529.f_6341 = Global_24529.f_6342;
	}
	else if ((Global_24529.f_6332 && Global_24529.f_6342 > Global_24529.f_6343) || (!Global_24529.f_6332 && Global_24529.f_6342 >= (Global_24529.f_6341 + Global_24529.f_5828)))
	{
		iVar0 = Global_24529.f_6341;
		while (iVar0 <= Global_24529.f_6342)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_24529.f_5692[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_24529.f_5828 && Global_24529.f_6341 < 128)
		{
			Global_24529.f_6341++;
			iVar1 = 0;
			iVar0 = Global_24529.f_6341;
			while (iVar0 <= Global_24529.f_6342)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_24529.f_5692[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_24529.f_6331 = 0;
	Global_24529.f_6332 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_24529.f_5241), "", 24);
		StringCopy(&(Global_4521195.f_21), "", 16);
	}
}

void func_316(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_24529.f_1), sParam0, 16);
	Global_24529.f_74 = 0;
	Global_24529.f_75 = 0;
	Global_24529.f_76 = 0;
	Global_24529.f_77 = 0;
	Global_24529.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_24529.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_317(int iParam0, char* sParam1, char* sParam2)
{
	Global_24529 = iParam0;
	func_318(30, sParam1, sParam2);
}

void func_318(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_24529.f_6623[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_24529.f_7744[iParam0 /*16*/]), sParam2, 64);
}

void func_319(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_24529.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_24529.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_2697529[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_24529.f_4469[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_24529.f_4726[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_24529.f_4984[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_24529.f_5692[iVar0] = 0;
		Global_24529.f_5830[iVar0] = 0;
		Global_24529.f_5959[iVar0] = 0;
		Global_24529.f_6482[iVar0] = 0f;
		Global_24529.f_6088[iVar0] = 0;
		Global_24529.f_6348[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_24529.f_5659[iVar0] = 0;
		Global_24529.f_5671[iVar0] = 0f;
		Global_24529.f_5665[iVar0] = -1f;
		Global_24529.f_5678[iVar0] = 0;
		Global_24529.f_5686[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_24529.f_5553[iVar0 /*4*/]), "", 16);
		Global_24529.f_5610[iVar0] = -1;
		Global_24529.f_5625[iVar0] = 402;
		Global_24529.f_5640[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		StringCopy(&(Global_24529.f_6623[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_24529.f_7744[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_24529.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4521195.f_16), "", 16);
	Global_4521195.f_20 = -1;
	Global_24529 = 0;
	Global_24529.f_5821 = 0;
	Global_24529.f_5822 = 0;
	Global_24529.f_5823 = 0;
	Global_24529.f_5825 = 0;
	Global_24529.f_5826 = 0;
	Global_24529.f_5827 = 0;
	Global_24529.f_5824 = 0;
	Global_24529.f_6477 = 0;
	Global_24529.f_6617 = 0;
	Global_24529.f_6342 = 0;
	Global_24529.f_6341 = 0;
	Global_24529.f_6343 = 0;
	StringCopy(&(Global_24529.f_5241), "", 24);
	Global_24529.f_5319 = 0;
	Global_24529.f_5320 = 0;
	Global_24529.f_5321 = 0;
	Global_24529.f_5322 = 0;
	Global_24529.f_5323 = 0;
	Global_24529.f_5324 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_24529.f_5253[iVar0] = 0;
		iVar0++;
	}
	Global_24529.f_5325 = 0;
	StringCopy(&(Global_4521195.f_21), "", 16);
	Global_4521195.f_61 = 0;
	Global_4521195.f_62 = 0;
	Global_4521195.f_63 = 0;
	Global_4521195.f_64 = 0;
	Global_4521195.f_65 = 0;
	Global_4521195.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4521195.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4521195.f_67 = 0;
	StringCopy(&(Global_24529.f_1), "", 16);
	Global_24529.f_5677 = 0f;
	Global_24529.f_74 = 0;
	Global_24529.f_75 = 0;
	Global_24529.f_76 = 0;
	Global_24529.f_77 = 0;
	Global_24529.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_24529.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_24529.f_6347 = 0;
	Global_24529.f_6346 = 0;
	Global_24529.f_6344 = 0;
	Global_24529.f_6345 = 0;
	Global_24529.f_5326 = 0;
	Global_24529.f_5327 = 0;
	Global_24529.f_5828 = 10;
	Global_24529.f_5829 = 0;
	Global_24529.f_6479 = 0f;
	Global_24529.f_6480 = 0f;
	Global_24529.f_6331 = 0;
	Global_24529.f_6332 = 0;
	Global_24529.f_6333 = 0f;
	Global_24529.f_6334 = 0;
	Global_24529.f_6336 = 0;
	Global_24529.f_6335 = 0;
	Global_24529.f_6337 = 0;
	Global_24529.f_6338 = 0;
	Global_24529.f_6339 = 0;
	Global_24529.f_6340 = 0;
	Global_24529.f_9240 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_24529.f_6611[iVar0] = -1;
		Global_24529.f_6614[iVar0] = -1;
		iVar0++;
	}
	Global_24529.f_5684 = 0f;
	Global_24529.f_5655 = 0;
	Global_24529.f_5685 = 0;
	iVar0 = 0;
	while (iVar0 < Global_24529.f_6618)
	{
		Global_24529.f_6618[iVar0] = 0;
		iVar0++;
	}
	Global_24529.f_9219 = 0;
	Global_24529.f_9214 = 0;
	Global_24529.f_9224 = 0;
	Global_24529.f_9229 = 0;
	Global_24529.f_9234 = 0;
	Global_24529.f_9236 = 0;
	Global_24529.f_9242 = 0;
	Global_24529.f_9245 = func_320(0);
	Global_24526 = 0.05f;
	Global_24527 = 0.05f;
	Global_24528 = 0.225f;
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (!bParam0 && fVar2 < 1.777778f)
	{
		Global_24528 = (0.225f * (1.777778f / fVar2));
	}
}

float func_320(bool bParam0)
{
	float fVar0;
	
	fVar0 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (!bParam0 && fVar0 < 1.777778f)
	{
		fVar0 = 1.777778f;
	}
	return fVar0;
}

bool func_321(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_282(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_24529.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24529.f_6238[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_24529.f_6238[iVar0 /*4*/]), 9);
		Global_24529.f_6231[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_24529.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
	{
		bVar1 = false;
	}
	Global_24529.f_6217[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_24529.f_6224[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_24529.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_322(&(Global_24529.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_322(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_323(int iParam0)
{
	Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 = iParam0;
	Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 = func_409(iParam0);
}

bool func_324()
{
	return Global_4516895 == 1;
}

void func_325(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_335())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_217())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || ((!func_297(PLAYER::PLAYER_ID(), 0) && !func_334()) && !func_333(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2658291[iParam0 /*468*/].f_258 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_330(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_329(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_328();
					func_327();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2658291[iParam0 /*468*/].f_259 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2698347)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2698347 = 0;
				}
				if (Global_2635562.f_2982)
				{
					Global_2635562.f_2982 = 0;
				}
			}
			else
			{
				if (!func_329(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
						}
					}
					if (func_326(Global_4718592.f_192777))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575062)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_326(int iParam0)
{
	return iParam0 == 17;
}

void func_327()
{
	struct<3> Var0;
	
	Global_2673271.f_1101 = 0;
	Global_2673271.f_1102 = 0;
	Global_2673271.f_1103 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2673271.f_1108 = -1;
	Global_2673271.f_1109 = 0;
	Global_2635562.f_2993 = { Var0 };
}

void func_328()
{
	Global_2635562.f_703 = 0;
	Global_2635562.f_3036 = 0;
	Global_2635562.f_516 = 0;
	Global_2635562.f_607 = 0;
	Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_221 = 0;
	Global_2635562.f_2991 = 0;
}

int func_329(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_330(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_332();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), true);
			}
		}
		if (func_297(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_331(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_331(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_332()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), false);
		}
	}
}

int func_333(int iParam0)
{
	if (func_297(iParam0, 0))
	{
		return 1;
	}
	if (func_334())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2658291[iParam0 /*468*/].f_203, 2))
	{
		return 1;
	}
	return 0;
}

bool func_334()
{
	return BitTest(Global_2621446, 3);
}

int func_335()
{
	if (BitTest(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_879, 2) && !Global_2686090.f_2847.f_220 == -1)
	{
		return 1;
	}
	return 0;
}

void func_336()
{
	if (!Global_2673271.f_1023.f_10)
	{
		Global_2673271.f_1023.f_10 = 1;
	}
}

void func_337(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_338(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_45643[iVar0 /*32*/])
		{
			Global_45643[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_338(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_45643[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_339(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_338(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_289(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_45643[iVar0 /*32*/] == 1 && Global_45643[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_45643[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_45643[iVar0 /*32*/].f_5 = 1;
			Global_45643[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_45643[iVar0 /*32*/] == 0)
			{
			}
			if (Global_45643[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_340(int iParam0)
{
	if (!func_135(iParam0))
	{
		return 0;
	}
	return BitTest(Global_1845250[iParam0 /*880*/].f_260.f_37, 26);
}

void func_341(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_337(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_45643[iVar0 /*32*/])
		{
			Global_45643[iVar0 /*32*/] = 1;
			Global_45643[iVar0 /*32*/].f_1 = Global_45844;
			Global_45844++;
			Global_45643[iVar0 /*32*/].f_4 = 0;
			Global_45643[iVar0 /*32*/].f_29 = 0;
			Global_45643[iVar0 /*32*/].f_5 = 0;
			Global_45643[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_45643[iVar0 /*32*/].f_8), sParam2, 16);
			Global_45643[iVar0 /*32*/].f_6 = iParam3;
			Global_45643[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_45643[iVar0 /*32*/].f_7 = 0;
			Global_45643[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_45643[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_45643[iVar0 /*32*/].f_13), sParam4, 64);
				Global_45643[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_45643[iVar0 /*32*/].f_12 = 0;
				Global_45643[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_45643[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_342(int iParam0)
{
	if (func_343(iParam0, 1))
	{
		return Global_1892653[func_248(iParam0) /*615*/].f_10.f_433;
	}
	return -1;
}

int func_343(int iParam0, bool bParam1)
{
	if (!func_135(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_344(iParam0))
		{
			return 0;
		}
	}
	return func_135(Global_1892653[iParam0 /*615*/].f_10);
}

int func_344(int iParam0)
{
	if (func_135(iParam0))
	{
		if (func_135(Global_1892653[iParam0 /*615*/].f_10))
		{
			return Global_1892653[iParam0 /*615*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_345()
{
	if (((((((((func_361("TCP_USED") || func_361("CAS_MG_CBAN")) || func_361("CAS_MG_CTIME")) || func_348("CAS_MG_MEMB2", func_349(1))) || func_361("CAS_MG_SUITE2")) || func_361("CAS_MG_NOCHIPS3")) || func_361("CAS_MG_LOWCHIPS3")) || func_361("CAS_MG_NOCHIPS7")) || func_361("CAS_MG_LOWCHIPS7")) || func_361("TCP_NA"))
	{
		return 1;
	}
	return 0;
}

void func_346()
{
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_349(0), false, true, false, -1, 0))
	{
		func_244("MAITRD_M_D0E", -1);
	}
	else if (func_350(PLAYER::PLAYER_ID()))
	{
	}
	else if (BitTest(Global_1950198.f_5, 31))
	{
	}
	else if (Global_4516895 != 0)
	{
	}
	else
	{
		MISC::SET_BIT(&(Global_1950198.f_5), 30);
	}
}

void func_347(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_348(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_349(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_350(int iParam0)
{
	if (iParam0 == func_439())
	{
		return 0;
	}
	return BitTest(Global_1845250[iParam0 /*880*/].f_260.f_415.f_1, 18);
}

bool func_351()
{
	return BitTest(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_260.f_415.f_1, 18);
}

int func_352()
{
	return Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10;
}

int func_353(bool bParam0)
{
	return func_343(PLAYER::PLAYER_ID(), bParam0);
}

int func_354(int iParam0)
{
	if (iParam0 != func_439())
	{
		return Global_1845250[iParam0 /*880*/].f_260.f_415 != 0;
	}
	return 0;
}

int func_355()
{
	if (func_358() <= 0)
	{
		return 0;
	}
	if (func_357() <= 0)
	{
		return 1;
	}
	if (func_356())
	{
		return 2;
	}
	return 3;
}

bool func_356()
{
	return Global_1971542 != 0;
}

int func_357()
{
	return (Global_262145.f_26827 + func_111());
}

int func_358()
{
	return (Global_262145.f_26828 - func_111());
}

bool func_359()
{
	return func_355() != 3;
}

void func_360(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

bool func_361(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_362(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!MONEY::NETWORK_CASINO_CAN_BET(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_363()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

int func_364()
{
	if (Global_4502481.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_365()
{
	if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 != -1)
	{
		Local_1060.f_2 = 0;
		Local_1060.f_3 = 0;
		Local_1060.f_4 = 0;
		Local_1060.f_6 = 0;
		Local_1060.f_24 = 0;
		Local_771[PLAYER::PLAYER_ID() /*9*/] = 0;
		Local_771[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
		Local_771[PLAYER::PLAYER_ID() /*9*/].f_3 = 0;
		Local_771[PLAYER::PLAYER_ID() /*9*/].f_5 = 0;
		Local_771[PLAYER::PLAYER_ID() /*9*/].f_4 = 0;
		Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 = -1;
		Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 = -1;
	}
}

bool func_366()
{
	return Global_2733002.f_5833;
}

int func_367()
{
	if (((func_368() != -1 && func_368() != 28) && func_368() != 17) && func_368() != 12)
	{
		return 1;
	}
	return 0;
}

int func_368()
{
	return Global_1057441;
}

bool func_369()
{
	return BitTest(Global_2685150.f_2, 11);
}

bool func_370()
{
	return Global_2685150.f_693;
}

int func_371(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_373(iParam0);
	iVar1 = func_372(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_45880[iVar1 /*5*/].f_3;
}

int func_372(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_45880[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_373(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_45880[iVar0 /*5*/].f_1)
		{
			return Global_45880[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_374()
{
	int iVar0;
	
	if (func_343(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_352();
		if (func_62(iVar0, 1, 1) && BitTest(Global_1845250[iVar0 /*880*/].f_260.f_415.f_3, 6))
		{
			return 1;
		}
		if ((func_377(PLAYER::PLAYER_ID(), 0) && func_375(PLAYER::PLAYER_ID())) || func_435(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_375(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_376(iParam0, 9);
	}
	return 0;
}

var func_376(int iParam0, int iParam1)
{
	return BitTest(Global_1892653[iParam0 /*615*/].f_10.f_4, iParam1);
}

int func_377(int iParam0, int iParam1)
{
	if (func_135(iParam0))
	{
		if (Global_1892653[iParam0 /*615*/].f_10.f_34 != -1 || (iParam1 && Global_1892653[iParam0 /*615*/].f_10.f_33 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_378()
{
	if (func_445(PLAYER::PLAYER_ID()) && func_440() != func_439())
	{
		if ((BitTest(Global_2658291[func_440() /*468*/].f_325.f_4, 0) || BitTest(Global_1950198.f_6, 10)) || Global_2658291[func_440() /*468*/].f_459 != Global_1971521)
		{
			return 0;
		}
	}
	return 1;
}

bool func_379(int iParam0, struct<3> Param1, float fParam4)
{
	return func_380(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_HEADING(iParam0), Param1, fParam4);
}

bool func_380(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(0f, 0f, 0f, fParam3, 0f, 1f, 0f) };
	fVar3 = func_382(func_383(Var0), func_383(Param4 - Param0));
	if (fVar3 >= 1f || fVar3 <= -1f)
	{
	}
	func_381(&fVar3, -1f, 1f);
	if (fVar3 >= 1f || fVar3 <= -1f)
	{
	}
	return MISC::ACOS(fVar3) <= fParam7;
}

void func_381(float fParam0, float fParam1, float fParam2)
{
	if (*fParam0 < fParam1)
	{
		*fParam0 = fParam1;
	}
	else if (*fParam0 > fParam2)
	{
		*fParam0 = fParam2;
	}
}

float func_382(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_383(struct<3> Param0)
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

Vector3 func_384(int iParam0)
{
	if (Local_1060.f_28 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 966.9982f, 31.2594f, 116.2281f;
			
			case 1:
				return 966.8203f, 31.9305f, 116.2222f;
			
			case 2:
				return 967.2217f, 32.4899f, 116.2216f;
			
			case 3:
				return 967.8962f, 32.6604f, 116.218f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1142.798f, 263.5501f, -51.7869f;
			
			case 1:
				return 1142.82f, 264.2595f, -51.8004f;
			
			case 2:
				return 1143.339f, 264.7519f, -51.8289f;
			
			case 3:
				return 1144.052f, 264.7396f, -51.7913f;
			
			case 4:
				return 1146.849f, 261.9344f, -51.8167f;
			
			case 5:
				return 1146.865f, 261.2238f, -51.8003f;
			
			case 6:
				return 1146.325f, 260.7546f, -51.812f;
			
			case 7:
				return 1145.63f, 260.7765f, -51.7979f;
			
			case 8:
				return 1134.411f, 266.1568f, -50.9898f;
			
			case 9:
				return 1133.708f, 266.1863f, -50.9883f;
			
			case 10:
				return 1133.242f, 266.7186f, -50.9969f;
			
			case 11:
				return 1133.261f, 267.4263f, -50.9812f;
			
			case 12:
				return 1149.42f, 251.1891f, -50.9655f;
			
			case 13:
				return 1148.727f, 251.1957f, -50.9855f;
			
			case 14:
				return 1148.236f, 251.7239f, -51.0083f;
			
			case 15:
				return 1148.262f, 252.4149f, -51.0019f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_385(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5), Param1) <= (fParam4 * fParam4);
}

Vector3 func_386(int iParam0)
{
	int iVar0;
	
	if (Local_1060.f_28 == 1)
	{
		if (func_440() != func_439())
		{
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_409(iParam0)), 1f, func_254(Global_2658291[func_440() /*468*/].f_459), false, false, false);
		}
	}
	else if (func_409(iParam0) == 0 || func_409(iParam0) == 1)
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_409(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01"), false, false, false);
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(func_409(iParam0)), 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 1:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 2:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 3:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 4:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 5:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 6:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 7:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 8:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 9:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 10:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 11:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			
			case 12:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_04"));
			
			case 13:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_03"));
			
			case 14:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_02"));
			
			case 15:
				return ENTITY::GET_ENTITY_BONE_POSTION(iVar0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_387(int iParam0)
{
	return Global_102481.f_416 == iParam0;
}

void func_388(int iParam0)
{
	Local_1060.f_800 = iParam0;
}

void func_389(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_249(&(Local_771[iParam0 /*9*/]), 0);
	Local_771[iParam0 /*9*/].f_7.f_1 = -1;
}

int func_390()
{
	int iVar0;
	
	if (Local_1060.f_28 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1060.f_36))
		{
			if (func_440() != func_439())
			{
				iVar0 = func_254(Global_2658291[func_440() /*468*/].f_459);
				STREAMING::REQUEST_MODEL(iVar0);
				if (!STREAMING::HAS_MODEL_LOADED(iVar0))
				{
					return 0;
				}
				Local_1060.f_36 = OBJECT::CREATE_OBJECT(iVar0, func_76(0), false, false, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1060.f_36, func_76(0), false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_1060.f_36, func_75(0));
				OBJECT::SET_OBJECT_TINT_INDEX(Local_1060.f_36, func_391(func_440()));
				ENTITY::FREEZE_ENTITY_POSITION(Local_1060.f_36, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_391(int iParam0)
{
	if (func_394(iParam0))
	{
		return 1;
	}
	else if (func_393(iParam0))
	{
		return 2;
	}
	else if (func_392(iParam0))
	{
		return 3;
	}
	return 1;
}

int func_392(int iParam0)
{
	if (iParam0 != func_439())
	{
		return BitTest(Global_1845250[iParam0 /*880*/].f_260.f_415.f_1, 21);
	}
	return 0;
}

int func_393(int iParam0)
{
	if (iParam0 != func_439())
	{
		return BitTest(Global_1845250[iParam0 /*880*/].f_260.f_415.f_1, 20);
	}
	return 0;
}

int func_394(int iParam0)
{
	if (iParam0 != func_439())
	{
		return BitTest(Global_1845250[iParam0 /*880*/].f_260.f_415.f_1, 19);
	}
	return 0;
}

void func_395(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_396()
{
	if (Global_2673271.f_1023.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_397(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			if ((func_400(PLAYER::PLAYER_ID(), 1) || func_400(PLAYER::PLAYER_ID(), 2)) || func_399())
			{
				func_249(uParam0, 3);
			}
			break;
		
		case 2:
			if ((func_400(PLAYER::PLAYER_ID(), 1) || func_400(PLAYER::PLAYER_ID(), 2)) || func_399())
			{
				func_249(uParam0, 3);
			}
			break;
		
		case 3:
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_398())
			{
				func_249(uParam0, 8);
			}
			break;
		
		case 8:
			break;
	}
}

int func_398()
{
	if ((((func_400(PLAYER::PLAYER_ID(), 4) || func_400(PLAYER::PLAYER_ID(), 5)) || func_400(PLAYER::PLAYER_ID(), 6)) || func_400(PLAYER::PLAYER_ID(), 7)) || func_399())
	{
		return 1;
	}
	return 0;
}

int func_399()
{
	if (func_71(&(Local_1060.f_796), 3500, 0))
	{
		func_69(&(Local_1060.f_796));
		return 1;
	}
	return 0;
}

int func_400(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return BitTest(Local_138.f_600[iParam0], iVar0);
}

void func_401(int iParam0, int iParam1)
{
	Global_24390.f_9 = iParam0;
	Global_24390.f_10 = iParam1;
}

void func_402(bool bParam0)
{
	if (bParam0)
	{
		func_403(1);
		func_285(1);
	}
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::ENABLE_ALL_CONTROL_ACTIONS(1);
		PAD::DISABLE_CONTROL_ACTION(2, 200, true);
		PAD::DISABLE_CONTROL_ACTION(2, 199, true);
		PAD::SET_INPUT_EXCLUSIVE(0, 200);
		PAD::SET_INPUT_EXCLUSIVE(2, 200);
		PAD::SET_INPUT_EXCLUSIVE(0, 199);
		PAD::SET_INPUT_EXCLUSIVE(2, 199);
		PAD::SET_INPUT_EXCLUSIVE(0, 201);
		PAD::SET_INPUT_EXCLUSIVE(0, 202);
		PAD::SET_INPUT_EXCLUSIVE(0, 187);
	}
}

void func_403(bool bParam0)
{
	if (bParam0)
	{
		if (func_369())
		{
			Global_2685150.f_41 = 1;
		}
	}
	else
	{
		Global_2685150.f_41 = 0;
	}
}

void func_404(bool bParam0)
{
	char* sVar0;
	
	if (Local_1060.f_800 > 2 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
	{
		if (((((!func_408() && !func_407()) && !func_406()) && !func_405()) && !func_86(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			func_325(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_279();
	}
	if (Local_1060.f_800 > 2)
	{
		func_279();
	}
	if (BitTest(Local_1060.f_22, 0) || BitTest(Local_1060.f_22, 3))
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_409(Local_1060.f_20) == 2 || func_409(Local_1060.f_20) == 3) || func_445(PLAYER::PLAYER_ID()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		func_280(1, -1);
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
		iLocal_1966 = 1;
		Local_1060.f_22 = 0;
	}
	if (CAM::DOES_CAM_EXIST(Local_1060.f_15))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(Local_1060.f_15, false);
		bLocal_1967 = false;
	}
	if (Local_1060.f_33 != -1)
	{
		func_337(&(Local_1060.f_33));
		Local_1060.f_33 = -1;
	}
	if (bParam0)
	{
		if (BitTest(Local_1060.f_24, 4) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_92(), "cards_idle", 3))
		{
			Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), func_253(Local_771[PLAYER::PLAYER_ID() /*9*/].f_1), 2, true, false, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_92(), "cards_fold", 2f, -2f, 13, 16, 1000f, 0);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 0, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_fold_card_a", 1000f, -1000f, 13);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 1, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_fold_card_b", 1000f, -1000f, 13);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_138.f_68[func_41(Local_771[PLAYER::PLAYER_ID() /*9*/].f_2, 2, (Local_771[PLAYER::PLAYER_ID() /*9*/].f_1 - Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 * 4))]), Local_1060.f_26, func_92(), "cards_fold_card_c", 1000f, -1000f, 13);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
			Local_1060.f_7 = 1;
		}
		else
		{
			Local_1060.f_26 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_386(Local_1060.f_20), func_253(Local_1060.f_20), 2, false, false, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_1060.f_26, func_252(), func_93(Local_1060.f_20), 2f, -2f, 13, 16, 1000f, 0);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_1060.f_26);
		}
	}
	Local_1060.f_17 = 0;
	Local_1060.f_25 = 0;
	Local_1060.f_24 = 0;
	Local_1060.f_31 = 0;
	Local_771[PLAYER::PLAYER_ID() /*9*/].f_6 = 0;
	Local_1060.f_1 = 0;
	Local_1060.f_2 = 0;
	Local_1060.f_3 = 0;
	Local_1060.f_4 = 0;
	Local_1060.f_6 = 0;
	Local_1060.f_16 = 0;
	if (!bParam0)
	{
		func_365();
	}
	Local_1948.f_4 = func_427();
	Local_1948.f_5 = func_220(&uLocal_1923, 0, 0);
	if (Local_1060.f_800 > 2)
	{
		if (Global_262145.f_26478)
		{
			STATS::PLAYSTATS_CASINO_THREE_CARD_POKER_LIGHT(&Local_1948);
		}
	}
	if (!bParam0)
	{
		MISC::CLEAR_BIT(&(Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_4), 3);
	}
	if (bParam0 || Local_1060.f_800 > 2)
	{
		func_272();
	}
	func_388(10);
	func_167(0);
}

int func_405()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_406()
{
	return Global_1575090;
}

int func_407()
{
	if (func_218() == 3 || func_218() == 2)
	{
		return 1;
	}
	return 0;
}

int func_408()
{
	if (func_218() == 1 || func_218() == 4)
	{
		return 1;
	}
	return 0;
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		
		case 8:
		case 9:
		case 10:
		case 11:
			return 2;
		
		case 12:
		case 13:
		case 14:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

void func_410()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_1060.f_28)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iVar0]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_PED(Local_138.f_50[iVar0]);
			if (func_412(iVar1))
			{
				if (func_411(iVar0))
				{
					AUDIO::BLOCK_ALL_SPEECH_FROM_PED(iVar1, false, true);
				}
				else
				{
					AUDIO::BLOCK_ALL_SPEECH_FROM_PED(iVar1, true, false);
				}
			}
		}
		iVar0++;
	}
}

int func_411(int iParam0)
{
	if (BitTest(Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_4, 5) || BitTest(Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_4, 2))
	{
		return 0;
	}
	if (BitTest(Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_325.f_4, 3))
	{
		if (Local_771[PLAYER::PLAYER_ID() /*9*/].f_2 != iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_412(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_413()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_1060.f_28)
	{
		if (Global_2709979 != iVar0 && (Global_2709979 != -1 || func_445(PLAYER::PLAYER_ID())))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1060.f_37[iVar0]))
			{
				func_416(iVar0);
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_138.f_50[iVar0]) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_138.f_50[iVar0])))
			{
				if (!iLocal_1978[iVar0])
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iVar0]), func_45(), func_44(iVar0), 3))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iVar0]), 1691374422))
						{
							iLocal_1983[iVar0] = 1;
						}
					}
					else
					{
						iLocal_1983[iVar0] = 0;
					}
					if (((iLocal_1983[iVar0] || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iVar0]), func_45(), func_43(iVar0), 3)) || Local_138.f_576[iVar0] == 6) || Local_138.f_576[iVar0] == 7)
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_1060.f_37[iVar0]))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_1060.f_37[iVar0], false);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1060.f_37[iVar0], NETWORK::NET_TO_PED(Local_138.f_50[iVar0]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(Local_138.f_50[iVar0]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
						}
						iLocal_1978[iVar0] = 1;
					}
				}
				else if ((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iVar0]), func_45(), func_31(iVar0), 3) && ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(Local_138.f_50[iVar0]), 152918166)) || ((Local_138.f_576[iVar0] < 5 && !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iVar0]), func_45(), func_44(iVar0), 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(Local_138.f_50[iVar0]), func_45(), func_43(iVar0), 3)))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_1060.f_37[iVar0]))
					{
						ENTITY::DETACH_ENTITY(Local_1060.f_37[iVar0], true, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1060.f_37[iVar0], func_415(iVar0), false, false, true);
						ENTITY::SET_ENTITY_ROTATION(Local_1060.f_37[iVar0], func_414(iVar0), 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_1060.f_37[iVar0], true);
					}
					iLocal_1978[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_414(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return Var0;
}

Vector3 func_415(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 2) };
	return Var0;
}

void func_416(int iParam0)
{
	int iVar0;
	
	if (Local_1060.f_5)
	{
		iVar0 = joaat("vw_prop_vw_casino_cards_01");
	}
	else
	{
		iVar0 = joaat("vw_prop_casino_cards_01");
	}
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT(func_45());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_45()))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1060.f_37[iParam0]))
	{
		Local_1060.f_37[iParam0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, func_415(iParam0), false, false, true, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1060.f_37[iParam0], func_415(iParam0), false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_1060.f_37[iParam0], func_414(iParam0), 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_1060.f_37[iParam0], true);
		STREAMING::REMOVE_ANIM_DICT(func_45());
	}
}

void func_417()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	
	if (((func_387(joaat("rm_GamingFloor_02")) || func_387(joaat("rm_GamingFloor_03"))) || func_445(PLAYER::PLAYER_ID())) && !func_426())
	{
		iLocal_1965 = 1;
		if (!bLocal_1964)
		{
			bLocal_1964 = (func_432() && func_425());
		}
	}
	else
	{
		if (iLocal_1965)
		{
			func_433();
			func_423();
			iLocal_1965 = 0;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1060.f_28)
	{
		if (iVar0 != iLocal_1968 && iVar0 != Local_771[PLAYER::PLAYER_ID() /*9*/].f_2)
		{
		}
		else
		{
			bVar1 = false;
			if (func_59(iVar0, Local_1060.f_28))
			{
				bVar1 = true;
			}
			Var3 = { 0f, 0f, func_75(iVar0) };
			iVar6 = 0;
			while (iVar6 < 4)
			{
				iVar7 = Local_138.f_117[(iVar0 * 4 + iVar6)];
				if (iVar7 < 0 || ((!func_387(joaat("rm_GamingFloor_02")) && !func_387(joaat("rm_GamingFloor_03"))) && !func_445(PLAYER::PLAYER_ID())))
				{
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1060.f_42[func_422(iVar0, iVar6, iVar2)]))
						{
							OBJECT::DELETE_OBJECT(&(Local_1060.f_42[func_422(iVar0, iVar6, iVar2)]));
						}
						iVar2++;
					}
				}
				else
				{
					if (Local_771[iVar7 /*9*/].f_3 > 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1060.f_42[func_422(iVar0, iVar6, 0)]))
						{
							if (func_421(Local_771[iVar7 /*9*/].f_3, bVar1) != 0)
							{
								Local_1060.f_42[func_422(iVar0, iVar6, 0)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_421(Local_771[iVar7 /*9*/].f_3, bVar1), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_420(Local_771[iVar7 /*9*/].f_3, 0, iVar6, bVar1, 0)), false, false, true, 0);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1060.f_42[func_422(iVar0, iVar6, 0)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_420(Local_771[iVar7 /*9*/].f_3, 0, iVar6, bVar1, 0)), false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_1060.f_42[func_422(iVar0, iVar6, 0)], Var3 + func_419(Local_771[iVar7 /*9*/].f_4, 0, iVar6, bVar1), 2, true);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(func_418(Local_771[iVar7 /*9*/].f_3)))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_418(Local_771[iVar7 /*9*/].f_3), Local_1060.f_42[func_422(iVar0, iVar6, 0)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ALPHA(Local_1060.f_42[func_422(iVar0, iVar6, 0)]) != 255)
						{
							OBJECT::DELETE_OBJECT(&(Local_1060.f_42[func_422(iVar0, iVar6, 0)]));
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_1060.f_42[func_422(iVar0, iVar6, 0)]))
					{
						if (ENTITY::GET_ENTITY_ALPHA(Local_1060.f_42[func_422(iVar0, iVar6, 0)]) > 0)
						{
							ENTITY::SET_ENTITY_ALPHA(Local_1060.f_42[func_422(iVar0, iVar6, 0)], SYSTEM::FLOOR(func_235(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_1060.f_42[func_422(iVar0, iVar6, 0)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&(Local_1060.f_42[func_422(iVar0, iVar6, 0)]));
						}
					}
					if (Local_771[iVar7 /*9*/].f_5 > 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1060.f_42[func_422(iVar0, iVar6, 1)]))
						{
							if (func_421(Local_771[iVar7 /*9*/].f_5, bVar1) != 0)
							{
								Local_1060.f_42[func_422(iVar0, iVar6, 1)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_421(Local_771[iVar7 /*9*/].f_5, bVar1), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_420(Local_771[iVar7 /*9*/].f_5, 1, iVar6, bVar1, 0)), false, false, true, 0);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1060.f_42[func_422(iVar0, iVar6, 1)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_420(Local_771[iVar7 /*9*/].f_5, 1, iVar6, bVar1, 0)), false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_1060.f_42[func_422(iVar0, iVar6, 1)], Var3 + func_419(Local_771[iVar7 /*9*/].f_4, 1, iVar6, bVar1), 2, true);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(func_418(Local_771[iVar7 /*9*/].f_5)))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_418(Local_771[iVar7 /*9*/].f_5), Local_1060.f_42[func_422(iVar0, iVar6, 1)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ALPHA(Local_1060.f_42[func_422(iVar0, iVar6, 1)]) != 255)
						{
							OBJECT::DELETE_OBJECT(&(Local_1060.f_42[func_422(iVar0, iVar6, 1)]));
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_1060.f_42[func_422(iVar0, iVar6, 1)]))
					{
						if (ENTITY::GET_ENTITY_ALPHA(Local_1060.f_42[func_422(iVar0, iVar6, 1)]) > 0)
						{
							ENTITY::SET_ENTITY_ALPHA(Local_1060.f_42[func_422(iVar0, iVar6, 1)], SYSTEM::FLOOR(func_235(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_1060.f_42[func_422(iVar0, iVar6, 1)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&(Local_1060.f_42[func_422(iVar0, iVar6, 1)]));
						}
					}
					if (Local_771[iVar7 /*9*/].f_4 > 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1060.f_42[func_422(iVar0, iVar6, 2)]))
						{
							if (func_421(Local_771[iVar7 /*9*/].f_4, bVar1) != 0)
							{
								Local_1060.f_42[func_422(iVar0, iVar6, 2)] = OBJECT::CREATE_OBJECT_NO_OFFSET(func_421(Local_771[iVar7 /*9*/].f_4, bVar1), OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_420(Local_771[iVar7 /*9*/].f_4, 2, iVar6, bVar1, 1)), false, false, true, 0);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1060.f_42[func_422(iVar0, iVar6, 2)], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_76(iVar0), Var3.f_2, func_420(Local_771[iVar7 /*9*/].f_4, 2, iVar6, bVar1, 1)), false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_1060.f_42[func_422(iVar0, iVar6, 2)], Var3 + func_419(Local_771[iVar7 /*9*/].f_4, 2, iVar6, bVar1), 2, true);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(func_418(Local_771[iVar7 /*9*/].f_4)))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, func_418(Local_771[iVar7 /*9*/].f_4), Local_1060.f_42[func_422(iVar0, iVar6, 2)], "dlc_vw_table_games_sounds", false, 0);
								}
							}
						}
						else if (ENTITY::GET_ENTITY_ALPHA(Local_1060.f_42[func_422(iVar0, iVar6, 2)]) != 255)
						{
							OBJECT::DELETE_OBJECT(&(Local_1060.f_42[func_422(iVar0, iVar6, 2)]));
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_1060.f_42[func_422(iVar0, iVar6, 2)]))
					{
						if (ENTITY::GET_ENTITY_ALPHA(Local_1060.f_42[func_422(iVar0, iVar6, 2)]) > 0)
						{
							ENTITY::SET_ENTITY_ALPHA(Local_1060.f_42[func_422(iVar0, iVar6, 2)], SYSTEM::FLOOR(func_235(SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(Local_1060.f_42[func_422(iVar0, iVar6, 2)])), 0f, 0.1f, 0)), true);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&(Local_1060.f_42[func_422(iVar0, iVar6, 2)]));
						}
					}
				}
				iVar6++;
			}
			if (!Local_138.f_5[iVar0])
			{
				Local_1060.f_8[iVar0] = 1;
			}
			else
			{
				Local_1060.f_8[iVar0] = 0;
			}
		}
		iVar0++;
	}
	iLocal_1968++;
	if (iLocal_1968 >= Local_1060.f_28)
	{
		iLocal_1968 = 0;
	}
}

char* func_418(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 20:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 30:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 40:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 50:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 60:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 70:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 80:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 90:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 100:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 150:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 200:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 250:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 300:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 350:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 400:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 450:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 500:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1000:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1500:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 3000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 3500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4500:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 5000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 6000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 7000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 8000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 9000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 10000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 15000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 20000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 25000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 30000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 35000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 40000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 45000:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		
		case 50000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		default:
	}
	return "";
}

Vector3 func_419(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 66.96f;
					
					case 1:
						return 0f, 0f, 66.96f;
					
					case 2:
						return 0f, 0f, 64.08f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 21.24f;
					
					case 1:
						return 0f, 0f, 15.48f;
					
					case 2:
						return 0f, 0f, 20.16f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -21.6f;
					
					case 1:
						return 0f, 0f, -25.56f;
					
					case 2:
						return 0f, 0f, -21.96f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -71.64f;
					
					case 1:
						return 0f, 0f, -70.2f;
					
					case 2:
						return 0f, 0f, -68.4f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 68.76f;
							
							case 1:
								return 0f, 0f, 68.76f;
							
							case 2:
								return 0f, 0f, 69.48f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 22.68f;
							
							case 1:
								return 0f, 0f, 21.96f;
							
							case 2:
								return 0f, 0f, 22.68f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.96f;
							
							case 1:
								return 0f, 0f, -23.04f;
							
							case 2:
								return 0f, 0f, -21.6f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -68.04f;
							
							case 1:
								return 0f, 0f, -69.84f;
							
							case 2:
								return 0f, 0f, -69.84f;
							
							default:
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 66.96f;
							
							case 1:
								return 0f, 0f, 66.96f;
							
							case 2:
								return 0f, 0f, 64.08f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 21.24f;
							
							case 1:
								return 0f, 0f, 15.48f;
							
							case 2:
								return 0f, 0f, 20.16f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -21.6f;
							
							case 1:
								return 0f, 0f, -25.56f;
							
							case 2:
								return 0f, 0f, -21.96f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -71.64f;
							
							case 1:
								return 0f, 0f, -70.2f;
							
							case 2:
								return 0f, 0f, -68.4f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_420(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	struct<3> Var1;
	
	if (!bParam3)
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.95f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.59535f, 0.200875f, 0f };
						break;
					
					case 1:
						Var1 = { 0.51655f, 0.2268f, 0f };
						break;
					
					case 2:
						Var1 = { 0.689125f, 0.171575f, 0f };
						break;
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.247825f, -0.123625f, 0f };
						break;
					
					case 1:
						Var1 = { 0.2163f, -0.04745f, 0f };
						break;
					
					case 2:
						Var1 = { 0.2869f, -0.211925f, 0f };
						break;
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.2804f, -0.109775f, 0f };
						break;
					
					case 1:
						Var1 = { -0.2552f, -0.031225f, 0f };
						break;
					
					case 2:
						Var1 = { -0.30935f, -0.205675f, 0f };
						break;
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.606975f, 0.249675f, 0f };
						break;
					
					case 1:
						Var1 = { -0.529875f, 0.281425f, 0f };
						break;
					
					case 2:
						Var1 = { -0.69795f, 0.211525f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.953f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.597825f, 0.20105f, 0f };
								break;
							
							case 1:
								Var1 = { 0.5151f, 0.22775f, 0f };
								break;
							
							case 2:
								Var1 = { 0.686125f, 0.171625f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.248425f, -0.126325f, 0f };
								break;
							
							case 1:
								Var1 = { 0.2144f, -0.04415f, 0f };
								break;
							
							case 2:
								Var1 = { 0.285325f, -0.212f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.281f, -0.111875f, 0f };
								break;
							
							case 1:
								Var1 = { -0.254775f, -0.029175f, 0f };
								break;
							
							case 2:
								Var1 = { -0.308175f, -0.199325f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.61015f, 0.24815f, 0f };
								break;
							
							case 1:
								Var1 = { -0.527375f, 0.283575f, 0f };
								break;
							
							case 2:
								Var1 = { -0.694475f, 0.214225f, 0f };
								break;
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.59535f, 0.200875f, 0f };
								break;
							
							case 1:
								Var1 = { 0.51655f, 0.2268f, 0f };
								break;
							
							case 2:
								Var1 = { 0.689125f, 0.171575f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.247825f, -0.123625f, 0f };
								break;
							
							case 1:
								Var1 = { 0.2163f, -0.04745f, 0f };
								break;
							
							case 2:
								Var1 = { 0.2869f, -0.211925f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.2804f, -0.109775f, 0f };
								break;
							
							case 1:
								Var1 = { -0.2552f, -0.031225f, 0f };
								break;
							
							case 2:
								Var1 = { -0.30935f, -0.205675f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.606975f, 0.249675f, 0f };
								break;
							
							case 1:
								Var1 = { -0.529875f, 0.281425f, 0f };
								break;
							
							case 2:
								Var1 = { -0.69795f, 0.211525f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	if (!bParam4)
	{
		Var1.f_2 = fVar0;
	}
	else
	{
		Var1.f_2 = fVar0;
		switch (iParam0)
		{
			case 10:
			case 50:
			case 100:
			case 500:
			case 1000:
			case 5000:
			case 10000:
				Var1.f_2 = (Var1.f_2 + 0.004f);
				break;
			}
	}
	return Var1;
}

int func_421(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_chip_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_chip_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_plaq_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_plaq_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_plaq_10kdollar_st");
			}
		
		default:
	}
	return 0;
}

int func_422(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 3 * 4 + iParam1 * 3) + iParam2);
}

void func_423()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_424(iVar0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		iVar0++;
	}
}

int func_424(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("vw_prop_chip_10dollar_x1");
		
		case 1:
			return joaat("vw_prop_chip_50dollar_x1");
		
		case 2:
			return joaat("vw_prop_chip_100dollar_x1");
		
		case 3:
			return joaat("vw_prop_chip_500dollar_x1");
		
		case 4:
			return joaat("vw_prop_chip_1kdollar_x1");
		
		case 5:
			return joaat("vw_prop_chip_5kdollar_x1");
		
		case 6:
			return joaat("vw_prop_chip_10kdollar_x1");
		
		case 7:
			return joaat("vw_prop_chip_10dollar_st");
		
		case 8:
			return joaat("vw_prop_chip_50dollar_st");
		
		case 9:
			return joaat("vw_prop_chip_100dollar_st");
		
		case 10:
			return joaat("vw_prop_chip_500dollar_st");
		
		case 11:
			return joaat("vw_prop_chip_1kdollar_st");
		
		case 12:
			return joaat("vw_prop_chip_5kdollar_st");
		
		case 13:
			return joaat("vw_prop_chip_10kdollar_st");
		
		case 14:
			return joaat("vw_prop_plaq_5kdollar_x1");
		
		case 15:
			return joaat("vw_prop_plaq_5kdollar_st");
		
		case 16:
			return joaat("vw_prop_plaq_10kdollar_x1");
		
		case 17:
			return joaat("vw_prop_plaq_10kdollar_st");
		
		default:
	}
	return 0;
}

int func_425()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_424(iVar0);
		STREAMING::REQUEST_MODEL(iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_426()
{
	return BitTest(Global_1950198.f_6, 12);
}

int func_427()
{
	return func_428(8251, -1);
}

int func_428(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 16715)
	{
		iVar0 = func_429(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_429(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_430(uParam1));
}

int func_430(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_137();
		if (iVar1 > -1)
		{
			Global_2741298 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2741298 = 1;
		}
	}
	return iVar0;
}

void func_431()
{
	if (Local_1060.f_28 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1975))
		{
			if (func_440() != func_439())
			{
				iLocal_1975 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_76(0), 1f, func_254(Global_2658291[func_440() /*468*/].f_459), false, false, false);
			}
		}
		else if (func_440() != func_439() && CAM::IS_SCREEN_FADED_OUT())
		{
			if (OBJECT::GET_OBJECT_TINT_INDEX(iLocal_1975) != func_391(func_440()))
			{
				OBJECT::SET_OBJECT_TINT_INDEX(iLocal_1975, func_391(func_440()));
			}
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1976))
		{
			iLocal_1976 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1133.74f, 266.6947f, -52.0409f, 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
		}
		else if (OBJECT::GET_OBJECT_TINT_INDEX(iLocal_1976) != 3)
		{
			OBJECT::SET_OBJECT_TINT_INDEX(iLocal_1976, 3);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1977))
		{
			iLocal_1977 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1148.74f, 251.6947f, -52.0409f, 1f, joaat("vw_prop_casino_3cardpoker_01b"), false, false, false);
		}
		else if (OBJECT::GET_OBJECT_TINT_INDEX(iLocal_1977) != 3)
		{
			OBJECT::SET_OBJECT_TINT_INDEX(iLocal_1977, 3);
		}
	}
}

int func_432()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_40(iVar1, Local_1060.f_5);
		STREAMING::REQUEST_MODEL(iVar2);
		if (!STREAMING::HAS_MODEL_LOADED(iVar2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_433()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_40(iVar1, Local_1060.f_5);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		iVar0++;
	}
}

int func_434()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	return 0;
}

int func_435(int iParam0)
{
	if (func_436(iParam0) != func_439())
	{
		return func_436(iParam0) == func_248(iParam0);
	}
	return 0;
}

int func_436(int iParam0)
{
	return Global_1892653[iParam0 /*615*/].f_10.f_36;
}

int func_437()
{
	return func_438(PLAYER::PLAYER_ID());
}

int func_438(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2658291[iParam0 /*468*/].f_325.f_3, 28, 31);
}

int func_439()
{
	return -1;
}

int func_440()
{
	return func_441(Global_2673271.f_4.f_16);
}

int func_441(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_439())
	{
		return iParam0;
	}
	if (func_443(iParam0) != -1)
	{
		iVar0 = func_442(func_443(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_343(iParam0, 0))
			{
				return func_248(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_439();
		}
		return Global_2658291[iParam0 /*468*/].f_325.f_11;
	}
	return func_439();
}

int func_442(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
		
		case 172:
			return 30;
			break;
		
		case 173:
			return 31;
			break;
		
		case 174:
		case 175:
		case 176:
			return 32;
			break;
		
		case 177:
		case 178:
		case 179:
			return 33;
			break;
	}
	return -1;
}

int func_443(int iParam0)
{
	if (iParam0 != func_439())
	{
		if (func_62(iParam0, 1, 1))
		{
			return Global_2658291[iParam0 /*468*/].f_325.f_8;
		}
		else if (((Global_1575090 || Global_2635562.f_2981) && iParam0 == PLAYER::PLAYER_ID()) && func_62(iParam0, 1, 0))
		{
			return Global_2658291[iParam0 /*468*/].f_325.f_8;
		}
	}
	return -1;
}

int func_444(int iParam0)
{
	if (iParam0 != func_439() && func_62(iParam0, 1, 1))
	{
		return BitTest(Global_2658291[iParam0 /*468*/].f_325, 4);
	}
	return 0;
}

int func_445(int iParam0)
{
	if (iParam0 != func_439())
	{
		if (func_62(iParam0, 1, 1))
		{
			if (Global_2658291[iParam0 /*468*/].f_325.f_8 != -1)
			{
				return func_442(Global_2658291[iParam0 /*468*/].f_325.f_8) == 15;
			}
		}
	}
	return 0;
}

int func_446(int iParam0)
{
	if (iParam0 != func_439())
	{
		if (func_62(iParam0, 1, 1))
		{
			if (Global_2658291[iParam0 /*468*/].f_325.f_8 != -1)
			{
				return func_442(Global_2658291[iParam0 /*468*/].f_325.f_8) == 14;
			}
		}
	}
	return 0;
}

var func_447()
{
	return BitTest(Global_1950198.f_3, 2);
}

void func_448()
{
	if (Local_1060.f_800 > 2)
	{
		if (Global_262145.f_26472)
		{
			STATS::PLAYSTATS_CASINO_THREE_CARD_POKER(&Local_1925);
		}
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_404(0);
	func_433();
	func_423();
	func_451();
	func_450();
	if (ENTITY::DOES_ENTITY_EXIST(Local_1060.f_36))
	{
		OBJECT::DELETE_OBJECT(&(Local_1060.f_36));
	}
	if (Local_1060.f_800 > 0)
	{
		STREAMING::REMOVE_ANIM_DICT(func_45());
		STREAMING::REMOVE_ANIM_DICT(func_78());
		STREAMING::REMOVE_ANIM_DICT(func_92());
		STREAMING::REMOVE_ANIM_DICT(func_252());
	}
	Global_1971519 = 0;
	func_449();
}

void func_449()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_450()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1060.f_37[iVar0]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_1060.f_37[iVar0]))
			{
				ENTITY::DETACH_ENTITY(Local_1060.f_37[iVar0], true, true);
			}
			OBJECT::DELETE_OBJECT(&(Local_1060.f_37[iVar0]));
		}
		iVar0++;
	}
}

void func_451()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 48;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1060.f_42[iVar1]))
		{
			OBJECT::DELETE_OBJECT(&(Local_1060.f_42[iVar1]));
		}
		iVar1++;
	}
}

int func_452()
{
	if (Global_1575062 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_459())
	{
		return 1;
	}
	if (Global_2699567)
	{
		return 1;
	}
	if (func_458())
	{
		return 1;
	}
	if (func_457(159))
	{
		if (!func_456())
		{
			return 1;
		}
	}
	if (func_457(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_453() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_453()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_453()
{
	switch (func_455())
	{
		case 0:
			return func_454();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_454()
{
	switch (Global_2699676)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_455()
{
	return Global_33775;
}

bool func_456()
{
	return Global_2685150.f_700;
}

int func_457(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_458()
{
	return Global_2696964;
}

bool func_459()
{
	return Global_2685150.f_695;
}

void func_460()
{
	int iVar0;
	
	if (Global_1971512)
	{
		Global_1971512 = 0;
	}
	if (func_445(PLAYER::PLAYER_ID()) && func_440() != func_439())
	{
		if (BitTest(Global_2658291[func_440() /*468*/].f_325.f_4, 4))
		{
			Local_1060.f_5 = 1;
		}
		Global_1971521 = Global_2658291[func_440() /*468*/].f_459;
	}
	while (!(Global_2709979 != -1 || func_445(PLAYER::PLAYER_ID())))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_448();
		}
		if (func_452())
		{
			func_448();
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = -1;
	if (func_445(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_464();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, iVar0);
	func_462(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_138, 633, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_771, 289, 0);
	if (func_445(PLAYER::PLAYER_ID()))
	{
		while (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(15))
		{
			SYSTEM::WAIT(0);
		}
		Local_1060.f_28 = 1;
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS(1);
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(15);
	}
	else
	{
		while (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(45))
		{
			SYSTEM::WAIT(0);
		}
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS(3);
		NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(45);
	}
	if (!func_461())
	{
		func_448();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	else
	{
		func_448();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_445(PLAYER::PLAYER_ID()))
		{
			Local_138.f_15[0] = MISC::GET_RANDOM_INT_IN_RANGE(0, 14);
		}
		else
		{
			Local_138.f_15[0] = Global_2709997[0];
			Local_138.f_15[1] = Global_2709997[1];
			Local_138.f_15[2] = Global_2709997[2];
			Local_138.f_15[3] = Global_2709997[3];
		}
	}
	Global_1971519 = 1;
}

int func_461()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_459())
		{
			return 0;
		}
		if (func_457(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_462(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_449();
			}
			else
			{
				return 0;
			}
		}
		if (!func_463(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_449();
					}
					else
					{
						return 0;
					}
				}
				if (func_459())
				{
					if (!bParam2)
					{
						func_449();
					}
					else
					{
						return 0;
					}
				}
				if (func_457(157))
				{
					if (!bParam2)
					{
						func_449();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_449();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574668 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_449();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_449();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_463(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575062;
}

int func_464()
{
	var uVar0;
	
	uVar0 = Global_2658291[Global_2673271.f_4.f_16 /*468*/].f_325.f_9;
	return uVar0;
}

