#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	BOOL bLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	BOOL bLocal_54 = 0;
	int iLocal_55 = 0;
	BOOL bLocal_56 = 0;
	Ped pedLocal_57 = 0;
	Ped pedLocal_58 = 0;
	BOOL bLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	BOOL bLocal_71 = 0;
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
	BOOL bLocal_84 = 0;
	BOOL bLocal_85 = 0;
	BOOL bLocal_86 = 0;
	BOOL bLocal_87 = 0;
	BOOL bLocal_88 = 0;
	BOOL bLocal_89 = 0;
	BOOL bLocal_90 = 0;
	BOOL bLocal_91 = 0;
	BOOL bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	Hash hLocal_96 = 0;
	Hash hLocal_97 = 0;
	BOOL bLocal_98 = 0;
	BOOL bLocal_99 = 0;
	Blip blLocal_100 = 0;
	Blip blLocal_101 = 0;
	var uLocal_102 = 2;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	Blip blLocal_105 = 0;
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
	int iLocal_121 = 11;
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
	Pickup pkLocal_133 = 0;
	var uLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	BOOL bLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	BOOL bLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	BOOL bLocal_149 = 0;
	BOOL bLocal_150 = 0;
	Vehicle veLocal_151 = 0;
	Hash hLocal_152 = 0;
	char* sLocal_153 = 0;
	char* sLocal_154 = 0;
	var uLocal_155 = 16;
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
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
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
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_72, "", 24);
	uLocal_118 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_135 = -1;
	uLocal_51 = { uScriptParam_0.f_1[0 /*3*/] };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(pedLocal_58))
			if (PED::IS_PED_IN_GROUP(pedLocal_58))
				PED::REMOVE_PED_FROM_GROUP(pedLocal_58);
	
		func_226();
	}

	if (func_225(256, 1))
		SCRIPT::TERMINATE_THIS_THREAD();

	if (func_183(uLocal_51, -1, 0, false, false))
		func_180(-1);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_49 == 4 || iLocal_68 > 18)
		{
			if (!func_179())
				if (func_178())
					func_226();
		
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_DO", 0);
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				switch (iLocal_48)
				{
					case 0:
						if (!bLocal_50)
						{
							if (func_166())
								func_226();
						
							if (!bLocal_59)
								func_165();
						
							if (bLocal_59)
								func_164();
						}
					
						if (bLocal_50)
							iLocal_48 = 1;
						break;
				
					case 1:
						func_156();
					
						if (iLocal_69 > 3)
						{
							if (!bLocal_92 && !func_155())
							{
								func_154(&uLocal_155, "REDO2AU", "REDO2_THK", 4, 0, 0, 0);
								bLocal_92 = true;
							}
						}
					
						switch (iLocal_49)
						{
							case 0:
								func_150();
								iLocal_49 = 1;
								break;
						
							case 1:
								if (!bLocal_99)
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -467.0595f, 540.1724f, 125.3034f, 91.875f, 90.875f, 30f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(uLocal_106, 1f) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_106, 20f, 20f, 20f, false, true, 0))
									{
										func_149();
										func_140(true);
										bLocal_99 = true;
									}
								}
								else
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_106, 50f, 50f, 50f, false, true, 0))
										func_138();
								
									if (!PED::IS_PED_INJURED(pedLocal_58))
										if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_58, uLocal_63, 30f, 30f, 30f, false, true, 0))
											iLocal_49 = 11;
								}
								break;
						
							case 3:
								func_136();
							
								if (iLocal_68 > 18)
									func_135();
								else if (!func_155())
									func_135();
								break;
						
							case 7:
								func_136();
								func_131();
								break;
						
							case 4:
								func_136();
								func_81();
							
								if (func_80(uLocal_112))
								{
									func_57(false);
									func_55();
									SYSTEM::WAIT(0);
									func_154(&uLocal_155, "REDO2AU", "REDO2_CULT", 4, 0, 0, 0);
								}
							
								if (func_53())
								{
									func_57(false);
									func_55();
									SYSTEM::WAIT(0);
									func_154(&uLocal_155, "REDO2AU", "REDO2_NEAR", 4, 0, 0, 0);
								}
							
								if (!bLocal_89)
								{
									if (func_52())
									{
										if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_112, 23f, 60f, 20f, false, true, 0))
										{
											func_57(false);
											func_55();
											SYSTEM::WAIT(0);
										
											if (!func_155())
											{
												func_154(&uLocal_155, "REDO2AU", "REDO2_DRP", 4, 0, 0, 0);
												bLocal_89 = true;
											}
										}
									}
								}
								break;
						
							case 11:
								func_51();
								break;
						}
					
						if (!PED::IS_PED_INJURED(pedLocal_57))
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_57, "random@domestic", "f_attack_end", 3))
								func_49(pedLocal_57, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
					
						if (func_48() && !func_47() && iLocal_48 != 2)
						{
							if (!PED::IS_PED_INJURED(pedLocal_58))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_58, uLocal_118, 5f, 5f, 5f, false, true, 0))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]))
									{
										iLocal_121[8] = OBJECT::CREATE_OBJECT(joaat("PROP_GOLF_IRON_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
										ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_121[8], pedLocal_58, PED::GET_PED_BONE_INDEX(pedLocal_58, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, true, false, false, false, 2, true, 0);
									}
								
									func_46(0);
									SYSTEM::WAIT(0);
									func_55();
									iLocal_48 = 2;
								}
							}
						}
					
						if (func_45())
							func_51();
						break;
				
					case 2:
						if (func_44())
						{
							if (ENTITY::DOES_ENTITY_EXIST(pedLocal_58))
								PED::DELETE_PED(&pedLocal_58);
						
							func_14();
						}
						break;
				
					case 3:
						func_1();
						break;
				}
			}
		}
		else
		{
			func_226();
		}
	}

	return;
}

void func_1() // Hash - 0x3E3A55F1 ^0xF0B0A28D
{
	int i;

	if (bLocal_150 && !bLocal_149)
	{
		func_3(false);
	
		if (Global_32406)
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
	
		func_2();
	
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]))
		{
			pkLocal_133 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_GOLFCLUB"), ENTITY::GET_ENTITY_COORDS(iLocal_121[8], true), ENTITY::GET_ENTITY_ROTATION(iLocal_121[8], 2) + { 2.8157f, -159.5768f, -14.1956f }, 0, -1, 2, true, 0);
			OBJECT::DELETE_OBJECT(&iLocal_121[8]);
		}
	
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_63 - { 10f, 10f, 10f }, uLocal_63 + { 10f, 10f, 10f }, true, true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, hLocal_152, joaat("PLAYER"));
	
		if (bLocal_59)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_96);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_97);
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_57))
		{
			if (!PED::IS_PED_INJURED(pedLocal_57))
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_57, false);
		
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_57);
		}
	
		if (HUD::DOES_BLIP_EXIST(blLocal_105))
			HUD::REMOVE_BLIP(&blLocal_105);
	
		if (HUD::DOES_BLIP_EXIST(uLocal_102[0]))
			HUD::REMOVE_BLIP(&uLocal_102[0]);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_58))
		{
			if (!PED::IS_PED_INJURED(pedLocal_58))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_58, false))
					PED::RESET_PED_LAST_VEHICLE(pedLocal_58);
			
				PED::REMOVE_PED_FROM_GROUP(pedLocal_58);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_58, false);
				PED::SET_PED_CAN_BE_TARGETTED(pedLocal_58, true);
			}
		}
	
		for (i = 0; i < iLocal_121; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[i]))
				ENTITY::DETACH_ENTITY(iLocal_121[i], true, true);
		}
	
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		bLocal_149 = true;
	}

	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_63, 80f, 80f, 80f, false, true, 0) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(pkLocal_133) || !(ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]) && !OBJECT::DOES_PICKUP_EXIST(pkLocal_133)))
		func_226();

	return;
}

void func_2() // Hash - 0x17878A26 ^0x17878A26
{
	Global_32402 = 0;
	Global_32403 = false;
	Global_32405 = false;
	Global_32406 = false;
	Global_32407 = false;
	return;
}

void func_3(BOOL bParam0) // Hash - 0x1254D1D1 ^0x1254D1D1
{
	int i;

	for (i = 0; i < 60; i = i + 1)
	{
		func_4(i, bParam0);
	}

	return;
}

void func_4(int iParam0, BOOL bParam1) // Hash - 0x64B1D886 ^0x64B1D886
{
	if (bParam1)
		if (!func_13(iParam0, 2, true))
			func_12(iParam0, 2, true);
	else if (func_13(iParam0, 2, true))
		func_5(iParam0, 2, true);

	return;
}

