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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	BOOL bLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	BOOL bLocal_60 = 0;
	BOOL bLocal_61 = 0;
	BOOL bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	float fLocal_71 = 0f;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	float fLocal_75 = 0f;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 2;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	Vehicle veLocal_94 = 0;
	Vehicle veLocal_95 = 0;
	Hash hLocal_96 = 0;
	Hash hLocal_97 = 0;
	Hash hLocal_98 = 0;
	int iLocal_99 = 0;
	Hash hLocal_100 = 0;
	BOOL bLocal_101 = 0;
	Blip blLocal_102 = 0;
	Blip blLocal_103 = 0;
	BOOL bLocal_104 = 0;
	BOOL bLocal_105 = 0;
	BOOL bLocal_106 = 0;
	BOOL bLocal_107 = 0;
	BOOL bLocal_108 = 0;
	BOOL bLocal_109 = 0;
	BOOL bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	char* sLocal_113 = 0;
	char* sLocal_114 = 0;
	BOOL bLocal_115 = 0;
	BOOL bLocal_116 = 0;
	BOOL bLocal_117 = 0;
	BOOL bLocal_118 = 0;
	BOOL bLocal_119 = 0;
	BOOL bLocal_120 = 0;
	BOOL bLocal_121 = 0;
	BOOL bLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	Cam caLocal_127 = 0;
	Cam caLocal_128 = 0;
	Cam caLocal_129 = 0;
	BOOL bLocal_130 = 0;
	BOOL bLocal_131 = 0;
	BOOL bLocal_132 = 0;
	BOOL bLocal_133 = 0;
	BOOL bLocal_134 = 0;
	BOOL bLocal_135 = 0;
	BOOL bLocal_136 = 0;
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
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	Blip blLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 2;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	Blip blLocal_158 = 0;
	int iLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	BOOL bLocal_168 = 0;
	BOOL bLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	BOOL bLocal_172 = 0;
	var uLocal_173 = 16;
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
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	int iLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	var uScriptParam_348 = 0;
	var uScriptParam_349 = 5;
	var uScriptParam_350 = 0;
	var uScriptParam_351 = 0;
	var uScriptParam_352 = 0;
	var uScriptParam_353 = 0;
	var uScriptParam_354 = 0;
	var uScriptParam_355 = 0;
	var uScriptParam_356 = 0;
	var uScriptParam_357 = 0;
	var uScriptParam_358 = 0;
	var uScriptParam_359 = 0;
	var uScriptParam_360 = 0;
	var uScriptParam_361 = 0;
	var uScriptParam_362 = 0;
	var uScriptParam_363 = 0;
	var uScriptParam_364 = 0;
	var uScriptParam_365 = 5;
	var uScriptParam_366 = 0;
	var uScriptParam_367 = 0;
	var uScriptParam_368 = 0;
	var uScriptParam_369 = 0;
	var uScriptParam_370 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
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
	iLocal_51 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_52 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_87 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_124 = -1;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_137, "", 24);
	iLocal_165 = -1;
	uLocal_339 = { -1017.3451f, -1354.1962f, 4.4568f };
	uLocal_342 = { 2003.4564f, 3071.1018f, 46.0499f };
	uLocal_57 = { uScriptParam_348.f_1[0 /*3*/] };
	func_280();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		func_240();

	if (func_198(uLocal_57, 27, iLocal_345, false, false))
		func_195(-1);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	iLocal_159 = MISC::GET_GAME_TIMER();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_62)
		{
			if (!func_194())
				if (func_193())
					func_240();
		
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_DD", 0);
		
			switch (iLocal_53)
			{
				case 0:
					if (bLocal_56)
					{
						bLocal_172 = true;
						iLocal_53 = 1;
					}
					else
					{
						if (func_181())
							func_240();
					
						if (!bLocal_60)
							func_180();
					
						if (bLocal_60)
							func_179();
					}
					break;
			
				case 1:
					func_172();
				
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_171();
						func_168();
					
						if (iLocal_54 == 1 && !ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
						{
							func_76();
						
							if (func_74() || ENTITY::IS_ENTITY_DEAD(veLocal_94, false))
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_91[0], false))
									{
										if (PED::IS_PED_IN_GROUP(uLocal_91[0]))
											PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
									
										TASK::CLEAR_PED_TASKS(uLocal_91[0]);
										TASK::TASK_SMART_FLEE_PED(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
										func_70(uLocal_91[0], 120000, false);
										PED::SET_PED_KEEP_TASK(uLocal_91[0], true);
										func_68();
										SYSTEM::WAIT(0);
										func_67(&uLocal_173, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								}
							
								func_66();
							}
						}
					
						if (iLocal_54 == 2 || iLocal_54 == 1 && ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
						{
							func_76();
						
							if (iLocal_55 != 9)
							{
								if (func_74() || ENTITY::IS_ENTITY_DEAD(veLocal_94, false))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
									{
										if (!PED::IS_PED_INJURED(uLocal_91[0]))
										{
											if (PED::IS_PED_IN_GROUP(uLocal_91[0]))
												PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
										
											TASK::CLEAR_PED_TASKS(uLocal_91[0]);
											TASK::TASK_SMART_FLEE_PED(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
											func_70(uLocal_91[0], 120000, false);
											PED::SET_PED_KEEP_TASK(uLocal_91[0], true);
										}
									}
								
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
									{
										if (!PED::IS_PED_INJURED(uLocal_91[1]))
										{
											if (PED::IS_PED_IN_GROUP(uLocal_91[1]))
												PED::REMOVE_PED_FROM_GROUP(uLocal_91[1]);
										
											TASK::CLEAR_PED_TASKS(uLocal_91[1]);
											TASK::TASK_SMART_FLEE_PED(uLocal_91[1], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
											func_70(uLocal_91[1], 120000, false);
											PED::SET_PED_KEEP_TASK(uLocal_91[1], true);
										}
									}
								
									if (iLocal_54 == 1)
									{
										func_68();
										SYSTEM::WAIT(0);
										func_67(&uLocal_173, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								
									if (iLocal_54 == 2)
									{
										func_68();
										SYSTEM::WAIT(0);
										func_67(&uLocal_173, "REDR2AU", "REDR2_AT", 4, 0, 0, 0);
									}
								
									func_66();
								}
							}
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
							if (!PED::IS_PED_INJURED(uLocal_91[0]))
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_91[0], 1f);
					
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
							if (!PED::IS_PED_INJURED(uLocal_91[1]))
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_91[1], 1f);
					}
				
					if (func_65() && !func_64() && iLocal_55 != 9)
					{
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(uLocal_91[0], uLocal_87, 5f, 5f, 5f, false, true, 0))
							{
								if (iLocal_54 == 2)
								{
									if (!PED::IS_PED_INJURED(uLocal_91[1]))
									{
										if (!PED::IS_PED_IN_GROUP(uLocal_91[0]) && !PED::IS_PED_IN_GROUP(uLocal_91[1]))
										{
											PED::SET_PED_AS_GROUP_MEMBER(uLocal_91[0], func_63());
											PED::SET_PED_AS_GROUP_MEMBER(uLocal_91[1], func_63());
										}
									}
								}
							
								func_62(0);
								SYSTEM::WAIT(0);
								func_68();
								iLocal_55 = 9;
							}
						}
					}
				
					if (func_61())
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
							PED::DELETE_PED(&uLocal_91[0]);
					
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
							PED::DELETE_PED(&uLocal_91[1]);
					
						func_36();
					}
				
					if (func_35() || func_34() || func_3())
						func_66();
					break;
			}
		}
		else
		{
			func_240();
		}
	
		func_1();
	}

	return;
}

void func_1() // Position - 0x4DA Hash - 0xFE9CE4C9 ^0x5FBA76F7
{
	if (iLocal_54 == 1 && iLocal_55 == 7 && iLocal_64 == 5 && bLocal_110)
	{
		iLocal_159 = MISC::GET_GAME_TIMER();
	
		if (func_2())
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				uLocal_160 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) };
	}

	return;
}

BOOL func_2() // Position - 0x532 Hash - 0x48772B82 ^0x7E5DE56B
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (iLocal_54 == 1)
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
						if (PED::IS_PED_IN_VEHICLE(uLocal_91[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							return true;
		
			if (iLocal_54 == 2)
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
					if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
						if (PED::IS_PED_IN_VEHICLE(uLocal_91[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && PED::IS_PED_IN_VEHICLE(uLocal_91[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							return true;
		}
	}

	return false;
}

BOOL func_3() // Position - 0x5FF Hash - 0xB56735F5 ^0xDCE4E936
{
	if (iLocal_54 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_94, false))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_94, 200f, 200f, 200f, false, true, 0))
				return true;
		
			if (!func_33("REDR2_DC") && !func_33("REDR2_AKA") && !func_33("REDR2_OFFR") && !func_33("REDR2_CULT"))
				func_5(true);
		
			if (!func_33("REDR2_DC") && !func_33("REDR2_AKA") && !func_33("REDR2_AKB") && !func_33("REDR2_TRY") && !func_33("REDR2_JIC") && !func_33("REDR2_CH") && !func_33("REDR2_WH2") && !func_33("REDR2_BCK") && !func_33("REDR2_JIA") && !func_33("REDR2_JIB") && !func_33("REDR2_JIC") && !func_33("REDR2_WHA") && !func_33("REDR2_WHB") && !func_33("REDR2_WHC") && !func_33("REDR2_PSM") && !func_33("REDR2_PSF") && !func_33("REDR2_PST") && !func_33("REDR2_TK"))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(veLocal_94) && ENTITY::GET_ENTITY_HEALTH(veLocal_94) < iLocal_80)
				{
					iLocal_80 = ENTITY::GET_ENTITY_HEALTH(veLocal_94);
					func_5(false);
					func_68();
					SYSTEM::WAIT(0);
					func_67(&uLocal_173, "REDR2AU", "REDR2_DC", 4, 0, 0, 0);
				}
			}
		
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false) || VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(veLocal_94))
			{
				func_68();
				SYSTEM::WAIT(0);
			
				if (!func_4())
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_LC", 4, 0, 0, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
						{
							TASK::TASK_WANDER_STANDARD(uLocal_91[0], 1193033728, 0);
							PED::SET_PED_KEEP_TASK(uLocal_91[0], true);
						}
					
						if (!PED::IS_PED_INJURED(uLocal_91[1]))
						{
							TASK::TASK_GO_TO_ENTITY(uLocal_91[1], uLocal_91[0], -1, 0f, 1f, 1073741824, 0);
							PED::SET_PED_KEEP_TASK(uLocal_91[1], true);
						}
					
						return true;
					}
				}
			}
		
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(veLocal_94, 0, 2) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_94, PLAYER::PLAYER_PED_ID(), false))
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_91[0]);
					TASK::TASK_SMART_FLEE_PED(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				}
			
				if (!PED::IS_PED_INJURED(uLocal_91[1]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_91[1]);
					TASK::TASK_SMART_FLEE_PED(uLocal_91[1], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				}
			
				return true;
			}
		}
		else
		{
			return true;
		}
	}

	return false;
}

BOOL func_4() // Position - 0x8A9 Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_5(BOOL bParam0) // Position - 0x8CB Hash - 0xED7B76B4 ^0xEA0016C7
{
	if (bParam0)
	{
		if (bLocal_136)
			if (func_10(&uLocal_173, "REDR2AU", &uLocal_143, &uLocal_137, 8, 0, 0))
				bLocal_136 = false;
	}
	else if (!bLocal_136 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !func_33("REDR1_SWV"))
	{
		uLocal_143 = { func_9() };
		uLocal_137 = { func_8() };
		func_6();
		bLocal_136 = true;
	}

	return;
}

void func_6() // Position - 0x92A Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_7();
	return;
}

void func_7() // Position - 0x93A Hash - 0x21027D29 ^0xBEB9ECFD
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

struct<6> func_8() // Position - 0x95E Hash - 0xFF267AB8 ^0xED44CCFB
{
	var unk;
	int unk2;

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

struct<6> func_9() // Position - 0x9A4 Hash - 0xB37EF8EF ^0xB37EF8EF
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_21725 == 4)
		return Global_21344;

	return unk;
}

BOOL func_10(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x9C8 Hash - 0xF7B25BD8 ^0xF7B25BD8
{
	func_32(uParam0, 145, sParam1, iParam5, iParam6, 0);

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
	return func_11(sParam2, iParam4, false);
}

BOOL func_11(char* sParam0, int iParam1, BOOL bParam2) // Position - 0xA1C Hash - 0x77297D51 ^0x40DC584A
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
					func_31();
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
	
		if (func_30(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_29();
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
				func_21();
			
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
			
				if (func_20())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), -72657034))
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
		
			if (func_19())
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
		
			func_18();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_17();
		func_12();
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
		func_31();
	}

	return 0;
}

void func_12() // Position - 0xCEA Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_13())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_13() // Position - 0xD21 Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (PLAYER::PLAYER_ID() == func_16())
		return false;

	if (func_14(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_14(Player plParam0) // Position - 0xD84 Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_15(plParam0, 20);
}

BOOL func_15(Player plParam0, int iParam1) // Position - 0xD94 Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

Player func_16() // Position - 0xDAC Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_17() // Position - 0xDB5 Hash - 0xE1F0C158 ^0xB5D2F635
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

void func_18() // Position - 0xDE5 Hash - 0xCD8A4D28 ^0xCD8A4D28
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

BOOL func_19() // Position - 0xE7A Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

BOOL func_20() // Position - 0xEA1 Hash - 0x9A999369 ^0x4033F7BF
{
	int num;
	int weaponHash;

	if (Global_78558)
	{
		num = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (weaponHash == 100416529 || weaponHash == 205991906 || weaponHash == 856002082)
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

void func_21() // Position - 0xF3A Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_28(14))
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
		Global_20383 = func_22();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

int func_22() // Position - 0xFDC Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_23();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_23() // Position - 0xFF5 Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_26(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_25(PLAYER::PLAYER_PED_ID());
		
			if (func_24(num) && !func_28(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_24(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_24(int iParam0) // Position - 0x10F2 Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_25(Ped pedParam0) // Position - 0x10FE Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_26(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_26(int iParam0) // Position - 0x113B Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_24(iParam0))
		return func_27(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_27(int iParam0) // Position - 0x1160 Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

BOOL func_28(int iParam0) // Position - 0x116F Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

void func_29() // Position - 0x117D Hash - 0x719867DD ^0xB196B20A
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

BOOL func_30(int iParam0, int iParam1) // Position - 0x11D3 Hash - 0xA14C4D3F ^0xA6034F77
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

void func_31() // Position - 0x120B Hash - 0xE32CF1EF ^0xB9A7BEB2
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1262 Hash - 0xC6B752B2 ^0xC6B752B2
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

BOOL func_33(char* sParam0) // Position - 0x12B8 Hash - 0xBFB3A048 ^0xC37F964
{
	var string2;

	if (func_4())
	{
		TEXT_LABEL_COPY(&string2, { func_9() }, 4);
	
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &string2))
			return true;
	}

	return false;
}

int func_34() // Position - 0x12E0 Hash - 0x871E3C0E ^0xEBA29EAD
{
	if (iLocal_54 == 1)
		if (PED::IS_PED_INJURED(uLocal_91[0]))
			return 1;

	if (iLocal_54 == 2)
		if (PED::IS_PED_INJURED(uLocal_91[0]) && PED::IS_PED_INJURED(uLocal_91[1]))
			return 1;

	return 0;
}

int func_35() // Position - 0x1323 Hash - 0x3D428DD1 ^0xDCD199D7
{
	if (iLocal_54 == 1)
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
			return 1;

	if (iLocal_54 == 2)
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
			return 1;

	return 0;
}

void func_36() // Position - 0x1369 Hash - 0x41668835 ^0xE0DCBD5
{
	while (!func_60())
	{
		SYSTEM::WAIT(0);
	}

	func_40(27, iLocal_345);
	func_37();
	func_240();
	return;
}

void func_37() // Position - 0x1392 Hash - 0xD765C186 ^0xD765C186
{
	func_38();
	return;
}

int func_38() // Position - 0x139F Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_39(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL func_39(BOOL bParam0) // Position - 0x13EA Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_40(int iParam0, int iParam1) // Position - 0x1412 Hash - 0x207C13D1 ^0x87B0B4CC
{
	if (iParam0 == -1)
		iParam0 = func_58();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_57(iParam0))
	{
		func_56(iParam0, iParam1);
	
		if (!func_55(51))
		{
			func_51(_("Some Random Events will reward the player with stat boosts or money."), 1, 0, 4000, 10000, func_54(), 0, 138, 0);
			func_50(51);
		}
	
		if (func_49(iParam0))
			Global_113648.f_24997.f_2 = 3;
	
		if (func_48(iParam0, iParam1) != 322)
			func_42(func_48(iParam0, iParam1), uLocal_44, uLocal_44.f_1);
	
		Global_113636 = iParam1;
	
		if (Global_113634 == 0)
			if (Global_113637 == 1 || Global_113637 == 5 || Global_113637 == 11 || Global_113637 == 25)
				func_41(2);
			else if (Global_113637 == 26 || Global_113637 == 8 || Global_113637 == 17)
				func_41(7);
			else
				func_41(1);
	}

	return;
}

void func_41(int iParam0) // Position - 0x1516 Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113634 = iParam0;
	return;
}

void func_42(int iParam0, var uParam1, var uParam2) // Position - 0x1524 Hash - 0xEC2439E7 ^0x1B67A713
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_46(891 + iParam0, 1, -1);
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
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(-2044299740, 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(86701099, 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(-375571184, 50, 0);
	}

	if (flag)
		func_43();

	return;
}

void func_43() // Position - 0x160A Hash - 0x9F269E94 ^0x9F269E94
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
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(-2122623864, Global_113371, 0);
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

	STATS::STAT_SET_INT(-1055525200, Global_113384, true);
	STATS::STAT_SET_INT(-419750212, Global_113367, true);
	STATS::STAT_SET_INT(1331385274, Global_113385, true);
	STATS::STAT_SET_INT(542355616, Global_113368, true);
	STATS::STAT_SET_INT(1561233577, Global_113386, true);
	STATS::STAT_SET_INT(558499468, Global_113369, true);
	STATS::STAT_SET_INT(-852659719, Global_113387, true);
	STATS::STAT_SET_INT(-20401960, Global_113370, true);
	STATS::STAT_SET_INT(-2122623864, value2, true);
	STATS::STAT_SET_INT(-215705366, Global_113374, true);
	STATS::STAT_SET_INT(-131898641, Global_113390 + Global_113389, true);
	STATS::STAT_SET_INT(-2086369560, Global_113373 + Global_113372, true);
	Global_113391 = (Global_113384 * 100) / Global_113367;
	Global_113393 = ((Global_113386 + Global_113385) * 100) / (Global_113369 + Global_113368);
	Global_113392 = ((Global_113387 + value2) * 100) / (Global_113370 + Global_113374);
	Global_113394 = ((Global_113389 + Global_113390) * 100) / (Global_113372 + Global_113373);
	STATS::STAT_SET_FLOAT(1215094015, Global_113648.f_10196.f_3853, true);
	STATS::STAT_SET_INT(1813094653, Global_113391, true);
	STATS::STAT_SET_INT(-1205712980, Global_113392, true);
	STATS::STAT_SET_INT(480408826, Global_113393, true);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113648.f_10196.f_3853))
		func_45(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78558)
		{
			if (func_44() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113382 = 0;
			
				if (!Global_63362)
					func_38();
			}
		}
	}

	return;
}

int func_44() // Position - 0x1AC8 Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

BOOL func_45(int iParam0, int iParam1) // Position - 0x1AD3 Hash - 0x77E0C72A ^0x80DA2A54
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

void func_46(int iParam0, int iParam1, int iParam2) // Position - 0x1B24 Hash - 0xCF91FBA1 ^0xC4FE4CB6
{
	if (iParam2 == -1)
		iParam2 = func_47();

	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
	return;
}

int func_47() // Position - 0x1B42 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

int func_48(int iParam0, int iParam1) // Position - 0x1B4E Hash - 0xE97012CD ^0x68FBF85A
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

BOOL func_49(int iParam0) // Position - 0x1EC2 Hash - 0xBF3EFB31 ^0xBF3EFB31
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

void func_50(int iParam0) // Position - 0x1EF1 Hash - 0x12249850 ^0x46987D7A
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

void func_51(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1F33 Hash - 0xFA14711 ^0xFA14711
{
	func_52(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_52(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1F53 Hash - 0x2DEFD20B ^0x2F7188BE
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
		func_53();
	}

	return;
}

void func_53() // Position - 0x2125 Hash - 0xCF8881D1 ^0x40507183
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

int func_54() // Position - 0x223C Hash - 0x35BC7314 ^0x35BC7314
{
	func_23();

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

BOOL func_55(int iParam0) // Position - 0x2282 Hash - 0x3F44A899 ^0x7041C53
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

void func_56(int iParam0, int iParam1) // Position - 0x22C2 Hash - 0xE2246457 ^0xD5018049
{
	MISC::SET_BIT(&Global_113648.f_24997.f_8[iParam0], iParam1);
	return;
}

int func_57(int iParam0) // Position - 0x22DD Hash - 0xAA02DAD0 ^0xAA02DAD0
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

int func_58() // Position - 0x238E Hash - 0x7AC1007E ^0x4E7D4F54
{
	var unk;
	int unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_59(unk);
	return num;
}

int func_59(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x23AB Hash - 0x6DA57317 ^0x57A32A43
{
	switch (MISC::GET_HASH_KEY(&uParam0))
	{
		case -60745600:
			return 23;
	
		case 1149455824:
			return 0;
	
		case 1889800404:
			return 15;
	
		case 737712801:
			return 1;
	
		case 976199832:
			return 26;
	
		case 1531173018:
			return 29;
	
		case 1154171352:
			return 24;
	
		case -1325807529:
			return 2;
	
		case -2118978003:
			return 17;
	
		case -1363545320:
			return 11;
	
		case -129069433:
			return 16;
	
		case 1158398451:
			return 18;
	
		case -1669765523:
			return 12;
	
		case -1538568960:
			return 3;
	
		case -396020015:
			return 27;
	
		case 786118124:
			return 20;
	
		case -770891250:
			return 19;
	
		case 190582896:
			return 4;
	
		case -911763748:
			return 13;
	
		case -881321240:
			return 28;
	
		case 1337652317:
			return 7;
	
		case 1492712482:
			return 25;
	
		case -1612307213:
			return 10;
	
		case -201963189:
			return 22;
	
		case -1176354303:
			return 21;
	
		case 1735157309:
			return 9;
	
		case -1631807569:
			return 5;
	
		case 847041036:
			return 6;
	
		case -167923910:
			return 14;
	
		case 59976311:
			return 30;
	
		case 996703443:
			return 31;
	
		case -2088549946:
			return 32;
	
		case -1148693293:
			return 33;
	}

	return -1;
}

BOOL func_60() // Position - 0x2585 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_61() // Position - 0x258E Hash - 0x631513D1 ^0x631513D1
{
	if (Global_32403)
	{
		func_41(4);
		return true;
	}

	return false;
}

void func_62(int iParam0) // Position - 0x25A6 Hash - 0x67413911 ^0x67413911
{
	Global_22736 = iParam0;
	return;
}

int func_63() // Position - 0x25B3 Hash - 0xDED80B4D ^0xD3C18941
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

BOOL func_64() // Position - 0x25C3 Hash - 0xAF463394 ^0x90F146CD
{
	if (Global_113648.f_24997.f_5 == 1000)
		return true;

	return false;
}

BOOL func_65() // Position - 0x25DF Hash - 0x21D64237 ^0x21D64237
{
	return Global_32402;
}

void func_66() // Position - 0x25EA Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_240();
	return;
}

BOOL func_67(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x25F6 Hash - 0x384540C1 ^0x384540C1
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_21732 = false;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_11(sParam2, iParam3, false);
}

void func_68() // Position - 0x2644 Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_69();
	return;
}

void func_69() // Position - 0x2654 Hash - 0xF6D04E68 ^0x80AE5309
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

int func_70(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x2675 Hash - 0x1ECD241B ^0x2C71A0AB
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	num = func_73(pedParam0);

	if (!num == -1)
		return 1;

	num2 = func_72(pedParam0);

	if (!num2 == -1)
		return 1;

	if (!bParam2)
		if (iParam1 == 0 || iParam1 < 0)
			return 0;

	num3 = func_71();

	if (num3 == -1)
		return 0;

	Global_44206[num3 /*5*/] = 0;
	Global_44206[num3 /*5*/].f_1 = pedParam0;
	Global_44206[num3 /*5*/].f_2 = iParam1;
	Global_44206[num3 /*5*/].f_3 = iParam1;
	Global_44206[num3 /*5*/].f_4 = 0;

	if (pedParam0 == PLAYER::PLAYER_PED_ID())
		Global_44444 = 1;

	Global_44204 = Global_44204 + 1;
	return 1;
}

int func_71() // Position - 0x2731 Hash - 0x412B82DF ^0x412B82DF
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_44206[i /*5*/] == 13)
			return i;
	}

	return -1;
}

int func_72(Entity eParam0) // Position - 0x2760 Hash - 0x14AF2EDD ^0xC5BC7CD2
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_44206[i /*5*/].f_1 == eParam0)
			return i;
	}

	return -1;
}

int func_73(Entity eParam0) // Position - 0x2791 Hash - 0x219FA119 ^0x5240A8AF
{
	int i;

	if (eParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (eParam0 == Global_44232[i /*5*/].f_1)
			return Global_44232[i /*5*/];
	}

	return -1;
}

BOOL func_74() // Position - 0x27D2 Hash - 0xC7E4D89 ^0x5A425EC5
{
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);

	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		return true;

	if (MISC::IS_BULLET_IN_AREA(uLocal_152, 40f, true) || MISC::IS_BULLET_IN_AREA(func_75(PLAYER::PLAYER_ID()), 10f, false) || MISC::IS_PROJECTILE_IN_AREA(uLocal_152 - { 40f, 40f, 40f }, uLocal_152 + { 40f, 40f, 40f }, false))
		return true;

	if (!PED::IS_PED_INJURED(uLocal_91[0]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), true) || ENTITY::IS_ENTITY_IN_WATER(uLocal_91[0]))
			return true;
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_91[0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
				return true;
	
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_91[0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_91[0]))
				if (PED::CAN_PED_SEE_HATED_PED(uLocal_91[0], PLAYER::PLAYER_PED_ID()))
					return true;
	}
	else
	{
		return true;
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
	{
		if (!PED::IS_PED_INJURED(uLocal_91[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_91[1], PLAYER::PLAYER_PED_ID(), true))
				return true;
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_91[1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
					return true;
		
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_91[1]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_91[1]))
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_91[1], PLAYER::PLAYER_PED_ID()))
						return true;
		}
		else
		{
			return true;
		}
	}

	return false;
}

