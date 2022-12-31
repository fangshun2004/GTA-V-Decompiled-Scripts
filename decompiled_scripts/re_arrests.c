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
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	Ped pedLocal_54 = 0;
	Ped pedLocal_55 = 0;
	Ped pedLocal_56 = 0;
	Vehicle veLocal_57 = 0;
	Blip blLocal_58 = 0;
	Blip blLocal_59 = 0;
	Object obLocal_60 = 0;
	BOOL bLocal_61 = 0;
	var uLocal_62 = 0;
	BOOL bLocal_63 = 0;
	BOOL bLocal_64 = 0;
	float fLocal_65 = 0f;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	float fLocal_68 = 0f;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	Hash hLocal_71 = 0;
	Hash hLocal_72 = 0;
	int iLocal_73 = 0;
	BOOL bLocal_74 = 0;
	BOOL bLocal_75 = 0;
	BOOL bLocal_76 = 0;
	BOOL bLocal_77 = 0;
	var uLocal_78 = 16;
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
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
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
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	BOOL bLocal_248 = 0;
	BOOL bLocal_249 = 0;
	float fLocal_250 = 0f;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	char* sLocal_256 = 0;
	char* sLocal_257 = 0;
	char* sLocal_258 = 0;
	char* sLocal_259 = 0;
	char* sLocal_260 = 0;
	BOOL bLocal_261 = 0;
	BOOL bLocal_262 = 0;
	BOOL bLocal_263 = 0;
	int iLocal_264 = 0;
	char* sLocal_265 = 0;
	char* sLocal_266 = 0;
	char* sLocal_267 = 0;
	char* sLocal_268 = 0;
	char* sLocal_269 = 0;
	char* sLocal_270 = 0;
	char* sLocal_271 = 0;
	char* sLocal_272 = 0;
	char* sLocal_273 = 0;
	char* sLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	BOOL bLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	BOOL bLocal_287 = 0;
	BOOL bLocal_288 = 0;
	BOOL bLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	BOOL bLocal_293 = 0;
	BOOL bLocal_294 = 0;
	float fLocal_295 = 0f;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	BOOL bLocal_298 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void main() // Hash - 0x5D84F89F ^0x5D84F89F
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_244 = 8000;
	iLocal_247 = 8;
	bLocal_249 = true;
	sLocal_257 = "S_M_Y_RANGER_01_WHITE_FULL_01";
	sLocal_258 = "RANDOM@ARRESTS";
	sLocal_259 = "RANDOM@ARRESTS@BUSTED";
	bLocal_263 = 1;
	fLocal_65 = { uScriptParam_0.f_1[0 /*3*/] };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		bLocal_76 = true;
		func_207();
		func_177();
	}

	if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, fLocal_65) < 10f)
		iLocal_53 = 1;
	else
		iLocal_53 = 2;

	if (func_134(fLocal_65, 15, iLocal_53, false, false))
		func_129(15);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	
		switch (iLocal_48)
		{
			case 0:
				if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_128() && !func_115())
					if (func_112())
						iLocal_48 = 1;
				else
					func_177();
				break;
		
			case 1:
				if (func_108())
				{
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(2551.0378f, 4708.6133f, 32.6775f, 2536.979f, 5022.1787f, 43.8519f, 300f, false, true, true);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					func_97(true);
					iLocal_48 = 2;
				}
				else if (!func_96(200f))
				{
					func_177();
				}
				break;
		
			case 2:
				if (func_96(1128792064))
					func_1();
				else
					func_177();
				break;
		}
	}

	return;
}

void func_1() // Hash - 0xF167DF35 ^0x9F662BC5
{
	var address;
	Vector3 vector;
	float distanceBetweenCoords;
	BOOL flag;
	float distanceBetweenCoords2;

	MISC::SET_BIT(&address, 3);
	MISC::SET_BIT(&address, 4);
	flag = false;
	func_95();

	if (!PED::IS_PED_INJURED(pedLocal_55))
		PED::SET_PED_RESET_FLAG(pedLocal_55, 129, true);

	if (func_94(pedLocal_55))
		if (PED::IS_PED_BEING_STUNNED(pedLocal_55, 0))
			bLocal_298 = true;

	if (!PED::IS_PED_INJURED(pedLocal_54) && iLocal_49 != 2 && iLocal_49 != 1)
	{
		if (!PED::IS_PED_INJURED(pedLocal_55))
		{
			switch (iLocal_52)
			{
				case 0:
					GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
				
					if (SYSTEM::TIMERA() > 10)
						if (!bLocal_74)
							if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_54, SCRIPT_TASK_GO_TO_ENTITY) == 7)
								TASK::TASK_GO_TO_ENTITY(pedLocal_54, pedLocal_55, -1, 1f, 3f, 1073741824, 0);
				
					if (SYSTEM::TIMERA() > 4000)
					{
						if (!bLocal_74)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_SMART_FLEE_PED) == 7)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_PLAY_ANIM) == 1)
									TASK::STOP_ANIM_PLAYBACK(pedLocal_55, 2, true);
							
								TASK::TASK_SMART_FLEE_PED(pedLocal_55, pedLocal_54, 150f, -1, false, false);
							}
						}
					}
				
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_54, true), ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), true);
				
					if (SYSTEM::TIMERA() > 8000 || distanceBetweenCoords < 1.5f)
					{
						flag = func_90();
					
						if (flag == true)
							TASK::TASK_GO_TO_ENTITY(pedLocal_54, pedLocal_55, -1, 1f, 0.01f, 1073741824, 0);
					}
				
					if (SYSTEM::TIMERA() > 30000 && distanceBetweenCoords < 10f)
						flag = true;
				
					if (SYSTEM::TIMERA() > 2000)
					{
						if (flag || bLocal_278 == true)
						{
							if (!func_89())
							{
								func_74(&uLocal_78, "REARRAU", "REARR_PCUFF", 4, iLocal_254, 0, 0);
								bLocal_294 = PED::IS_PED_RAGDOLL(pedLocal_55) || TASK::IS_PED_GETTING_UP(pedLocal_55);
							
								if (!WEAPON::HAS_PED_GOT_WEAPON(pedLocal_54, joaat("WEAPON_PISTOL"), false))
									WEAPON::GIVE_WEAPON_TO_PED(pedLocal_54, joaat("WEAPON_PISTOL"), -1, false, true);
							
								WEAPON::SET_CURRENT_PED_WEAPON(pedLocal_54, joaat("WEAPON_PISTOL"), true);
								fLocal_68 = { ENTITY::GET_ENTITY_COORDS(pedLocal_55, true) };
								TASK::CLEAR_PED_TASKS(pedLocal_54);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
							
								if (!bLocal_294 && distanceBetweenCoords > 2f)
									TASK::TASK_SHOOT_AT_COORD(0, fLocal_68, fLocal_68.f_1, fLocal_68.f_2 + 4f, 1000, joaat("FIRING_PATTERN_SINGLE_SHOT"));
							
								TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_55, -1, SLF_WHILE_NOT_IN_FOV, 2);
								TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, pedLocal_55, pedLocal_55, 1f, false, 3f, 1082130432, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
								TASK::TASK_AIM_GUN_AT_ENTITY(0, pedLocal_55, 5000, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_54, iLocal_73);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_54);
								PED::SET_PED_KEEP_TASK(pedLocal_54, true);
								SYSTEM::SETTIMERA(0);
								iLocal_246 = MISC::GET_GAME_TIMER();
							
								if (bLocal_294)
								{
									TASK::CLEAR_PED_TASKS(pedLocal_55);
									WEAPON::SET_PED_DROPS_WEAPON(pedLocal_55);
									iLocal_52 = 4;
								}
								else
								{
									iLocal_52 = 2;
								}
							}
							else if (!bLocal_278)
							{
								TASK::TASK_GO_TO_ENTITY(pedLocal_54, pedLocal_55, -1, 1f, 0.01f, 1073741824, 0);
								bLocal_278 = true;
							}
						}
						else
						{
							func_73();
						}
					}
					else
					{
						GRAPHICS::DRAW_DEBUG_TEXT_2D("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
				
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!PED::IS_PED_INJURED(pedLocal_54) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), pedLocal_54))
							{
								TASK::CLEAR_PED_TASKS(pedLocal_54);
								iLocal_52 = 1;
								TASK::TASK_STAND_STILL(pedLocal_54, 500);
							}
						}
					}
					break;
			
				case 1:
					if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_54, SCRIPT_TASK_STAND_STILL) == 7)
					{
						TASK::TASK_GO_TO_ENTITY(pedLocal_54, pedLocal_55, -1, 1f, 3f, 1073741824, 0);
						iLocal_52 = 0;
					}
					break;
			
				case 2:
					if (MISC::GET_GAME_TIMER() - iLocal_246 > 1000)
					{
						vector = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(pedLocal_55) * 3f };
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_55, vector, 2f, -1, 1f, 1024, 1193033728);
						iLocal_52 = 3;
					}
					break;
			
				case 3:
					if (MISC::GET_GAME_TIMER() - iLocal_246 > 4500)
						iLocal_52 = 4;
					break;
			
				case 4:
					bLocal_74 = true;
					TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
					TASK::TASK_PLAY_ANIM(0, sLocal_258, "idle_2_hands_up", 2f, -8f, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_258, "kneeling_arrest_idle", 8f, -8f, -1, 1, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_73);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_55);
					PED::SET_PED_KEEP_TASK(pedLocal_55, true);
					WEAPON::REMOVE_ALL_PED_WEAPONS(pedLocal_55, true);
					iLocal_52 = 5;
					break;
			
				case 5:
					if (iLocal_50 == 3)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_54, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
						{
							TASK::CLEAR_PED_TASKS(pedLocal_54);
						
							if (!WEAPON::HAS_PED_GOT_WEAPON(pedLocal_54, joaat("WEAPON_PISTOL"), false))
								WEAPON::GIVE_WEAPON_TO_PED(pedLocal_54, joaat("WEAPON_PISTOL"), -1, false, true);
						
							WEAPON::SET_CURRENT_PED_WEAPON(pedLocal_54, joaat("WEAPON_PISTOL"), true);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, pedLocal_55, -1, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_54, iLocal_73);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
							PED::SET_PED_KEEP_TASK(pedLocal_54, true);
							iLocal_52 = 6;
						}
					}
					break;
			
				case 6:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_57, false) && !PED::IS_PED_INJURED(pedLocal_56))
					{
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(veLocal_57, true);
					
						if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_54, SCRIPT_TASK_PLAY_ANIM) == 7)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_56, SCRIPT_TASK_VEHICLE_MISSION) == 7)
							{
								if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedLocal_55, veLocal_57, 2, false, false))
								{
									if (!PED::IS_PED_INJURED(pedLocal_55))
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_55, veLocal_57))
										{
											if (!PED::IS_PED_IN_COMBAT(pedLocal_55, 0))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_ENTER_VEHICLE) == 7)
												{
													TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
													TASK::TASK_PLAY_ANIM(0, sLocal_258, "kneeling_arrest_get_up", 8f, -2f, -1, 0, 0, false, false, false);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
													TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_73);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, hLocal_72, hLocal_71);
													PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, hLocal_71, hLocal_72);
												}
											}
										}
									}
								
									if (!PED::IS_PED_INJURED(pedLocal_54))
									{
										PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(pedLocal_54);
									
										if (!PED::IS_PED_IN_COMBAT(pedLocal_54, 0))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_57, false))
											{
												if (!func_89())
												{
													if (func_74(&uLocal_78, "REARRAU", "REARR_INCAR", 4, iLocal_254, 0, 0))
													{
														if (func_72(pedLocal_54, veLocal_57) == 2)
															if (PED::IS_PED_FACING_PED(pedLocal_56, pedLocal_55, 180f))
																fLocal_295 = { 2.978f, -0.75f, 1f };
															else
																fLocal_295 = { 2.978f, 0.75f, 1f };
														else if (PED::IS_PED_FACING_PED(pedLocal_56, pedLocal_55, 180f))
															fLocal_295 = { -2.978f, -0.75f, 1f };
														else
															fLocal_295 = { -2.978f, 0.75f, 1f };
													
														TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
														TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_57, fLocal_295), pedLocal_55, 0.75f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 60000);
														TASK::TASK_AIM_GUN_AT_ENTITY(0, pedLocal_55, -1, false);
														TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
														TASK::TASK_PERFORM_SEQUENCE(pedLocal_54, iLocal_73);
														TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
														PED::SET_PED_KEEP_TASK(pedLocal_54, true);
														VEHICLE::SET_VEHICLE_SIREN(veLocal_57, false);
														iLocal_244 = 8000;
														SYSTEM::SETTIMERB(0);
														iLocal_277 = MISC::GET_GAME_TIMER();
														iLocal_52 = 7;
													}
												}
											}
										}
									}
								}
								else
								{
									func_71();
								}
							}
						}
					}
					break;
			
				case 7:
					if (!PED::IS_PED_INJURED(pedLocal_54))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_54, 35f, 35f, 35f, false, true, 0))
						{
							if (MISC::GET_GAME_TIMER() - iLocal_277 > 8000)
							{
								if (!func_89())
								{
									TASK::TASK_LOOK_AT_ENTITY(pedLocal_54, PLAYER::PLAYER_PED_ID(), 6000, SLF_WHILE_NOT_IN_FOV, 2);
									func_74(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
									iLocal_244 = 8000;
									iLocal_277 = MISC::GET_GAME_TIMER();
								}
							}
						}
					
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_57, false))
						{
							if (bLocal_64)
							{
								if (func_72(pedLocal_54, veLocal_57) == 2)
									TASK::TASK_ENTER_VEHICLE(pedLocal_55, veLocal_57, -1, 2, 1f, 1, 0);
								else
									TASK::TASK_ENTER_VEHICLE(pedLocal_55, veLocal_57, -1, 1, 1f, 1, 0);
							
								iLocal_52 = 8;
							}
							else if (bLocal_63)
							{
								distanceBetweenCoords2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), ENTITY::GET_ENTITY_COORDS(veLocal_57, true), true);
							
								if (distanceBetweenCoords2 < 4f && iLocal_285 == 0)
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(pedLocal_55, veLocal_57, 60000, 0.5f, fLocal_295, fLocal_295.f_1, 1f, 1);
									iLocal_285 = 1;
								}
								else if (distanceBetweenCoords2 < 3f)
								{
									TASK::CLEAR_PED_TASKS(pedLocal_55);
									bLocal_64 = true;
								}
							}
							else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_55, sLocal_258, "kneeling_arrest_get_up", 3))
							{
								if (func_72(pedLocal_54, veLocal_57) == 2)
									fLocal_295 = { 1.578f, -0.5f, 1f };
								else
									fLocal_295 = { -1.578f, -0.5f, 1f };
							
								TASK::TASK_GOTO_ENTITY_OFFSET_XY(pedLocal_55, veLocal_57, 60000, 0.5f, fLocal_295, fLocal_295.f_1, 1f, 1);
							
								if (bLocal_298)
									PED::SET_PED_MOVEMENT_CLIPSET(pedLocal_55, "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
								else
									PED::SET_PED_MOVEMENT_CLIPSET(pedLocal_55, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
							
								bLocal_63 = true;
							}
						}
					}
					break;
			
				case 8:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_57, false))
					{
						if (!PED::IS_PED_INJURED(pedLocal_56))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_55, veLocal_57))
							{
								if (HUD::DOES_BLIP_EXIST(blLocal_58))
									HUD::REMOVE_BLIP(&blLocal_58);
							
								if (HUD::DOES_BLIP_EXIST(blLocal_59))
									HUD::REMOVE_BLIP(&blLocal_59);
							
								if (PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_54, veLocal_57))
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(pedLocal_56, veLocal_57, 10f, 786603);
									PED::SET_PED_KEEP_TASK(pedLocal_56, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_54, false);
									func_177();
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_54, SCRIPT_TASK_ENTER_VEHICLE) == 7)
								{
									TASK::CLEAR_PED_TASKS(pedLocal_54);
									TASK::TASK_ENTER_VEHICLE(pedLocal_54, veLocal_57, 20000, 0, 1f, 1, 0);
									PED::SET_PED_KEEP_TASK(pedLocal_54, true);
								}
							}
						}
					}
					break;
			}
		}
	}

	func_57();
	PED::IS_PED_INJURED(pedLocal_55);

	if (PED::IS_PED_INJURED(pedLocal_54))
	{
		if (!PED::IS_PED_INJURED(pedLocal_55))
		{
			if (iLocal_49 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_49 == 1 || iLocal_49 == 3)
					if (!func_89())
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 20f)
							func_74(&uLocal_78, "REARRAU", sLocal_274, 4, iLocal_254, 0, 0);
			
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
					TASK::TASK_PLAY_ANIM(0, sLocal_258, "kneeling_arrest_get_up", 2f, -2f, -1, 0, 0, false, false, false);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_73);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(pedLocal_55, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_55, true);
				}
			
				SYSTEM::WAIT(0);
			
				if (iLocal_49 == 0)
					iLocal_49 = 2;
			
				func_177();
			}
		}
	}

	if (PED::IS_PED_INJURED(pedLocal_55))
		if (!bLocal_61)
			if (func_11())
				func_3(false);

	if (iLocal_52 == 5 || iLocal_52 == 6)
		if (!bLocal_61)
			if (iLocal_49 == 3)
				if (func_11())
					func_3(false);
			else
				func_3(true);

	func_2();
	return;
}