void func_5(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x1F4148DA ^0xB2D02435
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::CLEAR_BIT(&Global_100733.f_1407[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_11() == 0)
		{
			address = func_9(func_10(iParam0), -1, 0);
			MISC::CLEAR_BIT(&address, iParam1);
			func_6(func_10(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

void func_6(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Hash - 0x7D768555 ^0x693A841
{
	Hash statName;

	bParam4;
	statName = Global_2805027[iParam0 /*3*/][func_7(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_7(int iParam0) // Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_8();
	
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

int func_8() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

int func_9(int iParam0, int iParam1, int iParam2) // Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_7(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

int func_10(int iParam0) // Hash - 0x28E83966 ^0x9E37924F
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return 831;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return 854;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 12385;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return 8268;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9916;
	
		case 57:
			return 9918;
	
		case 58:
			return 11433;
	
		case 59:
			return 11844;
	
		default:
			break;
	}

	return 14192;
}

int func_11() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

void func_12(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x1F4148DA ^0x95628DB
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::SET_BIT(&Global_100733.f_1407[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_11() == 0)
		{
			address = func_9(func_10(iParam0), -1, 0);
			MISC::SET_BIT(&address, iParam1);
			func_6(func_10(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_13(int iParam0, int iParam1, BOOL bParam2) // Hash - 0xA45BEB30 ^0x6033D2A2
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_11() == 0)
			return IS_BIT_SET(func_9(func_10(iParam0), -1, 0), iParam1);
	else
		return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);

	return false;
}

void func_14() // Hash - 0x46141D48 ^0xFF7EAF99
{
	while (func_155())
	{
		SYSTEM::WAIT(0);
	}

	while (!func_43())
	{
		SYSTEM::WAIT(0);
	}

	Global_113648.f_18576.f_383 = func_42() + 1;
	func_18(-1, 0);
	func_15();
	iLocal_48 = 3;
	return;
}

void func_15() // Hash - 0xD765C186 ^0xD765C186
{
	func_16();
	return;
}

int func_16() // Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_17(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL func_17(BOOL bParam0) // Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_18(int iParam0, int iParam1) // Hash - 0x76121DD5 ^0x76121DD5
{
	if (iParam0 == -1)
		iParam0 = func_40();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
	
		if (!func_37(51))
		{
			func_27(_("Some Random Events will reward the player with stat boosts or money."), 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
	
		if (func_25(iParam0))
			Global_113648.f_24997.f_2 = 3;
	
		if (func_24(iParam0, iParam1) != 322)
			func_20(func_24(iParam0, iParam1), uLocal_44, uLocal_44.f_1);
	
		Global_113636 = iParam1;
	
		if (Global_113634 == 0)
			if (Global_113637 == 1 || Global_113637 == 5 || Global_113637 == 11 || Global_113637 == 25)
				func_19(2);
			else if (Global_113637 == 26 || Global_113637 == 8 || Global_113637 == 17)
				func_19(7);
			else
				func_19(1);
	}

	return;
}

void func_19(int iParam0) // Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113634 = iParam0;
	return;
}

void func_20(int iParam0, var uParam1, var uParam2) // Hash - 0xEC2439E7 ^0x1B67A713
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_23(891 + iParam0, true, -1);
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
		func_21();

	return;
}

void func_21() // Hash - 0x9F269E94 ^0x9F269E94
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
		func_22(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78558)
		{
			if (func_11() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113382 = 0;
			
				if (!Global_63362)
					func_16();
			}
		}
	}

	return;
}

BOOL func_22(int iParam0, int iParam1) // Hash - 0x77E0C72A ^0x80DA2A54
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

void func_23(int iParam0, BOOL bParam1, int iParam2) // Hash - 0xCF91FBA1 ^0xAE1D9C41
{
	if (iParam2 == -1)
		iParam2 = func_8();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_24(int iParam0, int iParam1) // Hash - 0xE97012CD ^0x68FBF85A
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

BOOL func_25(int iParam0) // Hash - 0xBF3EFB31 ^0xBF3EFB31
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

void func_26(int iParam0) // Hash - 0x12249850 ^0x46987D7A
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

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Hash - 0xFA14711 ^0xFA14711
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_28(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Hash - 0x2DEFD20B ^0x2F7188BE
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
		func_29();
	}

	return;
}

void func_29() // Hash - 0xCF8881D1 ^0x40507183
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

int func_30() // Hash - 0x35BC7314 ^0x35BC7314
{
	func_31();

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

void func_31() // Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_34(PLAYER::PLAYER_PED_ID());
		
			if (func_33(num) && !func_32(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_33(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_32(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

BOOL func_33(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_34(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_35(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_35(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_33(iParam0))
		return func_36(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_36(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

BOOL func_37(int iParam0) // Hash - 0x3F44A899 ^0x7041C53
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

void func_38(int iParam0, int iParam1) // Hash - 0xE2246457 ^0xD5018049
{
	MISC::SET_BIT(&Global_113648.f_24997.f_8[iParam0], iParam1);
	return;
}

int func_39(int iParam0) // Hash - 0xAA02DAD0 ^0xAA02DAD0
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

int func_40() // Hash - 0x7AC1007E ^0x4E7D4F54
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_41(unk);
	return num;
}

int func_41(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Hash - 0x6DA57317 ^0x57A32A43
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

int func_42() // Hash - 0xC3538935 ^0x25088A4A
{
	return Global_113648.f_10018.f_21 + Global_113648.f_18576.f_380;
}

BOOL func_43() // Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_44() // Hash - 0x631513D1 ^0x631513D1
{
	if (Global_32403)
	{
		func_19(4);
		return true;
	}

	return false;
}

BOOL func_45() // Hash - 0x90BC1FBD ^0xA2C76834
{
	if (PED::IS_PED_INJURED(pedLocal_57) && PED::IS_PED_INJURED(pedLocal_58))
		return true;

	return false;
}

void func_46(int iParam0) // Hash - 0x67413911 ^0x67413911
{
	Global_22736 = iParam0;
	return;
}

BOOL func_47() // Hash - 0xAF463394 ^0x90F146CD
{
	if (Global_113648.f_24997.f_5 == 1000)
		return true;

	return false;
}

BOOL func_48() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32402;
}

void func_49(Ped pedParam0, char* sParam1, char* sParam2, int iParam3) // Hash - 0xB310831B ^0x96265DAC
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(pedParam0, sParam1, sParam2, func_50(iParam3), false);
	return;
}

char* func_50(int iParam0) // Hash - 0x7130F204 ^0x63C21742
{
	char* str;

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

	str = 0;
	return str;
}

void func_51() // Hash - 0xFF1DE625 ^0xFF1DE625
{
	iLocal_48 = 3;
	return;
}

BOOL func_52() // Hash - 0xC9A216E6 ^0xBF700A11
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		veLocal_151 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_151, false))
			if (!PED::IS_PED_INJURED(pedLocal_58))
				if (PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_58, veLocal_151))
					return true;
	}

	return false;
}

BOOL func_53() // Hash - 0x6EF86551 ^0x565C83FA
{
	if (func_54() == 2)
	{
		if (func_48())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_32407)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_32407 = true;
				
					if (!Global_32406)
					{
						Global_32406 = true;
						return true;
					}
				}
			}
			else if (Global_32407)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_32407 = false;
			}
		}
	}

	return false;
}

int func_54() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_31();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_55() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_56();
	return;
}

void func_56() // Hash - 0xF6D04E68 ^0x80AE5309
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

void func_57(BOOL bParam0) // Hash - 0x1A1ED7D5 ^0x968BABCC
{
	if (bParam0)
	{
		if (bLocal_71)
			if (func_64(&uLocal_155, "REDO2AU", &uLocal_78, &uLocal_72, 8, 0, 0))
				bLocal_71 = false;
	}
	else if (!bLocal_71 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !func_62())
	{
		uLocal_78 = { func_61() };
		uLocal_72 = { func_60() };
		func_58();
		bLocal_71 = true;
	}

	return;
}

void func_58() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_59();
	return;
}

void func_59() // Hash - 0x21027D29 ^0xBEB9ECFD
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

struct<6> func_60() // Hash - 0xFF267AB8 ^0xED44CCFB
{
	var unk;
	int currentScriptedConversationLine;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_21725 == 4)
	{
		currentScriptedConversationLine = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		currentScriptedConversationLine = currentScriptedConversationLine + Global_22735;
	
		if (currentScriptedConversationLine > -1)
			return Global_20593[currentScriptedConversationLine /*6*/];
		else
			return unk;
	}

	return unk;
}

struct<6> func_61() // Hash - 0xB37EF8EF ^0xB37EF8EF
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_21725 == 4)
		return Global_21344;

	return unk;
}

BOOL func_62() // Hash - 0x5D331ADC ^0x19804CC8
{
	if (func_63("REDO2_DRP") || func_63("REDO2_UV") || func_63("REDO2_UV2") || func_63("REDO2_CULT") || func_63("REDO2_NEAR") || func_63("REDO2_GETOUT") || func_63("REDO2_JACK") || func_63("REDO2_SHOOT"))
		return true;

	return false;
}

BOOL func_63(char* sParam0) // Hash - 0xBFB3A048 ^0xC37F964
{
	var string2;

	if (func_155())
	{
		TEXT_LABEL_COPY(&string2, { func_61() }, 4);
	
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &string2))
			return true;
	}

	return false;
}

BOOL func_64(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Hash - 0xF7B25BD8 ^0xF7B25BD8
{
	func_79(uParam0, 145, sParam1, iParam5, iParam6, 0);

	if (iParam4 > 7)
		if (iParam4 < 12)
			iParam4 = 7;

	Global_21732 = false;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_22729, sParam3, 24);
	Global_2883585 = 0;
	return func_65(sParam2, iParam4, false);
}

BOOL func_65(char* sParam0, int iParam1, BOOL bParam2) // Hash - 0x77297D51 ^0x40DC584A
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
					func_78();
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
	
		if (func_77(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_76();
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
				func_75();
			
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
			
				if (func_74())
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
		
			if (func_73())
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
		
			func_72();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_71();
		func_66();
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
		func_78();
	}

	return 0;
}

void func_66() // Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_67())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_67() // Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (PLAYER::PLAYER_ID() == func_70())
		return false;

	if (func_68(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_68(Player plParam0) // Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_69(plParam0, 20);
}

BOOL func_69(Player plParam0, int iParam1) // Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

Player func_70() // Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_71() // Hash - 0xE1F0C158 ^0xB5D2F635
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

void func_72() // Hash - 0xCD8A4D28 ^0xCD8A4D28
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

BOOL func_73() // Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

BOOL func_74() // Hash - 0x9A999369 ^0x4033F7BF
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

void func_75() // Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_32(14))
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
		Global_20383 = func_54();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

void func_76() // Hash - 0x719867DD ^0xB196B20A
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

BOOL func_77(int iParam0, int iParam1) // Hash - 0xA14C4D3F ^0xA6034F77
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

void func_78() // Hash - 0xE32CF1EF ^0xB9A7BEB2
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

void func_79(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Hash - 0xC6B752B2 ^0xC6B752B2
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

BOOL func_80(Vector3 vParam0, var uParam1, var uParam2) // Hash - 0xBFD4BC13 ^0xF257BB49
{
	if (func_54() == 2)
	{
		if (func_48() && !Global_32405)
		{
			if (fLocal_47 == -1f)
				fLocal_47 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vParam0);
		
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vParam0) > fLocal_47 + 200f || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_32405 = true;
				return true;
			}
		}
	}

	return false;
}

void func_81() // Hash - 0x30CA5E46 ^0xF79AE6CB
{
	switch (iLocal_70)
	{
		case 0:
			if (iLocal_68 > 18)
			{
				iLocal_70 = iLocal_70 + 1;
			}
			else if (!PED::IS_PED_INJURED(pedLocal_58))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedLocal_58, 1f);
			
				if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_58, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, false, true, 0))
					if (iLocal_68 < 19)
						if (func_154(&uLocal_155, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
							iLocal_70 = iLocal_70 + 1;
					else
						iLocal_70 = iLocal_70 + 1;
			}
			break;
	
		case 1:
			func_127();
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_58))
			{
				if (!PED::IS_PED_INJURED(pedLocal_58))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false))
						if (PED::IS_PED_GETTING_INTO_A_VEHICLE(pedLocal_58))
							OBJECT::DELETE_OBJECT(&iLocal_121[8]);
				
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(pedLocal_58))
					{
						func_125();
						func_119();
					
						if (func_154(&uLocal_155, "REDO2AU", "REDO2_TO", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_70 = iLocal_70 + 1;
						}
					}
					else
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(pedLocal_58, 1f);
					}
				}
			}
			break;
	
		case 2:
			func_119();
			func_118();
			func_127();
			func_117();
		
			if (SYSTEM::TIMERB() > 1500)
				func_116();
		
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_112, 10f, 10f, 10f, false, true, 0))
				HUD::CLEAR_ALL_HELP_MESSAGES();
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_58))
			{
				if (!PED::IS_PED_INJURED(pedLocal_58))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_58, uLocal_112, Global_19, true, true, 0) && func_115(true, false, true))
					{
						if (HUD::DOES_BLIP_EXIST(blLocal_100))
							HUD::REMOVE_BLIP(&blLocal_100);
					
						if (HUD::DOES_BLIP_EXIST(blLocal_101))
							HUD::REMOVE_BLIP(&blLocal_101);
					
						if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_58, false))
						{
							VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(pedLocal_58, false), 10.5f, 3, false);
							iLocal_70 = iLocal_70 + 1;
						}
						else
						{
							iLocal_70 = 4;
						}
					}
				}
			}
			break;
	
		case 3:
			func_114();
		
			if (bLocal_145)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_14();
			}
			break;
	
		case 4:
			func_82();
		
			if (bLocal_145)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_14();
			}
			break;
	}

	return;
}

void func_82() // Hash - 0xBDFA3C90 ^0xF81226BA
{
	switch (iLocal_143)
	{
		case 0:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			func_58();
		
			if (func_154(&uLocal_155, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
				iLocal_143 = iLocal_143 + 1;
			break;
	
		case 1:
			iLocal_143 = iLocal_143 + 1;
			break;
	
		case 2:
			HUD::CLEAR_ALL_HELP_MESSAGES();
		
			if (!PED::IS_PED_INJURED(pedLocal_58))
			{
				PED::REMOVE_PED_FROM_GROUP(pedLocal_58);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, SLF_WHILE_NOT_IN_FOV, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_115, 1f, -1, 0.25f, 0, 311.3569f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_58, iLocal_95);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
				PED::SET_PED_KEEP_TASK(pedLocal_58, true);
				iLocal_144 = MISC::GET_GAME_TIMER() + 4000;
				iLocal_143 = iLocal_143 + 1;
			}
			break;
	
		case 3:
			if (iLocal_144 < MISC::GET_GAME_TIMER())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
				iLocal_143 = iLocal_143 + 1;
			}
			break;
	
		case 4:
			if (!func_155())
			{
				func_113(_("Castro will soon be available to play golf."), -1);
				func_112(&(Global_113648.f_18981), 16);
			
				if (func_54() == 0)
					func_111(&(Global_113648.f_18981.f_24), 1);
				else if (func_54() == 1)
					func_111(&(Global_113648.f_18981.f_24), 4);
				else if (func_54() == 2)
					func_111(&(Global_113648.f_18981.f_24), 2);
			
				func_83(func_54(), 1, 80, false, true);
				SYSTEM::SETTIMERA(0);
				iLocal_143 = iLocal_143 + 1;
			}
			break;
	
		case 5:
			if (SYSTEM::TIMERA() > 5000)
				bLocal_145 = true;
			break;
	}

	return;
}