Vector3 func_75(Player plParam0) // Position - 0x2987 Hash - 0x6712BF53 ^0x688D5BEC
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

void func_76() // Position - 0x299A Hash - 0x9422EFBC ^0xFC749289
{
	int randomIntInRange;

	switch (iLocal_55)
	{
		case 0:
			if (iLocal_54 == 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1017.4605f, -1259.8677f, 3.9183f, -1061.8914f, -1424.029f, 24.4253f, 171.75f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(uLocal_152, 1f) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_152, 15f, 15f, 15f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(blLocal_151))
						HUD::REMOVE_BLIP(&blLocal_151);
				
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_155[0]))
						{
							uLocal_155[0] = func_167(uLocal_91[0], false, 145);
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_155[0], false);
						}
					}
				
					if (!func_194())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							veLocal_95 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					
						func_166(&uLocal_173, "REDR1AU", "REDR1_DCO", 4, 0, 0, 0, 0);
						func_157(true);
						func_156(true);
					}
				
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1011.1443f, -1378.79f, 4.1997f, -1039.6846f, -1337.6096f, 9.7035f, 37.875f, false, true, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
						{
							func_155();
							TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(uLocal_91[1], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, -1, 0, 0, false, false, false);
							iLocal_123 = MISC::GET_GAME_TIMER() + 60000;
						
							if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
								HUD::SHOW_HEIGHT_ON_BLIP(uLocal_155[0], true);
						
							iLocal_55 = 1;
						}
					}
				}
			}
		
			if (iLocal_54 == 2)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1820.2384f, 3671.9485f, 30.8437f, 1957.8176f, 3751.8875f, 55.4436f, 159.9375f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(uLocal_152, 1f) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_152, 15f, 15f, 15f, false, true, 0))
				{
					func_154();
				
					if (!func_194())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							veLocal_95 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					
						func_157(true);
						func_156(true);
					}
				
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1877.7609f, 3727.6997f, 31.882f, 1896.9618f, 3693.83f, 34.9925f, 19.1875f, false, true, 0))
					{
						func_67(&uLocal_173, "REDR2AU", "REDR2_DCA", 4, 0, 0, 0);
					
						if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_155[0], true);
					
						if (HUD::DOES_BLIP_EXIST(uLocal_155[1]))
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_155[1], true);
					
						iLocal_123 = MISC::GET_GAME_TIMER() + 120000;
						iLocal_55 = 3;
					}
				}
			}
			break;
	
		case 1:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]) && !ENTITY::IS_ENTITY_DEAD(veLocal_94, false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
					TASK::TASK_LOOK_AT_ENTITY(0, uLocal_91[1], 7000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
					TASK::TASK_PAUSE(0, 2500);
					TASK::TASK_ENTER_VEHICLE(0, veLocal_94, -1, -1, 1f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], iLocal_99);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
				}
			
				if (!PED::IS_PED_INJURED(uLocal_91[1]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
					TASK::TASK_LOOK_AT_ENTITY(0, uLocal_91[0], 7000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1052.2147f, -1354.9374f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1061.4636f, -1384.9216f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], iLocal_99);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
				}
			
				SYSTEM::SETTIMERA(0);
				iLocal_55 = 3;
			}
		
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 8f, 8f, 4f, false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 80f))
					{
						bLocal_121 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_55 = 4;
					}
				}
				else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 30f, 30f, 30f, false, true, 0))
				{
					AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(true);
				}
				else
				{
					AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(false);
				}
			}
			break;
	
		case 3:
			if (iLocal_54 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_91[1]))
					{
						if (func_67(&uLocal_173, "REDR1AU", "REDR1_DCL", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_55 = 4;
						}
					}
				
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 8f, 8f, 4f, false, true, 0))
					{
						if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 80f))
						{
							bLocal_121 = true;
							SYSTEM::SETTIMERA(0);
							iLocal_55 = 4;
						}
					}
				}
			}
		
			if (iLocal_54 == 2)
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 30f, 30f, 30f, false, true, 0))
					{
						func_153();
					
						if (func_152())
							func_62(0);
					}
					else if (func_4())
					{
						func_62(1);
					}
				}
			
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_68, 15f, 15f, 15f, false, true, 0) && !PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
					{
						if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 80f))
						{
							if (PED::CAN_PED_SEE_HATED_PED(uLocal_91[0], PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_INJURED(uLocal_91[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
									TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, false, false, false);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], iLocal_99);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
								}
							
								if (!PED::IS_PED_INJURED(uLocal_91[1]))
									TASK::TASK_LOOK_AT_ENTITY(uLocal_91[1], PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
							
								SYSTEM::SETTIMERA(0);
								iLocal_55 = 4;
							}
						}
					}
				}
			
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1889.1215f, 3715.0566f, 31.844f, 1895.6075f, 3703.5864f, 34.8272f, 12.4375f, false, true, 0))
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
						TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, false, false, false);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], iLocal_99);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
					
						if (!PED::IS_PED_INJURED(uLocal_91[1]))
							TASK::TASK_LOOK_AT_ENTITY(uLocal_91[1], PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
					
						SYSTEM::SETTIMERA(0);
						iLocal_55 = 4;
					}
				}
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_94, 1.5f, 1.5f, 5f, false, true, 0) && PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (func_152())
							func_62(0);
					
						func_68();
						SYSTEM::WAIT(0);
					
						if (func_67(&uLocal_173, "REDR2AU", "REDR2_TRY", 4, 0, 0, 0))
						{
							iLocal_170 = 2;
						
							for (iLocal_63 = 0; iLocal_63 <= 1; iLocal_63 = iLocal_63 + 1)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_155[iLocal_63]))
									HUD::REMOVE_BLIP(&uLocal_155[iLocal_63]);
							}
						
							if (!HUD::DOES_BLIP_EXIST(blLocal_158))
								blLocal_158 = func_150(veLocal_94, false, false);
						
							if (!PED::IS_PED_INJURED(uLocal_91[0]))
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_91[0]);
						
							iLocal_55 = 4;
						}
					}
				}
			
				if (iLocal_123 < MISC::GET_GAME_TIMER())
				{
					if (func_152())
						func_62(0);
				
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_DRV", 4, 0, 0, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]) && ENTITY::DOES_ENTITY_EXIST(veLocal_94))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
							TASK::TASK_LOOK_AT_ENTITY(0, uLocal_91[1], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
							TASK::TASK_ENTER_VEHICLE(0, veLocal_94, -1, -1, 1f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], iLocal_99);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
							TASK::TASK_LOOK_AT_ENTITY(0, uLocal_91[0], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_91[0], 0);
							TASK::TASK_ENTER_VEHICLE(0, veLocal_94, -1, 0, 1f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], iLocal_99);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
						
							for (iLocal_63 = 0; iLocal_63 <= 1; iLocal_63 = iLocal_63 + 1)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_155[iLocal_63]))
									HUD::REMOVE_BLIP(&uLocal_155[iLocal_63]);
							}
						
							iLocal_55 = 2;
						}
					}
				}
			}
			break;
	
		case 4:
			if (iLocal_54 == 1)
			{
				switch (iLocal_170)
				{
					case 0:
						if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 8f, 8f, 4f, false, true, 0) || bLocal_121)
							{
								AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(false);
								TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
								TASK::TASK_LOOK_AT_ENTITY(uLocal_91[1], PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
							
								if (MISC::GET_GAME_TIMER() + 50000 > iLocal_123 || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
								{
									func_6();
								
									if (bLocal_121)
									{
										if (!func_4())
										{
											if (func_22() == 0)
											{
												if (func_67(&uLocal_173, "REDR1AU", "REDR1_HYM", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_170 = iLocal_170 + 1;
												}
											}
											else if (func_22() == 1)
											{
												if (func_67(&uLocal_173, "REDR1AU", "REDR1_HYF", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_170 = iLocal_170 + 1;
												}
											}
											else if (func_22() == 2)
											{
												if (func_67(&uLocal_173, "REDR1AU", "REDR1_HYT", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_170 = iLocal_170 + 1;
												}
											}
										}
									}
									else
									{
										iLocal_170 = iLocal_170 + 1;
									}
								}
							}
						}
						break;
				
					case 1:
						if (!func_4())
						{
							if (func_149())
							{
								if (!PED::IS_PED_INJURED(uLocal_91[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
									TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, -1, 0, 0, false, false, false);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], iLocal_99);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
								
									if (!PED::IS_PED_INJURED(uLocal_91[1]))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
										TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, -1, 0, 0, false, false, false);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_91[0], 0);
										TASK::TASK_PAUSE(0, 3000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1052.2147f, -1354.9374f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1061.4636f, -1384.9216f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
										TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
										TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], iLocal_99);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
									}
								
									func_148();
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(uLocal_91[0]))
								{
									if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 80f))
									{
										TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
										func_6();
										SYSTEM::WAIT(0);
										iLocal_170 = iLocal_170 + 1;
									}
									else
									{
										func_147(uLocal_91[0], &uLocal_65[0]);
									}
								}
							
								if (!func_4())
									iLocal_170 = iLocal_170 + 1;
							}
						}
						break;
				
					case 2:
						if (func_149())
							iLocal_170 = 6;
						else
							iLocal_170 = iLocal_170 + 1;
						break;
				
					case 3:
						if (!bLocal_104)
						{
							if (SYSTEM::TIMERA() > 1500)
							{
								if (!PED::IS_PED_INJURED(uLocal_91[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_PAUSE(0, 500);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], iLocal_99);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
									SYSTEM::SETTIMERA(0);
									bLocal_104 = true;
								}
							}
						}
					
						func_147(uLocal_91[0], &uLocal_65[0]);
					
						if (!func_4())
							if (func_67(&uLocal_173, "REDR1AU", "REDR1_LFT", 4, 0, 0, 0))
								iLocal_170 = iLocal_170 + 1;
						break;
				
					case 4:
						if (!func_149())
						{
							if (!func_4())
							{
								if (func_67(&uLocal_173, "REDR1AU", "REDR1_PLS", 4, 0, 0, 0))
								{
									TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								
									if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
										HUD::REMOVE_BLIP(&uLocal_155[0]);
								
									if (HUD::DOES_BLIP_EXIST(uLocal_155[1]))
										HUD::REMOVE_BLIP(&uLocal_155[1]);
								
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_94, 1);
									
										if (!PED::IS_PED_INJURED(uLocal_91[0]))
											TASK::TASK_ENTER_VEHICLE(uLocal_91[0], veLocal_94, -1, 0, 1f, 1, 0);
									}
								
									iLocal_170 = iLocal_170 + 1;
								}
							}
						}
						else
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
								HUD::REMOVE_BLIP(&uLocal_155[0]);
						
							if (HUD::DOES_BLIP_EXIST(uLocal_155[1]))
								HUD::REMOVE_BLIP(&uLocal_155[1]);
						
							iLocal_170 = iLocal_170 + 1;
						}
						break;
				
					case 5:
						if (func_149())
						{
							if (!PED::IS_PED_INJURED(uLocal_91[0]))
							{
								if (!PED::IS_PED_IN_GROUP(uLocal_91[0]))
								{
									TASK::CLEAR_PED_TASKS(uLocal_91[0]);
									PED::SET_PED_AS_GROUP_MEMBER(uLocal_91[0], func_63());
									PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_91[0], true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_91[0], 0);
								}
							
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, hLocal_100, 1862763509);
								func_146();
							}
						
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != veLocal_94)
									if (!func_4())
										if (func_22() == 0)
											if (func_67(&uLocal_173, "REDR1AU", "REDR1_TKM", 4, 0, 0, 0))
												iLocal_55 = 7;
										else if (func_22() == 1)
											if (func_67(&uLocal_173, "REDR1AU", "REDR1_TKF", 4, 0, 0, 0))
												iLocal_55 = 7;
										else if (func_22() == 2)
											if (func_67(&uLocal_173, "REDR1AU", "REDR1_TKT", 4, 0, 0, 0))
												iLocal_55 = 7;
								else
									iLocal_55 = 7;
						}
						break;
				
					case 6:
						func_147(uLocal_91[0], &uLocal_65[0]);
					
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							if (func_149())
								if (!func_4())
									if (func_67(&uLocal_173, "REDR1AU", "REDR1_AKB", 4, 0, 0, 0))
										iLocal_170 = 10;
							else
								iLocal_170 = 4;
						else
							iLocal_170 = 4;
						break;
				
					case 7:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (func_149())
							{
								if (!func_4())
								{
									if (func_22() == 0)
									{
										if (func_67(&uLocal_173, "REDR1AU", "REDR1_JIA", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_170 = 10;
										}
									}
									else if (func_22() == 1)
									{
										if (func_67(&uLocal_173, "REDR1AU", "REDR1_JIB", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_170 = 10;
										}
									}
									else if (func_22() == 2)
									{
										if (func_67(&uLocal_173, "REDR1AU", "REDR1_JIC", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_170 = 10;
										}
									}
								}
							}
							else
							{
								iLocal_170 = 4;
							}
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
				
					case 10:
						if (func_149())
						{
							if (!PED::IS_PED_INJURED(uLocal_91[0]))
							{
								if (!PED::IS_PED_IN_GROUP(uLocal_91[0]))
								{
									TASK::CLEAR_PED_TASKS(uLocal_91[0]);
									PED::SET_PED_AS_GROUP_MEMBER(uLocal_91[0], func_63());
									PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_91[0], true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_91[0], 0);
								}
							
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, hLocal_100, 1862763509);
								func_146();
							}
						
							iLocal_170 = iLocal_170 + 1;
						}
						else
						{
							iLocal_170 = 4;
						}
						break;
				
					case 11:
						iLocal_55 = 7;
						break;
				}
			}
		
			if (iLocal_54 == 2)
			{
				switch (iLocal_170)
				{
					case 0:
						if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 10f, 10f, 10f, false, true, 0))
							{
								if (PED::IS_PED_FACING_PED(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 50f))
								{
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
									TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
									TASK::TASK_LOOK_AT_ENTITY(uLocal_91[1], PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
								
									if (func_152())
										func_62(0);
								
									func_6();
									SYSTEM::WAIT(0);
								
									if (func_67(&uLocal_173, "REDR2AU", "REDR2_AKA", 4, 0, 0, 0))
										iLocal_170 = iLocal_170 + 1;
								}
								else
								{
									func_147(uLocal_91[0], &uLocal_65[0]);
								}
							}
						}
						break;
				
					case 1:
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
							TASK::TASK_PAUSE(0, 500);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], iLocal_99);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
							SYSTEM::SETTIMERA(0);
							iLocal_170 = iLocal_170 + 1;
						}
						break;
				
					case 2:
						func_147(uLocal_91[0], &uLocal_65[0]);
					
						if (!PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_94, 1);
					
						if (SYSTEM::TIMERA() > 8000)
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
								HUD::REMOVE_BLIP(&uLocal_155[0]);
						
							if (HUD::DOES_BLIP_EXIST(uLocal_155[1]))
								HUD::REMOVE_BLIP(&uLocal_155[1]);
						
							if (!HUD::DOES_BLIP_EXIST(blLocal_158))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
								{
									blLocal_158 = func_150(veLocal_94, false, false);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_94, 1);
								}
							}
						}
					
						if (!func_4())
						{
							if (!PED::IS_PED_INJURED(uLocal_91[0]))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 20f, 20f, 20f, false, true, 0) && SYSTEM::TIMERA() > 9500)
								{
									randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
								
									if (randomIntInRange < 60)
										if (func_67(&uLocal_173, "REDR2AU", "REDR2_PLS", 4, 0, 0, 0))
											SYSTEM::SETTIMERA(0);
									else if (func_67(&uLocal_173, "REDR2AU", "REDR2_CAR", 4, 0, 0, 0))
										SYSTEM::SETTIMERA(0);
								}
							}
						}
					
						if (!ENTITY::IS_ENTITY_DEAD(veLocal_94, false))
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_94, true))
								iLocal_55 = 7;
						break;
				}
			}
		
			if (iLocal_54 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]) && !ENTITY::IS_ENTITY_DEAD(veLocal_94, false))
				{
					if (SYSTEM::TIMERA() > 50000 || VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_94, -1, false) == uLocal_91[0])
					{
						if (func_67(&uLocal_173, "REDR1AU", "REDR1_FU", 4, 0, 0, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false) && !VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(veLocal_94))
							{
								if (!PED::IS_PED_INJURED(uLocal_91[0]))
								{
									if (VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_94, -1, false) && PED::IS_PED_IN_VEHICLE(uLocal_91[0], veLocal_94, false))
									{
										TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_91[0], veLocal_94, false);
										iLocal_55 = 2;
									}
									else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_94, -1, false) == uLocal_91[0])
									{
										iLocal_55 = 2;
									}
									else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_94, -1, false) == PLAYER::PLAYER_PED_ID())
									{
										iLocal_55 = 7;
									}
									else
									{
										func_70(uLocal_91[0], 120000, false);
										TASK::TASK_WANDER_STANDARD(uLocal_91[0], 1193033728, 0);
										PED::SET_PED_KEEP_TASK(uLocal_91[0], true);
										SYSTEM::WAIT(0);
										func_66();
									}
								}
							}
							else if (!PED::IS_PED_INJURED(uLocal_91[0]))
							{
								func_70(uLocal_91[0], 120000, false);
								TASK::TASK_WANDER_STANDARD(uLocal_91[0], 1193033728, 0);
								PED::SET_PED_KEEP_TASK(uLocal_91[0], true);
								SYSTEM::WAIT(0);
								func_66();
							}
						}
					}
				}
			}
		
			if (iLocal_54 == 2)
			{
				if (SYSTEM::TIMERA() > 60000)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_FU", 4, 0, 0, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_94, -1, false))
							{
								if (!PED::IS_PED_INJURED(uLocal_91[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_ENTER_VEHICLE(0, veLocal_94, -1, -1, 1f, 1, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], iLocal_99);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
								}
							}
						
							if (!PED::IS_PED_INJURED(uLocal_91[1]))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_ENTER_VEHICLE(0, veLocal_94, -1, 0, 1f, 1, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], iLocal_99);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
							}
						
							iLocal_55 = 2;
						}
					}
				}
			}
			break;
	
		case 2:
			if (iLocal_54 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(veLocal_94, false))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_91[0], veLocal_94, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_91[0], SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_91[0], SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT) != 0)
							{
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veLocal_94, 5f);
								VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(veLocal_94, true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, veLocal_94, -1016.1517f, -1352.8549f, 4.4854f, 4, 50f, 262144, -1f, 100f, true);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, veLocal_94, -1005.7568f, -1353.8058f, 4.4756f, 4, 50f, 262144, -1f, 100f, true);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, veLocal_94, -989.2302f, -1354.2777f, -7.3581f, 4, 50f, 262144, -1f, 100f, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], iLocal_99);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
								PED::SET_PED_KEEP_TASK(uLocal_91[0], true);
								func_66();
							}
						}
					}
				}
			}
		
			if (iLocal_54 == 2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_91[0], veLocal_94) && PED::IS_PED_SITTING_IN_VEHICLE(uLocal_91[1], veLocal_94))
						{
							VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(veLocal_94, true);
							TASK::CLEAR_PED_TASKS(uLocal_91[1]);
							TASK::TASK_STAND_STILL(uLocal_91[1], -1);
							PED::SET_PED_KEEP_TASK(uLocal_91[1], true);
							iLocal_55 = 5;
						}
					
						if (!bLocal_101)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_91[0], veLocal_94) && !PED::IS_PED_SITTING_IN_VEHICLE(uLocal_91[1], veLocal_94))
							{
								TASK::CLEAR_PED_TASKS(uLocal_91[0]);
								TASK::TASK_STAND_STILL(uLocal_91[0], -1);
							}
						
							if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_91[0], veLocal_94) && PED::IS_PED_SITTING_IN_VEHICLE(uLocal_91[1], veLocal_94))
							{
								TASK::CLEAR_PED_TASKS(uLocal_91[1]);
								TASK::TASK_STAND_STILL(uLocal_91[1], -1);
							}
						
							bLocal_101 = true;
						}
					}
				}
			}
			break;
	
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_91[0]);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, veLocal_94, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_94, 0f, 2f, 0f), 10f, 0, hLocal_98, 262144, 5f, -1f);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, veLocal_94, 24, 500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, veLocal_94, 9, 1500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, veLocal_94, 24, 500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, veLocal_94, 11, 1500);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, veLocal_94, 2185.8171f, 3915.4714f, 27.9257f, 4, 30f, 262144, 0f, 0f, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], iLocal_99);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
					PED::SET_PED_KEEP_TASK(uLocal_91[0], true);
				}
			}
		
			iLocal_55 = 6;
			break;
	
		case 6:
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_91[0], SCRIPT_TASK_PERFORM_SEQUENCE) == 1)
					if (TASK::GET_SEQUENCE_PROGRESS(uLocal_91[0]) == 5)
						func_66();
			break;
	
		case 7:
			if (iLocal_54 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_91[1]))
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[1], 50f, 50f, 50f, false, true, 0))
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_91[1]);
			
				switch (iLocal_64)
				{
					case 0:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_155[0]))
								uLocal_155[0] = func_167(uLocal_91[0], false, 145);
						
							iLocal_64 = iLocal_64 + 1;
							SYSTEM::SETTIMERA(0);
						}
						break;
				
					case 1:
						if (SYSTEM::TIMERA() > 1000)
						{
							if (!PED::IS_PED_INJURED(uLocal_91[0]))
							{
								if (func_149())
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false))
									{
										fLocal_164 = func_145(PLAYER::PLAYER_PED_ID(), uLocal_91[0], true);
										iLocal_64 = iLocal_64 + 1;
									}
								}
								else if (!bLocal_119)
								{
									if (func_67(&uLocal_173, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
										bLocal_119 = true;
								}
							}
						}
						break;
				
					case 2:
						func_144();
					
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
							if (func_149())
								if (!bLocal_118)
									if (func_145(PLAYER::PLAYER_PED_ID(), uLocal_91[0], true) > fLocal_164 + 5f)
										if (func_67(&uLocal_173, "REDR1AU", "REDR1_LEA", 4, 0, 0, 0))
											bLocal_118 = true;
							else if (!bLocal_119)
								if (func_67(&uLocal_173, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
									bLocal_119 = true;
					
						if (func_2())
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_94, 1);
						
							if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
								HUD::REMOVE_BLIP(&uLocal_155[0]);
						
							if (func_22() == 2 && !func_64())
							{
								if (!HUD::DOES_BLIP_EXIST(blLocal_103))
								{
									blLocal_103 = func_142(uLocal_87, false);
									HUD::SET_BLIP_SPRITE(blLocal_103, BLIP_ALTRUIST);
									func_140();
								}
							}
						
							bLocal_62 = true;
							iLocal_64 = iLocal_64 + 1;
						}
					
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
							if (func_145(PLAYER::PLAYER_PED_ID(), uLocal_91[0], true) > 50f)
								func_66();
						break;
				
					case 3:
						if (!func_4())
						{
							SYSTEM::WAIT(1500);
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						
							if (func_22() == 0)
								if (func_67(&uLocal_173, "REDR1AU", "REDR1_WHA", 4, 0, 0, 0))
									iLocal_64 = iLocal_64 + 1;
							else if (func_22() == 1)
								if (func_67(&uLocal_173, "REDR1AU", "REDR1_WHB", 4, 0, 0, 0))
									iLocal_64 = iLocal_64 + 1;
							else if (func_22() == 2)
								if (func_67(&uLocal_173, "REDR1AU", "REDR1_WHC", 4, 0, 0, 0))
									iLocal_64 = iLocal_64 + 1;
						}
						break;
				
					case 4:
						if (!func_4())
						{
							if (func_67(&uLocal_173, "REDR1AU", "REDR1_WH2", 4, 0, 0, 0))
							{
								iLocal_171 = MISC::GET_GAME_TIMER();
								iLocal_64 = iLocal_64 + 1;
							}
						}
						break;
				
					case 5:
						func_139();
						func_138();
						func_144();
					
						if (!bLocal_110)
						{
							if (MISC::GET_GAME_TIMER() - iLocal_171 > 7000)
							{
								if (!func_4())
								{
									if (func_67(&uLocal_173, "REDR1AU", "REDR1_ILL", 4, 0, 0, 0))
									{
										iLocal_171 = MISC::GET_GAME_TIMER();
										bLocal_110 = true;
									}
								}
							}
						}
						else if (func_2())
						{
							if (bLocal_109 && !bLocal_108)
							{
								func_137();
							}
							else
							{
								func_134();
								func_133();
								CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
							}
						}
					
						if (func_132(uLocal_81))
						{
							func_5(false);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_173, "REDR1AU", "REDR1_OFFR", 4, 0, 0, 0);
						}
					
						if (func_131())
						{
							func_5(false);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_173, "REDR1AU", "REDR1_CULT", 4, 0, 0, 0);
						}
					
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(uLocal_91[0], uLocal_81, Global_22, true, true, 0))
							{
								if (HUD::DOES_BLIP_EXIST(blLocal_102))
									HUD::REMOVE_BLIP(&blLocal_102);
							
								if (HUD::DOES_BLIP_EXIST(blLocal_103))
									HUD::REMOVE_BLIP(&blLocal_103);
							
								iLocal_55 = 8;
							}
						}
						break;
				}
			}
		
			if (iLocal_54 == 2)
			{
				switch (iLocal_64)
				{
					case 0:
						if (!ENTITY::IS_ENTITY_DEAD(veLocal_94, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_94, true))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_155[0]))
									uLocal_155[0] = func_167(uLocal_91[0], false, 145);
							
								if (!HUD::DOES_BLIP_EXIST(uLocal_155[1]))
									uLocal_155[1] = func_167(uLocal_91[1], false, 145);
							
								if (!func_4())
								{
									SYSTEM::SETTIMERA(0);
								
									if (func_22() == 0)
										if (func_67(&uLocal_173, "REDR2AU", "REDR2_JIA", 4, 0, 0, 0))
											iLocal_64 = iLocal_64 + 1;
									else if (func_22() == 1)
										if (func_67(&uLocal_173, "REDR2AU", "REDR2_JIB", 4, 0, 0, 0))
											iLocal_64 = iLocal_64 + 1;
									else if (func_22() == 2)
										if (func_67(&uLocal_173, "REDR2AU", "REDR2_JIC", 4, 0, 0, 0))
											iLocal_64 = iLocal_64 + 1;
								}
							}
						}
						break;
				
					case 1:
						if (!PED::IS_PED_INJURED(uLocal_91[0]) && !ENTITY::IS_ENTITY_DEAD(veLocal_94, false))
						{
							TASK::TASK_CLEAR_LOOK_AT(uLocal_91[0]);
							TASK::TASK_ENTER_VEHICLE(uLocal_91[0], veLocal_94, 30000, 2, 1073741824, 1, 0);
						}
					
						SYSTEM::SETTIMERA(0);
						iLocal_64 = iLocal_64 + 1;
						break;
				
					case 2:
						if (!PED::IS_PED_INJURED(uLocal_91[1]) && !ENTITY::IS_ENTITY_DEAD(veLocal_94, false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, veLocal_94, 1.5f, -3f, 0f, 1f, 4000, 1036831949, true);
							TASK::TASK_ENTER_VEHICLE(0, veLocal_94, 30000, 1, 1073741824, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], iLocal_99);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
						}
					
						SYSTEM::SETTIMERA(0);
						iLocal_64 = iLocal_64 + 1;
						break;
				
					case 3:
						func_139();
						func_138();
					
						if (!bLocal_117)
							if (!func_4())
								if (func_67(&uLocal_173, "REDR2AU", "REDR2_BCK", 4, 0, 0, 0))
									bLocal_117 = true;
					
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(uLocal_91[0], false) && !ENTITY::IS_ENTITY_DEAD(uLocal_91[1], false))
								{
									if (PED::IS_PED_IN_VEHICLE(uLocal_91[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && PED::IS_PED_IN_VEHICLE(uLocal_91[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
									{
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, hLocal_100, 1862763509);
										func_146();
									
										for (iLocal_63 = 0; iLocal_63 <= iLocal_90 - 1; iLocal_63 = iLocal_63 + 1)
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_155[iLocal_63]))
												HUD::REMOVE_BLIP(&uLocal_155[iLocal_63]);
										}
									
										if (HUD::DOES_BLIP_EXIST(blLocal_158))
											HUD::REMOVE_BLIP(&blLocal_158);
									
										if (func_22() == 2 && !func_64())
										{
											if (!HUD::DOES_BLIP_EXIST(blLocal_103))
											{
												blLocal_103 = func_142(uLocal_87, false);
												HUD::SET_BLIP_SPRITE(blLocal_103, BLIP_ALTRUIST);
												func_140();
											}
										}
									
										if (func_22() == 0)
										{
											if (func_67(&uLocal_173, "REDR2AU", "REDR2_WHA", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_64 = iLocal_64 + 1;
											}
										}
										else if (func_22() == 1)
										{
											if (func_67(&uLocal_173, "REDR2AU", "REDR2_WHB", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_64 = iLocal_64 + 1;
											}
										}
										else if (func_22() == 2)
										{
											if (func_67(&uLocal_173, "REDR2AU", "REDR2_WHC", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_64 = iLocal_64 + 1;
											}
										}
									}
								}
							}
						}
						break;
				
					case 4:
						func_139();
						func_138();
					
						if (!func_4())
						{
							if (func_67(&uLocal_173, "REDR2AU", "REDR2_WH2", 4, 0, 0, 0))
							{
								bLocal_62 = true;
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								iLocal_171 = MISC::GET_GAME_TIMER();
								iLocal_64 = iLocal_64 + 1;
							}
						}
						break;
				
					case 5:
						func_139();
					
						if (iLocal_346 == 0 || iLocal_346 == 9)
							func_138();
					
						if (MISC::GET_GAME_TIMER() - iLocal_171 > 9000)
							func_125();
					
						if (iLocal_346 == 9 && MISC::GET_GAME_TIMER() - iLocal_347 > 6000 && MISC::GET_GAME_TIMER() - iLocal_347 < 6500)
							func_67(&uLocal_173, "REDR2AU", "REDR2_CHAT", 4, 0, 0, 0);
					
						if (func_132(uLocal_81))
						{
							func_5(false);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_173, "REDR2AU", "REDR2_OFFR", 4, 0, 0, 0);
						}
					
						if (func_131())
						{
							func_5(false);
							func_68();
							SYSTEM::WAIT(0);
							func_67(&uLocal_173, "REDR2AU", "REDR2_CULT", 4, 0, 0, 0);
						}
					
						if (!ENTITY::IS_ENTITY_DEAD(veLocal_94, false))
							if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_94, false))
								if (ENTITY::IS_ENTITY_AT_COORD(uLocal_91[0], uLocal_81, Global_22, true, true, 0) && ENTITY::IS_ENTITY_AT_COORD(uLocal_91[1], uLocal_81, Global_22, false, true, 0))
									iLocal_64 = iLocal_64 + 1;
						break;
				
					case 6:
						if (HUD::DOES_BLIP_EXIST(blLocal_102))
							HUD::REMOVE_BLIP(&blLocal_102);
					
						if (HUD::DOES_BLIP_EXIST(blLocal_103))
							HUD::REMOVE_BLIP(&blLocal_103);
					
						iLocal_55 = 8;
						break;
				}
			}
			break;
	
		case 8:
			for (iLocal_63 = 0; iLocal_63 <= iLocal_90 - 1; iLocal_63 = iLocal_63 + 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_91[iLocal_63]))
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_91[iLocal_63], false);
			}
		
			if (iLocal_54 == 1)
			{
				if (func_124(true, false, true) && iLocal_124 == -1)
				{
					func_6();
				
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f - 5f, 2, false);
				
					if (func_2())
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == veLocal_94)
							iLocal_124 = 0;
						else
							iLocal_124 = 1;
					else
						iLocal_124 = 2;
				}
			
				if (iLocal_124 == 0)
					func_123();
			
				if (iLocal_124 == 1)
					func_122();
			
				if (iLocal_124 == 2)
					func_121();
			
				if (bLocal_130)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_36();
				}
			}
		
			if (iLocal_54 == 2)
			{
				if (func_124(true, false, true) && iLocal_124 == -1)
				{
					func_68();
				
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f - 4f, 2, false);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1143.5865f, 2672.2236f, 37.1142f, 70f, 2);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(930.2788f, 2856.145f, 59.2884f, 70f, 2);
					}
				
					func_113(true, true, true, false, false, false, false);
				
					while (func_4())
					{
						SYSTEM::WAIT(0);
					}
				
					if (func_2())
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == veLocal_94)
							iLocal_124 = 0;
				}
			
				if (iLocal_124 == 0)
					func_110();
				else if (iLocal_124 == 1)
					func_109();
				else if (iLocal_124 == 2)
					func_77();
			
				if (bLocal_130)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_36();
				}
			}
			break;
	
		case 9:
			break;
	}

	return;
}

