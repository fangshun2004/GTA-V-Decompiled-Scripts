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
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	int iLocal_67 = 0;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_77 = { 0, 0, 0 } ;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	float fLocal_94 = 0f;
	struct<3> Local_95 = { 0, 0, 0 } ;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	struct<3> Local_102 = { 0, 0, 0 } ;
	float fLocal_105 = 0f;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int* iLocal_121 = NULL;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	struct<6> Local_126 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_132 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	bool bLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	char[] cLocal_176[8] = 0;
	char* sLocal_177 = NULL;
	char* sLocal_178 = NULL;
	char* sLocal_179 = NULL;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	float fLocal_182 = 0f;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	float fLocal_187 = 0f;
	struct<3> Local_188 = { 0, 0, 0 } ;
	var uLocal_191 = 0;
	int iLocal_192 = 0;
	var uLocal_193 = 16;
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
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
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

void __EntryFunction__()
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
	fLocal_13 = 0.001f;
	iLocal_16 = -1;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = -1f;
	iLocal_53 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_54 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_68 = { -3092.82f, 749.8f, 21.48f };
	Local_71 = { 181.8977f, 4415.152f, 73.463f };
	Local_74 = { 2743.461f, 4385.51f, 47.7521f };
	Local_77 = { -382.1346f, 2817.971f, 44.0671f };
	Local_95 = { -1034.6f, 4918.6f, 205.9f };
	StringCopy(&Local_126, "", 24);
	Local_61 = { ScriptParam_0.f_1[0 /*3*/] };
	func_280();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_83))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_83);
			}
		}
		func_257();
	}
	if (func_228(Local_61, 13, bLocal_80, 0, 0))
	{
		func_225(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_109)
		{
			if (!func_224())
			{
				if (func_223())
				{
					func_257();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_HL", 0);
			switch (iLocal_55)
			{
				case 0:
					if (func_211())
					{
						func_257();
					}
					if (!iLocal_60)
					{
						func_210();
					}
					else
					{
						func_209();
					}
					if (bLocal_59)
					{
						iLocal_141 = 1;
						iLocal_55 = 1;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						switch (iLocal_56)
						{
							case 0:
								if ((func_208() && iLocal_57 != 8) && iLocal_57 != 10)
								{
									if (!func_224())
									{
										func_199(1);
									}
									iLocal_56 = 1;
								}
								switch (iLocal_57)
								{
									case 0:
										func_192();
										break;
									
									case 1:
										func_190();
										break;
									
									case 2:
										if (func_189())
										{
										}
										iLocal_156 = MISC::GET_GAME_TIMER();
										if (iLocal_138 < 1 && !iLocal_139)
										{
											func_188();
										}
										if (iLocal_58 == 1)
										{
											func_187();
										}
										else if (iLocal_58 == 2)
										{
											func_186();
										}
										else if (iLocal_58 == 3)
										{
											func_185();
										}
										else if (iLocal_58 == 5)
										{
											func_182();
										}
										break;
									
									case 3:
										func_179();
										break;
									
									case 4:
										if (iLocal_58 == 1)
										{
											func_162();
											func_161();
										}
										else if (iLocal_58 == 3)
										{
											func_156();
											func_155();
										}
										else if (iLocal_58 == 5)
										{
											func_156();
											func_146();
										}
										if (!bLocal_112)
										{
											func_142();
											func_141();
											func_138();
											func_137();
											func_134();
											func_132();
											func_131();
											func_130();
										}
										func_122();
										break;
									
									case 6:
										func_70();
										if (iLocal_58 == 3)
										{
											func_155();
										}
										break;
									
									case 7:
										func_69();
										if (iLocal_58 == 3)
										{
											func_155();
										}
										break;
									
									case 8:
										if (iLocal_58 == 3)
										{
											func_65();
											func_155();
										}
										break;
									
									case 9:
										if (!PED::IS_PED_INJURED(iLocal_83))
										{
											if (ENTITY::IS_ENTITY_AT_COORD(iLocal_83, Local_91, 200f, 200f, 200f, false, true, 0))
											{
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_83, Local_91, 1f, -1, 0.25f, 0, 40000f);
											}
											else
											{
												TASK::TASK_WANDER_STANDARD(iLocal_83, 40000f, 0);
											}
											PED::SET_PED_KEEP_TASK(iLocal_83, true);
											SYSTEM::WAIT(5000);
										}
										func_61();
										break;
									
									case 10:
										break;
								}
								if ((func_60() && !func_59()) && iLocal_57 != 10)
								{
									if (!PED::IS_PED_INJURED(iLocal_83))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(iLocal_83, Local_95, 5f, 5f, 5f, false, true, 0))
										{
											func_58(0);
											SYSTEM::WAIT(0);
											func_56();
											iLocal_57 = 10;
										}
									}
								}
								if (func_55())
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
									{
										PED::DELETE_PED(&iLocal_83);
									}
									func_25();
								}
								break;
							
							case 1:
								func_56();
								SYSTEM::WAIT(0);
								if (iLocal_58 == 1)
								{
									func_1(&uLocal_193, cLocal_176, "REHH1_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_58 == 2)
								{
									func_1(&uLocal_193, cLocal_176, "REHH2_AGG", 4, 0, 0, 0);
								}
								else if (iLocal_58 == 3)
								{
									func_1(&uLocal_193, cLocal_176, "REHH3_AGG", 4, 0, 0, 0);
									if (!PED::IS_PED_INJURED(iLocal_84))
									{
										TASK::CLEAR_PED_TASKS(iLocal_84);
										TASK::TASK_SMART_FLEE_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
										PED::SET_PED_KEEP_TASK(iLocal_84, true);
									}
								}
								else if (iLocal_58 == 5)
								{
									func_1(&uLocal_193, cLocal_176, "REHH5_AGG", 4, 0, 0, 0);
								}
								if (!PED::IS_PED_INJURED(iLocal_83))
								{
									TASK::CLEAR_PED_TASKS(iLocal_83);
									TASK::TASK_SMART_FLEE_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
									PED::SET_PED_KEEP_TASK(iLocal_83, true);
									func_61();
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_257();
		}
		if (iLocal_57 > 2)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
				{
					if (!PED::IS_PED_INJURED(iLocal_83))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, false, true, 0))
						{
							func_61();
						}
					}
				}
			}
		}
		if (iLocal_57 > 0 && iLocal_57 < 8)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_INJURED(iLocal_83))
				{
					if (!func_224())
					{
						func_199(1);
					}
					func_61();
				}
				else if (!PED::IS_PED_RAGDOLL(iLocal_83))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), false))
					{
						TASK::CLEAR_PED_TASKS(iLocal_83);
						TASK::TASK_SMART_FLEE_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						func_61();
					}
				}
			}
		}
	}
}

