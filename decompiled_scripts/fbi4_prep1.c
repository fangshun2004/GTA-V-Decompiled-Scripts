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
	bool bLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<4> Local_55[10];
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	struct<27> Local_99 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_126 = 0;
	var uLocal_127 = 0;
	struct<11> Local_128[2];
	struct<25> Local_151[21];
	float fLocal_677 = 0f;
	int iLocal_678 = 0;
	bool bLocal_679 = 0;
	bool bLocal_680 = 0;
	bool bLocal_681 = 0;
	bool bLocal_682 = 0;
	int iLocal_683 = 0;
	struct<3> Local_684 = { 0, 0, 0 } ;
	int iLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = -1;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 1000;
	var uLocal_698 = 1000;
	var uLocal_699 = 0;
	int iLocal_700 = 0;
	int iLocal_701 = 0;
	int iLocal_702 = 0;
	int iLocal_703 = 0;
	var uLocal_704 = 0;
	struct<8> Local_705[3];
	var uLocal_730 = 15;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
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
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 15;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	int iLocal_834 = 0;
	char* sLocal_835 = NULL;
	char* sLocal_836 = NULL;
	int iLocal_837 = 0;
	int* iLocal_838 = NULL;
	int* iLocal_839 = NULL;
	int iLocal_840 = 0;
	struct<3> Local_841 = { 0, 0, 0 } ;
	struct<3> Local_844 = { 0, 0, 0 } ;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	bool bLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	struct<14> Local_857 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_871 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_885 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_891 = 0;
	int iLocal_892 = 0;
	int* iLocal_893 = NULL;
	int iLocal_894 = 0;
	char[] cLocal_895[8] = 0;
	var uLocal_896 = 16;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	char[] cLocal_1061[8] = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	int iLocal_1065[3] = { 0, 0, 0 };
	int iLocal_1069 = 0;
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
	fLocal_48 = 80f;
	fLocal_49 = 140f;
	fLocal_50 = 180f;
	iLocal_53 = 3;
	iLocal_98 = 21;
	fLocal_677 = -1f;
	Local_684 = { 0f, 0f, 0f };
	iLocal_687 = -1;
	sLocal_836 = "FBIPRA";
	Local_841 = { 0f, 0f, 0f };
	Local_844 = { 1381.472f, -2072.245f, 50.9981f };
	cLocal_895 = "FIBP1AU";
	iLocal_1069 = -1;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		sLocal_835 = 0;
		func_392();
		func_380();
	}
	func_363();
	if (func_362())
	{
		func_361(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	func_346();
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_TrT", 0);
		if (func_345(PLAYER::PLAYER_PED_ID()))
		{
			func_341();
			func_337();
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
			switch (iLocal_700)
			{
				case 0:
					func_272();
					break;
				
				case 1:
					func_241();
					break;
				
				case 2:
					func_223();
					break;
				
				case 3:
					func_110();
					break;
				
				case 4:
					func_39();
					break;
				
				case 5:
					func_1();
					break;
			}
			if (iLocal_700 != 5)
			{
				if (iLocal_700 >= 0 && !bLocal_45)
				{
				}
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	int iVar0;
	
	switch (iLocal_701)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_38();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (func_37(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck"))
				{
					func_36(iVar0, 2);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_835))
			{
				func_34(sLocal_835);
			}
			else
			{
				func_18(0);
			}
			iLocal_701 = 1;
			break;
		
		case 1:
			if (func_17())
			{
				if (func_16())
				{
					func_11();
				}
				func_2();
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, true, false, false, false);
				func_380();
			}
			break;
	}
}

void func_2()
{
	func_9(&Local_885);
	func_9(&iLocal_892);
	func_9(&iLocal_891);
	func_8(&Local_857);
	func_8(&Local_871);
	func_9(&iLocal_893);
	func_3();
}

void func_3()
{
	func_7(&(Local_128[0 /*11*/].f_4));
	func_7(&(Local_128[1 /*11*/].f_4));
	func_6(&iLocal_126);
	func_5(&(Local_128[0 /*11*/]), 1, 0, 1);
	func_5(&(Local_128[1 /*11*/]), 1, 0, 1);
	func_4(&(Local_151[iLocal_678 /*25*/].f_17), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_97);
	STREAMING::REMOVE_ANIM_DICT("missfbi4prepp1");
	STREAMING::REMOVE_ANIM_SET("missfbi4prepp1_garbageman");
}

void func_4(int* iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*iParam0);
		}
	}
}

void func_5(int* iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			}
			PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_6(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, false);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_7(int* iParam0)
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_8(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		PED::DELETE_PED(iParam0);
	}
}