void func_77() // Position - 0x4A2D Hash - 0x4AF16501 ^0xC0BDC2D
{
	switch (iLocal_126)
	{
		case 0:
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
			}
		
			if (!PED::IS_PED_INJURED(uLocal_91[1]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_91[1], PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
			}
		
			func_67(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
			iLocal_126 = iLocal_126 + 1;
			break;
	
		case 1:
			iLocal_126 = iLocal_126 + 1;
			break;
	
		case 2:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(uLocal_91[0], uLocal_84, 1f, -1, 1193033728, 1056964608);
					iLocal_125 = MISC::GET_GAME_TIMER() + 500;
					iLocal_126 = iLocal_126 + 1;
				}
			}
			break;
	
		case 3:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_91[1]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_91[1], uLocal_84, 1f, -1, 1048576000, 0, 1193033728);
					iLocal_126 = iLocal_126 + 1;
				}
			}
			break;
	
		case 4:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
				iLocal_126 = iLocal_126 + 1;
			break;
	
		case 5:
			func_78(func_22(), 1, 80, false, true);
			bLocal_130 = true;
			break;
	}

	return;
}

void func_78(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4B8A Hash - 0xD1775FEC ^0xD1775FEC
{
	int outValue;
	Hash statHash;

	if (func_108(iParam0) == 3)
		return;

	if (func_108(iParam0) == 4)
		return;

	func_79(func_108(iParam0), 1, iParam1, iParam2, false);

	if (bParam3)
	{
		outValue = 0;
	
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					statHash = 1762386298;
					break;
			
				case 1:
					statHash = -544246134;
					break;
			
				case 2:
					statHash = -1147816992;
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
					statHash = 138536943;
					break;
			
				case 1:
					statHash = 691239862;
					break;
			
				case 2:
					statHash = -1133981805;
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

int func_79(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x4C5C Hash - 0x66394909 ^0x7ECE9AC7
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_107();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_106(99, 1);
					func_105(-656546900, iParam3);
					break;
			
				case 1:
					func_105(-2098183071, iParam3);
					break;
			
				case 2:
					func_105(1578119842, iParam3);
					break;
			}
		
			func_91(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_88(5))
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
							func_105(-1190521599, iParam3);
							break;
					
						case 1:
							func_105(490143716, iParam3);
							break;
					
						case 2:
							func_105(121069433, iParam3);
							break;
					}
				
					if (func_88(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_105(219506691, iParam3);
							break;
					
						case 1:
							func_105(1871505786, iParam3);
							break;
					
						case 2:
							func_105(-2024399847, iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_105(27639974, iParam3);
							break;
					
						case 1:
							func_105(422258364, iParam3);
							break;
					
						case 2:
							func_105(316202960, iParam3);
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
							func_105(1806738963, iParam3);
							break;
					
						case 1:
							func_105(1576781520, iParam3);
							break;
					
						case 2:
							func_105(671882196, iParam3);
							break;
					}
					break;
			
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case -123529621:
							switch (iParam0)
							{
								case 0:
									func_105(408653638, iParam3);
									break;
							
								case 1:
									func_105(-424799277, iParam3);
									break;
							
								case 2:
									func_105(-558138038, iParam3);
									break;
							}
							break;
					
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_105(2038531975, iParam3);
									break;
							
								case 1:
									func_105(-572903575, iParam3);
									break;
							
								case 2:
									func_105(-953947924, iParam3);
									break;
							}
						
							if (func_88(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_105(-445823242, iParam3);
									break;
							
								case 1:
									func_105(-1386757215, iParam3);
									break;
							
								case 2:
									func_105(-727828275, iParam3);
									break;
							}
							break;
					
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_105(-1744069936, iParam3);
									break;
							
								case 1:
									func_105(799609312, iParam3);
									break;
							
								case 2:
									func_105(181688102, iParam3);
									break;
							}
						
							func_87(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_106(95, iParam3);
					break;
			
				case 1:
					func_106(97, iParam3);
					break;
			
				case 2:
					func_106(96, iParam3);
					break;
			}
		
			func_106(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = SYSTEM::FLOOR(num * SYSTEM::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_82(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_82(num2);
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
					func_105(-330339780, iParam3);
					break;
			
				case 1:
					func_105(1697564429, iParam3);
					break;
			
				case 2:
					func_105(1674823841, iParam3);
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

	func_81(iParam0);

	if (Global_43257 == 15)
		func_80(false);

	return 1;
}

void func_80(BOOL bParam0) // Position - 0x525B Hash - 0xB232D28E ^0x40CAA0C6
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

void func_81(int iParam0) // Position - 0x54DD Hash - 0xD2EB197 ^0x9FF73396
{
	int value;

	value = Global_60536[iParam0];

	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(52740893, value, true);
			break;
	
		case 1:
			STATS::STAT_SET_INT(1153264002, value, true);
			break;
	
		case 2:
			STATS::STAT_SET_INT(-1921710979, value, true);
			break;
	}

	return;
}

void func_82(int iParam0) // Position - 0x5537 Hash - 0x3705FAD4 ^0x3705FAD4
{
	BOOL flag;
	var txdName;

	if (iParam0 == 8)
	{
		func_46(129, 0, -1);
		return;
	}

	if (iParam0 == 9)
	{
		func_46(135, 0, -1);
		return;
	}

	if (iParam0 == 10)
	{
		func_46(136, 0, -1);
		return;
	}

	if (iParam0 == 11)
	{
		func_46(137, 0, -1);
		return;
	}

	if (iParam0 == 12)
	{
		func_85(8272, 0, -1, true, false);
		return;
	}

	if (iParam0 == 13)
	{
		func_85(8273, 0, -1, true, false);
		return;
	}

	if (iParam0 == 14)
	{
		func_85(8274, 0, -1, true, false);
		return;
	}

	if (iParam0 == 15)
	{
		func_85(8275, 0, -1, true, false);
		return;
	}

	if (iParam0 == 16)
	{
		func_85(8276, 0, -1, true, false);
		return;
	}

	if (iParam0 == 17)
	{
		func_85(8277, 0, -1, true, false);
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
	else if (IS_BIT_SET(Global_113648.f_20566.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_84() /*5568*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_84() /*5568*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(_("You have redeemed your promotion for ~a~"));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_83(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* func_83(int iParam0) // Position - 0x56B5 Hash - 0xA17D549C ^0xD8CD9282
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

int func_84() // Position - 0x57B6 Hash - 0xF9396AAC ^0xF9396AAC
{
	int num;

	num = 0;
	return num;
}

void func_85(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x57C3 Hash - 0x7D768555 ^0x693A841
{
	Hash statName;

	bParam4;
	statName = Global_2805027[iParam0 /*3*/][func_86(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_86(int iParam0) // Position - 0x57F3 Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_47();
	
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

void func_87(int iParam0) // Position - 0x5827 Hash - 0x35B495B7 ^0x35B495B7
{
	func_106(93, iParam0);
	func_106(29, iParam0);
	func_106(30, iParam0);
	return;
}

BOOL func_88(int iParam0) // Position - 0x5847 Hash - 0xA882C352 ^0xA882C352
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
		return func_90(129, -1);

	if (iParam0 == 9)
		return func_90(135, -1);

	if (iParam0 == 10)
		return func_90(136, -1);

	if (iParam0 == 11)
		return func_90(137, -1);

	if (iParam0 == 12)
	{
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
		num = func_89(8272, -1, 0);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_89(8273, -1, 0);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_89(8274, -1, 0);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_89(8275, -1, 0);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_89(8276, -1, 0);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_89(8277, -1, 0);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_113648.f_20566.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_84() /*5568*/].f_681.f_10, iParam0);
}

int func_89(int iParam0, int iParam1, int iParam2) // Position - 0x59ED Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_86(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_90(int iParam0, int iParam1) // Position - 0x5A2A Hash - 0x6099A833 ^0xF5FE5C03
{
	if (iParam1 == -1)
		iParam1 = func_47();

	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_91(BOOL bParam0) // Position - 0x5A46 Hash - 0xDC114C70 ^0xC626A2DE
{
	var outValue;
	int value;
	int outValue2;

	value = 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
		return 0;

	if (STATS::STAT_GET_INT(-656546900, &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(-2098183071, &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(1578119842, &outValue, -1))
		value = value + outValue;

	bParam0;
	outValue2 = 0;
	STATS::STAT_GET_INT(-422142831, &outValue2, -1);

	if (value > 0 && outValue2 / 2000000 != value / 2000000)
	{
		STATS::STAT_SET_INT(-422142831, value, true);
		func_45(27, value);
	}

	if (value < 200000000)
		return 0;

	func_92(27, 1);
	return 1;
}

int func_92(int iParam0, int iParam1) // Position - 0x5AFD Hash - 0x86FEA587 ^0x86FEA587
{
	if (iParam0 >= 78)
		return 0;

	return func_93(iParam0, iParam1);
}

int func_93(int iParam0, int iParam1) // Position - 0x5B18 Hash - 0x2EC23578 ^0x5A6CDDE0
{
	if (func_28(14) && !func_104(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_32414 != 0 && !Global_78558)
		return 0;

	if (func_103(&Global_4542597))
	{
		if (func_101(&Global_4542597, iParam0))
			return 0;
	
		if (func_94(&Global_4542597, iParam0))
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

BOOL func_94(var uParam0, int iParam1) // Position - 0x5BB5 Hash - 0x5631295D ^0x7E65A9A4
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_28(14) && !func_104(iParam1))
		return false;

	if (func_101(uParam0, iParam1))
		return false;

	if (func_100(uParam0) < 0f)
		func_99(uParam0, 0);

	func_97(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_95(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_95(var uParam0, int iParam1) // Position - 0x5C66 Hash - 0x80929C05 ^0xD2A2E174
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_28(14) && !func_104(iParam1))
		return 0;

	if (func_101(uParam0, iParam1))
		return 0;

	if (func_100(uParam0) < 0f)
		func_99(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_96(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_96(var uParam0, int iParam1) // Position - 0x5CE1 Hash - 0xFE39C18F ^0xFE39C18F
{
	return uParam0->[iParam1] == 78;
}

void func_97(var uParam0) // Position - 0x5CF2 Hash - 0x6E916534 ^0x6E916534
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_98(uParam0, i);
	}

	func_99(uParam0, Global_4542596 - 0.5f);
	return;
}

void func_98(var uParam0, int iParam1) // Position - 0x5D26 Hash - 0xE18ECB8F ^0xE18ECB8F
{
	uParam0->[iParam1] = 78;
	return;
}

void func_99(var uParam0, int iParam1) // Position - 0x5D36 Hash - 0x8B7064C5 ^0xE61DC398
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_100(var uParam0) // Position - 0x5D53 Hash - 0xD73B9827 ^0xE571889D
{
	return uParam0->f_80;
}

BOOL func_101(var uParam0, int iParam1) // Position - 0x5D5F Hash - 0xD7E1A70C ^0xD7E1A70C
{
	return func_102(uParam0, iParam1) != -1;
}

int func_102(var uParam0, int iParam1) // Position - 0x5D71 Hash - 0xA778BD6E ^0xA778BD6E
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_103(var uParam0) // Position - 0x5D9E Hash - 0x21364471 ^0xE4E379A4
{
	return uParam0->f_79 == 1;
}

BOOL func_104(int iParam0) // Position - 0x5DAC Hash - 0x5000025C ^0x5000025C
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

void func_105(Hash hParam0, int iParam1) // Position - 0x5DFC Hash - 0x1F80E88A ^0x1E13AAF3
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

void func_106(int iParam0, int iParam1) // Position - 0x5E1F Hash - 0xE9A65642 ^0xF9847A54
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

void func_107() // Position - 0x5E7C Hash - 0xFD5B61DC ^0xBD460DB8
{
	int outValue;

	if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
	{
		STATS::STAT_GET_INT(52740893, &outValue, -1);
	
		if (!Global_60536[0] == outValue)
			Global_60536[0] = outValue;
	
		STATS::STAT_GET_INT(1153264002, &outValue, -1);
	
		if (!Global_60536[1] == outValue)
			Global_60536[1] = outValue;
	
		STATS::STAT_GET_INT(-1921710979, &outValue, -1);
	
		if (!Global_60536[2] == outValue)
			Global_60536[2] = outValue;
	}

	return;
}

int func_108(int iParam0) // Position - 0x5EF1 Hash - 0x12DEE71A ^0xB4CACA6A
{
	return Global_2028[iParam0 /*29*/].f_17;
}

void func_109() // Position - 0x5F02 Hash - 0x44CF5FEA ^0x3780F0A2
{
	Vehicle vehiclePedIsIn;

	switch (iLocal_126)
	{
		case 0:
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(vehiclePedIsIn))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
					{
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_91[0]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
						}
					
						if (!PED::IS_PED_INJURED(uLocal_91[1]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_91[1]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_91[1]);
						}
					}
				
					func_67(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					iLocal_126 = iLocal_126 + 1;
				}
			}
			break;
	
		case 1:
			iLocal_126 = iLocal_126 + 1;
			break;
	
		case 2:
			if (!PED::IS_PED_INJURED(uLocal_91[1]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_84, 1f, -1, 1048576000, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], iLocal_99);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
				iLocal_125 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_126 = iLocal_126 + 1;
			}
			break;
	
		case 3:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_91[0], uLocal_84, 1f, -1, 1048576000, 0, 1193033728);
					iLocal_126 = iLocal_126 + 1;
				}
			}
			break;
	
		case 4:
			if (func_22() == 2)
			{
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
				{
					iLocal_125 = MISC::GET_GAME_TIMER() + 1000;
					iLocal_126 = 7;
				}
			}
			else if (func_22() == 1)
			{
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
				{
					iLocal_125 = MISC::GET_GAME_TIMER() + 1500;
					iLocal_126 = 7;
				}
			}
			else if (func_22() == 0)
			{
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
				{
					iLocal_125 = MISC::GET_GAME_TIMER() + 750;
					iLocal_126 = 7;
				}
			}
			break;
	
		case 5:
			iLocal_126 = iLocal_126 + 1;
			break;
	
		case 6:
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
			{
				if (func_22() == 2)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_91[0], uLocal_84, 1f, -1, 1048576000, 0, 1193033728);
						iLocal_125 = MISC::GET_GAME_TIMER() + 3500;
						iLocal_126 = iLocal_126 + 1;
					}
				}
			
				if (func_22() == 1 || func_22() == 0)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_91[0], uLocal_84, 1f, -1, 1048576000, 0, 1193033728);
						iLocal_125 = MISC::GET_GAME_TIMER() + 3500;
						iLocal_126 = iLocal_126 + 1;
					}
				}
			}
			break;
	
		case 7:
			if (!func_4())
				iLocal_126 = iLocal_126 + 1;
			break;
	
		case 8:
			func_78(func_22(), 1, 80, false, true);
			bLocal_130 = true;
			break;
	}

	return;
}

void func_110() // Position - 0x61B7 Hash - 0xC5103814 ^0x43C10ACF
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();

	switch (iLocal_126)
	{
		case 0:
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_RADAR(false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(veLocal_94))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
					{
						if (!PED::IS_PED_INJURED(uLocal_91[0]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_91[0]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 4000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
						}
					
						if (!PED::IS_PED_INJURED(uLocal_91[1]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_91[1]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_91[1]);
						}
					}
				
					TEXT_LABEL_ASSIGN_STRING(&uLocal_143, "", 24);
					func_68();
					SYSTEM::WAIT(0);
					func_67(&uLocal_173, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					iLocal_126 = iLocal_126 + 1;
				}
			}
			break;
	
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
			{
				caLocal_128 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1121.3348f, 2643.9084f, 37.862f, 1.5062f, 0f, 20.274f, 33.0256f, false, 2);
				caLocal_129 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1121.3016f, 2643.9983f, 37.8919f, 1.5062f, 0f, 18.7019f, 33.0256f, false, 2);
				CAM::SHAKE_CAM(caLocal_128, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(caLocal_129, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_129, caLocal_128, 2500, 0, 0);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				MISC::CLEAR_AREA(uLocal_81, 8f, true, false, false, false);
				ENTITY::SET_ENTITY_COORDS(veLocal_94, 1120.5507f, 2647.3071f, 36.9963f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(veLocal_94, 179.7675f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_94, 1084227584);
				iLocal_125 = MISC::GET_GAME_TIMER() + 2500;
				iLocal_126 = iLocal_126 + 1;
			}
			break;
	
		case 2:
			if (iLocal_125 - 500 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_91[1]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[1], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_84, 1f, -1, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], iLocal_99);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
						PED::SET_PED_KEEP_TASK(uLocal_91[1], true);
					}
				}
			}
		
			if (iLocal_125 - 1000 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[0], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_84 - { 0f, 0f, 1f }, 1f, -1, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], iLocal_99);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
						PED::SET_PED_KEEP_TASK(uLocal_91[0], true);
					}
				}
			}
		
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_CAM_PARAMS(caLocal_128, 1105.8485f, 2664.653f, 38.047f, 3.6983f, 0.0242f, -140.4768f, 41.7126f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(caLocal_129, 1105.9995f, 2664.4695f, 38.0625f, 3.6984f, 0.0242f, -140.4769f, 41.7126f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_129, caLocal_128, 5000, 0, 0);
				STREAMING::NEW_LOAD_SCENE_STOP();
				iLocal_125 = MISC::GET_GAME_TIMER() + 6000;
				iLocal_126 = iLocal_126 + 1;
			}
			break;
	
		case 3:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_CAM_PARAMS(caLocal_128, 1122.3701f, 2646.1082f, 38.3339f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(caLocal_129, 1122.3378f, 2646.1575f, 38.3281f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_129, caLocal_128, 1500, 1, 1);
			
				if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_91[0], 1141.1556f, 2643.2046f, 37.1487f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uLocal_91[0], 262.7369f);
					ENTITY::SET_ENTITY_COORDS(uLocal_91[1], 1140.152f, 2644.149f, 37.1487f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uLocal_91[1], 262.1522f);
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			
				if (func_22() == 2)
					func_67(&uLocal_173, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0);
				else if (func_22() == 1)
					func_67(&uLocal_173, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0);
				else if (func_22() == 0)
					func_67(&uLocal_173, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0);
			
				iLocal_125 = MISC::GET_GAME_TIMER() + 1700;
				iLocal_126 = iLocal_126 + 1;
			}
			break;
	
		case 4:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
				iLocal_126 = iLocal_126 + 1;
			break;
	
		case 5:
			iLocal_126 = 7;
			break;
	
		case 6:
			if (!func_4())
			{
				if (func_22() == 2)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						iLocal_125 = MISC::GET_GAME_TIMER() + 5500;
						iLocal_126 = iLocal_126 + 1;
					}
				}
			
				if (func_22() == 1 || func_22() == 0)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						iLocal_125 = MISC::GET_GAME_TIMER() + 5500;
						iLocal_126 = iLocal_126 + 1;
					}
				}
			}
			break;
	
		case 7:
			STREAMING::NEW_LOAD_SCENE_STOP();
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
			func_113(false, true, true, false, false, false, false);
			PED::DELETE_PED(&uLocal_91[0]);
			PED::DELETE_PED(&uLocal_91[1]);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_94, 7);
		
			if (bLocal_131)
			{
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_94, false))
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(veLocal_94, true);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
			}
			else
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);
			}
		
			CAM::SET_CAM_ACTIVE(caLocal_128, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
			HUD::DISPLAY_HUD(true);
			HUD::DISPLAY_RADAR(true);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_78(func_22(), 1, 40, false, true);
			bLocal_130 = true;
	}

	if (iLocal_126 != 0)
	{
		if (func_111(1000))
		{
			func_68();
			bLocal_131 = true;
			iLocal_126 = 7;
		}
	}

	return;
}