bool func_1(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_24(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22990 = 0;
	Global_22992 = 0;
	Global_22997 = 0;
	Global_23974 = 0;
	Global_23976 = 0;
	Global_23980 = 0;
	Global_2883585 = 0;
	return func_2(sParam2, iParam3, 0);
}

int func_2(char* sParam0, int iParam1, bool bParam2)
{
	Global_22984 = 0;
	if (Global_22983 == 0 || Global_22985 == 2)
	{
		if (Global_22983 != 0)
		{
			if (iParam1 > Global_22985)
			{
				if (Global_22990 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21610.f_1 = 3;
					Global_22983 = 0;
					Global_22984 = 1;
					Global_23036 = 0;
					Global_22979 = 0;
					Global_22980 = 0;
					Global_22994 = 0;
					Global_22993 = 0;
					Global_21609 = 0;
				}
				else
				{
					func_23();
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
		if (func_22(8, -1))
		{
			return 0;
		}
		Global_23059 = { Global_23053 };
		func_21();
		Global_22272 = { Global_22437 };
		Global_22989 = Global_22990;
		Global_22996 = Global_22997;
		Global_2883586 = Global_2883585;
		Global_22998 = { Global_23014 };
		Global_22991 = Global_22992;
		Global_23973 = Global_23974;
		Global_23981 = { Global_23987 };
		Global_23975 = Global_23976;
		Global_23977 = Global_23978;
		Global_23979 = Global_23980;
		Global_22602.f_370 = Global_23972;
		Global_22602.f_368 = Global_23970;
		Global_22602.f_369 = Global_23971;
		Global_22979 = Global_22980;
		if (Global_22989)
		{
			MISC::CLEAR_BIT(&Global_9463, 20);
			MISC::CLEAR_BIT(&Global_9464, 17);
			MISC::CLEAR_BIT(&Global_9465, false);
			if (bParam2)
			{
				func_13();
				if (Global_10285[Global_21610 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_21610.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_21576 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_12())
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
				if (!Global_80280)
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
			if (func_11())
			{
				return 0;
			}
			else
			{
				switch (Global_21610.f_1)
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
				if (BitTest(Global_9463, 9))
				{
					return 0;
				}
			}
			func_10();
			Global_22993 = bParam2;
		}
		Global_22985 = iParam1;
		StringCopy(&Global_22602, sParam0, 24);
		Global_21849 = 0;
		func_9();
		func_3();
		return 1;
	}
	if (Global_22983 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22985 || iParam1 == Global_22985)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_23();
	}
	return 0;
}

void func_3()
{
	if (!func_4())
	{
		return;
	}
	if (Global_22989)
	{
		MemCopy(&(Global_1978568.f_1), {Global_22602}, 4);
		Global_1978568 = Global_8778;
		Global_1978568.f_6 = Global_22993;
	}
}

int func_4()
{
	if (!Global_262145.f_28485)
	{
		return 0;
	}
	if (!Global_80280)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_8())
	{
		return 0;
	}
	if (func_5(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

int func_5(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_7(8))
		{
			return 1;
		}
		if (Global_2733002.f_5971.f_1 > 0)
		{
			return 1;
		}
	}
	return func_6(iParam0, 20);
}

var func_6(int iParam0, int iParam1)
{
	return BitTest(Global_1892653[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_7(int iParam0)
{
	return BitTest(Global_2733002.f_5960, iParam0);
}

int func_8()
{
	return -1;
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21851[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22983 = 1;
}

void func_10()
{
	Global_23036 = Global_23035;
	Global_23030 = Global_23031;
	Global_23077 = { Global_23065 };
	Global_23083 = { Global_23071 };
	Global_23038 = Global_23037;
	Global_23107 = { Global_23089 };
	Global_23113 = { Global_23095 };
	Global_23119 = { Global_23101 };
	Global_23125 = { Global_23131 };
	Global_8778 = Global_8779;
	Global_8780 = Global_8781;
	Global_22994 = Global_22995;
	Global_22996 = Global_22997;
	Global_22998 = { Global_23014 };
	Global_22987 = Global_22988;
	Global_23999 = 0;
	Global_23032 = 0;
	Global_23033 = 0;
	MISC::CLEAR_BIT(&Global_9464, 16);
}

int func_11()
{
	if (Global_21610.f_1 == 1 || Global_21610.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	int iVar0;
	int iVar1;
	
	if (Global_80280)
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

void func_13()
{
	if (func_20(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[0 /*29*/])
			{
				Global_21610 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[1 /*29*/])
			{
				Global_21610 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[2 /*29*/])
			{
				Global_21610 = 2;
			}
			else
			{
				Global_21610 = 0;
			}
		}
	}
	else
	{
		Global_21610 = func_14();
		if (Global_21610 == 145)
		{
			Global_21610 = 3;
		}
		if (Global_80280)
		{
			Global_21610 = 3;
		}
		if (Global_21610 > 3)
		{
			Global_21610 = 3;
		}
	}
}

int func_14()
{
	func_15();
	return Global_114904.f_2370.f_539.f_4321;
}

void func_15()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_18(Global_114904.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_17(PLAYER::PLAYER_PED_ID());
			if (func_16(iVar0) && (!func_20(14) || Global_113852))
			{
				if (Global_114904.f_2370.f_539.f_4321 != iVar0 && func_16(Global_114904.f_2370.f_539.f_4321))
				{
					Global_114904.f_2370.f_539.f_4322 = Global_114904.f_2370.f_539.f_4321;
				}
				Global_114904.f_2370.f_539.f_4323 = iVar0;
				Global_114904.f_2370.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114904.f_2370.f_539.f_4321 != 145)
			{
				Global_114904.f_2370.f_539.f_4323 = Global_114904.f_2370.f_539.f_4321;
			}
			return;
		}
	}
	Global_114904.f_2370.f_539.f_4321 = 145;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return func_19(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_19(int iParam0)
{
	return Global_2339[iParam0 /*29*/];
}

bool func_20(int iParam0)
{
	return Global_44869 == iParam0;
}

void func_21()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_22272[iVar0 /*10*/] = 0;
		StringCopy(&(Global_22272[iVar0 /*10*/].f_1), "", 24);
		Global_22272[iVar0 /*10*/].f_7 = 0;
		Global_22272[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_22272.f_161 = -99;
	Global_22272.f_162 = { 0f, 0f, 0f };
}

bool func_22(int iParam0, int iParam1)
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

void func_23()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23994 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21610.f_1 == 9) || Global_21609 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22983 = 6;
		Global_21610.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22983 = 6;
		return;
	}
}

void func_24(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_22437 = { *uParam0 };
	Global_8779 = iParam1;
	StringCopy(&Global_23053, sParam2, 24);
	Global_23972 = iParam5;
	if (iParam3 == 0)
	{
		Global_23970 = 1;
		Global_23968 = 0;
	}
	else
	{
		Global_23970 = 0;
		Global_23968 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23971 = 1;
		Global_23969 = 0;
	}
	else
	{
		Global_23971 = 0;
		Global_23969 = 1;
	}
}

void func_25()
{
	while (!func_54())
	{
		SYSTEM::WAIT(0);
	}
	func_49(func_14(), 4, 5);
	func_29(13, bLocal_80);
	func_26();
	func_257();
}

void func_26()
{
	func_27();
}

int func_27()
{
	if (func_28(0))
	{
		return 0;
	}
	if (Global_102468.f_8)
	{
		if (Global_102468.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_102468.f_10 > 1)
	{
		return 0;
	}
	Global_102468.f_10++;
	return 1;
}

int func_28(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_80529, 0);
}

void func_29(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_47();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_46(iParam0))
	{
		func_45(iParam0, bParam1);
		if (!func_44(51))
		{
			func_40("RE_REWARD", 1, 0, 4000, 10000, func_43(), 0, 138, 0);
			func_39(51);
		}
		if (func_38(iParam0))
		{
			Global_114904.f_25002.f_2 = 3;
		}
		if (func_37(iParam0, bParam1) != 322)
		{
			func_31(func_37(iParam0, bParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_114892 = bParam1;
		if (Global_114890 == 0)
		{
			if (((Global_114893 == 1 || Global_114893 == 5) || Global_114893 == 11) || Global_114893 == 25)
			{
				func_30(2);
			}
			else if ((Global_114893 == 26 || Global_114893 == 8) || Global_114893 == 17)
			{
				func_30(7);
			}
			else
			{
				func_30(1);
			}
		}
	}
}

void func_30(int iParam0)
{
	Global_114890 = iParam0;
}

void func_31(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_35((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_114904.f_10201[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114904.f_10201[iParam0 /*12*/].f_6 == 11 || Global_114904.f_10201[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_114904.f_10201[iParam0 /*12*/].f_5 = 1;
		Global_114904.f_10201[iParam0 /*12*/].f_10 = uParam1;
		Global_114904.f_10201[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_32();
	}
}

void func_32()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_114640 = 0;
	Global_114641 = 0;
	Global_114642 = 0;
	Global_114643 = 0;
	Global_114644 = 0;
	Global_114645 = 0;
	Global_114646 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_114904.f_10201.f_3853;
	Global_114904.f_10201.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_114904.f_10201[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_114904.f_10201[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_114640++;
					fVar1 = (fVar1 + Global_114904.f_10201[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_114641++;
					fVar2 = (fVar2 + Global_114904.f_10201[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_114642++;
					fVar3 = (fVar3 + Global_114904.f_10201[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_114643++;
					fVar4 = (fVar4 + Global_114904.f_10201[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_114644++;
					fVar5 = (fVar5 + (Global_114904.f_10201[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_114645++;
					fVar6 = (fVar6 + Global_114904.f_10201[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_114646++;
					fVar7 = (fVar7 + Global_114904.f_10201[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_114623 > 0)
	{
		if (Global_114640 == Global_114623)
		{
			fVar1 = 55f;
		}
	}
	if (Global_114624 > 0)
	{
		if (Global_114641 == Global_114624)
		{
			fVar2 = 10f;
		}
	}
	if (Global_114625 > 0)
	{
		if (Global_114642 == Global_114625)
		{
			fVar3 = 0f;
		}
	}
	if (Global_114626 > 0)
	{
		if (Global_114643 == Global_114626)
		{
			fVar4 = 10f;
		}
	}
	if (Global_114627 > 0)
	{
		if (((Global_114644 == Global_114627 || (Global_114627 * 10 / Global_114644) < 41) || Global_114644 > Global_114630) || Global_114644 == Global_114630)
		{
			if (!BitTest(Global_114904.f_10201.f_3856, 14))
			{
				if (Global_114644 == Global_114627)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_114627, 0);
					MISC::SET_BIT(&(Global_114904.f_10201.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_114628 > 0)
	{
		if (Global_114645 == Global_114628)
		{
			fVar6 = 15f;
		}
	}
	if (Global_114629 > 0)
	{
		if (Global_114646 == Global_114629)
		{
			fVar7 = 5f;
		}
	}
	Global_114904.f_10201.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_114644 > Global_114630 || Global_114644 == Global_114630)
	{
		iVar9 = Global_114630;
	}
	else
	{
		iVar9 = Global_114644;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_114640, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_114623, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_114641, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_114624, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_114642, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_114625, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_114643, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_114626, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_114630, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_114646 + Global_114645), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_114629 + Global_114628), true);
	Global_114647 = (Global_114640 * 100 / Global_114623);
	Global_114649 = ((Global_114642 + Global_114641) * 100 / (Global_114625 + Global_114624));
	Global_114648 = ((Global_114643 + iVar9) * 100 / (Global_114626 + Global_114630));
	Global_114650 = ((Global_114645 + Global_114646) * 100 / (Global_114628 + Global_114629));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_114904.f_10201.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_114647, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_114648, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_114649, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_114904.f_10201.f_3853))
	{
		func_34(13, SYSTEM::FLOOR(Global_114904.f_10201.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_80280)
		{
			if (func_33() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_114638 = 0;
				}
				if (!Global_65010)
				{
					func_27();
				}
			}
		}
	}
}

int func_33()
{
	return Global_33775;
}

int func_34(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_35(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_36()
{
	return Global_1574927;
}

int func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_114904.f_20417.f_150[iVar1]), iVar0);
	}
}

void func_40(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_41(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_41(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_114904.f_20417.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_20417[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_114904.f_20417.f_145 < 9)
	{
		StringCopy(&(Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_4), sParam1, 16);
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_9 = iParam5;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_11 = iParam6;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_12 = uParam2;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_13 = iParam7;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_14 = iParam8;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_10 = -1;
		}
		Global_114904.f_20417.f_145++;
		func_42();
	}
}

void func_42()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_114904.f_20417.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114904.f_20417.f_145)
	{
		if (BitTest(Global_114904.f_20417[iVar0 /*16*/].f_11, 0))
		{
			if (Global_114904.f_20417[iVar0 /*16*/].f_12 > Global_114904.f_20417.f_146[0])
			{
				Global_114904.f_20417.f_146[0] = Global_114904.f_20417[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114904.f_20417[iVar0 /*16*/].f_11, 1))
		{
			if (Global_114904.f_20417[iVar0 /*16*/].f_12 > Global_114904.f_20417.f_146[1])
			{
				Global_114904.f_20417.f_146[1] = Global_114904.f_20417[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114904.f_20417[iVar0 /*16*/].f_11, 2))
		{
			if (Global_114904.f_20417[iVar0 /*16*/].f_12 > Global_114904.f_20417.f_146[2])
			{
				Global_114904.f_20417.f_146[2] = Global_114904.f_20417[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_43()
{
	func_15();
	switch (Global_114904.f_2370.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_114904.f_20417.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_45(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_114904.f_25002.f_8[iParam0]), iParam1);
}

int func_46(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_47()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_48(Var0);
	return uVar16;
}

int func_48(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_114904.f_2370.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_114904.f_2370.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 16715;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 16715)
			{
				iVar0 = func_53(iVar1, -1);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_50(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_50(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 16715)
	{
		iVar0 = func_51(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_51(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_52(uParam1));
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
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

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 16715)
	{
		iVar0 = func_51(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_54()
{
	return 1;
}

int func_55()
{
	if (Global_34015)
	{
		func_30(4);
		return 1;
	}
	return 0;
}

void func_56()
{
	Global_21849 = 0;
	func_57();
}

void func_57()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23994 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22983 = 6;
	}
}

void func_58(int iParam0)
{
	Global_23994 = iParam0;
}

int func_59()
{
	if (Global_114904.f_25002.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_60()
{
	return Global_34014;
}

void func_61()
{
	func_63();
	while (func_62())
	{
		SYSTEM::WAIT(0);
	}
	func_257();
}

int func_62()
{
	if (Global_22983 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	Global_21849 = 0;
	func_64();
}

void func_64()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23994 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22983 = 6;
		return;
	}
}

void func_65()
{
	struct<6> Var0;
	
	if (!PED::IS_PED_INJURED(iLocal_84) && !PED::IS_PED_INJURED(iLocal_83))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_84, 25f, 25f, 25f, false, true, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 40f, 40f, 40f, false, true, 0))
		{
			TASK::CLEAR_PED_TASKS(iLocal_84);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_84, Local_91, 1f, -1, 0.25f, 0, 40000f);
			func_25();
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), true))
		{
			if (func_62())
			{
				Var0 = { func_68() };
				if ((MISC::ARE_STRINGS_EQUAL(&Var0, "REHH3_JB_2") || MISC::ARE_STRINGS_EQUAL(&Var0, "REHH3_JB_4")) || MISC::ARE_STRINGS_EQUAL(&Var0, "REHH3_JB_6"))
				{
					func_56();
				}
			}
		}
		if (SYSTEM::TIMERB() > 5000)
		{
			if (PED::IS_PED_IN_COMBAT(iLocal_84, PLAYER::PLAYER_PED_ID()))
			{
				iLocal_157 = 4;
			}
		}
	}
	if (!iLocal_111)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), true))
			{
				if (!PED::IS_PED_INJURED(iLocal_84))
				{
					func_56();
					SYSTEM::WAIT(0);
					func_1(&uLocal_193, cLocal_176, "REHH3_JB2", 4, 0, 0, 0);
					iLocal_111 = 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_83))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
		}
		if (PED::IS_PED_INJURED(iLocal_84) && ENTITY::IS_ENTITY_AT_COORD(iLocal_83, ENTITY::GET_ENTITY_COORDS(iLocal_84, false), 1f, 1f, 5f, false, true, 0))
		{
			iLocal_157 = 5;
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_84))
	{
		TASK::TASK_COMBAT_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 0, 16);
		func_61();
	}
	else
	{
		func_61();
	}
	if (!iLocal_166)
	{
		if (PED::IS_PED_INJURED(iLocal_84))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_120))
			{
				HUD::REMOVE_BLIP(&iLocal_120);
			}
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				iLocal_157 = 3;
			}
		}
	}
	if (!iLocal_168)
	{
		if (!PED::IS_PED_INJURED(iLocal_83) && !PED::IS_PED_INJURED(iLocal_84))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					iLocal_157 = 2;
				}
			}
		}
		if (PED::IS_PED_INJURED(iLocal_84))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_120))
			{
				HUD::REMOVE_BLIP(&iLocal_120);
			}
			func_67(&uLocal_193, 4);
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), true) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				iLocal_157 = 2;
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_83, iLocal_84, true))
			{
				iLocal_157 = 2;
			}
		}
	}
	switch (iLocal_157)
	{
		case 0:
			if (!iLocal_166)
			{
				if (!PED::IS_PED_INJURED(iLocal_83) && !PED::IS_PED_INJURED(iLocal_84))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false) && PED::IS_PED_IN_MELEE_COMBAT(iLocal_84))
					{
						if (!iLocal_167)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_84, -1, 2052, 2);
							TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0f, false, false, false);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_84, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
							iLocal_167 = 1;
						}
					}
				}
			}
			else
			{
				func_25();
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_83, 0, 0);
				SYSTEM::SETTIMERB(0);
				iLocal_157 = 0;
			}
			break;
		
		case 2:
			if (!iLocal_168)
			{
				if (!PED::IS_PED_INJURED(iLocal_83))
				{
					func_56();
					SYSTEM::WAIT(0);
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_GUN", 4, 0, 0, 0);
					}
					else
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_AGG", 4, 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_83))
					{
						TASK::CLEAR_PED_TASKS(iLocal_83);
						TASK::TASK_SMART_FLEE_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						if (!PED::IS_PED_INJURED(iLocal_84))
						{
							AUDIO::PLAY_PAIN(iLocal_84, 6, 0, 0);
							TASK::TASK_SMART_FLEE_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						}
					}
					func_25();
					iLocal_168 = 1;
					iLocal_157 = 0;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				func_56();
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_83))
				{
					AUDIO::PLAY_PAIN(iLocal_83, 7, 0, 0);
				}
				func_1(&uLocal_193, cLocal_176, "REHH3_BAS", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_83) && ENTITY::DOES_ENTITY_EXIST(iLocal_84))
				{
					TASK::CLEAR_PED_TASKS(iLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0f, false, false, false);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_84, -1, 2052, 4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_84, false), 1f, -1, 3f, 0, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_84, -1);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 1, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "f_distressed_loop", 2f, -2f, -1, 49, 0f, false, false, false);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					PED::SET_PED_KEEP_TASK(iLocal_83, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_83, false);
					SYSTEM::WAIT(10000);
					iLocal_166 = 1;
					iLocal_157 = 0;
				}
			}
			break;
		
		case 4:
			if (func_66())
			{
				if (!PED::IS_PED_INJURED(iLocal_83))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 15f, 15f, 15f, false, true, 0))
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH3_NOO", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_157 = 0;
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (func_1(&uLocal_193, cLocal_176, "REHH3_FHT", 4, 0, 0, 0))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_157 = 0;
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				func_63();
				SYSTEM::WAIT(0);
				if (func_1(&uLocal_193, cLocal_176, "REHH3_ATT", 4, 0, 0, 0))
				{
					iLocal_157 = 0;
				}
			}
			break;
	}
}

int func_66()
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_67(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

struct<6> func_68()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22983 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_23993);
		if (iVar6 > -1)
		{
			return Global_21851[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_69()
{
	if (iLocal_58 == 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_83))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_83);
			}
			iLocal_57 = 8;
		}
	}
}

void func_70()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_81))
	{
		HUD::REMOVE_BLIP(&iLocal_81);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_82))
	{
		HUD::REMOVE_BLIP(&iLocal_82);
	}
	if (iLocal_58 == 1)
	{
		AUDIO::STOP_SOUND(iLocal_175);
		AUDIO::STOP_AUDIO_SCENE("TIMER_SCENE");
		if (!iLocal_122)
		{
			func_56();
			SYSTEM::WAIT(0);
			func_1(&uLocal_193, cLocal_176, "REHH1_TKA", 4, 0, 0, 0);
			CAM::SET_GAMEPLAY_COORD_HINT(-1055.515f, -2533.221f, 19.3049f, -1, 3000, 2000, 0);
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				func_95(func_14(), 1, 100, 0, 1);
				func_94(198, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 8000, 2052, 4);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 3000, 4194369);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1055.515f, -2533.221f, 19.3049f, 2f, -1, 0.25f, 1, 40000f);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1046.832f, -2518.146f, 12.9447f, 2f, -1, 40000f, 0.5f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				PED::SET_PED_KEEP_TASK(iLocal_83, true);
				SYSTEM::SETTIMERB(0);
				iLocal_122 = 1;
			}
		}
		if (SYSTEM::TIMERB() < 7000)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 75, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			PAD::DISABLE_CONTROL_ACTION(0, 79, true);
			PAD::DISABLE_CONTROL_ACTION(0, 323, true);
			PAD::DISABLE_CONTROL_ACTION(0, 324, true);
			PAD::DISABLE_CONTROL_ACTION(0, 26, true);
			PAD::DISABLE_CONTROL_ACTION(0, 310, true);
			PAD::DISABLE_CONTROL_ACTION(0, 4, true);
			PAD::DISABLE_CONTROL_ACTION(0, 307, true);
			PAD::DISABLE_CONTROL_ACTION(0, 5, true);
			PAD::DISABLE_CONTROL_ACTION(0, 1, true);
			PAD::DISABLE_CONTROL_ACTION(0, 308, true);
			PAD::DISABLE_CONTROL_ACTION(0, 6, true);
			PAD::DISABLE_CONTROL_ACTION(0, 2, true);
			PAD::DISABLE_CONTROL_ACTION(0, 309, true);
			PAD::DISABLE_CONTROL_ACTION(0, 3, true);
		}
		if (SYSTEM::TIMERB() > 3000 && SYSTEM::TIMERB() < 7000)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		else if (SYSTEM::TIMERB() > 7000)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::STOP_GAMEPLAY_HINT(false);
			if (SYSTEM::TIMERB() > 8500 && !iLocal_124)
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_124 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83) || SYSTEM::TIMERB() > 15000)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_83, -1046.832f, -2518.146f, 12.9447f, 20f, 20f, 5f, false, true, 0) || SYSTEM::TIMERB() > 15000)
			{
				PED::DELETE_PED(&iLocal_83);
				func_25();
			}
		}
	}
	else if (iLocal_58 == 2)
	{
		if (!iLocal_122)
		{
			func_56();
			SYSTEM::WAIT(0);
			func_1(&uLocal_193, cLocal_176, "REHH2_TKB", 4, 0, 0, 0);
			iLocal_122 = 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			if (!PED::IS_PED_RAGDOLL(iLocal_83))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
				TASK::TASK_PAUSE(0, 4500);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194369);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3323.43f, 5166.832f, 17.406f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3320.684f, 5186.017f, 17.4016f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 3303.612f, 5185.269f, 18.7155f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				PED::SET_PED_KEEP_TASK(iLocal_83, true);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 5000, 2052, 2);
				PED::REMOVE_PED_FROM_GROUP(iLocal_83);
				SYSTEM::WAIT(1000);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (func_14() == 0)
				{
					func_74(9, 1, 0);
				}
				else if (func_14() == 1)
				{
					func_74(9, 1, 1);
				}
				else if (func_14() == 2)
				{
					func_74(9, 1, 2);
				}
				SYSTEM::WAIT(8000);
				func_25();
			}
		}
	}
	else if (iLocal_58 == 3)
	{
		if (SYSTEM::TIMERA() > 1000)
		{
			if (func_1(&uLocal_193, cLocal_176, "REHH3_JB", 4, 0, 0, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_84))
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_84, true);
					if (!HUD::DOES_BLIP_EXIST(iLocal_119))
					{
						HUD::REMOVE_BLIP(&iLocal_119);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_120))
					{
						iLocal_120 = func_71(iLocal_84, 1, 145);
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 17f, 1f, 2f, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					PED::SET_PED_KEEP_TASK(iLocal_84, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_84, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					PED::ADD_RELATIONSHIP_GROUP("rghBoyfriend", &iLocal_192);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_84, iLocal_192);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, joaat("COP"), iLocal_192);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -183807561, iLocal_192);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_192, -183807561);
					SYSTEM::SETTIMERA(0);
					iLocal_57 = 7;
				}
			}
		}
	}
	else if (iLocal_58 == 5)
	{
		if (!iLocal_122)
		{
			func_56();
			SYSTEM::WAIT(0);
			func_1(&uLocal_193, cLocal_176, "REHH5_THX", 4, 0, 0, 0);
			iLocal_122 = 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194369);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2052, 2);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -346.029f, 632.2272f, 171.2525f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -346.6342f, 627.3992f, 170.3573f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -355.2473f, 622.1964f, 170.3572f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -355.6499f, 615.3431f, 170.3572f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -350.163f, 605.0463f, 170.7292f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -333.177f, 594.991f, 170.7553f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
			TASK::TASK_PAUSE(0, -1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
			PED::SET_PED_KEEP_TASK(iLocal_83, true);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 5000, 2052, 2);
			PED::REMOVE_PED_FROM_GROUP(iLocal_83);
		}
		SYSTEM::WAIT(2000);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		SYSTEM::WAIT(3000);
		func_25();
	}
}