void func_2() // Hash - 0xFE3DF374 ^0x326B090E
{
	int num;
	Vector3 vector;

	vector = { 40f, 40f, 20f };

	if (MISC::GET_GAME_TIMER() > iLocal_255 + 1000)
	{
		if (!PED::IS_PED_INJURED(pedLocal_54))
			if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_54, PLAYER::PLAYER_PED_ID(), vector, false, true, 0))
				num = num + 1;
		else
			num = num + 1;
	
		if (!PED::IS_PED_INJURED(pedLocal_55))
			if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), vector, false, true, 0))
				num = num + 1;
		else
			num = num + 1;
	
		if (num == 2)
			iLocal_254 = 1;
		else
			iLocal_254 = 0;
	
		iLocal_255 = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_3(BOOL bParam0) // Hash - 0x3224F0A3 ^0xB0CF31BD
{
	char* animationName;
	char* animationName2;
	char* animationName3;

	if (bParam0)
	{
		animationName = "radio_enter";
		animationName2 = "radio_chatter";
		animationName3 = "radio_exit";
	}
	else
	{
		animationName = "generic_radio_enter";
		animationName2 = "generic_radio_chatter";
		animationName3 = "generic_radio_exit";
	}

	if (!PED::IS_PED_INJURED(pedLocal_54))
	{
		switch (iLocal_50)
		{
			case 0:
				if (iLocal_243 == 3 || iLocal_52 == 5 || iLocal_52 == 6)
				{
					if (!func_89())
					{
						TASK::CLEAR_PED_TASKS(pedLocal_54);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
						TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_55, false), 10000, 0, 2);
						TASK::TASK_PLAY_ANIM(0, sLocal_258, animationName, 8f, -4f, -1, 0, 0, false, false, false);
						TASK::TASK_PLAY_ANIM(0, sLocal_258, animationName2, 16f, -8f, -1, 1, 0, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_54, iLocal_73);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
						iLocal_50 = 1;
					}
				}
				break;
		
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_54, sLocal_258, animationName2, 3))
					if (!PED::IS_PED_INJURED(pedLocal_55))
						if (!func_89())
							if (func_74(&uLocal_78, "REARRAU", "REARR_PRAD1", 4, iLocal_254, 0, 0))
								iLocal_50 = 2;
					else if (func_10())
						if (!func_89())
							if (func_74(&uLocal_78, "REARRAU", "REARR_PRAD2", 4, iLocal_254, 0, 0))
								iLocal_50 = 2;
				break;
		
			case 2:
				if (!func_89())
				{
					if (func_10())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_57, false))
						{
							VEHICLE::SET_VEHICLE_HAS_MUTED_SIRENS(veLocal_57, false);
							VEHICLE::SET_VEHICLE_SIREN(veLocal_57, true);
						}
					
						TASK::CLEAR_PED_TASKS(pedLocal_54);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
						TASK::TASK_PLAY_ANIM(0, sLocal_258, animationName3, 8f, -1.5f, -1, 0, 0, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_54, iLocal_73);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_54, false, false);
						func_8();
						iLocal_50 = 3;
					}
				}
				break;
		
			case 3:
				if (!bLocal_74)
					func_7();
			
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_55) || !ENTITY::IS_ENTITY_DEAD(pedLocal_55, false))
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55))
						if (!func_89())
							func_74(&uLocal_78, "REARRAU", "REARR_PWTF", 4, iLocal_254, 0, 0);
			
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_54, 35f, 35f, 35f, false, true, 0))
				{
					PED::SET_IK_TARGET(pedLocal_54, 1, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f, 0, -1, -1);
					PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, pedLocal_54, 31086, 0f, 0f, 0f, 0, -1, -1);
				
					if (SYSTEM::TIMERB() > iLocal_244 || bLocal_262)
					{
						if (iLocal_49 == 3 || iLocal_49 == 0)
						{
							if (!PED::IS_PED_INJURED(pedLocal_55))
							{
								if (iLocal_244 == 8000 || bLocal_262)
								{
									if (bLocal_261)
										func_6();
									else
										func_4();
								}
								else if (!func_89())
								{
									TASK::TASK_LOOK_AT_ENTITY(pedLocal_54, PLAYER::PLAYER_PED_ID(), 500, SLF_WHILE_NOT_IN_FOV, 2);
									func_74(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
									iLocal_244 = 8000;
								}
							}
							else if (iLocal_244 == 8000)
							{
								if (!func_89())
								{
									func_74(&uLocal_78, "REARRAU", "REARR_PRA2", 4, iLocal_254, 0, 0);
									iLocal_244 = 20000;
								}
							}
							else if (!func_89())
							{
								func_74(&uLocal_78, "REARRAU", "REARR_PRA2", 4, iLocal_254, 0, 0);
								iLocal_244 = 8000;
							}
						
							SYSTEM::SETTIMERB(0);
						}
						else
						{
							if (PED::IS_PED_INJURED(pedLocal_55))
							{
								if (!func_89())
								{
									func_74(&uLocal_78, "REARRAU", "REARR_PRA2", 4, iLocal_254, 0, 0);
									iLocal_244 = 30000;
								}
							}
							else if (!func_89())
							{
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_54, PLAYER::PLAYER_PED_ID(), 6000, SLF_WHILE_NOT_IN_FOV, 2);
								func_74(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
								iLocal_244 = MISC::GET_RANDOM_INT_IN_RANGE(8, 22);
								iLocal_244 = iLocal_244 * 30000;
							}
						
							SYSTEM::SETTIMERB(0);
						}
					}
				}
			
				if (iLocal_52 != 8)
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_57, false))
						if (!PED::IS_PED_INJURED(pedLocal_55))
							if (!PED::IS_PED_IN_VEHICLE(pedLocal_55, veLocal_57, false))
								func_71();
					else
						func_71();
				break;
		}
	}

	return;
}

void func_4() // Hash - 0xDFD57BE3 ^0x58DD30A4
{
	if (!bLocal_262)
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
		{
			case 0:
				sLocal_260 = "idle_a";
				break;
		
			case 1:
				sLocal_260 = "idle_b";
				break;
		
			case 2:
				sLocal_260 = "idle_c";
				break;
		}
	
		TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
		TASK::TASK_PLAY_ANIM(0, sLocal_259, "enter", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_259, sLocal_260, 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_259, "exit", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_258, "kneeling_arrest_idle", 8f, -8f, -1, 9, 0, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_73);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
		bLocal_262 = true;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_55, sLocal_259, "enter", 3))
	{
		if (func_5())
			func_74(&uLocal_78, "REARRAU", "REARR_PRAND", 4, iLocal_254, 0, 0);
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_55, sLocal_259, "exit", 3))
	{
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_55, sLocal_259, sLocal_260, 3))
	{
		func_74(&uLocal_78, "REARRAU", sLocal_272, 4, iLocal_254, 0, 0);
	}
	else
	{
		func_8();
	}

	return;
}

BOOL func_5() // Hash - 0x659E0071 ^0x3FF9F440
{
	if (MISC::GET_GAME_TIMER() > iLocal_264 + 6000)
	{
		iLocal_264 = MISC::GET_GAME_TIMER();
		return true;
	}

	return false;
}

void func_6() // Hash - 0x5F647B77 ^0x9CB96FCC
{
	if (!bLocal_262)
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
		TASK::TASK_PLAY_ANIM(0, sLocal_258, "radio_enter", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_258, "radio_chatter", 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sLocal_258, "radio_exit", 8f, -1.5f, -1, 0, 0, false, false, false);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, pedLocal_55, -1, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_54, iLocal_73);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
		bLocal_262 = true;
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_54, sLocal_258, "radio_chatter", 3))
	{
		if (func_5())
			func_74(&uLocal_78, "REARRAU", "REARR_PRAD3", 4, iLocal_254, 0, 0);
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_54, sLocal_258, "radio_exit", 3))
	{
		bLocal_263 = false;
		func_8();
	}

	return;
}

void func_7() // Hash - 0xBF200EDA ^0x8D5EE1C6
{
	switch (iLocal_51)
	{
		case 0:
			if (!bLocal_74)
			{
				if (iLocal_49 == 3)
					iLocal_51 = 1;
				else if (iLocal_49 == 0)
					iLocal_51 = 1;
			
				ENTITY::IS_ENTITY_DEAD(pedLocal_54, false);
				ENTITY::IS_ENTITY_DEAD(pedLocal_55, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_54) && ENTITY::DOES_ENTITY_EXIST(pedLocal_55))
					TASK::TASK_GOTO_ENTITY_OFFSET_XY(pedLocal_54, pedLocal_55, -1, 3f, 0f, 0f, 1f, 0);
			
				SYSTEM::SETTIMERB(0);
			}
			break;
	
		case 1:
			if (HUD::DOES_BLIP_EXIST(blLocal_58))
				HUD::REMOVE_BLIP(&blLocal_58);
		
			iLocal_51 = 2;
			iLocal_244 = 8000;
			iLocal_291 = MISC::GET_GAME_TIMER();
			break;
	
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_57, false))
			{
				if (MISC::GET_GAME_TIMER() - iLocal_291 > 20000)
				{
					if (!PED::IS_PED_INJURED(pedLocal_56))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_56, SCRIPT_TASK_VEHICLE_MISSION) == 7)
						{
							TASK::TASK_ENTER_VEHICLE(pedLocal_54, veLocal_57, -1, 0, 1f, 1, 0);
							iLocal_51 = 3;
						}
					}
				}
			}
			break;
	
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_57, false))
			{
				if (!PED::IS_PED_INJURED(pedLocal_56))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_54, veLocal_57))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(pedLocal_56, veLocal_57, 10f, 786603);
						PED::SET_PED_KEEP_TASK(pedLocal_56, true);
						func_177();
					}
				}
			}
			break;
	}

	return;
}

void func_8() // Hash - 0x7526363C ^0x3689CF6F
{
	bLocal_261 = func_9();
	bLocal_261 = bLocal_263;
	iLocal_244 = 20000;
	bLocal_262 = false;
	return;
}

BOOL func_9() // Hash - 0x6E373505 ^0x528400E3
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return 1;

	return 0;
}

BOOL func_10() // Hash - 0xA7308060 ^0xBCC7722A
{
	Vector3 entityCoords;
	float dx;
	Vector3 vector;
	var outVec1;
	Hash model;

	model = joaat("PRANGER");

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_57, false))
		return true;

	STREAMING::REQUEST_MODEL(model);

	if (STREAMING::HAS_MODEL_LOADED(model))
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(pedLocal_54, false), 1, &entityCoords, 1, 1077936128, 0))
		{
			if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&entityCoords, &vector, &outVec1, 0f, 180f, 50f, 1, 1, 1))
			{
				veLocal_57 = VEHICLE::CREATE_VEHICLE(model, vector, 0, true, true, false);
				pedLocal_56 = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_57, PED_TYPE_COP, joaat("S_M_Y_RANGER_01"), -1, true, true);
				PED::SET_PED_CONFIG_FLAG(pedLocal_56, 294, true);
			
				if (!WEAPON::HAS_PED_GOT_WEAPON(pedLocal_56, joaat("WEAPON_PISTOL"), false))
					WEAPON::GIVE_WEAPON_TO_PED(pedLocal_56, joaat("WEAPON_PISTOL"), -1, false, true);
			
				WEAPON::SET_CURRENT_PED_WEAPON(pedLocal_56, joaat("WEAPON_PISTOL"), true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_56, hLocal_71);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_57, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_56, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_57, 1084227584);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(veLocal_57, true);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(veLocal_57, true);
				entityCoords = { ENTITY::GET_ENTITY_COORDS(veLocal_57, true) };
				dx = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - entityCoords };
				ENTITY::SET_ENTITY_HEADING(veLocal_57, MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1));
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(pedLocal_54, false), 1, &entityCoords, 1, 1077936128, 0);
			
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, 2528.5625f, 2639.1147f, 36.9446f, true) < 75f)
					entityCoords = { 2473.6006f, 2496.7646f, 40.87f };
			
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(2538.7097f, 2592.0073f, 36.9446f, entityCoords, true) < 16f)
					entityCoords = { 2473.6006f, 2496.7646f, 40.87f };
			
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_56, veLocal_57, entityCoords, 4, 7f, 786471, 5f, -1f, true);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(veLocal_57, 4f);
				VEHICLE::SET_VEHICLE_SIREN(veLocal_57, true);
				bLocal_77 = true;
				VEHICLE::SET_RANDOM_TRAINS(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_11() // Hash - 0xCCCBDF1F ^0xAB83B879
{
	if (iLocal_49 != 3)
		iLocal_243 = 3;

	switch (iLocal_243)
	{
		case 0:
			if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_54, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 || MISC::GET_GAME_TIMER() > iLocal_246 + 15000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_54, 25f, 25f, 25f, false, true, 0))
				{
					if (!PED::IS_PED_INJURED(pedLocal_54))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_54);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
					
						if (!ENTITY::IS_ENTITY_DEAD(pedLocal_55, false))
							TASK::TASK_GO_TO_ENTITY(0, pedLocal_55, -1, 3.5f, 2f, 1073741824, 0);
					
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_54, iLocal_73);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
						iLocal_243 = 1;
					}
				}
				else
				{
					iLocal_243 = 3;
				}
			}
			break;
	
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_54, SCRIPT_TASK_PERFORM_SEQUENCE) == 1)
			{
				if (TASK::GET_SEQUENCE_PROGRESS(pedLocal_54) > 0)
				{
					if (!func_89())
					{
						if (iLocal_245 < 2)
						{
							func_74(&uLocal_78, "REARRAU", "REARR_PTHANK", 4, iLocal_254, 0, 0);
						
							if (HUD::DOES_BLIP_EXIST(blLocal_58))
								HUD::SET_BLIP_AS_FRIENDLY(blLocal_58, true);
						}
						else
						{
							func_74(&uLocal_78, "REARRAU", "REARR_PHELP", 4, iLocal_254, 0, 0);
						}
					
						iLocal_243 = 2;
					}
				}
			}
			else if (!func_89())
			{
				if (iLocal_245 < 2)
				{
					func_74(&uLocal_78, "REARRAU", "REARR_PTHANK", 4, iLocal_254, 0, 0);
				
					if (HUD::DOES_BLIP_EXIST(blLocal_58))
						HUD::SET_BLIP_AS_FRIENDLY(blLocal_58, true);
				}
				else
				{
					func_74(&uLocal_78, "REARRAU", "REARR_PHELP", 4, iLocal_254, 0, 0);
				}
			
				iLocal_243 = 2;
			}
			break;
	
		case 2:
			if (!func_89())
				iLocal_243 = 3;
		
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_54, PLAYER::PLAYER_PED_ID(), 100);
			break;
	
		case 3:
			return true;
	}

	return false;
}