void func_9(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		if (func_37(*iParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
			{
				if (func_10(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(iParam0);
			}
		}
		else
		{
			if (func_10(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
	}
}

int func_10(int iParam0)
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

void func_11()
{
	func_14(918.8851f, -269.789f, 67.2145f, 325.9081f);
	func_12(917.5291f, -263.8595f, 67.3489f, 188.0605f);
}

void func_12(struct<3> Param0, float fParam3)
{
	func_13(&(Global_108504.f_2890), Param0, fParam3);
}

void func_13(var uParam0, struct<3> Param1, var uParam4)
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam4;
}

void func_14(struct<3> Param0, float fParam3)
{
	if (func_15(Global_80578, 0f, 0f, 0f, 0))
	{
		Global_80578 = { Param0 };
		Global_80581 = fParam3;
	}
}

bool func_15(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_16()
{
	if (Global_102486 == 7)
	{
		return 1;
	}
	return 0;
}

int func_17()
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

void func_18(int iParam0)
{
	int iVar0;
	
	if (Global_114963.f_9094 || func_33(0))
	{
		iVar0 = func_32();
		if (!func_19(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_93213[iVar0 /*5*/].f_1), 5);
		Global_102522 = iParam0;
	}
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_93213[iParam0 /*5*/];
	iVar1 = Global_80608.f_109[iVar0 /*4*/];
	func_23(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_20(&(Global_114963.f_2370.f_539), iVar1);
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

void func_20(var uParam0, int iParam1)
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
			if (!func_22(Global_114963.f_18542[iVar0], &Var2, &fVar5))
			{
				Global_114963.f_18542[iVar0] = 318;
				func_21(&(uParam0->f_2296[iVar0]));
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

void func_21(var uParam0)
{
	*uParam0 = -15;
}

int func_22(int iParam0, var uParam1, float fParam2)
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
			return func_22(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_22(8, uParam1, fParam2);
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

void func_23(int iParam0, bool bParam1)
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

void func_24()
{
	Global_102521 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_80570))
		{
			switch (func_25())
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
			switch (func_25())
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

bool func_25()
{
	func_26();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_26()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_30(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_29(PLAYER::PLAYER_PED_ID());
			if (func_28(iVar0) && (!func_27(14) || Global_113909))
			{
				if (Global_114963.f_2370.f_539.f_4321 != iVar0 && func_28(Global_114963.f_2370.f_539.f_4321))
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

bool func_27(int iParam0)
{
	return Global_44921 == iParam0;
}

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_2349[iParam0 /*29*/];
}

int func_32()
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

int func_33(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_80586, 0);
}

void func_34(char* sParam0)
{
	func_35(sParam0);
	func_18(0);
}

void func_35(char* sParam0)
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

void func_36(int iParam0, int iParam1)
{
	Global_102486.f_22[iParam1] = iParam0;
}

int func_37(int iParam0)
{
	if (func_10(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_38()
{
	func_7(&iLocal_838);
}

void func_39()
{
	bool bVar0;
	
	switch (iLocal_701)
	{
		case 0:
			iLocal_701 = 1;
			break;
		
		case 1:
			if (!func_109(PLAYER::PLAYER_PED_ID(), Local_844, 270f, 1))
			{
				iLocal_701 = 2;
			}
			else if (!func_108("PRA_LEVAREA", 0, 0))
			{
				func_107("PRA_LEVAREA", 60000, 0);
			}
			break;
		
		case 2:
			bVar0 = func_25();
			if (func_108("PRA_LEVAREA", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if (bVar0 == 0)
			{
				if (func_68(&uLocal_704, &cLocal_1061, &uLocal_896))
				{
					func_64();
					func_59();
				}
			}
			else
			{
				func_54(func_58(bVar0), -621899663, -621899663, 5, 0, bVar0, func_57(bVar0), 0, 6000, 6000, -1, 0, 0);
				func_64();
				func_59();
			}
			break;
		
		case 3:
			func_40(1, 1, 1);
			iLocal_701 = 2;
			break;
	}
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_42(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		func_41(500, 0);
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	if (bParam1)
	{
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_42(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, false);
	PLAYER::SET_PLAYER_CONTROL(iVar0, bParam3, 0);
	func_43(0, 1, 0, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	HUD::CLEAR_HELP(true);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_54 != 0 && iLocal_54 != joaat("object")) && iLocal_54 != joaat("gadget_parachute"))
		{
			if (func_10(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_54, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_54, false);
				}
			}
		}
	}
	if (func_345(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
	}
}

void func_43(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_53(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_21649.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_52())
			{
				Global_21649.f_1 = 3;
			}
			Global_23023 = 5;
		}
		func_51(1, bParam3, iParam2, 0);
		Global_65069 = 1;
		Global_77400 = 1;
		Global_80335 = 1;
	}
	else
	{
		func_53(0);
		HUD::THEFEED_RESUME();
		Global_65069 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_51(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_49(PLAYER::PLAYER_ID())) && !func_45(PLAYER::PLAYER_ID(), 0)) && !func_44()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_49(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		Global_80335 = 0;
	}
}

bool func_44()
{
	return BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_36.f_18, 14);
}

bool func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_48(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_46(-1, 0) == 8;
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

int func_46(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
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

int func_47()
{
	return Global_1574928;
}

int func_48(var uParam0)
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

int func_49(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return 1;
	}
	if (func_50())
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

bool func_50()
{
	return BitTest(Global_2621446, 3);
}

int func_51(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && uParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_52()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_53(int iParam0)
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

int func_54(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_33(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == bParam5)
	{
		return 0;
	}
	if (((bParam5 != 144 && bParam5 != 0) && bParam5 != 1) && bParam5 != 2)
	{
		return 0;
	}
	if (Global_114963.f_7697.f_136 < 9)
	{
		Var0.f_0 = uParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_114963.f_7697.f_911 == Var0.f_0)
		{
			Global_114963.f_7697.f_911 = -1;
		}
		Var0.f_3 = func_56(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam8);
		Var0.f_1 = iParam12;
		iVar15 = 0;
		MISC::SET_BIT(&iVar15, bParam5);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		MISC::SET_BIT(&(Var0.f_1), false);
		MISC::SET_BIT(&(Var0.f_1), 13);
		MISC::CLEAR_BIT(&(Var0.f_1), true);
		if (iParam4 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_114963.f_7697[Global_114963.f_7697.f_136 /*15*/] = { Var0 };
		Global_114963.f_7697.f_136++;
		func_55(bParam5);
		return 1;
	}
	return 0;
}

void func_55(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_28(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_114963.f_7697.f_136)
	{
		if (BitTest(Global_114963.f_7697[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_114963.f_7697[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_114963.f_7697[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_114963.f_7697.f_764)
	{
		if (BitTest(Global_114963.f_7697.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_114963.f_7697.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_114963.f_7697.f_919[bParam0] = iVar1;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_57(bool bParam0)
{
	if (bParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_58(bool bParam0)
{
	if (bParam0 == 1)
	{
		return -714760066;
	}
	return -1198055521;
}

void func_59()
{
	HUD::CLEAR_PRINTS();
	func_62();
	func_60(0, 0);
	func_380();
}

void func_60(bool bParam0, int iParam1)
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
		if ((func_33(0) && Global_80584.f_1 == 1) && func_61(Global_80584))
		{
		}
		else
		{
			Global_65063 = 1;
		}
	}
	if (Global_114963.f_9094 || func_33(0))
	{
		iVar0 = func_32();
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

int func_61(int iParam0)
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

void func_62()
{
	Global_21889 = 0;
	func_63();
}

void func_63()
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

void func_64()
{
	func_67(0, -1);
	func_66(0, 318);
	func_65(1, 320);
}

void func_65(bool bParam0, int iParam1)
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

void func_66(int iParam0, int iParam1)
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

void func_67(int iParam0, int iParam1)
{
	Global_65074 = iParam0;
	Global_65075 = iParam1;
}

int func_68(var uParam0, char* sParam1, var uParam2)
{
	switch (*uParam0)
	{
		case 0:
			if (func_105())
			{
				if ((func_104(74) || func_104(75)) && func_103())
				{
					if (func_25() == 0)
					{
						func_102(1);
						func_101(46, 1);
						*uParam0 = 4;
					}
					else
					{
						func_100(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_83(uParam2, func_99(), func_25(), "FBIPRAU", func_98(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { func_82(1) };
							func_101(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (func_25() == 0)
				{
					func_102(0);
					*uParam0 = 4;
				}
				else
				{
					func_100(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_83(uParam2, func_99(), func_25(), "FBIPRAU", func_98(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { func_82(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				func_75();
				*uParam0 = 4;
			}
			break;
		
		case 1:
			if (func_74())
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
				{
					func_73("FBIPRAU", sParam1);
					func_72(1);
					*uParam0 = 3;
				}
			}
			if (func_71())
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_74())
			{
				if (!func_70(0))
				{
					if (!func_104(3) && func_105())
					{
						func_69(50, 0);
					}
					return 1;
				}
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_69(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_114963.f_8622[iParam0] = 1;
	Global_114963.f_8622.f_236[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_70(int iParam0)
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

int func_71()
{
	if (Global_23072 == 1 || Global_24039 == 1)
	{
		return 1;
	}
	return 0;
}

void func_72(bool bParam0)
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(bParam0);
	if (bParam0)
	{
	}
}

void func_73(char* sParam0, char* sParam1)
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		Global_23080 = 1;
		StringCopy(&Global_23087, sParam0, 24);
		StringCopy(&Global_23081, sParam1, 24);
	}
}

int func_74()
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

void func_75()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_80(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (func_79(iVar1, 0))
			{
				return;
			}
		}
		iVar0++;
	}
	func_76(func_77(), 0, func_25(), func_99(), 9, 6000, 6000, -1, 0, -1, 0);
}

int func_76(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_33(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == bParam2)
	{
		return 0;
	}
	if (((bParam2 != 144 && bParam2 != 0) && bParam2 != 1) && bParam2 != 2)
	{
		return 0;
	}
	if (Global_114963.f_7697.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_114963.f_7697.f_911 == Var0.f_0)
		{
			Global_114963.f_7697.f_911 = -1;
		}
		Var0.f_3 = func_56(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		MISC::SET_BIT(&iVar15, bParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		MISC::SET_BIT(&(Var0.f_1), false);
		MISC::CLEAR_BIT(&(Var0.f_1), true);
		if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_114963.f_7697[Global_114963.f_7697.f_136 /*15*/] = { Var0 };
		Global_114963.f_7697.f_136++;
		func_55(bParam2);
		return 1;
	}
	return 0;
}

int func_77()
{
	switch (func_78())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					return -1847734803;
					break;
				
				case 1:
					return -714760066;
					break;
				
				case 2:
					return -1198055521;
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					return 1374342572;
					break;
				
				case 1:
					return 530956160;
					break;
				
				case 2:
					return 240475766;
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					return 580731697;
					break;
				
				case 1:
					return 728176806;
					break;
				
				case 2:
					return 910240872;
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					return 74540475;
					break;
				
				case 1:
					return -1200353264;
					break;
				
				case 2:
					return 801340541;
					break;
			}
			break;
	}
	return -1;
}

int func_78()
{
	return Global_80600;
}

int func_79(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_29(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_80(bVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (BitTest(Global_98314, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_80(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_25())
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return Global_99939[func_81(iParam0)];
}

int func_81(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

struct<4> func_82(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

bool func_83(var uParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	func_97(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_8820 = bParam2;
	Global_23071 = 0;
	Global_23030 = 1;
	Global_23037 = 0;
	Global_23032 = 0;
	Global_24014 = 0;
	Global_24016 = 0;
	Global_24020 = 0;
	Global_23037 = 0;
	Global_23028 = 1;
	Global_23075 = 0;
	Global_23077 = 0;
	if (iParam6 == 1)
	{
		Global_23035 = 1;
	}
	else
	{
		Global_23035 = 0;
	}
	Global_2883585 = 0;
	return func_84(sParam4, iParam5, bParam9);
}

int func_84(char* sParam0, int iParam1, bool bParam2)
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
					func_63();
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
		if (func_96(8, -1))
		{
			return 0;
		}
		Global_23099 = { Global_23093 };
		func_95();
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
				func_94();
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
				if (func_93())
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
			if (func_52())
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
			func_92();
			Global_23033 = bParam2;
		}
		Global_23025 = iParam1;
		StringCopy(&Global_22642, sParam0, 24);
		Global_21889 = 0;
		func_91();
		func_85();
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
		func_63();
	}
	return 0;
}

void func_85()
{
	if (!func_86())
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

int func_86()
{
	if (!Global_262145.f_28486)
	{
		return 0;
	}
	if (!Global_80337)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_90())
	{
		return 0;
	}
	if (func_87(PLAYER::PLAYER_ID()))
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

int func_87(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_89(8))
		{
			return 1;
		}
		if (Global_2733190.f_5975.f_1 > 0)
		{
			return 1;
		}
	}
	return func_88(iParam0, 20);
}

var func_88(int iParam0, int iParam1)
{
	return BitTest(Global_1892925[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_89(int iParam0)
{
	return BitTest(Global_2733190.f_5964, iParam0);
}

int func_90()
{
	return -1;
}

void func_91()
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

void func_92()
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

int func_93()
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

void func_94()
{
	if (func_27(14))
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
		Global_21649 = func_25();
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

void func_95()
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

bool func_96(int iParam0, int iParam1)
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

void func_97(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

char* func_98()
{
	char* sVar0;
	
	switch (func_78())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP1_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP1_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP1_TENDC";
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP2_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP2_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP2_TENDC";
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP4_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP4_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP4_TENDC";
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP5_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP5_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP5_TENDC";
					break;
			}
			break;
	}
	return sVar0;
}

int func_99()
{
	int iVar0;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_100(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_101(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_114963.f_9094.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_114963.f_9094.f_99.f_58[iParam0] = iParam1;
}

void func_102(bool bParam0)
{
	if (bParam0)
	{
		func_76(1527885205, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_104(3))
	{
		func_76(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_76(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_103()
{
	if ((func_104(41) && func_104(3)) && func_104(21))
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114963.f_9094.f_330[iParam0 /*6*/];
}

int func_105()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 33;
	while (iVar1 <= 37)
	{
		if (func_104(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_106(45))
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114963.f_9094.f_99.f_58[iParam0];
}

void func_107(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

bool func_108(char* sParam0, int iParam1, char* sParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_109(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5), Param1) <= (fParam4 * fParam4);
}

void func_110()
{
	func_217(&iLocal_891, &iLocal_892, &iLocal_703, &iLocal_839, &iLocal_838, Local_844, Local_885.f_0, 0, 1090519040);
	func_216();
	func_157();
	switch (iLocal_701)
	{
		case 0:
			if (func_124(iLocal_700, bLocal_45))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_37(iLocal_891))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_891, false))
						{
							func_123("PRA_LEVVEH", &iLocal_837);
						}
					}
				}
				iLocal_701 = 1;
			}
			break;
		
		case 1:
			func_122(&iLocal_838, Local_844, &iLocal_702, iLocal_703, &iLocal_837, &iLocal_855);
			if (func_115(iLocal_891, Local_844, &iLocal_838, iLocal_703, iLocal_702, &iLocal_853, &iLocal_856, &iLocal_852, &iLocal_851, &iLocal_837, 1090519040))
			{
				if (!func_114())
				{
					if (func_68(&uLocal_704, &cLocal_1061, &uLocal_896))
					{
						func_64();
						func_59();
					}
				}
				else
				{
					func_101(46, 1);
					func_64();
					func_112(0);
				}
			}
			break;
		
		case 3:
			if (func_37(Local_885.f_0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_885.f_0, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_885.f_0, -1);
				}
				else
				{
					func_111(Local_885.f_0, Local_844, 126.0705f, 0, 1);
					func_40(1, 1, 1);
					iLocal_701 = 1;
				}
			}
			break;
	}
}

int func_111(int iParam0, struct<3> Param1, float fParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_10(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar1, false, false);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, bParam6);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_112(bool bParam0)
{
	func_113(iLocal_700);
	iLocal_834 = iLocal_700;
	if (!bParam0)
	{
		iLocal_700 = iLocal_834 + 1;
	}
	else if (iLocal_834 > 0)
	{
		iLocal_700 = (iLocal_834 - 1);
	}
	iLocal_837 = 0;
	iLocal_701 = 0;
}

void func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

int func_114()
{
	if (func_105())
	{
		if ((func_104(74) || func_104(75)) && func_103())
		{
			return 1;
		}
	}
	return 0;
}

int func_115(int iParam0, struct<3> Param1, int* iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	float fVar0;
	
	if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
	{
		if (iParam6 == 0)
		{
			if (func_37(iParam0))
			{
				if (!ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
				{
					func_123(func_121(func_78()), iParam11);
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam12, fParam12, 2f, false, true, 2))
			{
				ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam12, fParam12, 2f, true, true, 2);
				if (func_108(func_121(func_78()), 0, 0))
				{
					HUD::CLEAR_THIS_PRINT(func_121(func_78()));
				}
				*iParam7 = 1;
				func_119(iParam4, Param1, 1);
			}
			else
			{
				if (*iParam7)
				{
					fVar0 = (fParam12 / 2f);
					if (func_109(PLAYER::PLAYER_PED_ID(), Param1, fVar0, 1))
					{
						*iParam7 = 0;
						func_118(1077936128, 1);
					}
				}
				func_7(iParam4);
			}
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, fParam12, fParam12, 2f, false, true, 2))
	{
		if (*iParam9 == -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
			return 1;
		}
		if (!*iParam10)
		{
			if (func_108(func_121(func_78()), 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			*iParam9 = MISC::GET_GAME_TIMER();
			*iParam10 = 1;
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
		}
		else if ((MISC::GET_GAME_TIMER() - *iParam9) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0) == 2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 1);
		}
		if (!*iParam8)
		{
			if (func_108(func_117(func_78(), 0), 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(func_117(func_78(), 0));
			}
			if (!func_108(func_116(func_78()), 0, 0))
			{
				func_107(func_116(func_78()), 7500, 0);
				*iParam8 = 1;
			}
		}
		*iParam7 = 1;
	}
	return 0;
}

char* func_116(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_RETVEH";
			break;
		
		case 34:
			sVar0 = "PRB_RETVEH";
			break;
		
		case 78:
			sVar0 = "PR_RETVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_RETVEH";
			break;
	}
	return sVar0;
}

char* func_117(int iParam0, bool bParam1)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_TAKBACK";
			break;
		
		case 34:
			sVar0 = "PRB_TAKBACK";
			break;
		
		case 78:
			sVar0 = "PR_TAKBACK";
			break;
		
		case 80:
		case 81:
		case 82:
			if (!bParam1)
			{
				sVar0 = "PRF_TAKBACK";
			}
			else
			{
				sVar0 = "PRF_GARAGE";
			}
			break;
	}
	return sVar0;
}

int func_118(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iVar0, fParam0, iParam1, false);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_119(int* iParam0, struct<3> Param1, bool bParam4)
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		*iParam0 = func_120(Param1, 5, bParam4);
	}
}

int func_120(struct<3> Param0, int iParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_PRIORITY(iVar0, iParam3);
	HUD::SET_BLIP_SCALE(iVar0, 1f);
	HUD::SET_BLIP_ROUTE(iVar0, bParam4);
	return iVar0;
}

char* func_121(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_LEVVEH";
			break;
		
		case 34:
			sVar0 = "PRB_LEVVEH";
			break;
		
		case 78:
			sVar0 = "PR_LEVVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_LEAVE";
			break;
	}
	return sVar0;
}

void func_122(int* iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*iParam4)
	{
		case 0:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*iParam4 = 1;
			}
			break;
		
		case 1:
			func_7(iParam0);
			if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
			{
				HUD::CLEAR_PRINTS();
				func_107("LOSE_WANTED", 7500, 0);
				*iParam4 = 2;
			}
			break;
		
		case 2:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				HUD::CLEAR_PRINTS();
				if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
				{
					func_123(func_117(func_78(), 0), iParam6);
					func_119(iParam0, Param1, 1);
				}
				else if (iParam5 == 0 && !*iParam7)
				{
					func_107(func_116(func_78()), 7500, 0);
					*iParam7 = 1;
				}
				*iParam4 = 0;
			}
			break;
	}
}

void func_123(char* sParam0, int iParam1)
{
	if (!*iParam1)
	{
		func_107(sParam0, 7500, 0);
		*iParam1 = 1;
	}
}

int func_124(int iParam0, bool bParam1)
{
	int* iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_45 = false;
				func_40(1, 1, 1);
			}
			else if (func_151(1, Local_841, 0))
			{
				if (func_150())
				{
					func_149(33);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), true);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), true);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), true);
					iLocal_700 = 2;
					func_7(&iLocal_838);
					func_147(&uLocal_688, 0, 0, 0);
					func_146(190, 1244.338f, -339.3197f, 68.0823f);
					func_144();
					TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
					return 1;
				}
				else if (((func_151(2, Local_885.f_1, Local_885.f_4) && func_151(3, Local_857.f_1, Local_857.f_4)) && func_151(4, Local_871.f_1, Local_871.f_4)) && func_143(0))
				{
					func_144();
					func_149(33);
					if (func_345(Local_857.f_0))
					{
						func_142(Local_857.f_0);
					}
					if (func_345(Local_871.f_0))
					{
						func_141(Local_871.f_0);
					}
					func_140(Local_885.f_0);
					if (func_345(Local_871.f_0) && func_345(Local_857.f_0))
					{
						func_129(iLocal_847, 1, 0, 1);
					}
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), true);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), true);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), true);
					if (HUD::GET_BLIP_FROM_ENTITY(Local_885.f_0) != 0)
					{
						iVar0 = HUD::GET_BLIP_FROM_ENTITY(Local_885.f_0);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
						func_7(&iVar0);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
					}
					func_127(&iLocal_838, Local_885.f_0, 1);
					func_146(190, 1244.338f, -339.3197f, 68.0823f);
					TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((func_151(2, Local_885.f_1, Local_885.f_4) && func_151(3, Local_857.f_1, Local_857.f_4)) && func_151(4, Local_871.f_1, Local_871.f_4))
				{
					func_126(PLAYER::PLAYER_PED_ID(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
					func_125();
					bLocal_45 = false;
					TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
					func_40(1, 1, 1);
				}
			}
			else
			{
				func_144();
				return 1;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (func_151(2, Local_885.f_1, Local_885.f_4))
				{
					func_125();
					func_144();
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_885.f_0, -1);
					bLocal_45 = false;
					func_40(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				if (func_151(2, Local_844, Local_885.f_4))
				{
					func_125();
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_885.f_0, -1);
					func_144();
					bLocal_45 = false;
					func_40(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_125()
{
	if (iLocal_700 == 1)
	{
		func_142(Local_857.f_0);
		func_141(Local_871.f_0);
		func_140(Local_885.f_0);
		func_129(iLocal_847, 1, 0, 1);
	}
	iLocal_894 = 0;
	iLocal_855 = 0;
	iLocal_856 = 0;
	iLocal_851 = 0;
	iLocal_852 = 0;
	iLocal_853 = 0;
}

void func_126(int iParam0, struct<3> Param1, float fParam4)
{
	if (func_345(iParam0))
	{
		TASK::CLEAR_PED_TASKS(iParam0);
	}
	func_111(iParam0, Param1, fParam4, 0, 1);
}

void func_127(int* iParam0, int iParam1, bool bParam2)
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		*iParam0 = func_128(iParam1, bParam2, 5);
	}
}

int func_128(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(iParam0))
	{
		iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		HUD::SET_BLIP_PRIORITY(iVar0, iParam2);
		HUD::SET_BLIP_SCALE(iVar0, 1f);
	}
	return iVar0;
}

void func_129(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iLocal_98 = iParam0;
	bLocal_680 = iParam1;
	bLocal_679 = iParam2;
	bLocal_681 = iParam3;
	Local_128[0 /*11*/].f_1 = 0;
	Local_128[1 /*11*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_98 - 1))
	{
		Local_151[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
	fLocal_677 = 0f;
	func_131();
	Local_128[1 /*11*/].f_7 = 3;
	Local_128[1 /*11*/].f_5 = 0;
	Local_128[1 /*11*/].f_10 = 1;
	Local_128[1 /*11*/].f_2 = 1500;
	Local_128[1 /*11*/].f_3 = 500;
	Local_128[0 /*11*/].f_5 = 0;
	Local_128[0 /*11*/].f_10 = 0;
	Local_128[0 /*11*/].f_2 = 1000;
	Local_128[0 /*11*/].f_3 = 100;
	PED::ADD_RELATIONSHIP_GROUP("Enemies", &iLocal_97);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_128[0 /*11*/], iLocal_97);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_128[1 /*11*/], iLocal_97);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_128[0 /*11*/], true, 0f);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_128[1 /*11*/], true, 0f);
	func_130(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

void func_130(struct<3> Param0, struct<3> Param3)
{
	Local_99.f_8 = { Param0 };
	Local_99.f_11 = { Param3 };
	Local_99.f_1 = 4;
}

void func_131()
{
	if (!PED::IS_PED_IN_VEHICLE(Local_128[0 /*11*/], iLocal_126, false))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_128[0 /*11*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, func_139(1)), 1f, -1, 0.25f, 0, 40000f);
		Local_128[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_132(1);
	}
}

void func_132(bool bParam0)
{
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_126, 0, false))
	{
		func_133(bParam0);
		if (iLocal_678 != (iLocal_98 - 1))
		{
			if (iLocal_678 == 4)
			{
				TASK::TASK_VEHICLE_GOTO_NAVMESH(Local_128[0 /*11*/], iLocal_126, Local_151[iLocal_678 /*25*/], 15f, 2883755, Local_151[iLocal_678 /*25*/].f_6);
			}
			else
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_128[0 /*11*/], iLocal_126, Local_151[iLocal_678 /*25*/], 15f, 0, 0, 2883755, Local_151[iLocal_678 /*25*/].f_6, Local_151[iLocal_678 /*25*/].f_7);
			}
			Local_128[0 /*11*/].f_8 = Local_128[0 /*11*/].f_7;
			Local_128[0 /*11*/].f_7 = 4;
		}
		else
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(Local_128[0 /*11*/], iLocal_126, 15f, 786599);
			Local_128[0 /*11*/].f_8 = Local_128[0 /*11*/].f_7;
			Local_128[0 /*11*/].f_7 = 10;
		}
	}
	else
	{
		Local_128[0 /*11*/].f_8 = Local_128[0 /*11*/].f_7;
		Local_128[0 /*11*/].f_7 = 7;
	}
}

void func_133(bool bParam0)
{
	if (iLocal_678 != -1)
	{
		if (!func_138(Local_151[iLocal_678 /*25*/].f_11) && !func_138(Local_151[iLocal_678 /*25*/].f_14))
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_151[iLocal_678 /*25*/].f_11 - Local_151[iLocal_678 /*25*/].f_14, Local_151[iLocal_678 /*25*/].f_11 + Local_151[iLocal_678 /*25*/].f_14, true, true);
		}
	}
	if (!bParam0)
	{
		func_136();
	}
	else
	{
		iLocal_678 = func_134();
	}
	if (iLocal_678 != -1)
	{
		if (!func_138(Local_151[iLocal_678 /*25*/].f_11) && !func_138(Local_151[iLocal_678 /*25*/].f_14))
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_151[iLocal_678 /*25*/].f_11 - Local_151[iLocal_678 /*25*/].f_14, Local_151[iLocal_678 /*25*/].f_11 + Local_151[iLocal_678 /*25*/].f_14, false, true);
		}
	}
}

int func_134()
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6[21];
	float fVar28;
	float fVar29;
	float fVar30;
	int iVar31;
	
	if (func_37(iLocal_126))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_126, true) };
		iVar4 = 0;
		while (iVar4 <= (iLocal_98 - 1))
		{
			fVar28 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Local_151[iVar4 /*25*/], true);
			if (!func_138(Local_151[iVar4 /*25*/]) && fVar28 > 25f)
			{
				fVar6[iVar4] = fVar28;
			}
			else
			{
				fVar6[iVar4] = -1f;
			}
			iVar4++;
		}
		fVar29 = fVar6[0];
		iVar4 = 0;
		while (iVar4 <= (iLocal_98 - 1))
		{
			if (fVar6[iVar4] != -1f)
			{
				if (fVar6[iVar4] < fVar29)
				{
					fVar29 = fVar6[iVar4];
					iVar0 = iVar4;
				}
			}
			iVar4++;
		}
		fVar30 = func_135(Local_151[iVar0 /*25*/] - Var1, ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_126));
		iVar5 = iVar0;
		iVar31 = 0;
		while (fVar30 < 0f && iVar31 < 40)
		{
			iVar5++;
			if (iVar5 >= 21)
			{
				iVar5 = 0;
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_126, true) };
			fVar30 = func_135(Local_151[iVar5 /*25*/] - Var1, ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_126));
			iVar31++;
		}
		if (iVar31 >= 40)
		{
			iVar5 = (iLocal_98 - 1);
		}
	}
	iVar0 = iVar5;
	return iVar0;
}

float func_135(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_136()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (bLocal_680)
	{
		while (Local_151[iLocal_678 /*25*/].f_18 && iVar0 != -1)
		{
			iLocal_678++;
			if (iLocal_678 >= (iLocal_98 - 1))
			{
				iVar0 = -1;
				iLocal_678 = (iLocal_98 - 1);
			}
		}
		if (iLocal_678 == (iLocal_98 - 1))
		{
			if (bLocal_679)
			{
				iLocal_678 = 0;
				iVar0 = 0;
				while (iVar0 <= (iLocal_98 - 1))
				{
					Local_151[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
			}
			else
			{
				iLocal_678 = (iLocal_98 - 1);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= (iLocal_98 - 1))
		{
			if (Local_151[iVar0 /*25*/].f_18)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_98 - 1))
		{
			iLocal_678 = (iLocal_98 - 1);
		}
		else if (iVar1 == iLocal_98)
		{
			if (bLocal_679)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_98 - 1))
				{
					Local_151[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
				iLocal_678 = func_137();
			}
			else
			{
				iLocal_678 = -1;
				return;
			}
		}
		else
		{
			iLocal_678 = func_137();
		}
	}
}

int func_137()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iLocal_98 - 1));
	while (Local_151[iVar0 /*25*/].f_18)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iLocal_98 - 1));
	}
	return iVar0;
}