int func_71(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_72(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2339[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2339[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_72(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_73(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_73(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_73(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_73(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_74(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_93();
	}
	if (func_92(iParam2) == 4)
	{
	}
	bVar0 = Global_114904.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_90(func_91(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_90(func_91(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_114904.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_89(iParam0, 0);
			func_84(func_91(iParam0), func_92(iParam2), 1);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					MISC::SET_BIT(&(Global_2359296[func_83() /*5574*/].f_681.f_1273), iParam0);
					func_80(-60084924, 15, 0);
					break;
			}
			func_79(iVar1);
			func_78(iParam0, iVar1);
			Global_113897.f_15[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
	else if (bVar0)
	{
		func_75(func_91(iParam0), func_92(iParam2));
	}
}

void func_75(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_118[iParam0 /*10*/].f_8 != 198)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_77(iParam0, iVar0, 0);
			func_76(iParam0, iVar0, 0);
		}
	}
}

void func_76(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2339[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_114904.f_28058[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_77(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2339[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_114904.f_28058[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_78(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_113897.f_4[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
	}
	else
	{
		Global_113897.f_4[iParam0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000));
	}
}

void func_79(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_113897.f_3 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		Global_113897.f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000));
	}
}

void func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_82(iParam1, iParam2))
	{
		iVar0 = func_81();
		Global_2696856[iVar0] = iParam1;
		Global_2696867[iVar0] = iParam0;
	}
}

int func_81()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2696856[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_82(int iParam0, var uParam1)
{
	if (Global_1575078)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575090) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_83()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_84(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_10166 = iParam0;
	if (Global_118[iParam0 /*10*/].f_8 != 198)
	{
		func_13();
		if (iParam1 == 4)
		{
			func_77(iParam0, 0, 1);
			func_77(iParam0, 1, 1);
			func_77(iParam0, 2, 1);
			func_76(iParam0, 0, 1);
			func_76(iParam0, 1, 1);
			func_76(iParam0, 2, 1);
		}
		else
		{
			if (func_88(iParam0, iParam1) == 1 && func_87(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_77(iParam0, iVar0, 1);
			func_76(iParam0, iVar0, 1);
			if (iParam0 == 172 && !BitTest(Global_2733002.f_5840, 4))
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !BitTest(Global_2733002.f_5840, 3))
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !BitTest(Global_2733002.f_5840, 3))
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_80280)
			{
				if (iParam1 != 4)
				{
					if (Global_21610 != iParam1)
					{
						Global_10139[iParam1 /*4*/] = { func_86(iParam0) };
						Global_10156[iParam1] = 1;
						Global_10161[iParam1] = iParam0;
					}
					else if (iParam0 == Global_21610)
					{
					}
					else
					{
						Global_10090[1 /*6*/] = { func_86(iParam0) };
						Global_10090[1 /*6*/].f_5 = iParam1;
						func_85();
					}
				}
				else
				{
					Global_10090[1 /*6*/] = { func_86(iParam0) };
					Global_10090[1 /*6*/].f_5 = iParam1;
					func_85();
				}
			}
			else
			{
				Global_10090[1 /*6*/] = { func_86(iParam0) };
				Global_10090[1 /*6*/].f_5 = iParam1;
				func_85();
			}
		}
	}
}

void func_85()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[Global_10166 /*29*/].f_7)), 64);
	if (Global_10185 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_10090[1 /*6*/])), 64);
		sVar32 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_10090[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_9463, false);
}

struct<4> func_86(int iParam0)
{
	return Global_2339[iParam0 /*29*/].f_3;
}

int func_87(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2339[iParam0 /*29*/].f_24[iParam1];
}

int func_88(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2339[iParam0 /*29*/].f_12[iParam1];
}

void func_89(int iParam0, int iParam1)
{
	Global_114904.f_243[func_93() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_90(int iParam0, int iParam1)
{
	if (func_88(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

int func_93()
{
	int iVar0;
	
	iVar0 = func_14();
	switch (iVar0)
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
		
		default:
			switch (func_52(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

void func_94(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_114904.f_8620[iParam0] = 1;
	Global_114904.f_8620.f_236[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_95(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_121(iParam0) == 3)
	{
		return;
	}
	if (func_121(iParam0) == 4)
	{
		return;
	}
	func_96(func_121(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
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
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, true);
	}
}

int func_96(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_120();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_119(99, 1);
					func_118(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_118(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_118(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_104(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_102(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
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
							func_118(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_118(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_118(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_102(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_118(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_118(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_118(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_118(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_118(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_118(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_118(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_118(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_118(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_118(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_118(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_118(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_118(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_118(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_118(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_102(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_118(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_118(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_118(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_118(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_118(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_118(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_101(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_119(95, iParam3);
					break;
				
				case 1:
					func_119(97, iParam3);
					break;
				
				case 2:
					func_119(96, iParam3);
					break;
			}
			func_119(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_99(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_99(bVar1);
	}
	iVar5 = (Global_62184[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_62184[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_62184[iVar2] = 2147483647;
				}
				else
				{
					Global_62184[iVar2] = (Global_62184[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_118(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_118(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_118(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_62184[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_62184[iVar2];
			Global_62184[iVar2] = (Global_62184[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_114904.f_20571.f_233[iVar2 /*69*/].f_2[Global_114904.f_20571.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_114904.f_20571.f_233[iVar2 /*69*/].f_2[Global_114904.f_20571.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114904.f_20571.f_233[iVar2 /*69*/].f_2[Global_114904.f_20571.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114904.f_20571.f_233[iVar2 /*69*/]++;
		Global_114904.f_20571.f_233[iVar2 /*69*/].f_1++;
		if (Global_114904.f_20571.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_114904.f_20571.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_98(iParam0);
	if (Global_44869 == 15)
	{
		func_97(0);
	}
	return 1;
}

void func_97(bool bParam0)
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
			Global_114904.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_114904.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_114904.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_114904.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_114904.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_114904.f_20571.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_62192[iVar0 /*3*/][0] = Global_114904.f_20571[iVar0];
		Global_62192.f_31[iVar0 /*3*/][0] = Global_114904.f_20571.f_11[iVar0];
		Global_62192.f_62[iVar0 /*3*/][0] = Global_114904.f_20571.f_22[iVar0];
		Global_62192.f_93[iVar0 /*3*/][0] = Global_114904.f_20571.f_33[iVar0];
		Global_62192.f_124[iVar0 /*3*/][0] = Global_114904.f_20571.f_44[iVar0];
		Global_62192.f_155[iVar0 /*3*/][0] = Global_114904.f_20571.f_55[iVar0];
		Global_62192.f_186[iVar0 /*3*/][0] = Global_114904.f_20571.f_66[iVar0];
		Global_62192.f_217[iVar0 /*3*/][0] = Global_114904.f_20571.f_77[iVar0];
		Global_62192.f_248[iVar0 /*3*/][0] = Global_114904.f_20571.f_88[iVar0];
		if (!bParam0)
		{
			Global_62192[iVar0 /*3*/][1] = Global_114904.f_20571[iVar0];
			Global_62192.f_31[iVar0 /*3*/][1] = Global_114904.f_20571.f_11[iVar0];
			Global_62192.f_62[iVar0 /*3*/][1] = Global_114904.f_20571.f_22[iVar0];
			Global_62192.f_93[iVar0 /*3*/][1] = Global_114904.f_20571.f_33[iVar0];
			Global_62192.f_124[iVar0 /*3*/][1] = Global_114904.f_20571.f_44[iVar0];
			Global_62192.f_155[iVar0 /*3*/][1] = Global_114904.f_20571.f_55[iVar0];
			Global_62192.f_186[iVar0 /*3*/][1] = Global_114904.f_20571.f_66[iVar0];
			Global_62192.f_217[iVar0 /*3*/][1] = Global_114904.f_20571.f_77[iVar0];
			Global_62192.f_248[iVar0 /*3*/][1] = Global_114904.f_20571.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_98(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_62184[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_99(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_35(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_35(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_35(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_35(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_50(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_50(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_50(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_50(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_50(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_50(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_114904.f_20571.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_114904.f_20571.f_471), bParam0);
		}
	}
	else if (BitTest(Global_114904.f_20571.f_471, bParam0) || BitTest(Global_2359296[func_83() /*5574*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_114904.f_20571.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_83() /*5574*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_100(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_100(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

void func_101(int iParam0)
{
	func_119(93, iParam0);
	func_119(29, iParam0);
	func_119(30, iParam0);
}

int func_102(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_103(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_103(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_103(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_103(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_53(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_53(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_53(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_53(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_53(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_53(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_114904.f_20571.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_83() /*5574*/].f_681.f_10, iParam0);
}

bool func_103(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_104(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, true);
		func_34(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_105(27, 1);
	return 1;
}

int func_105(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_106(iParam0, iParam1);
}

int func_106(int iParam0, int iParam1)
{
	if (func_20(14) && !func_117(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_34026 != 0 && !Global_80280)
	{
		return 0;
	}
	if (func_116(&Global_4525144))
	{
		if (func_114(&Global_4525144, iParam0))
		{
			return 0;
		}
		if (func_107(&Global_4525144, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_107(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_20(14) && !func_117(iParam1))
	{
		return 0;
	}
	if (func_114(uParam0, iParam1))
	{
		return 0;
	}
	if (func_113(uParam0) < 0f)
	{
		func_112(uParam0, 0);
	}
	func_110(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_108(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_108(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_20(14) && !func_117(iParam1))
	{
		return 0;
	}
	if (func_114(uParam0, iParam1))
	{
		return 0;
	}
	if (func_113(uParam0) < 0f)
	{
		func_112(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_109(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_109(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_110(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_111(uParam0, iVar0);
		iVar0++;
	}
	func_112(uParam0, (Global_4525143 - 0.5f));
}

void func_111(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_112(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_113(var uParam0)
{
	return uParam0->f_80;
}

bool func_114(var uParam0, int iParam1)
{
	return func_115(uParam0, iParam1) != -1;
}

int func_115(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_116(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_117(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

void func_118(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_119(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_60752[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_60752[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60752[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_60752[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_120()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_62184[0] == iVar0)
		{
			Global_62184[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_62184[1] == iVar0)
		{
			Global_62184[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_62184[2] == iVar0)
		{
			Global_62184[2] = iVar0;
		}
	}
}

int func_121(int iParam0)
{
	return Global_2339[iParam0 /*29*/].f_17;
}

void func_122()
{
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_129())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_83))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_83);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("script_task_go_to_entity")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("script_task_go_to_entity")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 2f, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_83, 0, 0);
				}
				if (!iLocal_140)
				{
					func_124(0);
					func_56();
					SYSTEM::WAIT(0);
					if (!func_62())
					{
						if (iLocal_58 == 1)
						{
							if (!func_189())
							{
								func_1(&uLocal_193, cLocal_176, "REHH1_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_193, cLocal_176, "REHH1_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_58 == 2)
						{
							if (!func_189())
							{
								func_1(&uLocal_193, cLocal_176, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_193, cLocal_176, "REHH2_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_58 == 3)
						{
							if (!func_189())
							{
								func_1(&uLocal_193, cLocal_176, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_193, cLocal_176, "REHH3_VEH2", 4, 0, 0, 0);
							}
						}
						else if (iLocal_58 == 5)
						{
							if (!func_189())
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_VEH2", 4, 0, 0, 0);
							}
						}
						iLocal_140 = 1;
					}
				}
			}
			else
			{
				iLocal_140 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("script_task_go_to_entity")) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("script_task_go_to_entity")) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_83);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(iLocal_83))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_123());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 0);
		}
	}
}

int func_123()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_124(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_125)
		{
			if (func_128(&uLocal_193, cLocal_176, &Local_132, &Local_126, 8, 0, 0))
			{
				iLocal_125 = 0;
			}
		}
	}
	else if ((!iLocal_125 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !func_126())
	{
		Local_132 = { func_125() };
		Local_126 = { func_68() };
		func_63();
		iLocal_125 = 1;
	}
}

struct<6> func_125()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22983 == 4)
	{
		return Global_22602;
	}
	return Var0;
}

int func_126()
{
	if (((((((((((((((((((((((((((((((((((((((((((((func_127("REHH1_VEH") || func_127("REHH2_VEH")) || func_127("REHH3_VEH")) || func_127("REHH4_VEH")) || func_127("REHH5_VEH")) || func_127("REHH1_VEH2")) || func_127("REHH2_VEH2")) || func_127("REHH3_VEH2")) || func_127("REHH4_VEH2")) || func_127("REHH5_VEH2")) || func_127("REHH1_WLK")) || func_127("REHH2_WLK")) || func_127("REHH3_WLK")) || func_127("REHH4_WLK")) || func_127("REHH5_WLK")) || func_127("REHH1_SLR")) || func_127("REHH4_SLR")) || func_127("REHH1_SLW")) || func_127("REHH2_SLW")) || func_127("REHH3_SLW")) || func_127("REHH4_SLW")) || func_127("REHH5_SLW")) || func_127("REHH1_OUT")) || func_127("REHH2_GETOUT")) || func_127("REHH3_GETOUT")) || func_127("REHH5_GETOUT")) || func_127("REHH1_JACK")) || func_127("REHH2_JACK")) || func_127("REHH3_JACK")) || func_127("REHH5_JACK")) || func_127("REHH1_GUN")) || func_127("REHH2_SHOOT")) || func_127("REHH3_SHOOT")) || func_127("REHH5_SHOO")) || func_127("REHH1_1HOUR")) || func_127("REHH2_1HOUR")) || func_127("REHH1_HHOUR")) || func_127("REHH2_HHOUR")) || func_127("REHH1_CRASH")) || func_127("REHH1_WAY")) || func_127("REHH2_NEAR")) || func_127("REHH3_NEAR")) || func_127("REHH5_NEAR")) || func_127("REHH2_CULT")) || func_127("REHH3_CULT")) || func_127("REHH5_CULT"))
	{
		return 1;
	}
	return 0;
}

int func_127(char* sParam0)
{
	var uVar0;
	
	if (func_62())
	{
		MemCopy(&uVar0, {func_125()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_128(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_24(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22990 = 0;
	Global_22997 = 0;
	Global_22992 = 0;
	Global_23974 = 0;
	Global_23976 = 0;
	Global_23980 = 1;
	StringCopy(&Global_23987, sParam3, 24);
	Global_2883585 = 0;
	return func_2(sParam2, iParam4, 0);
}

int func_129()
{
	if (iLocal_58 == 5)
	{
		if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if ((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
		{
			if (((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_130()
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_148)
		{
			iLocal_150 = MISC::GET_GAME_TIMER();
			iLocal_148 = 1;
		}
		else
		{
			iLocal_152 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_152 = 0;
		iLocal_151 = 0;
		iLocal_148 = 0;
		iLocal_149 = 0;
	}
	if ((iLocal_152 - iLocal_150) > 3000 && (iLocal_152 - iLocal_151) > 6000)
	{
		if (!func_62())
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_SLR", 4, 0, 0, 0);
			}
			iLocal_151 = iLocal_152;
		}
	}
	if ((iLocal_152 - iLocal_150) > 50000 && !iLocal_149)
	{
		func_124(0);
		func_56();
		SYSTEM::WAIT(0);
		if (!func_62())
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_58 == 2)
			{
				func_1(&uLocal_193, cLocal_176, "REHH2_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_58 == 3)
			{
				if (!PED::IS_PED_INJURED(iLocal_83))
				{
					if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
					}
				}
				func_1(&uLocal_193, cLocal_176, "REHH3_SLW", 4, 0, 0, 0);
			}
			else if (iLocal_58 == 5)
			{
				func_1(&uLocal_193, cLocal_176, "REHH5_SLW", 4, 0, 0, 0);
			}
			iLocal_149 = 1;
		}
	}
	if ((iLocal_152 - iLocal_150) > 60000 && iLocal_149)
	{
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_83, true);
			if (PED::IS_PED_IN_GROUP(iLocal_83))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_83, Local_91, 200f, 200f, 200f, false, true, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_83, Local_91, 1f, -1, 0.25f, 0, 40000f);
					}
					else
					{
						TASK::TASK_WANDER_STANDARD(iLocal_83, 40000f, 0);
					}
					if (iLocal_58 == 1)
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					}
					PED::SET_PED_KEEP_TASK(iLocal_83, true);
					PED::REMOVE_PED_FROM_GROUP(iLocal_83);
					func_61();
				}
			}
		}
	}
}

void func_131()
{
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if (PED::IS_PED_ON_FOOT(iLocal_83))
		{
			if (!iLocal_145)
			{
				iLocal_146 = MISC::GET_GAME_TIMER();
				iLocal_145 = 1;
			}
			else
			{
				iLocal_147 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_145 = 0;
		}
	}
	if ((iLocal_147 - iLocal_146) > 90000)
	{
		func_124(0);
		func_56();
		SYSTEM::WAIT(0);
		if (iLocal_58 == 1)
		{
			func_1(&uLocal_193, cLocal_176, "REHH1_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 2)
		{
			func_1(&uLocal_193, cLocal_176, "REHH2_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 3)
		{
			func_1(&uLocal_193, cLocal_176, "REHH3_WLK", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 5)
		{
			func_1(&uLocal_193, cLocal_176, "REHH5_WLK", 4, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_83, true);
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_83, Local_91, 200f, 200f, 200f, false, true, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_83, Local_91, 1f, -1, 0.25f, 0, 40000f);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iLocal_83, 40000f, 0);
			}
			if (iLocal_58 == 1)
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
			}
			PED::SET_PED_KEEP_TASK(iLocal_83, true);
			if (PED::IS_PED_IN_GROUP(iLocal_83))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_83);
			}
			func_61();
		}
	}
}

void func_132()
{
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_VEHICLE(iLocal_83, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_119))
				{
					iLocal_119 = func_71(iLocal_83, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_81))
				{
					HUD::REMOVE_BLIP(&iLocal_81);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_81))
				{
					iLocal_81 = func_133(Local_91, 1);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_119))
				{
					HUD::REMOVE_BLIP(&iLocal_119);
				}
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_119))
		{
			iLocal_119 = func_71(iLocal_83, 0, 145);
		}
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_91, 50f, 50f, 50f, false, true, 0)) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_81))
			{
				iLocal_81 = func_133(Local_91, 1);
			}
		}
		else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_91, 50f, 50f, 50f, false, true, 0))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_81))
			{
				HUD::REMOVE_BLIP(&iLocal_81);
			}
		}
	}
}

int func_133(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_73(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

void func_134()
{
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, true)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 5f, 5f, 5f, false, true, 0))
		{
			if (func_136())
			{
				func_58(0);
				iLocal_123 = 0;
			}
		}
		else if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
		{
			if (func_62() && !iLocal_123)
			{
				func_58(1);
				iLocal_123 = 1;
			}
		}
		if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
		{
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_83, false);
		}
		if (func_135("REHH3_CHT3_7"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_83, true, 1);
		}
		if (func_135("REHH3_CHT6_5"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_83, false, 1);
		}
		if (func_135("REHH3_CHT8_3"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_83, true, 1);
		}
		if ((func_127("REHH3_CHT8M") || func_127("REHH3_CHT8F")) || func_127("REHH3_CHT8T"))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_83, false, 1);
		}
	}
}

int func_135(char* sParam0)
{
	var uVar0;
	
	if (func_62())
	{
		MemCopy(&uVar0, {func_68()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_136()
{
	if (Global_23994 == 1)
	{
		return 1;
	}
	return 0;
}

void func_137()
{
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if (iLocal_58 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (!func_127("REHH1_CRASH"))
						{
							func_124(0);
							func_56();
							SYSTEM::WAIT(0);
							func_1(&uLocal_193, cLocal_176, "REHH1_CRASH", 4, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_142)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), true) && PED::IS_PED_IN_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					func_124(0);
					func_56();
					SYSTEM::WAIT(0);
					if (!func_62())
					{
						if (iLocal_58 == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH1_OUT", 4, 0, 0, 0);
						}
						else if (iLocal_58 == 2)
						{
							func_1(&uLocal_193, cLocal_176, "REHH2_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_58 == 3)
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
								}
							}
							func_1(&uLocal_193, cLocal_176, "REHH3_GETOUT", 4, 0, 0, 0);
						}
						else if (iLocal_58 == 5)
						{
							func_1(&uLocal_193, cLocal_176, "REHH5_GETOUT", 4, 0, 0, 0);
						}
						iLocal_142 = 1;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				iLocal_142 = 0;
			}
		}
		if (!iLocal_143)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_124(0);
				func_56();
				SYSTEM::WAIT(0);
				if (!func_62())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 3)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_JACK", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 5)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_JACK", 4, 0, 0, 0);
					}
					iLocal_143 = 1;
				}
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_143 = 0;
		}
		if (!iLocal_144)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_124(0);
				func_56();
				SYSTEM::WAIT(0);
				if (!func_62())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_GUN", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 3)
					{
						if (!PED::IS_PED_INJURED(iLocal_83))
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
							}
						}
						func_1(&uLocal_193, cLocal_176, "REHH3_SHOOT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 5)
					{
					}
					iLocal_144 = 1;
				}
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_144 = 0;
		}
	}
}

void func_138()
{
	if (func_140(Local_91))
	{
		func_124(0);
		func_56();
		SYSTEM::WAIT(0);
		if (iLocal_58 == 1)
		{
			func_1(&uLocal_193, cLocal_176, "REHH1_WAY", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 2)
		{
			func_1(&uLocal_193, cLocal_176, "REHH2_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
				}
			}
			func_1(&uLocal_193, cLocal_176, "REHH3_CULT", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 5)
		{
			func_1(&uLocal_193, cLocal_176, "REHH5_CULT", 4, 0, 0, 0);
		}
	}
	if (func_139())
	{
		func_124(0);
		func_56();
		SYSTEM::WAIT(0);
		if (iLocal_58 == 1)
		{
		}
		else if (iLocal_58 == 2)
		{
			func_1(&uLocal_193, cLocal_176, "REHH2_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
				}
			}
			func_1(&uLocal_193, cLocal_176, "REHH3_NEAR", 4, 0, 0, 0);
		}
		else if (iLocal_58 == 5)
		{
			func_1(&uLocal_193, cLocal_176, "REHH5_NEAR", 4, 0, 0, 0);
		}
	}
}

int func_139()
{
	if (func_14() == 2)
	{
		if (func_60())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_34019)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_34019 = 1;
					if (!Global_34018)
					{
						Global_34018 = 1;
						return 1;
					}
				}
			}
			else if (Global_34019)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_34019 = 0;
			}
		}
	}
	return 0;
}

int func_140(struct<3> Param0)
{
	if (func_14() == 2)
	{
		if (func_60() && !Global_34017)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0) > (fLocal_45 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_34017 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_141()
{
	if (!func_126())
	{
		func_124(1);
	}
	if (!func_62())
	{
		switch (iLocal_106)
		{
			case 0:
				if (iLocal_58 == 1)
				{
					iLocal_108 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_58 == 2)
				{
					iLocal_108 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_58 == 3)
				{
					iLocal_108 = MISC::GET_GAME_TIMER() + 2000;
				}
				else if (iLocal_58 == 5)
				{
					iLocal_108 = MISC::GET_GAME_TIMER();
				}
				iLocal_106++;
				break;
			
			case 1:
				if (iLocal_108 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 3)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT", 4, 0, 0, 0);
					}
					else if (iLocal_58 == 5)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHT", 4, 0, 0, 0);
					}
					iLocal_106++;
				}
				break;
			
			case 2:
				if (iLocal_108 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_58 == 1)
					{
						if (func_14() == 0)
						{
							func_1(&uLocal_193, cLocal_176, "REHH1_ASKM", 4, 0, 0, 0);
						}
						else if (func_14() == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH1_ASKF", 4, 0, 0, 0);
						}
						else if (func_14() == 2)
						{
							func_1(&uLocal_193, cLocal_176, "REHH1_ASKT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_58 == 2)
					{
						if (func_14() == 0)
						{
							func_1(&uLocal_193, cLocal_176, "REHH2_CHTm2", 4, 0, 0, 0);
						}
						else if (func_14() == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH2_CHTf2", 4, 0, 0, 0);
						}
						else if (func_14() == 2)
						{
							func_1(&uLocal_193, cLocal_176, "REHH2_CHTt2", 4, 0, 0, 0);
						}
					}
					else if (iLocal_58 == 3)
					{
						if (func_14() == 0)
						{
							func_1(&uLocal_193, cLocal_176, "REHH3_CHTM", 4, 0, 0, 0);
						}
						else if (func_14() == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH3_CHTF", 4, 0, 0, 0);
						}
						else if (func_14() == 2)
						{
							func_1(&uLocal_193, cLocal_176, "REHH3_CHTT", 4, 0, 0, 0);
						}
					}
					else if (iLocal_58 == 5)
					{
						if (func_14() == 0)
						{
							func_1(&uLocal_193, cLocal_176, "REHH5_RESPM", 4, 0, 0, 0);
						}
						else if (func_14() == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH5_RESPF", 4, 0, 0, 0);
						}
						else if (func_14() == 2)
						{
							if (!bLocal_110)
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_RESPT", 4, 0, 0, 0);
							}
						}
					}
					iLocal_106++;
				}
				break;
			
			case 3:
				if (iLocal_58 == 1)
				{
					iLocal_108 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_58 == 2)
				{
					iLocal_108 = MISC::GET_GAME_TIMER();
				}
				else if (iLocal_58 == 3)
				{
					iLocal_108 = MISC::GET_GAME_TIMER() + 500;
				}
				else if (iLocal_58 == 5)
				{
					iLocal_108 = MISC::GET_GAME_TIMER();
				}
				iLocal_106++;
				break;
			
			case 4:
				if (iLocal_108 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_CHT2", 4, 0, 0, 0);
						iLocal_106++;
					}
					else if (iLocal_58 == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT2", 4, 0, 0, 0);
						iLocal_106++;
					}
					else if (iLocal_58 == 3)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT2", 4, 0, 0, 0);
						iLocal_106++;
					}
					else if (iLocal_58 == 5)
					{
						if (bLocal_110 && !bLocal_112)
						{
							if (func_14() == 0)
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_OKM", 4, 0, 0, 0);
							}
							else if (func_14() == 1)
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_OKF", 4, 0, 0, 0);
							}
							else if (func_14() == 2)
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_OKT", 4, 0, 0, 0);
							}
							iLocal_106++;
						}
					}
				}
				break;
			
			case 5:
				if (iLocal_58 == 1)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_RESPM", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_RESPF", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_RESPT", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 2)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_pchatm", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_pchatf", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_pchatt", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT2M", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT2F", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT2T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_193, cLocal_176, "REHH5_CHAT1", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 6:
				if (iLocal_58 == 1)
				{
					func_1(&uLocal_193, cLocal_176, "REHH1_CHAT", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 2)
				{
					func_1(&uLocal_193, cLocal_176, "REHH2_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_193, cLocal_176, "REHH3_CHT3", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT1b", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT1c", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT1d", 4, 0, 0, 0);
					}
				}
				iLocal_106++;
				break;
			
			case 7:
				if (iLocal_58 == 1)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_CHATb", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_CHATc", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_CHATd", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 2)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT3M", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT3F", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT3M", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT3F", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT3T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 8:
				if (iLocal_58 == 1)
				{
					func_1(&uLocal_193, cLocal_176, "REHH1_CHATe", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 2)
				{
					func_1(&uLocal_193, cLocal_176, "REHH2_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_193, cLocal_176, "REHH3_CHT4", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2b", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2c", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2d", 4, 0, 0, 0);
					}
				}
				iLocal_106++;
				break;
			
			case 9:
				if (iLocal_58 == 2)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT4M", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT4F", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT4M", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT4F", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT4T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2e", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 10:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_193, cLocal_176, "REHH2_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_193, cLocal_176, "REHH3_CHT5", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2f", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2g", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT2h", 4, 0, 0, 0);
					}
				}
				iLocal_106++;
				break;
			
			case 11:
				if (iLocal_58 == 2)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT5M", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT5F", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT5M", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT5F", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT5T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_193, cLocal_176, "REHH5_CHAT3", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 12:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_193, cLocal_176, "REHH2_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_193, cLocal_176, "REHH3_CHT6", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT3b", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT3c", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT3d", 4, 0, 0, 0);
					}
				}
				iLocal_106++;
				break;
			
			case 13:
				if (iLocal_58 == 2)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT6M", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT6F", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT6M", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT6F", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT6T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_193, cLocal_176, "REHH5_CHAT4", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 14:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_193, cLocal_176, "REHH2_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_193, cLocal_176, "REHH3_CHT7", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 5)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT4b", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT4c", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH5_CHAT4d", 4, 0, 0, 0);
					}
				}
				iLocal_106++;
				break;
			
			case 15:
				if (iLocal_58 == 2)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT7M", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT7F", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT7T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 5)
				{
					func_1(&uLocal_193, cLocal_176, "REHH5_RUNOUT", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 16:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_193, cLocal_176, "REHH2_CHT8", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_193, cLocal_176, "REHH3_CHT8", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 17:
				if (iLocal_58 == 3)
				{
					iLocal_108 = MISC::GET_GAME_TIMER() + 700;
				}
				iLocal_106++;
				break;
			
			case 18:
				if (iLocal_58 == 2)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT8M", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT8F", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH2_CHT8T", 4, 0, 0, 0);
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_14() == 0)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT8M", 4, 0, 0, 0);
					}
					else if (func_14() == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT8F", 4, 0, 0, 0);
					}
					else if (func_14() == 2)
					{
						func_1(&uLocal_193, cLocal_176, "REHH3_CHT8T", 4, 0, 0, 0);
					}
				}
				iLocal_106++;
				break;
			
			case 19:
				if (iLocal_58 == 2)
				{
					func_1(&uLocal_193, cLocal_176, "REHH2_CHT9", 4, 0, 0, 0);
				}
				else if (iLocal_58 == 3)
				{
					func_1(&uLocal_193, cLocal_176, "REHH3_CHT9", 4, 0, 0, 0);
				}
				iLocal_106++;
				break;
			
			case 20:
				if (iLocal_58 == 3)
				{
					iLocal_108 = MISC::GET_GAME_TIMER() + 300;
				}
				iLocal_106++;
				break;
			
			case 21:
				if (iLocal_108 < MISC::GET_GAME_TIMER())
				{
					if (iLocal_58 == 3)
					{
						if (func_14() == 0)
						{
							func_1(&uLocal_193, cLocal_176, "REHH3_CHT9M", 4, 0, 0, 0);
						}
						else if (func_14() == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH3_CHT9F", 4, 0, 0, 0);
						}
						else if (func_14() == 2)
						{
							func_1(&uLocal_193, cLocal_176, "REHH3_CHT9T", 4, 0, 0, 0);
						}
					}
					iLocal_106++;
				}
				break;
			
			case 22:
				if (!PED::IS_PED_INJURED(iLocal_83))
				{
					TASK::TASK_PLAY_ANIM(iLocal_83, "facials@gen_female@base", "mood_sleeping_1", 2f, -2f, -1, 33, 0f, false, false, false);
				}
				iLocal_106++;
				break;
			}
	}
}

void func_142()
{
	if (iLocal_58 != 3)
	{
		if (func_145())
		{
			SYSTEM::SETTIMERA(0);
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_91, 3f, 3f, 2f, true, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_83, Local_91, Global_20, false, true, 0))
				{
					if (func_144(1, 0, 1))
					{
						func_143();
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f + 2f), 3, false);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
						iLocal_57 = 6;
					}
				}
			}
		}
	}
	else if (bLocal_110)
	{
		if (PED::IS_PED_INJURED(iLocal_84))
		{
			iLocal_57 = 7;
		}
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 805.501f, 1269.926f, 361.4025f, 25f, 30f, 2f, false, true, 0) || (ENTITY::IS_ENTITY_AT_COORD(iLocal_83, 824.8886f, 1275.671f, 359.4312f, Global_20, true, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, false, true, 0)))
			{
				func_56();
				SYSTEM::WAIT(0);
				func_1(&uLocal_193, cLocal_176, "REHH3_CHT10", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_83) && !PED::IS_PED_INJURED(iLocal_84))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_LOOK_AT_ENTITY(0, iLocal_84, -1, 2052, 4);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 5f, 1f, 2f, 0);
						TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "come_here_idle_c", 2f, -2f, -1, 48, 0f, false, false, false);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_84, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f + 2f), 2, false);
					}
				}
				SYSTEM::SETTIMERA(0);
				iLocal_57 = 6;
			}
		}
	}
}

void func_143()
{
	Global_21849 = 0;
	func_23();
}

int func_144(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_145()
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_83, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 1;
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_91, 50f, 50f, 50f, false, true, 0) && !PED::IS_PED_INJURED(iLocal_83))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_146()
{
	if (bLocal_112)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
		{
			if ((((PED::IS_PED_INJURED(iLocal_84) || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0)) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_91) < 250f) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_95) < 250f) || iLocal_114)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_120))
				{
					HUD::REMOVE_BLIP(&iLocal_120);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_121))
				{
					HUD::REMOVE_BLIP(&iLocal_121);
				}
				if (!PED::IS_PED_INJURED(iLocal_84))
				{
					AUDIO::PLAY_PAIN(iLocal_84, 6, 0, 0);
					TASK::TASK_SMART_FLEE_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_84);
				}
				func_56();
				SYSTEM::WAIT(0);
				func_1(&uLocal_193, cLocal_176, "REHH5_CHT2", 4, 0, 0, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_84);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_169))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_169);
				}
				bLocal_112 = false;
			}
			else
			{
				if (!iLocal_115)
				{
					if (!func_62())
					{
						if (func_14() == 0)
						{
							func_1(&uLocal_193, cLocal_176, "REHH5_COMM", 4, 0, 0, 0);
						}
						else if (func_14() == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH5_COMF", 4, 0, 0, 0);
						}
						else if (func_14() == 2)
						{
							func_1(&uLocal_193, cLocal_176, "REHH5_COMT", 4, 0, 0, 0);
						}
						iLocal_115 = 1;
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_84))
				{
					func_154(&iLocal_84, &iLocal_120, &iLocal_169, &iLocal_121);
					func_153(&iLocal_84, &iLocal_120, &iLocal_169, &iLocal_121);
					func_147(iLocal_169, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_183, &uLocal_186, &Local_188, &fLocal_187, &uLocal_191, 0f, 0f, 0f, 1500, 0f);
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 30f, 30f, 30f, false, true, 0))
					{
						if (iLocal_107 < MISC::GET_GAME_TIMER())
						{
							if (!func_62())
							{
								if (func_66())
								{
									func_1(&uLocal_193, cLocal_176, "REHH5_FHT", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_193, cLocal_176, "REHH5_FEAR", 4, 0, 0, 0);
								}
								iLocal_107 = MISC::GET_GAME_TIMER() + 8000;
							}
						}
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
						{
							if (!func_127("REHH5_SHO"))
							{
								func_56();
								SYSTEM::WAIT(0);
								func_1(&uLocal_193, cLocal_176, "REHH5_SHO", 4, 0, 0, 0);
							}
						}
						if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_84))
						{
							if ((PED::IS_PED_ON_FOOT(iLocal_84) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4)) && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
							{
								iLocal_114 = 1;
							}
						}
					}
					if (!iLocal_113 && !PED::IS_PED_INJURED(iLocal_84))
					{
						if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
						{
							TASK::TASK_COMBAT_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 0, 16);
							func_56();
							SYSTEM::WAIT(0);
							func_1(&uLocal_193, cLocal_176, "REHH5_GRM", 4, 0, 0, 0);
							iLocal_113 = 1;
						}
					}
				}
			}
		}
	}
}