void func_12() // Hash - 0xCF6F18F0 ^0x26F4B5C2
{
	BOOL hasEntityBeenDamagedByEntity;
	BOOL flag;

	hasEntityBeenDamagedByEntity = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), true);
	flag = func_56();
	flag;

	if (!PED::IS_PED_INJURED(pedLocal_55))
	{
		if (!hasEntityBeenDamagedByEntity)
		{
			if (!flag)
			{
				if (iLocal_49 == 2 || bLocal_74 == true)
				{
					switch (iLocal_247)
					{
						case 8:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							HUD::SET_BLIP_AS_FRIENDLY(blLocal_59, true);
						
							if (!ENTITY::IS_ENTITY_DEAD(pedLocal_55, false) && ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
								TASK::TASK_PLAY_ANIM(0, sLocal_258, "kneeling_arrest_get_up", 8f, -8f, -1, 0, 0, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_73);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
								iLocal_247 = 9;
							}
							else
							{
								iLocal_247 = 3;
							}
							break;
					
						case 9:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
								iLocal_247 = 0;
							break;
					
						case 0:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), 75f, 75f, 75f, false, true, 0))
							{
								AUDIO::STOP_PED_SPEAKING(pedLocal_55, true);
								iLocal_247 = 3;
							}
							break;
					
						case 1:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_55, ENTITY::GET_ENTITY_COORDS(pedLocal_54, false), 4f, 4f, 3f, false, true, 0))
							{
								iLocal_247 = 2;
							}
							else
							{
								TASK::CLEAR_PED_TASKS(pedLocal_55);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
								TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_54, false), 1000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_54, false), 2f, -1, 3f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_73);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
								iLocal_247 = 2;
							}
							break;
					
						case 2:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_55, ENTITY::GET_ENTITY_COORDS(pedLocal_54, false), 4f, 4f, 3f, false, true, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 || func_74(&uLocal_78, "REARRAU", sLocal_271, 4, iLocal_254, 0, 0))
									iLocal_247 = 6;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
								TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_54, false), 1000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_54, false), 2f, -1, 3f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_73);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
							}
							break;
					
						case 3:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), 5f, 5f, 3f, false, true, 0))
							{
								iLocal_247 = 4;
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), 75f, 75f, 75f, false, true, 0))
							{
								if (!func_89())
								{
									TASK::CLEAR_PED_TASKS(pedLocal_55);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
									TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 8f, 1073741824, 1073741824, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_73);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
									iLocal_247 = 4;
								}
							}
							else
							{
								iLocal_247 = 6;
							}
							break;
					
						case 4:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), 9f, 9f, 9f, false, true, 0))
							{
								iLocal_292 = MISC::GET_GAME_TIMER();
								iLocal_247 = 7;
							}
							break;
					
						case 7:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (!PED::IS_PED_HEADTRACKING_PED(pedLocal_55, PLAYER::PLAYER_PED_ID()))
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), -1, SLF_WIDEST_YAW_LIMIT | 2048, 2);
						
							if (!PED::IS_PED_FACING_PED(pedLocal_55, PLAYER::PLAYER_PED_ID(), 30f))
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), -1);
						
							if (MISC::GET_GAME_TIMER() - iLocal_292 > 2000)
								iLocal_247 = 5;
							break;
					
						case 5:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_55, sLocal_258, "Thanks_Male_05", 3) || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
							{
								if (!func_89())
								{
									if (iLocal_245 < 2)
									{
										func_74(&uLocal_78, "REARRAU", sLocal_266, 4, iLocal_254, 0, 0);
										TASK::TASK_PLAY_ANIM(pedLocal_55, sLocal_258, "Thanks_Male_05", 16f, -16f, -1, 16, 0, false, false, false);
									}
									else
									{
										func_74(&uLocal_78, "REARRAU", sLocal_270, 4, iLocal_254, 0, 0);
									}
								
									func_15(func_50(), 1, 250, false, false);
									TASK::TASK_CLEAR_LOOK_AT(pedLocal_55);
									iLocal_247 = 6;
								}
							}
							break;
					
						case 6:
							GRAPHICS::DRAW_DEBUG_TEXT_2D("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
						
							if (!func_89())
							{
								TASK::TASK_SMART_FLEE_PED(pedLocal_55, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
								func_177();
							}
							break;
					}
				}
			}
			else
			{
				if (!func_89())
					func_74(&uLocal_78, "REARRAU", sLocal_273, 4, iLocal_254, 0, 0);
			
				TASK::TASK_SMART_FLEE_PED(pedLocal_55, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
				func_177();
			}
		}
		else
		{
			func_13();
			TASK::TASK_SMART_FLEE_PED(pedLocal_55, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
		
			if (hasEntityBeenDamagedByEntity == true)
				iLocal_49 = 1;
		
			if (!func_89())
				func_74(&uLocal_78, "REARRAU", sLocal_270, 4, iLocal_254, 0, 0);
		
			func_177();
		}
	}

	return;
}

void func_13() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_14();
	return;
}

void func_14() // Hash - 0x21027D29 ^0xBEB9ECFD
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22736 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21725 = 6;
		return;
	}

	return;
}