void func_83(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Hash - 0xD1775FEC ^0xD1775FEC
{
	int outValue;
	Hash statHash;

	if (func_110(iParam0) == 3)
		return;

	if (func_110(iParam0) == 4)
		return;

	func_84(func_110(iParam0), 1, iParam1, iParam2, false);

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

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Hash - 0x66394909 ^0x7ECE9AC7
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_109();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_108(99, 1);
					func_107(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 1:
					func_107(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 2:
					func_107(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
		
			func_93(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_91(5))
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
							func_107(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 1:
							func_107(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 2:
							func_107(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
				
					if (func_91(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 1:
							func_107(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 2:
							func_107(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_107(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 1:
							func_107(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 2:
							func_107(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_107(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 1:
							func_107(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 2:
							func_107(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_107(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 1:
									func_107(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 2:
									func_107(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
					
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 1:
									func_107(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 2:
									func_107(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
						
							if (func_91(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 1:
									func_107(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 2:
									func_107(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
					
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_107(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 1:
									func_107(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 2:
									func_107(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
						
							func_90(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_108(95, iParam3);
					break;
			
				case 1:
					func_108(97, iParam3);
					break;
			
				case 2:
					func_108(96, iParam3);
					break;
			}
		
			func_108(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = SYSTEM::FLOOR(num * SYSTEM::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_87(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_87(num2);
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
					func_107(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 1:
					func_107(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 2:
					func_107(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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

	func_86(iParam0);

	if (Global_43257 == 15)
		func_85(false);

	return 1;
}

void func_85(BOOL bParam0) // Hash - 0xB232D28E ^0x40CAA0C6
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

void func_86(int iParam0) // Hash - 0xD2EB197 ^0x9FF73396
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

void func_87(int iParam0) // Hash - 0x3705FAD4 ^0x3705FAD4
{
	BOOL flag;
	var txdName;

	if (iParam0 == 8)
	{
		func_23(129, false, -1);
		return;
	}

	if (iParam0 == 9)
	{
		func_23(135, false, -1);
		return;
	}

	if (iParam0 == 10)
	{
		func_23(136, false, -1);
		return;
	}

	if (iParam0 == 11)
	{
		func_23(137, false, -1);
		return;
	}

	if (iParam0 == 12)
	{
		func_6(8272, 0, -1, true, false);
		return;
	}

	if (iParam0 == 13)
	{
		func_6(8273, 0, -1, true, false);
		return;
	}

	if (iParam0 == 14)
	{
		func_6(8274, 0, -1, true, false);
		return;
	}

	if (iParam0 == 15)
	{
		func_6(8275, 0, -1, true, false);
		return;
	}

	if (iParam0 == 16)
	{
		func_6(8276, 0, -1, true, false);
		return;
	}

	if (iParam0 == 17)
	{
		func_6(8277, 0, -1, true, false);
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
	else if (IS_BIT_SET(Global_113648.f_20566.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_89() /*5568*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_89() /*5568*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(_("You have redeemed your promotion for ~a~"));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_88(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* func_88(int iParam0) // Hash - 0xA17D549C ^0x8FAD176D
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

int func_89() // Hash - 0xF9396AAC ^0xF9396AAC
{
	int num;

	num = 0;
	return num;
}

void func_90(int iParam0) // Hash - 0x35B495B7 ^0x35B495B7
{
	func_108(93, iParam0);
	func_108(29, iParam0);
	func_108(30, iParam0);
	return;
}

BOOL func_91(int iParam0) // Hash - 0xA882C352 ^0xA882C352
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
		return func_92(129, -1);

	if (iParam0 == 9)
		return func_92(135, -1);

	if (iParam0 == 10)
		return func_92(136, -1);

	if (iParam0 == 11)
		return func_92(137, -1);

	if (iParam0 == 12)
	{
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
		num = func_9(8272, -1, 0);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_9(8273, -1, 0);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_9(8274, -1, 0);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_9(8275, -1, 0);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_9(8276, -1, 0);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_9(8277, -1, 0);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_113648.f_20566.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_89() /*5568*/].f_681.f_10, iParam0);
}

BOOL func_92(int iParam0, int iParam1) // Hash - 0x6099A833 ^0x46750A9D
{
	if (iParam1 == -1)
		iParam1 = func_8();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_93(BOOL bParam0) // Hash - 0xDC114C70 ^0xC626A2DE
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
		func_22(27, value);
	}

	if (value < 200000000)
		return 0;

	func_94(27, 1);
	return 1;
}

int func_94(int iParam0, int iParam1) // Hash - 0x86FEA587 ^0x86FEA587
{
	if (iParam0 >= 78)
		return 0;

	return func_95(iParam0, iParam1);
}

int func_95(int iParam0, int iParam1) // Hash - 0x82ECF66F ^0xA78EE4A6
{
	if (func_32(14) && !func_106(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_32414 != 0 && !Global_78558)
		return 0;

	if (func_105(&Global_4542597))
	{
		if (func_103(&Global_4542597, iParam0))
			return 0;
	
		if (func_96(&Global_4542597, iParam0))
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

BOOL func_96(var uParam0, int iParam1) // Hash - 0x5631295D ^0x7E65A9A4
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_32(14) && !func_106(iParam1))
		return false;

	if (func_103(uParam0, iParam1))
		return false;

	if (func_102(uParam0) < 0f)
		func_101(uParam0, 0);

	func_99(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_97(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_97(var uParam0, int iParam1) // Hash - 0x80929C05 ^0xD2A2E174
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_32(14) && !func_106(iParam1))
		return 0;

	if (func_103(uParam0, iParam1))
		return 0;

	if (func_102(uParam0) < 0f)
		func_101(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_98(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_98(var uParam0, int iParam1) // Hash - 0xFE39C18F ^0xFE39C18F
{
	return uParam0->[iParam1] == 78;
}

void func_99(var uParam0) // Hash - 0x6E916534 ^0x6E916534
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_100(uParam0, i);
	}

	func_101(uParam0, Global_4542596 - 0.5f);
	return;
}

void func_100(var uParam0, int iParam1) // Hash - 0xE18ECB8F ^0xE18ECB8F
{
	uParam0->[iParam1] = 78;
	return;
}

void func_101(var uParam0, int iParam1) // Hash - 0x8B7064C5 ^0xE61DC398
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_102(var uParam0) // Hash - 0xD73B9827 ^0xE571889D
{
	return uParam0->f_80;
}

BOOL func_103(var uParam0, int iParam1) // Hash - 0xD7E1A70C ^0xD7E1A70C
{
	return func_104(uParam0, iParam1) != -1;
}

int func_104(var uParam0, int iParam1) // Hash - 0xA778BD6E ^0xA778BD6E
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_105(var uParam0) // Hash - 0x21364471 ^0xE4E379A4
{
	return uParam0->f_79 == 1;
}

BOOL func_106(int iParam0) // Hash - 0x5000025C ^0x5000025C
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

void func_107(Hash hParam0, int iParam1) // Hash - 0x1F80E88A ^0x1E13AAF3
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

void func_108(int iParam0, int iParam1) // Hash - 0xE9A65642 ^0xF9847A54
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

void func_109() // Hash - 0xFD5B61DC ^0x7C6336B1
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

int func_110(int iParam0) // Hash - 0x12DEE71A ^0xB4CACA6A
{
	return Global_2028[iParam0 /*29*/].f_17;
}

void func_111(var uParam0, int iParam1) // Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_112(var uParam0, int iParam1) // Hash - 0x53A96DDB ^0xAEBADD31
{
	uParam0->f_23 = uParam0->f_23 || iParam1;
	return;
}

void func_113(char* sParam0, int iParam1) // Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_114() // Hash - 0xBBB25AFE ^0xBD764F86
{
	switch (iLocal_143)
	{
		case 0:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			func_58();
		
			if (func_154(&uLocal_155, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
				iLocal_143 = iLocal_143 + 1;
			break;
	
		case 1:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			iLocal_143 = iLocal_143 + 1;
			break;
	
		case 2:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			iLocal_143 = iLocal_143 + 1;
			break;
	
		case 3:
			HUD::CLEAR_ALL_HELP_MESSAGES();
		
			if (!PED::IS_PED_INJURED(pedLocal_58))
			{
				PED::REMOVE_PED_FROM_GROUP(pedLocal_58);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, SLF_WHILE_NOT_IN_FOV, 2);
				TASK::TASK_PAUSE(0, 300);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_115, 1f, -1, 0.25f, 0, 311.3569f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_58, iLocal_95);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
				PED::SET_PED_KEEP_TASK(pedLocal_58, true);
			
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]))
				{
					iLocal_121[8] = OBJECT::CREATE_OBJECT(joaat("PROP_GOLF_IRON_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_121[8], pedLocal_58, PED::GET_PED_BONE_INDEX(pedLocal_58, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, true, false, false, false, 2, true, 0);
				}
			
				iLocal_144 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_143 = iLocal_143 + 1;
			}
			break;
	
		case 4:
			HUD::CLEAR_ALL_HELP_MESSAGES();
		
			if (iLocal_144 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(pedLocal_58))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_144 = MISC::GET_GAME_TIMER() + 3000;
					iLocal_143 = iLocal_143 + 1;
				}
			}
			break;
	
		case 5:
			if (iLocal_144 < MISC::GET_GAME_TIMER())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
				iLocal_143 = iLocal_143 + 1;
			}
			break;
	
		case 6:
			if (!func_155())
			{
				func_113(_("Castro will soon be available to play golf."), -1);
				func_112(&(Global_113648.f_18981), 16);
			
				if (func_54() == 0)
					func_111(&(Global_113648.f_18981.f_24), 1);
				else if (func_54() == 1)
					func_111(&(Global_113648.f_18981.f_24), 4);
				else if (func_54() == 2)
					func_111(&(Global_113648.f_18981.f_24), 2);
			
				func_83(func_54(), 1, 80, false, true);
				SYSTEM::SETTIMERA(0);
				iLocal_143 = iLocal_143 + 1;
			}
			break;
	
		case 7:
			if (SYSTEM::TIMERA() > 5000)
				bLocal_145 = true;
			break;
	}

	return;
}

BOOL func_115(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Hash - 0xF0D380FF ^0x29DD7336
{
	Vehicle vehiclePedIsIn;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
		return false;

	if (bParam0)
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			return false;

	vehiclePedIsIn = 0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			return false;
	
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (bParam0)
			if (ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				return false;
	
		if (bParam2)
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) != PLAYER::PLAYER_PED_ID())
					return false;
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) > 1.011f)
				return false;
	}
	else if (bParam1)
	{
		return false;
	}

	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
		return false;

	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

void func_116() // Hash - 0xA43F351E ^0xE421C878
{
	if (!func_62())
		func_57(true);

	if (!func_155())
	{
		switch (iLocal_141)
		{
			case 0:
				if (func_54() == 0)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHTM", 4, 0, 0, 0);
				else if (func_54() == 1)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHTF", 4, 0, 0, 0);
				else if (func_54() == 2)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHTT", 4, 0, 0, 0);
			
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 1:
				func_154(&uLocal_155, "REDO2AU", "REDO2_CHT2", 4, 0, 0, 0);
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 2:
				if (func_54() == 0)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT2M", 4, 0, 0, 0);
				else if (func_54() == 1)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT2F", 4, 0, 0, 0);
				else if (func_54() == 2)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT2T", 4, 0, 0, 0);
			
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 3:
				func_154(&uLocal_155, "REDO2AU", "REDO2_CHT3", 4, 0, 0, 0);
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 4:
				if (func_54() == 0)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT3M", 4, 0, 0, 0);
				else if (func_54() == 1)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT3F", 4, 0, 0, 0);
				else if (func_54() == 2)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT3T", 4, 0, 0, 0);
			
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 5:
				func_154(&uLocal_155, "REDO2AU", "REDO_CHT4", 4, 0, 0, 0);
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 6:
				iLocal_142 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 7:
				if (iLocal_142 < MISC::GET_GAME_TIMER())
				{
					if (func_54() == 0)
						func_154(&uLocal_155, "REDO2AU", "REDO_CHT4M", 4, 0, 0, 0);
					else if (func_54() == 1)
						func_154(&uLocal_155, "REDO2AU", "REDO_CHT4F", 4, 0, 0, 0);
					else if (func_54() == 2)
						func_154(&uLocal_155, "REDO2AU", "REDO_CHT4T", 4, 0, 0, 0);
				
					iLocal_141 = iLocal_141 + 1;
				}
				break;
		
			case 8:
				func_154(&uLocal_155, "REDO2AU", "REDO2_CHT5", 4, 0, 0, 0);
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 9:
				if (func_54() == 0)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT5M", 4, 0, 0, 0);
				else if (func_54() == 1)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT5F", 4, 0, 0, 0);
				else if (func_54() == 2)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT5T", 4, 0, 0, 0);
			
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 10:
				func_154(&uLocal_155, "REDO2AU", "REDO2_CHT6", 4, 0, 0, 0);
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 11:
				if (func_54() == 0)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT6M", 4, 0, 0, 0);
				else if (func_54() == 1)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT6F", 4, 0, 0, 0);
				else if (func_54() == 2)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT6T", 4, 0, 0, 0);
			
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 12:
				func_154(&uLocal_155, "REDO2AU", "REDO2_CHT7", 4, 0, 0, 0);
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 13:
				iLocal_142 = MISC::GET_GAME_TIMER() + 600;
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 14:
				if (iLocal_142 < MISC::GET_GAME_TIMER())
				{
					if (func_54() == 0)
						func_154(&uLocal_155, "REDO2AU", "REDO2_CHT7M", 4, 0, 0, 0);
					else if (func_54() == 1)
						func_154(&uLocal_155, "REDO2AU", "REDO2_CHT7F", 4, 0, 0, 0);
					else if (func_54() == 2)
						func_154(&uLocal_155, "REDO2AU", "REDO2_CHT7T", 4, 0, 0, 0);
				
					iLocal_141 = iLocal_141 + 1;
				}
				break;
		
			case 15:
				func_154(&uLocal_155, "REDO2AU", "REDO2_CHT8", 4, 0, 0, 0);
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 16:
				if (func_54() == 0)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT8M", 4, 0, 0, 0);
				else if (func_54() == 1)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT8F", 4, 0, 0, 0);
				else if (func_54() == 2)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT8T", 4, 0, 0, 0);
			
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 17:
				iLocal_142 = MISC::GET_GAME_TIMER() + 800;
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 18:
				if (iLocal_142 < MISC::GET_GAME_TIMER())
				{
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT9", 4, 0, 0, 0);
					iLocal_141 = iLocal_141 + 1;
				}
				break;
		
			case 19:
				if (func_54() == 0)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT9M", 4, 0, 0, 0);
				else if (func_54() == 1)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT9F", 4, 0, 0, 0);
				else if (func_54() == 2)
					func_154(&uLocal_155, "REDO2AU", "REDO2_CHT9T", 4, 0, 0, 0);
			
				iLocal_141 = iLocal_141 + 1;
				break;
		
			case 20:
				func_154(&uLocal_155, "REDO2AU", "REDO2_CHT10", 4, 0, 0, 0);
				iLocal_141 = iLocal_141 + 1;
				break;
		}
	}

	return;
}

void func_117() // Hash - 0x9CD9C6AB ^0x8A149F2
{
	if (!PED::IS_PED_INJURED(pedLocal_58))
	{
		if (!bLocal_84)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), true) && PED::IS_PED_IN_VEHICLE(pedLocal_58, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					func_57(false);
					func_55();
					SYSTEM::WAIT(0);
					func_154(&uLocal_155, "REDO2AU", "REDO2_GETOUT", 4, 0, 0, 0);
					bLocal_84 = true;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(pedLocal_58, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				bLocal_84 = false;
		}
	
		if (!bLocal_85)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_57(false);
				func_55();
				SYSTEM::WAIT(0);
				func_154(&uLocal_155, "REDO2AU", "REDO2_JACK", 4, 0, 0, 0);
				bLocal_85 = true;
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			bLocal_85 = false;
		}
	
		if (!bLocal_86)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_57(false);
				func_55();
				SYSTEM::WAIT(0);
				func_154(&uLocal_155, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
				bLocal_86 = true;
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			bLocal_86 = false;
		}
	}

	return;
}

void func_118() // Hash - 0xDBC3C3E2 ^0x463DC22B
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_136 == 0)
			iLocal_136 = MISC::GET_GAME_TIMER();
		else
			iLocal_137 = MISC::GET_GAME_TIMER();
	}
	else
	{
		iLocal_137 = 0;
		iLocal_136 = 0;
	}

	if (iLocal_137 - iLocal_136 > 60000)
	{
		func_55();
		SYSTEM::WAIT(0);
		func_154(&uLocal_155, "REDO2AU", "REDO2_TX", 4, 0, 0, 0);
	
		if (!PED::IS_PED_INJURED(pedLocal_58))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_58, uLocal_115, 200f, 200f, 200f, false, true, 0))
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_58, uLocal_115, 1f, -1, 1048576000, 0, 1193033728);
			else
				TASK::TASK_WANDER_STANDARD(pedLocal_58, 1193033728, 0);
		
			PED::SET_PED_KEEP_TASK(pedLocal_58, true);
			PED::REMOVE_PED_FROM_GROUP(pedLocal_58);
		}
	
		func_51();
	}

	return;
}

void func_119() // Hash - 0xC66C2BAD ^0xB1D43E5E
{
	if (!PED::IS_PED_INJURED(pedLocal_58))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_58, 8f, 8f, 8f, false, true, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_58, false) && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_102[0]))
					uLocal_102[0] = func_123(pedLocal_58, false, 145);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_100))
					HUD::REMOVE_BLIP(&blLocal_100);
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_102[0]))
					HUD::REMOVE_BLIP(&uLocal_102[0]);
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_100))
					blLocal_100 = func_121(uLocal_112, true);
			
				if (func_54() == 2 && !func_47())
				{
					if (!HUD::DOES_BLIP_EXIST(blLocal_101))
					{
						blLocal_101 = func_121(uLocal_118, false);
						HUD::SET_BLIP_SPRITE(blLocal_101, BLIP_ALTRUIST);
						func_120();
					}
				}
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_102[0]))
				uLocal_102[0] = func_123(pedLocal_58, false, 145);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_100))
				HUD::REMOVE_BLIP(&blLocal_100);
		}
	}

	return;
}

void func_120() // Hash - 0x3167FC12 ^0x33C75FE7
{
	if (func_54() == 2)
	{
		if (!Global_32404)
		{
			func_113(_("Trevor can sometimes deliver Random Event passengers to the Altruist Cult, located at ~BLIP_ALTRUIST~"), -1);
			Global_32404 = true;
		}
	}

	return;
}

Blip func_121(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Hash - 0xF4E99477 ^0x29669E98
{
	Blip blip;

	blip = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(blip, bParam3);
	return blip;
}

var func_122(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

Blip func_123(Ped pedParam0, BOOL bParam1, int iParam2) // Hash - 0xA714218A ^0xAD0F82BD
{
	Blip blip;

	blip = func_124(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2028[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_124(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x2E5A72B ^0x64F26CC0
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

void func_125() // Hash - 0xB5DE7F00 ^0x3F63C3BB
{
	int i;

	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_57);
	func_126(&uLocal_155, 4);

	for (i = 0; i < iLocal_121; i = i + 1)
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_121[i]);
	}

	STREAMING::REMOVE_ANIM_DICT("random@domestic");
	return;
}

void func_126(var uParam0, int iParam1) // Hash - 0xD18CB130 ^0xA0F4C6FD
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

void func_127() // Hash - 0x8C6DC71 ^0x1217F181
{
	if (!PED::IS_PED_INJURED(pedLocal_58))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_130())
			{
				if (PED::IS_PED_IN_GROUP(pedLocal_58))
					PED::REMOVE_PED_FROM_GROUP(pedLocal_58);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_58, SCRIPT_TASK_GO_TO_ENTITY) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_58, SCRIPT_TASK_GO_TO_ENTITY) != 0)
					TASK::TASK_GO_TO_ENTITY(pedLocal_58, PLAYER::PLAYER_PED_ID(), -1, 6f, 1073741824, 1073741824, 0);
			
				if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_58, false))
					TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_58, 0, 0);
			
				if (!bLocal_91)
				{
					func_57(false);
					func_55();
					SYSTEM::WAIT(0);
				
					if (!func_155())
					{
						if (!func_129())
							func_154(&uLocal_155, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						else
							func_154(&uLocal_155, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
					
						bLocal_91 = true;
					}
				}
			}
			else
			{
				bLocal_91 = false;
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_58, SCRIPT_TASK_GO_TO_ENTITY) == 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_58, SCRIPT_TASK_GO_TO_ENTITY) == 0)
					TASK::CLEAR_PED_TASKS(pedLocal_58);
			}
		}
		else if (!PED::IS_PED_IN_GROUP(pedLocal_58))
		{
			PED::SET_PED_AS_GROUP_MEMBER(pedLocal_58, func_128());
			PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_58, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_58, 0);
		}
	}

	return;
}