void func_147(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1)) && func_152(iParam0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam4, true) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam2, *uParam3, Param7) };
				*uParam3 = func_151(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true));
				func_150(iParam1, uParam4, uParam5);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam10)
			{
				if (func_149(iParam0, iParam1, 1) > fParam11 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam2, true) > 20f)
				{
					if (!func_148(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 3f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 1.5f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 3f, false, false, false, false, false, false, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
							*uParam6 = MISC::GET_GAME_TIMER();
						}
						else
						{
							Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_188, fLocal_187, Param7) };
							if (!func_148(Var0))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Var0, 2f))
								{
									MISC::CLEAR_AREA_OF_PEDS(Var0, 1.5f, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(Var0, 3f, false, false, false, false, false, false, 0);
									ENTITY::SET_ENTITY_COORDS(iParam0, Var0, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(iParam0, fLocal_187);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
									*uParam6 = MISC::GET_GAME_TIMER();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_148(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_149(int iParam0, int iParam1, bool bParam2)
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

void func_150(int iParam0, var uParam1, var uParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			*uParam1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			*uParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
	}
}

float func_151(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_152(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_153(int* iParam0, int* iParam1, int* iParam2, int* iParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
		{
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, false))
				{
					if (HUD::DOES_BLIP_EXIST(*iParam1))
					{
						HUD::REMOVE_BLIP(iParam1);
					}
					iVar0 = 1;
				}
				else if (!HUD::DOES_BLIP_EXIST(*iParam1))
				{
					*iParam1 = func_71(*iParam0, 1, 145);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(*iParam3))
			{
				if (iVar0 == 1)
				{
					*iParam3 = func_133(ENTITY::GET_ENTITY_COORDS(*iParam2, true), 0);
					HUD::SET_BLIP_COLOUR(*iParam3, 1);
					HUD::SET_BLIP_PRIORITY(*iParam3, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { HUD::GET_BLIP_COORDS(*iParam3) };
				Var4 = { ENTITY::GET_ENTITY_COORDS(*iParam2, true) };
				Var1.f_0 = (Var1.f_0 + (((Var4.f_0 - Var1.f_0) / 1f) * SYSTEM::TIMESTEP()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * SYSTEM::TIMESTEP()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(*iParam3, Var1);
				if (iVar0 == 0)
				{
					HUD::REMOVE_BLIP(iParam3);
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam1))
				{
					*iParam1 = func_71(*iParam0, 1, 145);
				}
			}
		}
	}
}

void func_154(int* iParam0, int* iParam1, int* iParam2, int* iParam3)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (PED::IS_PED_INJURED(*iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, false))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
				VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0f);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
				if (HUD::DOES_BLIP_EXIST(*iParam3))
				{
					HUD::REMOVE_BLIP(iParam3);
				}
			}
		}
		else
		{
			VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0f);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
		}
	}
}