void func_15(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Hash - 0xD1775FEC ^0xD1775FEC
{
	int outValue;
	Hash statHash;

	if (func_49(iParam0) == 3)
		return;

	if (func_49(iParam0) == 4)
		return;

	func_16(func_49(iParam0), 1, iParam1, iParam2, false);

	if (bParam3)
	{
		outValue = 0;
	
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					statHash = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case 1:
					statHash = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case 2:
					statHash = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					statHash = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case 1:
					statHash = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case 2:
					statHash = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
			
				default:
					return;
			}
		}
	
		STATS::STAT_GET_INT(statHash, &outValue, -1);
		outValue = outValue + iParam2;
		STATS::STAT_SET_INT(statHash, outValue, true);
	}

	return;
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Hash - 0x66394909 ^0x7ECE9AC7
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_48();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_47(99, 1);
					func_46(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 1:
					func_46(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 2:
					func_46(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
		
			func_30(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_27(5))
					{
						num = 0.9f;
						num2 = 5;
					}
					break;
			
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 1:
							func_46(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 2:
							func_46(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
				
					if (func_27(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 1:
							func_46(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 2:
							func_46(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 1:
							func_46(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 2:
							func_46(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
			
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 1:
							func_46(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 2:
							func_46(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
			
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("CLOTHES_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 1:
									func_46(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 2:
									func_46(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
					
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 1:
									func_46(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 2:
									func_46(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
						
							if (func_27(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 1:
									func_46(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 2:
									func_46(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
					
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 1:
									func_46(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 2:
									func_46(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
						
							func_26(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_47(95, iParam3);
					break;
			
				case 1:
					func_47(97, iParam3);
					break;
			
				case 2:
					func_47(96, iParam3);
					break;
			}
		
			func_47(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = SYSTEM::FLOOR(num * SYSTEM::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_19(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_19(num2);
	}

	num6 = Global_60536[num3] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_60536[num3] >= 0 && iParam3 > 0)
				if (num6 <= 0)
					Global_60536[num3] = 2147483647;
				else
					Global_60536[num3] = Global_60536[num3] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_46(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 1:
					func_46(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 2:
					func_46(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_60536[num3] - iParam3 < 0)
					return 0;
		
			num4 = Global_60536[num3];
			Global_60536[num3] = Global_60536[num3] - iParam3;
		
			if (bParam4)
				num5 = num4;
			break;
	}

	if (iParam2 == 1)
	{
		num5 > 20;
	}
	else
	{
		Global_113648.f_20566.f_233[num3 /*69*/].f_2[Global_113648.f_20566.f_233[num3 /*69*/].f_1 /*6*/] = iParam1;
		Global_113648.f_20566.f_233[num3 /*69*/].f_2[Global_113648.f_20566.f_233[num3 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113648.f_20566.f_233[num3 /*69*/].f_2[Global_113648.f_20566.f_233[num3 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113648.f_20566.f_233[num3 /*69*/] = Global_113648.f_20566.f_233[num3 /*69*/] + 1;
		Global_113648.f_20566.f_233[num3 /*69*/].f_1 = Global_113648.f_20566.f_233[num3 /*69*/].f_1 + 1;
	
		if (Global_113648.f_20566.f_233[num3 /*69*/].f_1 > 10)
			Global_113648.f_20566.f_233[num3 /*69*/].f_1 = 0;
	}

	func_18(iParam0);

	if (Global_43257 == 15)
		func_17(false);

	return 1;
}

void func_17(BOOL bParam0) // Hash - 0xB232D28E ^0x40CAA0C6
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/];
			Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_60544[i /*3*/][0] = Global_113648.f_20566[i];
		Global_60544.f_31[i /*3*/][0] = Global_113648.f_20566.f_11[i];
		Global_60544.f_62[i /*3*/][0] = Global_113648.f_20566.f_22[i];
		Global_60544.f_93[i /*3*/][0] = Global_113648.f_20566.f_33[i];
		Global_60544.f_124[i /*3*/][0] = Global_113648.f_20566.f_44[i];
		Global_60544.f_155[i /*3*/][0] = Global_113648.f_20566.f_55[i];
		Global_60544.f_186[i /*3*/][0] = Global_113648.f_20566.f_66[i];
		Global_60544.f_217[i /*3*/][0] = Global_113648.f_20566.f_77[i];
		Global_60544.f_248[i /*3*/][0] = Global_113648.f_20566.f_88[i];
	
		if (!bParam0)
		{
			Global_60544[i /*3*/][1] = Global_113648.f_20566[i];
			Global_60544.f_31[i /*3*/][1] = Global_113648.f_20566.f_11[i];
			Global_60544.f_62[i /*3*/][1] = Global_113648.f_20566.f_22[i];
			Global_60544.f_93[i /*3*/][1] = Global_113648.f_20566.f_33[i];
			Global_60544.f_124[i /*3*/][1] = Global_113648.f_20566.f_44[i];
			Global_60544.f_155[i /*3*/][1] = Global_113648.f_20566.f_55[i];
			Global_60544.f_186[i /*3*/][1] = Global_113648.f_20566.f_66[i];
			Global_60544.f_217[i /*3*/][1] = Global_113648.f_20566.f_77[i];
			Global_60544.f_248[i /*3*/][1] = Global_113648.f_20566.f_88[i];
		}
	}

	return;
}

void func_18(int iParam0) // Hash - 0xD2EB197 ^0x9FF73396
{
	int value;

	value = Global_60536[iParam0];

	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), value, true);
			break;
	
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), value, true);
			break;
	
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), value, true);
			break;
	}

	return;
}

void func_19(int iParam0) // Hash - 0x3705FAD4 ^0x3705FAD4
{
	BOOL flag;
	var txdName;

	if (iParam0 == 8)
	{
		func_25(129, false, -1);
		return;
	}

	if (iParam0 == 9)
	{
		func_25(135, false, -1);
		return;
	}

	if (iParam0 == 10)
	{
		func_25(136, false, -1);
		return;
	}

	if (iParam0 == 11)
	{
		func_25(137, false, -1);
		return;
	}

	if (iParam0 == 12)
	{
		func_22(8272, 0, -1, true, false);
		return;
	}

	if (iParam0 == 13)
	{
		func_22(8273, 0, -1, true, false);
		return;
	}

	if (iParam0 == 14)
	{
		func_22(8274, 0, -1, true, false);
		return;
	}

	if (iParam0 == 15)
	{
		func_22(8275, 0, -1, true, false);
		return;
	}

	if (iParam0 == 16)
	{
		func_22(8276, 0, -1, true, false);
		return;
	}

	if (iParam0 == 17)
	{
		func_22(8277, 0, -1, true, false);
		return;
	}

	flag = false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_113648.f_20566.f_471, iParam0))
		{
			flag = true;
			MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_113648.f_20566.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_21() /*5568*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_21() /*5568*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(_("You have redeemed your promotion for ~a~"));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_20(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* func_20(int iParam0) // Hash - 0xA17D549C ^0x2E50C1F3
{
	switch (iParam0)
	{
		case 0:
			return _("one free haircut.");
	
		case 1:
			return _("one free tattoo.");
	
		case 2:
			return _("10% off your next purchase at Warstock-Cache-and-Carry.com.");
	
		case 3:
			return _("10 percent off your next purchase at LegendaryMotorsport.net.");
	
		case 4:
			return _("10 percent off your next purchase at ElitasTravel.com.");
	
		case 5:
			return _("10 percent off your next medical expenses.");
	
		case 6:
			return _("one free can of Sprunk.");
	
		case 7:
			return _("one free respray.");
	
		case 8:
			return "COUP_XMAS2017";
	
		case 9:
			return "COUP_CAR_XMAS2018";
	
		case 10:
			return "COUP_HELI_XMAS2018";
	
		case 11:
			return "COUP_CAR2_XMAS2018";
	
		case 12:
			return _("10 percent off your next purchase at ElitasTravel.com.");
	
		case 13:
			return _("10 percent off your next purchase at DockTease.com.");
	
		case 14:
			return _("10 percent off your next purchase at LegendaryMotorsport.net.");
	
		case 15:
			return _("10 percent off your next purchase at southernsanandreassuperautos.com.");
	
		case 16:
			return _("10 percent off your next purchase at Warstock-Cache-and-Carry.com.");
	
		case 17:
			return _("10 percent off your next purchase at pandmcycles.com.");
	
		default:
			break;
	}

	return "";
}

int func_21() // Hash - 0xF9396AAC ^0xF9396AAC
{
	int num;

	num = 0;
	return num;
}

void func_22(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Hash - 0x7D768555 ^0x693A841
{
	Hash statName;

	bParam4;
	statName = Global_2805027[iParam0 /*3*/][func_23(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_23(int iParam0) // Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_24();
	
		if (num2 > -1)
		{
			Global_2804739 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2804739 = 1;
		}
	}

	return num;
}

int func_24() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

void func_25(int iParam0, BOOL bParam1, int iParam2) // Hash - 0xCF91FBA1 ^0xAE1D9C41
{
	if (iParam2 == -1)
		iParam2 = func_24();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_26(int iParam0) // Hash - 0x35B495B7 ^0x35B495B7
{
	func_47(93, iParam0);
	func_47(29, iParam0);
	func_47(30, iParam0);
	return;
}

BOOL func_27(int iParam0) // Hash - 0xA882C352 ^0xA882C352
{
	int cloudTimeAsInt;
	int num;
	int cloudTimeAsInt2;
	int num2;
	int cloudTimeAsInt3;
	int num3;
	int cloudTimeAsInt4;
	int num4;
	int cloudTimeAsInt5;
	int num5;
	int cloudTimeAsInt6;
	int num6;

	if (iParam0 == 8)
		return func_29(129, -1);

	if (iParam0 == 9)
		return func_29(135, -1);

	if (iParam0 == 10)
		return func_29(136, -1);

	if (iParam0 == 11)
		return func_29(137, -1);

	if (iParam0 == 12)
	{
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
		num = func_28(8272, -1, 0);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_28(8273, -1, 0);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_28(8274, -1, 0);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_28(8275, -1, 0);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_28(8276, -1, 0);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_28(8277, -1, 0);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_113648.f_20566.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_21() /*5568*/].f_681.f_10, iParam0);
}

int func_28(int iParam0, int iParam1, int iParam2) // Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_23(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_29(int iParam0, int iParam1) // Hash - 0x6099A833 ^0x46750A9D
{
	if (iParam1 == -1)
		iParam1 = func_24();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_30(BOOL bParam0) // Hash - 0xDC114C70 ^0xC626A2DE
{
	var outValue;
	int value;
	int outValue2;

	value = 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
		return 0;

	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	bParam0;
	outValue2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &outValue2, -1);

	if (value > 0 && outValue2 / 2000000 != value / 2000000)
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), value, true);
		func_45(27, value);
	}

	if (value < 200000000)
		return 0;

	func_31(27, 1);
	return 1;
}

int func_31(int iParam0, int iParam1) // Hash - 0x86FEA587 ^0x86FEA587
{
	if (iParam0 >= 78)
		return 0;

	return func_32(iParam0, iParam1);
}

int func_32(int iParam0, int iParam1) // Hash - 0x2EC23578 ^0x5A6CDDE0
{
	if (func_44(14) && !func_43(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_32414 != 0 && !Global_78558)
		return 0;

	if (func_42(&Global_4542597))
	{
		if (func_40(&Global_4542597, iParam0))
			return 0;
	
		if (func_33(&Global_4542597, iParam0))
			return 1;
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
			return 0;
	
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
			return 1;
	
		return 0;
	}

	return 0;
}

BOOL func_33(var uParam0, int iParam1) // Hash - 0x5631295D ^0x7E65A9A4
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_44(14) && !func_43(iParam1))
		return false;

	if (func_40(uParam0, iParam1))
		return false;

	if (func_39(uParam0) < 0f)
		func_38(uParam0, 0);

	func_36(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_34(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_34(var uParam0, int iParam1) // Hash - 0x80929C05 ^0xD2A2E174
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_44(14) && !func_43(iParam1))
		return 0;

	if (func_40(uParam0, iParam1))
		return 0;

	if (func_39(uParam0) < 0f)
		func_38(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_35(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_35(var uParam0, int iParam1) // Hash - 0xFE39C18F ^0xFE39C18F
{
	return uParam0->[iParam1] == 78;
}

void func_36(var uParam0) // Hash - 0x6E916534 ^0x6E916534
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_37(uParam0, i);
	}

	func_38(uParam0, Global_4542596 - 0.5f);
	return;
}

void func_37(var uParam0, int iParam1) // Hash - 0xE18ECB8F ^0xE18ECB8F
{
	uParam0->[iParam1] = 78;
	return;
}

void func_38(var uParam0, int iParam1) // Hash - 0x8B7064C5 ^0xE61DC398
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_39(var uParam0) // Hash - 0xD73B9827 ^0xE571889D
{
	return uParam0->f_80;
}

BOOL func_40(var uParam0, int iParam1) // Hash - 0xD7E1A70C ^0xD7E1A70C
{
	return func_41(uParam0, iParam1) != -1;
}

int func_41(var uParam0, int iParam1) // Hash - 0xA778BD6E ^0xA778BD6E
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_42(var uParam0) // Hash - 0x21364471 ^0xE4E379A4
{
	return uParam0->f_79 == 1;
}

BOOL func_43(int iParam0) // Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
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
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_44(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

BOOL func_45(int iParam0, int iParam1) // Hash - 0x77E0C72A ^0x80DA2A54
{
	int achievementProgress;

	if (iParam0 < 0)
		return false;

	if (iParam0 > 78)
		return false;

	if (iParam1 <= 0 || iParam1 > 100)
		return false;

	achievementProgress = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > achievementProgress)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return false;
}

void func_46(Hash hParam0, int iParam1) // Hash - 0x1F80E88A ^0x1E13AAF3
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

void func_47(int iParam0, int iParam1) // Hash - 0xE9A65642 ^0xF9847A54
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_59104[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_59104[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59104[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_59104[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

void func_48() // Hash - 0xFD5B61DC ^0x7C6336B1
{
	int outValue;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
	
		if (!Global_60536[0] == outValue)
			Global_60536[0] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
	
		if (!Global_60536[1] == outValue)
			Global_60536[1] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
	
		if (!Global_60536[2] == outValue)
			Global_60536[2] = outValue;
	}

	return;
}

int func_49(int iParam0) // Hash - 0x12DEE71A ^0xB4CACA6A
{
	return Global_2028[iParam0 /*29*/].f_17;
}

int func_50() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_51();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_51() // Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_54(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_53(PLAYER::PLAYER_PED_ID());
		
			if (func_52(num) && !func_44(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_52(Global_113648.f_2365.f_539.f_4321))
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
			
				Global_113648.f_2365.f_539.f_4323 = num;
				Global_113648.f_2365.f_539.f_4321 = num;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != 145)
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
		
			return;
		}
	}

	Global_113648.f_2365.f_539.f_4321 = 145;
	return;
}

BOOL func_52(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_53(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_54(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_54(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_52(iParam0))
		return func_55(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_55(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

BOOL func_56() // Hash - 0xCBB3A5D8 ^0xE71DB535
{
	float xSize;
	Ped randomPedAtCoord;
	Vehicle randomVehicleInSphere;

	xSize = 50f;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_57, false))
		if (ENTITY::IS_ENTITY_AT_ENTITY(veLocal_57, pedLocal_55, xSize, xSize, xSize, false, true, 0))
			return 1;

	randomPedAtCoord = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(pedLocal_55, false), xSize, xSize, xSize, -1);

	if (!PED::IS_PED_INJURED(randomPedAtCoord))
		if (ENTITY::GET_ENTITY_MODEL(randomPedAtCoord) == joaat("S_F_Y_COP_01") || ENTITY::GET_ENTITY_MODEL(randomPedAtCoord) == joaat("S_M_Y_COP_01"))
			return 1;

	randomPedAtCoord = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), xSize, xSize, xSize, -1);

	if (!PED::IS_PED_INJURED(randomPedAtCoord))
		if (ENTITY::GET_ENTITY_MODEL(randomPedAtCoord) == joaat("S_F_Y_COP_01") || ENTITY::GET_ENTITY_MODEL(randomPedAtCoord) == joaat("S_M_Y_COP_01"))
			return 1;

	randomVehicleInSphere = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(pedLocal_55, false), xSize, 0, 1024);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(randomVehicleInSphere, false))
		return 1;

	randomVehicleInSphere = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), xSize, 0, 1024);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(randomVehicleInSphere, false))
		return 1;

	return 0;
}

void func_57() // Hash - 0xD9CFE6C9 ^0xA8E4A231
{
	BOOL isEntityTouchingEntity;
	BOOL hasEntityBeenDamagedByEntity;
	int num;

	if (!PED::IS_PED_INJURED(pedLocal_55))
	{
		isEntityTouchingEntity = ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55);
		hasEntityBeenDamagedByEntity = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), true);
	
		if (hasEntityBeenDamagedByEntity || func_70() || func_68() || isEntityTouchingEntity)
		{
			func_67();
		
			if (bLocal_74)
			{
				if (isEntityTouchingEntity || hasEntityBeenDamagedByEntity && !PED::IS_PED_RAGDOLL(pedLocal_55) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_55);
					PED::SET_PED_TO_RAGDOLL(pedLocal_55, 500, 2000, 0, false, false, false);
					TASK::TASK_COWER(pedLocal_55, -1);
					PED::SET_PED_KEEP_TASK(pedLocal_55, true);
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false) && !PED::IS_PED_RAGDOLL(pedLocal_55))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_55);
					TASK::TASK_COWER(pedLocal_55, -1);
					PED::SET_PED_KEEP_TASK(pedLocal_55, true);
				}
			
				func_63(0);
			
				if (!func_89())
					if (!PED::IS_PED_INJURED(pedLocal_54) && iLocal_286 == 0)
						if (func_74(&uLocal_78, "REARRAU", "REARR_PWTF", 4, iLocal_254, 0, 0))
							iLocal_286 = 1;
			
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = 3;
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_59))
		{
			HUD::REMOVE_BLIP(&blLocal_59);
			func_62(&uLocal_78, 2);
		}
	
		func_67();
	
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), true))
		{
			if (bLocal_74)
			{
				func_63(1);
				iLocal_49 = 1;
			}
			else
			{
				iLocal_49 = 3;
			}
		}
	}

	if (!PED::IS_PED_INJURED(pedLocal_54))
	{
		if (bLocal_61)
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				func_177();
	
		PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0);
		num = 0;
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_56))
		{
			if (!PED::IS_PED_INJURED(pedLocal_56))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_56, PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(pedLocal_56) < 190 || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_56, PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_RAGDOLL(pedLocal_56))
					num = 1;
			
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_57) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_57, PLAYER::PLAYER_PED_ID(), true))
					num = 1;
			}
			else
			{
				num = 1;
			}
		}
	
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_54, PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(pedLocal_54) < 190 || func_61() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || func_60() || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_54, PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_RAGDOLL(pedLocal_54) || num == 1)
		{
			func_63(1);
		
			if (iLocal_49 == 3 || iLocal_49 == 1)
				iLocal_49 = 1;
			else
				iLocal_49 = 2;
		}
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_54, PLAYER::PLAYER_PED_ID(), true))
		{
			if (bLocal_287 == false)
			{
				bLocal_287 = true;
				iLocal_290 = MISC::GET_GAME_TIMER();
			}
		
			if (iLocal_49 == 3 || iLocal_49 == 1)
				iLocal_49 = 1;
			else
				iLocal_49 = 2;
		}
	
		if (!PED::IS_PED_INJURED(pedLocal_55))
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_55);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_58))
		{
			HUD::REMOVE_BLIP(&blLocal_58);
			func_62(&uLocal_78, 1);
		}
	}

	if (bLocal_287)
	{
		if (MISC::GET_GAME_TIMER() - iLocal_290 > 5000)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			bLocal_287 = false;
		}
	}

	if (!PED::IS_PED_INJURED(pedLocal_54) && !PED::IS_PED_INJURED(pedLocal_55))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_54, PLAYER::PLAYER_PED_ID(), true) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), true))
		{
			if (ENTITY::GET_ENTITY_HEALTH(pedLocal_54) < 190 && ENTITY::GET_ENTITY_HEALTH(pedLocal_55) < 190)
			{
				func_67();
				func_63(1);
				iLocal_49 = 1;
			}
		}
	
		if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, pedLocal_54, 110f, 110f, 40f, false, true, 0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_54, 20f, 20f, 20f, false, true, 0))
			{
				func_58();
				SYSTEM::WAIT(0);
				func_74(&uLocal_78, "REARRAU", "REARR_PORUN", 4, iLocal_254, 0, 0);
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 40f, 40f, 40f, false, true, 0))
			{
				func_58();
				SYSTEM::WAIT(0);
				func_74(&uLocal_78, "REARRAU", sLocal_267, 4, iLocal_254, 0, 0);
			}
		
			func_177();
		}
	}

	if (PED::IS_PED_INJURED(pedLocal_54) && PED::IS_PED_INJURED(pedLocal_55))
		func_177();

	if (PED::IS_PED_INJURED(pedLocal_55))
		if (!PED::IS_PED_INJURED(pedLocal_54))
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_54, 100f, 100f, 40f, false, true, 0))
				func_177();

	return;
}

void func_58() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_59();
	return;
}

void func_59() // Hash - 0xE32CF1EF ^0xB9A7BEB2
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22736 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1 == 9 || Global_20382 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21725 = 6;
		return;
	}

	return;
}

BOOL func_60() // Hash - 0x29D35C5A ^0x5C5E7B6F
{
	BOOL flag;

	flag = false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("BULLDOZER"))
			if (!PED::IS_PED_INJURED(pedLocal_54))
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), pedLocal_54))
					flag = true;
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_57, false))
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), veLocal_57))
				flag = true;
		else if (bLocal_77)
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_57, PLAYER::PLAYER_PED_ID(), true))
				flag = true;
	}

	flag;
	return flag;
}

BOOL func_61() // Hash - 0xC99F0878 ^0x7BFF41D8
{
	Vector3 vector;
	Vector3 vector2;
	int weaponHash;

	vector = { 3f, 3f, 3f };
	vector2 = { -3f, -3f, -3f };

	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_54, 31086, 0f, 0f, 0f), 0.5f, true))
		if (PED::IS_PED_INJURED(pedLocal_55))
			return true;
		else if (!MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_55, 31086, 0f, 0f, 0f), 2f, true))
			return true;

	if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(pedLocal_54, 31086, 0f, 0f, 0f), 3f))
		return true;

	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_54, 5f, 5f, 5f, false, true, 0))
	{
		if (!PED::IS_PED_INJURED(pedLocal_54))
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_54) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_54))
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true))
					if (weaponHash != joaat("WEAPON_UNARMED"))
						return true;
	
		if (!PED::IS_PED_INJURED(pedLocal_55))
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_55) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_55))
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true))
					if (weaponHash != joaat("WEAPON_UNARMED"))
						if (bLocal_74)
							return true;
	}

	vector = { vector + PED::GET_PED_BONE_COORDS(pedLocal_54, 31086, 0f, 0f, 0f) };
	vector2 = { vector2 + PED::GET_PED_BONE_COORDS(pedLocal_54, 31086, 0f, 0f, 0f) };

	if (MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_GRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_STICKYBOMB"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("VEHICLE_WEAPON_TANK"), true))
		return true;

	return false;
}

void func_62(var uParam0, int iParam1) // Hash - 0xD18CB130 ^0xA0F4C6FD
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

void func_63(int iParam0) // Hash - 0x658F434B ^0xB49D6AC5
{
	if (!PED::IS_PED_INJURED(pedLocal_54))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_54);
	
		if (!bLocal_61)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PED::SET_PED_CAN_BE_TARGETTED(pedLocal_54, true);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_58))
				HUD::SET_BLIP_AS_FRIENDLY(blLocal_58, false);
		
			if (iParam0 == 1)
			{
				if (!PED::IS_PED_INJURED(pedLocal_55))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_SMART_FLEE_PED) == 7)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
							TASK::TASK_PLAY_ANIM(0, sLocal_258, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, false, false, false);
							TASK::TASK_SMART_FLEE_PED(0, pedLocal_54, 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_73);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
							PED::FORCE_PED_MOTION_STATE(pedLocal_55, joaat("MOTIONSTATE_RUN"), false, 0, false);
							PED::SET_PED_KEEP_TASK(pedLocal_55, true);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(pedLocal_55);
							TASK::TASK_SMART_FLEE_PED(pedLocal_55, pedLocal_54, 150f, -1, false, false);
						}
					}
				}
			
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_55, false) && !PED::IS_PED_INJURED(pedLocal_55) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 20f)
						if (!func_89())
							func_74(&uLocal_78, "REARRAU", sLocal_273, 4, iLocal_254, 0, 0);
			}
		
			TASK::CLEAR_PED_TASKS(pedLocal_54);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_54, iLocal_73);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
			PED::SET_PED_KEEP_TASK(pedLocal_54, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_54, true, 0);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_57, false))
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_57, 1);
		
			func_65();
			SYSTEM::WAIT(0);
			SYSTEM::WAIT(0);
		
			if (!PED::IS_PED_INJURED(pedLocal_54))
				!PED::IS_PED_RAGDOLL(pedLocal_54);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_56))
				func_64();
		
			bLocal_61 = true;
		}
	}

	return;
}

void func_64() // Hash - 0x63470AEF ^0x8765F080
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_56))
	{
		if (!PED::IS_PED_INJURED(pedLocal_56))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_56, iLocal_73);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
			PED::SET_PED_KEEP_TASK(pedLocal_56, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_56, true, 0);
		}
	}

	return;
}

void func_65() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_66();
	return;
}

void func_66() // Hash - 0xF6D04E68 ^0x80AE5309
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22736 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21725 = 6;
	}

	return;
}

void func_67() // Hash - 0xF834E745 ^0xB5B9E41B
{
	if (!PED::IS_PED_INJURED(pedLocal_55))
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_59))
			HUD::SET_BLIP_AS_FRIENDLY(blLocal_59, false);
	
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_55);
	}

	return;
}