int func_128() // Hash - 0xDED80B4D ^0xD3C18941
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

BOOL func_129() // Hash - 0xB366A366 ^0x79AE46B7
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), true))
			if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))))
				return true;

	return false;
}

BOOL func_130() // Hash - 0x52A1F378 ^0x48A181AD
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			if (!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("RHINO")))
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1)
					return true;
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
			if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("RHINO"))
				return true;

	return false;
}

void func_131() // Hash - 0x3A8070AD ^0x9F4594CC
{
	switch (iLocal_69)
	{
		case 0:
			if (!func_155())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (func_130())
					{
						if (func_54() == 0)
							func_154(&uLocal_155, "REDO2AU", "REDO2_GLM", 4, 0, 0, 0);
					
						if (func_54() == 1)
							func_154(&uLocal_155, "REDO2AU", "REDO2_GLF", 4, 0, 0, 0);
					
						if (func_54() == 2)
							func_154(&uLocal_155, "REDO2AU", "REDO2_GLT", 4, 0, 0, 0);
					
						iLocal_69 = 2;
					}
					else
					{
						if (func_54() == 0)
							func_154(&uLocal_155, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
					
						if (func_54() == 1)
							func_154(&uLocal_155, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
					
						if (func_54() == 2)
							func_154(&uLocal_155, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
					
						iLocal_69 = iLocal_69 + 1;
					}
				}
				else
				{
					if (func_54() == 0)
						func_154(&uLocal_155, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
				
					if (func_54() == 1)
						func_154(&uLocal_155, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
				
					if (func_54() == 2)
						func_154(&uLocal_155, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
				
					iLocal_69 = iLocal_69 + 1;
				}
			}
			break;
	
		case 1:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!func_130())
				{
					if (!func_155())
					{
						func_154(&uLocal_155, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
						iLocal_139 = MISC::GET_GAME_TIMER();
						iLocal_69 = iLocal_69 + 1;
					}
				}
				else
				{
					iLocal_69 = iLocal_69 + 1;
				}
			}
			else if (!func_155())
			{
				func_154(&uLocal_155, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
				iLocal_139 = MISC::GET_GAME_TIMER();
				iLocal_69 = iLocal_69 + 1;
			}
			break;
	
		case 2:
			iLocal_140 = MISC::GET_GAME_TIMER();
		
			if (!PED::IS_PED_INJURED(pedLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_58, 12f, 12f, 5f, false, true, 2))
				{
					if (func_130())
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, hLocal_152, joaat("PLAYER"));
					
						if (func_134("REDO2_WT"))
						{
							func_55();
							SYSTEM::WAIT(0);
						}
					
						iLocal_69 = iLocal_69 + 1;
					}
					else if (!func_155() && !bLocal_87)
					{
						if (!func_129())
							func_154(&uLocal_155, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						else
							func_154(&uLocal_155, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
					
						bLocal_87 = true;
					}
				}
			}
		
			if (iLocal_139 != 0)
			{
				if (iLocal_140 - iLocal_139 > 60000)
				{
					if (func_154(&uLocal_155, "REDO2AU", "REDO2_TX", 4, 0, 0, 0))
					{
						SYSTEM::WAIT(2000);
					
						if (!PED::IS_PED_INJURED(pedLocal_58))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
							TASK::TASK_USE_MOBILE_PHONE_TIMED(0, -1);
							TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_58, iLocal_95);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
							PED::SET_PED_KEEP_TASK(pedLocal_58, true);
							SYSTEM::WAIT(3000);
							iLocal_49 = 11;
						}
					}
				}
			}
			break;
	
		case 3:
			if (!PED::IS_PED_INJURED(pedLocal_58) && ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
				iLocal_68 > 18;
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_121[8], true) + { 0f, 0.39f, 0.35f }, 1f, -1, 0f, 512, func_133(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_121[8], true)));
				TASK::TASK_PLAY_ANIM(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_58, iLocal_95);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
				SYSTEM::SETTIMERB(0);
				iLocal_69 = iLocal_69 + 1;
			}
			break;
	
		case 4:
		case 5:
			if (!PED::IS_PED_INJURED(pedLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_121[8], false))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_58, "random@domestic", "pickup_low", 3))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(pedLocal_58, iLocal_121[8], false);
				
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_58, "random@domestic", "pickup_low") > 0.388f)
						iLocal_69 = 7;
				}
				else if (SYSTEM::TIMERB() > 10000 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_121[8], true), 1.5f, 1.5f, 3f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_121[8]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
						TASK::TASK_PLAY_ANIM(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_58, iLocal_95);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
						iLocal_69 = 6;
					}
				}
			}
			break;
	
		case 6:
			if (!PED::IS_PED_INJURED(pedLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_121[8], false))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_58, "random@domestic", "pickup_low", 3))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(pedLocal_58, iLocal_121[8], false);
				
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_58, "random@domestic", "pickup_low") > 0.388f)
						iLocal_69 = iLocal_69 + 1;
				}
			}
			break;
	
		case 7:
			if (!PED::IS_PED_INJURED(pedLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_58, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_121[8], pedLocal_58, PED::GET_PED_BONE_INDEX(pedLocal_58, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, true, false, false, false, 2, true, 0);
					PED::SET_PED_AS_GROUP_MEMBER(pedLocal_58, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_58, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_58, 0);
					func_132();
					iLocal_49 = 4;
				}
			}
			break;
	}

	return;
}