BOOL func_111(int iParam0) // Position - 0x6797 Hash - 0x7FAC01B4 ^0x9388B6EC
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
			Global_27 = MISC::GET_GAME_TIMER();
	
		Global_28 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_27 > iParam0)
		{
			if (func_112())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_112() // Position - 0x67E1 Hash - 0x57459B9C ^0x9A36D842
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

void func_113(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x6813 Hash - 0x787E640E ^0x67C15509
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_120(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_19())
				Global_20383.f_1 = 3;
		
			Global_21725 = 5;
		}
	
		func_119(true, bParam3, bParam2, false);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_120(0);
		HUD::THEFEED_RESUME();
		Global_63368 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_119(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_117(PLAYER::PLAYER_ID()) && !func_115(PLAYER::PLAYER_ID(), 0) && !func_114() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_117(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		Global_78556 = 0;
	}

	return;
}

BOOL func_114() // Position - 0x6960 Hash - 0xAA7793E3 ^0x3F62CDC8
{
	return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

BOOL func_115(Player plParam0, int iParam1) // Position - 0x697A Hash - 0x5A3B86CC ^0x2CFA58CE
{
	BOOL flag;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_116(-1, false) == 8;
	else
		flag = Global_1853910[plParam0 /*862*/].f_205 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_116(int iParam0, BOOL bParam1) // Position - 0x69C5 Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_47();

	if (Global_1575040[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574912[num2];
		bParam1;
	}

	return num;
}

BOOL func_117(Player plParam0) // Position - 0x6A06 Hash - 0x68897CDD ^0x62820466
{
	if (func_115(plParam0, 0))
		return true;

	if (func_118())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2))
		return true;

	return false;
}

BOOL func_118() // Position - 0x6A45 Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_119(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6A53 Hash - 0x3167F4C7 ^0xCE6B9B6A
{
	int num;

	num = 0;

	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			num = 1;
		}
	}

	return num;
}

void func_120(int iParam0) // Position - 0x6A86 Hash - 0x1B2EEE72 ^0xEDBC1F9D
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 13);
	else
		MISC::CLEAR_BIT(&Global_8253, 13);

	return;
}

void func_121() // Position - 0x6AA9 Hash - 0x5B69524D ^0x9A42D110
{
	switch (iLocal_126)
	{
		case 0:
			if (!func_4())
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
				}
			
				if (bLocal_108)
					func_67(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
				else
					func_67(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
			
				iLocal_126 = iLocal_126 + 1;
			}
			break;
	
		case 1:
			iLocal_125 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_126 = iLocal_126 + 1;
			break;
	
		case 2:
			if (func_22() == 0)
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
					iLocal_126 = iLocal_126 + 1;
			else if (func_22() == 1)
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
					iLocal_126 = iLocal_126 + 1;
			else if (func_22() == 2)
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
					iLocal_126 = iLocal_126 + 1;
			break;
	
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_84, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], iLocal_99);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
				PED::SET_PED_KEEP_TASK(uLocal_91[0], true);
				iLocal_125 = MISC::GET_GAME_TIMER() + 2000;
				iLocal_126 = iLocal_126 + 1;
			}
			break;
	
		case 4:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
				iLocal_126 = iLocal_126 + 1;
			break;
	
		case 5:
			func_78(func_22(), 1, 80, false, true);
			bLocal_130 = true;
			break;
	}

	return;
}

void func_122() // Position - 0x6C88 Hash - 0xA7D04380 ^0xC2A1EE75
{
	Vehicle vehiclePedIsIn;

	switch (iLocal_126)
	{
		case 0:
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(vehiclePedIsIn) && !func_4())
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_91[0]);
						PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
					}
				
					if (bLocal_108)
						func_67(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					else
						func_67(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				
					iLocal_126 = iLocal_126 + 1;
				}
			}
			break;
	
		case 1:
			iLocal_126 = iLocal_126 + 1;
			break;
	
		case 2:
			iLocal_126 = iLocal_126 + 1;
			break;
	
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_84, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], iLocal_99);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
				PED::SET_PED_KEEP_TASK(uLocal_91[0], true);
			}
		
			func_70(uLocal_91[0], 120000, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_125 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_126 = iLocal_126 + 1;
			break;
	
		case 4:
			iLocal_125 = MISC::GET_GAME_TIMER() + 3000;
		
			if (func_22() == 0)
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
					iLocal_126 = iLocal_126 + 1;
			else if (func_22() == 1)
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
					iLocal_126 = iLocal_126 + 1;
			else if (func_22() == 2)
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
					iLocal_126 = iLocal_126 + 1;
			break;
	
		case 5:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
				iLocal_126 = iLocal_126 + 1;
			break;
	
		case 6:
			func_78(func_22(), 1, 80, false, true);
			bLocal_130 = true;
			break;
	}

	return;
}

void func_123() // Position - 0x6EBB Hash - 0xE480315 ^0x3E869724
{
	switch (iLocal_126)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_94, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(veLocal_94) && !func_4())
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_91[0]);
						PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
					}
				
					if (bLocal_108)
						func_67(&uLocal_173, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					else
						func_67(&uLocal_173, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				
					iLocal_126 = iLocal_126 + 1;
				}
			}
			break;
	
		case 1:
			iLocal_126 = iLocal_126 + 1;
			break;
	
		case 2:
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_84, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], iLocal_99);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
				PED::SET_PED_KEEP_TASK(uLocal_91[0], true);
				func_70(uLocal_91[0], 120000, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_125 = MISC::GET_GAME_TIMER() + 3000;
				iLocal_126 = iLocal_126 + 1;
			}
			break;
	
		case 3:
			iLocal_125 = MISC::GET_GAME_TIMER() + 3000;
		
			if (func_22() == 0)
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
					iLocal_126 = iLocal_126 + 1;
			else if (func_22() == 1)
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
					iLocal_126 = iLocal_126 + 1;
			else if (func_22() == 2)
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
					iLocal_126 = iLocal_126 + 1;
			break;
	
		case 4:
			if (iLocal_125 < MISC::GET_GAME_TIMER())
				iLocal_126 = iLocal_126 + 1;
			break;
	
		case 5:
			iLocal_126 = iLocal_126 + 1;
			break;
	
		case 6:
			iLocal_126 = iLocal_126 + 1;
			break;
	
		case 7:
			func_78(func_22(), 1, 80, false, true);
			bLocal_130 = true;
			break;
	}

	return;
}

BOOL func_124(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x70F2 Hash - 0xF0D380FF ^0x29DD7336
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

void func_125() // Position - 0x71D7 Hash - 0x5D5DDD14 ^0xEDDB1C45
{
	BOOL flag;
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	BOOL flag2;
	eViewModeContext camActiveViewModeContext2;
	eViewMode camViewModeForContext2;

	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_enter_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 3))
	{
		flag = false;
		camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	
		if (camActiveViewModeContext != ON_FOOT)
		{
			camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);
		
			if (camViewModeForContext == FIRST_PERSON)
				flag = true;
		}
	
		if (func_130(64) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 86) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 71) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 72) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 76) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 73) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 68) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 75) || flag)
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}

	switch (iLocal_346)
	{
		case 0:
			if (func_129())
			{
				TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], uLocal_91[1], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_91[1], uLocal_91[0], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
			
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_HC", 4, 0, 0, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, -1, 1, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_91[0], iLocal_99);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, -1, 1, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_91[1], iLocal_99);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
					iLocal_347 = MISC::GET_GAME_TIMER();
					iLocal_346 = iLocal_346 + 1;
				}
			}
			break;
	
		case 1:
			if (!func_4())
			{
				iLocal_347 = MISC::GET_GAME_TIMER();
				iLocal_346 = iLocal_346 + 1;
			}
			break;
	
		case 2:
			if (func_129())
			{
				if (MISC::GET_GAME_TIMER() - iLocal_347 > 5000)
				{
					if (func_67(&uLocal_173, "REDR2AU", "REDR2_CH", 4, 0, 0, 0))
					{
						iLocal_347 = MISC::GET_GAME_TIMER();
						iLocal_346 = iLocal_346 + 1;
					}
				}
			}
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() - iLocal_347 > 15000)
			{
				if (func_129())
				{
					TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, -1, 0, 0, false, false, false);
					iLocal_346 = iLocal_346 + 1;
				}
			}
			break;
	
		case 4:
			if (func_129())
			{
				func_127();
			
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_intro_m") > 0.9f)
					{
						TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, false, false, false);
						TASK::TASK_PLAY_ANIM(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, false, false, false);
						iLocal_347 = MISC::GET_GAME_TIMER();
						iLocal_346 = iLocal_346 + 1;
					}
				}
			}
			else if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_91[0]);
				TASK::CLEAR_PED_TASKS(uLocal_91[1]);
				iLocal_346 = 3;
			}
			break;
	
		case 5:
			if (func_129())
			{
				func_127();
				func_126();
			
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uLocal_91[1], false), false))
				{
					if (MISC::GET_GAME_TIMER() - iLocal_347 > 15000)
					{
						flag2 = false;
						camActiveViewModeContext2 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
					
						if (camActiveViewModeContext2 != ON_FOOT)
						{
							camViewModeForContext2 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext2);
						
							if (camViewModeForContext2 == FIRST_PERSON)
								flag2 = true;
						}
					
						if (!flag2)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
							TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, -1, 1, 0, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_99);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
						}
					
						if (func_22() == 0)
						{
							if (func_67(&uLocal_173, "REDR2AU", "REDR2_PSM", 4, 0, 0, 0))
							{
								iLocal_347 = MISC::GET_GAME_TIMER();
								iLocal_346 = iLocal_346 + 1;
							}
						}
						else if (func_22() == 1)
						{
							if (func_67(&uLocal_173, "REDR2AU", "REDR2_PSF", 4, 0, 0, 0))
							{
								iLocal_347 = MISC::GET_GAME_TIMER();
								iLocal_346 = iLocal_346 + 1;
							}
						}
						else if (func_22() == 2)
						{
							if (func_67(&uLocal_173, "REDR2AU", "REDR2_PST", 4, 0, 0, 0))
							{
								iLocal_347 = MISC::GET_GAME_TIMER() + 14000;
								iLocal_346 = iLocal_346 + 1;
							}
						}
					}
				}
			}
			break;
	
		case 6:
			func_127();
			func_126();
		
			if (MISC::GET_GAME_TIMER() - iLocal_347 > 5000 && func_129())
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uLocal_91[1], false), false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m") > 0.9f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3))
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, -1, 0, 0, false, false, false);
						
							TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, -1, 0, 0, false, false, false);
							iLocal_346 = iLocal_346 + 1;
						}
					}
				}
			}
			break;
	
		case 7:
			func_127();
		
			if (func_129())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.25f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") > 0.2f)
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], false), 0, 0f, 0f, 20f, -0.4f, 0f, 0f, 0, true, true, true, false, true);
						iLocal_347 = MISC::GET_GAME_TIMER();
						iLocal_346 = iLocal_346 + 1;
					}
				}
			}
			break;
	
		case 8:
			func_127();
		
			if (func_129())
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uLocal_91[1], false), false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.525f)
						{
							TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, false, false, false);
							iLocal_346 = 6;
						}
					}
				}
			}
		
			if (MISC::GET_GAME_TIMER() - iLocal_347 > 10000)
			{
				if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_91[0]);
					TASK::CLEAR_PED_TASKS(uLocal_91[1]);
					iLocal_347 = MISC::GET_GAME_TIMER();
					iLocal_346 = iLocal_346 + 1;
				}
			}
			break;
	}

	return;
}

void func_126() // Position - 0x78C0 Hash - 0xC2A6AE73 ^0x583BD251
{
	if (!PED::IS_PED_INJURED(uLocal_91[1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], false), false))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.15f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.1f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.35f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.3f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.65f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.6f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.9f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.85f)
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], false), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, true, true, true, false, true);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SUSPENSION_SCRIPT_FORCE", PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], false), 0, false, 0);
				}
			}
		}
	}

	return;
}

void func_127() // Position - 0x7A16 Hash - 0xF4F02F08 ^0x941C5F21
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_128();
	return;
}

void func_128() // Position - 0x7A26 Hash - 0x9A142650 ^0x461C197C
{
	Global_23131.f_134 = 1;
	return;
}

BOOL func_129() // Position - 0x7A34 Hash - 0x740AD37E ^0x2CADF901
{
	Vehicle vehiclePedIsIn;

	if (!PED::IS_PED_INJURED(uLocal_91[1]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[1], false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(uLocal_91[1], false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (!PED::IS_PED_INJURED(uLocal_91[0]))
					if (PED::IS_PED_IN_VEHICLE(uLocal_91[0], vehiclePedIsIn, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 2, false) == uLocal_91[0] && VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 1, false) == uLocal_91[1])
							return true;
		}
	}

	return false;
}

int func_130(int iParam0) // Position - 0x7AB1 Hash - 0xD9EDA547 ^0x2CD84490
{
	int num;
	int num2;

	num = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X) - 128;
	num2 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_Y) - 128;

	if (num < iParam0 && num > -iParam0 && num2 < iParam0 && num2 > -iParam0)
	{
	}
	else
	{
		return 1;
	}

	return 0;
}

BOOL func_131() // Position - 0x7B01 Hash - 0x6EF86551 ^0x652A007C
{
	if (func_22() == 2)
	{
		if (func_65())
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

BOOL func_132(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x7B7C Hash - 0xBFD4BC13 ^0xF257BB49
{
	if (func_22() == 2)
	{
		if (func_65() && !Global_32405)
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

void func_133() // Position - 0x7C09 Hash - 0x9057EBEC ^0xD4EA3E33
{
	if (!bLocal_108)
	{
		if (!func_33("REDR1_SWV") && !func_33("REDR1_COM") && !func_33("REDR1_BANT1") && !func_33("REDR1_SIK") && !func_33("REDR2_DC") && !func_33("REDR1_OFFR") && !func_33("REDR2_OFFR") && !func_33("REDR1_CULT") && !func_33("REDR2_CULT"))
			func_5(true);
	
		if (bLocal_110 && !bLocal_134 && MISC::GET_GAME_TIMER() - iLocal_171 > 9000)
			if (!func_4())
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_BANT1", 4, 0, 0, 0))
					bLocal_134 = true;
	}

	if (bLocal_134 && !bLocal_135)
	{
		if (!func_4())
		{
			if (func_22() == 0)
				func_67(&uLocal_173, "REDR1AU", "REDR1_RESPM", 4, 0, 0, 0);
			else if (func_22() == 1)
				func_67(&uLocal_173, "REDR1AU", "REDR1_RESPF", 4, 0, 0, 0);
			else if (func_22() == 2)
				func_67(&uLocal_173, "REDR1AU", "REDR1_RESPT", 4, 0, 0, 0);
		
			iLocal_149 = MISC::GET_GAME_TIMER() + 6000;
			bLocal_135 = true;
		}
	}

	if (!bLocal_108)
	{
		if (bLocal_134 && !bLocal_133 && iLocal_149 < MISC::GET_GAME_TIMER())
		{
			if (!func_4())
			{
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_COM", 4, 0, 0, 0))
				{
					bLocal_135 = false;
					bLocal_133 = true;
				}
			}
		}
	}
	else if (bLocal_108 && !bLocal_132 && iLocal_149 < MISC::GET_GAME_TIMER())
	{
		if (!func_4())
		{
			if (func_67(&uLocal_173, "REDR1AU", "REDR1_BANT2", 4, 0, 0, 0))
			{
				bLocal_135 = false;
				bLocal_132 = true;
			}
		}
	}

	return;
}

void func_134() // Position - 0x7DC4 Hash - 0x890A084B ^0x56B9B791
{
	if (func_2() && iLocal_111 < 2)
	{
		if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) > 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) < 100 || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			if (!func_33("REDR1_SWV"))
			{
				func_5(false);
				func_68();
				SYSTEM::WAIT(0);
				func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				iLocal_163 = iLocal_163 + 6;
			}
		}
	
		func_135(uLocal_160, MISC::GET_GAME_TIMER() - iLocal_159);
	}

	if (iLocal_163 > 17)
		bLocal_109 = true;

	return;
}

void func_135(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x7E55 Hash - 0x5ABF4E93 ^0xD6C38083
{
	var entitySpeedVector;
	float unk;

	if (func_2())
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			entitySpeedVector = { ENTITY::GET_ENTITY_SPEED_VECTOR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) };

	num = { entitySpeedVector - uParam0 };
	num = { func_136(num, iParam3) };

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !func_33("REDR1_SWV"))
			{
				if (iLocal_165 == -1)
				{
					iLocal_165 = MISC::GET_GAME_TIMER() + 400;
				}
				else if (iLocal_165 < MISC::GET_GAME_TIMER())
				{
					iLocal_163 = iLocal_163 + 3;
					func_5(false);
					func_68();
					SYSTEM::WAIT(0);
					func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				}
			}
			else
			{
				iLocal_165 = -1;
			}
		}
	}

	if (num.f_1 > 0.025f)
	{
		iLocal_163 = iLocal_163 + 1;
	
		if (!func_33("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(false);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}

	if (num.f_1 < -0.025f)
	{
		iLocal_163 = iLocal_163 + 1;
	
		if (!func_33("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(false);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}

	if (num > 0.025f)
	{
		iLocal_163 = iLocal_163 + 1;
	
		if (!func_33("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(false);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}

	if (num < -0.025f)
	{
		iLocal_163 = iLocal_163 + 1;
	
		if (!func_33("REDR1_SWV") && iLocal_111 < 4)
		{
			func_5(false);
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}

	return;
}

Vector3 func_136(float fParam0, var uParam1, var uParam2, int iParam3) // Position - 0x8039 Hash - 0x50005F3A ^0xD4CBD7AC
{
	float num;

	num = fParam0 / (float)iParam3;
	num.f_1 = fParam0.f_1 / (float)iParam3;
	num.f_2 = fParam0.f_2 / (float)iParam3;
	return num;
}

void func_137() // Position - 0x8065 Hash - 0x7D711009 ^0xEEDFB6A7
{
	float entityAnimCurrentTime;

	if (!PED::IS_PED_INJURED(uLocal_91[0]))
	{
		switch (iLocal_111)
		{
			case 0:
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_SIK", 4, 0, 0, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
				
					SYSTEM::SETTIMERB(0);
					iLocal_111 = iLocal_111 + 1;
				}
				break;
		
			case 1:
				if (SYSTEM::TIMERB() > 3000 || !func_4())
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_91[0]);
						TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 8f, -8f, -1, 0, 0, false, false, false);
						iLocal_111 = iLocal_111 + 1;
					}
				}
				break;
		
			case 2:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 3))
				{
					entityAnimCurrentTime = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[0], "random@drunk_driver_1", sLocal_114);
				
					if (entityAnimCurrentTime > 0.243f && entityAnimCurrentTime < 0.28f)
					{
						if (!bLocal_105)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", uLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, false, false, false);
							bLocal_105 = true;
						}
					}
					else if (entityAnimCurrentTime > 0.295f && entityAnimCurrentTime < 0.37f)
					{
						if (!bLocal_106)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", uLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, false, false, false);
							bLocal_106 = true;
						
							if (func_22() == 0)
								func_67(&uLocal_173, "REDR1AU", "REDR1_SIKM", 4, 0, 0, 0);
							else if (func_22() == 1)
								func_67(&uLocal_173, "REDR1AU", "REDR1_SIKF", 4, 0, 0, 0);
							else if (func_22() == 2)
								func_67(&uLocal_173, "REDR1AU", "REDR1_SIKT", 4, 0, 0, 0);
						}
					}
					else if (entityAnimCurrentTime > 0.49f && entityAnimCurrentTime < 0.55f)
					{
						if (!bLocal_107)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", uLocal_91[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, false, false, false);
							bLocal_107 = true;
						}
					}
				
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_91[0], "random@drunk_driver_1", sLocal_114) > 0.8f)
						iLocal_111 = iLocal_111 + 1;
				}
				break;
		
			case 3:
				!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 3);
			
				if (func_67(&uLocal_173, "REDR1AU", "REDR1_APO", 4, 0, 0, 0))
				{
					TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 2f, -4f, -1, 1, 0, false, false, false);
					bLocal_105 = false;
					iLocal_111 = iLocal_111 + 1;
				}
				break;
		
			case 4:
				AUDIO::STOP_SOUND(iLocal_112);
				bLocal_108 = true;
				break;
		}
	}

	return;
}

void func_138() // Position - 0x82EF Hash - 0x49B3CD8C ^0xFBF920E7
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_168)
		{
			iLocal_166 = MISC::GET_GAME_TIMER();
			bLocal_168 = true;
		}
		else
		{
			iLocal_167 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_167 = 0;
		bLocal_168 = false;
		bLocal_169 = false;
	}

	if (iLocal_167 - iLocal_166 > 50000 && !bLocal_169)
	{
		if (iLocal_54 == 1)
		{
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR1AU", "REDR1_WLK", 4, 0, 0, 0);
		}
	
		bLocal_169 = true;
	}

	if (iLocal_167 - iLocal_166 > 60000 && bLocal_169)
	{
		if (iLocal_54 == 2)
		{
			func_68();
			SYSTEM::WAIT(0);
			func_67(&uLocal_173, "REDR2AU", "REDR2_FU", 4, 0, 0, 0);
		}
	
		if (!PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
		{
			TASK::TASK_WANDER_STANDARD(uLocal_91[0], 1193033728, 0);
			func_70(uLocal_91[0], 120000, false);
			PED::SET_PED_KEEP_TASK(uLocal_91[0], true);
		
			if (PED::IS_PED_IN_GROUP(uLocal_91[0]))
				PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
		
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_91[1], uLocal_91[0], 0f, 1f, 0f, 1f, -1, 1036831949, true);
			func_70(uLocal_91[1], 120000, false);
			PED::SET_PED_KEEP_TASK(uLocal_91[1], true);
		
			if (PED::IS_PED_IN_GROUP(uLocal_91[1]))
				PED::REMOVE_PED_FROM_GROUP(uLocal_91[1]);
		}
	
		func_66();
	}

	return;
}

void func_139() // Position - 0x8438 Hash - 0x6EB72E73 ^0xF3195209
{
	if (iLocal_54 == 1)
	{
		if (!PED::IS_PED_INJURED(uLocal_91[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 150f, 150f, 150f, false, true, 0))
				func_66();
		
			if (func_149() || PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_GROUP(uLocal_91[0]))
				{
					PED::SET_PED_AS_GROUP_MEMBER(uLocal_91[0], func_63());
					PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_91[0], true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_91[0], 0);
				}
			}
			else if (PED::IS_PED_IN_GROUP(uLocal_91[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
			}
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(uLocal_91[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_114, 3) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uLocal_91[0]))
						TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 2f, -4f, -1, 1, 0, false, false, false);
				
					if (func_152())
					{
						func_62(0);
						bLocal_120 = false;
					}
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 3))
				{
					TASK::STOP_ANIM_PLAYBACK(uLocal_91[0], 0, false);
				}
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[0], false))
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_91[0], "random@drunk_driver_1", sLocal_113, 3))
						TASK::STOP_ANIM_PLAYBACK(uLocal_91[0], 0, false);
			
				if (func_4() && !bLocal_120)
				{
					func_62(1);
					bLocal_120 = true;
				}
			}
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 8f, 8f, 8f, false, true, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_155[0]))
					HUD::REMOVE_BLIP(&uLocal_155[0]);
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_102))
					blLocal_102 = func_142(uLocal_81, true);
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_155[0]))
					uLocal_155[0] = func_167(uLocal_91[0], false, 145);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_102))
					HUD::REMOVE_BLIP(&blLocal_102);
			}
		}
	}

	if (iLocal_54 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_94, false) && !PED::IS_PED_INJURED(uLocal_91[0]) && !PED::IS_PED_INJURED(uLocal_91[1]))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 150f, 150f, 150f, false, true, 0) || !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[1], 150f, 150f, 150f, false, true, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_91[0]))
					{
						if (PED::IS_PED_IN_GROUP(uLocal_91[0]))
							PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
					
						TASK::CLEAR_PED_TASKS(uLocal_91[0]);
						TASK::TASK_SMART_FLEE_PED(uLocal_91[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						func_70(uLocal_91[0], 120000, false);
						PED::SET_PED_KEEP_TASK(uLocal_91[0], true);
					}
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[1]))
				{
					if (!PED::IS_PED_INJURED(uLocal_91[1]))
					{
						if (PED::IS_PED_IN_GROUP(uLocal_91[1]))
							PED::REMOVE_PED_FROM_GROUP(uLocal_91[1]);
					
						TASK::CLEAR_PED_TASKS(uLocal_91[1]);
						TASK::TASK_SMART_FLEE_PED(uLocal_91[1], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						func_70(uLocal_91[1], 120000, false);
						PED::SET_PED_KEEP_TASK(uLocal_91[1], true);
					}
				}
			
				func_66();
			}
		
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_94, false))
			{
				if (PED::IS_PED_IN_VEHICLE(uLocal_91[0], veLocal_94, false) && PED::IS_PED_IN_VEHICLE(uLocal_91[1], veLocal_94, false))
				{
					if (func_152())
					{
						func_62(0);
						bLocal_120 = false;
					}
				
					if (!HUD::DOES_BLIP_EXIST(blLocal_102))
						blLocal_102 = func_142(uLocal_81, true);
				}
			
				if (HUD::DOES_BLIP_EXIST(blLocal_158))
					HUD::REMOVE_BLIP(&blLocal_158);
			}
			else
			{
				if (func_4() && !bLocal_120 && iLocal_64 > 3)
				{
					func_62(1);
					bLocal_120 = true;
				}
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_158))
					blLocal_158 = func_150(veLocal_94, false, false);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_102))
					HUD::REMOVE_BLIP(&blLocal_102);
			}
		}
	}

	return;
}

void func_140() // Position - 0x8837 Hash - 0x3167FC12 ^0xB4BDCE1E
{
	if (func_22() == 2)
	{
		if (!Global_32404)
		{
			func_141(_("Trevor can sometimes deliver Random Event passengers to the Altruist Cult, located at ~BLIP_ALTRUIST~"), -1);
			Global_32404 = true;
		}
	}

	return;
}

void func_141(char* sParam0, int iParam1) // Position - 0x885B Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

Blip func_142(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x8872 Hash - 0xF4E99477 ^0xFAB7E8FB
{
	Blip vehicleWheelType;

	vehicleWheelType = VEHICLE::GET_VEHICLE_WHEEL_TYPE(uParam0);
	HUD::SET_BLIP_SCALE(vehicleWheelType, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(vehicleWheelType, bParam3);
	return vehicleWheelType;
}

var func_143(BOOL bParam0, var uParam1, var uParam2) // Position - 0x889E Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_144() // Position - 0x88B5 Hash - 0x2E6F32C2 ^0x2F6986DF
{
	if (!PED::IS_PED_INJURED(uLocal_91[0]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_149())
			{
				if (PED::IS_PED_IN_GROUP(uLocal_91[0]))
					PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_91[0], SCRIPT_TASK_GO_TO_ENTITY) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_91[0], SCRIPT_TASK_GO_TO_ENTITY) != 0)
					TASK::TASK_GO_TO_ENTITY(uLocal_91[0], PLAYER::PLAYER_PED_ID(), -1, 6f, 1073741824, 1073741824, 0);
			
				if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[0], false))
					TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_91[0], 0, 0);
			
				if (!bLocal_122)
				{
					if (!func_4())
					{
						func_67(&uLocal_173, "REHH1AU", "REDR1_NO", 4, 0, 0, 0);
						bLocal_122 = true;
					}
				}
			}
			else
			{
				bLocal_122 = false;
			
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_91[0], SCRIPT_TASK_GO_TO_ENTITY) == 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_91[0], SCRIPT_TASK_GO_TO_ENTITY) == 0)
					TASK::CLEAR_PED_TASKS(uLocal_91[0]);
			}
		}
		else if (!PED::IS_PED_IN_GROUP(uLocal_91[0]))
		{
			PED::SET_PED_AS_GROUP_MEMBER(uLocal_91[0], func_63());
			PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_91[0], true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_91[0], 0);
		}
	}

	return;
}