void func_155()
{
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_84, 655.7768f, 1282.45f, 359.048f, 802.4241f, 1278.077f, 382.4866f, 77f, false, true, 0))
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, false, 0f, false);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, false, 0f, false);
			}
		}
		else
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, true, 0f, false);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, true, 0f, false);
			}
		}
	}
}

void func_156()
{
	if (!bLocal_110)
	{
		if (iLocal_58 == 3)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_102, 200f, 200f, 200f, false, true, 0))
			{
				STREAMING::REQUEST_MODEL(iLocal_99);
				STREAMING::REQUEST_CLIP_SET("move_m@brave");
				if (STREAMING::HAS_MODEL_LOADED(iLocal_99) && STREAMING::HAS_CLIP_SET_LOADED("move_m@brave"))
				{
					iLocal_84 = PED::CREATE_PED(26, iLocal_99, Local_102, fLocal_105, true, true);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 0, 2, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 3, 0, 2, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_84, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_84, 42, true);
					PED::SET_PED_DIES_WHEN_INJURED(iLocal_84, true);
					PED::SET_PED_MOVEMENT_CLIPSET(iLocal_84, "move_m@brave", 0.25f);
					PED::SET_PED_CONFIG_FLAG(iLocal_84, 137, true);
					func_160(&uLocal_193, 4, iLocal_84, sLocal_178, 0, 1);
					TASK::TASK_PLAY_ANIM(iLocal_84, "random@hitch_lift", "idle_a", 2f, -2f, -1, 1, 0f, false, false, false);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_99);
					bLocal_110 = true;
				}
			}
		}
		else if (iLocal_58 == 5)
		{
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_77, true) > 320f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_83, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					{
						if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), MISC::GET_RANDOM_INT_IN_RANGE(2, 5), &Local_64, 1, 3f, 0f))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Local_64, 7f) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_64) < 110f)
							{
								STREAMING::REQUEST_MODEL(iLocal_99);
								if (STREAMING::HAS_MODEL_LOADED(iLocal_99))
								{
									func_63();
									SYSTEM::WAIT(0);
									if (func_159(&uLocal_193, cLocal_176, "REHH5_CHS", "REHH5_CHS_1", 4, 0, 0) && !PED::IS_PED_INJURED(iLocal_83))
									{
										iLocal_169 = VEHICLE::CREATE_VEHICLE(iLocal_100, Local_64, func_157(Local_64, func_158(PLAYER::PLAYER_ID()), 1), true, true, false);
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_169, 134, 134);
										VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_169, 0f);
										iLocal_84 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_169, 26, iLocal_99, -1, true, true);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 0, 1, 1, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 2, 1, 0, 0);
										PED::SET_PED_CONFIG_FLAG(iLocal_84, 42, true);
										AUDIO::STOP_PED_SPEAKING(iLocal_84, true);
										func_160(&uLocal_193, 4, iLocal_84, sLocal_178, 0, 1);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_169, 5f);
										TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_84, iLocal_169, iLocal_83, 6, 60f, 786468, -1f, -1f, true);
										TASK::TASK_COMBAT_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_KEEP_TASK(iLocal_84, true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_99);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_100);
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_169, (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) + 15f));
										if (HUD::DOES_BLIP_EXIST(iLocal_81))
										{
											HUD::REMOVE_BLIP(&iLocal_81);
										}
										func_63();
										while (func_62())
										{
											SYSTEM::WAIT(0);
										}
										func_128(&uLocal_193, cLocal_176, "REHH5_CHS", "REHH5_CHS_2", 4, 0, 0);
										bLocal_112 = true;
										bLocal_110 = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