void func_132() // Hash - 0xCDEEC49D ^0xCDEEC49D
{
	if (!func_47())
		if (func_54() == 2)
			Global_32402 = 1;

	return;
}

float func_133(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Hash - 0x34651BCB ^0x945B346B
{
	return MISC::GET_HEADING_FROM_VECTOR_2D(fParam3 - uParam0, fParam3.f_1 - uParam0.f_1);
}

BOOL func_134(char* sParam0) // Hash - 0xBFB3A048 ^0xC37F964
{
	var string2;

	if (func_155())
	{
		TEXT_LABEL_COPY(&string2, { func_60() }, 4);
	
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &string2))
			return true;
	}

	return false;
}

void func_135() // Hash - 0xCD575291 ^0xCCF776C7
{
	if (!bLocal_98)
	{
		if (!PED::IS_PED_INJURED(pedLocal_58))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_58, PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, false, true, 0))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_58);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 18000, 0, 2);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_58, iLocal_95);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_58, 15000, 0, 2);
				bLocal_98 = true;
			}
		}
	}

	if (!PED::IS_PED_INJURED(pedLocal_58))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_58, PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, false, true, 0))
		{
			if (!bLocal_138)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_58);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_58, iLocal_95);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
					bLocal_138 = true;
				}
				else
				{
					TASK::CLEAR_PED_TASKS(pedLocal_58);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_58, iLocal_95);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
					bLocal_138 = true;
				}
			}
		
			if (bLocal_138)
			{
				if (bLocal_54)
				{
					func_58();
					SYSTEM::WAIT(0);
				
					if (!PED::IS_PED_INJURED(pedLocal_58))
					{
						if (!func_155())
						{
							if (PED::IS_PED_FACING_PED(pedLocal_58, PLAYER::PLAYER_PED_ID(), 90f))
							{
								if (func_154(&uLocal_155, "REDO2AU", "REDO2_LFT2", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_49 = 7;
								}
							}
						}
					}
				}
				else if (!func_155())
				{
					if (func_154(&uLocal_155, "REDO2AU", "REDO2_LFT", 4, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_49 = 7;
					}
				}
			}
		}
	}

	return;
}

void func_136() // Hash - 0xD2330D0 ^0xB0F5D8B1
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_58))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_58, 15f, 15f, 15f, false, true, 0))
		{
			if (func_137())
			{
				func_46(0);
				bLocal_90 = false;
			}
		}
		else if (func_155() && !bLocal_90)
		{
			func_46(1);
			bLocal_90 = true;
		}
	}

	return;
}

BOOL func_137() // Hash - 0xB8E6BAC9 ^0xB8E6BAC9
{
	if (Global_22736 == 1)
		return true;

	return false;
}

void func_138() // Hash - 0xBC4B1DE ^0x753681F7
{
	switch (iLocal_68)
	{
		case 0:
			if (!PED::IS_PED_INJURED(pedLocal_58) && !PED::IS_PED_INJURED(pedLocal_57))
			{
				if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(pedLocal_57, true), 3f))
				{
					if (!func_155())
					{
						if (func_154(&uLocal_155, "REDO2AU", "REDO2_ARMA", 4, 0, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(pedLocal_58, "random@domestic", "balcony_fight_male", 2f, -2f, -1, 0, 0.3f, false, false, false);
							TASK::TASK_PLAY_ANIM(pedLocal_57, "random@domestic", "balcony_fight_female", 2f, -2f, -1, 0, 0.3f, false, false, false);
							iLocal_68 = iLocal_68 + 1;
						}
					}
				}
			}
			break;
	
		case 1:
			if (!PED::IS_PED_INJURED(pedLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_121[8], pedLocal_57, PED::GET_PED_BONE_INDEX(pedLocal_57, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
				iLocal_68 = iLocal_68 + 1;
			}
			break;
	
		case 2:
			if (!PED::IS_PED_INJURED(pedLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_57, "random@domestic", "balcony_fight_female") > 0.335f)
					{
						ENTITY::DETACH_ENTITY(iLocal_121[8], false, true);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_121[8], 1, 0f, 6f, 4f, 0f, 0f, 0f, 0, false, false, true, false, true);
						iLocal_68 = iLocal_68 + 1;
					}
				}
			}
			break;
	
		case 3:
			if (!bLocal_88 && ENTITY::DOES_ENTITY_EXIST(iLocal_121[8]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_121[8]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CLOTHES_THROWN", iLocal_121[8], "RE_DOMESTIC_SOUNDSET", false, 0);
					bLocal_88 = true;
				}
			}
		
			if (!func_155() || func_137())
			{
				func_154(&uLocal_155, "REDO2AU", "REDO2_ARFA", 4, 0, 0, 0);
				bLocal_88 = false;
				iLocal_68 = iLocal_68 + 1;
			}
			break;
	
		case 4:
			if (!PED::IS_PED_INJURED(pedLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_121[9]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_57, "random@domestic", "balcony_fight_female") > 0.473f)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_121[9], pedLocal_57, PED::GET_PED_BONE_INDEX(pedLocal_57, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
						iLocal_68 = iLocal_68 + 1;
					}
				}
			}
			break;
	
		case 5:
			if (!func_155() || func_137())
			{
				func_154(&uLocal_155, "REDO2AU", "REDO2_ARMB", 4, 0, 0, 0);
				iLocal_68 = iLocal_68 + 1;
			}
			break;
	
		case 6:
			if (!PED::IS_PED_INJURED(pedLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_121[9]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_57, "random@domestic", "balcony_fight_female") > 0.55f)
					{
						ENTITY::DETACH_ENTITY(iLocal_121[9], false, true);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_121[9], 1, 1f, 2f, 3f, 0f, 0f, 0f, 0, false, false, true, false, true);
						iLocal_68 = iLocal_68 + 1;
					}
				}
			}
			break;
	
		case 7:
			if (!bLocal_88 && ENTITY::DOES_ENTITY_EXIST(iLocal_121[9]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_121[9]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CLOTHES_THROWN", iLocal_121[9], "RE_DOMESTIC_SOUNDSET", false, 0);
					bLocal_88 = true;
				}
			}
		
			if (!func_155() || func_137())
			{
				func_154(&uLocal_155, "REDO2AU", "REDO2_ARFB", 4, 0, 0, 0);
				bLocal_88 = false;
				iLocal_68 = iLocal_68 + 1;
			}
			break;
	
		case 8:
			if (!PED::IS_PED_INJURED(pedLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_121[10]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_57, "random@domestic", "balcony_fight_female") > 0.705f)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_121[10], pedLocal_57, PED::GET_PED_BONE_INDEX(pedLocal_57, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
						iLocal_68 = iLocal_68 + 1;
					}
				}
			}
			break;
	
		case 9:
			if (!PED::IS_PED_INJURED(pedLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_121[10]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_57, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_57, "random@domestic", "balcony_fight_female") > 0.838f)
					{
						ENTITY::DETACH_ENTITY(iLocal_121[10], false, true);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_121[10], 1, 1f, 3f, 3f, 0f, 0f, 0f, 0, false, false, true, false, true);
						iLocal_68 = iLocal_68 + 1;
					}
				}
			}
			break;
	
		case 10:
			if (!bLocal_88 && ENTITY::DOES_ENTITY_EXIST(iLocal_121[10]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_121[10]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CLOTHES_THROWN", iLocal_121[10], "RE_DOMESTIC_SOUNDSET", false, 0);
					bLocal_88 = true;
				}
			}
		
			if (!func_155() || func_137())
			{
				func_154(&uLocal_155, "REDO2AU", "REDO2_ARMC", 4, 0, 0, 0);
				bLocal_88 = false;
				iLocal_68 = iLocal_68 + 1;
			}
			break;
	
		case 11:
			if (!PED::IS_PED_INJURED(pedLocal_57) && !PED::IS_PED_INJURED(pedLocal_58))
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_57, "random@domestic", "balcony_fight_female", 3))
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_57, "random@domestic", "balcony_fight_female") > 0.94f)
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_57, pedLocal_58, 0);
		
			if (!func_155() || func_137())
			{
				func_154(&uLocal_155, "REDO2AU", "REDO2_ARFC", 4, 0, 0, 0);
				iLocal_68 = 14;
			}
			break;
	
		case 14:
			if (!func_155())
			{
				if (func_154(&uLocal_155, "REDO2AU", "REDO2_ARFF", 4, 0, 0, 0))
				{
					func_139();
					iLocal_68 = iLocal_68 + 1;
				}
			}
			break;
	
		case 15:
			if (!func_155())
				if (func_154(&uLocal_155, "REDO2AU", "REDO2_ARMI", 4, 0, 0, 0))
					iLocal_68 = iLocal_68 + 1;
			break;
	
		case 16:
			if (!PED::IS_PED_INJURED(pedLocal_58))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, uLocal_109, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_58, iLocal_95);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
				iLocal_68 = iLocal_68 + 1;
			}
			break;
	
		case 17:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_57))
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_57, false))
					if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_57, uLocal_109, 1f, 1f, 5f, false, true, 0) && ENTITY::IS_ENTITY_OCCLUDED(pedLocal_57))
						PED::DELETE_PED(&pedLocal_57);
		
			if (iLocal_93 < MISC::GET_GAME_TIMER())
			{
				if (!func_155())
				{
					if (func_154(&uLocal_155, "REDO2AU", "REDO2_INS1", 4, 0, 0, 0))
					{
						iLocal_93 = MISC::GET_GAME_TIMER() + 5000;
						iLocal_94 = iLocal_94 + 1;
					}
				}
			}
		
			if (iLocal_94 > 0)
				iLocal_68 = iLocal_68 + 1;
			break;
	
		case 18:
			if (!PED::IS_PED_INJURED(pedLocal_58))
			{
				if (!func_155())
				{
					if (func_154(&uLocal_155, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
					{
						TASK::TASK_WANDER_STANDARD(pedLocal_58, 1193033728, 0);
						iLocal_68 = iLocal_68 + 1;
					}
				}
			}
			break;
	}

	if (!bLocal_54)
	{
		if (iLocal_68 > 2 && iLocal_68 < 8)
		{
			if (!PED::IS_PED_INJURED(pedLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_58, 6f, 4f, 5f, false, true, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_58, 12f, 12f, 5f, false, true, 2) && PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_58);
					func_139();
				
					if (iLocal_68 > 18)
					{
						iLocal_49 = 3;
					}
					else
					{
						func_58();
					
						while (func_155())
						{
							SYSTEM::WAIT(0);
						}
					
						if (func_154(&uLocal_155, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_54 = true;
							iLocal_49 = 3;
						}
					}
				}
			}
		}
		else if (iLocal_68 > 7)
		{
			if (!PED::IS_PED_INJURED(pedLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_58, 6f, 8f, 5f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_102[0]))
						HUD::SHOW_HEIGHT_ON_BLIP(uLocal_102[0], true);
				
					TASK::CLEAR_PED_TASKS(pedLocal_58);
					func_139();
				
					if (iLocal_68 > 18)
					{
						iLocal_49 = 3;
					}
					else
					{
						func_55();
					
						while (func_155())
						{
							SYSTEM::WAIT(0);
						}
					
						if (func_154(&uLocal_155, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_54 = true;
							iLocal_49 = 3;
						}
					}
				}
			}
		}
	}

	if (bLocal_56)
	{
		if (iLocal_55 < MISC::GET_GAME_TIMER())
		{
			func_58();
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_57))
				func_139();
		
			iLocal_49 = 3;
		}
	}

	return;
}

void func_139() // Hash - 0xB546F29A ^0xFB48CB1A
{
	int i;

	if (!PED::IS_PED_INJURED(pedLocal_57))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, uLocal_109, 1f, -1, 1193033728, 1056964608);
		TASK::TASK_PLAY_ANIM(0, "random@domestic", "f_attack_end", 2f, -2f, -1, 1, 0, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_57, iLocal_95);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
		PED::SET_PED_KEEP_TASK(pedLocal_57, true);
	
		for (i = 0; i < iLocal_121; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[i]))
				ENTITY::DETACH_ENTITY(iLocal_121[i], true, true);
		}
	}

	return;
}