int func_138(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_139(bool bParam0)
{
	struct<3> Var0;
	int iVar3;
	
	if (!bParam0)
	{
		iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_126, "wheel_rf");
	}
	else
	{
		iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_126, "wheel_lf");
	}
	Var0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_126, iVar3) };
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_126, Var0) };
	if (!bParam0)
	{
		Var0 = { Var0 + Vector(0.5f, 0f, 1f) };
	}
	else
	{
		Var0 = { Var0 + Vector(0.5f, 0f, -1f) };
	}
	return Var0;
}

void func_140(int iParam0)
{
	if (func_37(iParam0))
	{
		iLocal_126 = iParam0;
	}
}

void func_141(int iParam0)
{
	if (func_345(iParam0))
	{
		Local_128[1 /*11*/] = iParam0;
	}
}

void func_142(int iParam0)
{
	if (func_345(iParam0))
	{
		Local_128[0 /*11*/] = iParam0;
	}
}

int func_143(bool bParam0)
{
	STREAMING::REQUEST_ANIM_DICT("missfbi4prepp1");
	STREAMING::REQUEST_ANIM_SET("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!STREAMING::HAS_ANIM_DICT_LOADED("missfbi4prepp1") && !STREAMING::HAS_ANIM_SET_LOADED("missfbi4prepp1_garbageman"))
		{
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	else if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi4prepp1") && STREAMING::HAS_ANIM_SET_LOADED("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_144()
{
	func_145(&uLocal_896);
}

void func_145(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 0;
			sVar1 = "MICHAEL";
			break;
		
		case 1:
			iVar0 = 1;
			sVar1 = "FRANKLIN";
			break;
		
		case 2:
			iVar0 = 2;
			sVar1 = "TREVOR";
			break;
	}
	func_100(uParam0, iVar0, PLAYER::PLAYER_PED_ID(), sVar1, 0, 1);
}

void func_146(int iParam0, struct<3> Param1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((Param1.f_0 == Global_34195[iVar0 /*23*/][0 /*3*/] && Param1.f_1 == Global_34195[iVar0 /*23*/][0 /*3*/].f_1) && Param1.f_2 == Global_34195[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_34192 = 1;
	MISC::SET_BIT(&(Global_34195[iVar0 /*23*/].f_11), 18);
	Global_34195[iVar0 /*23*/][0 /*3*/] = { Param1 };
	Global_40245 = 1;
}

void func_147(var uParam0, int iParam1, bool bParam2, bool bParam3)
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
		if (func_148(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_148(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

bool func_148(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_149(int iParam0)
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

int func_150()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("trash")))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true, false);
			iLocal_891 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (func_37(iLocal_891))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_151(int iParam0, struct<3> Param1, float fParam4)
{
	switch (iParam0)
	{
		case 0:
			if (func_156(Param1, Local_841, 1056964608, 0) && fParam4 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			HUD::REQUEST_ADDITIONAL_TEXT(sLocal_836, 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_37(Global_98958[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98958[0], true, true);
				Local_885.f_0 = Global_98958[0];
				if (func_37(Local_885.f_0))
				{
					func_36(Local_885.f_0, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_885.f_0, true);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_885.f_0, true);
					return 1;
				}
			}
			else if (func_155(&Local_885, Local_885.f_5, Local_885.f_1, Local_885.f_4, 1))
			{
				func_36(Local_885.f_0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_885.f_0, true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_885.f_0, true);
				return 1;
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Global_98958.f_9[0]))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Global_98958.f_9[0], true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98958.f_9[0], true, true);
					Local_857.f_0 = Global_98958.f_9[0];
					if (func_345(Local_857.f_0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_857.f_0, true);
						PED::SET_PED_CONFIG_FLAG(Local_857.f_0, 170, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_857.f_0, 65536, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_857.f_0, 50, true);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_152(&Local_857, Local_857.f_5, Local_857.f_1, Local_857.f_4, 1, 0, 1, 1))
			{
				if (func_37(Local_885.f_0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_857.f_0, Local_885.f_0, -1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_857.f_0, true);
					PED::SET_PED_CONFIG_FLAG(Local_857.f_0, 170, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_857.f_0, 65536, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_857.f_0, 50, true);
					return 1;
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Global_98958.f_9[1]))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Global_98958.f_9[1], true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98958.f_9[1], true, true);
					Local_871.f_0 = Global_98958.f_9[1];
					if (func_345(Local_871.f_0))
					{
						PED::SET_PED_CONFIG_FLAG(Local_871.f_0, 170, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_871.f_0, 65536, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_871.f_0, 50, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_871.f_0, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_871.f_0, true, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_152(&Local_871, Local_871.f_5, Local_871.f_1, Local_871.f_4, 1, 0, 1, 1))
			{
				if (func_37(Local_885.f_0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_871.f_0, Local_885.f_0, 0);
					PED::SET_PED_CONFIG_FLAG(Local_871.f_0, 170, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_871.f_0, 65536, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_871.f_0, 50, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_871.f_0, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_871.f_0, true, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_152(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (func_154(iParam1, "Loading", 0))
		{
			*iParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam5, true, true);
			if (func_345(*iParam0))
			{
				if (bParam7)
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
				}
				if (bParam8)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, bParam8);
				}
				if (!bParam9)
				{
					PED::SET_PED_CAN_BE_TARGETTED(*iParam0, bParam9);
				}
				if (bParam6)
				{
					func_153(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_345(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_153(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
	else
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
	}
}

int func_154(int iParam0, char* sParam1, int iParam2)
{
	STREAMING::REQUEST_MODEL(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && iParam2 != -1)
	{
	}
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_155(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (func_154(iParam1, "Loading", 0))
		{
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				if (bParam6)
				{
					func_153(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (func_37(*iParam0))
		{
			ENTITY::SET_ENTITY_COORDS(*iParam0, Param2, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(*iParam0, fParam5);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_156(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

void func_157()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_158(&(Local_128[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_158(int* iParam0, int iParam1)
{
	if (func_345(*iParam0))
	{
		func_204(iParam0, iParam1, 0);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (func_10(Local_151[iLocal_678 /*25*/].f_17) && ENTITY::IS_ENTITY_ATTACHED(Local_151[iLocal_678 /*25*/].f_17))
				{
					PED::RESET_PED_MOVEMENT_CLIPSET(*iParam0, 0.25f);
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*iParam0);
					if (iLocal_678 <= 20 && iLocal_678 != -1)
					{
						Local_151[iLocal_678 /*25*/].f_18 = 1;
						iParam0->f_9 = 0;
					}
					ENTITY::DETACH_ENTITY(Local_151[iLocal_678 /*25*/].f_17, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_151[iLocal_678 /*25*/].f_17, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0), false, true, true, false);
				}
			}
		}
		switch (iParam0->f_5)
		{
			case 0:
				if (iParam1 == 0)
				{
					func_201();
					func_200(iParam0);
				}
				func_187(iParam0);
				break;
			
			case 1:
				func_160(iParam0);
				break;
		}
	}
	else
	{
		if (func_10(Local_151[iLocal_678 /*25*/].f_17))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_151[iLocal_678 /*25*/].f_17))
			{
				ENTITY::DETACH_ENTITY(Local_151[iLocal_678 /*25*/].f_17, true, false);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_151[iLocal_678 /*25*/].f_17, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0), false, true, true, false);
			}
		}
		func_7(&(iParam0->f_4));
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (!func_159(PLAYER::PLAYER_PED_ID(), *iParam0, 150f, 1) && !bLocal_682)
			{
				func_5(iParam0, 1, 0, 1);
			}
		}
	}
}

bool func_159(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_160(int* iParam0)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0->f_6)
	{
		case 5:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				if (func_186(*iParam0, joaat("script_task_combat")))
				{
					TASK::CLEAR_PED_TASKS(*iParam0);
				}
				TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 30f, -1, false, false);
				iParam0->f_6 = 6;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 21:
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (func_179(*iParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
				{
					func_178(iParam0, 1);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
				{
					TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*iParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
				if (!HUD::DOES_BLIP_EXIST(iParam0->f_4))
				{
					iParam0->f_4 = func_175(*iParam0, 1, 145);
				}
				iParam0->f_6 = 22;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 10:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
				{
					PED::SET_PED_RESET_FLAG(*iParam0, 120, true);
					iParam0->f_6 = 12;
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (!func_186(*iParam0, joaat("script_task_cower")))
				{
					if (func_186(*iParam0, joaat("script_task_combat")))
					{
						TASK::CLEAR_PED_TASKS(*iParam0);
					}
					TASK::TASK_COWER(*iParam0, -1);
					iParam0->f_6 = 12;
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				TASK::TASK_USE_MOBILE_PHONE(*iParam0, true, 1);
				TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, true);
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_6 = 4;
				iParam0->f_5 = 1;
			}
			break;
		
		case 11:
			func_174(iParam0);
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > 5000)
			{
				if (!func_186(*iParam0, joaat("script_task_follow_nav_mesh_to_coord")))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_128[func_173(iParam0->f_10) /*11*/]))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, Local_684, 1f, -1, 2f, 0, 40000f);
					}
				}
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_6 = 23;
				iParam0->f_5 = 1;
			}
			break;
		
		case 18:
			if (!func_186(*iParam0, joaat("script_task_play_anim")))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				if (func_172(ENTITY::GET_ENTITY_COORDS(*iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 1.5f)
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0);
				}
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				iParam0->f_5 = 1;
				iParam0->f_6 = 20;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 19:
			func_174(iParam0);
			if (!func_186(*iParam0, joaat("script_task_play_anim")))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(*iParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, true);
				iParam0->f_5 = 1;
				iParam0->f_6 = 20;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_126, false))
			{
				func_170(iParam0);
			}
			break;
		
		case 2:
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(*iParam0) && (MISC::GET_GAME_TIMER() - iParam0->f_1) > 3000)
			{
				func_170(iParam0);
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > 8000)
			{
				TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				if (!iLocal_683)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						iLocal_683 = 1;
					}
				}
				TASK::TASK_USE_MOBILE_PHONE(*iParam0, false, 1);
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_6 = 8;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
			{
				TASK::TASK_USE_MOBILE_PHONE(*iParam0, false, 1);
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_6 = 8;
			}
			break;
		
		case 6:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_2)
			{
				if (!func_159(*iParam0, PLAYER::PLAYER_PED_ID(), 15f, 1))
				{
					func_7(&(iParam0->f_4));
					iParam0->f_6 = 7;
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 7:
			if (PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_126, true))
			{
				if (iParam0->f_6 != 4 && iParam0->f_6 != 1)
				{
					if (func_168())
					{
						if (func_345(*iParam0))
						{
							TASK::CLEAR_PED_TASKS(*iParam0);
							TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, true);
							iParam0->f_6 = 1;
						}
					}
				}
				if (!func_159(*iParam0, PLAYER::PLAYER_PED_ID(), 120f, 1))
				{
					func_5(iParam0, 1, 0, 1);
				}
			}
			else
			{
				func_170(iParam0);
			}
			break;
		
		case 8:
			if (!func_159(*iParam0, PLAYER::PLAYER_PED_ID(), 120f, 1))
			{
				func_5(iParam0, 1, 0, 1);
			}
			break;
		
		case 9:
			if (PED::IS_PED_BEING_JACKED(*iParam0))
			{
				func_178(iParam0, 1);
				return;
			}
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_2 || !func_186(*iParam0, joaat("script_task_drive_by")))
			{
				func_165(iParam0);
			}
			break;
		
		case 12:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, true);
				iParam0->f_6 = 5;
			}
			else
			{
				PED::SET_PED_RESET_FLAG(*iParam0, 120, true);
			}
			break;
		
		case 13:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_159(*iParam0, PLAYER::PLAYER_PED_ID(), 15f, 1))
				{
					func_165(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_179(Local_128[func_173(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_178(iParam0, 0);
				}
				else
				{
					func_164(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 15:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_159(*iParam0, PLAYER::PLAYER_PED_ID(), 15f, 1))
				{
					func_165(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_179(Local_128[func_173(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_178(iParam0, 0);
				}
				else
				{
					func_164(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 16:
			if (PED::IS_PED_BEING_JACKED(*iParam0))
			{
				func_178(iParam0, 1);
				return;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_687) >= 9000)
			{
				if (!func_163(iParam0))
				{
					func_165(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iParam0->f_1 = MISC::GET_GAME_TIMER();
					iParam0->f_5 = 1;
					iParam0->f_6 = 16;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_687) >= 5000 && (MISC::GET_GAME_TIMER() - iLocal_687) <= 5500)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
				{
					if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(*iParam0))
					{
						TASK::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(*iParam0);
					}
				}
			}
			break;
		
		case 14:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_159(*iParam0, PLAYER::PLAYER_PED_ID(), 15f, 1))
				{
					func_165(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_179(Local_128[func_173(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_178(iParam0, 0);
				}
				else
				{
					func_164(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 17:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_159(*iParam0, PLAYER::PLAYER_PED_ID(), 15f, 1))
				{
					func_165(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
				else if (func_179(Local_128[func_173(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_178(iParam0, 0);
				}
				else
				{
					func_164(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 20:
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (func_179(*iParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
				{
					func_178(iParam0, 1);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= 6000)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_126, true) + Vector(2f, 0f, 0f), 9f, false, true, 0))
				{
					func_165(iParam0);
				}
				else
				{
					func_170(iParam0);
					func_170(&(Local_128[func_173(iParam0->f_10) /*11*/]));
				}
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
			func_174(iParam0);
			break;
		
		case 22:
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (func_179(*iParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7))
				{
					func_178(iParam0, 1);
					return;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_159(*iParam0, PLAYER::PLAYER_PED_ID(), 15f, 1))
				{
					func_165(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
					return;
				}
				else
				{
					func_164(iParam0);
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		
		case 23:
			func_204(iParam0, iParam0->f_10, 1);
			func_174(iParam0);
			if (func_109(*iParam0, Local_684, 2f, 1))
			{
				if (func_161(*iParam0, Local_684, 1126825984, 0))
				{
					TASK::CLEAR_PED_TASKS(*iParam0);
					iParam0->f_6 = 19;
					iParam0->f_5 = 1;
					iParam0->f_1 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	}
}

int func_161(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_162(Param1 - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var3 = { func_162(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_135(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

Vector3 func_162(struct<3> Param0)
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

int func_163(int* iParam0)
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, 0f, 10f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, 0f, 3f, 2f), 5f, false, true, 0) && PED::IS_PED_STOPPED(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_164(int* iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_37(iVar0))
		{
			if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(*iParam0, iVar0, -1, false, false))
			{
				iParam0->f_6 = 18;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_165(int* iParam0)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_97, joaat("player"));
	switch (iParam0->f_8)
	{
		case 4:
			break;
		
		case 10:
			break;
		
		case 8:
			func_131();
			break;
		
		case 3:
			if (!func_186(*iParam0, joaat("script_task_perform_sequence")))
			{
				if (iLocal_678 <= 20 && iLocal_678 != -1)
				{
					Local_151[iLocal_678 /*25*/].f_18 = 1;
				}
				if (!PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_126, false))
				{
					if (iParam0->f_10 == 0)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, func_139(1)), 1f, -1, 0.25f, 0, 40000f);
						iParam0->f_7 = 1;
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, func_139(0)), 1f, -1, 0.25f, 0, 40000f);
						iParam0->f_7 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_126, false))
			{
				if (iParam0->f_10 == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, func_139(1)), 1f, -1, 0.25f, 0, 40000f);
					iParam0->f_7 = 1;
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, func_139(0)), 1f, -1, 0.25f, 0, 40000f);
					iParam0->f_7 = 1;
				}
			}
			break;
		
		case 9:
			if (!Local_151[iLocal_678 /*25*/].f_18)
			{
				if (iParam0->f_9 == 1)
				{
					func_166(iParam0);
				}
				else if (iParam0->f_10 == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, func_139(1)), 1f, -1, 0.25f, 0, 40000f);
					iParam0->f_7 = 1;
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, func_139(0)), 1f, -1, 0.25f, 0, 40000f);
					iParam0->f_7 = 1;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_126, false))
			{
				if (iParam0->f_10 == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, func_139(1)), 1f, -1, 0.25f, 0, 40000f);
					iParam0->f_7 = 1;
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, func_139(0)), 1f, -1, 0.25f, 0, 40000f);
					iParam0->f_7 = 1;
				}
			}
			break;
		
		default:
			break;
	}
	iParam0->f_1 = MISC::GET_GAME_TIMER();
	iParam0->f_5 = 0;
}

void func_166(var uParam0)
{
	if (!func_186(*uParam0, joaat("script_task_put_ped_directly_into_melee")))
	{
		if (Local_151[iLocal_678 /*25*/].f_23 != 0)
		{
			if (func_10(Local_151[iLocal_678 /*25*/].f_17))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET(*uParam0, Local_151[iLocal_678 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_151[iLocal_678 /*25*/].f_19, 1f, 20000, -1f, 0, func_167(Local_151[iLocal_678 /*25*/].f_19, ENTITY::GET_ENTITY_COORDS(*uParam0, true), 1));
		}
		if (func_37(iLocal_126))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_126, 5, false, false);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}

float func_167(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_168()
{
	if (func_37(iLocal_126) && func_345(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_126, PLAYER::PLAYER_PED_ID(), true))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_126);
			if (func_169() || ENTITY::GET_ENTITY_HEALTH(iLocal_126) < 851)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_169()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_126, iVar0, false))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_170(int* iParam0)
{
	if (iParam0->f_6 != 3 && iParam0->f_6 != 4)
	{
		func_171(iParam0);
		iParam0->f_1 = MISC::GET_GAME_TIMER();
		iParam0->f_6 = 3;
		iParam0->f_5 = 1;
	}
}

void func_171(var uParam0)
{
	if (uParam0->f_7 == 9)
	{
		if (uParam0->f_9 >= 2)
		{
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 0.25f);
				PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
				TASK::TASK_PLAY_ANIM(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0f, false, false, false);
			}
		}
	}
}

float func_172(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_173(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_174(int* iParam0)
{
	if (func_37(iLocal_126) && (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_126, false) && !PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_126, false)))
	{
		if (ENTITY::GET_ENTITY_SPEED(iLocal_126) > 0f)
		{
			iParam0->f_1 = MISC::GET_GAME_TIMER();
			iParam0->f_8 = iParam0->f_7;
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
		}
	}
}

int func_175(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_176(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2349[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2349[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_176(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_177(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_177(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_177(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_177(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_178(int* iParam0, int iParam1)
{
	func_171(iParam0);
	if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) || iParam1) || iParam0->f_6 == 23)
	{
		if (!func_159(PLAYER::PLAYER_PED_ID(), *iParam0, 10f, 1))
		{
			if (!func_186(*iParam0, joaat("script_task_smart_flee_ped")))
			{
				iParam0->f_6 = 5;
				iParam0->f_5 = 1;
				iParam0->f_1 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iParam0->f_6 = 10;
			iParam0->f_5 = 1;
			iParam0->f_1 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iParam0->f_5 != 1)
	{
		if (!func_186(*iParam0, joaat("script_task_combat")) && !func_186(*iParam0, joaat("script_task_put_ped_directly_into_melee")))
		{
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
			iParam0->f_1 = MISC::GET_GAME_TIMER();
		}
	}
}

bool func_179(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_185(iParam0, iParam1);
	if (!func_10(iParam0) || !func_10(iParam1))
	{
		if (iVar4 != -1)
		{
			func_184(&(Local_55[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_183(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_182();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_55[iVar4 /*4*/].f_1 = iParam0;
		Local_55[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_180(&(Local_55[iVar4 /*4*/]), Var1, iParam1, &(Local_55[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_55[iVar4 /*4*/].f_3) < iParam4);
}

int func_180(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_10(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_181(iParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar7))
	{
		func_10(iVar7);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == iParam4)
		{
			if (bLocal_96)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar7))
	{
		func_10(iVar7);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam4, false))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == PED::GET_VEHICLE_PED_IS_IN(iParam4, false))
			{
				if (bLocal_96)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_181(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return ENTITY::GET_ENTITY_COORDS(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return ENTITY::GET_ENTITY_COORDS(iParam0, true);
}

int func_182()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_55.f_0)
	{
		if ((Local_55[iVar0 /*4*/] == 0 && Local_55[iVar0 /*4*/].f_1 == 0) && Local_55[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_183(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_162(ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var3 = { func_162(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_135(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_184(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_185(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_55.f_0)
	{
		if (Local_55[iVar0 /*4*/].f_1 == iParam0 && Local_55[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_186(int iParam0, int iParam1)
{
	if (func_345(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_187(var uParam0)
{
	float fVar0;
	
	if (uParam0->f_9 == 0 && uParam0->f_10 == 1)
	{
	}
	switch (uParam0->f_7)
	{
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_126, true))
			{
				func_178(uParam0, 0);
				return;
			}
			if (uParam0->f_10 == 0)
			{
				func_198(uParam0, 1);
			}
			else
			{
				func_198(uParam0, 0);
			}
			break;
		
		case 2:
			if (PED::IS_PED_SITTING_IN_VEHICLE(*uParam0, iLocal_126))
			{
				if (!func_186(*uParam0, joaat("script_task_enter_vehicle")))
				{
					if (uParam0->f_10 == 0)
					{
						func_132(0);
					}
					else
					{
						uParam0->f_7 = 3;
					}
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_126, true))
			{
				func_178(uParam0, 0);
				return;
			}
			break;
		
		case 3:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_126, true))
			{
				func_178(uParam0, 0);
				return;
			}
			if (bLocal_681)
			{
				if (iLocal_678 <= 20 && iLocal_678 != -1)
				{
					if (!Local_151[iLocal_678 /*25*/].f_18)
					{
						if (func_109(*uParam0, Local_151[iLocal_678 /*25*/], 20f, 1))
						{
							if (Local_151[iLocal_678 /*25*/].f_9 && VEHICLE::IS_VEHICLE_STOPPED(iLocal_126))
							{
								func_197();
							}
						}
					}
				}
				else
				{
					uParam0->f_7 = 10;
				}
			}
			break;
		
		case 4:
			if (func_109(*uParam0, Local_151[iLocal_678 /*25*/], 25f, 1))
			{
				if (Local_151[iLocal_678 /*25*/].f_9)
				{
					func_196(uParam0);
				}
				else
				{
					Local_151[iLocal_678 /*25*/].f_18 = 1;
					func_132(0);
				}
			}
			break;
		
		case 5:
			if (func_37(iLocal_126))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_126, 25f, 10, false);
				fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_126);
				if (fVar0 < 8f)
				{
					func_196(uParam0);
				}
			}
			break;
		
		case 6:
			if (!func_186(*uParam0, joaat("script_task_perform_sequence")) && VEHICLE::IS_VEHICLE_STOPPED(iLocal_126))
			{
				if (bLocal_681)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		
		case 7:
			if (func_345(Local_128[1 /*11*/]))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_128[1 /*11*/], iLocal_126, false) && Local_128[1 /*11*/].f_7 == 3)
				{
					func_132(0);
				}
			}
			break;
		
		case 8:
			if (!PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_126, false))
			{
				func_166(uParam0);
			}
			break;
		
		case 9:
			func_188(uParam0);
			break;
	}
}

void func_188(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_9 >= 1 && uParam0->f_9 != 0)
	{
	}
	switch (uParam0->f_9)
	{
		case 1:
			if (!func_186(*uParam0, joaat("script_task_goto_entity_offset")))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (func_172(ENTITY::GET_ENTITY_COORDS(*uParam0, true), Local_151[iLocal_678 /*25*/].f_19) > 1.5f)
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_151[iLocal_678 /*25*/].f_19, 0);
				}
				TASK::TASK_PLAY_ANIM(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				uParam0->f_9 = 2;
			}
			else if (func_193(Local_151[iLocal_678 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
			{
				func_192(uParam0);
				return;
			}
			PED::SET_PED_CAPSULE(*uParam0, 0.2f);
			break;
		
		case 2:
			if (func_186(*uParam0, joaat("script_task_perform_sequence")))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						PED::SET_PED_MOVEMENT_CLIPSET(*uParam0, "missfbi4prepp1_garbageman", 0f);
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_151[iLocal_678 /*25*/].f_17) && !ENTITY::IS_ENTITY_ATTACHED(Local_151[iLocal_678 /*25*/].f_17))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_151[iLocal_678 /*25*/].f_17, *uParam0, PED::GET_PED_BONE_INDEX(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
						}
					}
				}
				if (func_193(Local_151[iLocal_678 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
				{
					func_192(uParam0);
					return;
				}
			}
			else if (!func_186(*uParam0, joaat("script_task_follow_nav_mesh_to_coord")))
			{
				if (func_37(iLocal_126))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, ENTITY::GET_ENTITY_HEADING(iLocal_126));
				}
				uParam0->f_9 = 3;
			}
			PED::SET_PED_CAPSULE(*uParam0, 0.2f);
			break;
		
		case 3:
			if (func_37(iLocal_126))
			{
				if (!func_193(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, 0f, -5.5f, 0f), iLocal_126, 1.9f, 1.9f, 8f))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, false, true, 0))
					{
						if (!func_186(*uParam0, joaat("script_task_follow_nav_mesh_to_coord")))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							if (func_172(ENTITY::GET_ENTITY_COORDS(*uParam0, true), ENTITY::GET_ENTITY_COORDS(iLocal_126, true)) > 3f)
							{
								TASK::TASK_ACHIEVE_HEADING(0, ENTITY::GET_ENTITY_HEADING(iLocal_126), 0);
							}
							TASK::TASK_PLAY_ANIM(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!func_186(*uParam0, joaat("script_task_follow_nav_mesh_to_coord")))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, ENTITY::GET_ENTITY_HEADING(iLocal_126));
					}
				}
				else
				{
					func_190(uParam0);
				}
			}
			break;
		
		case 4:
			if (!func_193(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f, 8f))
			{
				if (func_186(*uParam0, joaat("script_task_perform_sequence")))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (func_10(Local_151[iLocal_678 /*25*/].f_17))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(Local_151[iLocal_678 /*25*/].f_17))
								{
									PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 0.25f);
									PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
									ENTITY::DETACH_ENTITY(Local_151[iLocal_678 /*25*/].f_17, true, false);
									OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_151[iLocal_678 /*25*/].f_17, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
									ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_151[iLocal_678 /*25*/].f_17, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0), false, true, true, false);
								}
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_151[iLocal_678 /*25*/].f_17, iLocal_126))
								{
									func_189(&(Local_151[iLocal_678 /*25*/].f_17));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (func_37(iLocal_126))
					{
						VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_126, 5, false);
						func_189(&(Local_151[iLocal_678 /*25*/].f_17));
					}
					func_165(uParam0);
				}
			}
			else
			{
				func_190(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_189(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

void func_190(var uParam0)
{
	int iVar0;
	int iVar1;
	
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_97, joaat("player"));
	func_171(uParam0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 0.25f);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_191();
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = func_175(*uParam0, 1, 145);
	}
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_191()
{
	Local_99.f_0 = 0;
	Local_99.f_26 = 0;
	Local_99.f_18 = 0;
}

void func_192(var uParam0)
{
	int iVar0;
	int iVar1;
	
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_97, joaat("player"));
	func_171(uParam0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 0.25f);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_191();
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = func_175(*uParam0, 1, 145);
	}
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_193(struct<3> Param0, int iParam3, struct<3> Param4)
{
	Local_99.f_2 = { Param0 };
	Local_99.f_8 = { Param4 };
	func_194(&Local_99, iParam3);
	if (Local_99.f_26)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_99.f_18))
			{
				if (func_10(Local_99.f_18))
				{
					if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_99.f_18) == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(Local_99.f_18))
		{
			if (func_10(Local_99.f_18))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_99.f_18) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_194(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &(uParam0->f_20), &(uParam0->f_23), &(uParam0->f_18));
	uParam0->f_19 = 2 == iVar1;
	if (uParam0->f_19)
	{
		if (0 == iVar0)
		{
			uParam0->f_26 = 0;
		}
		else
		{
			uParam0->f_26 = 1;
		}
	}
	if (iVar1 != 1)
	{
		func_195(uParam0, iParam1);
	}
}

void func_195(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			break;
		
		case 1:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(uParam0->f_2, uParam0->f_5, 511, iParam1, 7);
			break;
		
		case 2:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_BOUND(uParam0->f_17, 511, 4);
			break;
		
		case 3:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_BOUNDING_BOX(uParam0->f_17, 511, 4);
			break;
		
		case 4:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_BOX(uParam0->f_2, uParam0->f_8, uParam0->f_11, uParam0->f_14, 6, iParam1, 4);
			break;
		
		case 5:
			*uParam0 = SHAPETEST::START_SHAPE_TEST_CAPSULE(uParam0->f_2, uParam0->f_5, uParam0->f_15, 511, iParam1, 4);
			break;
	}
	uParam0->f_16 = *uParam0 != 0;
}

void func_196(var uParam0)
{
	int iVar0;
	
	if (func_37(iLocal_126))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_126, Local_151[iLocal_678 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
		TASK::TASK_VEHICLE_PARK(0, iLocal_126, Local_151[iLocal_678 /*25*/].f_3, Local_151[iLocal_678 /*25*/].f_8, Local_151[iLocal_678 /*25*/].f_10, 5f, true);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		uParam0->f_7 = 6;
	}
}

void func_197()
{
	func_166(&(Local_128[1 /*11*/]));
}

void func_198(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (func_193(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, func_139(bParam1)), iLocal_126, 1.9f, 1.9f, 8f))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_126, true) + Vector(2f, 0f, 0f), 9f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_126, true) + Vector(2f, 0f, 0f), 9f, false, true, 0))
		{
			func_199(uParam0);
		}
		else if (!func_186(*uParam0, joaat("script_task_go_to_entity")) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, 5f, 0f, -2f), ENTITY::GET_ENTITY_COORDS(iLocal_126, true) + Vector(2f, 0f, 0f), 9f, false, true, 0))
		{
			TASK::CLEAR_PED_TASKS(*uParam0);
			TASK::TASK_GO_TO_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 4f, 1f, 2f, 0);
		}
	}
	else if (func_109(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_126, func_139(bParam1)), 5f, 1))
	{
		iVar0 = -1;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		TASK::TASK_ENTER_VEHICLE(*uParam0, iLocal_126, -1, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

void func_199(var uParam0)
{
	int iVar0;
	int iVar1;
	
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_97, joaat("player"));
	func_171(uParam0);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, PLAYER::PLAYER_PED_ID(), 8f, -1f, 10f, 0);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
	PED::RESET_PED_MOVEMENT_CLIPSET(*uParam0, 0.25f);
	PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_191();
	uParam0->f_1 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_200(var uParam0)
{
	if (uParam0->f_5 != 1)
	{
		if (func_37(iLocal_126) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!func_186(*uParam0, joaat("script_task_drive_by")) && PED::IS_PED_IN_VEHICLE(*uParam0, iLocal_126, false))
			{
				if (func_159(PLAYER::PLAYER_PED_ID(), iLocal_126, 10f, 1))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_126, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_DRIVE_BY(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 10f, 100, true, joaat("FIRING_PATTERN_FULL_AUTO"));
						uParam0->f_1 = MISC::GET_GAME_TIMER();
						uParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

void func_201()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_98 - 1))
	{
		if (Local_151[iVar0 /*25*/].f_23 != 0)
		{
			if (Local_151[iVar0 /*25*/].f_24)
			{
				if ((iVar0 != iLocal_678 && func_10(Local_151[iVar0 /*25*/].f_17)) && func_203(Local_151[iVar0 /*25*/].f_17, PLAYER::PLAYER_PED_ID(), 1) > 200f)
				{
					OBJECT::DELETE_OBJECT(&(Local_151[iVar0 /*25*/].f_17));
					Local_151[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_151[iVar0 /*25*/].f_23 != 0)
			{
				if (func_109(PLAYER::PLAYER_PED_ID(), Local_151[iVar0 /*25*/], 100f, 1) || func_109(Local_128[0 /*11*/], Local_151[iVar0 /*25*/], 120f, 1))
				{
					Local_151[iVar0 /*25*/].f_24 = func_202(&(Local_151[iVar0 /*25*/].f_17), Local_151[iVar0 /*25*/].f_23, Local_151[iVar0 /*25*/].f_19, Local_151[iVar0 /*25*/].f_22, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_202(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (func_154(iParam1, "Loading", 0))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
				PHYSICS::ACTIVATE_PHYSICS(*uParam0);
				if (bParam6)
				{
					func_153(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_10(*uParam0))
	{
		return 1;
	}
	return 0;
}

float func_203(int iParam0, int iParam1, bool bParam2)
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

void func_204(int* iParam0, int iParam1, int iParam2)
{
	if (iParam0->f_5 != 1 || iParam2)
	{
		if (!func_345(Local_128[func_173(iParam1) /*11*/]))
		{
			if (!bLocal_682)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_128[func_173(iParam1) /*11*/]))
				{
					if (func_183(*iParam0, Local_128[func_173(iParam1) /*11*/], 140f, 0) || func_159(Local_128[func_173(iParam1) /*11*/], *iParam0, 3f, 1))
					{
						func_178(iParam0, 0);
						bLocal_682 = true;
						return;
					}
					else
					{
						Local_684 = { ENTITY::GET_ENTITY_COORDS(Local_128[func_173(iParam1) /*11*/], true) };
						iParam0->f_1 = MISC::GET_GAME_TIMER();
						iParam0->f_8 = iParam0->f_7;
						iParam0->f_5 = 1;
						iParam0->f_6 = 11;
					}
				}
				else
				{
					func_178(iParam0, 0);
				}
			}
		}
		else if (Local_128[func_173(iParam1) /*11*/].f_6 == 22)
		{
			if (func_183(*iParam0, Local_128[func_173(iParam1) /*11*/], 140f, 0) && func_159(Local_128[func_173(iParam1) /*11*/], PLAYER::PLAYER_PED_ID(), 15f, 1))
			{
				iParam0->f_5 = 1;
				iParam0->f_6 = 21;
			}
		}
		else if (Local_128[func_173(iParam1) /*11*/].f_6 == 5 || Local_128[func_173(iParam1) /*11*/].f_6 == 7)
		{
			if (func_159(Local_128[func_173(iParam1) /*11*/], *iParam0, 10f, 1))
			{
				func_178(iParam0, 0);
			}
		}
		if (func_215(*iParam0))
		{
			func_171(iParam0);
			iParam0->f_1 = MISC::GET_GAME_TIMER();
			iParam0->f_8 = iParam0->f_7;
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
		}
		if (iParam0->f_10 == 0 && iParam0->f_7 == 4)
		{
			if (func_163(iParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_126, false))
				{
					TASK::TASK_DRIVE_BY(*iParam0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 10f, 100, true, joaat("FIRING_PATTERN_FULL_AUTO"));
					AUDIO::SET_HORN_PERMANENTLY_ON_TIME(iLocal_126, 2000f);
					iLocal_687 = MISC::GET_GAME_TIMER();
					iParam0->f_1 = MISC::GET_GAME_TIMER();
					iParam0->f_6 = 16;
					iParam0->f_5 = 1;
				}
			}
		}
		if (func_206(*iParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_205(iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (func_37(iLocal_126))
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, iLocal_126, false))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_126) > 5f)
						{
							if (iParam1 == 0)
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(*iParam0, iLocal_126, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, true);
								iParam0->f_6 = 7;
								TASK::TASK_COWER(Local_128[func_173(iParam1) /*11*/], -1);
								Local_128[func_173(iParam1) /*11*/].f_6 = 10;
								Local_128[func_173(iParam1) /*11*/].f_5 = 1;
								iParam0->f_5 = 1;
								iParam0->f_1 = MISC::GET_GAME_TIMER();
								Local_128[func_173(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
							}
							else
							{
								TASK::TASK_COWER(*iParam0, -1);
								iParam0->f_6 = 12;
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_128[func_173(iParam1) /*11*/], iLocal_126, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 300f, 2f, true);
								Local_128[func_173(iParam1) /*11*/].f_6 = 5;
								Local_128[func_173(iParam1) /*11*/].f_5 = 1;
								iParam0->f_5 = 1;
								iParam0->f_1 = MISC::GET_GAME_TIMER();
								Local_128[func_173(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							func_178(iParam0, 0);
							if (ENTITY::DOES_ENTITY_EXIST(Local_128[func_173(iParam1) /*11*/]))
							{
								if (func_183(Local_128[func_173(iParam1) /*11*/], PLAYER::PLAYER_PED_ID(), 1126825984, 0))
								{
									func_178(&(Local_128[func_173(iParam1) /*11*/]), 0);
								}
							}
						}
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
					}
					else
					{
						func_178(iParam0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_128[func_173(iParam1) /*11*/]))
						{
							if (func_179(Local_128[func_173(iParam1) /*11*/], *iParam0, 1126825984, 1, 250, 7))
							{
								func_178(&(Local_128[func_173(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_8 = iParam0->f_7;
				iParam0->f_5 = 1;
				iParam0->f_6 = 21;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
				if (func_179(Local_128[func_173(iParam1) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					Local_128[func_173(iParam1) /*11*/].f_1 = MISC::GET_GAME_TIMER();
					Local_128[func_173(iParam1) /*11*/].f_8 = iParam0->f_7;
					Local_128[func_173(iParam1) /*11*/].f_5 = 1;
					Local_128[func_173(iParam1) /*11*/].f_6 = 21;
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_128[func_173(iParam1) /*11*/]);
				}
			}
			iParam0->f_5 = 1;
		}
		else if (PED::IS_PED_BEING_JACKED(*iParam0))
		{
			func_171(iParam0);
			TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, true);
			iParam0->f_6 = 2;
			iParam0->f_5 = 1;
			iParam0->f_1 = MISC::GET_GAME_TIMER();
		}
		if (PED::IS_PED_RAGDOLL(*iParam0))
		{
			if (func_10(Local_151[iLocal_678 /*25*/].f_17))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_151[iLocal_678 /*25*/].f_17))
				{
					ENTITY::DETACH_ENTITY(Local_151[iLocal_678 /*25*/].f_17, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_151[iLocal_678 /*25*/].f_17, 1, ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0), false, true, true, false);
				}
			}
		}
	}
	if (iParam0->f_5 != 1)
	{
		if (func_345(Local_128[func_173(iParam1) /*11*/]))
		{
			if (PED::IS_PED_BEING_JACKED(Local_128[func_173(iParam1) /*11*/]))
			{
				func_171(iParam0);
				TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 120f, -1, false, false);
				iParam0->f_1 = MISC::GET_GAME_TIMER();
				iParam0->f_6 = 7;
				iParam0->f_5 = 1;
			}
		}
	}
}

int func_205(var uParam0)
{
	if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, false, true, 0) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

int func_206(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_10(PLAYER::PLAYER_PED_ID()) && func_10(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (func_211(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iParam0, true) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_210(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_207(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_10(PLAYER::PLAYER_PED_ID()) && func_10(iParam0))
	{
		if (func_209(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, false, true, 0))
			{
				if (func_208(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_208(int iParam0, float fParam1)
{
	return func_179(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

int func_209(int iParam0)
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_210(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / SYSTEM::VDIST(Var3, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_211(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_10(PLAYER::PLAYER_PED_ID()) && func_10(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_214(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_212(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fVar0, true))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_214(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_212(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_212(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_grenade"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_molotov"), fParam1, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_smokegrenade"), fParam1, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, true), joaat("weapon_stickybomb"), 5f, true))
		{
			if (bParam3)
			{
				if (func_213(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_213(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (MISC::IS_PROJECTILE_IN_AREA(Var0, Var3, true))
		{
			return 1;
		}
	}
	return 0;
}

int func_213(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, false)) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, false))
	{
		if (func_161(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_214(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, false, true, 0))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), fParam2, true))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)
{
	if (func_159(iParam0, PLAYER::PLAYER_PED_ID(), 6f, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_216()
{
	if (func_37(Local_885.f_0))
	{
		if (func_159(PLAYER::PLAYER_PED_ID(), Local_885.f_0, 100f, 1) && !iLocal_854)
		{
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("trash"), 3);
			if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("trash")))
			{
				iLocal_854 = 1;
			}
		}
		else if (!func_159(PLAYER::PLAYER_PED_ID(), Local_885.f_0, 120f, 1) && iLocal_854)
		{
			VEHICLE::REMOVE_VEHICLE_ASSET(joaat("trash"));
			iLocal_854 = 0;
		}
	}
}

void func_217(int* iParam0, int iParam1, int iParam2, int* iParam3, int* iParam4, struct<3> Param5, int iParam8, bool bParam9, float fParam10)
{
	if (func_37(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
				{
					func_7(iParam3);
					if (func_108(func_116(func_78()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(func_116(func_78()));
					}
					if (*iParam0 == iParam8)
					{
						*iParam2 = 1;
					}
					else
					{
						*iParam2 = 2;
					}
				}
				else if (func_222(*iParam0) || func_221(*iParam0))
				{
					func_7(iParam3);
					if (func_108(func_116(func_78()), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(func_116(func_78()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (func_108(func_117(func_78(), bParam9), 0, 0))
					{
						HUD::CLEAR_THIS_PRINT(func_117(func_78(), bParam9));
					}
					if (func_78() != 33)
					{
						func_219(iParam0);
					}
					else
					{
						func_218(iParam0, iParam1);
					}
				}
				break;
			
			case 2:
			case 1:
				if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false) && !func_222(*iParam0)) && !func_221(*iParam0))
				{
					func_7(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param5, fParam10, fParam10, 2f, false, true, 2))
					{
						func_127(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			
			case 3:
				if (!func_222(*iParam0) && !func_221(*iParam0))
				{
					func_7(iParam4);
					if (!ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param5, fParam10, fParam10, 2f, false, true, 2))
					{
						func_127(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (func_78() != 33)
	{
		func_219(iParam0);
	}
	else
	{
		func_218(iParam0, iParam1);
	}
}

void func_218(int* iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bLocal_45)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (iVar0 != *iParam0)
			{
				if (func_37(iVar0))
				{
					iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *iParam0;
						func_6(iParam0);
						*iParam0 = iVar0;
						func_36(*iParam0, 1);
						func_36(*uParam1, 3);
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						iVar2 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
						if (func_10(iVar2))
						{
							iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2);
							if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trash"))
							{
								*uParam1 = *iParam0;
								func_6(iParam0);
								*iParam0 = iVar0;
								func_36(*iParam0, 1);
								func_36(*uParam1, 3);
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_219(int* iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (iVar0 != *iParam0)
		{
			if (func_37(iVar0))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == func_220(func_78()))
				{
					func_6(iParam0);
					*iParam0 = iVar0;
					func_36(*iParam0, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
				}
			}
		}
	}
}

int func_220(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 33:
			iVar0 = joaat("trash");
			break;
		
		case 34:
			iVar0 = joaat("towtruck");
			break;
		
		case 78:
			iVar0 = 0;
			break;
		
		case 80:
		case 81:
		case 82:
			iVar0 = joaat("gauntlet");
			break;
	}
	return iVar0;
}

int func_221(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_345(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && func_37(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_37(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3")) || iVar1 == -352682313)
			{
				if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(iVar0, iParam0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_222(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_345(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && func_37(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (func_37(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_223()
{
	func_217(&iLocal_891, &iLocal_892, &iLocal_703, &iLocal_839, &iLocal_838, Local_844, Local_885.f_0, 0, 1090519040);
	func_157();
	func_240();
	func_216();
	switch (iLocal_701)
	{
		case 0:
			if (func_124(iLocal_700, bLocal_45))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !func_239())
				{
					func_119(&iLocal_838, Local_844, 1);
					func_123("PRA_TAKBACK", &iLocal_837);
				}
				iLocal_701 = 1;
			}
			break;
		
		case 1:
			func_122(&iLocal_838, Local_844, &iLocal_702, iLocal_703, &iLocal_837, &iLocal_855);
			func_229();
			if (func_227(iLocal_891, Local_844, &iLocal_838, iLocal_702, iLocal_703, &iLocal_837, &iLocal_856, 0, 0, 1086324736))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 5f, 4);
				iLocal_701 = 2;
			}
			break;
		
		case 2:
			func_224();
			func_7(&iLocal_838);
			func_7(&iLocal_839);
			if (func_118(1077936128, 1))
			{
				func_112(0);
			}
			break;
		
		case 3:
			if (func_37(iLocal_891))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_891, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_891, -1);
				}
				else
				{
					func_111(iLocal_891, Local_844, 146.5443f, 0, 1);
					func_40(1, 1, 1);
					iLocal_701 = 1;
				}
			}
			break;
	}
}

void func_224()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_80(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (func_226(iVar1))
			{
				func_225(iVar1);
			}
		}
		iVar0++;
	}
}

int func_225(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_29(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_80(bVar0) != iParam0)
		{
			return 0;
		}
		if (!BitTest(Global_98315, bVar0))
		{
			return 0;
		}
		MISC::CLEAR_BIT(&Global_98315, bVar0);
		return 1;
	}
	return 0;
}

int func_226(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_29(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_80(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_98315, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_227(int iParam0, struct<3> Param1, int* iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, float fParam11)
{
	if ((iParam6 == 1 || iParam6 == 2) || iParam6 == 3)
	{
		if (iParam5 == 0)
		{
			func_119(iParam4, Param1, 1);
			if (!bParam10)
			{
				if (func_37(iParam0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, fParam11, fParam11, 2f, true, true, 0))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam11, fParam11, 2f, true, true, 2))
			{
				return 1;
			}
			if (func_108(func_116(func_78()), 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(func_116(func_78()));
			}
			if (!func_228())
			{
				func_123(func_117(func_78(), bParam9), iParam7);
			}
		}
	}
	else if (iParam5 == 0)
	{
		if (!*iParam8)
		{
			if (func_108(func_117(func_78(), 0), 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(func_117(func_78(), 0));
			}
			func_107(func_116(func_78()), 7500, 0);
			*iParam8 = 1;
		}
	}
	return 0;
}

bool func_228()
{
	return Global_102538.f_417 > 0;
}

void func_229()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = func_80(iVar0);
		if (!PED::IS_PED_INJURED(iVar2))
		{
			if (func_79(iVar2, 0))
			{
				if (!bVar1)
				{
					if (func_159(PLAYER::PLAYER_PED_ID(), iVar2, 5f, 1))
					{
						if (!func_239())
						{
							func_234(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_1065[iVar0])
				{
					if (iVar0 == 0)
					{
						func_100(&uLocal_896, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						func_100(&uLocal_896, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						func_100(&uLocal_896, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_1065[iVar0] = 1;
				}
			}
			if (!func_226(iVar2))
			{
				if (func_79(iVar2, 0))
				{
					if (func_233(iVar2) || func_231(iVar2))
					{
						if (func_230(iVar2, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
							TASK::CLEAR_PED_TASKS(iVar2);
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, true))
			{
				if (func_233(iVar2))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("script_task_vehicle_mission")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("script_task_vehicle_mission")) != 0)
					{
						if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(623.3781f, -172.26f, 1700.732f, -2115.843f))
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(iVar2, PED::GET_VEHICLE_PED_IS_IN(iVar2, false), Local_844, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_231(iVar2))
				{
					if (func_37(Local_885.f_0))
					{
						if (!func_159(iVar2, Local_885.f_0, 17f, 1))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("script_task_vehicle_mission")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("script_task_vehicle_mission")) != 0)
							{
								TASK::TASK_VEHICLE_MISSION(iVar2, PED::GET_VEHICLE_PED_IS_IN(iVar2, false), Local_885.f_0, 3, 20f, 786468, 2f, 0.5f, true);
							}
						}
					}
				}
				else
				{
					func_225(iVar2);
				}
			}
		}
		iVar0++;
	}
}

int func_230(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = func_29(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_80(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_98315, bVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (BitTest(Global_98314, bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, false, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, false, 1);
			MISC::SET_BIT(&Global_98315, bVar0);
			return 1;
		}
	}
	return 0;
}

int func_231(int iParam0)
{
	int iVar0;
	
	if (!func_232())
	{
		if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (func_37(iVar0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("trash")))
				{
					return 0;
				}
				if (PED::IS_PED_IN_VEHICLE(iParam0, iVar0, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_232()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_99939.f_44 == 1;
	}
	return 0;
}

int func_233(int iParam0)
{
	if (!func_232())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_885.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_885.f_0, false)) && !ENTITY::IS_ENTITY_AT_COORD(Local_885.f_0, Local_844, 2f, 2f, 2f, false, true, 0))
		{
			if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_885.f_0, false)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, Local_885.f_0, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_885.f_0, -1, false) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_234(int iParam0)
{
	if (iLocal_700 > 1)
	{
		if (iLocal_702 > 0)
		{
			if (!BitTest(Local_705[iParam0 /*8*/].f_7, 0) && iLocal_703 == 1)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_238(&uLocal_896, cLocal_895, Local_705[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						MISC::SET_BIT(&(Local_705[iParam0 /*8*/].f_7), false);
					}
				}
			}
		}
		else
		{
			if ((BitTest(Local_705[iParam0 /*8*/].f_7, 0) && !BitTest(Local_705[iParam0 /*8*/].f_7, 1)) && iLocal_703 == 1)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_238(&uLocal_896, cLocal_895, Local_705[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						MISC::SET_BIT(&(Local_705[iParam0 /*8*/].f_7), true);
					}
				}
			}
			if (!BitTest(Local_705[iParam0 /*8*/].f_7, 5))
			{
				if (func_237(iLocal_891, Local_844, 1) < 15f && iLocal_703 == 1)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (func_238(&uLocal_896, cLocal_895, Local_705[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							MISC::SET_BIT(&(Local_705[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (func_29(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					if (iParam0 == 1)
					{
						if (!func_236(2))
						{
							func_235(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_236(4))
						{
							func_235(iParam0, 4);
						}
					}
					break;
				
				case 1:
					if (iParam0 == 0)
					{
						if (!func_236(2))
						{
							func_235(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_236(3))
						{
							func_235(iParam0, 3);
						}
					}
					break;
				
				case 2:
					if (iParam0 == 1)
					{
						if (!func_236(3))
						{
							func_235(iParam0, 3);
						}
					}
					else if (iParam0 == 0)
					{
						if (!func_236(4))
						{
							func_235(iParam0, 4);
						}
					}
					break;
				}
			}
	}
}

void func_235(int iParam0, bool bParam1)
{
	if (!BitTest(Local_705[iParam0 /*8*/].f_7, bParam1))
	{
		if (iLocal_1069 != -1)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_238(&uLocal_896, cLocal_895, Local_705[iParam0 /*8*/][bParam1], 7, 0, 0, 0))
				{
					MISC::SET_BIT(&(Local_705[iParam0 /*8*/].f_7), bParam1);
				}
			}
		}
		else if (!func_239() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			iLocal_1069 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_1069 = -1;
		}
	}
}

int func_236(int iParam0)
{
	if ((BitTest(Local_705[0 /*8*/].f_7, iParam0) || BitTest(Local_705[1 /*8*/].f_7, iParam0)) || BitTest(Local_705[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}

float func_237(int iParam0, struct<3> Param1, bool bParam4)
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

bool func_238(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_97(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_84(sParam2, iParam3, 0);
}

int func_239()
{
	if (Global_23023 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_240()
{
	if (func_109(PLAYER::PLAYER_PED_ID(), Local_844, 220f, 1))
	{
		if (!iLocal_894 && !func_109(PLAYER::PLAYER_PED_ID(), Local_844, 100f, 1))
		{
			iLocal_894 = func_155(&iLocal_893, joaat("cavalcade2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (func_109(PLAYER::PLAYER_PED_ID(), Local_844, 240f, 1))
	{
		if (iLocal_894)
		{
			func_6(&iLocal_893);
			iLocal_894 = 0;
		}
	}
}

void func_241()
{
	func_217(&iLocal_891, &iLocal_892, &iLocal_703, &iLocal_839, &iLocal_838, Local_844, Local_885.f_0, 0, 1090519040);
	func_216();
	func_157();
	switch (iLocal_701)
	{
		case 0:
			if (func_124(iLocal_700, bLocal_45))
			{
				func_127(&iLocal_838, Local_885.f_0, 1);
				func_123("PRA_GOVAN", &iLocal_837);
				iLocal_701 = 1;
			}
			break;
		
		case 1:
			func_229();
			if (func_37(Local_885.f_0))
			{
				func_244(&uLocal_688, Local_885.f_0, 0, 0, 1, 1, 1);
			}
			if (!bLocal_850)
			{
				if (func_345(Local_857.f_0) && PED::IS_PED_BEING_JACKED(Local_857.f_0))
				{
					func_243();
				}
				if (func_345(Local_871.f_0) && PED::IS_PED_BEING_JACKED(Local_871.f_0))
				{
					func_243();
				}
			}
			if (func_37(iLocal_891))
			{
				if ((iLocal_703 == 1 || iLocal_703 == 2) || iLocal_703 == 3)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					iLocal_701 = 2;
				}
			}
			break;
		
		case 2:
			func_7(&iLocal_838);
			func_147(&uLocal_688, 0, 0, 0);
			func_112(0);
			break;
		
		case 3:
			func_8(&Local_857);
			func_8(&Local_871);
			if (func_37(Local_885.f_0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_885.f_0, -1);
			}
			func_242(1);
			func_40(1, 1, 1);
			iLocal_701 = 1;
			break;
	}
}

void func_242(bool bParam0)
{
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	else
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	}
}

void func_243()
{
	char* sVar0;
	
	switch (func_25())
	{
		case 0:
			sVar0 = "FBI4_JACKSM";
			break;
		
		case 1:
			sVar0 = "FBI4_JACKSF";
			break;
		
		case 2:
			sVar0 = "FBI4_JACKST";
			break;
	}
	bLocal_850 = func_238(&uLocal_896, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_850)
	{
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 8f, 4);
	}
}

void func_244(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_245(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_245(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_246(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_246(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		func_147(uParam0, 0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_247(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_247(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_148(iVar0))
	{
		func_271();
	}
	if (func_270(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), true);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_265(uParam0, bParam7, bParam9, 0))
			{
				func_262(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_252(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_148(iVar0))
							{
								func_251(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_250(1);
								}
							}
						}
					}
				}
			}
			else if (func_252(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_148(iVar0))
						{
							func_251(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_250(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				if (func_148(sParam5))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						func_147(uParam0, iVar0, 1, 0);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_147(uParam0, iVar0, 1, 0);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_147(uParam0, iVar0, 1, 0);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_147(uParam0, iVar0, 1, 0);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_147(uParam0, iVar0, 1, 0);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_147(uParam0, iVar0, 1, 0);
				}
			}
			if (!func_265(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_249(uParam0))
				{
					func_248(uParam0);
				}
			}
		}
	}
	else
	{
		func_147(uParam0, iVar0, 0, 0);
	}
}

void func_248(var uParam0)
{
	if (func_270(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_249(var uParam0)
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

int func_250(bool bParam0)
{
	switch (Global_44921)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_114963.f_10058.f_100++;
			}
			return Global_114963.f_10058.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_114963.f_10058.f_101++;
			}
			return Global_114963.f_10058.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_114963.f_10058.f_102++;
			}
			return Global_114963.f_10058.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_251(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_252(char* sParam0)
{
	if (!func_253(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_148(sParam0)) || func_148("CMN_HINT"))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_44921)
	{
		case 0:
		case 3:
			if (func_250(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_250(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_250(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_253(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_70(0))
	{
		return 0;
	}
	if (func_261())
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
	if ((func_260() || func_259(Global_4718592.f_197291)) || func_258())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_257(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_256(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1963699)
	{
		return 0;
	}
	if (func_254(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_254(int iParam0)
{
	if (iParam0 != func_90())
	{
		if (func_255(iParam0, 1, 1))
		{
			return Global_2658293[iParam0 /*468*/].f_325.f_8 != -1;
		}
		else if ((Global_1575095 && iParam0 == PLAYER::PLAYER_ID()) && func_255(iParam0, 1, 0))
		{
			return Global_2658293[iParam0 /*468*/].f_325.f_8 != -1;
		}
	}
	return 0;
}

int func_255(int iParam0, bool bParam1, bool bParam2)
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

int func_256(int iParam0, int iParam1)
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

int func_257(int iParam0, bool bParam1)
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

var func_258()
{
	return Global_2685152.f_20;
}

bool func_259(int iParam0)
{
	return iParam0 == 51;
}

var func_260()
{
	return Global_2685152.f_19;
}

bool func_261()
{
	return MISC::GET_GAME_TIMER() <= Global_24569.f_6481 + 100;
}

void func_262(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1579271 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_147(uParam0, 0, 0, 0);
	}
	if (func_15(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_263())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, true, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_263()
{
	return func_264(PLAYER::PLAYER_ID());
}

int func_264(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_265(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_269(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_268(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_268(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_269(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_249(uParam0))
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
						if (!func_269(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_268(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_268(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_269(bParam1, bParam2, bParam3))
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
					if (!func_269(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_268(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_268(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
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
				else if (!func_269(bParam1, bParam2, bParam3))
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
						if (func_267(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_266(bParam1, bParam2, bParam3))
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
					else if (func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_249(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_253(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_271();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_266(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_253(bParam0, bParam1, bParam2))
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

int func_267(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_253(bParam0, bParam1, bParam2))
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

int func_268(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_253(bParam0, bParam1, bParam2))
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

int func_269(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_253(bParam0, bParam1, bParam2))
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

int func_270(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_271()
{
	MISC::SET_BIT(&Global_9503, 4);
}

void func_272()
{
	switch (iLocal_701)
	{
		case 0:
			if (func_124(iLocal_700, 0))
			{
				func_286();
				func_284(33);
				PLAYER::SET_MAX_WANTED_LEVEL(2);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
				if (func_362())
				{
					func_281(0, -1, 1);
					func_41(500, 1);
					iLocal_701 = 2;
				}
				else
				{
					if (func_33(0))
					{
						func_126(PLAYER::PLAYER_PED_ID(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_274(1228.635f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
						func_41(500, 1);
					}
					func_273();
					if (iLocal_700 == 2)
					{
						iLocal_701 = 0;
					}
					else
					{
						iLocal_701 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_112(0);
			break;
	}
}

void func_273()
{
}

void func_274(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = STREAMING::STREAMVOL_CREATE_SPHERE(Param0, fParam3, iParam4, 127);
	if (STREAMING::STREAMVOL_IS_VALID(iVar0))
	{
		iVar1 = (MISC::GET_GAME_TIMER() + iParam5);
		while (!STREAMING::STREAMVOL_HAS_LOADED(iVar0) && MISC::GET_GAME_TIMER() < iVar1)
		{
			if (bParam7)
			{
				func_276(0);
			}
			if (bParam6)
			{
				func_275();
			}
			SYSTEM::WAIT(0);
		}
		if (MISC::GET_GAME_TIMER() < iVar1)
		{
		}
		STREAMING::STREAMVOL_DELETE(iVar0);
	}
}

void func_275()
{
	Global_24430.f_6 = 1;
}

void func_276(int iParam0)
{
	if (func_280())
	{
		return;
	}
	if (!Global_21649.f_1 == 1)
	{
		if (func_70(0))
		{
			func_277(iParam0);
		}
		MISC::SET_BIT(&Global_9503, 2);
	}
}

void func_277(int iParam0)
{
	if (func_280())
	{
		return;
	}
	if (Global_21882)
	{
		if (func_279())
		{
			func_278(1, 1);
		}
		else
		{
			func_278(0, 0);
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
	if (!func_52())
	{
		Global_21649.f_1 = 3;
	}
}

void func_278(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_70(0))
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

bool func_279()
{
	return BitTest(Global_1964670, 5);
}

bool func_280()
{
	return BitTest(Global_1964670, 19);
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	if (func_362() && func_283())
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
		func_282(0);
	}
}

void func_282(int iParam0)
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

var func_283()
{
	return BitTest(Global_102486.f_20, 13);
}

void func_284(int iParam0)
{
	Global_98316 = 0;
	switch (iParam0)
	{
		case 72:
			func_285(2);
			func_285(4);
			break;
		
		case 73:
			func_285(0);
			func_285(1);
			func_285(7);
			break;
		
		case 92:
			func_285(10);
			func_285(9);
			func_285(13);
			func_285(6);
			break;
		
		case 68:
			func_285(11);
			break;
		
		case 78:
			func_285(14);
			break;
		
		case 79:
			func_285(3);
			break;
		
		default:
			break;
	}
}

void func_285(bool bParam0)
{
	MISC::SET_BIT(&Global_98316, iParam0);
}

void func_286()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			func_287(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 24, 0);
		}
	}
}

void func_287(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
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
		func_336(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_331(iParam0, &Var0);
		if (func_15(Param1, 0f, 0f, 0f, 0))
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
		func_324(iParam5, &Var0, Param1, fParam4, func_330(iParam0));
		func_288(iParam5, iParam0, 0);
	}
}

void func_288(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_321(&(Global_79127.f_555[0 /*21*/]), iParam0))
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
				Global_114963.f_32759.f_4801 = func_310();
			}
			if (iParam1 != Global_79127.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_309(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						func_289(iVar0, 145);
					}
				}
				Global_80033 = iParam1;
				Global_80034 = iParam0;
				Global_80035 = iParam2;
			}
		}
	}
}

void func_289(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_290(iParam0))
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
	func_331(iParam0, &(Global_114963.f_32759.f_5510));
}

int func_290(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_307(iParam0, 0, 0)) || func_307(iParam0, 1, 0)) || func_307(iParam0, 2, 0)) || func_330(iParam0) != 145) || func_306(iParam0)) || func_305(iParam0)) || func_304(iParam0)) || func_303(iParam0)) || !func_291(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_305(iParam0))
		{
		}
		if (func_305(iParam0))
		{
		}
		if (func_307(iParam0, 0, 0))
		{
		}
		if (func_307(iParam0, 1, 0))
		{
		}
		if (func_307(iParam0, 2, 0))
		{
		}
		if (func_330(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_291(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_292(iParam0, 0, -1))
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

int func_292(int iParam0, bool bParam1, int iParam2)
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
		if (!func_302())
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
					if ((((!func_301() && !func_300()) && !func_299()) && !func_298()) && !func_302())
					{
						return 0;
					}
				}
				if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
				{
					if ((func_297() || MISC::IS_PC_VERSION()) || func_296())
					{
					}
					else if (!func_299())
					{
						return 0;
					}
				}
				if (bParam1)
				{
					if (!func_295(iParam0, iParam2))
					{
						return 0;
					}
				}
				if (!func_293(iParam0))
				{
					return 0;
				}
				return 1;
			}

int func_293(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_294())
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

int func_294()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_295(int iParam0, int iParam1)
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

bool func_296()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_297()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_298()
{
	return 0;
}

int func_299()
{
	return 1;
}

int func_300()
{
	return 1;
}

int func_301()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_302()
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

int func_303(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_292(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_304(int iParam0)
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

int func_305(int iParam0)
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

int func_306(int iParam0)
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

int func_307(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_308(iParam1, iVar0, &sVar1, &iVar9))
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

int func_308(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_309(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_79127.f_139[iParam0];
}

var func_310()
{
	var uVar0;
	
	func_320(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_319(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_318(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_313(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_312(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_311(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_311(var uParam0, int iParam1)
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

void func_312(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_313(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_317(*uParam0);
	iVar1 = func_315(*uParam0);
	if (iParam1 < 1 || iParam1 > func_314(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_314(int iParam0, int iParam1)
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

var func_315(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_316(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_316(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_317(var uParam0)
{
	return uParam0 & 15;
}

void func_318(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_319(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_320(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_321(var uParam0, int iParam1)
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
			uParam0->f_4 = func_322(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_322(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_322(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_322(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_322(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_322(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_322(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_322(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_322(2, 1);
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
			if (func_302())
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
			if (func_302())
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
		if (!func_15(Global_114963.f_32759.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_15(Global_114963.f_2370.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_114963.f_2370.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114963.f_2370.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_15(Global_114963.f_2370.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_114963.f_2370.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114963.f_2370.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_322(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_323(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_323(int iParam0, var uParam1, int iParam2)
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

void func_324(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_321(&(Global_79127.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_79127.f_555[0 /*21*/].f_9, 10))
		{
			func_329(iParam0);
			func_328(uParam1, &(Global_114963.f_32759.f_69[Global_79127.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_325(iParam0, 1);
		}
	}
}

void func_325(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_327(iParam0, 0))
		{
			func_326(iParam0, 1, 0);
			func_326(iParam0, 2, 0);
			func_326(iParam0, 3, 0);
			func_326(iParam0, 4, 0);
			func_326(iParam0, 0, 1);
			Global_79127[iParam0] = 1;
		}
	}
	else
	{
		func_326(iParam0, 0, 0);
	}
}

void func_326(int iParam0, bool bParam1, bool bParam2)
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

int func_327(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_114963.f_32759[iParam0], iParam1);
}

void func_328(var uParam0, var uParam1)
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

void func_329(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_321(&(Global_79127.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_79127.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_79127.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_79127.f_139[iParam0]));
			Global_79127.f_139[iParam0] = 0;
		}
		if (BitTest(Global_79127.f_555[0 /*21*/].f_9, 13))
		{
			func_325(iParam0, 0);
		}
	}
}

int func_330(int iParam0)
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

void func_331(int iParam0, var uParam1)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_335(uParam1);
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
		if (uParam1->f_65 == -1 && !func_334(uParam1->f_66))
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
		func_333(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_332(iVar0 + 1));
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

int func_332(int iParam0)
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

int func_333(int iParam0, var uParam1, var uParam2)
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

int func_334(int iParam0)
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

void func_335(var uParam0)
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

void func_336(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_329(iParam0);
	func_325(iParam0, 0);
}

void func_337()
{
	func_340();
	func_338();
}

void func_338()
{
	if (!iLocal_848)
	{
		if (func_37(iLocal_891))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_891, false))
			{
				func_67(iLocal_891, -1);
				func_66(iLocal_891, 318);
				iLocal_848 = 1;
			}
		}
	}
	if (!iLocal_849)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			func_339(320, 0);
			iLocal_849 = 1;
		}
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		func_65(0, 320);
		iLocal_849 = 0;
	}
}

void func_339(int iParam0, bool bParam1)
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

void func_340()
{
}

void func_341()
{
	if (!bLocal_45 && iLocal_700 != 5)
	{
		if (iLocal_700 > 0)
		{
			func_342();
		}
	}
}

void func_342()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 600f;
	if (!func_37(iLocal_891))
	{
		if (!func_37(iLocal_892) && !func_37(Local_885.f_0))
		{
			func_344(1);
			return;
		}
		if (func_37(Local_885.f_0) && !func_159(PLAYER::PLAYER_PED_ID(), Local_885.f_0, fVar0, 1))
		{
			func_344(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_159(PLAYER::PLAYER_PED_ID(), iLocal_891, fVar0, 1))
		{
			iVar1++;
		}
		if (func_37(iLocal_892))
		{
			if (!func_159(PLAYER::PLAYER_PED_ID(), iLocal_892, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_885.f_0))
		{
			if (!func_159(PLAYER::PLAYER_PED_ID(), Local_885.f_0, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_344(2);
			return;
		}
		iVar1 = 0;
		if (func_343(iLocal_891))
		{
			iVar1++;
		}
		if (func_37(iLocal_892))
		{
			if (func_343(iLocal_892))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_885.f_0))
		{
			if (func_343(Local_885.f_0))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_344(3);
			return;
		}
	}
}

int func_343(int iParam0)
{
	if (func_37(iParam0))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
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

void func_344(int iParam0)
{
	HUD::CLEAR_PRINTS();
	func_62();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_835 = "PRA_FWRECK";
			break;
		
		case 2:
			sLocal_835 = "PRA_FFAR";
			break;
		
		case 3:
			sLocal_835 = "PRA_FSTUCK";
			break;
	}
	iLocal_700 = 5;
	iLocal_701 = 0;
}

int func_345(int iParam0)
{
	if (func_10(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_346()
{
	if (!func_104(36))
	{
		func_347(21, 0, 0);
	}
}

void func_347(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_360(iParam0, 0, 0))
		{
			if (iParam2 && Global_102538.f_18[iParam0])
			{
				if (func_359(iParam0) == 3 && !func_358(iParam0))
				{
					func_357(iParam0);
					func_356(iParam0, 0, 0);
					func_349(iParam0, 1, 0);
					func_348(iParam0);
				}
				else
				{
					func_356(iParam0, 1, 0);
					func_348(iParam0);
				}
			}
			else
			{
				func_356(iParam0, 0, 0);
				func_349(iParam0, 1, 0);
				func_348(iParam0);
			}
		}
		else
		{
			func_349(iParam0, 1, 0);
			func_348(iParam0);
		}
	}
	else if (func_360(iParam0, 0, 0))
	{
		func_349(iParam0, 0, 0);
		func_349(iParam0, 1, 0);
		func_348(iParam0);
	}
}

void func_348(int iParam0)
{
	Global_102538.f_217[iParam0] = 1;
	Global_102538.f_216 = 1;
}

void func_349(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_102538.f_1442[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_355() == 0)
		{
			iVar0 = func_353(func_354(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, bParam1);
			func_350(func_354(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_114963.f_668[iParam0]), bParam1);
	}
}

void func_350(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 16764)
	{
		iVar0 = func_351(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_351(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_352(uParam1));
}

int func_352(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
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

int func_353(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 16764)
	{
		iVar0 = func_351(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_354(int iParam0)
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

int func_355()
{
	return Global_33815;
}

void func_356(int iParam0, bool bParam1, bool bParam2)
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
		if (func_355() == 0)
		{
			iVar0 = func_353(func_354(iParam0), -1);
			MISC::SET_BIT(&iVar0, bParam1);
			func_350(func_354(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_114963.f_668[iParam0]), bParam1);
	}
}

void func_357(int iParam0)
{
	if (Global_102538.f_18[iParam0])
	{
		func_356(iParam0, 10, 1);
		func_356(iParam0, 19, 1);
	}
}

bool func_358(int iParam0)
{
	return func_360(iParam0, 5, 1);
}

int func_359(int iParam0)
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

int func_360(int iParam0, int iParam1, bool bParam2)
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
		if (func_355() == 0)
		{
			return BitTest(func_353(func_354(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_114963.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_361(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_362())
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
		func_282(1);
	}
}

int func_362()
{
	if (Global_102486 == 10 || Global_102486 == 9)
	{
		return 1;
	}
	return 0;
}

void func_363()
{
	func_378();
	func_376();
	func_369();
	func_366();
	func_364();
}

void func_364()
{
	iLocal_1065[0] = 0;
	iLocal_1065[1] = 0;
	iLocal_1065[2] = 0;
	Local_705[0 /*8*/] = { func_365("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_705[1 /*8*/] = { func_365("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_705[2 /*8*/] = { func_365("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_365(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	struct<8> Var0;
	
	Var0 = 6;
	Var0[0] = sParam0;
	Var0[1] = sParam1;
	Var0[5] = sParam2;
	Var0[2] = sParam3;
	Var0[3] = sParam4;
	Var0[4] = sParam5;
	return Var0;
}

void func_366()
{
	Local_151[0 /*25*/] = { func_368(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0) };
	func_367(&(Local_151[0 /*25*/]), Local_841, 0, 15f, 5f, 270f, 3, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_151[1 /*25*/] = { func_368(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0) };
	func_367(&(Local_151[1 /*25*/]), Local_841, 0, 15f, 10f, 270f, 3, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_151[2 /*25*/] = { func_368(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0) };
	func_367(&(Local_151[2 /*25*/]), Local_841, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_151[3 /*25*/] = { func_368(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0) };
	func_367(&(Local_151[3 /*25*/]), Local_841, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_151[4 /*25*/] = { func_368(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0) };
	func_367(&(Local_151[4 /*25*/]), Local_841, 0, 5f, 30f, 128.1732f, 3, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_151[5 /*25*/] = { func_368(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s")) };
	func_367(&(Local_151[5 /*25*/]), 1028.201f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.179f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_151[6 /*25*/] = { func_368(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s")) };
	func_367(&(Local_151[6 /*25*/]), 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_151[7 /*25*/] = { func_368(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s")) };
	func_367(&(Local_151[7 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_151[8 /*25*/] = { func_368(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0) };
	func_367(&(Local_151[8 /*25*/]), Local_841, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_151[9 /*25*/] = { func_368(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s")) };
	func_367(&(Local_151[9 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_151[10 /*25*/] = { func_368(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0) };
	func_367(&(Local_151[10 /*25*/]), Local_841, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_151[11 /*25*/] = { func_368(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_367(&(Local_151[11 /*25*/]), Local_841, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_151[12 /*25*/] = { func_368(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s")) };
	func_367(&(Local_151[12 /*25*/]), 1020.251f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_151[13 /*25*/] = { func_368(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0) };
	func_367(&(Local_151[13 /*25*/]), Local_841, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_151[14 /*25*/] = { func_368(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0) };
	func_367(&(Local_151[14 /*25*/]), Local_841, 0, 15f, 2f, 12.1103f, 3, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_151[15 /*25*/] = { func_368(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_367(&(Local_151[15 /*25*/]), Local_841, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_151[16 /*25*/] = { func_368(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0) };
	func_367(&(Local_151[16 /*25*/]), Local_841, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_151[17 /*25*/] = { func_368(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0) };
	func_367(&(Local_151[17 /*25*/]), Local_841, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_151[18 /*25*/] = { func_368(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_367(&(Local_151[18 /*25*/]), Local_841, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_847 = 19;
}

void func_367(var uParam0, struct<3> Param1, int iParam4, float fParam5, float fParam6, float fParam7, int iParam8, struct<3> Param9, struct<3> Param12)
{
	uParam0->f_3 = { Param1 };
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_9 = iParam4;
	uParam0->f_10 = iParam8;
	uParam0->f_11 = { Param9 };
	uParam0->f_14 = { Param12 };
}

struct<25> func_368(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	struct<25> Var0;
	
	Var0.f_9 = 1;
	Var0.f_10 = 3;
	Var0 = { Param0 };
	Var0.f_19 = { Param3 };
	Var0.f_22 = fParam6;
	Var0.f_23 = iParam7;
	return Var0;
}

void func_369()
{
	struct<3> Var0[6];
	
	Var0[0 /*3*/] = { 1251.308f, -400.6231f, 68.0926f };
	Var0[1 /*3*/] = { 1183.993f, -403.3443f, 66.8734f };
	Var0[2 /*3*/] = { 1161.54f, -372.6073f, 66.6034f };
	Var0[3 /*3*/] = { 1167.644f, -273.7987f, 67.9705f };
	Var0[4 /*3*/] = { 1252.362f, -247.353f, 77.5631f };
	Var0[5 /*3*/] = { 1330.062f, -341.0342f, 100.3476f };
	func_370(&Var0, 6);
}

void func_370(var uParam0, int iParam1)
{
	int iVar0;
	
	func_375(&uLocal_730);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_374(&uLocal_730, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_373(&uLocal_730);
	func_371(&uLocal_782, &uLocal_730, 50f);
}

void func_371(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	if (uParam1->f_46 < 3)
	{
	}
	iVar0 = (uParam1->f_46 - 1);
	iVar1 = 0;
	iVar2 = 1;
	uParam0->f_46 = uParam1->f_46;
	while (iVar1 < uParam1->f_46)
	{
		Var3 = { *(uParam1[iVar1 /*3*/]) - *(uParam1[iVar0 /*3*/]) };
		Var6 = { *(uParam1[iVar2 /*3*/]) - *(uParam1[iVar1 /*3*/]) };
		Var3 = { Var3 / FtoV(SYSTEM::SQRT(((Var3.f_0 * Var3.f_0) + (Var3.f_1 * Var3.f_1)))) };
		Var6 = { Var6 / FtoV(SYSTEM::SQRT(((Var6.f_0 * Var6.f_0) + (Var6.f_1 * Var6.f_1)))) };
		Var9 = { Var3 - Var6 };
		Var9 = { Var9 / FtoV(SYSTEM::SQRT(((Var9.f_0 * Var9.f_0) + (Var9.f_1 * Var9.f_1)))) };
		if (func_372(uParam1, *(uParam1[iVar1 /*3*/]) + Var9))
		{
			Var9 = { -Var9 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + Var9 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_46);
	}
}

bool func_372(var uParam0, struct<2> Param1, Vector3 vParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1.f_0)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

void func_373(var uParam0)
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(SYSTEM::TO_FLOAT(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = SYSTEM::VDIST2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = SYSTEM::SQRT(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_374(var uParam0, struct<3> Param1)
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { Param1 };
	uParam0->f_46++;
}

void func_375(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

void func_376()
{
	Local_857 = { func_377(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("s_m_y_garbage")) };
	Local_871 = { func_377(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("s_m_y_garbage")) };
}

struct<14> func_377(struct<3> Param0, float fParam3, int iParam4)
{
	struct<14> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_378()
{
	Local_885 = { func_379(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("trash")) };
}

struct<6> func_379(struct<3> Param0, float fParam3, int iParam4)
{
	struct<6> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_380()
{
	func_242(1);
	func_391(1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), false);
	func_64();
	func_390();
	func_389();
	func_381(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_381(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", true);
	func_38();
	func_388();
	func_387();
	func_386();
	func_385();
	func_224();
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_891))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_891, false))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
					}
				}
			}
		}
		func_383();
		HUD::CLEAR_PRINTS();
		func_2();
	}
	else
	{
		func_382();
	}
	HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
	func_147(&uLocal_688, 0, 0, 0);
	if (CAM::DOES_CAM_EXIST(iLocal_840))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_840, false);
	}
}

void func_382()
{
	func_3();
	func_6(&Local_885);
	func_6(&iLocal_892);
	func_6(&iLocal_891);
	func_5(&Local_857, 1, 0, 1);
	func_5(&Local_871, 1, 0, 1);
	func_6(&iLocal_893);
}

void func_383()
{
	Global_21889 = 0;
	func_384();
}

void func_384()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24034 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23023 = 6;
	}
}

void func_385()
{
}

void func_386()
{
	if (iLocal_854)
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("trash"));
	}
}

void func_387()
{
}

void func_388()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_885.f_5);
}

void func_389()
{
	func_347(21, 1, 0);
}

void func_390()
{
	Global_98316 = 0;
}

void func_391(int iParam0)
{
	Global_99767 = iParam0;
}

void func_392()
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_114963.f_9094 || func_33(0))
	{
		if (!func_393())
		{
			iVar0 = func_32();
			if (iVar0 != -1)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_93213[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

int func_393()
{
	if (((Global_102486 == 13 || Global_102486 == 10) || Global_102486 == 11) || Global_102486 == 12)
	{
		return 0;
	}
	return 1;
}