BOOL func_68() // Hash - 0xEBB64F3D ^0xEA951CBB
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_54, false))
		if (bLocal_74)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_54))
				if (MISC::GET_GAME_TIMER() - iLocal_276 > 1000)
					func_69();

	if (iLocal_275 >= 3)
		return true;

	return false;
}

void func_69() // Hash - 0x6819C38E ^0xC130773
{
	if (!func_89())
	{
		if (iLocal_275 < 3)
		{
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_54, PLAYER::PLAYER_PED_ID(), 6000, SLF_WHILE_NOT_IN_FOV, 2);
			func_74(&uLocal_78, "REARRAU", "REARR_PLEAVE", 4, iLocal_254, 0, 0);
		}
	}

	iLocal_275 = iLocal_275 + 1;
	iLocal_276 = MISC::GET_GAME_TIMER();
	return;
}

BOOL func_70() // Hash - 0xF52CCB5F ^0xAF08A0CD
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), pedLocal_55))
			if (bLocal_74)
				if (iLocal_52 != 7)
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), fLocal_68) > 2.5f)
						return 1;
				else
					return 1;
			else
				return 1;

	if (bLocal_74)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55))
			if (PED::IS_PED_RAGDOLL(pedLocal_55))
				if (iLocal_52 != 7)
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), fLocal_68) > 2.5f)
						return 1;
				else
					return 1;
			else if (bLocal_74)
				if (MISC::GET_GAME_TIMER() - iLocal_276 > 1000)
					func_69();

	if (iLocal_275 >= 3)
		return 1;

	return 0;
}

void func_71() // Hash - 0xED13FA1B ^0x18E02026
{
	if (!bLocal_75)
	{
		switch (iLocal_245)
		{
			case 0:
				if (!bLocal_61)
				{
					if (SYSTEM::TIMERA() > 80000)
					{
						if (!PED::IS_PED_INJURED(pedLocal_54))
						{
							if (!PED::IS_PED_INJURED(pedLocal_55))
							{
								func_58();
								SYSTEM::WAIT(0);
								func_74(&uLocal_78, "REARRAU", "REARR_PRAD3", 4, iLocal_254, 0, 0);
							}
						}
					
						iLocal_245 = 1;
					}
				}
				break;
		
			case 1:
				if (!func_89())
				{
					if (!PED::IS_PED_INJURED(pedLocal_55))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_55, sLocal_258, "kneeling_arrest_idle", 3))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
							TASK::TASK_PLAY_ANIM(0, sLocal_258, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, false, false, false);
							TASK::TASK_SMART_FLEE_PED(0, pedLocal_54, 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_73);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
							PED::FORCE_PED_MOTION_STATE(pedLocal_55, joaat("MOTIONSTATE_RUN"), false, 0, false);
							PED::SET_PED_KEEP_TASK(pedLocal_55, true);
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(pedLocal_55, pedLocal_54, 150f, -1, false, false);
						}
					
						PED::SET_PED_KEEP_TASK(pedLocal_55, true);
						ENTITY::SET_ENTITY_HEALTH(pedLocal_55, 101, 0);
						func_74(&uLocal_78, "REARRAU", sLocal_269, 4, iLocal_254, 0, 0);
						iLocal_245 = 2;
					}
				
					if (!PED::IS_PED_INJURED(pedLocal_54))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_54);
						iLocal_245 = 2;
					}
				}
				break;
		
			case 2:
				if (!PED::IS_PED_INJURED(pedLocal_54))
				{
					if (!PED::IS_PED_INJURED(pedLocal_55))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_72, hLocal_71);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_71, hLocal_72);
						TASK::TASK_COMBAT_PED(pedLocal_54, pedLocal_55, 0, 16);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(pedLocal_54, 1193033728, 0);
						func_177();
					}
				
					PED::SET_PED_KEEP_TASK(pedLocal_54, true);
				}
			
				bLocal_75 = true;
				break;
		}
	}

	return;
}

int func_72(Ped pedParam0, Vehicle veParam1) // Hash - 0x87C907E6 ^0x64E2FE30
{
	var entityCoords;
	var offsetFromEntityInWorldCoords;
	var offsetFromEntityInWorldCoords2;
	Vector3 vector;
	Vector3 vector2;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
		else
			return -1;
	
		offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam1, 1f, -0.5f, 0f) };
		vector = { offsetFromEntityInWorldCoords - entityCoords };
		offsetFromEntityInWorldCoords2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam1, -1f, -0.5f, 0f) };
		vector2 = { offsetFromEntityInWorldCoords2 - entityCoords };
	
		if (SYSTEM::VMAG(vector) < SYSTEM::VMAG(vector2))
			return 2;
		else
			return 1;
	}

	return -1;
}

void func_73() // Hash - 0x537FEDEF ^0x3855D84B
{
	if (!func_89())
	{
		if (!bLocal_293)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_54, 30f, 30f, 30f, false, true, 0))
			{
				func_74(&uLocal_78, "REARRAU", "REARR_PSTOP", 4, iLocal_254, 0, 0);
				bLocal_293 = true;
				SYSTEM::SETTIMERB(0);
			}
		}
		else if (SYSTEM::TIMERB() > 8000)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 99) > 50)
				func_74(&uLocal_78, "REARRAU", "REARR_PRAND", 4, iLocal_254, 0, 0);
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 10f, 10f, 10f, false, true, 0))
				func_74(&uLocal_78, "REARRAU", sLocal_268, 4, iLocal_254, 0, 0);
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_54, 10f, 10f, 10f, false, true, 0))
				func_74(&uLocal_78, "REARRAU", sLocal_268, 4, iLocal_254, 0, 0);
			else
				func_74(&uLocal_78, "REARRAU", sLocal_272, 4, iLocal_254, 0, 0);
		
			SYSTEM::SETTIMERB(0);
		}
	}

	return;
}

BOOL func_74(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x384540C1 ^0x384540C1
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_75(sParam2, iParam3, false);
}

BOOL func_75(char* sParam0, int iParam1, BOOL bParam2) // Hash - 0x77297D51 ^0x40DC584A
{
	Global_21726 = 0;

	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = false;
					Global_20382 = 0;
				}
				else
				{
					func_59();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			return 0;
	
		if (func_87(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_86();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
	
		if (Global_21731)
		{
			MISC::CLEAR_BIT(&Global_8253, 20);
			MISC::CLEAR_BIT(&Global_8254, 17);
			MISC::CLEAR_BIT(&Global_8255, 0);
		
			if (bParam2)
			{
				func_85();
			
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_20383.f_1 > 3)
					return 0;
			}
		
			if (Global_20349 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_84())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_78558)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						return 0;
				
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						return 0;
				}
			}
		
			if (func_83())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
				{
					case 7:
						return 0;
				
					case 8:
						return 0;
				
					case 9:
						break;
				
					case 10:
						break;
				
					default:
						break;
				}
			
				if (IS_BIT_SET(Global_8253, 9))
					return 0;
			}
		
			func_82();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_81();
		func_76();
		return 1;
	}

	if (Global_21725 == 5)
		return 0;

	if (iParam1 < Global_21727 || iParam1 == Global_21727)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_59();
	}

	return 0;
}

void func_76() // Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_77())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_77() // Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (PLAYER::PLAYER_ID() == func_80())
		return false;

	if (func_78(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_78(Player plParam0) // Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_79(plParam0, 20);
}

BOOL func_79(Player plParam0, int iParam1) // Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

Player func_80() // Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_81() // Hash - 0xDB58E314 ^0xCD869C7D
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_20593[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21725 = 1;
	return;
}

void func_82() // Hash - 0xCD8A4D28 ^0xCD8A4D28
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	MISC::CLEAR_BIT(&Global_8254, 16);
	return;
}

BOOL func_83() // Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

BOOL func_84() // Hash - 0x9A999369 ^0x4033F7BF
{
	int num;
	int weaponHash;

	if (Global_78558)
	{
		num = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (weaponHash == joaat("WEAPON_SNIPERRIFLE") || weaponHash == joaat("WEAPON_HEAVYSNIPER") || weaponHash == joaat("WEAPON_REMOTESNIPER"))
				num = 1;
	
		if (CAM::IS_AIM_CAM_ACTIVE() && num == 1)
			return true;
		else
			return false;
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
			return true;
		else
			return false;

	return true;
}

void func_85() // Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_44(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[0 /*29*/])
				Global_20383 = 0;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[1 /*29*/])
				Global_20383 = 1;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[2 /*29*/])
				Global_20383 = 2;
			else
				Global_20383 = 0;
	}
	else
	{
		Global_20383 = func_50();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

void func_86() // Hash - 0xBE88A374 ^0x766224F8
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21014[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21014[i /*10*/].f_1), "", 24);
		Global_21014[i /*10*/].f_7 = 0;
		Global_21014[i /*10*/].f_8 = 0;
	}

	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_87(int iParam0, int iParam1) // Hash - 0xA14C4D3F ^0xA6034F77
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1653913.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Hash - 0xC6B752B2 ^0xC6B752B2
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;

	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}

	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}

	return;
}

BOOL func_89() // Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

BOOL func_90() // Hash - 0x9A756C34 ^0xB0A743E3
{
	if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, pedLocal_54, 3.5f, 3.5f, 3.5f, false, true, 0) || func_93())
		if (!func_91(1063675494))
			return 1;

	return 0;
}

BOOL func_91(int iParam0) // Hash - 0xDDD3DD93 ^0xCF988BB9
{
	var groundZ;
	var normal;

	if (MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), &groundZ, &normal))
		if (func_92(normal, 0f, 0f, 1f) < iParam0)
			return true;

	return false;
}

float func_92(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Hash - 0x596BEA29 ^0x5FBCDBE5
{
	return (fParam0 * fParam3) + (fParam0.f_1 * fParam3.f_1) + (fParam0.f_2 * fParam3.f_2);
}

BOOL func_93() // Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_94(Ped pedParam0) // Hash - 0x3D210083 ^0xF7E7C389
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

void func_95() // Hash - 0x4CC2ED7C ^0xD78709F9
{
	if (MISC::GET_GAME_TIMER() - iLocal_253 > 500)
	{
		if (iLocal_49 != 1 && iLocal_49 != 3 && iLocal_49 != 2)
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_59))
			{
				HUD::SET_BLIP_AS_FRIENDLY(blLocal_59, bLocal_248);
			
				if (bLocal_248 == true)
					bLocal_248 = false;
				else
					bLocal_248 = true;
			}
		}
		else
		{
			bLocal_288 = 1;
		}
	
		if (!bLocal_61)
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_58))
			{
				HUD::SET_BLIP_AS_FRIENDLY(blLocal_58, bLocal_249);
			
				if (bLocal_249 == true)
					bLocal_249 = false;
				else
					bLocal_249 = true;
			}
		}
		else
		{
			bLocal_288 = 1;
		}
	
		iLocal_253 = MISC::GET_GAME_TIMER();
	}

	if (!bLocal_289 == bLocal_288)
	{
		if (bLocal_288)
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_59))
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_59, true);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_58))
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_58, true);
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_59))
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_59, false);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_58))
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_58, false);
		}
	
		bLocal_289 = bLocal_288;
	}

	return;
}

BOOL func_96(int iParam0) // Hash - 0xCCE96FF6 ^0x1E35AAB3
{
	BOOL num;
	int num2;
	Vector3 vector;

	num = 0;
	vector = { iParam0, iParam0, 50f };

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_279, uLocal_282, 194.75f, false, true, 0))
		return true;

	if (!PED::IS_PED_INJURED(pedLocal_54))
		if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_54, PLAYER::PLAYER_PED_ID(), vector, false, true, 0))
			num = 1;
		else
			num2 = num2 + 1;
	else
		num2 = num2 + 1;

	if (!PED::IS_PED_INJURED(pedLocal_55))
		if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), vector, false, true, 0))
			num = 1;
		else
			num2 = num2 + 1;
	else
		num2 = num2 + 1;

	if (num2 == 2)
		num = 0;

	return num;
}

int func_97(BOOL bParam0) // Hash - 0x3A78A0E1 ^0x3681B67
{
	if (func_102())
	{
		Global_113638 = true;
		Global_113635 = MISC::GET_GAME_TIMER();
	
		if (func_101(Global_113637))
			func_98(0);
	
		HUD::SET_MISSION_NAME(true, _("Random Event"));
	
		if (bParam0 && func_101(Global_113637))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_98(int iParam0) // Hash - 0x3B4E6AAB ^0x52844A7B
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_99(func_100(iParam0), -1);
					Global_113648.f_24997.f_2 = Global_113648.f_24997.f_2 + 1;
					MISC::SET_BIT(&Global_113644, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_113644, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_99(func_100(iParam0), -1);
					Global_113648.f_24997.f_3 = Global_113648.f_24997.f_3 + 1;
					MISC::SET_BIT(&Global_113644, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_113644, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_99(func_100(iParam0), -1);
					Global_113648.f_24997.f_4 = Global_113648.f_24997.f_4 + 1;
					MISC::SET_BIT(&Global_113644, 2);
				}
			}
			break;
	}

	return;
}

void func_99(char* sParam0, int iParam1) // Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

char* func_100(int iParam0) // Hash - 0x7CF8A08F ^0x98B654F3
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = _("Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby.");
			break;
	
		case 1:
			str = _("Flashing blue and red blips indicate situations around San Andreas that you can choose to help with.");
			break;
	
		case 2:
			str = _("If you retrieve a stolen item, you can choose to keep it or return it for a reward.");
			break;
	}

	return str;
}

BOOL func_101(int iParam0) // Hash - 0xBF3EFB31 ^0xBF3EFB31
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
	}

	return true;
}

BOOL func_102() // Hash - 0x8129EEA4 ^0x48B13301
{
	switch (func_103(&Global_32223, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_103(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Hash - 0x8F9349A ^0xC5C097C1
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98159.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_107(0))
			return 0;
	
		Global_43221 = Global_43221 + 1;
		*uParam0 = Global_43221;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23131.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_43257 = iParam2;
		Global_43219 = *uParam0;
		Global_43220 = iParam4;
		Global_43218 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_43218 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_43218; i = i + 1)
			{
				if (Global_43224[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_43219 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!func_105(iParam2))
			return 0;
	
		if (Global_43218 == 8)
			return 0;
	
		Global_43221 = Global_43221 + 1;
		*uParam0 = Global_43221;
		Global_43224[Global_43218 /*4*/] = Global_43221;
		Global_43224[Global_43218 /*4*/].f_1 = iParam1;
		Global_43224[Global_43218 /*4*/].f_2 = iParam2;
		Global_43224[Global_43218 /*4*/].f_3 = 0;
		Global_43218 = Global_43218 + 1;
	
		if (iParam4 != 0)
			func_104(uParam0, iParam4);
	}

	return 2;
}

void func_104(var uParam0, int iParam1) // Hash - 0x6AC97785 ^0x6AC97785
{
	int i;

	if (Global_43218 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_43218; i = i + 1)
	{
		if (Global_43224[i /*4*/] == *uParam0)
			Global_43224[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL func_105(int iParam0) // Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_106(iParam0, Global_43257);
}

BOOL func_106(int iParam0, int iParam1) // Hash - 0x1FD727E0 ^0x1FD727E0
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

BOOL func_107(int iParam0) // Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43257 == 15)
		return false;

	if (func_105(iParam0))
		return false;

	return true;
}

BOOL func_108() // Hash - 0x6B485983 ^0x24BC088D
{
	float xSize;

	xSize = 50f;

	if (!PED::IS_PED_INJURED(pedLocal_54))
	{
		if (!PED::IS_PED_INJURED(pedLocal_55))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_54, xSize, xSize, xSize, false, true, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, xSize, xSize, xSize, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_279, uLocal_282, 194.75f, false, true, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(blLocal_59))
					blLocal_59 = func_109(pedLocal_55, false, 145);
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_58))
					blLocal_58 = func_109(pedLocal_54, false, 145);
			
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_59, false);
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_58, false);
				SYSTEM::SETTIMERA(0);
				return true;
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(pedLocal_54))
				if (!HUD::DOES_BLIP_EXIST(blLocal_58))
					blLocal_58 = func_109(pedLocal_54, false, 145);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_59))
				HUD::REMOVE_BLIP(&blLocal_59);
		
			return true;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(pedLocal_55))
			if (!HUD::DOES_BLIP_EXIST(blLocal_59))
				blLocal_59 = func_109(pedLocal_55, false, 145);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_58))
			HUD::REMOVE_BLIP(&blLocal_58);
	
		return true;
	}

	return false;
}