int func_140(BOOL bParam0) // Hash - 0x3A78A0E1 ^0x861888B6
{
	if (func_143())
	{
		Global_113638 = true;
		Global_113635 = MISC::GET_GAME_TIMER();
	
		if (func_25(Global_113637))
			func_141(0);
	
		HUD::SET_MISSION_NAME(true, _("Random Event"));
	
		if (bParam0 && func_25(Global_113637))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_141(int iParam0) // Hash - 0x3B4E6AAB ^0x52844A7B
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_113(func_142(iParam0), -1);
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
					func_113(func_142(iParam0), -1);
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
					func_113(func_142(iParam0), -1);
					Global_113648.f_24997.f_4 = Global_113648.f_24997.f_4 + 1;
					MISC::SET_BIT(&Global_113644, 2);
				}
			}
			break;
	}

	return;
}

char* func_142(int iParam0) // Hash - 0x8B1302A6 ^0xFBB14D7B
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

BOOL func_143() // Hash - 0x8129EEA4 ^0x48B13301
{
	switch (func_144(&Global_32223, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_144(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Hash - 0x8F9349A ^0xC5C097C1
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98159.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_148(0))
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
		if (!func_146(iParam2))
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
			func_145(uParam0, iParam4);
	}

	return 2;
}

void func_145(var uParam0, int iParam1) // Hash - 0x6AC97785 ^0x6AC97785
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

BOOL func_146(int iParam0) // Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_147(iParam0, Global_43257);
}

BOOL func_147(int iParam0, int iParam1) // Hash - 0x1FD727E0 ^0x1FD727E0
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

BOOL func_148(int iParam0) // Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43257 == 15)
		return false;

	if (func_146(iParam0))
		return false;

	return true;
}

void func_149() // Hash - 0x5E4BB1BE ^0x2D9379D4
{
	if (HUD::DOES_BLIP_EXIST(blLocal_105))
		HUD::REMOVE_BLIP(&blLocal_105);

	if (!HUD::DOES_BLIP_EXIST(uLocal_102[0]))
	{
		uLocal_102[0] = func_123(pedLocal_58, false, 145);
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_102[0], false);
	}

	return;
}

void func_150() // Hash - 0xECA76C13 ^0xECA76C13
{
	func_4(39, true);
	func_4(40, true);
	func_4(41, true);
	func_4(42, true);
	func_4(43, true);
	func_4(44, true);
	MISC::CLEAR_AREA(uLocal_63, 2f, true, false, false, false);
	MISC::CLEAR_AREA(uLocal_60, 2f, true, false, false, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_63 - { 10f, 10f, 10f }, uLocal_63 + { 10f, 10f, 10f }, false, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, false, false, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_63 - { 10f, 10f, 10f }, uLocal_63 + { 10f, 10f, 10f }, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_112 - { 3f, 2f, 2f }, uLocal_112 + { 3f, 2f, 2f }, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA({ 53.1038f, 56.6649f, -1366.4806f } - { 1f, 1f, 1f }, { 53.1038f, 56.6649f, -1366.4806f } + { 1f, 1f, 1f }, false, true, true, true);
	PED::ADD_RELATIONSHIP_GROUP("rghDomestic", &hLocal_152);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_152, joaat("PLAYER"));
	pedLocal_57 = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_96, uLocal_60, fLocal_66, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_57, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_57, BF_AlwaysFlee, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_57, BF_0xB4A13A5A, false);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_57, 1, false);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_57, 2, false);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_57, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_57, 8, false);
	TASK::TASK_PLAY_ANIM(pedLocal_57, "random@domestic", "balcony_fight_idle_female", 8f, -4f, -1, 1, 0, false, false, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_57, hLocal_152);
	func_153(pedLocal_57, "GENERIC_WHATEVER", 24);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_96);
	PED::SET_PED_CONFIG_FLAG(pedLocal_57, 185, true);
	pedLocal_58 = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_97, uLocal_63, fLocal_67, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_58, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_58, 1, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_58, 2, false);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_58, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_58, 8, false);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_58, 65536, true);
	PED::SET_PED_CONFIG_FLAG(pedLocal_58, 185, true);
	PED::SET_PED_CONFIG_FLAG(pedLocal_58, 206, true);
	PED::SET_PED_HELMET(pedLocal_58, false);
	PED::SET_PED_CAN_BE_TARGETTED(pedLocal_58, false);
	TASK::TASK_PLAY_ANIM(pedLocal_58, "random@domestic", "balcony_fight_idle_male", 8f, -4f, -1, 1, 0, false, false, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_58, hLocal_152);
	func_153(pedLocal_58, "GENERIC_WHATEVER", 24);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_97);
	TASK::TASK_LOOK_AT_ENTITY(pedLocal_58, pedLocal_57, -1, 0, 2);
	TASK::TASK_LOOK_AT_ENTITY(pedLocal_57, pedLocal_58, -1, 0, 2);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_57, PV_COMP_HEAD, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_57, PV_COMP_HAIR, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_57, PV_COMP_UPPR, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_57, PV_COMP_LOWR, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_58, PV_COMP_HEAD, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_58, PV_COMP_HAIR, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_58, PV_COMP_UPPR, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_58, PV_COMP_LOWR, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_58, PV_COMP_ACCS, 0, 0, 0);
	func_152();
	MISC::SET_BIT(&uLocal_134, 5);

	if (func_54() == 0)
		func_151(&uLocal_155, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);

	if (func_54() == 1)
		func_151(&uLocal_155, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);

	if (func_54() == 2)
		func_151(&uLocal_155, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);

	func_151(&uLocal_155, 3, pedLocal_58, "REDOCastro", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_58, sLocal_153);
	func_151(&uLocal_155, 4, pedLocal_57, "NATHALIA", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_57, sLocal_154);
	SYSTEM::SETTIMERA(0);
	bLocal_150 = true;
	return;
}

void func_151(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Hash - 0x6C235EE0 ^0x9E57F206
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

void func_152() // Hash - 0xB6EE693F ^0xCDBCAAC9
{
	iLocal_121[0] = OBJECT::CREATE_OBJECT(joaat("PROP_LD_TSHIRT_02"), -470.3661f, 541.385f, 120.0205f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[0], -13.7262f, 0.5001f, -0.5886f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[0], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_LD_TSHIRT_02"));
	iLocal_121[1] = OBJECT::CREATE_OBJECT(joaat("PROP_LD_JEANS_02"), -470.8998f, 540.7595f, 120.169f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[1], -7.3906f, -12.8136f, -63.733f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[1], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_LD_JEANS_02"));
	iLocal_121[2] = OBJECT::CREATE_OBJECT(joaat("PROP_LD_SHOE_01"), -468.3266f, 540.7725f, 120.1762f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[2], -7.041683f, 10.172982f, 45.761696f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[2], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_LD_SHOE_01"));
	iLocal_121[3] = OBJECT::CREATE_OBJECT(joaat("PROP_LD_JEANS_01"), -468.7787f, 541.864f, 119.9098f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[3], -8.5884f, 12.6893f, 57.1792f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[3], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_LD_JEANS_01"));
	iLocal_121[4] = OBJECT::CREATE_OBJECT(joaat("PROP_LD_SHOE_02"), -470.9009f, 541.2538f, 120.0578f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[4], -16.4886f, 2.4979f, -3.8769f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[4], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_LD_SHOE_02"));
	iLocal_121[5] = OBJECT::CREATE_OBJECT(joaat("PROP_LD_SHIRT_01"), -472.0366f, 542.0591f, 119.8243f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[5], -3.5946f, -15.0978f, -75.5026f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[5], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_LD_SHIRT_01"));
	iLocal_121[6] = OBJECT::CREATE_OBJECT(joaat("PROP_PORN_MAG_03"), -472.75427f, 542.30225f, 119.76284f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[6], 6.402527f, -15.686654f, -104.13083f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[6], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_PORN_MAG_03"));
	iLocal_121[7] = OBJECT::CREATE_OBJECT(joaat("PROP_PORN_MAG_01"), -471.8675f, 543.6655f, 119.4991f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_121[7], -8.3642f, 1.9344f, 2.6889f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_121[7], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_PORN_MAG_01"));
	iLocal_121[8] = OBJECT::CREATE_OBJECT(joaat("PROP_GOLF_IRON_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
	iLocal_121[9] = OBJECT::CREATE_OBJECT(joaat("PROP_CS_RUB_BINBAG_01"), -473.195f, 537.2585f, 123.3303f, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_CS_RUB_BINBAG_01"));
	iLocal_121[10] = OBJECT::CREATE_OBJECT(joaat("PROP_GOLF_BAG_01"), -473.4f, 536.8035f, 123.2482f, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_GOLF_BAG_01"));
	return;
}

void func_153(Ped pedParam0, char* sParam1, int iParam2) // Hash - 0x48D349EA ^0xA208047E
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_50(iParam2), 1);
	return;
}

BOOL func_154(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x384540C1 ^0x384540C1
{
	func_79(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_65(sParam2, iParam3, false);
}

BOOL func_155() // Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_156() // Hash - 0xDE5FE683 ^0xF4344DAE
{
	if (!PED::IS_PED_INJURED(pedLocal_58) && !PED::IS_PED_INJURED(pedLocal_57))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::CAN_PED_SEE_HATED_PED(pedLocal_58, PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(pedLocal_57, PLAYER::PLAYER_PED_ID()))
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_58) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_58) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_57) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_57))
					if (iLocal_135 == -1)
						iLocal_135 = MISC::GET_GAME_TIMER();
				else
					iLocal_135 = -1;
		
			if (iLocal_135 != -1 && MISC::GET_GAME_TIMER() > iLocal_135 + 500 || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				func_163();
		}
	}

	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		func_163();

	if (iLocal_49 == 1)
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_58))
			if (func_162(pedLocal_58))
				func_161();

	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -471.1757f, 535.356f, 124.8557f, 3f, 2.5f, 1.5f, false, true, 0))
		func_160();

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_57))
		if (func_159(pedLocal_57))
			func_157();

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_58))
		if (func_159(pedLocal_58) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_58, PLAYER::PLAYER_PED_ID(), true))
			func_157();

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_57))
		if (func_159(pedLocal_57) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_57, PLAYER::PLAYER_PED_ID(), true))
			func_157();

	if (!PED::IS_PED_INJURED(pedLocal_58))
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_58, 250f, 250f, 250f, false, true, 0) || ENTITY::IS_ENTITY_IN_WATER(pedLocal_58))
			iLocal_49 = 11;

	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		func_157();

	return;
}

void func_157() // Hash - 0x817ADA38 ^0x7F27F8C
{
	func_55();
	SYSTEM::WAIT(0);

	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		func_154(&uLocal_155, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
	else
		func_154(&uLocal_155, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);

	if (!PED::IS_PED_INJURED(pedLocal_58))
	{
		TASK::CLEAR_PED_TASKS(pedLocal_58);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_58, iLocal_95);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
		PED::SET_PED_KEEP_TASK(pedLocal_58, true);
		SYSTEM::WAIT(3000);
	}

	func_158();
	SYSTEM::WAIT(0);
	func_51();
	iLocal_49 = 11;
	return;
}

void func_158() // Hash - 0x696A1896 ^0x1D9FE44E
{
	int i;

	if (!PED::IS_PED_INJURED(pedLocal_57))
	{
		TASK::TASK_COWER(pedLocal_57, -1);
		PED::SET_PED_KEEP_TASK(pedLocal_57, true);
	
		for (i = 0; i < iLocal_121; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[i]))
				ENTITY::DETACH_ENTITY(iLocal_121[i], true, true);
		}
	}

	return;
}

BOOL func_159(Ped pedParam0) // Hash - 0x39F20753 ^0x26029DF6
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), true))
				return true;

	return false;
}

void func_160() // Hash - 0xC56AF561 ^0x7EC2666F
{
	func_158();
	func_55();
	SYSTEM::WAIT(0);
	func_154(&uLocal_155, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);

	if (!PED::IS_PED_INJURED(pedLocal_58))
	{
		TASK::CLEAR_PED_TASKS(pedLocal_58);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_58, iLocal_95);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
		PED::SET_PED_KEEP_TASK(pedLocal_58, true);
		SYSTEM::WAIT(3000);
	}

	func_51();
	iLocal_49 = 11;
	return;
}

void func_161() // Hash - 0x9BF0EA96 ^0x122565AB
{
	if (!PED::IS_PED_INJURED(pedLocal_58))
	{
		TASK::CLEAR_PED_TASKS(pedLocal_58);
		TASK::TASK_SMART_FLEE_COORD(pedLocal_58, ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true), 150f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_58, true);
	}

	iLocal_49 = 11;
	return;
}