float func_145(Ped pedParam0, Vehicle veParam1, BOOL bParam2) // Position - 0x89D9 Hash - 0x7B2C17A2 ^0xDF922C6D
{
	Vector3 entityCoords;
	Vector3 unk;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	if (!ENTITY::IS_ENTITY_DEAD(veParam1, false))
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(veParam1, true) };
	else
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(veParam1, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}

void func_146() // Position - 0x8A37 Hash - 0xCDEEC49D ^0xCDEEC49D
{
	if (!func_64())
		if (func_22() == 2)
			Global_32402 = 1;

	return;
}

void func_147(Ped pedParam0, var uParam1) // Position - 0x8A53 Hash - 0xF1B2524E ^0xACDEC5D4
{
	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(pedParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
				TASK::TASK_PERFORM_SEQUENCE(pedParam0, iLocal_99);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
				*uParam1 = *uParam1 + 1;
			}
			break;
	
		case 1:
			if (!PED::IS_PED_INJURED(pedParam0))
				if (PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 45f))
					*uParam1 = *uParam1 + 1;
			break;
	
		case 2:
			if (!PED::IS_PED_INJURED(pedParam0))
				if (!PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 45f))
					*uParam1 = 0;
			break;
	}

	return;
}

void func_148() // Position - 0x8B0C Hash - 0xF6336CBB ^0xEE40ACCE
{
	if (func_22() == 0)
	{
		if (func_67(&uLocal_173, "REDR1AU", "REDR1_OFFA", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_170 = iLocal_170 + 1;
		}
	}
	else if (func_22() == 1)
	{
		if (func_67(&uLocal_173, "REDR1AU", "REDR1_OFFB", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_170 = iLocal_170 + 1;
		}
	}
	else if (func_22() == 2)
	{
		if (func_67(&uLocal_173, "REDR1AU", "REDR1_OFFC", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_170 = iLocal_170 + 1;
		}
	}

	return;
}

BOOL func_149() // Position - 0x8B8F Hash - 0xE2AA9FDA ^0xF4FE63D8
{
	int num;

	if (iLocal_54 == 1)
		num = 1;

	if (iLocal_54 == 2)
		num = 2;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			if (!PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), 782665360))
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= num)
					return true;
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
			if (!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != 782665360)
				return true;

	return false;
}

Blip func_150(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8CE8 Hash - 0x177BFEFF ^0x177BFEFF
{
	return func_151(veParam0, !bParam1, bParam2);
}

Blip func_151(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8CFB Hash - 0x2E5A72B ^0x64F26CC0
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(veParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

BOOL func_152() // Position - 0x8D9F Hash - 0xB8E6BAC9 ^0xB8E6BAC9
{
	if (Global_22736 == 1)
		return true;

	return false;
}

void func_153() // Position - 0x8DB6 Hash - 0xEC26FB33 ^0x3D19F2F3
{
	if (!PED::IS_PED_INJURED(uLocal_91[0]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_91[0], 30f, 30f, 30f, false, true, 0))
		{
			if (!bLocal_115)
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_DCB", 4, 0, 0, 0))
					bLocal_115 = true;
		
			if (!bLocal_116)
				if (func_67(&uLocal_173, "REDR2AU", "REDR2_DCC", 4, 0, 0, 0))
					bLocal_116 = true;
		}
	}

	return;
}

void func_154() // Position - 0x8E27 Hash - 0x5C7A6098 ^0x6D5B83C0
{
	if (HUD::DOES_BLIP_EXIST(blLocal_151))
		HUD::REMOVE_BLIP(&blLocal_151);

	for (iLocal_63 = 0; iLocal_63 <= iLocal_90 - 1; iLocal_63 = iLocal_63 + 1)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_155[iLocal_63]))
		{
			uLocal_155[iLocal_63] = func_167(uLocal_91[iLocal_63], false, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_155[iLocal_63], false);
		}
	}

	return;
}

void func_155() // Position - 0x8E7F Hash - 0x1FAB512B ^0xDEDC2B21
{
	AUDIO::START_PRELOADED_CONVERSATION();
	Global_22717 = 0;
	return;
}

void func_156(BOOL bParam0) // Position - 0x8E8F Hash - 0x6779F76 ^0xC759465F
{
	if (bParam0)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_112704, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_112698 = 1;
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_112704, "NULL", 24);
		Global_112698 = 0;
	}

	return;
}

int func_157(BOOL bParam0) // Position - 0x8EBB Hash - 0x3A78A0E1 ^0x904ABCF1
{
	if (func_160())
	{
		Global_113638 = true;
		Global_113635 = MISC::GET_GAME_TIMER();
	
		if (func_49(Global_113637))
			func_158(0);
	
		HUD::SET_MISSION_NAME(true, _("Random Event"));
	
		if (bParam0 && func_49(Global_113637))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_158(int iParam0) // Position - 0x8F0E Hash - 0x3B4E6AAB ^0xDE553B62
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!DECORATOR::DECOR_GET_BOOL())
				{
					func_141(func_159(iParam0), -1);
					Global_113648.f_24997.f_2 = Global_113648.f_24997.f_2 + 1;
					MISC::SET_BIT(&Global_113644, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_113644, 1))
			{
				if (!DECORATOR::DECOR_GET_BOOL())
				{
					func_141(func_159(iParam0), -1);
					Global_113648.f_24997.f_3 = Global_113648.f_24997.f_3 + 1;
					MISC::SET_BIT(&Global_113644, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_113644, 2))
			{
				if (!DECORATOR::DECOR_GET_BOOL())
				{
					func_141(func_159(iParam0), -1);
					Global_113648.f_24997.f_4 = Global_113648.f_24997.f_4 + 1;
					MISC::SET_BIT(&Global_113644, 2);
				}
			}
			break;
	}

	return;
}

char* func_159(int iParam0) // Position - 0x8FE9 Hash - 0x8B1302A6 ^0xDD308939
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

BOOL func_160() // Position - 0x902B Hash - 0x8129EEA4 ^0x48B13301
{
	switch (func_161(&Global_32223, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_161(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x9061 Hash - 0x8F9349A ^0xC5C097C1
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98159.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_165(0))
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
		if (!func_163(iParam2))
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
			func_162(uParam0, iParam4);
	}

	return 2;
}

void func_162(var uParam0, int iParam1) // Position - 0x9198 Hash - 0x6AC97785 ^0x6AC97785
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

BOOL func_163(int iParam0) // Position - 0x91E7 Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_164(iParam0, Global_43257);
}

BOOL func_164(int iParam0, int iParam1) // Position - 0x91F8 Hash - 0x1FD727E0 ^0x1FD727E0
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

BOOL func_165(int iParam0) // Position - 0x93D9 Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43257 == 15)
		return false;

	if (func_163(iParam0))
		return false;

	return true;
}

int func_166(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x93FB Hash - 0xD593C051 ^0xD593C051
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 1;
	Global_22722 = 0;
	Global_22720 = iParam7;
	Global_2883585 = 0;
	return func_11(sParam2, iParam3, false);
}

Blip func_167(Entity eParam0, BOOL bParam1, int iParam2) // Position - 0x944E Hash - 0xA714218A ^0xAD0F82BD
{
	Blip blip;

	blip = func_151(eParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2028[iParam2 /*29*/].f_3));

	return blip;
}

void func_168() // Position - 0x9498 Hash - 0x1674F259 ^0xDF9ABED6
{
	if (func_170())
	{
		sLocal_113 = "drunk_idle_van";
		sLocal_114 = "vomit_van";
	}
	else if (func_169())
	{
		sLocal_113 = "drunk_idle_low";
		sLocal_114 = "vomit_low";
	}
	else
	{
		sLocal_113 = "drunk_idle";
		sLocal_114 = "vomit_outside";
	}

	return;
}

BOOL func_169() // Position - 0x94D8 Hash - 0x3B0C8751 ^0x2FF1FE78
{
	Hash vehicleLayoutHash;

	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[0], false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], false), false))
		{
			vehicleLayoutHash = VEHICLE::GET_VEHICLE_LAYOUT_HASH(PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], false));
		
			if (vehicleLayoutHash == -2066252141 || vehicleLayoutHash == 925191417 || vehicleLayoutHash == -782720499 || vehicleLayoutHash == 1105669833 || vehicleLayoutHash == 542797648 || vehicleLayoutHash == 68566729 || vehicleLayoutHash == -1887744178 || vehicleLayoutHash == -1150063973 || vehicleLayoutHash == 1630950849 || vehicleLayoutHash == -463340997 || vehicleLayoutHash == 2033852426)
				return true;
		}
	}

	return false;
}

BOOL func_170() // Position - 0x95AC Hash - 0x3B0C8751 ^0x2FF1FE78
{
	Hash vehicleLayoutHash;

	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[0], false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], false), false))
		{
			vehicleLayoutHash = VEHICLE::GET_VEHICLE_LAYOUT_HASH(PED::GET_VEHICLE_PED_IS_IN(uLocal_91[0], false));
		
			if (vehicleLayoutHash == -1965057835 || vehicleLayoutHash == 919485892 || vehicleLayoutHash == -1838563680 || vehicleLayoutHash == 1768419516 || vehicleLayoutHash == 1576485197 || vehicleLayoutHash == 929009548 || vehicleLayoutHash == -497732145 || vehicleLayoutHash == -1659990386 || vehicleLayoutHash == 434478421 || vehicleLayoutHash == 1816176348 || vehicleLayoutHash == 1710903184 || vehicleLayoutHash == 1663892749)
				return true;
		}
	}

	return false;
}

void func_171() // Position - 0x968E Hash - 0xD3ADA56D ^0x10639AB8
{
	Vehicle vehiclePedIsEntering;
	Ped pedInVehicleSeat;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		vehiclePedIsEntering = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsEntering, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsEntering, 0, false);
		
			if (!PED::IS_PED_INJURED(pedInVehicleSeat))
				if (pedInVehicleSeat != PLAYER::PLAYER_PED_ID())
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedInVehicleSeat))
						if (!PED::IS_PED_HEADTRACKING_ENTITY(pedInVehicleSeat, PLAYER::PLAYER_PED_ID()))
							TASK::TASK_LOOK_AT_ENTITY(pedInVehicleSeat, PLAYER::PLAYER_PED_ID(), 2000, SLF_WHILE_NOT_IN_FOV, 2);
		}
	}

	return;
}

void func_172() // Position - 0x96FB Hash - 0x8677EFE7 ^0x8677EFE7
{
	if (!bLocal_61)
	{
		func_174(39, true);
		func_174(40, true);
		func_174(41, true);
		func_174(42, true);
		func_174(43, true);
		func_174(44, true);
		MISC::CLEAR_AREA(uLocal_68, 8f, true, false, false, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_68 - { 8f, 8f, 8f }, uLocal_68 + { 8f, 8f, 8f }, false, true, true, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_76 - { 10f, 15f, 15f }, uLocal_76 + { 10f, 15f, 15f }, false, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_81 - { 10f, 15f, 15f }, uLocal_81 + { 10f, 15f, 15f }, false, true);
		MISC::SET_BIT(&uLocal_150, 5);
	
		if (func_22() == 0)
			func_173(&uLocal_173, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		else if (func_22() == 1)
			func_173(&uLocal_173, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		else if (func_22() == 2)
			func_173(&uLocal_173, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	
		PED::ADD_RELATIONSHIP_GROUP("rghDrunkPeds", &hLocal_100);
		veLocal_94 = VEHICLE::CREATE_VEHICLE(hLocal_98, uLocal_76, fLocal_79, true, true, false);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(veLocal_94);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_94, 1084227584);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(hLocal_98, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_94, 3);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(veLocal_94, true);
		iLocal_80 = ENTITY::GET_ENTITY_HEALTH(veLocal_94);
		uLocal_91[0] = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_96, uLocal_68, fLocal_71, true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_91[0], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_91[0], hLocal_100);
		PED::SET_PED_CONFIG_FLAG(uLocal_91[0], 185, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_91[0], 65536, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_96);
		AUDIO::STOP_PED_SPEAKING(uLocal_91[0], true);
		uLocal_91[1] = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_97, uLocal_72, fLocal_75, true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_91[1], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_91[1], hLocal_100);
		PED::SET_PED_CONFIG_FLAG(uLocal_91[1], 185, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_91[1], 65536, true);
		AUDIO::STOP_PED_SPEAKING(uLocal_91[1], true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_100, 1862763509);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_97);
	
		if (iLocal_54 == 1)
		{
			TASK::TASK_PLAY_ANIM(uLocal_91[0], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, -1, 1, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(uLocal_91[1], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, -1, 1, 0, false, false, false);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_91[0], "MOVE_M@DRUNK@VERYDRUNK", 1048576000);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_91[1], "MOVE_M@DRUNK@MODERATEDRUNK", 1048576000);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[0], PV_COMP_HEAD, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[0], PV_COMP_UPPR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[0], PV_COMP_LOWR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], PV_COMP_HEAD, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], PV_COMP_UPPR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], PV_COMP_LOWR, 0, 1, 0);
			VEHICLE::REMOVE_VEHICLE_WINDOW(veLocal_94, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[0], 206, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[0], 299, true);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_91[0], false);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_91[0], "REDR1Drunk1_AI_Drunk");
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_91[1], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			func_173(&uLocal_173, 3, uLocal_91[0], "REDR1Drunk1", 0, 1);
			func_173(&uLocal_173, 4, uLocal_91[1], "REDR1Drunk2", 0, 1);
		}
	
		if (iLocal_54 == 2)
		{
			PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_81 - { 10f, 50f, 30f }, uLocal_81 + { 10f, 50f, 30f }, false, true, true, true);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_94, true);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], PV_COMP_HEAD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], PV_COMP_HAIR, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], PV_COMP_LOWR, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_91[1], PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[0], 134, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[1], 134, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[0], 26, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[1], 26, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[0], 206, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_91[1], 206, true);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_91[0], false);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_91[1], false);
			TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_91[0], "WORLD_HUMAN_BUM_STANDING", 0, false);
			TASK::TASK_LOOK_AT_ENTITY(uLocal_91[0], uLocal_91[1], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
			TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_91[1], "WORLD_HUMAN_BUM_STANDING", 0, false);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uLocal_91[1], false);
			TASK::TASK_LOOK_AT_ENTITY(uLocal_91[1], uLocal_91[0], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_91[0], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 1048576000);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_91[1], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 1048576000);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_91[0], "A_M_Y_BeachVesp_01_White_Mini_01");
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_91[1], "A_F_Y_EastSA_03_Latino_FULL_01");
			func_173(&uLocal_173, 3, uLocal_91[0], "REDR2DrunkM", 0, 1);
			func_173(&uLocal_173, 4, uLocal_91[1], "REDR2DrunkF", 0, 1);
		}
	
		bLocal_61 = true;
	}

	return;
}

void func_173(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x9BD9 Hash - 0x6C235EE0 ^0x9E57F206
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
				TASK::OPEN_PATROL_ROUTE(pedParam2, 0);
			else
				TASK::OPEN_PATROL_ROUTE(pedParam2, 1);
	}

	return;
}

void func_174(int iParam0, BOOL bParam1) // Position - 0x9C74 Hash - 0x64B1D886 ^0x64B1D886
{
	if (bParam1)
		if (!func_178(iParam0, 2, true))
			func_177(iParam0, 2, true);
	else if (func_178(iParam0, 2, true))
		func_175(iParam0, 2, true);

	return;
}

void func_175(int iParam0, int iParam1, BOOL bParam2) // Position - 0x9CAB Hash - 0x1F4148DA ^0xB2D02435
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
		if (func_44() == 0)
		{
			address = func_89(func_176(iParam0), -1, 0);
			MISC::CLEAR_BIT(&address, iParam1);
			func_85(func_176(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

int func_176(int iParam0) // Position - 0x9D1D Hash - 0x28E83966 ^0x9E37924F
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

void func_177(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA0B6 Hash - 0x1F4148DA ^0x95628DB
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
		if (func_44() == 0)
		{
			address = func_89(func_176(iParam0), -1, 0);
			MISC::SET_BIT(&address, iParam1);
			func_85(func_176(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_178(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA128 Hash - 0xA45BEB30 ^0x6033D2A2
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_44() == 0)
			return IS_BIT_SET(func_89(func_176(iParam0), -1, 0), iParam1);
	else
		return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);

	return false;
}

void func_179() // Position - 0xA189 Hash - 0xEA464364 ^0x3B1EE282
{
	STREAMING::REQUEST_MODEL(hLocal_96);
	STREAMING::REQUEST_MODEL(hLocal_98);
	STREAMING::REQUEST_MODEL(hLocal_97);

	if (iLocal_54 == 1)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_1");
		STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@VERYDRUNK");
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", false, -1);
	}
	else if (iLocal_54 == 2)
	{
		STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_2");
		STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}

	STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@MODERATEDRUNK");

	if (STREAMING::HAS_MODEL_LOADED(hLocal_96) && STREAMING::HAS_MODEL_LOADED(hLocal_98) && STREAMING::HAS_ANIM_SET_LOADED("MOVE_M@DRUNK@MODERATEDRUNK") && STREAMING::HAS_MODEL_LOADED(hLocal_97))
	{
		if (iLocal_54 == 1)
			if (STREAMING::HAS_PTFX_ASSET_LOADED() && STREAMING::HAS_ANIM_DICT_LOADED("random@drunk_driver_1") && STREAMING::HAS_ANIM_SET_LOADED("MOVE_M@DRUNK@VERYDRUNK") && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", false, -1))
				bLocal_56 = true;
		else if (iLocal_54 == 2)
			if (STREAMING::HAS_ANIM_DICT_LOADED("random@drunk_driver_2") && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_M@DRUNK@SLIGHTLYDRUNK") && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
				bLocal_56 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(hLocal_96);
		STREAMING::REQUEST_MODEL(hLocal_98);
		STREAMING::REQUEST_MODEL(hLocal_97);
	
		if (iLocal_54 == 1)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_1");
			STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@VERYDRUNK");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", false, -1);
		}
		else if (iLocal_54 == 2)
		{
			STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_2");
			STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
	
		STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@MODERATEDRUNK");
	}

	return;
}

void func_180() // Position - 0xA2EA Hash - 0xD0B329C8 ^0xE68FAC14
{
	if (iLocal_54 == 1)
	{
		uLocal_152 = { -1018.2382f, -1350.1014f, 4.475f };
		iLocal_90 = 2;
		hLocal_96 = 2114544056;
		hLocal_97 = -900269486;
		uLocal_68 = { -1016.7623f, -1356.459f, 4.5531f };
		fLocal_71 = 247.8087f;
		uLocal_72 = { -1015.572f, -1357.081f, 4.552f };
		fLocal_75 = 66.3861f;
		uLocal_76 = { -1027.7618f, -1341.6439f, 4.4614f };
		fLocal_79 = 76.9418f;
		hLocal_98 = 142944341;
		uLocal_81 = { 160.8892f, -111.4167f, 61.2999f };
		uLocal_84 = { 159.2191f, -117.0664f, 61.2999f };
		bLocal_60 = true;
	}

	if (iLocal_54 == 2)
	{
		uLocal_152 = { 1893.8561f, 3714.3457f, 31.7771f };
		iLocal_90 = 2;
		hLocal_96 = -1736970383;
		hLocal_97 = -1514497514;
		uLocal_68 = { 1893.8561f, 3714.3457f, 31.7771f };
		fLocal_71 = 252.0142f;
		uLocal_72 = { 1894.7627f, 3714.1604f, 31.7605f };
		fLocal_75 = 86.1102f;
		uLocal_76 = { 1888.2565f, 3717.1892f, 31.8394f };
		fLocal_79 = 299.4672f;
		hLocal_98 = -685276541;
		uLocal_81 = { 1120.5507f, 2647.3071f, 36.9963f };
		uLocal_84 = { 1121.8657f, 2641.7068f, 37.1487f };
		bLocal_60 = true;
	}

	return;
}

BOOL func_181() // Position - 0xA442 Hash - 0xC05B0E62 ^0x94C54EFE
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_44) < 75f * 75f)
			return true;
	
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_192())
			return false;
	}

	if (func_188())
		return true;

	if (func_182(100f, true) != -1)
		return true;

	return false;
}