Blip func_109(Ped pedParam0, BOOL bParam1, int iParam2) // Hash - 0xA714218A ^0xAD0F82BD
{
	Blip blip;

	blip = func_110(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2028[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_110(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x2E5A72B ^0x64F26CC0
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(pedParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

var func_111(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_112() // Hash - 0xA75C2E27 ^0x6E458BEC
{
	Hash model;
	Hash model2;
	Vector3 vector;
	Vector3 vector2;
	float heading;
	float heading2;

	model = joaat("S_M_Y_RANGER_01");

	if (iLocal_53 == 1)
	{
		vector = { 2429.822f, 4952.938f, 44.8892f };
		heading = 218.3434f;
		vector2 = { 2431.685f, 4945.31f, 44.6996f };
		heading2 = 220.0087f;
		uLocal_279 = { 2378.2844f, 4863.027f, 32.508835f };
		uLocal_282 = { 2512.7974f, 4998.5864f, 90.12283f };
		sLocal_256 = "A_M_M_HillBilly_02_WHITE_MINI_02";
		sLocal_265 = "arrestcriminal";
		sLocal_266 = "REARR_CTHANK";
		sLocal_267 = "REARR_CORUN";
		sLocal_268 = "REARR_CWTF";
		sLocal_269 = "REARR_CTURN";
		sLocal_270 = "REARR_CHELP";
		sLocal_271 = "REARR_HATE";
		sLocal_272 = "REARR_CRAND";
		sLocal_273 = "REARR_CRAND";
		sLocal_274 = "REARR_CRAND";
		model2 = joaat("A_M_M_HILLBILLY_02");
	}
	else if (iLocal_53 == 2)
	{
		vector = { 2592.637f, 2540.0503f, 30.4162f };
		heading = 90.5639f;
		vector2 = { 2586.0051f, 2541.4102f, 31.0379f };
		heading2 = 75.5943f;
		uLocal_279 = { 2543.1345f, 2683.9172f, 0.307461f };
		uLocal_282 = { 2597.6025f, 2408.885f, 121.90103f };
		sLocal_256 = "G_M_M_ArmGoon_01_White_Armenian_MINI_01";
		sLocal_265 = "arrestcriminal2";
		sLocal_266 = "REARR_THANK2";
		sLocal_267 = "REARR_CORUN2";
		sLocal_268 = "REARR_CWTF2";
		sLocal_269 = "REARR_CTURN2";
		sLocal_270 = "REARR_CHELP2";
		sLocal_271 = "REARR_HATE2";
		sLocal_272 = "REARR_CRAND2";
		sLocal_273 = "REARR_CRAND2";
		sLocal_274 = "REARR_CRAND2";
		model2 = joaat("G_M_M_ARMGOON_01");
	}

	STREAMING::REQUEST_MODEL(model);
	STREAMING::REQUEST_MODEL(model2);
	STREAMING::REQUEST_MODEL(joaat("PROP_LD_BINBAG_01"));
	STREAMING::REQUEST_ANIM_DICT(sLocal_258);
	STREAMING::REQUEST_ANIM_DICT(sLocal_259);
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_TAZERED");

	if (STREAMING::HAS_MODEL_LOADED(model) && STREAMING::HAS_MODEL_LOADED(model2) && STREAMING::HAS_MODEL_LOADED(joaat("PROP_LD_BINBAG_01")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_258) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_259) && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_NOT_TAZERED") && STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_TAZERED"))
	{
		pedLocal_54 = PED::CREATE_PED(PED_TYPE_COP, model, vector, heading, true, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_54, 294, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_54, true, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(pedLocal_54, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_54, true);
		func_114(&uLocal_78, 1, pedLocal_54, "ArrestCop", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_54, true, 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(pedLocal_54, 1);
		pedLocal_55 = PED::CREATE_PED(PED_TYPE_MISSION, model2, vector2, heading2, true, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_55, true, 0);
		PED::SET_PED_CONFIG_FLAG(pedLocal_55, 42, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_55, 281, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_55, true);
		func_114(&uLocal_78, 2, pedLocal_55, sLocal_265, 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_55, true, 1);
	
		if (iLocal_53 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_HEAD, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_HAIR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_UPPR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_LOWR, 0, 0, 0);
		}
	
		func_113();
	
		if (func_50() == 0)
			func_114(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		else if (func_50() == 1)
			func_114(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		else if (func_50() == 2)
			func_114(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(pedLocal_54, joaat("WEAPON_PISTOL"), false))
			WEAPON::GIVE_WEAPON_TO_PED(pedLocal_54, joaat("WEAPON_PISTOL"), -1, false, true);
	
		WEAPON::SET_CURRENT_PED_WEAPON(pedLocal_54, joaat("WEAPON_PISTOL"), true);
		obLocal_60 = OBJECT::CREATE_OBJECT(joaat("PROP_LD_BINBAG_01"), fLocal_65, fLocal_65.f_1, fLocal_65.f_2 + 100f, true, true, false);
		ENTITY::SET_ENTITY_VISIBLE(obLocal_60, false, false);
	
		if (SYSTEM::VDIST(2411.32f, 4958.76f, 45.19f, fLocal_65) < 10f)
		{
			iLocal_53 = 1;
			TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2473.2544f, 4901.6514f, 43.1488f, 3f, -1, 2f, 1, fLocal_250, 1193033728);
			TASK::TASK_SMART_FLEE_PED(0, pedLocal_54, 150f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_73);
			PED::SET_PED_KEEP_TASK(pedLocal_55, true);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
			PATHFIND::DISABLE_NAVMESH_IN_AREA(2544.862f, 4729.8926f, 27.8986f, 2564.862f, 4749.8926f, 28.8986f, true);
		}
		else
		{
			iLocal_53 = 2;
			TASK::OPEN_SEQUENCE_TASK(&iLocal_73);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, 2531.445f, 2521.7493f, 38.2072f, 3f, -1, 2f, 1, fLocal_250, 1193033728);
			TASK::TASK_SMART_FLEE_PED(0, pedLocal_54, 150f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_73);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_73);
			PED::SET_PED_KEEP_TASK(pedLocal_55, true);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_73);
		}
	
		iLocal_53 == 1;
		TASK::TASK_GO_TO_ENTITY(pedLocal_54, pedLocal_55, -1, 1f, 3f, 1073741824, 0);
		PED::SET_PED_KEEP_TASK(pedLocal_54, true);
		return true;
	}

	return false;
}

void func_113() // Hash - 0x48AB763D ^0x3559080
{
	fLocal_250 = 0f;
	fLocal_250.f_1 = 10f;
	PED::SET_PED_COMBAT_MOVEMENT(pedLocal_54, CM_WillAdvance);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_54, BF_Aggressive, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_54, BF_CanDoDrivebys, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_54, BF_CanUseVehicles, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_54, BF_0x0036D422, false);
	PED::SET_PED_COMBAT_RANGE(pedLocal_54, 0);
	PED::SET_PED_COMBAT_MOVEMENT(pedLocal_55, CM_WillRetreat);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_55, BF_AlwaysFlee, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_55, BF_0x66BB9FCC, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_55, BF_CanUseVehicles, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_55, BF_0x0036D422, false);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_55, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_55, 1, false);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_COP", &hLocal_71);
	PED::ADD_RELATIONSHIP_GROUP("RE_ARREST_CRIM", &hLocal_72);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_54, hLocal_71);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_55, hLocal_72);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, hLocal_72, hLocal_71);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, hLocal_71, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, hLocal_72, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, hLocal_72, joaat("COP"));
	AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_54, sLocal_257);
	AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_55, sLocal_256);
	return;
}

void func_114(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Hash - 0x6C235EE0 ^0x9E57F206
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_78558)
	{
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, false);
			else
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, true);
	
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, false);
			else
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, true);
	}

	return;
}

BOOL func_115() // Hash - 0xF2B7F534 ^0x7F3EC4F9
{
	if (!func_105(5))
		return true;

	if (func_124())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_123())
			return false;

	if (func_116(100f, true) != -1)
		return true;

	return false;
}

int func_116(float fParam0, BOOL bParam1) // Hash - 0xA169FFDC ^0x284941E0
{
	var unk;
	int num;
	int num2;
	float num3;
	float distanceBetweenCoords;
	int num4;
	int i;
	BOOL flag;

	num2 = -1;
	num3 = fParam0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_52(func_50()))
		{
			num4 = func_122();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_113648.f_18576[num /*6*/], 2) && !IS_BIT_SET(Global_113648.f_18576[num /*6*/], 3))
				{
					func_117(num, &unk);
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), unk.f_6, true);
				
					if (distanceBetweenCoords < num3)
					{
						flag = true;
					
						if (bParam1)
							if (num4 != unk.f_26)
								flag = false;
					
						if (flag)
						{
							num2 = num;
							num3 = distanceBetweenCoords;
						}
					}
				}
			}
		}
	}

	return num2;
}