BOOL func_162(Ped pedParam0) // Hash - 0x4B450EA6 ^0x69051995
{
	if (!PED::IS_PED_INJURED(pedParam0))
		if (!PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0, 1.5f, 1.5f, 8f, false, true, 2))
			if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 4f)
				return true;

	return false;
}

void func_163() // Hash - 0xD6A42939 ^0xC2DCC298
{
	func_55();
	SYSTEM::WAIT(0);
	func_154(&uLocal_155, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);

	if (!PED::IS_PED_INJURED(pedLocal_58))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4096);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_58, iLocal_95);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
		PED::SET_PED_KEEP_TASK(pedLocal_58, true);
		SYSTEM::WAIT(3000);
	}

	func_51();
	iLocal_49 = 11;
	return;
}

void func_164() // Hash - 0xE3AE059F ^0xD6DAE4EB
{
	STREAMING::REQUEST_MODEL(hLocal_96);
	STREAMING::REQUEST_MODEL(hLocal_97);
	STREAMING::REQUEST_MODEL(joaat("PROP_GOLF_IRON_01"));
	STREAMING::REQUEST_MODEL(joaat("PROP_CS_RUB_BINBAG_01"));
	STREAMING::REQUEST_MODEL(joaat("PROP_GOLF_BAG_01"));
	STREAMING::REQUEST_MODEL(joaat("PROP_LD_TSHIRT_02"));
	STREAMING::REQUEST_MODEL(joaat("PROP_LD_JEANS_02"));
	STREAMING::REQUEST_MODEL(joaat("PROP_LD_SHOE_01"));
	STREAMING::REQUEST_MODEL(joaat("PROP_LD_JEANS_01"));
	STREAMING::REQUEST_MODEL(joaat("PROP_LD_SHOE_02"));
	STREAMING::REQUEST_MODEL(joaat("PROP_LD_SHIRT_01"));
	STREAMING::REQUEST_MODEL(joaat("PROP_PORN_MAG_03"));
	STREAMING::REQUEST_MODEL(joaat("PROP_PORN_MAG_01"));
	STREAMING::REQUEST_ANIM_DICT("random@domestic");
	STREAMING::REQUEST_ANIM_DICT("random@security_van");

	if (STREAMING::HAS_MODEL_LOADED(hLocal_96) && STREAMING::HAS_MODEL_LOADED(hLocal_97) && STREAMING::HAS_MODEL_LOADED(joaat("PROP_GOLF_IRON_01")) && STREAMING::HAS_MODEL_LOADED(joaat("PROP_CS_RUB_BINBAG_01")) && STREAMING::HAS_MODEL_LOADED(joaat("PROP_GOLF_BAG_01")) && STREAMING::HAS_MODEL_LOADED(joaat("PROP_LD_TSHIRT_02")) && STREAMING::HAS_MODEL_LOADED(joaat("PROP_LD_JEANS_02")) && STREAMING::HAS_MODEL_LOADED(joaat("PROP_LD_SHOE_01")) && STREAMING::HAS_MODEL_LOADED(joaat("PROP_LD_JEANS_01")) && STREAMING::HAS_MODEL_LOADED(joaat("PROP_LD_SHOE_02")) && STREAMING::HAS_MODEL_LOADED(joaat("PROP_LD_SHIRT_01")) && STREAMING::HAS_MODEL_LOADED(joaat("PROP_PORN_MAG_03")) && STREAMING::HAS_MODEL_LOADED(joaat("PROP_PORN_MAG_01")) && STREAMING::HAS_ANIM_DICT_LOADED("random@domestic") && STREAMING::HAS_ANIM_DICT_LOADED("random@security_van"))
	{
		bLocal_50 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(hLocal_96);
		STREAMING::REQUEST_MODEL(hLocal_97);
		STREAMING::REQUEST_MODEL(joaat("PROP_GOLF_IRON_01"));
		STREAMING::REQUEST_MODEL(joaat("PROP_CS_RUB_BINBAG_01"));
		STREAMING::REQUEST_MODEL(joaat("PROP_GOLF_BAG_01"));
		STREAMING::REQUEST_MODEL(joaat("PROP_LD_TSHIRT_02"));
		STREAMING::REQUEST_MODEL(joaat("PROP_LD_JEANS_02"));
		STREAMING::REQUEST_MODEL(joaat("PROP_LD_SHOE_01"));
		STREAMING::REQUEST_MODEL(joaat("PROP_LD_JEANS_01"));
		STREAMING::REQUEST_MODEL(joaat("PROP_LD_SHOE_02"));
		STREAMING::REQUEST_MODEL(joaat("PROP_LD_SHIRT_01"));
		STREAMING::REQUEST_MODEL(joaat("PROP_PORN_MAG_03"));
		STREAMING::REQUEST_MODEL(joaat("PROP_PORN_MAG_01"));
		STREAMING::REQUEST_ANIM_DICT("random@domestic");
		STREAMING::REQUEST_ANIM_DICT("random@security_van");
	}

	return;
}

void func_165() // Hash - 0x4D5F2429 ^0x2979BC78
{
	uLocal_106 = { -470.4934f, 540.0073f, 120.3715f };
	hLocal_96 = joaat("A_F_Y_BUSINESS_02");
	hLocal_97 = joaat("A_M_Y_GOLFER_01");
	sLocal_153 = "REDOCastro";
	sLocal_154 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
	uLocal_60 = { -472.6554f, 536.469f, 123.3555f };
	fLocal_66 = 348.9152f;
	uLocal_63 = { -470.1328f, 542.9949f, 119.6873f };
	fLocal_67 = 156.0666f;
	uLocal_109 = { -469.082f, 535.0479f, 123.3553f };
	uLocal_112 = { -1378.2733f, 40.2254f, 52.6774f };
	uLocal_115 = { -1368.1881f, 57.2309f, 52.7045f };
	bLocal_59 = true;
	return;
}

BOOL func_166() // Hash - 0xC05B0E62 ^0x94C54EFE
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_44) < 75f * 75f)
			return true;
	
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_177())
			return false;
	}

	if (func_173())
		return true;

	if (func_167(100f, true) != -1)
		return true;

	return false;
}