float func_157(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
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

Vector3 func_158(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_159(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_24(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22990 = 0;
	Global_22997 = 0;
	Global_22992 = 0;
	Global_23974 = 1;
	Global_23976 = 0;
	Global_23980 = 0;
	StringCopy(&Global_23987, sParam3, 24);
	Global_2883585 = 0;
	return func_2(sParam2, iParam4, 0);
}

void func_160(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_80280)
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

void func_161()
{
	if (!iLocal_174 && !func_62())
	{
		if (iLocal_172 == 6 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM1", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 6 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM2", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 7 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM3", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 7 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM4", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 8 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM5", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 8 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM6", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 9 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM7", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 9 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM8", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 10 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM9", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 10 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM10", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 11 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM11", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 11 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM12", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 12 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM13", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 12 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM14", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 13 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM15", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 13 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM16", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 14 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM17", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 14 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM18", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 15 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM19", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 15 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM20", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 16 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM21", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 16 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM22", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 17 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM23", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 17 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM24", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 18 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM25", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 18 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM26", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 19 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM27", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 19 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM28", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 20 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM29", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 20 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM30", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 21 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM31", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 21 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM32", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 22 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM33", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 22 && iLocal_171 == 30)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM34", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
		if (iLocal_172 == 23 && iLocal_171 == 0)
		{
			if (iLocal_58 == 1)
			{
				func_1(&uLocal_193, cLocal_176, "REHH1_TIM35", 4, 0, 0, 0);
			}
			iLocal_174 = 1;
		}
	}
}

void func_162()
{
	iLocal_153 = func_167(func_168()) * 1000;
	iLocal_153 = (iLocal_153 + func_166(func_168()) * 1000 * 60);
	if (!iLocal_162)
	{
		if ((iLocal_172 >= 24 && iLocal_153 < 150000) || (iLocal_172 >= 24 && iLocal_153 < 150000))
		{
			func_163((((iLocal_172 * 1000 * 60 - func_166(func_168()) * 1000 * 60) + (iLocal_171 * 1000 - func_167(func_168()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
		else
		{
			func_163(((iLocal_172 * 1000 * 60 - func_166(func_168()) * 1000 * 60) + (iLocal_171 * 1000 - func_167(func_168()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
	else if ((iLocal_172 >= 24 && iLocal_153 < 150000) || (iLocal_172 >= 24 && iLocal_153 < 150000))
	{
		func_163((((iLocal_172 * 1000 * 60 - func_166(func_168()) * 1000 * 60) + (iLocal_171 * 1000 - func_167(func_168()) * 1000)) - 1440000), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_163(((iLocal_172 * 1000 * 60 - func_166(func_168()) * 1000 * 60) + (iLocal_171 * 1000 - func_167(func_168()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if ((iLocal_172 == func_166(func_168()) + 1 && iLocal_171 == func_167(func_168())) || (((iLocal_172 >= 24 && iLocal_153 < 150000) && iLocal_172 == func_166(func_168()) + 25) && iLocal_171 == func_167(func_168())))
	{
		if (!iLocal_161)
		{
			if (!func_127("REHH1_1HOUR") && !func_127("REHH4_1HOUR"))
			{
				func_124(0);
			}
			func_56();
			SYSTEM::WAIT(0);
			if (!func_62())
			{
				if (iLocal_58 == 1)
				{
					func_1(&uLocal_193, cLocal_176, "REHH1_1HOUR", 4, 0, 0, 0);
				}
				iLocal_161 = 1;
			}
		}
	}
	if (iLocal_171 == 30)
	{
		if ((iLocal_172 == func_166(func_168()) && iLocal_171 == func_167(func_168()) + 30) || (((iLocal_172 >= 24 && iLocal_153 < 150000) && iLocal_172 == func_166(func_168()) + 24) && iLocal_171 == func_167(func_168()) + 30))
		{
			if (!iLocal_162)
			{
				if (!func_127("REHH1_HHOUR") && !func_127("REHH4_HHOUR"))
				{
					func_124(0);
				}
				func_56();
				SYSTEM::WAIT(0);
				if (!func_62())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_162 = 1;
				}
				if (!iLocal_163)
				{
					iLocal_175 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_175, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_175, "countdown_fadein", 35f);
					AUDIO::START_AUDIO_SCENE("TIMER_SCENE");
					iLocal_163 = 1;
				}
			}
		}
		if ((iLocal_172 == func_166(func_168()) && iLocal_171 == func_167(func_168()) + 5) || (((iLocal_172 >= 24 && iLocal_153 < 150000) && iLocal_172 == func_166(func_168()) + 24) && iLocal_171 == func_167(func_168()) + 5))
		{
			if (!iLocal_164)
			{
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_175, "countdown_fast", 1f);
				iLocal_164 = 1;
			}
		}
	}
	if (iLocal_171 == 0)
	{
		if ((iLocal_172 == func_166(func_168()) + 1 && iLocal_171 == (func_167(func_168()) - 30)) || (((iLocal_172 >= 24 && iLocal_153 < 150000) && iLocal_172 == func_166(func_168()) + 25) && iLocal_171 == (func_167(func_168()) - 30)))
		{
			if (!iLocal_162)
			{
				if (!func_127("REHH1_HHOUR") && !func_127("REHH4_HHOUR"))
				{
					func_124(0);
				}
				func_56();
				SYSTEM::WAIT(0);
				if (!func_62())
				{
					if (iLocal_58 == 1)
					{
						func_1(&uLocal_193, cLocal_176, "REHH1_HHOUR", 4, 0, 0, 0);
					}
					iLocal_162 = 1;
				}
				if (!iLocal_163)
				{
					iLocal_175 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_175, "VARIABLE_COUNTDOWN_CLOCK_wp", 0, true);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_175, "countdown_fadein", 35f);
					AUDIO::START_AUDIO_SCENE("TIMER_SCENE");
					iLocal_163 = 1;
				}
			}
		}
		if ((iLocal_172 == func_166(func_168()) + 1 && iLocal_171 == (func_167(func_168()) - 55)) || (((iLocal_172 >= 24 && iLocal_153 < 150000) && iLocal_172 == func_166(func_168()) + 25) && iLocal_171 == (func_167(func_168()) - 55)))
		{
			if (!iLocal_164)
			{
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_175, "countdown_fast", 1f);
				iLocal_164 = 1;
			}
		}
	}
	if (iLocal_172 >= 24 && iLocal_153 < 150000)
	{
		if (iLocal_172 == func_166(func_168()) + 24 && iLocal_171 == func_167(func_168()))
		{
			bLocal_173 = true;
		}
	}
	else if (iLocal_172 == func_166(func_168()) && iLocal_171 == func_167(func_168()))
	{
		bLocal_173 = true;
	}
	if (bLocal_173)
	{
		func_56();
		SYSTEM::WAIT(0);
		AUDIO::STOP_SOUND(iLocal_175);
		AUDIO::STOP_AUDIO_SCENE("TIMER_SCENE");
		if (iLocal_58 == 1)
		{
			func_1(&uLocal_193, cLocal_176, "REHH1_TLATE", 4, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_83))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(iLocal_83, false), (10.5f + 2f), 2, false);
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_83, 1, 0);
				PED::REMOVE_PED_FROM_GROUP(iLocal_83);
				if (HUD::DOES_BLIP_EXIST(iLocal_81))
				{
					HUD::REMOVE_BLIP(&iLocal_81);
				}
			}
		}
		iLocal_57 = 9;
	}
}

void func_163(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_165(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1679103.f_1 = 1;
		func_164(7, iVar0);
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

void func_164(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1679103.f_7064[iParam0]), iParam1);
}

int func_165(int iParam0, int iParam1)
{
	return BitTest(Global_1679103.f_7064[iParam0], iParam1);
}

int func_166(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_167(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_168()
{
	var uVar0;
	
	func_178(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_177(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_176(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_171(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_170(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_169(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_169(var uParam0, int iParam1)
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

void func_170(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_171(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_175(*uParam0);
	iVar1 = func_173(*uParam0);
	if (iParam1 < 1 || iParam1 > func_172(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_172(int iParam0, int iParam1)
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

int func_173(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_174(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_174(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_175(int iParam0)
{
	return iParam0 & 15;
}

void func_176(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_177(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_178(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_179()
{
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_119))
				{
					HUD::REMOVE_BLIP(&iLocal_119);
				}
				if (!PED::IS_PED_IN_GROUP(iLocal_83))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_123());
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 0);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_81))
				{
					iLocal_81 = func_133(Local_91, 1);
				}
				if (((func_14() == 2 && !func_59()) && iLocal_58 != 1) && iLocal_58 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_82))
					{
						iLocal_82 = func_133(Local_95, 0);
						HUD::SET_BLIP_SPRITE(iLocal_82, 269);
						func_180();
					}
				}
				if (iLocal_58 == 1)
				{
					if (!func_62())
					{
						if (iLocal_58 == 1)
						{
							func_1(&uLocal_193, cLocal_176, "REHH1_WTA", 4, 0, 0, 0);
						}
						iLocal_172 = func_166(func_168()) + 2;
						if (func_167(func_168()) >= 30)
						{
							iLocal_171 = 0;
							iLocal_172++;
						}
						else
						{
							iLocal_171 = 30;
						}
						iLocal_109 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_57 = 4;
					}
				}
				else if (iLocal_58 == 2)
				{
					if (func_1(&uLocal_193, cLocal_176, "REHH2_WTB", 4, 0, 0, 0))
					{
						iLocal_109 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_57 = 4;
					}
				}
				else if (iLocal_58 == 3)
				{
					if (func_1(&uLocal_193, cLocal_176, "REHH3_WTC", 4, 0, 0, 0))
					{
						iLocal_109 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_57 = 4;
					}
				}
				else if (iLocal_58 == 5)
				{
					if (func_1(&uLocal_193, cLocal_176, "REHH5_WTE", 4, 0, 0, 0))
					{
						iLocal_109 = 1;
						SYSTEM::SETTIMERA(0);
						iLocal_57 = 4;
					}
				}
			}
		}
	}
}

void func_180()
{
	if (func_14() == 2)
	{
		if (!Global_34016)
		{
			func_181("CULT_BLIP_HELP", -1);
			Global_34016 = 1;
		}
	}
}

void func_181(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_182()
{
	int iVar0;
	
	switch (iLocal_138)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (iLocal_108 < MISC::GET_GAME_TIMER())
				{
					func_1(&uLocal_193, cLocal_176, "REHH5_STO", 4, 0, 0, 0);
					iLocal_108 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500));
				}
				if (PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 24f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
					{
						fLocal_182 = func_149(iLocal_83, PLAYER::PLAYER_PED_ID(), 1);
						if (fLocal_182 > 5f)
						{
							fLocal_182 = (fLocal_182 - 1f);
						}
						else
						{
							fLocal_182 = (fLocal_182 - 0.5f);
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_182, 2f, 2f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
						iLocal_138++;
					}
				}
				else if (func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
				{
					fLocal_182 = func_149(iLocal_83, PLAYER::PLAYER_PED_ID(), 1);
					fLocal_182 = (fLocal_182 - 0.25f);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_182, 2f, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_119))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_119, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 5000, 2052, 2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
					{
						if (func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 25f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
						{
							if (PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_85, 0, false))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_85, -1, 0, 2f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
								iLocal_138++;
							}
						}
					}
				}
				else if (!iLocal_139)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 7000, 2052, 2);
					if (func_1(&uLocal_193, cLocal_176, "REHH5_NOV", 4, 0, 0, 0))
					{
						iLocal_139 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!PED::IS_PED_INJURED(iLocal_83) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
				{
					if (func_149(iLocal_83, iLocal_85, 1) < 25f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								if (func_1(&uLocal_193, cLocal_176, "REHH5_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f && func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 25f)
						{
							if (!func_62())
							{
								if (func_14() == 0)
								{
									func_1(&uLocal_193, cLocal_176, "REHH5_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
								else if (func_14() == 1)
								{
									func_1(&uLocal_193, cLocal_176, "REHH5_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
								else if (func_14() == 2)
								{
									func_1(&uLocal_193, cLocal_176, "REHH5_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 25f)
				{
					if (func_129())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_123());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 2f, 1, 0);
								func_183();
								iLocal_138++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_83);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_123());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_138++;
								}
							}
						}
					}
					else if (!iLocal_140)
					{
						if (!func_62())
						{
							if (!func_189())
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_193, cLocal_176, "REHH5_VEH2", 4, 0, 0, 0);
							}
							iLocal_140 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (func_129())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_83);
						iLocal_109 = 1;
						iLocal_57 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH5_SLW", 4, 0, 0, 0))
						{
							func_61();
						}
					}
					if (func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) > 100f)
					{
						func_61();
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138 = 4;
				}
			}
			break;
	}
}

void func_183()
{
	if (!func_59())
	{
		if (func_14() == 2)
		{
			Global_34014 = 1;
		}
	}
}

float func_184(int iParam0, int iParam1)
{
	return func_149(iParam0, iParam1, 1);
}

void func_185()
{
	int iVar0;
	
	switch (iLocal_138)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
					{
						fLocal_182 = func_149(iLocal_83, PLAYER::PLAYER_PED_ID(), 1);
						if (fLocal_182 > 5f)
						{
							fLocal_182 = (fLocal_182 - 1f);
						}
						else
						{
							fLocal_182 = (fLocal_182 - 0.5f);
						}
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2.5f, 0f, 0f, 1f, 5000, 0.1f, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
						iLocal_138++;
					}
				}
				else if (func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 8f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
				{
					fLocal_182 = func_149(iLocal_83, PLAYER::PLAYER_PED_ID(), 1);
					fLocal_182 = (fLocal_182 - 0.25f);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_182, 1f, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_119))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_119, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 5000, 2052, 2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
					{
						if (func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 10f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
						{
							if (PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_85, 0, false))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_85, -1, 0, 1f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
								iLocal_138++;
							}
						}
					}
				}
				else if (!iLocal_139)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 7000, 2052, 2);
					if (func_1(&uLocal_193, cLocal_176, "REHH3_NOV", 4, 0, 0, 0))
					{
						iLocal_139 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!PED::IS_PED_INJURED(iLocal_83) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
				{
					if (func_149(iLocal_83, iLocal_85, 1) < 13f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								if (func_1(&uLocal_193, cLocal_176, "REHH3_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_83))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f && func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
						{
							if (!func_62())
							{
								if (func_14() == 0)
								{
									func_1(&uLocal_193, cLocal_176, "REHH3_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
								else if (func_14() == 1)
								{
									func_1(&uLocal_193, cLocal_176, "REHH3_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
								else if (func_14() == 2)
								{
									func_1(&uLocal_193, cLocal_176, "REHH3_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (func_129())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_123());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
								func_183();
								iLocal_138++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_83);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_123());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_138++;
								}
							}
						}
					}
					else if (!iLocal_140)
					{
						if (!func_62())
						{
							if (!func_189())
							{
								func_1(&uLocal_193, cLocal_176, "REHH3_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_193, cLocal_176, "REHH3_VEH2", 4, 0, 0, 0);
							}
							iLocal_140 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (func_129())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_83, 1f);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_83);
						iLocal_109 = 1;
						iLocal_57 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH3_SLW", 4, 0, 0, 0))
						{
							func_61();
						}
					}
					if (func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) > 100f)
					{
						func_61();
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138 = 4;
				}
			}
			break;
	}
}

void func_186()
{
	int iVar0;
	
	switch (iLocal_138)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
					{
						fLocal_182 = func_149(iLocal_83, PLAYER::PLAYER_PED_ID(), 1);
						if (fLocal_182 > 5f)
						{
							fLocal_182 = (fLocal_182 - 1f);
						}
						else
						{
							fLocal_182 = (fLocal_182 - 0.5f);
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_182, 1f, 2f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
						iLocal_138++;
					}
				}
				else if (func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 8f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
				{
					fLocal_182 = func_149(iLocal_83, PLAYER::PLAYER_PED_ID(), 1);
					fLocal_182 = (fLocal_182 - 0.25f);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, fLocal_182, 1f, 2f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138++;
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_119))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_119, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 5000, 2052, 2);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
					{
						if (func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 10f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
						{
							if (PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 150f))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_85, 0, false))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_85, -1, 0, 1f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
								func_56();
								SYSTEM::WAIT(0);
								iLocal_138++;
							}
						}
					}
				}
				else if (!iLocal_139)
				{
					TASK::CLEAR_PED_TASKS(iLocal_83);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 7000, 2052, 2);
					if (func_1(&uLocal_193, cLocal_176, "REHH2_NOV", 4, 0, 0, 0))
					{
						iLocal_139 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!PED::IS_PED_INJURED(iLocal_83) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
				{
					if (func_149(iLocal_83, iLocal_85, 1) < 13f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f)
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								if (func_1(&uLocal_193, cLocal_176, "REHH2_ASK", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_83))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f && func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
						{
							if (!func_62())
							{
								if (func_14() == 0)
								{
									func_1(&uLocal_193, cLocal_176, "REHH2_RPA", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
								else if (func_14() == 1)
								{
									func_1(&uLocal_193, cLocal_176, "REHH2_RPB", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
								else if (func_14() == 2)
								{
									func_1(&uLocal_193, cLocal_176, "REHH2_RPC", 4, 0, 0, 0);
									SYSTEM::SETTIMERA(0);
									iLocal_138++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (func_129())
					{
						iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_123());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
								func_183();
								iLocal_138++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_83);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_123());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_138++;
								}
							}
						}
					}
					else if (!iLocal_140)
					{
						if (!func_62())
						{
							if (!func_189())
							{
								func_1(&uLocal_193, cLocal_176, "REHH2_VEH", 4, 0, 0, 0);
							}
							else
							{
								func_1(&uLocal_193, cLocal_176, "REHH2_VEH2", 4, 0, 0, 0);
							}
							iLocal_140 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (!iLocal_101)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
					{
						if (!func_62())
						{
							if (func_1(&uLocal_193, cLocal_176, "REHH2_INA", 4, 0, 0, 0))
							{
								iLocal_101 = 1;
							}
						}
					}
				}
				if (func_129())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_83, 1f);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_83);
						iLocal_109 = 1;
						iLocal_57 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH2_SLW", 4, 0, 0, 0))
						{
							func_61();
						}
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138 = 4;
				}
				if (func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) > 100f)
				{
					func_61();
				}
			}
			break;
	}
}

void func_187()
{
	int iVar0;
	
	switch (iLocal_138)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 12f || (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) && func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 30f))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 5000, 2052, 2);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_85, 30000, 2054, 2);
							TASK::TASK_PLAY_ANIM(iLocal_83, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
						}
						iLocal_138++;
					}
					else if (!iLocal_139)
					{
						TASK::CLEAR_PED_TASKS(iLocal_83);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2054, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
						if (func_1(&uLocal_193, cLocal_176, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_139 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(iLocal_119))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_119, true);
			}
			if (func_129())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 10f)
					{
						if (!PED::IS_PED_INJURED(iLocal_83))
						{
							if (PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 150f))
							{
								fLocal_182 = func_149(iLocal_83, PLAYER::PLAYER_PED_ID(), 1);
								if (fLocal_182 > 5f)
								{
									fLocal_182 = (fLocal_182 - 0.5f);
								}
								else
								{
									fLocal_182 = (fLocal_182 - 0.25f);
								}
								TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_85, 10000, 2054, 2);
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_85, 0, false))
								{
									TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_85, -1, 0, 1f);
								}
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
								iLocal_138++;
							}
							else
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, iLocal_85, 10000, 2054, 2);
								iLocal_138++;
							}
						}
					}
				}
			}
			else if (!iLocal_139)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2054, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					if (!func_62())
					{
						if (!func_189())
						{
							func_1(&uLocal_193, cLocal_176, "REHH1_VEH", 4, 0, 0, 0);
						}
						else
						{
							func_1(&uLocal_193, cLocal_176, "REHH1_VEH2", 4, 0, 0, 0);
						}
						iLocal_139 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_83) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f)
				{
					func_143();
					iLocal_138++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_83) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f)
				{
					if (func_1(&uLocal_193, cLocal_176, "REHH1_ASK", 4, 0, 0, 0))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
						SYSTEM::SETTIMERA(0);
						iLocal_138++;
					}
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_83))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				}
				if (func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_85 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_85, false))
						{
							if (ENTITY::GET_ENTITY_SPEED(iLocal_85) < 2.5f)
							{
								if (!func_62())
								{
									if (func_14() == 0)
									{
										func_1(&uLocal_193, cLocal_176, "REHH1_RPA", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_138++;
									}
									else if (func_14() == 1)
									{
										func_1(&uLocal_193, cLocal_176, "REHH1_RPB", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_138++;
									}
									else if (func_14() == 2)
									{
										func_1(&uLocal_193, cLocal_176, "REHH1_RPC", 4, 0, 0, 0);
										SYSTEM::SETTIMERA(0);
										iLocal_138++;
									}
								}
							}
						}
					}
					else if (!iLocal_139)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_139 = 1;
						}
					}
				}
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) < 15f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_129())
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_123());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
								PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
								TASK::TASK_ENTER_VEHICLE(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
								iLocal_138++;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false);
								if (PED::IS_PED_INJURED(iVar0))
								{
									iLocal_56 = 1;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_83);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_83, func_123());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_83, true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_83, 1);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 10000, 2052, 2);
									iLocal_138++;
								}
							}
						}
						else if (!iLocal_140)
						{
							if (!func_62())
							{
								if (!func_189())
								{
									func_1(&uLocal_193, cLocal_176, "REHH1_VEH", 4, 0, 0, 0);
								}
								else
								{
									func_1(&uLocal_193, cLocal_176, "REHH1_VEH2", 4, 0, 0, 0);
								}
								iLocal_140 = 1;
							}
						}
					}
					else if (!iLocal_139)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH1_NOV", 8, 0, 0, 0))
						{
							iLocal_139 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (func_129())
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_83, 1f);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_83);
						iLocal_109 = 1;
						iLocal_57 = 3;
					}
					else if (SYSTEM::TIMERA() > 60000)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH1_NOH", 4, 0, 0, 0))
						{
							func_61();
						}
					}
				}
				else
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_83);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
					iLocal_138 = 5;
				}
				if (func_184(iLocal_83, PLAYER::PLAYER_PED_ID()) > 100f)
				{
					func_61();
				}
			}
			break;
	}
}