int func_182(float fParam0, BOOL bParam1) // Position - 0xA4C8 Hash - 0xA169FFDC ^0x284941E0
{
	var unk;
	int unk2;
	int unk3;
	float unk4;
	float unk5;
	int unk6;
	int unk7;
	BOOL unk8;

	num2 = -1;
	num3 = fParam0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_24(func_22()))
		{
			num4 = func_54();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_113648.f_18576[num /*6*/], 2) && !IS_BIT_SET(Global_113648.f_18576[num /*6*/], 3))
				{
					func_183(num, &unk);
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

void func_183(int iParam0, var uParam1) // Position - 0xA579 Hash - 0xCF1528B4 ^0x3DB4D13
{
	switch (iParam0)
	{
		case 0:
			func_184(uParam1, "Abigail1", func_186(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
	
		case 1:
			func_184(uParam1, "Abigail2", func_186(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
	
		case 2:
			func_184(uParam1, "Barry1", func_186(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
	
		case 3:
			func_184(uParam1, "Barry2", func_186(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
	
		case 4:
			func_184(uParam1, "Barry3", func_186(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
	
		case 5:
			func_184(uParam1, "Barry3A", func_186(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, _("Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry."), 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 6:
			func_184(uParam1, "Barry3C", func_186(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 7:
			func_184(uParam1, "Barry4", func_186(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_185(iParam0), 0, 0);
			break;
	
		case 8:
			func_184(uParam1, "Dreyfuss1", func_186(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, _("The killer's identity and location have been revealed."), 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
	
		case 9:
			func_184(uParam1, "Epsilon1", func_186(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
	
		case 10:
			func_184(uParam1, "Epsilon2", func_186(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
	
		case 11:
			func_184(uParam1, "Epsilon3", func_186(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
	
		case 12:
			func_184(uParam1, "Epsilon4", func_186(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
	
		case 13:
			func_184(uParam1, "Epsilon5", func_186(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
	
		case 14:
			func_184(uParam1, "Epsilon6", func_186(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 15:
			func_184(uParam1, "Epsilon7", func_186(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_185(iParam0), 0, 0);
			break;
	
		case 16:
			func_184(uParam1, "Epsilon8", func_186(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_185(iParam0), 1, 0);
			break;
	
		case 17:
			func_184(uParam1, "Extreme1", func_186(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 18:
			func_184(uParam1, "Extreme2", func_186(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 19:
			func_184(uParam1, "Extreme3", func_186(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 20:
			func_184(uParam1, "Extreme4", func_186(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
	
		case 21:
			func_184(uParam1, "Fanatic1", func_186(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_185(iParam0), 1, 0);
			break;
	
		case 22:
			func_184(uParam1, "Fanatic2", func_186(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_185(iParam0), 1, 0);
			break;
	
		case 23:
			func_184(uParam1, "Fanatic3", func_186(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_185(iParam0), 0, 1);
			break;
	
		case 24:
			func_184(uParam1, "Hao1", func_186(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_185(iParam0), 0, 1);
			break;
	
		case 25:
			func_184(uParam1, "Hunting1", func_186(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 26:
			func_184(uParam1, "Hunting2", func_186(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 27:
			func_184(uParam1, "Josh1", func_186(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
	
		case 28:
			func_184(uParam1, "Josh2", func_186(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
	
		case 29:
			func_184(uParam1, "Josh3", func_186(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
	
		case 30:
			func_184(uParam1, "Josh4", func_186(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
	
		case 31:
			func_184(uParam1, "Maude1", func_186(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 32:
			func_184(uParam1, "Minute1", func_186(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 33:
			func_184(uParam1, "Minute2", func_186(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 34:
			func_184(uParam1, "Minute3", func_186(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 35:
			func_184(uParam1, "MrsPhilips1", func_186(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
	
		case 36:
			func_184(uParam1, "MrsPhilips2", func_186(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
	
		case 37:
			func_184(uParam1, "Nigel1", func_186(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
	
		case 38:
			func_184(uParam1, "Nigel1A", func_186(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, _("Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill."), 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
	
		case 39:
			func_184(uParam1, "Nigel1B", func_186(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_185(iParam0), 1, 1);
			break;
	
		case 40:
			func_184(uParam1, "Nigel1C", func_186(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_185(iParam0), 1, 1);
			break;
	
		case 41:
			func_184(uParam1, "Nigel1D", func_186(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_185(iParam0), 1, 1);
			break;
	
		case 42:
			func_184(uParam1, "Nigel2", func_186(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
	
		case 43:
			func_184(uParam1, "Nigel3", func_186(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 1);
			break;
	
		case 44:
			func_184(uParam1, "Omega1", func_186(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
	
		case 45:
			func_184(uParam1, "Omega2", func_186(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
	
		case 46:
			func_184(uParam1, "Paparazzo1", func_186(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 47:
			func_184(uParam1, "Paparazzo2", func_186(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 48:
			func_184(uParam1, "Paparazzo3", func_186(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
	
		case 49:
			func_184(uParam1, "Paparazzo3A", func_186(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, _("Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly."), 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 50:
			func_184(uParam1, "Paparazzo3B", func_186(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 51:
			func_184(uParam1, "Paparazzo4", func_186(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 0);
			break;
	
		case 52:
			func_184(uParam1, "Rampage1", func_186(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
	
		case 54:
			func_184(uParam1, "Rampage3", func_186(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
	
		case 55:
			func_184(uParam1, "Rampage4", func_186(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
	
		case 56:
			func_184(uParam1, "Rampage5", func_186(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_185(iParam0), 0, 0);
			break;
	
		case 53:
			func_184(uParam1, "Rampage2", func_186(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_185(iParam0), 1, 0);
			break;
	
		case 57:
			func_184(uParam1, "TheLastOne", func_186(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 58:
			func_184(uParam1, "Tonya1", func_186(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, _("Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~"), -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 59:
			func_184(uParam1, "Tonya2", func_186(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 60:
			func_184(uParam1, "Tonya3", func_186(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 61:
			func_184(uParam1, "Tonya4", func_186(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		case 62:
			func_184(uParam1, "Tonya5", func_186(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_185(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_184(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0xB6EE Hash - 0x340E6E87 ^0xA591C803
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

int func_185(int iParam0) // Position - 0xB77F Hash - 0xC999F6B2 ^0xC999F6B2
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

struct<2> func_186(int iParam0) // Position - 0xBAC5 Hash - 0x49BA4072 ^0x201EBEBF
{
	var unk;
	var unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_187(iParam0) };

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

struct<2> func_187(int iParam0) // Position - 0xBAFB Hash - 0x37A0347F ^0x3D9C76EE
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

BOOL func_188() // Position - 0xBF46 Hash - 0x7055FFB1 ^0x7055FFB1
{
	if (func_191() && !func_192())
		return true;

	if (func_190() && func_189())
		return true;

	return false;
}

BOOL func_189() // Position - 0xBF78 Hash - 0x79CF7679 ^0x79CF7679
{
	return Global_113366 > 0;
}

BOOL func_190() // Position - 0xBF86 Hash - 0xCF2296C0 ^0xCF2296C0
{
	if (Global_97603 != -1)
		return true;

	return false;
}

BOOL func_191() // Position - 0xBF9B Hash - 0x98CCC132 ^0x97B0D6ED
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);

	return false;
}

BOOL func_192() // Position - 0xBFBE Hash - 0x29CB2928 ^0xE369A18D
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_193() // Position - 0xBFDB Hash - 0x4FE7C18E ^0x35BEB730
{
	if (!func_163(5))
		return true;

	if (func_188())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_192())
			return false;

	if (func_182(100f, true) != -1)
		return true;

	return false;
}

BOOL func_194() // Position - 0xC041 Hash - 0x1121F6F2 ^0x90CE37A6
{
	if (Global_113637 == func_58() && MISC::GET_RANDOM_EVENT_FLAG() && Global_113638)
		return true;

	return false;
}

void func_195(int iParam0) // Position - 0xC06C Hash - 0xA62BD46A ^0x1E050688
{
	if (iParam0 == -1)
		iParam0 = func_58();

	if (iParam0 == -1)
		return;

	func_197(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113634 = 0;
	func_196();
	return;
}

void func_196() // Position - 0xC0A2 Hash - 0x178BF2A7 ^0x744062F5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_197(int iParam0) // Position - 0xC0DF Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113637 = iParam0;
	return;
}

BOOL func_198(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC0ED Hash - 0xC601B4EA ^0xC601B4EA
{
	BOOL flag;
	Vector3 entityCoords;
	int unk;
	Vector3 unk2;
	int i;

	if (!Global_152234)
		return false;

	if (iParam3 == -1)
		iParam3 = func_58();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!func_239())
			return false;

	uLocal_44 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_192())
				return false;
		}
	
		if (!Global_113648.f_9087)
			return false;
	
		if (func_39(false))
			return false;
	
		if (func_188())
			return false;
	
		if (func_238())
			return false;
	
		if (Global_113637 != -1)
			return false;
	
		if (func_24(func_22()))
			if (func_182(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_44.f_2 > 50f)
				return false;
	
		if (!func_237(iParam3))
			return false;
	
		if (func_24(func_22()))
			if (func_236(func_22()) == 4 || func_236(func_22()) == 5)
				return false;
	
		if (func_24(func_22()))
			if (!func_235(iParam3, iParam4, 145))
				return false;
	
		if (!func_234(Global_113648.f_24997.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_113639 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_233())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_224(4))
			return false;
	
		if (!func_163(5))
			return false;
	
		if (func_223(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_3 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_223(0, 0))
			return false;
	
		if (Global_32310)
			return false;
	
		if (func_237(30) && !func_223(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_24(func_22()))
		{
			for (i = 0; i < 3; i = i + 1)
			{
				vector = { Global_113648.f_2365.f_539.f_2300[i /*3*/] };
				num = Global_113648.f_2365.f_539.f_2296[i];
			
				if (func_222(num))
					if (func_200(i))
						if (!func_199(vector, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (func_22() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_199(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0xC487 Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_200(int iParam0) // Position - 0xC4CE Hash - 0x687D9246 ^0x687D9246
{
	int num;

	num = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_201(num);
}

BOOL func_201(int iParam0) // Position - 0xC4EF Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_202(iParam0, 1);
}

int func_202(int iParam0, int iParam1) // Position - 0xC4FE Hash - 0x1F92FEBC ^0x1F92FEBC
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_222(iParam0))
		return 0;

	func_203(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_203(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xC551 Hash - 0x2BEE335D ^0x2BEE335D
{
	func_204(func_215(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_204(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xC56F Hash - 0xB807819C ^0xB807819C
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_214(iParam0, iParam1))
	{
		num = func_213(iParam1);
		num2 = func_211(iParam0);
		num3 = func_211(iParam0) - func_211(iParam1);
		num4 = func_213(iParam0) - func_213(iParam1);
		num5 = func_210(iParam0) - func_210(iParam1);
		num6 = func_209(iParam0) - func_209(iParam1);
		num7 = func_208(iParam0) - func_208(iParam1);
		num8 = func_207(iParam0) - func_207(iParam1);
	}
	else
	{
		num = func_213(iParam0);
		num2 = func_211(iParam1);
		num3 = func_211(iParam1) - func_211(iParam0);
		num4 = func_213(iParam1) - func_213(iParam0);
		num5 = func_210(iParam1) - func_210(iParam0);
		num6 = func_209(iParam1) - func_209(iParam0);
		num7 = func_208(iParam1) - func_208(iParam0);
		num8 = func_207(iParam1) - func_207(iParam0);
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
	
		num5 = num5 + func_206(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_205(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
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

float func_205(float fParam0, float fParam1, float fParam2) // Position - 0xC770 Hash - 0xDB08F514 ^0x78C0BF6F
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

int func_206(int iParam0, int iParam1) // Position - 0xC7B2 Hash - 0xD3EBACB3 ^0xD3EBACB3
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

int func_207(int iParam0) // Position - 0xC854 Hash - 0x90B520AB ^0x257AC1C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_208(int iParam0) // Position - 0xC867 Hash - 0xC188C91C ^0x48884C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_209(int iParam0) // Position - 0xC87A Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_210(int iParam0) // Position - 0xC88D Hash - 0x826C592F ^0xDEC5AA46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_211(int iParam0) // Position - 0xC89F Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_212(BOOL bParam0, var uParam1, var uParam2) // Position - 0xC8C1 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_213(int iParam0) // Position - 0xC8D8 Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

BOOL func_214(int iParam0, int iParam1) // Position - 0xC8E5 Hash - 0xEA08B1 ^0xEA08B1
{
	int num;
	int num2;

	if (!func_222(iParam1) || !func_222(iParam0))
		return 1;

	num = func_211(iParam0);
	num2 = func_211(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_213(iParam0);
	num2 = func_213(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_210(iParam0);
	num2 = func_210(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_209(iParam0);
	num2 = func_209(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_208(iParam0);
	num2 = func_208(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_207(iParam0);
	num2 = func_207(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_215() // Position - 0xC9F1 Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_221(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_220(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_219(&unk, CLOCK::GET_CLOCK_HOURS());
	func_218(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_217(&unk, CLOCK::GET_CLOCK_MONTH());
	func_216(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_216(var uParam0, int iParam1) // Position - 0xCA37 Hash - 0x15B9927E ^0x4A4674
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

void func_217(var uParam0, int iParam1) // Position - 0xCABD Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_218(var uParam0, int iParam1) // Position - 0xCAF0 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_213(*uParam0);
	num2 = func_211(*uParam0);

	if (iParam1 < 1 || iParam1 > func_206(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_219(var uParam0, int iParam1) // Position - 0xCB41 Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_220(var uParam0, int iParam1) // Position - 0xCB7B Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_221(var uParam0, int iParam1) // Position - 0xCBB6 Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_222(int iParam0) // Position - 0xCBF2 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_207(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_208(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_209(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_211(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_213(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_210(iParam0);

	if (num6 < 1 || num6 > func_206(num5, num4))
		return false;

	return true;
}

BOOL func_223(int iParam0, int iParam1) // Position - 0xCCCE Hash - 0x577FB514 ^0xAAF8B538
{
	if (IS_BIT_SET(Global_113648.f_24997.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_224(int iParam0) // Position - 0xCCEE Hash - 0x97844555 ^0xADCD6DAA
{
	int num;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				num = func_22();
			
				if (!func_24(num))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_232() || Global_112695 || Global_32166 || func_231() || func_30(8, -1) || func_230() || func_229() || func_228() || func_227() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_232() || Global_32166 || func_231() || func_30(8, -1) || func_228() || func_230() || func_229() || func_227() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_232() || Global_112695 || Global_32166 || func_231() || func_30(8, -1) || func_228() || func_230() || func_229() || func_227() || Global_113648.f_7690.f_919[num] == 5 || Global_43804 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_232() || Global_112695 || Global_32166 || func_231() || func_30(8, -1) || func_230() || func_229() || func_227() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 4:
						if (func_232() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_30(8, -1) || func_227() || func_226() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 5:
						if (func_30(8, -1) || func_230() || func_229() || func_226() || func_225())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_232() || Global_32166 || func_231() || func_30(8, -1) || func_229() || func_228() || func_227() || Global_113648.f_7690.f_919[num] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_232() || func_229() || Global_112695 || Global_32166 || func_231() || Global_44446 || func_30(8, -1) || func_228() || func_226() || func_227() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || unk_0x279D0BCF8F708D74(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_232() || Global_112695 || Global_32166 || func_231() || func_30(8, -1) || func_228() || func_226() || func_230() || func_229() || func_227())
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

BOOL func_225() // Position - 0xD40B Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_100720.f_1;
}

BOOL func_226() // Position - 0xD419 Hash - 0xC20DBA70 ^0xAC4006FB
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);

	return false;
}

BOOL func_227() // Position - 0xD43C Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1424752554) > 0)
		return true;

	return false;
}

BOOL func_228() // Position - 0xD456 Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_229() // Position - 0xD480 Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_388 > 0;
}

BOOL func_230() // Position - 0xD491 Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_387 > 0;
}

BOOL func_231() // Position - 0xD4A2 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575060;
}

BOOL func_232() // Position - 0xD4AE Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_233() // Position - 0xD4CA Hash - 0xB12DEAA2 ^0xB12DEAA2
{
	func_21();

	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_234(int iParam0) // Position - 0xD4F2 Hash - 0xCDB90269 ^0xCDB90269
{
	return func_214(func_215(), iParam0);
}

BOOL func_235(int iParam0, int iParam1, int iParam2) // Position - 0xD504 Hash - 0xBEEFD79C ^0xBEEFD79C
{
	BOOL num;
	int num2;

	num = 0;
	num2 = func_22();

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

int func_236(int iParam0) // Position - 0xD5E8 Hash - 0x45FC9D61 ^0x45FC9D61
{
	if (!func_24(iParam0))
		return 7;

	return Global_113648.f_7690.f_919[iParam0];
}

BOOL func_237(int iParam0) // Position - 0xD60C Hash - 0xF2A54181 ^0xF2A54181
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!func_239())
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

BOOL func_238() // Position - 0xD664 Hash - 0xB72C022E ^0x452A7B6D
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

BOOL func_239() // Position - 0xD6A8 Hash - 0x44DD83CC ^0x6D2C8335
{
	int profileSetting;

	if (Global_152523 == 2)
		return true;
	else if (Global_152523 == 3)
		return false;

	if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(1571103992, &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(1571103992, profileSetting, true);
			
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

void func_240() // Position - 0xD760 Hash - 0x2C2B8FED ^0x683AC92C
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_enter_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 3))
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());

	if (bLocal_172)
	{
		func_279(false);
	
		if (Global_32406)
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
	
		func_278();
		func_6();
		AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(false);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_76 - { 10f, 15f, 15f }, uLocal_76 + { 10f, 15f, 15f }, true, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_81 - { 10f, 15f, 15f }, uLocal_81 + { 10f, 15f, 15f }, true, true);
		func_156(false);
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, false);
	
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_95, false))
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_95, false) && func_145(PLAYER::PLAYER_PED_ID(), veLocal_95, true) > 50f)
				func_252(veLocal_95, 0, 145);
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[0]))
		{
			if (!PED::IS_PED_INJURED(uLocal_91[0]))
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_91[0], 317, true);
			
				if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[0], false))
					PED::RESET_PED_LAST_VEHICLE(uLocal_91[0]);
			
				if (PED::IS_PED_IN_GROUP(uLocal_91[0]))
					PED::REMOVE_PED_FROM_GROUP(uLocal_91[0]);
			}
		}
	
		for (iLocal_63 = 0; iLocal_63 <= iLocal_90 - 1; iLocal_63 = iLocal_63 + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_91[iLocal_63]))
			{
				if (!PED::IS_PED_INJURED(uLocal_91[iLocal_63]))
				{
					PED::SET_PED_CONFIG_FLAG(uLocal_91[iLocal_63], 317, true);
				
					if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_91[iLocal_63], false))
						PED::RESET_PED_LAST_VEHICLE(uLocal_91[iLocal_63]);
				
					PED::SET_PED_CAN_BE_TARGETTED(uLocal_91[iLocal_63], true);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, hLocal_100, 1862763509);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_91[iLocal_63], false);
				}
			
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_91[iLocal_63]);
			}
		}
	
		for (iLocal_63 = 0; iLocal_63 <= iLocal_90 - 1; iLocal_63 = iLocal_63 + 1)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_155[iLocal_63]))
				HUD::REMOVE_BLIP(&uLocal_155[iLocal_63]);
		}
	
		if (iLocal_54 == 1)
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(42.7808f, -1324.4054f, -10f, 98.245f, -1277.174f, 10f, 1);
	
		if (CAM::DOES_CAM_EXIST(caLocal_127))
			if (CAM::IS_CAM_ACTIVE(caLocal_127))
				CAM::SET_CAM_ACTIVE(caLocal_127, false);
	}

	func_241(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_241(int iParam0) // Position - 0xD9F4 Hash - 0xE6B11918 ^0x37AF2AD2
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_58();

	if (iParam0 == -1)
		return;

	if (func_194())
	{
		func_245(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113639 = MISC::GET_GAME_TIMER();
		func_244(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_243(Global_113637, true), 64);
	
		if (func_57(Global_113637) > 0)
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

	func_242(&Global_32223);
	Global_113638 = false;
	func_197(-1);
	return;
}

void func_242(var uParam0) // Position - 0xDAA6 Hash - 0x995C9E2 ^0x995C9E2
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

char* func_243(int iParam0, BOOL bParam1) // Position - 0xDAE3 Hash - 0x959319CB ^0x2263A8A4
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

void func_244(int iParam0) // Position - 0xDD2C Hash - 0xC0234809 ^0x4FD853DC
{
	Global_43808 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_245(int iParam0) // Position - 0xDD3E Hash - 0x881273A8 ^0x881273A8
{
	func_246(iParam0, 0, func_251(iParam0));
	return;
}

void func_246(int iParam0, int iParam1, int iParam2) // Position - 0xDD53 Hash - 0xA7DBC311 ^0xA7DBC311
{
	int unk;
	var unk2;

	unk = func_215();
	func_249(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_248(iParam0, &unk);
	unk2 = { func_247(&unk) };
	return;
}

struct<16> func_247(var uParam0) // Position - 0xDD82 Hash - 0xB55EE866 ^0xA31094FE
{
	var unk;
	int unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_209(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_208(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_207(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_210(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_213(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_211(*uParam0), 64);
	return unk;
}

void func_248(int iParam0, var uParam1) // Position - 0xDE51 Hash - 0x63EF72B0 ^0xC612AA53
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
	return;
}

void func_249(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xDE69 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_211(*uParam0);
	i = func_213(*uParam0);
	num2 = func_210(*uParam0);
	j = func_209(*uParam0);
	k = func_208(*uParam0);
	l = func_207(*uParam0);

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

	for (m = func_206(i, num); num2 > m; m = func_206(i, num))
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
	func_250(uParam0, l, k, j, num2, i, num);
	return;
}

void func_250(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xDFEB Hash - 0x733BFBA2 ^0x733BFBA2
{
	func_221(uParam0, iParam1);
	func_220(uParam0, iParam2);
	func_219(uParam0, iParam3);
	func_217(uParam0, iParam5);
	func_218(uParam0, iParam4);
	func_216(uParam0, iParam6);
	return;
}

int func_251(int iParam0) // Position - 0xE023 Hash - 0x4219564C ^0x4219564C
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

int func_252(Vehicle veParam0, int iParam1, int iParam2) // Position - 0xE1C6 Hash - 0xBB1BDF97 ^0x48390346
{
	var script;
	const char* entityScript;

	if (iParam1 == 0)
	{
		entityScript = ENTITY::GET_ENTITY_SCRIPT(veParam0, &script);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(entityScript))
			if (MISC::GET_HASH_KEY(entityScript) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
				return 0;
	}

	func_253(veParam0, iParam2);
	return 1;
}

void func_253(Vehicle veParam0, int iParam1) // Position - 0xE206 Hash - 0x403E4E98 ^0x34F9BF63
{
	Ped pedInVehicleSeat;
	int i;
	int j;

	if (!func_259(veParam0))
		return;

	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
	{
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
			pedInVehicleSeat = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, -1);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
			if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == 225514697)
				iParam1 = 0;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == -1692214353)
				iParam1 = 1;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == -1686040670)
				iParam1 = 2;
	
		if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
			iParam1 = Global_113648.f_2365.f_539.f_4321;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 2; j = j + 1)
		{
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_1)))
					{
						Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_66 = 0;
						Global_113648.f_32751.f_5592[i] = j;
					}
				}
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_113648.f_32751.f_5600[i /*78*/].f_66)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5600[i /*78*/].f_1)))
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113648.f_32751.f_5600[i /*78*/].f_1)))
					Global_113648.f_32751.f_5600[i /*78*/].f_66 = 0;
	}

	Global_113648.f_32751.f_5590 = iParam1;
	Global_78253 = veParam0;
	Global_113648.f_32751.f_5588 = 1;
	func_254(veParam0, &(Global_113648.f_32751.f_5510));
	return;
}

void func_254(Vehicle veParam0, var uParam1) // Position - 0xE408 Hash - 0x5E84B52A ^0xEF20F807
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_258(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(veParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
		VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(veParam0);
		uParam1->f_69 = unk_0xA79BA8CFAAB28820(veParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 2))
			MISC::SET_BIT(&(uParam1->f_77), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 3))
			MISC::SET_BIT(&(uParam1->f_77), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 1))
			MISC::SET_BIT(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_257(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(veParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(veParam0))
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
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 9);
	
		if (VEHICLE::IS_VEHICLE_STOLEN(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 10);
	
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(veParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 12);
	
		func_256(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_255(i + 1));
		}
	
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 11);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
	
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && unk_0x8FA309E9ECEE409A(veParam0, "IgnoredByQuickSave"))
			MISC::SET_BIT(&(uParam1->f_77), 27);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
	}

	return;
}

int func_255(int iParam0) // Position - 0xE6B3 Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

int func_256(var uParam0, var uParam1, var uParam2) // Position - 0xE763 Hash - 0x4455160E ^0x8E5B3F28
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			uParam1->[i] = 0;
		
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
				uParam1->[i] = 1;
		}
		else if (modType == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0))
				{
					case 255:
						uParam1->[i] = 1;
						break;
				
					case 0:
						uParam1->[i] = 2;
						break;
				
					case 1:
						uParam1->[i] = 3;
						break;
				
					case 2:
						uParam1->[i] = 4;
						break;
				
					case 3:
						uParam1->[i] = 5;
						break;
				
					case 4:
						uParam1->[i] = 6;
						break;
				
					case 5:
						uParam1->[i] = 7;
						break;
				
					case 6:
						uParam1->[i] = 8;
						break;
				
					case 7:
						uParam1->[i] = 9;
						break;
				
					case 8:
						uParam1->[i] = 10;
						break;
				
					case 9:
						uParam1->[i] = 11;
						break;
				
					case 10:
						uParam1->[i] = 12;
						break;
				
					case 11:
						uParam1->[i] = 13;
						break;
				
					case 12:
						uParam1->[i] = 14;
						break;
				
					case 13:
						uParam1->[i] = 15;
						break;
				}
			}
			else
			{
				uParam1->[i] = 0;
			}
		}
		else
		{
			uParam1->[i] = VEHICLE::GET_VEHICLE_MOD(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
		}
	}

	return 1;
}

BOOL func_257(int iParam0) // Position - 0xE956 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1775728740:
		case -998177792:
			return true;
	
		default:
		
	}

	return false;
}

void func_258(var uParam0) // Position - 0xE976 Hash - 0xB95AF921 ^0x4DC7C61C
{
	int i;

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
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

BOOL func_259(Vehicle veParam0) // Position - 0xEA25 Hash - 0x835CB3EF ^0xB88368F0
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_276(veParam0, 0, false) || func_276(veParam0, 1, false) || func_276(veParam0, 2, false) || func_275(veParam0) != 145 || func_274(veParam0) || func_273(veParam0) || func_272(veParam0) || func_271(veParam0) || !func_260(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		func_273(veParam0);
		func_273(veParam0);
		func_276(veParam0, 0, false);
		func_276(veParam0, 1, false);
		func_276(veParam0, 2, false);
		func_275(veParam0) != 145;
		return false;
	}

	return true;
}

BOOL func_260(Hash hParam0) // Position - 0xEB02 Hash - 0x66FE4A4A ^0x10D5195D
{
	if (hParam0 == 0)
		return false;

	if (!func_261(hParam0, false, -1))
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0))
		return false;

	switch (hParam0)
	{
		case -713569950:
		case -1961627517:
		case -823509173:
		case -1207431159:
		case 782665360:
		case -1476447243:
		case 1074326203:
		case 1353720154:
		case -845979911:
		case -1323100960:
		case -442313018:
		case 1283517198:
		case -2072933068:
		case -1098802077:
		case 1941029835:
		case 1938952078:
		case -2007026063:
		case 1917016601:
		case 2053223216:
		case 524108981:
		case 850991848:
		case 1518533038:
		case -2140210194:
		case -2137348917:
		case 2112052861:
		case -2076478498:
		case 1886712733:
		case 444583674:
		case 48339065:
		case -1006919392:
		case -2130482718:
		case -784816453:
		case 475220373:
		case -1705304628:
		case -1700801569:
		case -947761570:
		case 1876516712:
		case 1951180813:
		case -1987130134:
		case -233098306:
		case 121658888:
		case -120287622:
		case 904750859:
		case -1050465301:
		case 2046537925:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case -34623805:
		case -1536924937:
		case -1779120616:
		case 456714581:
		case -956048545:
		case 771711535:
		case -1066334226:
		case -845961253:
			return false;
	}

	return true;
}

BOOL func_261(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xECB4 Hash - 0x9BD8A1CC ^0xA5081522
{
	int i;
	Hash outData;

	if (hParam0 == 0)
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(hParam0))
		return false;

	if (hParam0 == -915704871 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == 237764926 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == 349315417 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == -613725916 || hParam0 == -401643538 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_239())
			return false;
	}
	else
	{
		for (i = 0; i < FILES::GET_NUM_DLC_VEHICLES(); i = i + 1)
		{
			if (FILES::GET_DLC_VEHICLE_DATA(i, &outData))
				if (hParam0 == outData.f_1)
					if (FILES::IS_CONTENT_ITEM_LOCKED(outData))
						return false;
		}
	}

	if (hParam0 == -150975354)
		if (!func_270() && !func_269() && !func_268() && !func_267() && !func_239())
			return false;

	if (hParam0 == 37348240 || hParam0 == 11251904 || hParam0 == 544021352)
	{
		if (func_266() || MISC::IS_PC_VERSION() || func_265())
		{
		}
		else if (!func_268())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_264(hParam0, iParam2))
			return false;

	if (!func_262(hParam0))
		return false;

	return true;
}

BOOL func_262(Hash hParam0) // Position - 0xEE36 Hash - 0xC7E3100C ^0x61A6CFB9
{
	int num;
	var unk;
	var unk2;

	if (!func_263())
		return true;

	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&num, &unk);

	if (num == 4)
		return true;

	switch (hParam0)
	{
		case -827162039:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_DUNE4_t0_v3", 64);
			break;
	
		case 989294410:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case 941494461:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_RUINER2_t0_v3", 64);
			break;
	
		case -1649536104:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case 1180875963:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case 682434785:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case -1912017790:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case -1590337689:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!unk_0x0E4605546F88E7A3(&unk2))
		return false;

	return true;
}

BOOL func_263() // Position - 0xEF02 Hash - 0x2E0B1DC1 ^0xD2D0A3D9
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_264(Hash hParam0, int iParam1) // Position - 0xEF19 Hash - 0x2FF24ACC ^0x92A5C100
{
	BOOL num;
	int cloudTimeAsInt;

	if (!Global_2764242 && iParam1 >= 0 && iParam1 <= 415)
		if (IS_BIT_SET(Global_1586468[iParam1 /*142*/].f_103, 2))
			return true;

	if (Global_2764241)
		return true;

	num = 1;
	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (hParam0 == -602287871)
		if (!Global_262145.f_7059 && !Global_262145.f_13397 && cloudTimeAsInt < Global_262145.f_13398)
			num = 0;

	if (hParam0 == -2039755226)
		if (!Global_262145.f_14737 && cloudTimeAsInt < Global_262145.f_14749)
			num = 0;
	else if (hParam0 == 16646064 || hParam0 == -899509638)
		if (!Global_262145.f_14733 && cloudTimeAsInt < Global_262145.f_14745)
			num = 0;
	else if (hParam0 == 223258115)
		if (!Global_262145.f_14734 && cloudTimeAsInt < Global_262145.f_14746)
			num = 0;
	else if (hParam0 == -1797613329)
		if (!Global_262145.f_14735 && cloudTimeAsInt < Global_262145.f_14747)
			num = 0;
	else if (hParam0 == -1126264336)
		if (!Global_262145.f_14736 && cloudTimeAsInt < Global_262145.f_14748)
			num = 0;
	else if (hParam0 == 1119641113)
		if (!Global_262145.f_14738 && cloudTimeAsInt < Global_262145.f_14750)
			num = 0;

	if (hParam0 == 2123327359)
		if (!Global_262145.f_14739 && cloudTimeAsInt < Global_262145.f_14742)
			num = 0;
	else if (hParam0 == -1757836725)
		if (!Global_262145.f_14740 && cloudTimeAsInt < Global_262145.f_14743)
			num = 0;
	else if (hParam0 == -1829802492)
		if (!Global_262145.f_14741 && cloudTimeAsInt < Global_262145.f_14744)
			num = 0;

	if (hParam0 == 86520421)
		if (!Global_262145.f_17313 && cloudTimeAsInt < Global_262145.f_17278)
			num = 0;
	else if (hParam0 == 1549126457)
		if (!Global_262145.f_17308 && cloudTimeAsInt < Global_262145.f_17273)
			num = 0;
	else if (hParam0 == 390201602)
		if (!Global_262145.f_17312 && cloudTimeAsInt < Global_262145.f_17277)
			num = 0;
	else if (hParam0 == 683047626)
		if (!Global_262145.f_17311 && cloudTimeAsInt < Global_262145.f_17276)
			num = 0;
	else if (hParam0 == -1232836011)
		if (!Global_262145.f_17305 && cloudTimeAsInt < Global_262145.f_17270)
			num = 0;
	else if (hParam0 == -777172681)
		if (!Global_262145.f_17306 && cloudTimeAsInt < Global_262145.f_17271)
			num = 0;
	else if (hParam0 == 101905590)
		if (!Global_262145.f_17309 && cloudTimeAsInt < Global_262145.f_17274)
			num = 0;
	else if (hParam0 == -663299102)
		if (!Global_262145.f_17310 && cloudTimeAsInt < Global_262145.f_17275)
			num = 0;
	else if (hParam0 == 1887331236)
		if (!Global_262145.f_17307 && cloudTimeAsInt < Global_262145.f_17272)
			num = 0;
	else if (hParam0 == 741090084)
		if (!Global_262145.f_17315 && cloudTimeAsInt < Global_262145.f_17280)
			num = 0;
	else if (hParam0 == -2103821244)
		if (!Global_262145.f_17316 && cloudTimeAsInt < Global_262145.f_17281)
			num = 0;
	else if (hParam0 == -1071380347)
		if (!Global_262145.f_17304 && cloudTimeAsInt < Global_262145.f_17269)
			num = 0;
	else if (hParam0 == 2067820283)
		if (!Global_262145.f_17303 && cloudTimeAsInt < Global_262145.f_17268)
			num = 0;
	else if (hParam0 == 819197656)
		if (!Global_262145.f_17302 && cloudTimeAsInt < Global_262145.f_17267)
			num = 0;
	else if (hParam0 == 482197771)
		if (!Global_262145.f_17314 && cloudTimeAsInt < Global_262145.f_17279)
			num = 0;
	else if (hParam0 == -401643538)
		if (!Global_262145.f_17317 && cloudTimeAsInt < Global_262145.f_17282)
			num = 0;
	else if (hParam0 == 349315417)
		if (!Global_262145.f_17318 && cloudTimeAsInt < Global_262145.f_17283)
			num = 0;
	else if (hParam0 == -915704871)
		if (!Global_262145.f_17319 && cloudTimeAsInt < Global_262145.f_17284)
			num = 0;
	else if (hParam0 == 237764926)
		if (!Global_262145.f_17320 && cloudTimeAsInt < Global_262145.f_17285)
			num = 0;

	if (hParam0 == 822018448)
		if (!Global_262145.f_17474 && cloudTimeAsInt < Global_262145.f_17496)
			num = 0;
	else if (hParam0 == -1606187161)
		if (!Global_262145.f_17475 && cloudTimeAsInt < Global_262145.f_17497)
			num = 0;
	else if (hParam0 == -1009268949)
		if (!Global_262145.f_17476 && cloudTimeAsInt < Global_262145.f_17498)
			num = 0;
	else if (hParam0 == 2035069708)
		if (!Global_262145.f_17477 && cloudTimeAsInt < Global_262145.f_17499)
			num = 0;
	else if (hParam0 == -2115793025)
		if (!Global_262145.f_17478 && cloudTimeAsInt < Global_262145.f_17500)
			num = 0;
	else if (hParam0 == -570033273)
		if (!Global_262145.f_17479 && cloudTimeAsInt < Global_262145.f_17501)
			num = 0;
	else if (hParam0 == -255678177)
		if (!Global_262145.f_17481 && cloudTimeAsInt < Global_262145.f_17502)
			num = 0;
	else if (hParam0 == -609625092)
		if (!Global_262145.f_17482 && cloudTimeAsInt < Global_262145.f_17503)
			num = 0;
	else if (hParam0 == -405626514)
		if (!Global_262145.f_17483 && cloudTimeAsInt < Global_262145.f_17504)
			num = 0;
	else if (hParam0 == 6774487)
		if (!Global_262145.f_17484 && cloudTimeAsInt < Global_262145.f_17505)
			num = 0;
	else if (hParam0 == -674927303)
		if (!Global_262145.f_17485 && cloudTimeAsInt < Global_262145.f_17506)
			num = 0;
	else if (hParam0 == -1404136503)
		if (!Global_262145.f_17486 && cloudTimeAsInt < Global_262145.f_17507)
			num = 0;
	else if (hParam0 == -440768424)
		if (!Global_262145.f_17487 && cloudTimeAsInt < Global_262145.f_17508)
			num = 0;
	else if (hParam0 == -1558399629)
		if (!Global_262145.f_17493 && cloudTimeAsInt < Global_262145.f_17515)
			num = 0;
	else if (hParam0 == 1026149675)
		if (!Global_262145.f_17490 && cloudTimeAsInt < Global_262145.f_17511)
			num = 0;
	else if (hParam0 == -618617997)
		if (!Global_262145.f_17491 && cloudTimeAsInt < Global_262145.f_17512)
			num = 0;
	else if (hParam0 == -1289178744)
		if (!Global_262145.f_17492 && cloudTimeAsInt < Global_262145.f_17513)
			num = 0;
	else if (hParam0 == -1842748181)
		if (!Global_262145.f_17480 && cloudTimeAsInt < Global_262145.f_17514)
			num = 0;
	else if (hParam0 == -2140431165)
		if (!Global_262145.f_17494 && cloudTimeAsInt < Global_262145.f_17516)
			num = 0;
	else if (hParam0 == 1491277511)
		if (!Global_262145.f_17488 && cloudTimeAsInt < Global_262145.f_17509)
			num = 0;
	else if (hParam0 == -1523428744)
		if (!Global_262145.f_17489 && cloudTimeAsInt < Global_262145.f_17510)
			num = 0;
	else if (hParam0 == 1873600305)
		if (!Global_262145.f_17495 && cloudTimeAsInt < Global_262145.f_17517)
			num = 0;

	if (hParam0 == 989294410)
		if (!Global_262145.f_19131 && cloudTimeAsInt < Global_262145.f_19228)
			num = 0;
	else if (hParam0 == 941494461)
		if (!Global_262145.f_19132 && cloudTimeAsInt < Global_262145.f_19229)
			num = 0;
	else if (hParam0 == -827162039)
		if (!Global_262145.f_19133 && cloudTimeAsInt < Global_262145.f_19230)
			num = 0;
	else if (hParam0 == -312295511)
		if (!Global_262145.f_19134 && cloudTimeAsInt < Global_262145.f_19231)
			num = 0;
	else if (hParam0 == -1649536104)
		if (!Global_262145.f_19135 && cloudTimeAsInt < Global_262145.f_19232)
			num = 0;
	else if (hParam0 == 1180875963)
		if (!Global_262145.f_19136 && cloudTimeAsInt < Global_262145.f_19233)
			num = 0;
	else if (hParam0 == 682434785)
		if (!Global_262145.f_19137 && cloudTimeAsInt < Global_262145.f_19234)
			num = 0;
	else if (hParam0 == -1912017790)
		if (!Global_262145.f_19138 && cloudTimeAsInt < Global_262145.f_19235)
			num = 0;
	else if (hParam0 == -1590337689)
		if (!Global_262145.f_19139 && cloudTimeAsInt < Global_262145.f_19236)
			num = 0;
	else if (hParam0 == -1045541610)
		if (!Global_262145.f_19140 && cloudTimeAsInt < Global_262145.f_19237)
			num = 0;
	else if (hParam0 == -2022483795)
		if (!Global_262145.f_19141 && cloudTimeAsInt < Global_262145.f_19238)
			num = 0;
	else if (hParam0 == -239841468)
		if (!Global_262145.f_19142 && cloudTimeAsInt < Global_262145.f_19239)
			num = 0;
	else if (hParam0 == 1790834270)
		if (!Global_262145.f_19143 && cloudTimeAsInt < Global_262145.f_19240)
			num = 0;
	else if (hParam0 == 196747873)
		if (!Global_262145.f_19144 && cloudTimeAsInt < Global_262145.f_19241)
			num = 0;
	else if (hParam0 == -566387422)
		if (!Global_262145.f_19145 && cloudTimeAsInt < Global_262145.f_19242)
			num = 0;
	else if (hParam0 == 627535535)
		if (!Global_262145.f_19146 && cloudTimeAsInt < Global_262145.f_19243)
			num = 0;
	else if (hParam0 == -757735410)
		if (!Global_262145.f_19147 && cloudTimeAsInt < Global_262145.f_19244)
			num = 0;
	else if (hParam0 == -2048333973)
		if (!Global_262145.f_19148 && cloudTimeAsInt < Global_262145.f_19245)
			num = 0;
	else if (hParam0 == -482719877)
		if (!Global_262145.f_19149 && cloudTimeAsInt < Global_262145.f_19246)
			num = 0;
	else if (hParam0 == 1034187331)
		if (!Global_262145.f_19150 && cloudTimeAsInt < Global_262145.f_19247)
			num = 0;
	else if (hParam0 == 1093792632)
		if (!Global_262145.f_19151 && cloudTimeAsInt < Global_262145.f_19248)
			num = 0;
	else if (hParam0 == -1758137366)
		if (!Global_262145.f_19152 && cloudTimeAsInt < Global_262145.f_19249)
			num = 0;
	else if (hParam0 == 1886268224)
		if (!Global_262145.f_19153 && cloudTimeAsInt < Global_262145.f_19250)
			num = 0;
	else if (hParam0 == 1074745671)
		if (!Global_262145.f_19154 && cloudTimeAsInt < Global_262145.f_19251)
			num = 0;
	else if (hParam0 == 272929391)
		if (!Global_262145.f_19155 && cloudTimeAsInt < Global_262145.f_19252)
			num = 0;

	if (hParam0 == 1234311532)
		if (!Global_262145.f_20212 && cloudTimeAsInt < Global_262145.f_20208)
			num = 0;
	else if (hParam0 == -1405937764)
		if (!Global_262145.f_20213 && cloudTimeAsInt < Global_262145.f_20209)
			num = 0;
	else if (hParam0 == 719660200)
		if (!Global_262145.f_20214 && cloudTimeAsInt < Global_262145.f_20210)
			num = 0;
	else if (hParam0 == -982130927)
		if (!Global_262145.f_20215 && cloudTimeAsInt < Global_262145.f_20211)
			num = 0;

	if (hParam0 == 917809321)
		if (!Global_262145.f_21094 && cloudTimeAsInt < Global_262145.f_21102)
			num = 0;
	else if (hParam0 == 223240013)
		if (!Global_262145.f_21095 && cloudTimeAsInt < Global_262145.f_21103)
			num = 0;
	else if (hParam0 == 1504306544)
		if (!Global_262145.f_21096 && cloudTimeAsInt < Global_262145.f_21104)
			num = 0;
	else if (hParam0 == 1939284556)
		if (!Global_262145.f_21097 && cloudTimeAsInt < Global_262145.f_21105)
			num = 0;
	else if (hParam0 == 159274291)
		if (!Global_262145.f_21098 && cloudTimeAsInt < Global_262145.f_21106)
			num = 0;
	else if (hParam0 == 433954513)
		if (!Global_262145.f_21099 && cloudTimeAsInt < Global_262145.f_21107)
			num = 0;

	if (hParam0 == -1763555241)
		if (!Global_262145.f_21893 && cloudTimeAsInt < Global_262145.f_21913)
			num = 0;
	else if (hParam0 == -749299473)
		if (!Global_262145.f_21905 && cloudTimeAsInt < Global_262145.f_21925)
			num = 0;
	else if (hParam0 == -975345305)
		if (!Global_262145.f_21896 && cloudTimeAsInt < Global_262145.f_21916)
			num = 0;
	else if (hParam0 == -1700874274)
		if (!Global_262145.f_21906 && cloudTimeAsInt < Global_262145.f_21926)
			num = 0;
	else if (hParam0 == -392675425)
		if (!Global_262145.f_21894 && cloudTimeAsInt < Global_262145.f_21914)
			num = 0;
	else if (hParam0 == 1043222410)
		if (!Global_262145.f_21910 && cloudTimeAsInt < Global_262145.f_21930)
			num = 0;
	else if (hParam0 == -1386191424)
		if (!Global_262145.f_21908 && cloudTimeAsInt < Global_262145.f_21928)
			num = 0;
	else if (hParam0 == 1565978651)
		if (!Global_262145.f_21909 && cloudTimeAsInt < Global_262145.f_21929)
			num = 0;
	else if (hParam0 == 1036591958)
		if (!Global_262145.f_21904 && cloudTimeAsInt < Global_262145.f_21924)
			num = 0;
	else if (hParam0 == -32878452)
		if (!Global_262145.f_21911 && cloudTimeAsInt < Global_262145.f_21931)
			num = 0;
	else if (hParam0 == -42959138)
		if (!Global_262145.f_21907 && cloudTimeAsInt < Global_262145.f_21927)
			num = 0;
	else if (hParam0 == -1984275979)
		if (!Global_262145.f_21903 && cloudTimeAsInt < Global_262145.f_21923)
			num = 0;
	else if (hParam0 == -1007528109)
		if (!Global_262145.f_21895 && cloudTimeAsInt < Global_262145.f_21915)
			num = 0;
	else if (hParam0 == -1523619738)
		if (!Global_262145.f_21897 && cloudTimeAsInt < Global_262145.f_21917)
			num = 0;
	else if (hParam0 == 1392481335)
		if (!Global_262145.f_21898 && cloudTimeAsInt < Global_262145.f_21918)
			num = 0;
	else if (hParam0 == -998177792)
		if (!Global_262145.f_21899 && cloudTimeAsInt < Global_262145.f_21919)
			num = 0;
	else if (hParam0 == -1242608589)
		if (!Global_262145.f_21900 && cloudTimeAsInt < Global_262145.f_21920)
			num = 0;
	else if (hParam0 == 1841130506)
		if (!Global_262145.f_21901 && cloudTimeAsInt < Global_262145.f_21921)
			num = 0;
	else if (hParam0 == 2049897956)
		if (!Global_262145.f_21902 && cloudTimeAsInt < Global_262145.f_21922)
			num = 0;

	if (hParam0 == 1483171323)
		if (!Global_262145.f_22861 && cloudTimeAsInt < Global_262145.f_22889)
			num = 0;
	else if (hParam0 == 886810209)
		if (!Global_262145.f_22862 && cloudTimeAsInt < Global_262145.f_22890)
			num = 0;
	else if (hParam0 == -1693015116)
		if (!Global_262145.f_22863 && cloudTimeAsInt < Global_262145.f_22891)
			num = 0;
	else if (hParam0 == -692292317)
		if (!Global_262145.f_22864 && cloudTimeAsInt < Global_262145.f_22892)
			num = 0;
	else if (hParam0 == -1435527158)
		if (!Global_262145.f_22865 && cloudTimeAsInt < Global_262145.f_22893)
			num = 0;
	else if (hParam0 == 1181327175)
		if (!Global_262145.f_22866 && cloudTimeAsInt < Global_262145.f_22894)
			num = 0;
	else if (hParam0 == 1489874736)
		if (!Global_262145.f_22867 && cloudTimeAsInt < Global_262145.f_22895)
			num = 0;
	else if (hParam0 == -212993243)
		if (!Global_262145.f_22868 && cloudTimeAsInt < Global_262145.f_22896)
			num = 0;
	else if (hParam0 == 447548909)
		if (!Global_262145.f_22869 && cloudTimeAsInt < Global_262145.f_22897)
			num = 0;
	else if (hParam0 == 1561920505)
		if (!Global_262145.f_22870 && cloudTimeAsInt < Global_262145.f_22898)
			num = 0;
	else if (hParam0 == -1848994066)
		if (!Global_262145.f_22871 && cloudTimeAsInt < Global_262145.f_22899)
			num = 0;
	else if (hParam0 == 1741861769)
		if (!Global_262145.f_22872 && cloudTimeAsInt < Global_262145.f_22900)
			num = 0;
	else if (hParam0 == 1104234922)
		if (!Global_262145.f_22873 && cloudTimeAsInt < Global_262145.f_22901)
			num = 0;
	else if (hParam0 == 1871995513)
		if (!Global_262145.f_22874 && cloudTimeAsInt < Global_262145.f_22902)
			num = 0;
	else if (hParam0 == 1352136073)
		if (!Global_262145.f_22875 && cloudTimeAsInt < Global_262145.f_22903)
			num = 0;
	else if (hParam0 == -313185164)
		if (!Global_262145.f_22876 && cloudTimeAsInt < Global_262145.f_22904)
			num = 0;
	else if (hParam0 == -2079788230)
		if (!Global_262145.f_22877 && cloudTimeAsInt < Global_262145.f_22905)
			num = 0;
	else if (hParam0 == 600450546)
		if (!Global_262145.f_22878 && cloudTimeAsInt < Global_262145.f_22906)
			num = 0;
	else if (hParam0 == -410205223)
		if (!Global_262145.f_22879 && cloudTimeAsInt < Global_262145.f_22907)
			num = 0;
	else if (hParam0 == 867799010)
		if (!Global_262145.f_22880 && cloudTimeAsInt < Global_262145.f_22908)
			num = 0;
	else if (hParam0 == -1529242755)
		if (!Global_262145.f_22881 && cloudTimeAsInt < Global_262145.f_22909)
			num = 0;
	else if (hParam0 == 903794909)
		if (!Global_262145.f_22882 && cloudTimeAsInt < Global_262145.f_22910)
			num = 0;
	else if (hParam0 == -1532697517)
		if (!Global_262145.f_22883 && cloudTimeAsInt < Global_262145.f_22911)
			num = 0;
	else if (hParam0 == 15219735)
		if (!Global_262145.f_22884 && cloudTimeAsInt < Global_262145.f_22912)
			num = 0;
	else if (hParam0 == 661493923)
		if (!Global_262145.f_22885 && cloudTimeAsInt < Global_262145.f_22913)
			num = 0;
	else if (hParam0 == 838982985)
		if (!Global_262145.f_22886 && cloudTimeAsInt < Global_262145.f_22914)
			num = 0;
	else if (hParam0 == -391595372)
		if (!Global_262145.f_22887 && cloudTimeAsInt < Global_262145.f_22915)
			num = 0;
	else if (hParam0 == -121446169)
		if (!Global_262145.f_22888 && cloudTimeAsInt < Global_262145.f_22916)
			num = 0;

	if (hParam0 == 1909189272)
		if (!Global_262145.f_24081 && cloudTimeAsInt < Global_262145.f_24097)
			num = 0;
	else if (hParam0 == 1617472902)
		if (!Global_262145.f_24082 && cloudTimeAsInt < Global_262145.f_24098)
			num = 0;
	else if (hParam0 == -1267543371)
		if (!Global_262145.f_24086 && cloudTimeAsInt < Global_262145.f_24102)
			num = 0;
	else if (hParam0 == 931280609)
		if (!Global_262145.f_24089 && cloudTimeAsInt < Global_262145.f_24105)
			num = 0;
	else if (hParam0 == 1046206681)
		if (!Global_262145.f_24094 && cloudTimeAsInt < Global_262145.f_24110)
			num = 0;
	else if (hParam0 == -1259134696)
		if (!Global_262145.f_24088 && cloudTimeAsInt < Global_262145.f_24104)
			num = 0;
	else if (hParam0 == 1115909093)
		if (!Global_262145.f_24080 && cloudTimeAsInt < Global_262145.f_24096)
			num = 0;
	else if (hParam0 == 1031562256)
		if (!Global_262145.f_24087 && cloudTimeAsInt < Global_262145.f_24103)
			num = 0;
	else if (hParam0 == -376434238)
		if (!Global_262145.f_24093 && cloudTimeAsInt < Global_262145.f_24109)
			num = 0;
	else if (hParam0 == -986944621)
		if (!Global_262145.f_24092 && cloudTimeAsInt < Global_262145.f_24108)
			num = 0;
	else if (hParam0 == -1134706562)
		if (!Global_262145.f_24083 && cloudTimeAsInt < Global_262145.f_24099)
			num = 0;
	else if (hParam0 == -2120700196)
		if (!Global_262145.f_24085 && cloudTimeAsInt < Global_262145.f_24101)
			num = 0;
	else if (hParam0 == -214906006)
		if (!Global_262145.f_24095 && cloudTimeAsInt < Global_262145.f_24111)
			num = 0;
	else if (hParam0 == -988501280)
		if (!Global_262145.f_24091 && cloudTimeAsInt < Global_262145.f_24107)
			num = 0;
	else if (hParam0 == 1254014755)
		if (!Global_262145.f_24084 && cloudTimeAsInt < Global_262145.f_24100)
			num = 0;
	else if (hParam0 == -726768679)
		if (!Global_262145.f_24090 && cloudTimeAsInt < Global_262145.f_24106)
			num = 0;

	if (hParam0 == -1988428699)
		if (!Global_262145.f_24171 && cloudTimeAsInt < Global_262145.f_24158)
			num = 0;
	else if (hParam0 == 345756458)
		if (!Global_262145.f_24172 && cloudTimeAsInt < Global_262145.f_24159)
			num = 0;
	else if (hParam0 == 1945374990)
		if (!Global_262145.f_24177 && cloudTimeAsInt < Global_262145.f_24164)
			num = 0;
	else if (hParam0 == 1653666139)
		if (!Global_262145.f_24176 && cloudTimeAsInt < Global_262145.f_24163)
			num = 0;
	else if (hParam0 == 500482303)
		if (!Global_262145.f_24174 && cloudTimeAsInt < Global_262145.f_24161)
			num = 0;
	else if (hParam0 == 2044532910)
		if (!Global_262145.f_24180 && cloudTimeAsInt < Global_262145.f_24167)
			num = 0;
	else if (hParam0 == -638562243)
		if (!Global_262145.f_24182 && cloudTimeAsInt < Global_262145.f_24169)
			num = 0;
	else if (hParam0 == 1692272545)
		if (!Global_262145.f_24183 && cloudTimeAsInt < Global_262145.f_24170)
			num = 0;
	else if (hParam0 == 2069146067)
		if (!Global_262145.f_24181 && cloudTimeAsInt < Global_262145.f_24168)
			num = 0;
	else if (hParam0 == -420911112)
		if (!Global_262145.f_24173 && cloudTimeAsInt < Global_262145.f_24160)
			num = 0;
	else if (hParam0 == 321186144)
		if (!Global_262145.f_24175 && cloudTimeAsInt < Global_262145.f_24162)
			num = 0;
	else if (hParam0 == -54332285)
		if (!Global_262145.f_24179 && cloudTimeAsInt < Global_262145.f_24166)
			num = 0;
	else if (hParam0 == -307958377)
		if (!Global_262145.f_24178 && cloudTimeAsInt < Global_262145.f_24165)
			num = 0;

	if (hParam0 == 1721676810)
	{
	}
	else if (hParam0 == -801550069)
	{
	}
	else if (hParam0 == 679453769)
	{
	}
	else if (hParam0 == 1909700336)
	{
	}
	else if (hParam0 == 2139203625)
	{
	}
	else if (hParam0 == -1890996696)
	{
	}
	else if (hParam0 == 2038858402)
	{
	}
	else if (hParam0 == -1146969353)
	{
	}
	else if (hParam0 == 1542143200)
	{
	}
	else if (hParam0 == -579747861)
	{
	}
	else if (hParam0 == 444994115)
	{
	}
	else if (hParam0 == 1637620610)
	{
	}
	else if (hParam0 == -755532233)
	{
	}
	else if (hParam0 == 540101442)
	{
	}
	else if (hParam0 == -1106120762)
	{
	}
	else if (hParam0 == -1478704292)
	{
	}
	else if (hParam0 == -2096690334)
	{
	}
	else if (hParam0 == 1591739866)
	{
		if (!Global_262145.f_26768 && cloudTimeAsInt < Global_262145.f_26770)
			num = 0;
	}
	else if (hParam0 == -1168952148)
	{
		if (!Global_262145.f_25781 && cloudTimeAsInt < Global_262145.f_25774)
			num = 0;
	}
	else if (hParam0 == -1566607184)
	{
		if (!Global_262145.f_25782 && cloudTimeAsInt < Global_262145.f_25775)
			num = 0;
	}
	else if (hParam0 == -331467772)
	{
		if (!Global_262145.f_25783 && cloudTimeAsInt < Global_262145.f_25776)
			num = 0;
	}
	else if (hParam0 == 1279262537)
	{
		if (!Global_262145.f_25784 && cloudTimeAsInt < Global_262145.f_25777)
			num = 0;
	}
	else if (hParam0 == -49115651)
	{
		if (!Global_262145.f_26769 && cloudTimeAsInt < Global_262145.f_26771)
			num = 0;
	}
	else if (hParam0 == 1456744817)
	{
		if (!Global_262145.f_25785 && cloudTimeAsInt < Global_262145.f_25778)
			num = 0;
	}
	else if (hParam0 == -507495760)
	{
		if (!Global_262145.f_25786 && cloudTimeAsInt < Global_262145.f_25779)
			num = 0;
	}
	else if (hParam0 == -286046740)
	{
		if (!Global_262145.f_25787 && cloudTimeAsInt < Global_262145.f_25780)
			num = 0;
	}
	else if (hParam0 == 1044193113)
	{
		if (!Global_262145.f_25792 && cloudTimeAsInt < Global_262145.f_25813)
			num = 0;
	}
	else if (hParam0 == 686471183)
	{
		if (!Global_262145.f_25793 && cloudTimeAsInt < Global_262145.f_25814)
			num = 0;
	}
	else if (hParam0 == -941272559)
	{
		if (!Global_262145.f_25794 && cloudTimeAsInt < Global_262145.f_25815)
			num = 0;
	}
	else if (hParam0 == -1829436850)
	{
		if (!Global_262145.f_25795 && cloudTimeAsInt < Global_262145.f_25816)
			num = 0;
	}
	else if (hParam0 == -682108547)
	{
		if (!Global_262145.f_25796 && cloudTimeAsInt < Global_262145.f_25817)
			num = 0;
	}
	else if (hParam0 == 722226637)
	{
		if (!Global_262145.f_25797 && cloudTimeAsInt < Global_262145.f_25818)
			num = 0;
	}
	else if (hParam0 == 1854776567)
	{
		if (!Global_262145.f_25798 && cloudTimeAsInt < Global_262145.f_25819)
			num = 0;
	}
	else if (hParam0 == 1862507111)
	{
		if (!Global_262145.f_25799 && cloudTimeAsInt < Global_262145.f_25820)
			num = 0;
	}
	else if (hParam0 == -882629065)
	{
		if (!Global_262145.f_25800 && cloudTimeAsInt < Global_262145.f_25821)
			num = 0;
	}
	else if (hParam0 == -362150785)
	{
		if (!Global_262145.f_25801 && cloudTimeAsInt < Global_262145.f_25822)
			num = 0;
	}
	else if (hParam0 == 310284501)
	{
		if (!Global_262145.f_25802 && cloudTimeAsInt < Global_262145.f_25823)
			num = 0;
	}
	else if (hParam0 == 916547552)
	{
		if (!Global_262145.f_25803 && cloudTimeAsInt < Global_262145.f_25824)
			num = 0;
	}
	else if (hParam0 == -1804415708)
	{
		if (!Global_262145.f_25804 && cloudTimeAsInt < Global_262145.f_25825)
			num = 0;
	}
	else if (hParam0 == 1934384720)
	{
		if (!Global_262145.f_25805 && cloudTimeAsInt < Global_262145.f_25826)
			num = 0;
	}
	else if (hParam0 == -1349095620)
	{
		if (!Global_262145.f_25806 && cloudTimeAsInt < Global_262145.f_25827)
			num = 0;
	}
	else if (hParam0 == -208911803)
	{
		if (!Global_262145.f_25807 && cloudTimeAsInt < Global_262145.f_25828)
			num = 0;
	}
	else if (hParam0 == -324618589)
	{
		if (!Global_262145.f_25808 && cloudTimeAsInt < Global_262145.f_25829)
			num = 0;
	}
	else if (hParam0 == -664141241)
	{
		if (!Global_262145.f_25809 && cloudTimeAsInt < Global_262145.f_25830)
			num = 0;
	}
	else if (hParam0 == 1323778901)
	{
		if (!Global_262145.f_25810 && cloudTimeAsInt < Global_262145.f_25831)
			num = 0;
	}
	else if (hParam0 == -1620126302)
	{
		if (!Global_262145.f_25811 && cloudTimeAsInt < Global_262145.f_25832)
			num = 0;
	}
	else if (hParam0 == -447711397)
	{
		if (!Global_262145.f_25812 && cloudTimeAsInt < Global_262145.f_25833)
			num = 0;
	}
	else if (hParam0 == 1118611807)
	{
		if (!Global_262145.f_28613 && cloudTimeAsInt < Global_262145.f_28634)
			num = 0;
	}
	else if (hParam0 == 409049982)
	{
		if (!Global_262145.f_28614 && cloudTimeAsInt < Global_262145.f_28635)
			num = 0;
	}
	else if (hParam0 == -1756021720)
	{
		if (!Global_262145.f_28615 && cloudTimeAsInt < Global_262145.f_28636)
			num = 0;
	}
	else if (hParam0 == 2031587082)
	{
		if (!Global_262145.f_28616 && cloudTimeAsInt < Global_262145.f_28637)
			num = 0;
	}
	else if (hParam0 == 1693751655)
	{
		if (!Global_262145.f_28617 && cloudTimeAsInt < Global_262145.f_28638)
			num = 0;
	}
	else if (hParam0 == 987469656)
	{
		if (!Global_262145.f_28618 && cloudTimeAsInt < Global_262145.f_28639)
			num = 0;
	}
	else if (hParam0 == 872704284)
	{
		if (!Global_262145.f_28619 && cloudTimeAsInt < Global_262145.f_28640)
			num = 0;
	}
	else if (hParam0 == 408825843)
	{
		if (!Global_262145.f_28620 && cloudTimeAsInt < Global_262145.f_28641)
			num = 0;
	}
	else if (hParam0 == 740289177)
	{
		if (!Global_262145.f_28621 && cloudTimeAsInt < Global_262145.f_28642)
			num = 0;
	}
	else if (hParam0 == -834353991)
	{
		if (!Global_262145.f_28622 && cloudTimeAsInt < Global_262145.f_28643)
			num = 0;
	}
	else if (hParam0 == 301304410)
	{
		if (!Global_262145.f_28623 && cloudTimeAsInt < Global_262145.f_28644)
			num = 0;
	}
	else if (hParam0 == 960812448)
	{
		if (!Global_262145.f_28624 && cloudTimeAsInt < Global_262145.f_28645)
			num = 0;
	}
	else if (hParam0 == 1284356689)
	{
		if (!Global_262145.f_28625 && cloudTimeAsInt < Global_262145.f_28646)
			num = 0;
	}
	else if (hParam0 == 394110044)
	{
		if (!Global_262145.f_28626 && cloudTimeAsInt < Global_262145.f_28647)
			num = 0;
	}
	else if (hParam0 == 1938952078)
	{
		if (!Global_262145.f_28627 && cloudTimeAsInt < Global_262145.f_28648)
			num = 0;
	}
	else if (hParam0 == -907477130)
	{
		if (!Global_262145.f_28628 && cloudTimeAsInt < Global_262145.f_28649)
			num = 0;
	}
	else if (hParam0 == -1987130134)
	{
		if (!Global_262145.f_28629 && cloudTimeAsInt < Global_262145.f_28650)
			num = 0;
	}
	else if (hParam0 == 1747439474)
	{
		if (!Global_262145.f_28630 && cloudTimeAsInt < Global_262145.f_28651)
			num = 0;
	}
	else if (hParam0 == -1254331310)
	{
		if (!Global_262145.f_28631 && cloudTimeAsInt < Global_262145.f_28652)
			num = 0;
	}
	else if (hParam0 == 469291905)
	{
		if (!Global_262145.f_28632 && cloudTimeAsInt < Global_262145.f_28653)
			num = 0;
	}
	else if (hParam0 == -48031959)
	{
		if (!Global_262145.f_28633 && cloudTimeAsInt < Global_262145.f_28654)
			num = 0;
	}
	else if (hParam0 == 340154634)
	{
		if (!Global_262145.f_28656 && cloudTimeAsInt < Global_262145.f_28657 && !Global_262145.f_28611)
			num = 0;
	}
	else if (hParam0 == -1960756985)
	{
		if (!Global_262145.f_28659 && cloudTimeAsInt < Global_262145.f_28660 && !Global_262145.f_28612)
			num = 0;
	}
	else if (hParam0 == -1132721664)
	{
		if (!Global_262145.f_28664 && cloudTimeAsInt < Global_262145.f_28667)
			num = 0;
	}
	else if (hParam0 == 83136452)
	{
		if (!Global_262145.f_28665 && cloudTimeAsInt < Global_262145.f_28668)
			num = 0;
	}
	else if (hParam0 == 1456336509)
	{
		if (!Global_262145.f_28666 && cloudTimeAsInt < Global_262145.f_28669)
			num = 0;
	}
	else if (hParam0 == -2122646867)
	{
		if (!Global_262145.f_29682 && cloudTimeAsInt < Global_262145.f_29347)
			num = 0;
	}
	else if (hParam0 == -2098954619)
	{
		if (!Global_262145.f_29333 && cloudTimeAsInt < Global_262145.f_29354)
			num = 0;
	}
	else if (hParam0 == 2134119907)
	{
		if (!Global_262145.f_29334 && cloudTimeAsInt < Global_262145.f_29340)
			num = 0;
	}
	else if (hParam0 == 67753863)
	{
		if (!Global_262145.f_29680 && cloudTimeAsInt < Global_262145.f_29348)
			num = 0;
	}
	else if (hParam0 == 1107404867)
	{
		if (!Global_262145.f_29681 && cloudTimeAsInt < Global_262145.f_29349)
			num = 0;
	}
	else if (hParam0 == -913589546)
	{
		if (!Global_262145.f_29327 && cloudTimeAsInt < Global_262145.f_29346)
			num = 0;
	}
	else if (hParam0 == -631322662)
	{
		if (!Global_262145.f_29328 && cloudTimeAsInt < Global_262145.f_29355)
			num = 0;
	}
	else if (hParam0 == -838099166)
	{
		if (!Global_262145.f_29329 && cloudTimeAsInt < Global_262145.f_29345)
			num = 0;
	}
	else if (hParam0 == -1810806490)
	{
		if (!Global_262145.f_29330 && cloudTimeAsInt < Global_262145.f_29343)
			num = 0;
	}
	else if (hParam0 == -1358197432)
	{
		if (!Global_262145.f_29676 && cloudTimeAsInt < Global_262145.f_29350)
			num = 0;
	}
	else if (hParam0 == 1492612435)
	{
		if (!Global_262145.f_29677 && cloudTimeAsInt < Global_262145.f_29351)
			num = 0;
	}
	else if (hParam0 == 1181339704)
	{
		if (!Global_262145.f_29678 && cloudTimeAsInt < Global_262145.f_29352)
			num = 0;
	}
	else if (hParam0 == -1728685474)
	{
		if (!Global_262145.f_29679 && cloudTimeAsInt < Global_262145.f_29353)
			num = 0;
	}
	else if (hParam0 == 1717532765)
	{
		if (!Global_262145.f_29331 && cloudTimeAsInt < Global_262145.f_29342)
			num = 0;
	}
	else if (hParam0 == 1802742206)
	{
		if (!Global_262145.f_29332 && cloudTimeAsInt < Global_262145.f_29344)
			num = 0;
	}
	else if (hParam0 == 1455990255)
	{
		if (!Global_262145.f_30141 && cloudTimeAsInt < Global_262145.f_30124)
			num = 0;
	}
	else if (hParam0 == 295054921)
	{
		if (!Global_262145.f_30142 && cloudTimeAsInt < Global_262145.f_30125)
			num = 0;
	}
	else if (hParam0 == -365873403)
	{
		if (!Global_262145.f_30143 && cloudTimeAsInt < Global_262145.f_30126)
			num = 0;
	}
	else if (hParam0 == -276744698)
	{
		if (!Global_262145.f_30144 && cloudTimeAsInt < Global_262145.f_30127)
			num = 0;
	}
	else if (hParam0 == 1861786828)
	{
		if (!Global_262145.f_30145 && cloudTimeAsInt < Global_262145.f_30128)
			num = 0;
	}
	else if (hParam0 == -210308634)
	{
		if (!Global_262145.f_30146 && cloudTimeAsInt < Global_262145.f_30129)
			num = 0;
	}
	else if (hParam0 == -857356038)
	{
		if (!Global_262145.f_30147 && cloudTimeAsInt < Global_262145.f_30130)
			num = 0;
	}
	else if (hParam0 == -1492917079)
	{
		if (!Global_262145.f_30148 && cloudTimeAsInt < Global_262145.f_30131)
			num = 0;
	}
	else if (hParam0 == -1149725334)
	{
		if (!Global_262145.f_30149 && cloudTimeAsInt < Global_262145.f_30132)
			num = 0;
	}
	else if (hParam0 == 1644055914)
	{
		if (Global_262145.f_30158)
		{
		}
		else if (!Global_262145.f_30150 && cloudTimeAsInt < Global_262145.f_30133)
		{
			num = 0;
		}
	}
	else if (hParam0 == 1086534307)
	{
		if (!Global_262145.f_30151 && cloudTimeAsInt < Global_262145.f_30134)
			num = 0;
	}
	else if (hParam0 == -1045911276)
	{
		if (!Global_262145.f_30152 && cloudTimeAsInt < Global_262145.f_30135)
			num = 0;
	}
	else if (hParam0 == 2014313426)
	{
		if (!Global_262145.f_30153 && cloudTimeAsInt < Global_262145.f_30136)
			num = 0;
	}
	else if (hParam0 == -102335483)
	{
		if (!Global_262145.f_30154 && cloudTimeAsInt < Global_262145.f_30137)
			num = 0;
	}
	else if (hParam0 == 1429622905)
	{
		if (Global_262145.f_30159)
		{
		}
		else if (!Global_262145.f_30155 && cloudTimeAsInt < Global_262145.f_30138)
		{
			num = 0;
		}
	}
	else if (hParam0 == -980573366)
	{
		if (!Global_262145.f_30156 && cloudTimeAsInt < Global_262145.f_30139)
			num = 0;
	}
	else if (hParam0 == 298565713)
	{
		if (!Global_262145.f_30157 && cloudTimeAsInt < Global_262145.f_30140)
			num = 0;
	}
	else if (hParam0 == -1244461404)
	{
		if (!Global_262145.f_31009 && cloudTimeAsInt < Global_262145.f_30992)
			num = 0;
	}
	else if (hParam0 == 2038480341)
	{
		if (!Global_262145.f_31010 && cloudTimeAsInt < Global_262145.f_30993)
			num = 0;
	}
	else if (hParam0 == -291021213)
	{
		if (!Global_262145.f_31011 && cloudTimeAsInt < Global_262145.f_30994)
			num = 0;
	}
	else if (hParam0 == -452604007)
	{
		if (!Global_262145.f_31012 && cloudTimeAsInt < Global_262145.f_30995)
			num = 0;
	}
	else if (hParam0 == -1540373595)
	{
		if (!Global_262145.f_31013 && cloudTimeAsInt < Global_262145.f_30996)
			num = 0;
	}
	else if (hParam0 == -1858654120)
	{
		if (!Global_262145.f_31014 && cloudTimeAsInt < Global_262145.f_30997)
			num = 0;
	}
	else if (hParam0 == 579912970)
	{
		if (!Global_262145.f_31015 && cloudTimeAsInt < Global_262145.f_30998)
			num = 0;
	}
	else if (hParam0 == -1193912403)
	{
		if (!Global_262145.f_31016 && cloudTimeAsInt < Global_262145.f_30999)
			num = 0;
	}
	else if (hParam0 == 1377217886)
	{
		if (!Global_262145.f_31017 && cloudTimeAsInt < Global_262145.f_31000)
			num = 0;
	}
	else if (hParam0 == 1755697647)
	{
		if (!Global_262145.f_31018 && cloudTimeAsInt < Global_262145.f_31001)
			num = 0;
	}
	else if (hParam0 == 426742808)
	{
		if (!Global_262145.f_31019 && cloudTimeAsInt < Global_262145.f_31002)
			num = 0;
	}
	else if (hParam0 == -1582061455)
	{
		if (!Global_262145.f_31020 && cloudTimeAsInt < Global_262145.f_31003)
			num = 0;
	}
	else if (hParam0 == -1507230520)
	{
		if (!Global_262145.f_31021 && cloudTimeAsInt < Global_262145.f_31004)
			num = 0;
	}
	else if (hParam0 == 736672010)
	{
		if (!Global_262145.f_31022 && cloudTimeAsInt < Global_262145.f_31005)
			num = 0;
	}
	else if (hParam0 == 1416471345)
	{
		if (!Global_262145.f_31023 && cloudTimeAsInt < Global_262145.f_31006)
			num = 0;
	}
	else if (hParam0 == 1304459735)
	{
		if (!Global_262145.f_31024 && cloudTimeAsInt < Global_262145.f_31007)
			num = 0;
	}
	else if (hParam0 == -1726022652)
	{
		if (!Global_262145.f_31025 && cloudTimeAsInt < Global_262145.f_31008)
			num = 0;
	}
	else if (hParam0 == -915234475)
	{
		if (!Global_262145.f_31889 && cloudTimeAsInt < Global_262145.f_31874)
			num = 0;
	}
	else if (hParam0 == -619930876)
	{
		if (!Global_262145.f_31890 && cloudTimeAsInt < Global_262145.f_31875)
			num = 0;
	}
	else if (hParam0 == 1532171089)
	{
		if (!Global_262145.f_31891 && cloudTimeAsInt < Global_262145.f_31876)
			num = 0;
	}
	else if (hParam0 == 461465043)
	{
		if (!Global_262145.f_31892 && cloudTimeAsInt < Global_262145.f_31877)
			num = 0;
	}
	else if (hParam0 == -1444114309)
	{
		if (!Global_262145.f_31893 && cloudTimeAsInt < Global_262145.f_31878)
			num = 0;
	}
	else if (hParam0 == -1527436269)
	{
		if (!Global_262145.f_31894 && cloudTimeAsInt < Global_262145.f_31879)
			num = 0;
	}
	else if (hParam0 == 629969764)
	{
		if (!Global_262145.f_31895 && cloudTimeAsInt < Global_262145.f_31880)
			num = 0;
	}
	else if (hParam0 == 1141395928)
	{
		if (!Global_262145.f_31896 && cloudTimeAsInt < Global_262145.f_31881)
			num = 0;
	}
	else if (hParam0 == 655665811)
	{
		if (!Global_262145.f_31897 && cloudTimeAsInt < Global_262145.f_31882)
			num = 0;
	}
	else if (hParam0 == 1993851908)
	{
		if (!Global_262145.f_31898 && cloudTimeAsInt < Global_262145.f_31883)
			num = 0;
	}
	else if (hParam0 == 662793086)
	{
		if (!Global_262145.f_31899 && cloudTimeAsInt < Global_262145.f_31884)
			num = 0;
	}
	else if (hParam0 == -261346873)
	{
		if (!Global_262145.f_31900 && cloudTimeAsInt < Global_262145.f_31885)
			num = 0;
	}
	else if (hParam0 == -670086588)
	{
		if (!Global_262145.f_31901 && cloudTimeAsInt < Global_262145.f_31886)
			num = 0;
	}
	else if (hParam0 == 1353120668)
	{
		if (!Global_262145.f_31902 && cloudTimeAsInt < Global_262145.f_31887)
			num = 0;
	}
	else if (hParam0 == 359875117)
	{
		if (Global_262145.f_31967)
		{
		}
		else if (!Global_262145.f_31903 && cloudTimeAsInt < Global_262145.f_31888)
		{
			num = 0;
		}
	}
	else if (hParam0 == 15214558)
	{
		if (!*Global_262145.f_33131 && cloudTimeAsInt < *Global_262145.f_33112)
			num = 0;
	}
	else if (hParam0 == -754687673)
	{
		if (!*Global_262145.f_33125 && cloudTimeAsInt < *Global_262145.f_33106)
			num = 0;
	}
	else if (hParam0 == -768236378)
	{
		if (!*Global_262145.f_33129 && cloudTimeAsInt < *Global_262145.f_33110)
			num = 0;
	}
	else if (hParam0 == 40817712)
	{
		if (!*Global_262145.f_33123 && cloudTimeAsInt < *Global_262145.f_33104)
			num = 0;
	}
	else if (hParam0 == -64075878)
	{
		if (!*Global_262145.f_33134 && cloudTimeAsInt < *Global_262145.f_33115)
			num = 0;
	}
	else if (hParam0 == -10917683)
	{
		if (!*Global_262145.f_33126 && cloudTimeAsInt < *Global_262145.f_33107)
			num = 0;
	}
	else if (hParam0 == -294678663)
	{
		if (!*Global_262145.f_33135 && cloudTimeAsInt < *Global_262145.f_33116)
			num = 0;
	}
	else if (hParam0 == -1855505138)
	{
		if (!*Global_262145.f_33137 && cloudTimeAsInt < *Global_262145.f_33118)
			num = 0;
	}
	else if (hParam0 == 775514032)
	{
		if (!*Global_262145.f_33128 && cloudTimeAsInt < *Global_262145.f_33109)
			num = 0;
	}
	else if (hParam0 == -893984159)
	{
		if (!*Global_262145.f_33136 && cloudTimeAsInt < *Global_262145.f_33117)
			num = 0;
	}
	else if (hParam0 == 274946574)
	{
		if (!*Global_262145.f_33139 && cloudTimeAsInt < *Global_262145.f_33120)
			num = 0;
	}
	else if (hParam0 == -165394758)
	{
		if (!*Global_262145.f_33124 && cloudTimeAsInt < *Global_262145.f_33105)
			num = 0;
	}
	else if (hParam0 == -1758379524)
	{
		if (!*Global_262145.f_33132 && cloudTimeAsInt < *Global_262145.f_33113)
			num = 0;
	}
	else if (hParam0 == -994371320)
	{
		if (!*Global_262145.f_33138 && cloudTimeAsInt < *Global_262145.f_33119)
			num = 0;
	}
	else if (hParam0 == 1706945532)
	{
		if (!*Global_262145.f_33130 && cloudTimeAsInt < *Global_262145.f_33111)
			num = 0;
	}
	else if (hParam0 == -1356880839)
	{
		if (!*Global_262145.f_33140 && cloudTimeAsInt < *Global_262145.f_33121)
			num = 0;
	}
	else if (hParam0 == -477831899)
	{
		if (!*Global_262145.f_33127 && cloudTimeAsInt < *Global_262145.f_33108)
			num = 0;
	}
	else if (hParam0 == -505223465)
	{
		if (!*Global_262145.f_33122 && cloudTimeAsInt < *Global_262145.f_33103)
			num = 0;
	}
	else if (hParam0 == 1384502824)
	{
		if (!*Global_262145.f_33962 && cloudTimeAsInt < *Global_262145.f_33946)
			num = 0;
	}
	else if (hParam0 == -1576586413)
	{
		if (!*Global_262145.f_33962 && cloudTimeAsInt < *Global_262145.f_33946)
			num = 0;
	}
	else if (hParam0 == -1249788006)
	{
		if (!*Global_262145.f_33971 && cloudTimeAsInt < *Global_262145.f_33954)
			num = 0;
	}
	else if (hParam0 == -1386336041)
	{
		if (!*Global_262145.f_33965 && cloudTimeAsInt < *Global_262145.f_33949)
			num = 0;
	}
	else if (hParam0 == -1627077503)
	{
		if (!*Global_262145.f_33959 && cloudTimeAsInt < *Global_262145.f_33943)
			num = 0;
	}
	else if (hParam0 == -1035489563)
	{
		if (!*Global_262145.f_33960 && cloudTimeAsInt < *Global_262145.f_33944)
			num = 0;
	}
	else if (hParam0 == 1748565021)
	{
		if (!*Global_262145.f_33957 && cloudTimeAsInt < *Global_262145.f_33941)
			num = 0;
	}
	else if (hParam0 == 2100457220)
	{
		if (!*Global_262145.f_33968 && cloudTimeAsInt < *Global_262145.f_33952)
			num = 0;
	}
	else if (hParam0 == 996383885)
	{
		if (!*Global_262145.f_33972 && cloudTimeAsInt < *Global_262145.f_33956)
			num = 0;
	}
	else if (hParam0 == -131348178)
	{
		if (!*Global_262145.f_33969 && cloudTimeAsInt < *Global_262145.f_33953)
			num = 0;
	}
	else if (hParam0 == 268758436)
	{
		if (!*Global_262145.f_33958 && cloudTimeAsInt < *Global_262145.f_33942)
			num = 0;
	}
	else if (hParam0 == 1076201208)
	{
		if (!*Global_262145.f_33961 && cloudTimeAsInt < *Global_262145.f_33945)
			num = 0;
	}
	else if (hParam0 == 669204833)
	{
		if (!*Global_262145.f_33970 && cloudTimeAsInt < *Global_262145.f_33955)
			num = 0;
	}
	else if (hParam0 == 1550581940)
	{
		if (!*Global_262145.f_33966 && cloudTimeAsInt < *Global_262145.f_33950)
			num = 0;
	}
	else if (hParam0 == -1933242328)
	{
		if (!*Global_262145.f_33967 && cloudTimeAsInt < *Global_262145.f_33951)
			num = 0;
	}
	else if (hParam0 == -461850249)
	{
		if (!*Global_262145.f_33964 && cloudTimeAsInt < *Global_262145.f_33948)
			num = 0;
	}
	else if (hParam0 == -956048545)
	{
		if (!*Global_262145.f_33963 && cloudTimeAsInt < *Global_262145.f_33947)
			num = 0;
	}

	return num;
}

BOOL func_265() // Position - 0x1254A Hash - 0x4C81F065 ^0x26D68D51
{
	return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}

BOOL func_266() // Position - 0x12560 Hash - 0x4C81F065 ^0x60494CEC
{
	return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}

BOOL func_267() // Position - 0x12576 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_268() // Position - 0x1257F Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_269() // Position - 0x12588 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_270() // Position - 0x12591 Hash - 0x64659D79 ^0xC3C726F6
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return true;

	return false;
}

BOOL func_271(Vehicle veParam0) // Position - 0x125AA Hash - 0xC71C0264 ^0x7D7842B9
{
	Hash entityModel;
	const char* vehicleNumberPlateText;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	vehicleNumberPlateText = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);

	if (entityModel == -810318068 && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G "))
		return true;

	if (!func_261(entityModel, false, -1))
		return true;

	return false;
}

BOOL func_272(Vehicle veParam0) // Position - 0x125F1 Hash - 0xA5B9FC6B ^0x23EADD90
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98042[i]))
			if (Global_98042[i] == veParam0)
				return true;
	}

	return false;
}

BOOL func_273(Vehicle veParam0) // Position - 0x1262C Hash - 0xB4CAAE6F ^0x153EF8BE
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98012[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98012[i], false))
				if (Global_98012[i] == veParam0 && ENTITY::GET_ENTITY_MODEL(Global_98012[i]) == ENTITY::GET_ENTITY_MODEL(veParam0))
					return true;
		}
	}

	return false;
}

BOOL func_274(Vehicle veParam0) // Position - 0x126A8 Hash - 0x7BB181DF ^0x17C4552A
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[24]))
		if (veParam0 == Global_77348.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (veParam0 == Global_77348.f_484[i])
					return true;
	}

	return false;
}

int func_275(Vehicle veParam0) // Position - 0x12790 Hash - 0x593067C2 ^0x2918B7DD
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 145;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return 145;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98012[i]))
			if (Global_98012[i] == veParam0)
				return Global_98022[i];
	}

	return 145;
}

BOOL func_276(Vehicle veParam0, int iParam1, BOOL bParam2) // Position - 0x127F3 Hash - 0xBCC62924 ^0x77695844
{
	int i;
	var garageName;
	int unk;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_277(iParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113648.f_7231[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_277(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x12861 Hash - 0x107A4B19 ^0xDF95E9C6
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case 1:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case 2:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

void func_278() // Position - 0x12938 Hash - 0x17878A26 ^0x17878A26
{
	Global_32402 = 0;
	Global_32403 = false;
	Global_32405 = false;
	Global_32406 = false;
	Global_32407 = false;
	return;
}

void func_279(BOOL bParam0) // Position - 0x12954 Hash - 0x1254D1D1 ^0x1254D1D1
{
	int i;

	for (i = 0; i < 60; i = i + 1)
	{
		func_174(i, bParam0);
	}

	return;
}

Vector3 func_280() // Position - 0x12977 Hash - 0x7B883B2C ^0x3CB96FD2
{
	float distanceBetweenCoords;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_339, true);
		iLocal_338 = 1;
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_342, true) < distanceBetweenCoords)
		{
			distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_342, true);
			iLocal_338 = 2;
		}
	
		if (iLocal_338 == 1)
		{
			iLocal_345 = 1;
			iLocal_54 = 1;
			return uLocal_339;
		}
	
		if (iLocal_338 == 2)
		{
			iLocal_345 = 2;
			iLocal_54 = 2;
			return uLocal_342;
		}
	}

	return 0f, 0f, 0f;
}

