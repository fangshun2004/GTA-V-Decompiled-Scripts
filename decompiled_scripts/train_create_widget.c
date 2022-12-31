#region Local Var
	Vehicle veLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	int iLocal_4 = 0;
	float fLocal_5 = 0f;
	BOOL bLocal_6 = 0;
	BOOL bLocal_7 = 0;
	BOOL bLocal_8 = 0;
	BOOL bLocal_9 = 0;
#endregion

void main() // Hash - 0x68A8A2E0 ^0xA7C4AB59
{
	uLocal_1 = { 613f, 6438f, 31f };
	fLocal_5 = 5f;
	bLocal_6 = true;
	MISC::SET_MISSION_FLAG(true);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_1();

	VEHICLE::SET_RANDOM_TRAINS(false);
	VEHICLE::DELETE_ALL_TRAINS();

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 626.68f, 6442.31f, 30.88f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -177f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	}

	STREAMING::REQUEST_MODEL(joaat("FREIGHT"));
	STREAMING::REQUEST_MODEL(joaat("FREIGHTCAR"));
	STREAMING::REQUEST_MODEL(joaat("FREIGHTGRAIN"));
	STREAMING::REQUEST_MODEL(joaat("FREIGHTCONT1"));
	STREAMING::REQUEST_MODEL(joaat("FREIGHTCONT2"));
	STREAMING::REQUEST_MODEL(joaat("TANKERCAR"));
	STREAMING::REQUEST_MODEL(joaat("METROTRAIN"));

	while (!STREAMING::HAS_MODEL_LOADED(joaat("FREIGHT")) || !STREAMING::HAS_MODEL_LOADED(joaat("FREIGHTCAR")) || !STREAMING::HAS_MODEL_LOADED(joaat("FREIGHTGRAIN")) || !STREAMING::HAS_MODEL_LOADED(joaat("FREIGHTCONT1")) || !STREAMING::HAS_MODEL_LOADED(joaat("FREIGHTCONT2")) || !STREAMING::HAS_MODEL_LOADED(joaat("TANKERCAR")) || !STREAMING::HAS_MODEL_LOADED(joaat("METROTRAIN")))
	{
		SYSTEM::WAIT(0);
	}

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (bLocal_7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_0))
					VEHICLE::DELETE_MISSION_TRAIN(&veLocal_0);
			
				veLocal_0 = VEHICLE::CREATE_MISSION_TRAIN(iLocal_4, uLocal_1, bLocal_6, 0, 0);
				bLocal_7 = false;
			}
		
			if (bLocal_9)
			{
				uLocal_1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				bLocal_9 = false;
			}
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_0, false) && !ENTITY::IS_ENTITY_DEAD(veLocal_0, false))
			{
				VEHICLE::SET_TRAIN_SPEED(veLocal_0, fLocal_5);
				VEHICLE::SET_TRAIN_CRUISE_SPEED(veLocal_0, fLocal_5);
			}
		
			if (bLocal_8)
				func_1();
		}
	}

	return;
}

void func_1() // Hash - 0xDEDA35C7 ^0x651033F9
{
	VEHICLE::SET_RANDOM_TRAINS(true);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