void func_188()
{
	int iVar0;
	
	if ((iLocal_156 - iLocal_155) > 1000)
	{
		iLocal_170 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_83, false), 18f, 0, 4);
	}
	if (iLocal_170 != 0)
	{
		iLocal_154++;
		iLocal_155 = MISC::GET_GAME_TIMER();
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
		if (iLocal_154 > iVar0)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_170, true, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_170, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_170, false))
				{
					if (iLocal_58 == 1)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH1_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, iLocal_170, 3000, 2052, 2);
							}
						}
						iLocal_180 = MISC::GET_GAME_TIMER();
						iLocal_154 = 0;
					}
					else if (iLocal_58 == 2)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH2_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, iLocal_170, 3000, 2052, 2);
							}
						}
						iLocal_180 = MISC::GET_GAME_TIMER();
						iLocal_154 = 0;
					}
					else if (iLocal_58 == 3)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH3_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, iLocal_170, 3000, 2052, 2);
							}
						}
						iLocal_180 = MISC::GET_GAME_TIMER();
						iLocal_154 = 0;
					}
					else if (iLocal_58 == 5)
					{
						if (func_1(&uLocal_193, cLocal_176, "REHH5_STO", 4, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_83))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_83, iLocal_170, 3000, 2052, 2);
							}
						}
						iLocal_180 = MISC::GET_GAME_TIMER();
						iLocal_154 = 0;
					}
				}
			}
		}
		else
		{
			iLocal_181 = MISC::GET_GAME_TIMER();
			if ((iLocal_181 - iLocal_180) > 3500)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_170);
			}
			iLocal_170 = 0;
		}
	}
}

int func_189()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), true))
		{
			if ((VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_190()
{
	if (iLocal_58 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3024.265f, 660.8264f, 1.1982f, -3140.823f, 803.707f, 35.131f, 93f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_83)) || func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 12f)
				{
					func_191();
					iLocal_57 = 2;
				}
			}
		}
	}
	else if (iLocal_58 == 2)
	{
		if (!iLocal_165)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_88, 100f, 100f, 100f, false, true, 0) && !PED::IS_PED_INJURED(iLocal_83))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 178.993f, 4413.097f, 73.6132f, 1f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 159.6669f, 4413.197f, 74.8915f, 1f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 142.7866f, 4415.111f, 74.3799f, 1f, -1, 0.25f, 1, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				iLocal_165 = 1;
			}
		}
	}
	else if (iLocal_58 == 5)
	{
		if (!iLocal_165)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_88, 200f, 200f, 200f, false, true, 0) && !PED::IS_PED_INJURED(iLocal_83))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_87);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 3);
				TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "001445_01_gangintimidation_1_female_idle_b", 2f, -2f, -1, 49, 0f, false, false, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -337.3163f, 2828.018f, 55.2198f, 2f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -343.4485f, 2826.222f, 54.5089f, 2f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -356.4033f, 2811.062f, 51.5931f, 2f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -365.6846f, 2809.158f, 48.7646f, 2f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -382.4106f, 2818.384f, 44.078f, 2f, -1, 0.25f, 1, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -370.3838f, 2866.677f, 41.0979f, 2f, -1, 0.25f, 1, 40000f);
				TASK::TASK_PLAY_ANIM(0, "random@hitch_lift", "carjack_mainloop_female", 2f, -2f, -1, 33, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_87);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_87);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_87);
				iLocal_165 = 1;
			}
		}
	}
	if (iLocal_58 != 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
			{
				if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 95f, 95f, 50f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_83)) || func_184(PLAYER::PLAYER_PED_ID(), iLocal_83) < 12f)
				{
					func_191();
					iLocal_57 = 2;
				}
			}
		}
	}
}

void func_191()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_118))
	{
		HUD::REMOVE_BLIP(&iLocal_118);
	}
	if (!PED::IS_PED_INJURED(iLocal_83))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_119))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
			{
				iLocal_119 = func_71(iLocal_83, 0, 145);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_119, false);
			}
		}
		if (!func_224())
		{
			func_199(1);
		}
		func_160(&uLocal_193, 3, iLocal_83, sLocal_177, 0, 1);
	}
	if (func_14() == 0)
	{
		func_160(&uLocal_193, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_14() == 1)
	{
		func_160(&uLocal_193, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_14() == 2)
	{
		func_160(&uLocal_193, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
}

void func_192()
{
	func_194(39, 1);
	func_194(40, 1);
	func_194(41, 1);
	func_194(42, 1);
	func_194(43, 1);
	func_194(44, 1);
	iLocal_83 = PED::CREATE_PED(26, iLocal_98, Local_88, fLocal_94, true, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_98);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_83, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_83, false);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_83, sLocal_179);
	PED::SET_PED_CONFIG_FLAG(iLocal_83, 137, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_83, 206, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_83, 1024, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_83, 65536, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_83, 2, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_83, 17, true);
	PED::SET_PED_MAX_TIME_IN_WATER(iLocal_83, 60f);
	PED::SET_PED_LOD_MULTIPLIER(iLocal_83, 5f);
	if (iLocal_58 == 1)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 2, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 3, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 4, 0, 2, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_100, true);
		iLocal_169 = VEHICLE::CREATE_VEHICLE(iLocal_100, -3088.068f, 730.4819f, 20.3028f, 332.2996f, true, true, false);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_169, 150f);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_169, 4, false, false);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_169, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_100);
		TASK::TASK_PLAY_ANIM(iLocal_83, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
	}
	else if (iLocal_58 == 2)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 2, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 10, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(iLocal_83, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_91 - Vector(20f, 50f, 50f), Local_91 + Vector(20f, 50f, 50f), false, true, true, true, 1);
		func_193(1);
	}
	else if (iLocal_58 == 3)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_83, 8, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(iLocal_83, "random@hitch_lift", "idle_f", 2f, -2f, -1, 49, 0f, false, false, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_91 - Vector(20f, 50f, 50f), Local_91 + Vector(20f, 50f, 50f), false, true, true, true, 1);
	}
	else if (iLocal_58 == 5)
	{
	}
	iLocal_57 = 1;
}

void func_193(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_113960, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_113954 = 1;
	}
	else
	{
		StringCopy(&Global_113960, "NULL", 24);
		Global_113954 = 0;
	}
}

void func_194(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_198(iParam0, 2, 1))
		{
			func_197(iParam0, 2, 1);
		}
	}
	else if (func_198(iParam0, 2, 1))
	{
		func_195(iParam0, 2, 1);
	}
}

void func_195(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_102481.f_1442[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_33() == 0)
		{
			iVar0 = func_53(func_196(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, bParam1);
			func_50(func_196(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_114904.f_668[iParam0]), bParam1);
	}
}

int func_196(int iParam0)
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
			return 14766;
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
	return 16715;
}

void func_197(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_102481.f_1442[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_33() == 0)
		{
			iVar0 = func_53(func_196(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_50(func_196(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_114904.f_668[iParam0]), iParam1);
	}
}

int func_198(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_102481.f_1442[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_33() == 0)
		{
			return BitTest(func_53(func_196(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_114904.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_199(int iParam0)
{
	if (func_202())
	{
		Global_114894 = 1;
		Global_114891 = MISC::GET_GAME_TIMER();
		if (func_38(Global_114893))
		{
			func_200(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_38(Global_114893))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_114904.f_25002.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_181(func_201(iParam0), -1);
					Global_114904.f_25002.f_2++;
					MISC::SET_BIT(&Global_114900, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_114900, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_181(func_201(iParam0), -1);
					Global_114904.f_25002.f_3++;
					MISC::SET_BIT(&Global_114900, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_114900, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_181(func_201(iParam0), -1);
					Global_114904.f_25002.f_4++;
					MISC::SET_BIT(&Global_114900, 2);
				}
			}
			break;
	}
}

char* func_201(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_202()
{
	switch (func_203(&Global_33835, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_203(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_99882.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_207(0))
		{
			return 0;
		}
		Global_44833++;
		*uParam0 = Global_44833;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_24390.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_44869 = iParam2;
		Global_44831 = *uParam0;
		Global_44832 = iParam4;
		Global_44830 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_44830 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_44830)
			{
				if (Global_44836[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_44831 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_205(iParam2))
		{
			return 0;
		}
		if (Global_44830 == 8)
		{
			return 0;
		}
		Global_44833++;
		*uParam0 = Global_44833;
		Global_44836[Global_44830 /*4*/] = Global_44833;
		Global_44836[Global_44830 /*4*/].f_1 = iParam1;
		Global_44836[Global_44830 /*4*/].f_2 = iParam2;
		Global_44836[Global_44830 /*4*/].f_3 = 0;
		Global_44830++;
		if (iParam4 != 0)
		{
			func_204(uParam0, iParam4);
		}
	}
	return 2;
}

void func_204(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_44830 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_44830)
	{
		if (Global_44836[iVar0 /*4*/] == *uParam0)
		{
			Global_44836[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_205(int iParam0)
{
	return func_206(iParam0, Global_44869);
}

int func_206(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
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
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
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
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
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
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_207(int iParam0)
{
	if (Global_44869 == 15)
	{
		return 0;
	}
	if (func_205(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_208()
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_83, PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
			{
				return 1;
			}
		}
		if (!bLocal_112)
		{
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_83, true), 10f, true) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_83, true) - Vector(10f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_83, true) + Vector(10f, 10f, 10f), false))
			{
				return 1;
			}
		}
		else if (PED::IS_PED_INJURED(iLocal_84) && ENTITY::DOES_ENTITY_EXIST(iLocal_84))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), true) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
			{
				if (!PED::IS_PED_INJURED(iLocal_83))
				{
					AUDIO::PLAY_PAIN(iLocal_83, 6, 0, 0);
				}
				return 1;
			}
		}
		if ((!PED::IS_PED_IN_GROUP(iLocal_83) && PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 90f)) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 50f, 50f, 50f, false, true, 0))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_83) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_83))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_209()
{
	STREAMING::REQUEST_MODEL(iLocal_98);
	STREAMING::REQUEST_ANIM_DICT("random@hitch_lift");
	if (iLocal_58 == 1 || iLocal_58 == 5)
	{
		STREAMING::REQUEST_MODEL(iLocal_100);
	}
	if (iLocal_58 == 1)
	{
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("timer", false, -1);
	}
	else if (iLocal_58 == 3)
	{
		STREAMING::REQUEST_ANIM_DICT("facials@gen_female@base");
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_98) && STREAMING::HAS_ANIM_DICT_LOADED("random@hitch_lift"))
	{
		if (iLocal_58 == 1 || iLocal_58 == 5)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_100))
			{
				bLocal_59 = true;
			}
		}
		else if (iLocal_58 == 3)
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED("facials@gen_female@base"))
			{
				bLocal_59 = true;
			}
		}
		else
		{
			bLocal_59 = true;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_98);
		STREAMING::REQUEST_ANIM_DICT("random@hitch_lift");
		if (iLocal_58 == 1 || iLocal_58 == 5)
		{
			STREAMING::REQUEST_MODEL(iLocal_100);
		}
		else if (iLocal_58 == 3)
		{
			STREAMING::REQUEST_ANIM_DICT("facials@gen_female@base");
		}
	}
}

void func_210()
{
	if (iLocal_58 == 1)
	{
		Local_88 = { -3086.052f, 735.5091f, 20.4883f };
		fLocal_94 = 17.9234f;
		Local_91 = { -1053.344f, -2539.327f, 19.0394f };
		iLocal_98 = joaat("a_m_m_business_01");
		cLocal_176 = "REHH1AU";
		sLocal_177 = "BUSINESSMAN";
		sLocal_179 = "BUSINESSMAN";
		iLocal_100 = joaat("schafter2");
	}
	else if (iLocal_58 == 2)
	{
		Local_88 = { 196.7701f, 4427.757f, 72.2673f };
		fLocal_94 = 75.9173f;
		Local_91 = { 3328.828f, 5154.456f, 17.2894f };
		iLocal_98 = joaat("a_f_y_hiker_01");
		cLocal_176 = "REHH2AU";
		sLocal_177 = "REHH2Hiker";
		sLocal_179 = "REHH2Hiker";
	}
	else if (iLocal_58 == 3)
	{
		Local_88 = { 2745.026f, 4386.827f, 47.8636f };
		fLocal_94 = 19.4143f;
		Local_91 = { 814.455f, 1274.797f, 359.5112f };
		Local_102 = { 804.2382f, 1269.589f, 359.3557f };
		fLocal_105 = 340.7372f;
		iLocal_98 = joaat("a_f_y_hipster_03");
		iLocal_99 = joaat("s_m_m_security_01");
		cLocal_176 = "REHH3AU";
		sLocal_177 = "REHH3Hipster";
		sLocal_179 = "REHH3Hipster";
		sLocal_178 = "REHH3Security";
	}
	else if (iLocal_58 == 5)
	{
		Local_88 = { -324.0379f, 2818.034f, 58.4498f };
		fLocal_94 = 56.5422f;
		Local_91 = { -344.0339f, 634.4108f, 171.2902f };
		iLocal_98 = joaat("ig_bride");
		iLocal_99 = joaat("a_m_y_business_01");
		cLocal_176 = "REHH5AU";
		sLocal_177 = "REHH5Bride";
		sLocal_179 = "REHH5Bride";
		sLocal_178 = "REHH5Groom";
		iLocal_100 = joaat("patriot");
	}
	iLocal_60 = 1;
}