int func_167(float fParam0, BOOL bParam1) // Hash - 0xA169FFDC ^0x284941E0
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
		if (func_33(func_54()))
		{
			num4 = func_30();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_113648.f_18576[num /*6*/], 2) && !IS_BIT_SET(Global_113648.f_18576[num /*6*/], 3))
				{
					func_168(num, &unk);
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

void func_168(int iParam0, var uParam1) // Hash - 0xCF1528B4 ^0x44F65DE
{
	switch (iParam0)
	{
		case 0:
			func_169(uParam1, "Abigail1", func_171(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 1:
			func_169(uParam1, "Abigail2", func_171(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 2:
			func_169(uParam1, "Barry1", func_171(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 3:
			func_169(uParam1, "Barry2", func_171(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
	
		case 4:
			func_169(uParam1, "Barry3", func_171(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 5:
			func_169(uParam1, "Barry3A", func_171(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, _("Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry."), 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 6:
			func_169(uParam1, "Barry3C", func_171(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 7:
			func_169(uParam1, "Barry4", func_171(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_170(iParam0), 0, 0);
			break;
	
		case 8:
			func_169(uParam1, "Dreyfuss1", func_171(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, _("The killer's identity and location have been revealed."), 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 9:
			func_169(uParam1, "Epsilon1", func_171(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 10:
			func_169(uParam1, "Epsilon2", func_171(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 11:
			func_169(uParam1, "Epsilon3", func_171(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 12:
			func_169(uParam1, "Epsilon4", func_171(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 13:
			func_169(uParam1, "Epsilon5", func_171(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 14:
			func_169(uParam1, "Epsilon6", func_171(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 15:
			func_169(uParam1, "Epsilon7", func_171(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 16:
			func_169(uParam1, "Epsilon8", func_171(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 17:
			func_169(uParam1, "Extreme1", func_171(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 18:
			func_169(uParam1, "Extreme2", func_171(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 19:
			func_169(uParam1, "Extreme3", func_171(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 20:
			func_169(uParam1, "Extreme4", func_171(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 21:
			func_169(uParam1, "Fanatic1", func_171(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_170(iParam0), 1, 0);
			break;
	
		case 22:
			func_169(uParam1, "Fanatic2", func_171(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_170(iParam0), 1, 0);
			break;
	
		case 23:
			func_169(uParam1, "Fanatic3", func_171(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_170(iParam0), 0, 1);
			break;
	
		case 24:
			func_169(uParam1, "Hao1", func_171(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_170(iParam0), 0, 1);
			break;
	
		case 25:
			func_169(uParam1, "Hunting1", func_171(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 26:
			func_169(uParam1, "Hunting2", func_171(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 27:
			func_169(uParam1, "Josh1", func_171(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 28:
			func_169(uParam1, "Josh2", func_171(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
	
		case 29:
			func_169(uParam1, "Josh3", func_171(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
	
		case 30:
			func_169(uParam1, "Josh4", func_171(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 31:
			func_169(uParam1, "Maude1", func_171(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 32:
			func_169(uParam1, "Minute1", func_171(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 33:
			func_169(uParam1, "Minute2", func_171(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 34:
			func_169(uParam1, "Minute3", func_171(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 35:
			func_169(uParam1, "MrsPhilips1", func_171(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 36:
			func_169(uParam1, "MrsPhilips2", func_171(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 37:
			func_169(uParam1, "Nigel1", func_171(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 38:
			func_169(uParam1, "Nigel1A", func_171(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, _("Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill."), 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
	
		case 39:
			func_169(uParam1, "Nigel1B", func_171(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
			break;
	
		case 40:
			func_169(uParam1, "Nigel1C", func_171(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
			break;
	
		case 41:
			func_169(uParam1, "Nigel1D", func_171(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
			break;
	
		case 42:
			func_169(uParam1, "Nigel2", func_171(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
	
		case 43:
			func_169(uParam1, "Nigel3", func_171(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
	
		case 44:
			func_169(uParam1, "Omega1", func_171(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 45:
			func_169(uParam1, "Omega2", func_171(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 46:
			func_169(uParam1, "Paparazzo1", func_171(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 47:
			func_169(uParam1, "Paparazzo2", func_171(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 48:
			func_169(uParam1, "Paparazzo3", func_171(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 49:
			func_169(uParam1, "Paparazzo3A", func_171(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, _("Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly."), 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 50:
			func_169(uParam1, "Paparazzo3B", func_171(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 51:
			func_169(uParam1, "Paparazzo4", func_171(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 52:
			func_169(uParam1, "Rampage1", func_171(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 54:
			func_169(uParam1, "Rampage3", func_171(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 55:
			func_169(uParam1, "Rampage4", func_171(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 56:
			func_169(uParam1, "Rampage5", func_171(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 53:
			func_169(uParam1, "Rampage2", func_171(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 57:
			func_169(uParam1, "TheLastOne", func_171(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 58:
			func_169(uParam1, "Tonya1", func_171(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, _("Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~"), -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 59:
			func_169(uParam1, "Tonya2", func_171(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 60:
			func_169(uParam1, "Tonya3", func_171(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 61:
			func_169(uParam1, "Tonya4", func_171(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 62:
			func_169(uParam1, "Tonya5", func_171(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_169(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Hash - 0x340E6E87 ^0xA591C803
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

int func_170(int iParam0) // Hash - 0xC999F6B2 ^0xC999F6B2
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

struct<2> func_171(int iParam0) // Hash - 0x49BA4072 ^0x532E0C0D
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_172(iParam0) };

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

struct<2> func_172(int iParam0) // Hash - 0x37A0347F ^0xAB27FAE9
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

BOOL func_173() // Hash - 0x7055FFB1 ^0x7055FFB1
{
	if (func_176() && !func_177())
		return true;

	if (func_175() && func_174())
		return true;

	return false;
}

BOOL func_174() // Hash - 0x79CF7679 ^0x79CF7679
{
	return Global_113366 > 0;
}

BOOL func_175() // Hash - 0xCF2296C0 ^0xCF2296C0
{
	if (Global_97603 != -1)
		return true;

	return false;
}

BOOL func_176() // Hash - 0x98CCC132 ^0x97B0D6ED
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);

	return false;
}

BOOL func_177() // Hash - 0x29CB2928 ^0xE369A18D
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_178() // Hash - 0xF2B7F534 ^0x7F3EC4F9
{
	if (!func_146(5))
		return true;

	if (func_173())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_177())
			return false;

	if (func_167(100f, true) != -1)
		return true;

	return false;
}

BOOL func_179() // Hash - 0x1121F6F2 ^0x90CE37A6
{
	if (Global_113637 == func_40() && MISC::GET_RANDOM_EVENT_FLAG() && Global_113638)
		return true;

	return false;
}

void func_180(int iParam0) // Hash - 0xA62BD46A ^0x1E050688
{
	if (iParam0 == -1)
		iParam0 = func_40();

	if (iParam0 == -1)
		return;

	func_182(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113634 = 0;
	func_181();
	return;
}

void func_181() // Hash - 0x178BF2A7 ^0x744062F5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_182(int iParam0) // Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113637 = iParam0;
	return;
}

BOOL func_183(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Hash - 0xC601B4EA ^0xC601B4EA
{
	BOOL flag;
	Vector3 entityCoords;
	int i;
	Vector3 vector;
	int num;

	if (!Global_152234)
		return false;

	if (iParam3 == -1)
		iParam3 = func_40();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!func_224())
			return false;

	uLocal_44 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_177())
				return false;
		}
	
		if (!Global_113648.f_9087)
			return false;
	
		if (func_17(false))
			return false;
	
		if (func_173())
			return false;
	
		if (func_223())
			return false;
	
		if (Global_113637 != -1)
			return false;
	
		if (func_33(func_54()))
			if (func_167(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_44.f_2 > 50f)
				return false;
	
		if (!func_222(iParam3))
			return false;
	
		if (func_33(func_54()))
			if (func_221(func_54()) == 4 || func_221(func_54()) == 5)
				return false;
	
		if (func_33(func_54()))
			if (!func_220(iParam3, iParam4, 145))
				return false;
	
		if (!func_219(Global_113648.f_24997.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_113639 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_218())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_209(4))
			return false;
	
		if (!func_146(5))
			return false;
	
		if (func_208(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_3 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_208(0, 0))
			return false;
	
		if (Global_32310)
			return false;
	
		if (func_222(30) && !func_208(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_33(func_54()))
		{
			for (i = 0; i < 3; i = i + 1)
			{
				vector = { Global_113648.f_2365.f_539.f_2300[i /*3*/] };
				num = Global_113648.f_2365.f_539.f_2296[i];
			
				if (func_207(num))
					if (func_185(i))
						if (!func_184(vector, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (func_54() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_184(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_185(int iParam0) // Hash - 0x687D9246 ^0x687D9246
{
	int num;

	num = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_186(num);
}

BOOL func_186(int iParam0) // Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_187(iParam0, 1);
}

int func_187(int iParam0, int iParam1) // Hash - 0x1F92FEBC ^0x1F92FEBC
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_207(iParam0))
		return 0;

	func_188(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_188(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Hash - 0x2BEE335D ^0x2BEE335D
{
	func_189(func_200(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_189(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Hash - 0xB807819C ^0xB807819C
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_199(iParam0, iParam1))
	{
		num = func_198(iParam1);
		num2 = func_196(iParam0);
		num3 = func_196(iParam0) - func_196(iParam1);
		num4 = func_198(iParam0) - func_198(iParam1);
		num5 = func_195(iParam0) - func_195(iParam1);
		num6 = func_194(iParam0) - func_194(iParam1);
		num7 = func_193(iParam0) - func_193(iParam1);
		num8 = func_192(iParam0) - func_192(iParam1);
	}
	else
	{
		num = func_198(iParam0);
		num2 = func_196(iParam1);
		num3 = func_196(iParam1) - func_196(iParam0);
		num4 = func_198(iParam1) - func_198(iParam0);
		num5 = func_195(iParam1) - func_195(iParam0);
		num6 = func_194(iParam1) - func_194(iParam0);
		num7 = func_193(iParam1) - func_193(iParam0);
		num8 = func_192(iParam1) - func_192(iParam0);
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
	
		num5 = num5 + func_191(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_190(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
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

float func_190(float fParam0, float fParam1, float fParam2) // Hash - 0xDB08F514 ^0x78C0BF6F
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

int func_191(int iParam0, int iParam1) // Hash - 0xD3EBACB3 ^0xD3EBACB3
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

int func_192(int iParam0) // Hash - 0x90B520AB ^0x257AC1C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_193(int iParam0) // Hash - 0xC188C91C ^0x48884C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_194(int iParam0) // Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_195(int iParam0) // Hash - 0x826C592F ^0xDEC5AA46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_196(int iParam0) // Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_197(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_198(int iParam0) // Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

BOOL func_199(int iParam0, int iParam1) // Hash - 0xEA08B1 ^0xEA08B1
{
	int num;
	int num2;

	if (!func_207(iParam1) || !func_207(iParam0))
		return 1;

	num = func_196(iParam0);
	num2 = func_196(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_198(iParam0);
	num2 = func_198(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_195(iParam0);
	num2 = func_195(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_194(iParam0);
	num2 = func_194(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_193(iParam0);
	num2 = func_193(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_192(iParam0);
	num2 = func_192(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_200() // Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_206(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_205(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_204(&unk, CLOCK::GET_CLOCK_HOURS());
	func_203(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_202(&unk, CLOCK::GET_CLOCK_MONTH());
	func_201(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_201(var uParam0, int iParam1) // Hash - 0x15B9927E ^0x4A4674
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

void func_202(var uParam0, int iParam1) // Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_203(var uParam0, int iParam1) // Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_198(*uParam0);
	num2 = func_196(*uParam0);

	if (iParam1 < 1 || iParam1 > func_191(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_204(var uParam0, int iParam1) // Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_205(var uParam0, int iParam1) // Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_206(var uParam0, int iParam1) // Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_207(int iParam0) // Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_192(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_193(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_194(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_196(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_198(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_195(iParam0);

	if (num6 < 1 || num6 > func_191(num5, num4))
		return false;

	return true;
}

BOOL func_208(int iParam0, int iParam1) // Hash - 0x577FB514 ^0xAAF8B538
{
	if (IS_BIT_SET(Global_113648.f_24997.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_209(int iParam0) // Hash - 0x97844555 ^0xADCD6DAA
{
	int num;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				num = func_54();
			
				if (!func_33(num))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_217() || Global_112695 || Global_32166 || func_216() || func_77(8, -1) || func_215() || func_214() || func_213() || func_212() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_217() || Global_32166 || func_216() || func_77(8, -1) || func_213() || func_215() || func_214() || func_212() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_217() || Global_112695 || Global_32166 || func_216() || func_77(8, -1) || func_213() || func_215() || func_214() || func_212() || Global_113648.f_7690.f_919[num] == 5 || Global_43804 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_217() || Global_112695 || Global_32166 || func_216() || func_77(8, -1) || func_215() || func_214() || func_212() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 4:
						if (func_217() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_77(8, -1) || func_212() || func_211() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 5:
						if (func_77(8, -1) || func_215() || func_214() || func_211() || func_210())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_217() || Global_32166 || func_216() || func_77(8, -1) || func_214() || func_213() || func_212() || Global_113648.f_7690.f_919[num] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_217() || func_214() || Global_112695 || Global_32166 || func_216() || Global_44446 || func_77(8, -1) || func_213() || func_211() || func_212() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_217() || Global_112695 || Global_32166 || func_216() || func_77(8, -1) || func_213() || func_211() || func_215() || func_214() || func_212())
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

BOOL func_210() // Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_100720.f_1;
}

BOOL func_211() // Hash - 0xC20DBA70 ^0xAC4006FB
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);

	return false;
}

BOOL func_212() // Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
		return true;

	return false;
}

BOOL func_213() // Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_214() // Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_388 > 0;
}

BOOL func_215() // Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_387 > 0;
}

BOOL func_216() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575060;
}

BOOL func_217() // Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_218() // Hash - 0xB12DEAA2 ^0xB12DEAA2
{
	func_75();

	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_219(int iParam0) // Hash - 0xCDB90269 ^0xCDB90269
{
	return func_199(func_200(), iParam0);
}

BOOL func_220(int iParam0, int iParam1, int iParam2) // Hash - 0xBEEFD79C ^0xBEEFD79C
{
	BOOL num;
	int num2;

	num = 0;
	num2 = func_54();

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

int func_221(int iParam0) // Hash - 0x45FC9D61 ^0x45FC9D61
{
	if (!func_33(iParam0))
		return 7;

	return Global_113648.f_7690.f_919[iParam0];
}

BOOL func_222(int iParam0) // Hash - 0xF2A54181 ^0xF2A54181
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!func_224())
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

BOOL func_223() // Hash - 0xB72C022E ^0x452A7B6D
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

BOOL func_224() // Hash - 0x44DD83CC ^0x7B62A376
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

BOOL func_225(int iParam0, int iParam1) // Hash - 0xEAB85351 ^0xA700209D
{
	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		iParam1 == 1;
		return true;
	}

	return false;
}

void func_226() // Hash - 0x38465316 ^0x427A93A8
{
	int i;

	if (bLocal_150 && !bLocal_149)
	{
		func_3(false);
	
		if (Global_32406)
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
	
		func_2();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_63 - { 10f, 10f, 10f }, uLocal_63 + { 10f, 10f, 10f }, true, true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, hLocal_152, joaat("PLAYER"));
	
		if (bLocal_59)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_96);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_97);
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_57))
		{
			if (!PED::IS_PED_INJURED(pedLocal_57))
			{
				PED::SET_PED_CONFIG_FLAG(pedLocal_57, 317, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_57, false);
			}
		
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_57);
		}
	
		if (HUD::DOES_BLIP_EXIST(blLocal_105))
			HUD::REMOVE_BLIP(&blLocal_105);
	
		if (HUD::DOES_BLIP_EXIST(uLocal_102[0]))
			HUD::REMOVE_BLIP(&uLocal_102[0]);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_58))
		{
			if (!PED::IS_PED_INJURED(pedLocal_58))
			{
				PED::SET_PED_CONFIG_FLAG(pedLocal_58, 317, true);
			
				if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_58, false))
					PED::RESET_PED_LAST_VEHICLE(pedLocal_58);
			
				PED::REMOVE_PED_FROM_GROUP(pedLocal_58);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_58, false);
				PED::SET_PED_CAN_BE_TARGETTED(pedLocal_58, true);
			}
		}
	
		for (i = 0; i < iLocal_121; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_121[i]))
				ENTITY::DETACH_ENTITY(iLocal_121[i], true, true);
		}
	
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}

	func_227(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_227(int iParam0) // Hash - 0xE6B11918 ^0x37AF2AD2
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_40();

	if (iParam0 == -1)
		return;

	if (func_179())
	{
		func_231(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113639 = MISC::GET_GAME_TIMER();
		func_230(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_229(Global_113637, true), 64);
	
		if (func_39(Global_113637) > 0)
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

	func_228(&Global_32223);
	Global_113638 = false;
	func_182(-1);
	return;
}

void func_228(var uParam0) // Hash - 0x995C9E2 ^0x995C9E2
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

char* func_229(int iParam0, BOOL bParam1) // Hash - 0x959319CB ^0xE34B4BC5
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

void func_230(int iParam0) // Hash - 0xC0234809 ^0x4FD853DC
{
	Global_43808 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_231(int iParam0) // Hash - 0x881273A8 ^0x881273A8
{
	func_232(iParam0, 0, func_237(iParam0));
	return;
}

void func_232(int iParam0, int iParam1, int iParam2) // Hash - 0xA7DBC311 ^0xA7DBC311
{
	int unk;
	var unk2;

	unk = func_200();
	func_235(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_234(iParam0, &unk);
	unk2 = { func_233(&unk) };
	return;
}

struct<16> func_233(var uParam0) // Hash - 0xB55EE866 ^0x5BB1B3F6
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_194(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_193(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_192(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_195(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_198(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_196(*uParam0), 64);
	return unk;
}

void func_234(int iParam0, var uParam1) // Hash - 0x63EF72B0 ^0xC612AA53
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
	return;
}

void func_235(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_196(*uParam0);
	i = func_198(*uParam0);
	num2 = func_195(*uParam0);
	j = func_194(*uParam0);
	k = func_193(*uParam0);
	l = func_192(*uParam0);

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

	for (m = func_191(i, num); num2 > m; m = func_191(i, num))
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
	func_236(uParam0, l, k, j, num2, i, num);
	return;
}

void func_236(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x733BFBA2 ^0x733BFBA2
{
	func_206(uParam0, iParam1);
	func_205(uParam0, iParam2);
	func_204(uParam0, iParam3);
	func_202(uParam0, iParam5);
	func_203(uParam0, iParam4);
	func_201(uParam0, iParam6);
	return;
}

int func_237(int iParam0) // Hash - 0x4219564C ^0x4219564C
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

