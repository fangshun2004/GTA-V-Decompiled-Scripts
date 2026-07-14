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
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66[4] = { 0, 0, 0, 0 };
	int iLocal_71 = 0;
	int iLocal_72[4] = { 0, 0, 0, 0 };
	int iLocal_77 = 0;
	struct<3> Local_78[4];
	struct<3> Local_91 = { 0, 0, 0 } ;
	int iLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	bool bLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
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
	iLocal_45 = 3;
	fLocal_48 = 80f;
	fLocal_49 = 140f;
	fLocal_50 = 180f;
	iLocal_56 = 1;
	iLocal_57 = 65;
	iLocal_58 = 49;
	iLocal_59 = 64;
	bLocal_95 = true;
	iLocal_101 = joaat("s_m_m_pilot_01");
	iLocal_116 = 500;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_12();
	}
	iLocal_114 = PLAYER::PLAYER_PED_ID();
	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_114, false))
		{
			iLocal_115 = 5;
		}
		switch (iLocal_115)
		{
			case 0:
				iLocal_115 = 1;
				break;
			
			case 1:
				func_11();
				iLocal_115 = 2;
				break;
			
			case 2:
				if (func_10())
				{
					iLocal_115 = 3;
				}
				break;
			
			case 3:
				func_9();
				iLocal_115 = 4;
				break;
			
			case 4:
				if (Global_99389)
				{
					iLocal_115 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		SYSTEM::WAIT(iLocal_116);
	}
}

void func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_66[iVar0]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_66[iVar0]) || (!ENTITY::IS_ENTITY_DEAD(iLocal_66[iVar0], false) && !ENTITY::IS_ENTITY_VISIBLE(iLocal_66[iVar0])))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_66[iVar0]));
				PED::DELETE_PED(&(iLocal_72[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(iLocal_66[iVar0]), &(iLocal_72[iVar0]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_66[iVar0]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_72[iVar0]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_71))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_71))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_71);
			PED::DELETE_PED(&iLocal_77);
		}
		else
		{
			func_2(&iLocal_71, &iLocal_77);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_71);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_77);
		}
	}
	if (bLocal_99)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "EastWestFlight");
	}
}

void func_2(int iParam0, var uParam1)
{
	if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1)) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false)) && !ENTITY::IS_ENTITY_DEAD(*uParam1, false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(*iParam0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_PLANE_MISSION(*uParam1, *iParam0, 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 30f, 1.401298E-43f, 7.006492E-44f, true);
				}
			}
		}
	}
}

void func_3(bool bParam0)
{
	if (bLocal_95)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_66[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[0], false))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(iLocal_66[0]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_66[0]))
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_72[0], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[0], false))
					{
						TASK::TASK_PLANE_MISSION(iLocal_72[0], iLocal_66[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 1.401298E-43f, 7.006492E-44f, true);
					}
				}
				else if (bParam0)
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_72[0], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[0], false))
					{
						TASK::TASK_PLANE_MISSION(iLocal_72[0], iLocal_66[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 1.401298E-43f, 7.006492E-44f, true);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_66[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[2], false))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(iLocal_66[2]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_66[2]))
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_72[2], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[2], false))
					{
						TASK::TASK_PLANE_MISSION(iLocal_72[2], iLocal_66[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 1.401298E-43f, 7.006492E-44f, true);
					}
				}
				else if (bParam0)
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_72[2], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[2], false))
					{
						TASK::TASK_PLANE_MISSION(iLocal_72[2], iLocal_66[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 1.401298E-43f, 7.006492E-44f, true);
					}
				}
			}
		}
	}
}