void func_117(int iParam0, var uParam1) // Hash - 0x2D8E3F8 ^0x33606F4B
{
	switch (iParam0)
	{
		case 0:
			func_118(uParam1, "Abigail1", func_120(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
	
		case 1:
			func_118(uParam1, "Abigail2", func_120(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
	
		case 2:
			func_118(uParam1, "Barry1", func_120(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
	
		case 3:
			func_118(uParam1, "Barry2", func_120(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
	
		case 4:
			func_118(uParam1, "Barry3", func_120(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
	
		case 5:
			func_118(uParam1, "Barry3A", func_120(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, _("Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry."), 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 6:
			func_118(uParam1, "Barry3C", func_120(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 7:
			func_118(uParam1, "Barry4", func_120(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_119(iParam0), 0, 0);
			break;
	
		case 8:
			func_118(uParam1, "Dreyfuss1", func_120(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, _("The killer's identity and location have been revealed."), 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
	
		case 9:
			func_118(uParam1, "Epsilon1", func_120(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
	
		case 10:
			func_118(uParam1, "Epsilon2", func_120(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
	
		case 11:
			func_118(uParam1, "Epsilon3", func_120(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
	
		case 12:
			func_118(uParam1, "Epsilon4", func_120(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
	
		case 13:
			func_118(uParam1, "Epsilon5", func_120(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
	
		case 14:
			func_118(uParam1, "Epsilon6", func_120(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 15:
			func_118(uParam1, "Epsilon7", func_120(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_119(iParam0), 0, 0);
			break;
	
		case 16:
			func_118(uParam1, "Epsilon8", func_120(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_119(iParam0), 1, 0);
			break;
	
		case 17:
			func_118(uParam1, "Extreme1", func_120(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 18:
			func_118(uParam1, "Extreme2", func_120(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 19:
			func_118(uParam1, "Extreme3", func_120(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 20:
			func_118(uParam1, "Extreme4", func_120(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
	
		case 21:
			func_118(uParam1, "Fanatic1", func_120(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_119(iParam0), 1, 0);
			break;
	
		case 22:
			func_118(uParam1, "Fanatic2", func_120(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_119(iParam0), 1, 0);
			break;
	
		case 23:
			func_118(uParam1, "Fanatic3", func_120(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_119(iParam0), 0, 1);
			break;
	
		case 24:
			func_118(uParam1, "Hao1", func_120(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_119(iParam0), 0, 1);
			break;
	
		case 25:
			func_118(uParam1, "Hunting1", func_120(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 26:
			func_118(uParam1, "Hunting2", func_120(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 27:
			func_118(uParam1, "Josh1", func_120(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
	
		case 28:
			func_118(uParam1, "Josh2", func_120(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
	
		case 29:
			func_118(uParam1, "Josh3", func_120(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
	
		case 30:
			func_118(uParam1, "Josh4", func_120(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
	
		case 31:
			func_118(uParam1, "Maude1", func_120(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 32:
			func_118(uParam1, "Minute1", func_120(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 33:
			func_118(uParam1, "Minute2", func_120(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 34:
			func_118(uParam1, "Minute3", func_120(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 35:
			func_118(uParam1, "MrsPhilips1", func_120(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
	
		case 36:
			func_118(uParam1, "MrsPhilips2", func_120(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
	
		case 37:
			func_118(uParam1, "Nigel1", func_120(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
	
		case 38:
			func_118(uParam1, "Nigel1A", func_120(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, _("Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill."), 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
	
		case 39:
			func_118(uParam1, "Nigel1B", func_120(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
	
		case 40:
			func_118(uParam1, "Nigel1C", func_120(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
	
		case 41:
			func_118(uParam1, "Nigel1D", func_120(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_119(iParam0), 1, 1);
			break;
	
		case 42:
			func_118(uParam1, "Nigel2", func_120(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
	
		case 43:
			func_118(uParam1, "Nigel3", func_120(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 1);
			break;
	
		case 44:
			func_118(uParam1, "Omega1", func_120(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
	
		case 45:
			func_118(uParam1, "Omega2", func_120(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
	
		case 46:
			func_118(uParam1, "Paparazzo1", func_120(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 47:
			func_118(uParam1, "Paparazzo2", func_120(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 48:
			func_118(uParam1, "Paparazzo3", func_120(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
	
		case 49:
			func_118(uParam1, "Paparazzo3A", func_120(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, _("Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly."), 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 50:
			func_118(uParam1, "Paparazzo3B", func_120(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 51:
			func_118(uParam1, "Paparazzo4", func_120(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 0);
			break;
	
		case 52:
			func_118(uParam1, "Rampage1", func_120(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
	
		case 54:
			func_118(uParam1, "Rampage3", func_120(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
	
		case 55:
			func_118(uParam1, "Rampage4", func_120(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
	
		case 56:
			func_118(uParam1, "Rampage5", func_120(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_119(iParam0), 0, 0);
			break;
	
		case 53:
			func_118(uParam1, "Rampage2", func_120(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_119(iParam0), 1, 0);
			break;
	
		case 57:
			func_118(uParam1, "TheLastOne", func_120(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 58:
			func_118(uParam1, "Tonya1", func_120(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, _("Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~"), -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 59:
			func_118(uParam1, "Tonya2", func_120(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 60:
			func_118(uParam1, "Tonya3", func_120(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 61:
			func_118(uParam1, "Tonya4", func_120(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		case 62:
			func_118(uParam1, "Tonya5", func_120(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_119(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_118(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Hash - 0x340E6E87 ^0xA591C803
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
	return;
}

int func_119(int iParam0) // Hash - 0xC999F6B2 ^0xC999F6B2
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

struct<2> func_120(int iParam0) // Hash - 0x323E6781 ^0xC4664827
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_121(iParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_121(int iParam0) // Hash - 0x975AC8C9 ^0x9ABDC071
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON5", 8);
			break;
	
		default:
			break;
	}

	return unk;
}

int func_122() // Hash - 0x35BC7314 ^0x35BC7314
{
	func_51();

	switch (Global_113648.f_2365.f_539.f_4321)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 4;
	}

	return 0;
}

BOOL func_123() // Hash - 0x29CB2928 ^0xE369A18D
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_124() // Hash - 0x7055FFB1 ^0x7055FFB1
{
	if (func_127() && !func_123())
		return true;

	if (func_126() && func_125())
		return true;

	return false;
}

BOOL func_125() // Hash - 0x79CF7679 ^0x79CF7679
{
	return Global_113366 > 0;
}

BOOL func_126() // Hash - 0xCF2296C0 ^0xCF2296C0
{
	if (Global_97603 != -1)
		return true;

	return false;
}

BOOL func_127() // Hash - 0x98CCC132 ^0x97B0D6ED
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);

	return false;
}

BOOL func_128() // Hash - 0xC05B0E62 ^0x94C54EFE
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_44) < 75f * 75f)
			return true;
	
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_123())
			return false;
	}

	if (func_124())
		return true;

	if (func_116(100f, true) != -1)
		return true;

	return false;
}

void func_129(int iParam0) // Hash - 0xA62BD46A ^0x1E050688
{
	if (iParam0 == -1)
		iParam0 = func_132();

	if (iParam0 == -1)
		return;

	func_131(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113634 = 0;
	func_130();
	return;
}

void func_130() // Hash - 0x178BF2A7 ^0x744062F5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_131(int iParam0) // Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113637 = iParam0;
	return;
}

int func_132() // Hash - 0x7AC1007E ^0x4E7D4F54
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_133(unk);
	return num;
}

int func_133(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Hash - 0x6DA57317 ^0x57A32A43
{
	switch (MISC::GET_HASH_KEY(&uParam0))
	{
		case joaat("RE_ABANDONEDCAR"):
			return 23;
	
		case joaat("RE_ACCIDENT"):
			return 0;
	
		case joaat("RE_ARRESTS"):
			return 15;
	
		case joaat("RE_ATMROBBERY"):
			return 1;
	
		case joaat("RE_BIKETHIEF"):
			return 26;
	
		case joaat("RE_BORDER"):
			return 29;
	
		case joaat("RE_BURIALS"):
			return 24;
	
		case joaat("RE_BUS_TOURS"):
			return 2;
	
		case joaat("RE_CARTHEFT"):
			return 17;
	
		case joaat("RE_CHASETHIEVES"):
			return 11;
	
		case joaat("RE_CRASHRESCUE"):
			return 16;
	
		case joaat("RE_CULTSHOOTOUT"):
			return 18;
	
		case joaat("RE_DEALGONEWRONG"):
			return 12;
	
		case joaat("RE_DOMESTIC"):
			return 3;
	
		case joaat("RE_DRUNKDRIVER"):
			return 27;
	
		case joaat("RE_GANG_INTIMIDATION"):
			return 20;
	
		case joaat("RE_GANGFIGHT"):
			return 19;
	
		case joaat("RE_GETAWAY_DRIVER"):
			return 4;
	
		case joaat("RE_HITCH_LIFT"):
			return 13;
	
		case joaat("RE_HOMELAND_SECURITY"):
			return 28;
	
		case joaat("RE_LURED"):
			return 7;
	
		case joaat("RE_MUGGINGS"):
			return 25;
	
		case joaat("RE_PAPARAZZI"):
			return 10;
	
		case joaat("RE_PRISONERLIFT"):
			return 22;
	
		case joaat("RE_PRISONVANBREAK"):
			return 21;
	
		case joaat("RE_SECURITYVAN"):
			return 9;
	
		case joaat("RE_SHOPROBBERY"):
			return 5;
	
		case joaat("RE_SNATCHED"):
			return 6;
	
		case joaat("RE_STAG_DO"):
			return 14;
	
		case joaat("RE_YETARIAN"):
			return 30;
	
		case joaat("RE_DUEL"):
			return 31;
	
		case joaat("RE_SEAPLANE"):
			return 32;
	
		case joaat("RE_MONKEY"):
			return 33;
	}

	return -1;
}

BOOL func_134(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Hash - 0xC601B4EA ^0xC601B4EA
{
	BOOL flag;
	Vector3 entityCoords;
	int i;
	Vector3 vector;
	int num;

	if (!Global_152234)
		return false;

	if (iParam3 == -1)
		iParam3 = func_132();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!func_176())
			return false;

	uLocal_44 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_123())
				return false;
		}
	
		if (!Global_113648.f_9087)
			return false;
	
		if (func_175(false))
			return false;
	
		if (func_124())
			return false;
	
		if (func_174())
			return false;
	
		if (Global_113637 != -1)
			return false;
	
		if (func_52(func_50()))
			if (func_116(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_44.f_2 > 50f)
				return false;
	
		if (!func_173(iParam3))
			return false;
	
		if (func_52(func_50()))
			if (func_172(func_50()) == 4 || func_172(func_50()) == 5)
				return false;
	
		if (func_52(func_50()))
			if (!func_171(iParam3, iParam4, 145))
				return false;
	
		if (!func_170(Global_113648.f_24997.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_113639 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_169())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_160(4))
			return false;
	
		if (!func_105(5))
			return false;
	
		if (func_159(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_3 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_159(0, 0))
			return false;
	
		if (Global_32310)
			return false;
	
		if (func_173(30) && !func_159(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_52(func_50()))
		{
			for (i = 0; i < 3; i = i + 1)
			{
				vector = { Global_113648.f_2365.f_539.f_2300[i /*3*/] };
				num = Global_113648.f_2365.f_539.f_2296[i];
			
				if (func_158(num))
					if (func_136(i))
						if (!func_135(vector, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (func_50() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_135(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_136(int iParam0) // Hash - 0x687D9246 ^0x687D9246
{
	int num;

	num = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_137(num);
}

BOOL func_137(int iParam0) // Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_138(iParam0, 1);
}

int func_138(int iParam0, int iParam1) // Hash - 0x1F92FEBC ^0x1F92FEBC
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_158(iParam0))
		return 0;

	func_139(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_139(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Hash - 0x2BEE335D ^0x2BEE335D
{
	func_140(func_151(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_140(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Hash - 0xB807819C ^0xB807819C
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_150(iParam0, iParam1))
	{
		num = func_149(iParam1);
		num2 = func_147(iParam0);
		num3 = func_147(iParam0) - func_147(iParam1);
		num4 = func_149(iParam0) - func_149(iParam1);
		num5 = func_146(iParam0) - func_146(iParam1);
		num6 = func_145(iParam0) - func_145(iParam1);
		num7 = func_144(iParam0) - func_144(iParam1);
		num8 = func_143(iParam0) - func_143(iParam1);
	}
	else
	{
		num = func_149(iParam0);
		num2 = func_147(iParam1);
		num3 = func_147(iParam1) - func_147(iParam0);
		num4 = func_149(iParam1) - func_149(iParam0);
		num5 = func_146(iParam1) - func_146(iParam0);
		num6 = func_145(iParam1) - func_145(iParam0);
		num7 = func_144(iParam1) - func_144(iParam0);
		num8 = func_143(iParam1) - func_143(iParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_142(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_141(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

float func_141(float fParam0, float fParam1, float fParam2) // Hash - 0xDB08F514 ^0x78C0BF6F
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)SYSTEM::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_142(int iParam0, int iParam1) // Hash - 0xD3EBACB3 ^0xD3EBACB3
{
	if (iParam1 < 0)
		iParam1 = 0;

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
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_143(int iParam0) // Hash - 0x90B520AB ^0x257AC1C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_144(int iParam0) // Hash - 0xC188C91C ^0x48884C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_145(int iParam0) // Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_146(int iParam0) // Hash - 0x826C592F ^0xDEC5AA46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_147(int iParam0) // Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_148(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_149(int iParam0) // Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

BOOL func_150(int iParam0, int iParam1) // Hash - 0xAEDA0AE7 ^0xAEDA0AE7
{
	int num;
	int num2;

	if (!func_158(iParam1) || !func_158(iParam0))
		return 1;

	num = func_147(iParam0);
	num2 = func_147(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_149(iParam0);
	num2 = func_149(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_146(iParam0);
	num2 = func_146(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_145(iParam0);
	num2 = func_145(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_144(iParam0);
	num2 = func_144(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_143(iParam0);
	num2 = func_143(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_151() // Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_157(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_156(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_155(&unk, CLOCK::GET_CLOCK_HOURS());
	func_154(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_153(&unk, CLOCK::GET_CLOCK_MONTH());
	func_152(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_152(var uParam0, int iParam1) // Hash - 0x15B9927E ^0x4A4674
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_153(var uParam0, int iParam1) // Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_154(var uParam0, int iParam1) // Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_149(*uParam0);
	num2 = func_147(*uParam0);

	if (iParam1 < 1 || iParam1 > func_142(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_155(var uParam0, int iParam1) // Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_156(var uParam0, int iParam1) // Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_157(var uParam0, int iParam1) // Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_158(int iParam0) // Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_143(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_144(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_145(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_147(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_149(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_146(iParam0);

	if (num6 < 1 || num6 > func_142(num5, num4))
		return false;

	return true;
}

BOOL func_159(int iParam0, int iParam1) // Hash - 0x577FB514 ^0xAAF8B538
{
	if (IS_BIT_SET(Global_113648.f_24997.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_160(int iParam0) // Hash - 0x97844555 ^0xADCD6DAA
{
	int num;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				num = func_50();
			
				if (!func_52(num))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_168() || Global_112695 || Global_32166 || func_167() || func_87(8, -1) || func_166() || func_165() || func_164() || func_163() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_168() || Global_32166 || func_167() || func_87(8, -1) || func_164() || func_166() || func_165() || func_163() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_168() || Global_112695 || Global_32166 || func_167() || func_87(8, -1) || func_164() || func_166() || func_165() || func_163() || Global_113648.f_7690.f_919[num] == 5 || Global_43804 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_168() || Global_112695 || Global_32166 || func_167() || func_87(8, -1) || func_166() || func_165() || func_163() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 4:
						if (func_168() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_87(8, -1) || func_163() || func_162() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 5:
						if (func_87(8, -1) || func_166() || func_165() || func_162() || func_161())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_168() || Global_32166 || func_167() || func_87(8, -1) || func_165() || func_164() || func_163() || Global_113648.f_7690.f_919[num] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_168() || func_165() || Global_112695 || Global_32166 || func_167() || Global_44446 || func_87(8, -1) || func_164() || func_162() || func_163() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_168() || Global_112695 || Global_32166 || func_167() || func_87(8, -1) || func_164() || func_162() || func_166() || func_165() || func_163())
							return false;
						break;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_161() // Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_100720.f_1;
}

BOOL func_162() // Hash - 0xC20DBA70 ^0xAC4006FB
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);

	return false;
}

BOOL func_163() // Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
		return true;

	return false;
}

BOOL func_164() // Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_165() // Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_388 > 0;
}

BOOL func_166() // Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_387 > 0;
}

BOOL func_167() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575060;
}

BOOL func_168() // Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_169() // Hash - 0xB12DEAA2 ^0xB12DEAA2
{
	func_85();

	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_170(int iParam0) // Hash - 0xCDB90269 ^0xCDB90269
{
	return func_150(func_151(), iParam0);
}

BOOL func_171(int iParam0, int iParam1, int iParam2) // Hash - 0xBEEFD79C ^0xBEEFD79C
{
	BOOL num;
	int num2;

	num = 0;
	num2 = func_50();

	if (iParam2 != 145 && iParam2 == 0 || iParam2 == 1 || iParam2 == 2)
		num2 = iParam2;

	switch (iParam0)
	{
		case 18:
			if (num2 == 2)
				num = 1;
			break;
	
		case 19:
			if (num2 != 2)
				num = 1;
			break;
	
		case 20:
			if (num2 != 1)
				num = 1;
			break;
	
		case 28:
			if (num2 != 2)
				num = 1;
			break;
	
		case 13:
			if (num2 == 0)
				if (iParam1 == 2)
					num = 0;
				else
					num = 1;
			else
				num = 1;
			break;
	
		case 22:
			if (iParam1 == 2 || num2 != 2)
				num = 1;
			break;
	
		case 30:
			if (num2 != 2)
				num = 1;
			break;
	
		default:
			num = 1;
			break;
	}

	return num;
}

int func_172(int iParam0) // Hash - 0x45FC9D61 ^0x45FC9D61
{
	if (!func_52(iParam0))
		return 7;

	return Global_113648.f_7690.f_919[iParam0];
}

BOOL func_173(int iParam0) // Hash - 0xF2A54181 ^0xF2A54181
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!func_176())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_113648.f_24997, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_113648.f_24997.f_1, num);
	}

	return flag;
}

BOOL func_174() // Hash - 0xB72C022E ^0x452A7B6D
{
	Vehicle vehiclePedIsIn;

	if (Global_32315)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 0, false)))
					return true;
		}
	}

	return false;
}

BOOL func_175(BOOL bParam0) // Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

BOOL func_176() // Hash - 0x44DD83CC ^0x7B62A376
{
	int profileSetting;

	if (Global_152523 == 2)
		return true;
	else if (Global_152523 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

void func_177() // Hash - 0x8ECAA353 ^0x56D5839B
{
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		switch (iLocal_49)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				func_206(6);
				func_191();
				break;
		
			case 3:
				func_206(5);
				func_191();
				break;
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_55))
		{
			if (!PED::IS_PED_INJURED(pedLocal_55) && !ENTITY::IS_ENTITY_DEAD(pedLocal_55, false))
			{
				ENTITY::IS_ENTITY_DEAD(pedLocal_54, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_54))
					TASK::TASK_SMART_FLEE_COORD(pedLocal_55, ENTITY::GET_ENTITY_COORDS(pedLocal_54, true), 9000f, -1, false, false);
				else
					TASK::TASK_SMART_FLEE_COORD(pedLocal_55, ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), 9000f, -1, false, false);
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_55, false);
				PED::SET_PED_KEEP_TASK(pedLocal_55, true);
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_54))
		{
			if (!PED::IS_PED_INJURED(pedLocal_54))
			{
				PED::SET_PED_KEEP_TASK(pedLocal_54, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_54, false);
				PED::SET_PED_AS_COP(pedLocal_54, true);
				PED::SET_PED_CAN_BE_TARGETTED(pedLocal_54, true);
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_56))
		{
			if (!PED::IS_PED_INJURED(pedLocal_56))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					func_64();
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_56, false);
				PED::SET_PED_AS_COP(pedLocal_56, true);
			}
		}
	
		if (func_190())
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_72, hLocal_71);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_71, hLocal_72);
		}
	
		if (bLocal_77)
			VEHICLE::SET_RANDOM_TRAINS(true);
	}

	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2551.0378f, 4708.6133f, 32.6775f, 2536.979f, 5022.1787f, 43.8519f, 300f, 1);

	if (bLocal_287)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}

	func_178(-1);
	SYSTEM::WAIT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_178(int iParam0) // Hash - 0xE6B11918 ^0x37AF2AD2
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_132();

	if (iParam0 == -1)
		return;

	if (func_190())
	{
		func_183(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113639 = MISC::GET_GAME_TIMER();
		func_182(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_181(Global_113637, true), 64);
	
		if (func_180(Global_113637) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&name, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&name, Global_113636, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&name, Global_113634, MISC::GET_GAME_TIMER() - Global_113635, 0);
	}
	else if (IS_BIT_SET(Global_113644, 0) && Global_113648.f_24997.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113644, 0);
	}

	func_179(&Global_32223);
	Global_113638 = false;
	func_131(-1);
	return;
}

void func_179(var uParam0) // Hash - 0x995C9E2 ^0x995C9E2
{
	if (*uParam0 == -1)
		return;

	if (!*uParam0 == Global_43219)
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_43218 = 0;
	Global_43220 = 0;
	Global_43257 = 15;
	Global_63359 = 0;
	Global_63360 = 0;
	return;
}

int func_180(int iParam0) // Hash - 0xAA02DAD0 ^0xAA02DAD0
{
	int num;

	num = 1;

	switch (iParam0)
	{
		case 1:
			num = 5;
			break;
	
		case 5:
			num = 2;
			break;
	
		case 9:
			num = 10;
			break;
	
		case 11:
			num = 4;
			break;
	
		case 13:
			num = 4;
			break;
	
		case 15:
			num = 2;
			break;
	
		case 17:
			num = 2;
			break;
	
		case 22:
			num = 2;
			break;
	
		case 23:
			num = 2;
			break;
	
		case 25:
			num = 3;
			break;
	
		case 26:
			num = 2;
			break;
	
		case 27:
			num = 2;
			break;
	
		case 29:
			num = 3;
			break;
	}

	return num;
}

char* func_181(int iParam0, BOOL bParam1) // Hash - 0x959319CB ^0xC8FF84B8
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
	
		case 1:
			return "RE_ATMROBBERY";
	
		case 2:
			return "RE_BUSTOUR";
	
		case 3:
			return "RE_DOMESTIC";
	
		case 4:
			return "RE_GETAWAYDRIVER";
	
		case 5:
			return "RE_SHOPROBBERY";
	
		case 6:
			return "RE_SNATCHED";
	
		case 7:
			return "RE_LURED";
	
		case 8:
			return "RE_BIKETHIEFSTAMP";
	
		case 9:
			return "RE_SECURITYVAN";
	
		case 10:
			return "RE_PAPARAZZI";
	
		case 11:
			return "RE_CHASETHIEVES";
	
		case 12:
			return "RE_DEALGONEWRONG";
	
		case 13:
			return "RE_HITCHLIFT";
	
		case 14:
			return "RE_STAG";
	
		case 15:
			return "RE_ARREST";
	
		case 16:
			return "RE_CRASHRESCUE";
	
		case 17:
			return "RE_CARTHEFT";
	
		case 18:
			return "RE_CULTSHOOTOUT";
	
		case 19:
			return "RE_GANGFIGHT";
	
		case 20:
			return "RE_GANGINTIMIDATION";
	
		case 21:
			return "RE_PRISONVANBREAK";
	
		case 22:
			return "RE_PRISONERLIFT";
	
		case 23:
			return "RE_ABANDONEDCAR";
	
		case 24:
			return "RE_BURIAL";
	
		case 25:
			return "RE_MUGGING";
	
		case 26:
			return "RE_BIKETHIEF";
	
		case 27:
			return "RE_DRUNKDRIVER";
	
		case 28:
			return "RE_HOMELANDSECURITY";
	
		case 29:
			return "RE_BORDERPATROL";
	
		case 30:
			return "RE_SIMEONYETARIAN";
	
		case 31:
			return "RE_DUEL";
	
		case 32:
			return "RE_SEAPLANE";
	
		case 33:
			return "RE_MONKEYPHOTO";
	
		case -1:
			return "RE_NONE";
	}

	!bParam1;
	return "UNKNOWN";
}

void func_182(int iParam0) // Hash - 0xC0234809 ^0x4FD853DC
{
	Global_43808 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_183(int iParam0) // Hash - 0x881273A8 ^0x881273A8
{
	func_184(iParam0, 0, func_189(iParam0));
	return;
}

void func_184(int iParam0, int iParam1, int iParam2) // Hash - 0xA7DBC311 ^0xA7DBC311
{
	int unk;
	var unk2;

	unk = func_151();
	func_187(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_186(iParam0, &unk);
	unk2 = { func_185(&unk) };
	return;
}

struct<16> func_185(var uParam0) // Hash - 0xB96DB942 ^0x3F03F1DB
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_145(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_144(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_143(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_146(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_149(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_147(*uParam0), 64);
	return unk;
}

void func_186(int iParam0, var uParam1) // Hash - 0x63EF72B0 ^0xC612AA53
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
	return;
}

void func_187(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_147(*uParam0);
	i = func_149(*uParam0);
	num2 = func_146(*uParam0);
	j = func_145(*uParam0);
	k = func_144(*uParam0);
	l = func_143(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_142(i, num); num2 > m; m = func_142(i, num))
	{
		i = i + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			num = num + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num + iParam6;
	func_188(uParam0, l, k, j, num2, i, num);
	return;
}

void func_188(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x733BFBA2 ^0x733BFBA2
{
	func_157(uParam0, iParam1);
	func_156(uParam0, iParam2);
	func_155(uParam0, iParam3);
	func_153(uParam0, iParam5);
	func_154(uParam0, iParam4);
	func_152(uParam0, iParam6);
	return;
}

int func_189(int iParam0) // Hash - 0x4219564C ^0x4219564C
{
	int num;

	switch (iParam0)
	{
		case 23:
			num = 30;
			break;
	
		case 0:
			num = 30;
			break;
	
		case 15:
			num = 30;
			break;
	
		case 1:
			num = 200;
			break;
	
		case 26:
			num = 30;
			break;
	
		case 8:
			num = 30;
			break;
	
		case 29:
			num = 30;
			break;
	
		case 24:
			num = 30;
			break;
	
		case 2:
			num = 0;
			break;
	
		case 17:
			num = 30;
			break;
	
		case 11:
			num = 30;
			break;
	
		case 16:
			num = 30;
			break;
	
		case 18:
			num = 30;
			break;
	
		case 12:
			num = 120;
			break;
	
		case 3:
			num = 60;
			break;
	
		case 27:
			num = 60;
			break;
	
		case 19:
			num = 30;
			break;
	
		case 20:
			num = 30;
			break;
	
		case 4:
			num = 60;
			break;
	
		case 28:
			num = 30;
			break;
	
		case 13:
			num = 35;
			break;
	
		case 7:
			num = 30;
			break;
	
		case 25:
			num = 40;
			break;
	
		case 10:
			num = 30;
			break;
	
		case 22:
			num = 30;
			break;
	
		case 21:
			num = 30;
			break;
	
		case 5:
			num = 30;
			break;
	
		case 30:
			num = 60;
			break;
	
		case 9:
			num = 60;
			break;
	
		case 6:
			num = 40;
			break;
	
		case 14:
			num = 40;
			break;
	}

	return num;
}

BOOL func_190() // Hash - 0x1121F6F2 ^0x90CE37A6
{
	if (Global_113637 == func_132() && MISC::GET_RANDOM_EVENT_FLAG() && Global_113638)
		return true;

	return false;
}

void func_191() // Hash - 0x1E9034FD ^0x1E9034FD
{
	if (!bLocal_76)
		func_205();

	func_194(15, iLocal_53);
	func_192();
	return;
}

void func_192() // Hash - 0xD765C186 ^0xD765C186
{
	func_193();
	return;
}

int func_193() // Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_175(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

void func_194(int iParam0, int iParam1) // Hash - 0x207C13D1 ^0x3DBA9D3A
{
	if (iParam0 == -1)
		iParam0 = func_132();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_180(iParam0))
	{
		func_204(iParam0, iParam1);
	
		if (!func_203(51))
		{
			func_200(_("Some Random Events will reward the player with stat boosts or money."), 1, 0, 4000, 10000, func_122(), 0, 138, 0);
			func_199(51);
		}
	
		if (func_101(iParam0))
			Global_113648.f_24997.f_2 = 3;
	
		if (func_198(iParam0, iParam1) != 322)
			func_195(func_198(iParam0, iParam1), uLocal_44, uLocal_44.f_1);
	
		Global_113636 = iParam1;
	
		if (Global_113634 == 0)
			if (Global_113637 == 1 || Global_113637 == 5 || Global_113637 == 11 || Global_113637 == 25)
				func_206(2);
			else if (Global_113637 == 26 || Global_113637 == 8 || Global_113637 == 17)
				func_206(7);
			else
				func_206(1);
	}

	return;
}

void func_195(int iParam0, var uParam1, var uParam2) // Hash - 0xEC2439E7 ^0x1B67A713
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_25(891 + iParam0, true, -1);
	}

	flag = true;

	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113648.f_10196[iParam0 /*12*/].f_6 == 11 || Global_113648.f_10196[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_113648.f_10196[iParam0 /*12*/].f_5 = 1;
		Global_113648.f_10196[iParam0 /*12*/].f_10 = uParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_196();

	return;
}

void func_196() // Hash - 0x9F269E94 ^0x9F269E94
{
	int num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float value;
	int value2;

	num = 0;
	Global_113384 = 0;
	Global_113385 = 0;
	Global_113386 = 0;
	Global_113387 = 0;
	Global_113388 = 0;
	Global_113389 = 0;
	Global_113390 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_113648.f_10196.f_3853;
	Global_113648.f_10196.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_113648.f_10196[num /*12*/].f_5 == 1)
		{
			switch (Global_113648.f_10196[num /*12*/].f_6)
			{
				case 1:
					Global_113384 = Global_113384 + 1;
					num2 = num2 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 3:
					Global_113385 = Global_113385 + 1;
					num3 = num3 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 5:
					Global_113386 = Global_113386 + 1;
					num4 = num4 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 7:
					Global_113387 = Global_113387 + 1;
					num5 = num5 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 9:
					Global_113388 = Global_113388 + 1;
					num6 = num6 + (Global_113648.f_10196[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_113389 = Global_113389 + 1;
					num7 = num7 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 13:
					Global_113390 = Global_113390 + 1;
					num8 = num8 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_113367 > 0)
		if (Global_113384 == Global_113367)
			num2 = 55f;

	if (Global_113368 > 0)
		if (Global_113385 == Global_113368)
			num3 = 10f;

	if (Global_113369 > 0)
		if (Global_113386 == Global_113369)
			num4 = 0f;

	if (Global_113370 > 0)
		if (Global_113387 == Global_113370)
			num5 = 10f;

	if (Global_113371 > 0)
	{
		if (Global_113388 == Global_113371 || (Global_113371 * 10) / Global_113388 < 41 || Global_113388 > Global_113374 || Global_113388 == Global_113374)
		{
			if (!IS_BIT_SET(Global_113648.f_10196.f_3856, 14))
			{
				if (Global_113388 == Global_113371)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113371, 0);
					MISC::SET_BIT(&(Global_113648.f_10196.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_113372 > 0)
		if (Global_113389 == Global_113372)
			num7 = 15f;

	if (Global_113373 > 0)
		if (Global_113390 == Global_113373)
			num8 = 5f;

	Global_113648.f_10196.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_113388 > Global_113374 || Global_113388 == Global_113374)
		value2 = Global_113374;
	else
		value2 = Global_113388;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113384, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113367, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113385, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113368, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113386, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113369, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113387, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113370, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113374, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_113390 + Global_113389, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_113373 + Global_113372, true);
	Global_113391 = (Global_113384 * 100) / Global_113367;
	Global_113393 = ((Global_113386 + Global_113385) * 100) / (Global_113369 + Global_113368);
	Global_113392 = ((Global_113387 + value2) * 100) / (Global_113370 + Global_113374);
	Global_113394 = ((Global_113389 + Global_113390) * 100) / (Global_113372 + Global_113373);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113648.f_10196.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113391, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113392, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113393, true);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113648.f_10196.f_3853))
		func_45(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78558)
		{
			if (func_197() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113382 = 0;
			
				if (!Global_63362)
					func_193();
			}
		}
	}

	return;
}

int func_197() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

int func_198(int iParam0, int iParam1) // Hash - 0xE97012CD ^0x68FBF85A
{
	switch (iParam0)
	{
		case 0:
			return 250;
	
		case 1:
			return 226;
	
		case 2:
			return 243;
	
		case 3:
			return 256;
	
		case 4:
			return 259;
	
		case 5:
			if (iParam1 == 1)
				return 281;
		
			if (iParam1 == 2)
				return 282;
			break;
	
		case 6:
			return 265;
	
		case 7:
			return 218;
	
		case 9:
			if (iParam1 == 1)
				return 271;
		
			if (iParam1 == 2)
				return 272;
		
			if (iParam1 == 3)
				return 273;
		
			if (iParam1 == 4)
				return 274;
		
			if (iParam1 == 5)
				return 275;
		
			if (iParam1 == 6)
				return 276;
		
			if (iParam1 == 7)
				return 277;
		
			if (iParam1 == 8)
				return 278;
		
			if (iParam1 == 9)
				return 279;
		
			if (iParam1 == 10)
				return 280;
			break;
	
		case 10:
			return 219;
	
		case 11:
			if (iParam1 == 1)
				return 246;
		
			if (iParam1 == 2)
				return 247;
		
			if (iParam1 == 3)
				return 248;
		
			if (iParam1 == 4)
				return 249;
			break;
	
		case 12:
			return 254;
	
		case 13:
			if (iParam1 == 1)
				return 260;
		
			if (iParam1 == 2)
				return 261;
		
			if (iParam1 == 3)
				return 262;
		
			if (iParam1 == 4)
				return 264;
			break;
	
		case 14:
			return 283;
	
		case 15:
			if (iParam1 == 1)
				return 224;
		
			if (iParam1 == 2)
				return 225;
			break;
	
		case 16:
			return 252;
	
		case 17:
			if (iParam1 == 1)
				return 244;
		
			if (iParam1 == 2)
				return 245;
			break;
	
		case 18:
			return 253;
	
		case 19:
			return 215;
	
		case 20:
			return 216;
	
		case 21:
			return 251;
	
		case 22:
			if (iParam1 == 1)
				return 221;
		
			if (iParam1 == 2)
				return 222;
			break;
	
		case 23:
			if (iParam1 == 1)
				return 213;
		
			if (iParam1 == 2)
				return 214;
			break;
	
		case 24:
			return 242;
	
		case 25:
			if (iParam1 == 1)
				return 267;
		
			if (iParam1 == 2)
				return 268;
		
			if (iParam1 == 3)
				return 269;
			break;
	
		case 8:
			return 255;
	
		case 26:
			if (iParam1 == 1)
				return 227;
		
			if (iParam1 == 2)
				return 228;
			break;
	
		case 27:
			if (iParam1 == 1)
				return 257;
		
			if (iParam1 == 2)
				return 258;
			break;
	
		case 28:
			return 217;
	
		case 29:
			if (iParam1 == 1)
				return 229;
		
			if (iParam1 == 2)
				return 230;
		
			if (iParam1 == 3)
				return 231;
			break;
	
		case 30:
			return 285;
	
		case 31:
			return 318;
	
		case 32:
			return 319;
	
		case 33:
			return 320;
	}

	return 322;
}

void func_199(int iParam0) // Hash - 0x12249850 ^0x46987D7A
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_113648.f_20412.f_150[i], offset);

	return;
}

void func_200(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Hash - 0x2B872DAE ^0x1C355521
{
	func_201(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_201(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Hash - 0x7C3327C8 ^0xF7A6129B
{
	int i;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_113648.f_20412[i /*16*/], sParam0))
			return;
	}

	if (Global_113648.f_20412.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9 = iParam5;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11 = iParam6;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = iParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
	
		Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 + 1;
		func_202();
	}

	return;
}

void func_202() // Hash - 0xCF8881D1 ^0x40507183
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_113648.f_20412.f_146[i] = 0;
	}

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 0))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[0])
				Global_113648.f_20412.f_146[0] = Global_113648.f_20412[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 1))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[1])
				Global_113648.f_20412.f_146[1] = Global_113648.f_20412[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 2))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[2])
				Global_113648.f_20412.f_146[2] = Global_113648.f_20412[i /*16*/].f_12;
	}

	return;
}

BOOL func_203(int iParam0) // Hash - 0x3F44A899 ^0x7041C53
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_113648.f_20412.f_150[i], num);

	return false;
}

void func_204(int iParam0, int iParam1) // Hash - 0xE2246457 ^0xD5018049
{
	MISC::SET_BIT(&Global_113648.f_24997.f_8[iParam0], iParam1);
	return;
}

int func_205() // Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_206(int iParam0) // Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113634 = iParam0;
	return;
}

void func_207() // Hash - 0xFA4E3A19 ^0xFC369B3E
{
	if (!bLocal_74 && iLocal_51 == 0)
	{
		if (!PED::IS_PED_INJURED(pedLocal_54) && !PED::IS_PED_INJURED(pedLocal_55))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(pedLocal_54, ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), 3f, 20000, 1193033728, 1056964608);
			PED::SET_PED_KEEP_TASK(pedLocal_54, true);
			SYSTEM::WAIT(0);
		}
	}

	return;
}