int func_211()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_222())
		{
			return 0;
		}
	}
	if (func_218())
	{
		return 1;
	}
	if (func_212(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_212(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_16(func_14()))
		{
			iVar36 = func_43();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_114904.f_18581[iVar32 /*6*/], 2) && !BitTest(Global_114904.f_18581[iVar32 /*6*/], 3))
				{
					func_213(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_213(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_214(uParam1, "Abigail1", func_216(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_215(iParam0), 1, 0);
			break;
		
		case 1:
			func_214(uParam1, "Abigail2", func_216(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_215(iParam0), 1, 0);
			break;
		
		case 2:
			func_214(uParam1, "Barry1", func_216(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_215(iParam0), 1, 0);
			break;
		
		case 3:
			func_214(uParam1, "Barry2", func_216(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_215(iParam0), 1, 1);
			break;
		
		case 4:
			func_214(uParam1, "Barry3", func_216(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_215(iParam0), 0, 0);
			break;
		
		case 5:
			func_214(uParam1, "Barry3A", func_216(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 6:
			func_214(uParam1, "Barry3C", func_216(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 7:
			func_214(uParam1, "Barry4", func_216(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_215(iParam0), 0, 0);
			break;
		
		case 8:
			func_214(uParam1, "Dreyfuss1", func_216(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_215(iParam0), 0, 0);
			break;
		
		case 9:
			func_214(uParam1, "Epsilon1", func_216(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_215(iParam0), 0, 0);
			break;
		
		case 10:
			func_214(uParam1, "Epsilon2", func_216(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_215(iParam0), 1, 0);
			break;
		
		case 11:
			func_214(uParam1, "Epsilon3", func_216(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_215(iParam0), 0, 0);
			break;
		
		case 12:
			func_214(uParam1, "Epsilon4", func_216(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_215(iParam0), 0, 0);
			break;
		
		case 13:
			func_214(uParam1, "Epsilon5", func_216(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_215(iParam0), 1, 0);
			break;
		
		case 14:
			func_214(uParam1, "Epsilon6", func_216(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 15:
			func_214(uParam1, "Epsilon7", func_216(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_215(iParam0), 0, 0);
			break;
		
		case 16:
			func_214(uParam1, "Epsilon8", func_216(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_215(iParam0), 1, 0);
			break;
		
		case 17:
			func_214(uParam1, "Extreme1", func_216(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 18:
			func_214(uParam1, "Extreme2", func_216(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 19:
			func_214(uParam1, "Extreme3", func_216(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 20:
			func_214(uParam1, "Extreme4", func_216(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_215(iParam0), 0, 0);
			break;
		
		case 21:
			func_214(uParam1, "Fanatic1", func_216(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_215(iParam0), 1, 0);
			break;
		
		case 22:
			func_214(uParam1, "Fanatic2", func_216(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_215(iParam0), 1, 0);
			break;
		
		case 23:
			func_214(uParam1, "Fanatic3", func_216(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_215(iParam0), 0, 1);
			break;
		
		case 24:
			func_214(uParam1, "Hao1", func_216(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_215(iParam0), 0, 1);
			break;
		
		case 25:
			func_214(uParam1, "Hunting1", func_216(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 26:
			func_214(uParam1, "Hunting2", func_216(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 27:
			func_214(uParam1, "Josh1", func_216(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_215(iParam0), 1, 0);
			break;
		
		case 28:
			func_214(uParam1, "Josh2", func_216(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_215(iParam0), 1, 1);
			break;
		
		case 29:
			func_214(uParam1, "Josh3", func_216(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_215(iParam0), 1, 1);
			break;
		
		case 30:
			func_214(uParam1, "Josh4", func_216(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_215(iParam0), 1, 0);
			break;
		
		case 31:
			func_214(uParam1, "Maude1", func_216(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 32:
			func_214(uParam1, "Minute1", func_216(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 33:
			func_214(uParam1, "Minute2", func_216(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 34:
			func_214(uParam1, "Minute3", func_216(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 35:
			func_214(uParam1, "MrsPhilips1", func_216(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_215(iParam0), 0, 0);
			break;
		
		case 36:
			func_214(uParam1, "MrsPhilips2", func_216(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_215(iParam0), 0, 0);
			break;
		
		case 37:
			func_214(uParam1, "Nigel1", func_216(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_215(iParam0), 1, 0);
			break;
		
		case 38:
			func_214(uParam1, "Nigel1A", func_216(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_215(iParam0), 1, 1);
			break;
		
		case 39:
			func_214(uParam1, "Nigel1B", func_216(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_215(iParam0), 1, 1);
			break;
		
		case 40:
			func_214(uParam1, "Nigel1C", func_216(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_215(iParam0), 1, 1);
			break;
		
		case 41:
			func_214(uParam1, "Nigel1D", func_216(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_215(iParam0), 1, 1);
			break;
		
		case 42:
			func_214(uParam1, "Nigel2", func_216(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_215(iParam0), 1, 1);
			break;
		
		case 43:
			func_214(uParam1, "Nigel3", func_216(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_215(iParam0), 1, 1);
			break;
		
		case 44:
			func_214(uParam1, "Omega1", func_216(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_215(iParam0), 0, 0);
			break;
		
		case 45:
			func_214(uParam1, "Omega2", func_216(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_215(iParam0), 0, 0);
			break;
		
		case 46:
			func_214(uParam1, "Paparazzo1", func_216(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 47:
			func_214(uParam1, "Paparazzo2", func_216(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 48:
			func_214(uParam1, "Paparazzo3", func_216(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_215(iParam0), 0, 0);
			break;
		
		case 49:
			func_214(uParam1, "Paparazzo3A", func_216(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 50:
			func_214(uParam1, "Paparazzo3B", func_216(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 51:
			func_214(uParam1, "Paparazzo4", func_216(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_215(iParam0), 0, 0);
			break;
		
		case 52:
			func_214(uParam1, "Rampage1", func_216(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_215(iParam0), 0, 0);
			break;
		
		case 54:
			func_214(uParam1, "Rampage3", func_216(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_215(iParam0), 1, 0);
			break;
		
		case 55:
			func_214(uParam1, "Rampage4", func_216(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_215(iParam0), 1, 0);
			break;
		
		case 56:
			func_214(uParam1, "Rampage5", func_216(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_215(iParam0), 0, 0);
			break;
		
		case 53:
			func_214(uParam1, "Rampage2", func_216(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_215(iParam0), 1, 0);
			break;
		
		case 57:
			func_214(uParam1, "TheLastOne", func_216(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 58:
			func_214(uParam1, "Tonya1", func_216(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 59:
			func_214(uParam1, "Tonya2", func_216(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 60:
			func_214(uParam1, "Tonya3", func_216(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 61:
			func_214(uParam1, "Tonya4", func_216(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		case 62:
			func_214(uParam1, "Tonya5", func_216(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_215(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_214(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_215(int iParam0)
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

struct<2> func_216(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_217(iParam0) };
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

struct<2> func_217(int iParam0)
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

int func_218()
{
	if (func_221() && !func_222())
	{
		return 1;
	}
	if (func_220() && func_219())
	{
		return 1;
	}
	return 0;
}

bool func_219()
{
	return Global_114622 > 0;
}

int func_220()
{
	if (Global_99326 != -1)
	{
		return 1;
	}
	return 0;
}

int func_221()
{
	if (Global_99326 != -1)
	{
		return BitTest(Global_93192[Global_99326 /*34*/].f_15, 20);
	}
	return 0;
}

int func_222()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::GET_CITY_DENSITY() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_223()
{
	if (!func_205(5))
	{
		return 1;
	}
	if (func_218())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_222())
		{
			return 0;
		}
	}
	if (func_212(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_224()
{
	if ((Global_114893 == func_47() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_114894)
	{
		return 1;
	}
	return 0;
}

void func_225(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_47();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_227(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114890 = 0;
	func_226();
}

void func_226()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_227(int iParam0)
{
	Global_114893 = iParam0;
}

int func_228(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_153496)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_47();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_256())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_222())
			{
				return 0;
			}
		}
		if (!Global_114904.f_9092)
		{
			return 0;
		}
		if (func_28(0))
		{
			return 0;
		}
		if (func_218())
		{
			return 0;
		}
		if (func_255())
		{
			return 0;
		}
		if (Global_114893 != -1)
		{
			return 0;
		}
		if (func_16(func_14()))
		{
			if (func_212(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_254(iParam3))
		{
			return 0;
		}
		if (func_16(func_14()))
		{
			if (func_253(func_14()) == 4 || func_253(func_14()) == 5)
			{
				return 0;
			}
		}
		if (func_16(func_14()))
		{
			if (!func_252(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_251(Global_114904.f_25002.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_114895) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_250())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_241(4))
		{
			return 0;
		}
		if (!func_205(5))
		{
			return 0;
		}
		if (func_240(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_4 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_240(0, 0))
		{
			return 0;
		}
		if (Global_33922)
		{
			return 0;
		}
		if (func_254(30) && !func_240(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_16(func_14()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_114904.f_2370.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_114904.f_2370.f_539.f_2296[iVar4];
				if (func_239(iVar8))
				{
					if (func_230(iVar4))
					{
						if (!func_229(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_14() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_229(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_230(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_114904.f_2370.f_539.f_2296[iParam0];
	return func_231(iVar0);
}

int func_231(int iParam0)
{
	return func_232(iParam0, 1);
}

int func_232(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_239(iParam0))
	{
		return 0;
	}
	func_233(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_233(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_234(func_168(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_234(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_238(iParam0, iParam1))
	{
		iVar0 = func_175(iParam1);
		iVar1 = func_173(iParam0);
		iVar2 = (func_173(iParam0) - func_173(iParam1));
		iVar3 = (func_175(iParam0) - func_175(iParam1));
		iVar4 = (func_237(iParam0) - func_237(iParam1));
		iVar5 = (func_166(iParam0) - func_166(iParam1));
		iVar6 = (func_167(iParam0) - func_167(iParam1));
		iVar7 = (func_236(iParam0) - func_236(iParam1));
	}
	else
	{
		iVar0 = func_175(iParam0);
		iVar1 = func_173(iParam1);
		iVar2 = (func_173(iParam1) - func_173(iParam0));
		iVar3 = (func_175(iParam1) - func_175(iParam0));
		iVar4 = (func_237(iParam1) - func_237(iParam0));
		iVar5 = (func_166(iParam1) - func_166(iParam0));
		iVar6 = (func_167(iParam1) - func_167(iParam0));
		iVar7 = (func_236(iParam1) - func_236(iParam0));
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
		iVar4 = (iVar4 + func_172(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_235(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_235(float fParam0, float fParam1, float fParam2)
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

int func_236(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_237(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_238(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_239(iParam1) || !func_239(iParam0))
	{
		return 1;
	}
	iVar0 = func_173(iParam0);
	iVar1 = func_173(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_175(iParam0);
	iVar1 = func_175(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_237(iParam0);
	iVar1 = func_237(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_166(iParam0);
	iVar1 = func_166(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_167(iParam0);
	iVar1 = func_167(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_236(iParam0);
	iVar1 = func_236(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)
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
	iVar0 = func_236(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_167(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_166(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_173(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_175(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_237(iParam0);
	if (iVar5 < 1 || iVar5 > func_172(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_240(int iParam0, bool bParam1)
{
	if (BitTest(Global_114904.f_25002.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_14();
				if (!func_16(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_249()) || Global_113951) || Global_33778) || func_248()) || func_22(8, -1)) || func_247()) || func_246()) || func_245()) || func_244()) || Global_114904.f_7695.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_249()) || Global_33778) || func_248()) || func_22(8, -1)) || func_245()) || func_247()) || func_246()) || func_244()) || Global_114904.f_7695.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_249()) || Global_113951) || Global_33778) || func_248()) || func_22(8, -1)) || func_245()) || func_247()) || func_246()) || func_244()) || Global_114904.f_7695.f_919[iVar0] == 5) || Global_45416 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_249()) || Global_113951) || Global_33778) || func_248()) || func_22(8, -1)) || func_247()) || func_246()) || func_244()) || Global_114904.f_7695.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_249() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_22(8, -1)) || func_244()) || func_243()) || Global_114904.f_7695.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_22(8, -1) || func_247()) || func_246()) || func_243()) || func_242())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_249()) || Global_33778) || func_248()) || func_22(8, -1)) || func_246()) || func_245()) || func_244()) || Global_114904.f_7695.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_249()) || func_246()) || Global_113951) || Global_33778) || func_248()) || Global_46094) || func_22(8, -1)) || func_245()) || func_243()) || func_244()) || Global_114904.f_7695.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_249()) || Global_113951) || Global_33778) || func_248()) || func_22(8, -1)) || func_245()) || func_243()) || func_247()) || func_246()) || func_244())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_242()
{
	return Global_102468.f_1;
}

int func_243()
{
	if (Global_99326 != -1)
	{
		return BitTest(Global_93192[Global_99326 /*34*/].f_15, 13);
	}
	return 0;
}

int func_244()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_245()
{
	if (Global_80541)
	{
		return 1;
	}
	else if (Global_65004 && !Global_65010)
	{
		return 1;
	}
	return 0;
}

bool func_246()
{
	return Global_102481.f_418 > 0;
}

bool func_247()
{
	return Global_102481.f_417 > 0;
}

var func_248()
{
	return Global_1575090;
}

int func_249()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_99882.f_44 == 1;
	}
	return 0;
}

int func_250()
{
	func_13();
	if (Global_10285[Global_21610 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_251(int iParam0)
{
	return func_238(func_168(), iParam0);
}

int func_252(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_14();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_253(int iParam0)
{
	if (!func_16(iParam0))
	{
		return 7;
	}
	return Global_114904.f_7695.f_919[iParam0];
}

int func_254(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_256())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_114904.f_25002, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_114904.f_25002.f_1, iVar0);
	}
	return iVar1;
}

int func_255()
{
	int iVar0;
	
	if (Global_33927)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_256()
{
	int iVar0;
	
	if (Global_153787 == 2)
	{
		return 1;
	}
	else if (Global_153787 == 3)
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
					MISC::SET_BIT(&iVar0, 0);
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

void func_257()
{
	if (iLocal_141)
	{
		func_279(0);
		if (Global_34018)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_278();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		func_193(0);
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		if (CAM::IS_CODE_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_CODE_GAMEPLAY_HINT(false);
		}
		Global_34116[0 /*7*/].f_6 = 0;
		func_269(0, 1, 1, 0, 0, 0, 0);
		func_63();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
		{
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_83, 317, true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, false))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_83);
				}
				if (iLocal_58 != 2)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_83);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("script_task_smart_flee_ped")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("script_task_smart_flee_ped")) != 0)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_83, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_83, true);
				if (PED::IS_PED_IN_GROUP(iLocal_83))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_83);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
		{
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (!PED::IS_PED_FLEEING(iLocal_84))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_84, false);
				}
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (func_224())
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), false))
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, false, 0f, false);
		}
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), false))
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, false, 0f, false);
		}
	}
	func_258(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_258(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_47();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_224())
	{
		func_262(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114895 = MISC::GET_GAME_TIMER();
		func_261(30000);
		StringCopy(&cVar0, func_260(Global_114893, 1), 64);
		if (func_46(Global_114893) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_114892, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_114890, (MISC::GET_GAME_TIMER() - Global_114891), 0);
	}
	else if (BitTest(Global_114900, 0) && Global_114904.f_25002.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114900, false);
	}
	func_259(&Global_33835);
	Global_114894 = 0;
	func_227(-1);
}

void func_259(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_44831)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_44830 = 0;
	Global_44832 = 0;
	Global_44869 = 15;
	Global_65007 = 0;
	Global_65008 = 0;
}

char* func_260(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_261(int iParam0)
{
	Global_45420 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_262(int iParam0)
{
	func_263(iParam0, 0, func_268(iParam0));
}

void func_263(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_168();
	func_266(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_265(iParam0, &uVar0);
	Var1 = { func_264(&uVar0) };
}

struct<16> func_264(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_166(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_167(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_236(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_237(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_175(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_173(*uParam0), 64);
	return Var0;
}

void func_265(int iParam0, var uParam1)
{
	Global_114904.f_25002.f_43[iParam0] = *uParam1;
}

void func_266(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_173(*uParam0);
	iVar1 = func_175(*uParam0);
	iVar2 = func_237(*uParam0);
	iVar3 = func_166(*uParam0);
	iVar4 = func_167(*uParam0);
	iVar5 = func_236(*uParam0);
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
	iVar6 = func_172(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_172(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_267(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_267(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_178(uParam0, iParam1);
	func_177(uParam0, iParam2);
	func_176(uParam0, iParam3);
	func_170(uParam0, iParam5);
	func_171(uParam0, iParam4);
	func_169(uParam0, iParam6);
}

int func_268(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_269(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_277(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_21610.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_11())
			{
				Global_21610.f_1 = 3;
			}
			Global_22983 = 5;
		}
		func_276(1, bParam3, iParam2, 0);
		Global_65016 = 1;
		Global_77345 = 1;
		Global_80278 = 1;
	}
	else
	{
		func_277(0);
		HUD::THEFEED_RESUME();
		Global_65016 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_276(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_274(PLAYER::PLAYER_ID())) && !func_271(PLAYER::PLAYER_ID(), 0)) && !func_270()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_274(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		Global_80278 = 0;
	}
}

bool func_270()
{
	return BitTest(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_36.f_18, 14);
}

bool func_271(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_273(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_272(-1, 0) == 8;
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

int func_272(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_36();
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

int func_273(var uParam0)
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

int func_274(int iParam0)
{
	if (func_271(iParam0, 0))
	{
		return 1;
	}
	if (func_275())
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

bool func_275()
{
	return BitTest(Global_2621446, 3);
}

int func_276(bool bParam0, bool bParam1, var uParam2, bool bParam3)
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

void func_277(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_9463, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9463, 13);
	}
}

void func_278()
{
	Global_34014 = 0;
	Global_34015 = 0;
	Global_34017 = 0;
	Global_34018 = 0;
	Global_34019 = 0;
}

void func_279(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_194(iVar0, bParam0);
		iVar0++;
	}
}

Vector3 func_280()
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_68, true);
		iLocal_67 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_71, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_71, true);
			iLocal_67 = 2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_74, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_74, true);
			iLocal_67 = 3;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_77, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_77, true);
			iLocal_67 = 5;
		}
		if (iLocal_67 == 1)
		{
			bLocal_80 = true;
			iLocal_58 = 1;
			return Local_68;
		}
		else if (iLocal_67 == 2)
		{
			bLocal_80 = 2;
			iLocal_58 = 2;
			return Local_71;
		}
		else if (iLocal_67 == 3)
		{
			bLocal_80 = 3;
			iLocal_58 = 3;
			return Local_74;
		}
		else if (iLocal_67 == 5)
		{
			bLocal_80 = 4;
			iLocal_58 = 5;
			return Local_77;
		}
	}
	return 0f, 0f, 0f;
}