void func_4()
{
	int iVar0;
	
	switch (iLocal_105)
	{
		case 0:
			Local_78[0 /*3*/] = { -1542.113f, -3023.802f, 23.2538f };
			Local_78[1 /*3*/] = { -3089.888f, -1960.075f, 313.559f };
			Local_78[2 /*3*/] = { -1037.638f, -3316.12f, 23.2475f };
			Local_78[3 /*3*/] = { 451.174f, -4009.46f, 135.1171f };
			Local_91 = { -1612.174f, -2688.442f, 12.9444f };
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					bLocal_95 = false;
				}
				else
				{
					bLocal_95 = true;
				}
			}
			iLocal_105 = 1;
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(iLocal_101);
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
			VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
			VEHICLE::REQUEST_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
			iLocal_105 = 2;
			break;
		
		case 2:
			if (!bLocal_99)
			{
				if ((((((STREAMING::HAS_MODEL_LOADED(joaat("jet")) && STREAMING::HAS_MODEL_LOADED(iLocal_101)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					bLocal_99 = true;
				}
				else
				{
					STREAMING::REQUEST_MODEL(joaat("jet"));
					STREAMING::REQUEST_MODEL(iLocal_101);
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
				}
			}
			if (bLocal_99)
			{
				if (!CAM::IS_SPHERE_VISIBLE(Local_78[0 /*3*/], 50f) && !CAM::IS_SPHERE_VISIBLE(Local_91, 50f))
				{
					iLocal_105 = 3;
				}
				else
				{
					if (CAM::IS_SPHERE_VISIBLE(Local_78[0 /*3*/], 50f))
					{
					}
					if (CAM::IS_SPHERE_VISIBLE(Local_91, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			iLocal_66[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_78[0 /*3*/], 0f, true, true, false);
			ENTITY::SET_ENTITY_HEADING(iLocal_66[0], 240.3179f);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(iLocal_66[0], false);
			iLocal_66[1] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_78[1 /*3*/], 0f, true, true, false);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(iLocal_66[1], false);
			iLocal_66[2] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_78[2 /*3*/], 0f, true, true, false);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(iLocal_66[2], false);
			iLocal_66[3] = VEHICLE::CREATE_VEHICLE(joaat("jet"), Local_78[3 /*3*/], 0f, true, true, false);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(iLocal_66[3], false);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_66[iVar0]))
				{
					iLocal_72[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_66[iVar0], 4, iLocal_101, -1, true, true);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_66[iVar0], 1000);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_66[iVar0], true, true, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_72[iVar0], true);
				}
				iVar0++;
			}
			func_8(&(iLocal_66[1]), &(iLocal_72[1]));
			func_8(&(iLocal_66[2]), &(iLocal_72[2]));
			func_8(&(iLocal_66[3]), &(iLocal_72[3]));
			if (bLocal_95)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_66[0]))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_66[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_94 = 1;
					}
					else
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_105 = 4;
			break;
		
		case 4:
			if (iLocal_98)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_66[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[3], false))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_66[3]))
					{
						if (!iLocal_96)
						{
							func_8(&(iLocal_66[3]), &(iLocal_72[3]));
							iLocal_96 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_104)
			{
				case 0:
					if (!iLocal_94)
					{
						if (bLocal_95)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_66[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[0], false))
							{
								if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_66[0]) && !CAM::IS_SPHERE_VISIBLE(Local_78[0 /*3*/], 50f))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_66[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_94 = 1;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_94)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_66[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_66[0]))
							{
								fLocal_102 = VEHICLE::GET_POSITION_IN_RECORDING(iLocal_66[0]);
							}
						}
						if (fLocal_102 > 1100f)
						{
							iLocal_104 = 1;
						}
					}
					break;
				
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_66[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[1], false))
					{
						if (bLocal_95)
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_66[1]))
							{
								if (iLocal_98)
								{
									if (iLocal_96)
									{
										func_6(&(iLocal_66[1]), &(iLocal_72[1]));
										if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
										{
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_66[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_97 = 0;
											iLocal_104 = 2;
										}
										else
										{
											VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(iLocal_66[1]), &(iLocal_72[1]));
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_66[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_97 = 0;
										iLocal_104 = 2;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_66[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[1], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_66[1]))
						{
							iLocal_104 = 3;
						}
					}
					break;
				
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_66[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[2], false))
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew"))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Local_78[2 /*3*/], 50f))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_66[2]))
								{
									func_6(&(iLocal_66[2]), &(iLocal_72[2]));
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_66[2], 101, "AirportNew", true);
									iLocal_104 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_66[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[2], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_66[2]))
						{
							fLocal_103 = VEHICLE::GET_POSITION_IN_RECORDING(iLocal_66[2]);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_66[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[1], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_66[1]))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_66[1]))
							{
								func_8(&(iLocal_66[1]), &(iLocal_72[1]));
								iLocal_97 = 1;
							}
						}
					}
					if (fLocal_103 > 1100f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_66[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[3], false))
						{
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux"))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Local_78[3 /*3*/], 50f))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_66[3]) && iLocal_97)
									{
										func_6(&(iLocal_66[3]), &(iLocal_72[3]));
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_66[3], 104, "AirplaneLandingRedux", true);
										iLocal_104 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_66[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_66[3], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_66[3]))
						{
							func_5();
							iLocal_104 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()
{
	fLocal_102 = 0f;
	iLocal_94 = 0;
	iLocal_98 = 1;
	iLocal_96 = 0;
}

void func_6(var uParam0, var uParam1)
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, true, false);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, true, false);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
}

void func_7()
{
	struct<3> Var0;
	
	switch (iLocal_100)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_71))
			{
				iLocal_71 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0f, true, true, false);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_71, 1000);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_71, true, true, false);
				VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(iLocal_71, false);
				iLocal_77 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_71, 4, iLocal_101, -1, true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_77, true);
				iLocal_100 = 1;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_71) && !ENTITY::IS_ENTITY_DEAD(iLocal_71, false))
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_71))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_71, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_100 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_71) && !ENTITY::IS_ENTITY_DEAD(iLocal_71, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_71))
				{
					if ((ENTITY::IS_ENTITY_OCCLUDED(iLocal_71) && !CAM::IS_SPHERE_VISIBLE(-1602.086f, -2674.039f, 12.9444f, 50f)) && SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_71, true)) > 62500f)
					{
						iLocal_100 = 1;
					}
				}
			}
			break;
	}
}

void func_8(var uParam0, var uParam1)
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, false, false);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
}

void func_9()
{
}

int func_10()
{
	return 1;
}

void func_11()
{
}

void func_12()
{
	func_1();
	func_13();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_13()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_106))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_106))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_106);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_106, false) && !PED::IS_PED_INJURED(iLocal_107))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_106);
			PED::SET_PED_KEEP_TASK(iLocal_107, true);
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_106, true) };
			fVar9 = ENTITY::GET_ENTITY_HEADING(iLocal_106);
			Var3 = { 0f, 500f, 50f };
			Var6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar9, Var3) };
			TASK::TASK_HELI_MISSION(iLocal_107, iLocal_106, 0, 0, Var6, 4, 50f, -1f, 0f, 100, 50, -1f, 0);
		}
	}
	if (bLocal_112)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "HelicopterTakeOff");
	}
}

