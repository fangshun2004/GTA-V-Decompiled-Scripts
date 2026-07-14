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
	struct<4> Local_61[10];
	bool bLocal_102 = 0;
	struct<3> Local_103 = { 0, 0, 0 } ;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	struct<3> Local_113 = { 0, 0, 0 } ;
	struct<3> Local_116 = { 0, 0, 0 } ;
	struct<3> Local_119 = { 0, 0, 0 } ;
	struct<3> Local_122 = { 0, 0, 0 } ;
	struct<3> Local_125 = { 0, 0, 0 } ;
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	float fLocal_132 = 0f;
	float fLocal_133 = 0f;
	float fLocal_134 = 0f;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	float fLocal_141 = 0f;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int* iLocal_148 = NULL;
	int* iLocal_149 = NULL;
	int* iLocal_150 = NULL;
	var uLocal_151 = 16;
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
	char* sLocal_316 = NULL;
	char* sLocal_317 = NULL;
	char* sLocal_318 = NULL;
	char* sLocal_319 = NULL;
	char* sLocal_320 = NULL;
	char* sLocal_321 = NULL;
	char* sLocal_322 = NULL;
	char* sLocal_323 = NULL;
	char* sLocal_324 = NULL;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	struct<3> Local_330 = { 0, 0, 0 } ;
	int iLocal_333 = 0;
	bool bLocal_334 = 0;
	char* sLocal_335 = NULL;
	char* sLocal_336 = NULL;
	char* sLocal_337 = NULL;
	char* sLocal_338 = NULL;
	char* sLocal_339 = NULL;
	char* sLocal_340 = NULL;
	char* sLocal_341 = NULL;
	int iLocal_342 = 0;
	bool bLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = -1;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 1000;
	var uLocal_357 = 1000;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
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
	iLocal_136 = 1;
	sLocal_319 = "REBTH_HANGAR";
	sLocal_320 = "REBTH_RUNSOF";
	sLocal_321 = "REBTH_TAUNT";
	sLocal_335 = "RANDOM@BICYCLE_THIEF@BASE";
	sLocal_336 = "RANDOM@BICYCLE_THIEF@ASK_HELP";
	sLocal_338 = "RANDOM@BICYCLE_THIEF@IDLE_A";
	sLocal_339 = "RANDOM@BICYCLE_THIEF@GET_OFF_BIKE";
	sLocal_340 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	sLocal_341 = "RANDOM@BICYCLE_THIEF@THANKS";
	Local_113 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_228();
	}
	if (SYSTEM::VDIST2(Local_113, 421.92f, -1930.95f, 23.18f) < 16f)
	{
		bLocal_334 = true;
	}
	else if (SYSTEM::VDIST2(Local_113, 769.3f, -151.66f, 73.79f) < 16f)
	{
		bLocal_334 = 2;
	}
	else if (SYSTEM::VDIST2(Local_113, -1923.93f, 254.48f, 85.7f) < 16f)
	{
		bLocal_334 = 3;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		else if (func_227(PLAYER::PLAYER_PED_ID(), Local_113, 1) < 100f)
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	if (bLocal_334 != 3)
	{
		if (func_187(Local_113, 26, bLocal_334, 0, 0))
		{
			func_184(26);
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	else if (func_187(Local_113, 8, 0, 0, 0))
	{
		func_184(8);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_333 = func_182();
	iLocal_342 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_113 - Vector(20f, 20f, 20f), Local_113 + Vector(20f, 20f, 20f), false, true, true, true, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_181();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 28);
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 13);
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 35);
		}
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_106 > 1)
		{
			if (func_161())
			{
				func_160();
				func_228();
			}
			else
			{
				switch (iLocal_106)
				{
					case 0:
						func_157();
						break;
					
					case 1:
						if (func_156())
						{
							func_160();
							func_228();
						}
						else
						{
							func_144();
						}
						break;
					
					case 2:
						func_113();
						func_109();
						func_108();
						func_107();
						func_105();
						func_104();
						func_96();
						break;
					
					case 3:
						func_94();
						func_76();
						func_67();
						break;
					
					case 4:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_228();
		}
	}
}

void func_1()
{
	if (func_66(PLAYER::PLAYER_PED_ID()) && func_66(iLocal_109))
	{
		if (func_65(PLAYER::PLAYER_PED_ID(), iLocal_109, 1) > 50f)
		{
			func_64(8);
			func_27();
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_146) > 10000)
		{
			func_64(8);
			func_27();
		}
		else if ((iLocal_346 == 0 && !func_26()) && func_2(&uLocal_151, "REBTHAU", sLocal_318, 4, 0, 0, 0))
		{
			iLocal_346 = 1;
		}
	}
}

bool func_2(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_25(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_3(sParam2, iParam3, 0);
}

int func_3(char* sParam0, int iParam1, bool bParam2)
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
					func_24();
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
		if (func_23(8, -1))
		{
			return 0;
		}
		Global_23099 = { Global_23093 };
		func_22();
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
			MISC::CLEAR_BIT(&Global_9504, 0);
			if (bParam2)
			{
				func_14();
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
				if (func_13())
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
			if (func_12())
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
			func_11();
			Global_23033 = bParam2;
		}
		Global_23025 = iParam1;
		StringCopy(&Global_22642, sParam0, 24);
		Global_21889 = 0;
		func_10();
		func_4();
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
		func_24();
	}
	return 0;
}

void func_4()
{
	if (!func_5())
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

int func_5()
{
	if (!Global_262145.f_28486)
	{
		return 0;
	}
	if (!Global_80337)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_9())
	{
		return 0;
	}
	if (func_6(PLAYER::PLAYER_ID()))
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

int func_6(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_8(8))
		{
			return 1;
		}
		if (Global_2733190.f_5975.f_1 > 0)
		{
			return 1;
		}
	}
	return func_7(iParam0, 20);
}

var func_7(int iParam0, int iParam1)
{
	return BitTest(Global_1892925[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_8(int iParam0)
{
	return BitTest(Global_2733190.f_5964, iParam0);
}

int func_9()
{
	return -1;
}

void func_10()
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

void func_11()
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

int func_12()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_13()
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

void func_14()
{
	if (func_21(14))
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
		Global_21649 = func_15();
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

int func_15()
{
	func_16();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_16()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_19(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_18(PLAYER::PLAYER_PED_ID());
			if (func_17(iVar0) && (!func_21(14) || Global_113909))
			{
				if (Global_114963.f_2370.f_539.f_4321 != iVar0 && func_17(Global_114963.f_2370.f_539.f_4321))
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

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return func_20(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_20(int iParam0)
{
	return Global_2349[iParam0 /*29*/];
}

bool func_21(int iParam0)
{
	return Global_44921 == iParam0;
}

void func_22()
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

bool func_23(int iParam0, int iParam1)
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

void func_24()
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

void func_25(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_26()
{
	if (Global_23023 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	int iVar0;
	
	if (bLocal_334 == 3)
	{
		func_59(func_18(PLAYER::PLAYER_PED_ID()), 4, 5);
	}
	else
	{
		func_59(func_18(PLAYER::PLAYER_PED_ID()), 1, 3);
	}
	if (bLocal_334 != 3)
	{
		func_40(26, bLocal_334);
	}
	else
	{
		func_40(8, 0);
	}
	if (bLocal_334 == 1)
	{
		iVar0 = func_15();
		switch (iVar0)
		{
			case 0:
				while (!func_31(-1551606815, 6, 1, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					SYSTEM::WAIT(0);
				}
				break;
			
			case 1:
				while (!func_31(-980148216, 6, 2, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					SYSTEM::WAIT(0);
				}
				break;
			
			case 2:
				while (!func_31(-1857996981, 6, 4, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
	func_28();
	func_228();
}

void func_28()
{
	func_29();
}

int func_29()
{
	if (func_30(0))
	{
		return 0;
	}
	if (Global_102525.f_8)
	{
		if (Global_102525.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_102525.f_10 > 1)
	{
		return 0;
	}
	Global_102525.f_10++;
	return 1;
}

int func_30(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_80586, 0);
}

int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;
	
	if (func_30(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (bParam3 < 3)
	{
		if (BitTest(iParam2, bParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_114963.f_7697.f_866 < 10)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_39(iParam1);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = bParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		Global_114963.f_7697.f_765[Global_114963.f_7697.f_866 /*10*/] = { Var0 };
		Global_114963.f_7697.f_866++;
		return 1;
	}
	else
	{
		Var10 = { func_38(iParam0, iParam1, iParam2, bParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar20 = 0;
		func_37(&iVar20);
		iVar21 = func_36(Var10, Global_114963.f_7697.f_765[iVar20 /*10*/]);
		if (iVar21 == 2)
		{
			func_34(Global_114963.f_7697.f_765[iVar20 /*10*/]);
			Global_114963.f_7697.f_765[iVar20 /*10*/] = { Var10 };
			func_33(&Var10);
			return 1;
		}
		else if (iVar21 == 1)
		{
			if (func_32(Var10))
			{
				func_34(Global_114963.f_7697.f_765[iVar20 /*10*/]);
				Global_114963.f_7697.f_765[iVar20 /*10*/] = { Var10 };
				func_33(&Var10);
				return 1;
			}
			else
			{
				if (!func_32(Global_114963.f_7697.f_765[iVar20 /*10*/]))
				{
					Global_114963.f_7697.f_765[iVar20 /*10*/] = { Var10 };
					func_33(&Var10);
					return 1;
				}
				func_33(&Var10);
				return 1;
			}
		}
		else
		{
			func_34(Var10);
			func_33(&Var10);
			return 1;
		}
	}
	return 0;
}

int func_32(struct<9> Param0, var uParam9)
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_33(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_34(struct<10> Param0)
{
	if (func_32(Param0))
	{
		func_35(Param0.f_8, 0);
	}
}

void func_35(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_114963.f_8622[iParam0] = 1;
	Global_114963.f_8622.f_236[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_36(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, struct<4> Param10, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param10.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_37(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_114963.f_7697.f_866)
	{
		if (func_36(Global_114963.f_7697.f_765[iVar0 /*10*/], Global_114963.f_7697.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_38(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0.f_0 = uParam0;
	Var0.f_3 = func_39(iParam1);
	Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = bParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	MISC::CLEAR_BIT(&(Var0.f_1), 0);
	return Var0;
}

int func_39(int iParam0)
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

void func_40(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_57();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_56(iParam0))
	{
		func_55(iParam0, bParam1);
		if (!func_54(51))
		{
			func_50("RE_REWARD", 1, 0, 4000, 10000, func_53(), 0, 138, 0);
			func_49(51);
		}
		if (func_48(iParam0))
		{
			Global_114963.f_25004.f_2 = 3;
		}
		if (func_47(iParam0, bParam1) != 322)
		{
			func_41(func_47(iParam0, bParam1), Local_103.f_0, Local_103.f_1);
		}
		Global_114951 = bParam1;
		if (Global_114949 == 0)
		{
			if (((Global_114952 == 1 || Global_114952 == 5) || Global_114952 == 11) || Global_114952 == 25)
			{
				func_64(2);
			}
			else if ((Global_114952 == 26 || Global_114952 == 8) || Global_114952 == 17)
			{
				func_64(7);
			}
			else
			{
				func_64(1);
			}
		}
	}
}

void func_41(int iParam0, var uParam1, var uParam2)
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
		func_45((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_114963.f_10203[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114963.f_10203[iParam0 /*12*/].f_6 == 11 || Global_114963.f_10203[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_114963.f_10203[iParam0 /*12*/].f_5 = 1;
		Global_114963.f_10203[iParam0 /*12*/].f_10 = uParam1;
		Global_114963.f_10203[iParam0 /*12*/].f_11 = uParam2;
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
		func_42();
	}
}

void func_42()
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
	Global_114699 = 0;
	Global_114700 = 0;
	Global_114701 = 0;
	Global_114702 = 0;
	Global_114703 = 0;
	Global_114704 = 0;
	Global_114705 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_114963.f_10203.f_3853;
	Global_114963.f_10203.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_114963.f_10203[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_114963.f_10203[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_114699++;
					fVar1 = (fVar1 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_114700++;
					fVar2 = (fVar2 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_114701++;
					fVar3 = (fVar3 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_114702++;
					fVar4 = (fVar4 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_114703++;
					fVar5 = (fVar5 + (Global_114963.f_10203[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_114704++;
					fVar6 = (fVar6 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_114705++;
					fVar7 = (fVar7 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_114682 > 0)
	{
		if (Global_114699 == Global_114682)
		{
			fVar1 = 55f;
		}
	}
	if (Global_114683 > 0)
	{
		if (Global_114700 == Global_114683)
		{
			fVar2 = 10f;
		}
	}
	if (Global_114684 > 0)
	{
		if (Global_114701 == Global_114684)
		{
			fVar3 = 0f;
		}
	}
	if (Global_114685 > 0)
	{
		if (Global_114702 == Global_114685)
		{
			fVar4 = 10f;
		}
	}
	if (Global_114686 > 0)
	{
		if (((Global_114703 == Global_114686 || (Global_114686 * 10 / Global_114703) < 41) || Global_114703 > Global_114689) || Global_114703 == Global_114689)
		{
			if (!BitTest(Global_114963.f_10203.f_3856, 14))
			{
				if (Global_114703 == Global_114686)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_114686, 0);
					MISC::SET_BIT(&(Global_114963.f_10203.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_114687 > 0)
	{
		if (Global_114704 == Global_114687)
		{
			fVar6 = 15f;
		}
	}
	if (Global_114688 > 0)
	{
		if (Global_114705 == Global_114688)
		{
			fVar7 = 5f;
		}
	}
	Global_114963.f_10203.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_114703 > Global_114689 || Global_114703 == Global_114689)
	{
		iVar9 = Global_114689;
	}
	else
	{
		iVar9 = Global_114703;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_114699, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_114682, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_114700, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_114683, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_114701, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_114684, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_114702, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_114685, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_114689, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_114705 + Global_114704), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_114688 + Global_114687), true);
	Global_114706 = (Global_114699 * 100 / Global_114682);
	Global_114708 = ((Global_114701 + Global_114700) * 100 / (Global_114684 + Global_114683));
	Global_114707 = ((Global_114702 + iVar9) * 100 / (Global_114685 + Global_114689));
	Global_114709 = ((Global_114704 + Global_114705) * 100 / (Global_114687 + Global_114688));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_114963.f_10203.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_114706, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_114707, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_114708, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_114963.f_10203.f_3853))
	{
		func_44(13, SYSTEM::FLOOR(Global_114963.f_10203.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_80337)
		{
			if (func_43() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_114697 = 0;
				}
				if (!Global_65063)
				{
					func_29();
				}
			}
		}
	}
}

int func_43()
{
	return Global_33815;
}

int func_44(int iParam0, int iParam1)
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

void func_45(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_46();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_46()
{
	return Global_1574928;
}

int func_47(int iParam0, int iParam1)
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

int func_48(int iParam0)
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

void func_49(int iParam0)
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
		MISC::SET_BIT(&(Global_114963.f_20419.f_150[iVar1]), iVar0);
	}
}

void func_50(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_51(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_51(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
	while (iVar0 < Global_114963.f_20419.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_20419[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_114963.f_20419.f_145 < 9)
	{
		StringCopy(&(Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_4), sParam1, 16);
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_9 = iParam5;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_11 = iParam6;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_12 = uParam2;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_13 = iParam7;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_14 = iParam8;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_10 = -1;
		}
		Global_114963.f_20419.f_145++;
		func_52();
	}
}

void func_52()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_114963.f_20419.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114963.f_20419.f_145)
	{
		if (BitTest(Global_114963.f_20419[iVar0 /*16*/].f_11, 0))
		{
			if (Global_114963.f_20419[iVar0 /*16*/].f_12 > Global_114963.f_20419.f_146[0])
			{
				Global_114963.f_20419.f_146[0] = Global_114963.f_20419[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114963.f_20419[iVar0 /*16*/].f_11, 1))
		{
			if (Global_114963.f_20419[iVar0 /*16*/].f_12 > Global_114963.f_20419.f_146[1])
			{
				Global_114963.f_20419.f_146[1] = Global_114963.f_20419[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114963.f_20419[iVar0 /*16*/].f_11, 2))
		{
			if (Global_114963.f_20419[iVar0 /*16*/].f_12 > Global_114963.f_20419.f_146[2])
			{
				Global_114963.f_20419.f_146[2] = Global_114963.f_20419[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_53()
{
	func_16();
	switch (Global_114963.f_2370.f_539.f_4321)
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

int func_54(int iParam0)
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
		return BitTest(Global_114963.f_20419.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_55(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_114963.f_25004.f_8[iParam0]), iParam1);
}

int func_56(int iParam0)
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

int func_57()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_58(Var0);
	return uVar16;
}

int func_58(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_59(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_114963.f_2370.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_114963.f_2370.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 16764;
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
			if (iVar1 != 16764)
			{
				iVar0 = func_63(iVar1, -1);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_60(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_60(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 16764)
	{
		iVar0 = func_61(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_61(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_62(uParam1));
}

int func_62(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_46();
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

int func_63(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 16764)
	{
		iVar0 = func_61(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_64(int iParam0)
{
	Global_114949 = iParam0;
}

float func_65(int iParam0, int iParam1, bool bParam2)
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

int func_66(int iParam0)
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

void func_67()
{
	if (func_66(iLocal_109) && func_75(iLocal_110))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, false))
		{
			func_74(&uLocal_359);
			func_73(&iLocal_149);
			if (iLocal_147 == 0 && !HUD::DOES_BLIP_EXIST(iLocal_148))
			{
				iLocal_148 = func_72(iLocal_110, 0, 0);
			}
		}
		else
		{
			func_73(&iLocal_148);
			if (!HUD::DOES_BLIP_EXIST(iLocal_149))
			{
				iLocal_149 = func_69(iLocal_109, 0, 145);
				if (iLocal_360 == 0)
				{
					func_68(&uLocal_359);
					iLocal_360 = 1;
				}
			}
		}
	}
}

void func_68(var uParam0)
{
	*uParam0 = -99;
}

int func_69(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_70(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2349[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2349[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_70(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_71(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_71(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_71(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_71(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_72(int iParam0, bool bParam1, bool bParam2)
{
	return func_70(iParam0, !bParam1, bParam2);
}

void func_73(int* iParam0)
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_74(var uParam0)
{
	*uParam0 = (MISC::GET_GAME_TIMER() - 5000);
}

int func_75(int iParam0)
{
	if (func_66(iParam0))
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

void func_76()
{
	float fVar0;
	
	if (func_66(iLocal_109) && func_75(iLocal_110))
	{
		func_93(iLocal_149, &uLocal_359);
		if (fLocal_141 > 0f)
		{
			fVar0 = func_65(PLAYER::PLAYER_PED_ID(), iLocal_109, 1);
			if (fVar0 > (fLocal_141 + fLocal_134))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, false))
				{
					func_64(7);
					func_27();
				}
				else
				{
					func_228();
				}
			}
		}
		else
		{
			fLocal_141 = func_65(PLAYER::PLAYER_PED_ID(), iLocal_109, 1);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_110, 0f);
				AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
			}
		}
		if (iLocal_325 == 0)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_109, 40f, 40f, 40f, false, true, 0))
			{
				func_92();
				if (iLocal_328 == 0)
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_109, 25f, 25f, 25f, false, true, 0))
					{
						if (((((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, false) && PED::IS_PED_FACING_PED(iLocal_109, PLAYER::PLAYER_PED_ID(), 30f)) && func_83(iLocal_109, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7)) && !PED::IS_PED_RAGDOLL(iLocal_109)) && !TASK::IS_PED_GETTING_UP(iLocal_109)) && func_2(&uLocal_151, "REBTHAU", "REBTH_APEBIK", 4, 0, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(iLocal_109, sLocal_340, "RETURNING_FRONT_B", 8f, -8f, -1, 0, 0f, false, false, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							iLocal_328 = 1;
						}
					}
					else
					{
						iLocal_328 = 1;
					}
				}
			}
		}
		else if (((!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_110, iLocal_109, 35f, 35f, 35f, false, true, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, false)) && !func_82()) && func_2(&uLocal_151, "REBTHAU", "REBTH_PLASTE", 4, 0, 0, 0))
		{
			func_80(0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_109, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_139, joaat("player"));
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_109, true);
			TASK::TASK_COMBAT_PED(iLocal_109, PLAYER::PLAYER_PED_ID(), 0, 16);
			PED::SET_PED_KEEP_TASK(iLocal_109, true);
			SYSTEM::WAIT(0);
			func_64(7);
			func_27();
		}
		if (PED::IS_PED_IN_VEHICLE(iLocal_109, iLocal_110, false))
		{
			if (!func_26() && func_2(&uLocal_151, "REBTHAU", "REBTH_GETOFF", 4, 0, 0, 0))
			{
			}
			iLocal_146 = MISC::GET_GAME_TIMER();
			iLocal_106 = 4;
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_110, iLocal_109, 20f, 20f, 20f, false, true, 0))
		{
			if (func_79())
			{
				if (!func_77(iLocal_109, joaat("script_task_perform_sequence")))
				{
					iLocal_147 = 1;
					func_80(0);
					func_74(&uLocal_359);
					func_73(&iLocal_149);
					func_73(&iLocal_148);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_110, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_112);
					if (iLocal_325 == 0)
					{
						TASK::TASK_ENTER_VEHICLE(0, iLocal_110, 20000, -1, 2f, 8, 0);
					}
					else
					{
						TASK::TASK_ENTER_VEHICLE(0, iLocal_110, 20000, -1, 2f, 262152, 0);
					}
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_110, fLocal_131, 786485);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_112);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_109, iLocal_112);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_112);
					PED::SET_PED_KEEP_TASK(iLocal_109, true);
				}
			}
			else
			{
				switch (iLocal_325)
				{
					case 0:
						if ((((iLocal_328 == 1 && !func_77(iLocal_109, joaat("script_task_play_anim"))) && !PED::IS_PED_RAGDOLL(iLocal_109)) && !TASK::IS_PED_GETTING_UP(iLocal_109)) && func_2(&uLocal_151, "REBTHAU", "REBTH_THANKS", 4, 0, 0, 0))
						{
							if (PED::IS_PED_FACING_PED(iLocal_109, PLAYER::PLAYER_PED_ID(), 30f) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_109, joaat("script_task_turn_ped_to_face_entity")) == 7)
							{
								TASK::TASK_PLAY_ANIM(iLocal_109, sLocal_340, "RETURNING_FRONT_A", 8f, -8f, -1, 0, 0f, false, false, false);
							}
							iLocal_326 = MISC::GET_GAME_TIMER();
							iLocal_325++;
						}
						else
						{
							func_92();
						}
						break;
					
					case 1:
						if (((((MISC::GET_GAME_TIMER() - iLocal_326) > 10000 && !func_77(iLocal_109, joaat("script_task_play_anim"))) && !PED::IS_PED_RAGDOLL(iLocal_109)) && !TASK::IS_PED_GETTING_UP(iLocal_109)) && func_2(&uLocal_151, "REBTHAU", sLocal_322, 4, 0, 0, 0))
						{
							if (PED::IS_PED_FACING_PED(iLocal_109, PLAYER::PLAYER_PED_ID(), 30f))
							{
								func_80(0);
								TASK::TASK_PLAY_ANIM(iLocal_109, sLocal_341, "THANKS_A", 8f, -8f, -1, 0, 0f, false, false, false);
							}
							iLocal_326 = MISC::GET_GAME_TIMER();
							iLocal_325++;
						}
						else
						{
							func_80(1);
						}
						break;
					
					case 2:
						if (((((MISC::GET_GAME_TIMER() - iLocal_326) > 10000 && !func_77(iLocal_109, joaat("script_task_play_anim"))) && !PED::IS_PED_RAGDOLL(iLocal_109)) && !TASK::IS_PED_GETTING_UP(iLocal_109)) && func_2(&uLocal_151, "REBTHAU", sLocal_323, 4, 0, 0, 0))
						{
							if (PED::IS_PED_FACING_PED(iLocal_109, PLAYER::PLAYER_PED_ID(), 30f))
							{
								func_80(0);
								TASK::TASK_PLAY_ANIM(iLocal_109, sLocal_339, "BIKE_BACK_NOW_A", 8f, -8f, -1, 0, 0f, false, false, false);
							}
							iLocal_325++;
						}
						else
						{
							func_80(1);
						}
						break;
					
					default:
						func_80(1);
						break;
					}
				}
			}
	}
}

int func_77(int iParam0, int iParam1)
{
	if (func_78(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_78(int iParam0)
{
	if (func_66(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79()
{
	if (iLocal_147 == 1)
	{
		return 1;
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_145) < 4000)
	{
		return 0;
	}
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_110, true))
	{
		return 0;
	}
	if (func_66(iLocal_108) && PED::IS_PED_BEING_JACKED(iLocal_108))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_110, -1, false))
	{
		return 0;
	}
	return 1;
}

void func_80(int iParam0)
{
	if (func_66(iLocal_109))
	{
		if (iParam0 == 1)
		{
			if (!PED::IS_PED_IN_GROUP(iLocal_109) && func_66(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_109, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_109, true);
				PED::SET_GROUP_FORMATION_SPACING(func_81(), 2f, -1f, -1f);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_109, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
		}
		else if (PED::IS_PED_IN_GROUP(iLocal_109))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_109);
		}
	}
}

int func_81()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_82()
{
	if (bLocal_334 == 3)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1875.858f, 262.3736f, 82.96029f, -1927.379f, 234.7951f, 90.71558f, 50.25f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_83(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_91(iParam0, iParam1);
	if (!func_66(iParam0) || !func_66(iParam1))
	{
		if (iVar4 != -1)
		{
			func_90(&(Local_61[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_87(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_86();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_61[iVar4 /*4*/].f_1 = iParam0;
		Local_61[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_84(&(Local_61[iVar4 /*4*/]), Var1, iParam1, &(Local_61[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_61[iVar4 /*4*/].f_3) < iParam4);
}

int func_84(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_66(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_85(iParam4, iParam7) };
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
		func_66(iVar7);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == iParam4)
		{
			if (bLocal_102)
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
		func_66(iVar7);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam4, false))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == PED::GET_VEHICLE_PED_IS_IN(iParam4, false))
			{
				if (bLocal_102)
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

Vector3 func_85(int iParam0, int iParam1)
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

int func_86()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_61.f_0)
	{
		if ((Local_61[iVar0 /*4*/] == 0 && Local_61[iVar0 /*4*/].f_1 == 0) && Local_61[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_87(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_89(ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
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
		Var3 = { func_89(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_88(Var3, Var0);
	if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_88(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_89(struct<3> Param0)
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

void func_90(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_61.f_0)
	{
		if (Local_61[iVar0 /*4*/].f_1 == iParam0 && Local_61[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_92()
{
	if (iLocal_147 == 0 && func_66(iLocal_109))
	{
		if (func_77(iLocal_109, joaat("script_task_perform_sequence")))
		{
			TASK::CLEAR_PED_TASKS(iLocal_109);
		}
		if ((((!func_77(iLocal_109, joaat("script_task_play_anim")) && !PED::IS_PED_FACING_PED(iLocal_109, PLAYER::PLAYER_PED_ID(), 20f)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_109, joaat("script_task_turn_ped_to_face_entity")) == 7) && !PED::IS_PED_RAGDOLL(iLocal_109)) && !TASK::IS_PED_GETTING_UP(iLocal_109))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_109, PLAYER::PLAYER_PED_ID(), 0);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_109, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
	}
}

void func_93(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = MISC::GET_GAME_TIMER();
	}
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = (MISC::GET_GAME_TIMER() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
				{
					HUD::SET_BLIP_ALPHA(iParam0, 255);
				}
			}
			else if (HUD::GET_BLIP_ALPHA(iParam0) != 0)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 255);
			}
		}
	}
}

void func_94()
{
	if (func_66(iLocal_108))
	{
		if (iLocal_137 == 0)
		{
			PED::SET_PED_FLEE_ATTRIBUTES(iLocal_108, 2, false);
			TASK::CLEAR_PED_TASKS(iLocal_108);
			if (func_75(iLocal_110))
			{
				if (bLocal_334 == 2)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_110))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_110);
					}
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, "RE_BikeThief2");
				}
				if (PED::IS_PED_IN_VEHICLE(iLocal_108, iLocal_110, true))
				{
					PED::KNOCK_PED_OFF_VEHICLE(iLocal_108);
				}
			}
			PED::SET_PED_KEEP_TASK(iLocal_108, true);
			TASK::TASK_SMART_FLEE_PED(iLocal_108, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
			iLocal_137 = 1;
		}
		else
		{
			if (((((iLocal_138 == 0 && func_65(iLocal_108, PLAYER::PLAYER_PED_ID(), 1) < 30f) && !PED::IS_PED_RAGDOLL(iLocal_108)) && func_77(iLocal_108, joaat("script_task_smart_flee_ped"))) && !func_26()) && func_2(&uLocal_151, "REBTHAU", sLocal_320, 4, 0, 0, 0))
			{
				iLocal_138 = 1;
			}
			if (func_65(iLocal_108, PLAYER::PLAYER_PED_ID(), 1) > 50f)
			{
				func_95(&iLocal_108, 1, 0, 1);
			}
		}
	}
}

void func_95(int* iParam0, bool bParam1, int iParam2, int iParam3)
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

void func_96()
{
	if ((func_66(iLocal_108) && func_66(iLocal_109)) && func_75(iLocal_110))
	{
		if (func_103())
		{
			func_101(&uLocal_347, 0, 0, 0);
			func_100(&iLocal_108);
			func_99(&iLocal_110);
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_109, PLAYER::PLAYER_PED_ID(), 25f, 25f, 25f, false, true, 0) && func_2(&uLocal_151, "REBTHAU", sLocal_324, 4, 0, 0, 0))
			{
			}
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_109, "WORLD_HUMAN_STAND_MOBILE", 0, true);
			func_98();
		}
		else
		{
			func_97(iLocal_148, iLocal_110, fLocal_134, 1061158912, 0);
		}
	}
}

void func_97(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
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

void func_98()
{
	func_228();
}

void func_99(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		if (func_75(*iParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
			{
				if (func_66(PLAYER::PLAYER_PED_ID()))
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
			if (func_66(PLAYER::PLAYER_PED_ID()))
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

void func_100(int* iParam0)
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

void func_101(var uParam0, int iParam1, bool bParam2, bool bParam3)
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
		if (func_102(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_102(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

bool func_102(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_103()
{
	if (func_65(iLocal_110, PLAYER::PLAYER_PED_ID(), 1) > (fLocal_134 + 100f))
	{
		return 1;
	}
	if (func_65(iLocal_110, PLAYER::PLAYER_PED_ID(), 1) > fLocal_134)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_109, sLocal_338, "IDLE_A", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_109, sLocal_338, "IDLE_A") > 0.99f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_109, sLocal_338, "IDLE_B", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_109, sLocal_338, "IDLE_B") > 0.99f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_109, sLocal_338, "IDLE_C", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_109, sLocal_338, "IDLE_C") > 0.99f))
		{
			return 1;
		}
	}
	return 0;
}

void func_104()
{
	if ((((((((((iLocal_144 > -1 && (MISC::GET_GAME_TIMER() - iLocal_144) > 5000) && !func_26()) && func_66(iLocal_108)) && func_66(iLocal_109)) && func_75(iLocal_110)) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_108, 13f, 13f, 13f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_109, iLocal_108, 13f, 13f, 13f, false, true, 0)) && PED::IS_PED_IN_VEHICLE(iLocal_108, iLocal_110, false)) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_109, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, false, true, 0)) && func_2(&uLocal_151, "REBTHAU", sLocal_319, 4, 0, 0, 0))
	{
		iLocal_144 = -1;
	}
}

void func_105()
{
	if (func_106())
	{
		iLocal_145 = MISC::GET_GAME_TIMER();
		func_73(&iLocal_148);
		func_101(&uLocal_347, 0, 0, 0);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			iLocal_111 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_111, true, true);
		}
		if (func_66(iLocal_109))
		{
			TASK::TASK_CLEAR_LOOK_AT(iLocal_109);
		}
		if ((func_66(iLocal_108) && !func_26()) && func_2(&uLocal_151, "REBTHAU", "REBTH_INAIR", 4, 0, 0, 0))
		{
		}
		iLocal_106 = 3;
	}
	else
	{
		if (((bLocal_343 == 0 && HUD::DOES_BLIP_EXIST(iLocal_148)) && func_66(PLAYER::PLAYER_PED_ID())) && func_66(iLocal_108))
		{
			if (func_65(PLAYER::PLAYER_PED_ID(), iLocal_108, 1) < 30f || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_108, true), 10f, true))
			{
				bLocal_343 = true;
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_148, bLocal_343);
			}
		}
		if (((bLocal_334 == 2 && func_66(iLocal_108)) && func_75(iLocal_110)) && PED::IS_PED_IN_VEHICLE(iLocal_108, iLocal_110, false))
		{
			if (iLocal_329 == 0)
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_110, 1, "RE_BikeThief2", 30f, 786468);
				iLocal_329 = 1;
				Local_330 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "RE_BikeThief2"), VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "RE_BikeThief2")) };
			}
			else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_110) || func_227(iLocal_110, Local_330, 1) < 5f)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_110))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_110);
				}
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_108, iLocal_110, PLAYER::PLAYER_PED_ID(), 8, fLocal_131, 786468, 10f, 1f, false);
			}
		}
	}
}

int func_106()
{
	if (!func_66(iLocal_108))
	{
		return 1;
	}
	else if (func_66(iLocal_110))
	{
		if (iLocal_361 == 0)
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_108, iLocal_110, false))
			{
				iLocal_361 = 1;
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(iLocal_108, iLocal_110, false))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_108, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	return 0;
}

void func_107()
{
	if ((func_66(iLocal_108) && func_75(iLocal_110)) && PED::IS_PED_IN_VEHICLE(iLocal_108, iLocal_110, false))
	{
		if (iLocal_136)
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_108, 40f, 40f, 40f, false, true, 0))
			{
				fLocal_131 = fLocal_133;
				TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_108, fLocal_131);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_108, PLAYER::PLAYER_PED_ID(), 20000, 16, 2);
				iLocal_136 = 0;
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_108, 40f, 40f, 40f, false, true, 0))
		{
			fLocal_131 = fLocal_132;
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_108, fLocal_131);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_108, PLAYER::PLAYER_PED_ID(), 20000, 16, 2);
			iLocal_136 = 1;
		}
	}
}

void func_108()
{
	if (((((((((iLocal_142 < 5 && !func_26()) && func_66(iLocal_108)) && func_66(iLocal_109)) && func_75(iLocal_110)) && PED::IS_PED_IN_VEHICLE(iLocal_108, iLocal_110, false)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_108, 13f, 13f, 13f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_109, iLocal_108, 13f, 13f, 13f, false, true, 0)) && (MISC::GET_GAME_TIMER() - iLocal_143) > 15000) && func_2(&uLocal_151, "REBTHAU", sLocal_321, 4, 0, 0, 0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_108, joaat("script_task_vehicle_mission")) == 1 && !TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_108))
		{
			TASK::TASK_DRIVE_BY(iLocal_108, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 15f, 50, true, -753768974);
		}
		iLocal_143 = MISC::GET_GAME_TIMER();
		iLocal_142++;
	}
}

void func_109()
{
	if ((((iLocal_327 == 0 && func_66(iLocal_109)) && func_66(iLocal_108)) && func_75(iLocal_110)) && PED::IS_PED_IN_VEHICLE(iLocal_108, iLocal_110, false))
	{
		if (iLocal_344 == 0)
		{
			if (func_2(&uLocal_151, "REBTHAU", sLocal_316, 4, func_112(), 0, 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_109);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_112);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_108, -1, 2048, 2);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_122, 2f, 20000, 40000f, 0.5f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_110, 1000);
				TASK::TASK_PLAY_ANIM(0, sLocal_336, sLocal_337, 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_338, "IDLE_A", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_338, "IDLE_B", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_338, "IDLE_C", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_338, "IDLE_B", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_338, "IDLE_A", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_338, "IDLE_B", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_338, "IDLE_C", 8f, -8f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_112);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_109, iLocal_112);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_112);
				iLocal_143 = MISC::GET_GAME_TIMER();
				iLocal_144 = MISC::GET_GAME_TIMER();
				if (bLocal_334 == 3)
				{
					sLocal_317 = "REBTH_HELP2X";
				}
				else
				{
					sLocal_317 = "REBTH_HELP2";
				}
				iLocal_344 = 1;
			}
		}
		else if (func_66(PLAYER::PLAYER_PED_ID()))
		{
			if (func_65(PLAYER::PLAYER_PED_ID(), iLocal_109, 1) < 30f)
			{
				if (!func_26())
				{
					if (func_2(&uLocal_151, "REBTHAU", sLocal_317, 4, 0, 0, 0))
					{
						iLocal_327 = 1;
					}
				}
				else if (iLocal_345 == 0)
				{
					func_110();
					iLocal_345 = 1;
				}
			}
		}
	}
}

void func_110()
{
	Global_21889 = 0;
	func_111();
}

void func_111()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_24034 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_23023 = 6;
		return;
	}
}

int func_112()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 100f, 100f, 20f };
	if (!PED::IS_PED_INJURED(iLocal_109))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_109, PLAYER::PLAYER_PED_ID(), Var1, false, true, 0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_113()
{
	if ((func_66(iLocal_108) && func_75(iLocal_110)) && PED::IS_PED_IN_VEHICLE(iLocal_108, iLocal_110, false))
	{
		func_114(&uLocal_347, iLocal_110, 0, 0, 1, 1, 1);
	}
}

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_115(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_115(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_116(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_116(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		func_101(uParam0, 0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_117(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_117(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
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
	if (func_102(iVar0))
	{
		func_143();
	}
	if (func_142(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
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
			if (func_137(uParam0, bParam7, bParam9, 0))
			{
				func_133(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_122(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_102(iVar0))
							{
								func_121(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_120(1);
								}
							}
						}
					}
				}
			}
			else if (func_122(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_102(iVar0))
						{
							func_121(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_120(1);
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
				if (func_102(sParam5))
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
						func_101(uParam0, iVar0, 1, 0);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_101(uParam0, iVar0, 1, 0);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_101(uParam0, iVar0, 1, 0);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_101(uParam0, iVar0, 1, 0);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_101(uParam0, iVar0, 1, 0);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_101(uParam0, iVar0, 1, 0);
				}
			}
			if (!func_137(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_119(uParam0))
				{
					func_118(uParam0);
				}
			}
		}
	}
	else
	{
		func_101(uParam0, iVar0, 0, 0);
	}
}

void func_118(var uParam0)
{
	if (func_142(PLAYER::PLAYER_PED_ID()))
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

int func_119(var uParam0)
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

int func_120(bool bParam0)
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

void func_121(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_122(char* sParam0)
{
	if (!func_123(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_102(sParam0)) || func_102("CMN_HINT"))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_44921)
	{
		case 0:
		case 3:
			if (func_120(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_120(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_120(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_132(0))
	{
		return 0;
	}
	if (func_131())
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
	if ((func_130() || func_129(Global_4718592.f_197291)) || func_128())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_127(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_126(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1963699)
	{
		return 0;
	}
	if (func_124(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_124(int iParam0)
{
	if (iParam0 != func_9())
	{
		if (func_125(iParam0, 1, 1))
		{
			return Global_2658293[iParam0 /*468*/].f_325.f_8 != -1;
		}
		else if ((Global_1575095 && iParam0 == PLAYER::PLAYER_ID()) && func_125(iParam0, 1, 0))
		{
			return Global_2658293[iParam0 /*468*/].f_325.f_8 != -1;
		}
	}
	return 0;
}

int func_125(int iParam0, bool bParam1, bool bParam2)
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

int func_126(int iParam0, int iParam1)
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

int func_127(int iParam0, bool bParam1)
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

var func_128()
{
	return Global_2685152.f_20;
}

bool func_129(int iParam0)
{
	return iParam0 == 51;
}

var func_130()
{
	return Global_2685152.f_19;
}

bool func_131()
{
	return MISC::GET_GAME_TIMER() <= Global_24569.f_6481 + 100;
}

int func_132(int iParam0)
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

void func_133(var uParam0, int iParam1, struct<3> Param2, int iParam5)
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
		func_101(uParam0, 0, 0, 0);
	}
	if (func_136(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_134())
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

bool func_134()
{
	return func_135(PLAYER::PLAYER_ID());
}

int func_135(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_136(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_137(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_141(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_140(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_140(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_141(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_119(uParam0))
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
						if (!func_141(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_140(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_140(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_141(bParam1, bParam2, bParam3))
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
					if (!func_141(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_140(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_140(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
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
				else if (!func_141(bParam1, bParam2, bParam3))
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
						if (func_139(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_138(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_138(bParam1, bParam2, bParam3))
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
					else if (func_139(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_119(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_123(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_143();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_138(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_123(bParam0, bParam1, bParam2))
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

int func_139(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_123(bParam0, bParam1, bParam2))
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

int func_140(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_123(bParam0, bParam1, bParam2))
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

int func_141(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_123(bParam0, bParam1, bParam2))
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

int func_142(int iParam0)
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

void func_143()
{
	MISC::SET_BIT(&Global_9503, 4);
}

void func_144()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_108))
	{
		if (PED::IS_PED_INJURED(iLocal_108))
		{
			func_160();
			func_228();
		}
		else if (func_155())
		{
			if (func_15() == 0)
			{
				func_154(&uLocal_151, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				sLocal_318 = "REBTH_RESPM";
			}
			else if (func_15() == 1)
			{
				func_154(&uLocal_151, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				sLocal_318 = "REBTH_RESPF";
			}
			else if (func_15() == 2)
			{
				func_154(&uLocal_151, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				sLocal_318 = "REBTH_RESPT";
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, false) && !PED::IS_PED_INJURED(iLocal_108))
			{
				if (bLocal_334 == 2)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_108, iLocal_110, 20000, -1, 1073741824, 1, 0);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_112);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_110, 20000, -1, 1073741824, 1, 0);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_110, PLAYER::PLAYER_PED_ID(), 8, fLocal_131, 786468, 10f, 1f, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_112);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_108, iLocal_112);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_112);
					PED::SET_PED_KEEP_TASK(iLocal_108, true);
				}
			}
			func_73(&iLocal_150);
			iLocal_148 = func_69(iLocal_108, 1, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_148, bLocal_343);
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			if (bLocal_334 == 1)
			{
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, false, false, true);
			}
			iLocal_106 = 2;
			func_145(1);
		}
	}
}

int func_145(int iParam0)
{
	if (func_148())
	{
		Global_114953 = 1;
		Global_114950 = MISC::GET_GAME_TIMER();
		if (func_48(Global_114952))
		{
			func_146(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_48(Global_114952))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_114963.f_25004.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_121(func_147(iParam0), -1);
					Global_114963.f_25004.f_2++;
					MISC::SET_BIT(&Global_114959, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_114959, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_121(func_147(iParam0), -1);
					Global_114963.f_25004.f_3++;
					MISC::SET_BIT(&Global_114959, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_114959, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_121(func_147(iParam0), -1);
					Global_114963.f_25004.f_4++;
					MISC::SET_BIT(&Global_114959, 2);
				}
			}
			break;
	}
}

char* func_147(int iParam0)
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

int func_148()
{
	switch (func_149(&Global_33875, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_149(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_99939.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_153(0))
		{
			return 0;
		}
		Global_44885++;
		*uParam0 = Global_44885;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_24430.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_44921 = iParam2;
		Global_44883 = *uParam0;
		Global_44884 = iParam4;
		Global_44882 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_44882 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_44882)
			{
				if (Global_44888[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_44883 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_151(iParam2))
		{
			return 0;
		}
		if (Global_44882 == 8)
		{
			return 0;
		}
		Global_44885++;
		*uParam0 = Global_44885;
		Global_44888[Global_44882 /*4*/] = Global_44885;
		Global_44888[Global_44882 /*4*/].f_1 = iParam1;
		Global_44888[Global_44882 /*4*/].f_2 = iParam2;
		Global_44888[Global_44882 /*4*/].f_3 = 0;
		Global_44882++;
		if (iParam4 != 0)
		{
			func_150(uParam0, iParam4);
		}
	}
	return 2;
}

void func_150(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_44882 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_44882)
	{
		if (Global_44888[iVar0 /*4*/] == *uParam0)
		{
			Global_44888[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_151(int iParam0)
{
	return func_152(iParam0, Global_44921);
}

int func_152(int iParam0, int iParam1)
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

int func_153(int iParam0)
{
	if (Global_44921 == 15)
	{
		return 0;
	}
	if (func_151(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_154(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_155()
{
	switch (bLocal_334)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 365.9538f, -1971.716f, 18.34454f, 526.409f, -1861.941f, 34.52906f, 100f, false, true, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 886.1401f, -229.9373f, 67.42569f, 652.7365f, -91.95201f, 83.21314f, 60f, false, true, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1969.382f, 382.1331f, 68.15017f, -1878.152f, 158.4052f, 104.8504f, 100f, false, true, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_156()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 16f, 16f, 6f };
	Var3 = { -16f, -16f, -6f };
	if (func_66(iLocal_108))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_108, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (func_75(iLocal_110))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_110, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (func_66(iLocal_109))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_109, 31086, 0f, 0f, 0f), 3f, true))
		{
			return 1;
		}
		Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_109, 31086, 0f, 0f, 0f) };
		Var3 = { Var3 + PED::GET_PED_BONE_COORDS(iLocal_109, 31086, 0f, 0f, 0f) };
		if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_smokegrenade"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_grenade"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_stickybomb"), true))
		{
			return 1;
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_109, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(iLocal_109, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
		if (PED::IS_PED_FLEEING(iLocal_109))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_109, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	return 0;
}

void func_157()
{
	if (iLocal_135 == 0)
	{
		switch (bLocal_334)
		{
			case 1:
				Local_119 = { 433.57f, -1916.68f, 24.04f };
				fLocal_129 = 248.5f;
				Local_122 = { 439.054f, -1920.145f, 23.5581f };
				Local_125 = { 434.31f, -1908.87f, 25.92f };
				fLocal_130 = -163.17f;
				Local_116 = { 435.18f, -1915.18f, 24.68f };
				fLocal_128 = 226.13f;
				fLocal_132 = 10f;
				fLocal_133 = 20f;
				iLocal_107 = joaat("scorcher");
				fLocal_134 = 250f;
				sLocal_322 = "REBTH_THX2";
				sLocal_323 = "REBTH_THX3";
				sLocal_324 = "REBTH_GONE";
				break;
			
			case 2:
				Local_119 = { 774.06f, -155.63f, 73.44f };
				fLocal_129 = 144.3932f;
				Local_122 = { 769.8723f, -156.9548f, 73.5144f };
				Local_125 = { 773.632f, -150.3134f, 74.6217f };
				fLocal_130 = 151.6004f;
				Local_116 = { 771.41f, -154.29f, 74.09f };
				fLocal_128 = 150.54f;
				fLocal_132 = 10f;
				fLocal_133 = 20f;
				iLocal_107 = joaat("scorcher");
				fLocal_134 = 250f;
				sLocal_322 = "REBTH_THX2";
				sLocal_323 = "REBTH_THX3";
				sLocal_324 = "REBTH_GONE";
				break;
			
			case 3:
				Local_119 = { -1927.94f, 254.7125f, 84.4018f };
				fLocal_129 = 285.0046f;
				Local_122 = { -1934.785f, 253.2105f, 83.8164f };
				Local_125 = { -1931.04f, 252.19f, 84.99f };
				fLocal_130 = 42.33f;
				Local_116 = { -1932.27f, 254.5f, 84.4f };
				fLocal_128 = 96.81f;
				fLocal_132 = 10f;
				fLocal_133 = 35f;
				iLocal_107 = joaat("bati");
				fLocal_134 = 400f;
				sLocal_322 = "REBTH_THX2X";
				sLocal_323 = "REBTH_THX3X";
				sLocal_324 = "REBTH_GONEX";
				break;
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_119 - Vector(20f, 20f, 20f), Local_119 + Vector(20f, 20f, 20f), false, true);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_119 - Vector(20f, 20f, 20f), Local_119 + Vector(20f, 20f, 20f), 0);
		MISC::CLEAR_AREA(Local_119, 20f, true, false, false, false);
		iLocal_135 = 1;
	}
	STREAMING::REQUEST_MODEL(joaat("g_m_y_strpunk_01"));
	STREAMING::REQUEST_MODEL(joaat("a_m_y_beachvesp_01"));
	STREAMING::REQUEST_MODEL(iLocal_107);
	if ((((STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_strpunk_01")) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_beachvesp_01"))) && STREAMING::HAS_MODEL_LOADED(iLocal_107)) && func_159()) && func_158())
	{
		iLocal_110 = VEHICLE::CREATE_VEHICLE(iLocal_107, Local_116, fLocal_128, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_107);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_107, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_110, true, true, false);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_110, false);
		VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(iLocal_110, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_110, true);
		AUDIO::START_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_110, "RE_CAR_STEAL_STOLEN_VEHICLE", 0f);
		fLocal_131 = fLocal_133;
		if (bLocal_334 == 3)
		{
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_110, 49, 0);
			VEHICLE::SET_VEHICLE_MOD_KIT(iLocal_110, 0);
			VEHICLE::SET_VEHICLE_MOD(iLocal_110, 16, 2, false);
			VEHICLE::SET_VEHICLE_MOD(iLocal_110, 11, 3, false);
			VEHICLE::SET_VEHICLE_MOD(iLocal_110, 12, 2, false);
			VEHICLE::SET_VEHICLE_MOD(iLocal_110, 13, 2, false);
			VEHICLE::SET_VEHICLE_MOD(iLocal_110, 23, 10, false);
			VEHICLE::SET_VEHICLE_MOD(iLocal_110, 24, 10, false);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_110, 22, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_110, 17, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_110, 21, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_110, 20, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(iLocal_110, 19, true);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_110, 89, 89);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_110, 0, 1);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iLocal_110, 1);
		}
		PED::ADD_RELATIONSHIP_GROUP("re_bikethief_relGroupVictim", &iLocal_139);
		PED::ADD_RELATIONSHIP_GROUP("re_bikethief_relGroupThief", &iLocal_140);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_140, iLocal_139);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_140, joaat("player"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_139, joaat("player"));
		iLocal_108 = PED::CREATE_PED(19, joaat("g_m_y_strpunk_01"), Local_125, fLocal_130, true, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_strpunk_01"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_108, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_108, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_108, iLocal_140);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_108, 3);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_108, 17, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_108, 13, false);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_108, 1, true);
		PED::SET_PED_HELMET(iLocal_108, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_108, 42, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_108, 281, true);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_108, 2);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_108, "G_M_Y_StreetPunk_01_BLACK_MINI_03");
		TASK::TASK_PLAY_ANIM(iLocal_108, sLocal_335, "base", 8f, -8f, -1, 1, 0f, false, false, false);
		iLocal_109 = PED::CREATE_PED(19, joaat("a_m_y_beachvesp_01"), Local_119, fLocal_129, true, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_beachvesp_01"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_109, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_109, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_109, 8, true);
		if (bLocal_334 == 3)
		{
			PED::SET_PED_HELMET(iLocal_109, true);
		}
		else
		{
			PED::SET_PED_HELMET(iLocal_109, false);
		}
		PED::SET_PED_CONFIG_FLAG(iLocal_109, 26, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_109, 42, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_109, 167, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_109, 281, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_109, iLocal_139);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_109, false);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_109, "A_M_Y_BeachVesp_01_LATINO_MINI_01");
		TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_109, "WORLD_HUMAN_STAND_MOBILE", 0, true);
		func_154(&uLocal_151, 1, iLocal_108, "BThief", 0, 1);
		func_154(&uLocal_151, 2, iLocal_109, "BThiefVictim", 0, 1);
		if (iLocal_333 == 0)
		{
			if (bLocal_334 == 3)
			{
				sLocal_316 = "REBTH_HELPX";
			}
			else
			{
				sLocal_316 = "REBTH_HELP";
			}
			sLocal_320 = "REBTH_RUNSOF";
			sLocal_321 = "REBTH_TAUNT";
			sLocal_337 = "I_CANT_CATCH_HIM_ON_FOOT";
		}
		else if (iLocal_333 == 1)
		{
			if (bLocal_334 == 3)
			{
				sLocal_316 = "REBTH_HLPBX";
			}
			else
			{
				sLocal_316 = "REBTH_HLPB";
			}
			sLocal_320 = "REBTH_RUNB";
			sLocal_321 = "REBTH_TNTB";
			sLocal_337 = "MY_DADS_GOING_TO_KILL_ME";
		}
		else
		{
			sLocal_316 = "REBTH_HLPC";
			sLocal_320 = "REBTH_RUNC";
			sLocal_321 = "REBTH_TNTC";
			sLocal_337 = "PLEASE_MAN_YOU_GOTTA_HELP_ME";
		}
		PED::SET_CREATE_RANDOM_COPS(false);
		iLocal_106 = 1;
	}
}

int func_158()
{
	if (bLocal_334 == 2)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "RE_BikeThief2");
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "RE_BikeThief2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_159()
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_335);
	STREAMING::REQUEST_ANIM_DICT(sLocal_336);
	STREAMING::REQUEST_ANIM_DICT(sLocal_338);
	STREAMING::REQUEST_ANIM_DICT(sLocal_339);
	STREAMING::REQUEST_ANIM_DICT(sLocal_341);
	STREAMING::REQUEST_ANIM_DICT(sLocal_340);
	if (((((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_335) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_336)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_338)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_339)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_341)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_340))
	{
		return 1;
	}
	return 0;
}

void func_160()
{
	if (!PED::IS_PED_INJURED(iLocal_109))
	{
		if (func_77(iLocal_109, joaat("script_task_start_scenario_in_place")))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_109);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iLocal_109);
		}
		PED::SET_PED_KEEP_TASK(iLocal_109, true);
		TASK::TASK_SMART_FLEE_PED(iLocal_109, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
	}
	if (!PED::IS_PED_INJURED(iLocal_108))
	{
		PED::SET_PED_KEEP_TASK(iLocal_108, true);
		TASK::TASK_SMART_FLEE_PED(iLocal_108, PLAYER::PLAYER_PED_ID(), 100f, -1, false, true);
	}
}

int func_161()
{
	if (iLocal_106 == 0 && func_180())
	{
		return 1;
	}
	if (iLocal_106 == 1 && func_168())
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
	{
		if (PED::IS_PED_INJURED(iLocal_109))
		{
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_109, PLAYER::PLAYER_PED_ID(), true))
		{
			func_166();
			func_165(&uLocal_151, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
		else if (func_162(iLocal_109, 170f))
		{
			func_166();
			func_165(&uLocal_151, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return 1;
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_328 == 1)
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_110) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, false))
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_66(PLAYER::PLAYER_PED_ID()) && func_66(iParam0))
	{
		if (func_164(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
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
				if (func_163(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_163(int iParam0, float fParam1)
{
	return func_83(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

int func_164(int iParam0)
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

void func_165(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_25(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	MISC::SET_BIT(&Global_21889, 0);
	Global_23026 = iParam3;
	StringCopy(&Global_23013, sParam2, 24);
}

void func_166()
{
	Global_21889 = 0;
	func_167();
}

void func_167()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24034 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23023 = 6;
	}
}

int func_168()
{
	if (!func_151(5))
	{
		return 1;
	}
	if (func_176())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_175())
		{
			return 0;
		}
	}
	if (func_169(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_169(float fParam0, bool bParam1)
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
		if (func_17(func_15()))
		{
			iVar36 = func_53();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_114963.f_18583[iVar32 /*6*/], 2) && !BitTest(Global_114963.f_18583[iVar32 /*6*/], 3))
				{
					func_170(iVar32, &Var0);
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

void func_170(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_171(uParam1, "Abigail1", func_173(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 1:
			func_171(uParam1, "Abigail2", func_173(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 2:
			func_171(uParam1, "Barry1", func_173(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 3:
			func_171(uParam1, "Barry2", func_173(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 4:
			func_171(uParam1, "Barry3", func_173(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 5:
			func_171(uParam1, "Barry3A", func_173(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 6:
			func_171(uParam1, "Barry3C", func_173(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 7:
			func_171(uParam1, "Barry4", func_173(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_172(iParam0), 0, 0);
			break;
		
		case 8:
			func_171(uParam1, "Dreyfuss1", func_173(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 9:
			func_171(uParam1, "Epsilon1", func_173(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 10:
			func_171(uParam1, "Epsilon2", func_173(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 11:
			func_171(uParam1, "Epsilon3", func_173(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 12:
			func_171(uParam1, "Epsilon4", func_173(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 13:
			func_171(uParam1, "Epsilon5", func_173(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 14:
			func_171(uParam1, "Epsilon6", func_173(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 15:
			func_171(uParam1, "Epsilon7", func_173(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 16:
			func_171(uParam1, "Epsilon8", func_173(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 17:
			func_171(uParam1, "Extreme1", func_173(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 18:
			func_171(uParam1, "Extreme2", func_173(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 19:
			func_171(uParam1, "Extreme3", func_173(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 20:
			func_171(uParam1, "Extreme4", func_173(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 21:
			func_171(uParam1, "Fanatic1", func_173(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_172(iParam0), 1, 0);
			break;
		
		case 22:
			func_171(uParam1, "Fanatic2", func_173(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_172(iParam0), 1, 0);
			break;
		
		case 23:
			func_171(uParam1, "Fanatic3", func_173(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_172(iParam0), 0, 1);
			break;
		
		case 24:
			func_171(uParam1, "Hao1", func_173(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_172(iParam0), 0, 1);
			break;
		
		case 25:
			func_171(uParam1, "Hunting1", func_173(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 26:
			func_171(uParam1, "Hunting2", func_173(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 27:
			func_171(uParam1, "Josh1", func_173(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 28:
			func_171(uParam1, "Josh2", func_173(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 29:
			func_171(uParam1, "Josh3", func_173(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 30:
			func_171(uParam1, "Josh4", func_173(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 31:
			func_171(uParam1, "Maude1", func_173(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 32:
			func_171(uParam1, "Minute1", func_173(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 33:
			func_171(uParam1, "Minute2", func_173(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 34:
			func_171(uParam1, "Minute3", func_173(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 35:
			func_171(uParam1, "MrsPhilips1", func_173(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 36:
			func_171(uParam1, "MrsPhilips2", func_173(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 37:
			func_171(uParam1, "Nigel1", func_173(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 38:
			func_171(uParam1, "Nigel1A", func_173(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 39:
			func_171(uParam1, "Nigel1B", func_173(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_172(iParam0), 1, 1);
			break;
		
		case 40:
			func_171(uParam1, "Nigel1C", func_173(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_172(iParam0), 1, 1);
			break;
		
		case 41:
			func_171(uParam1, "Nigel1D", func_173(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_172(iParam0), 1, 1);
			break;
		
		case 42:
			func_171(uParam1, "Nigel2", func_173(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 43:
			func_171(uParam1, "Nigel3", func_173(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_172(iParam0), 1, 1);
			break;
		
		case 44:
			func_171(uParam1, "Omega1", func_173(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 45:
			func_171(uParam1, "Omega2", func_173(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 46:
			func_171(uParam1, "Paparazzo1", func_173(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 47:
			func_171(uParam1, "Paparazzo2", func_173(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 48:
			func_171(uParam1, "Paparazzo3", func_173(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 49:
			func_171(uParam1, "Paparazzo3A", func_173(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 50:
			func_171(uParam1, "Paparazzo3B", func_173(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 51:
			func_171(uParam1, "Paparazzo4", func_173(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 52:
			func_171(uParam1, "Rampage1", func_173(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 54:
			func_171(uParam1, "Rampage3", func_173(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 55:
			func_171(uParam1, "Rampage4", func_173(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 56:
			func_171(uParam1, "Rampage5", func_173(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_172(iParam0), 0, 0);
			break;
		
		case 53:
			func_171(uParam1, "Rampage2", func_173(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_172(iParam0), 1, 0);
			break;
		
		case 57:
			func_171(uParam1, "TheLastOne", func_173(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 58:
			func_171(uParam1, "Tonya1", func_173(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 59:
			func_171(uParam1, "Tonya2", func_173(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 60:
			func_171(uParam1, "Tonya3", func_173(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 61:
			func_171(uParam1, "Tonya4", func_173(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		case 62:
			func_171(uParam1, "Tonya5", func_173(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_172(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_171(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_172(int iParam0)
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

struct<2> func_173(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_174(iParam0) };
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

struct<2> func_174(int iParam0)
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

int func_175()
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

int func_176()
{
	if (func_179() && !func_175())
	{
		return 1;
	}
	if (func_178() && func_177())
	{
		return 1;
	}
	return 0;
}

bool func_177()
{
	return Global_114681 > 0;
}

int func_178()
{
	if (Global_99383 != -1)
	{
		return 1;
	}
	return 0;
}

int func_179()
{
	if (Global_99383 != -1)
	{
		return BitTest(Global_93249[Global_99383 /*34*/].f_15, 20);
	}
	return 0;
}

int func_180()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_103) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_175())
		{
			return 0;
		}
	}
	if (func_176())
	{
		return 1;
	}
	if (func_169(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_181()
{
}

int func_182()
{
	int iVar0;
	
	if (func_183(26, 1))
	{
		iVar0++;
	}
	if (func_183(26, 2))
	{
		iVar0++;
	}
	if (func_183(8, 0))
	{
		iVar0++;
	}
	return iVar0;
}

int func_183(int iParam0, bool bParam1)
{
	if (BitTest(Global_114963.f_25004.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

void func_184(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_57();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_186(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114949 = 0;
	func_185();
}

void func_185()
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

void func_186(int iParam0)
{
	Global_114952 = iParam0;
}

int func_187(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_153557)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_57();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_226())
		{
			return 0;
		}
	}
	Local_103 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_175())
			{
				return 0;
			}
		}
		if (!Global_114963.f_9094)
		{
			return 0;
		}
		if (func_30(0))
		{
			return 0;
		}
		if (func_176())
		{
			return 0;
		}
		if (func_225())
		{
			return 0;
		}
		if (Global_114952 != -1)
		{
			return 0;
		}
		if (func_17(func_15()))
		{
			if (func_169(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_103.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_224(iParam3))
		{
			return 0;
		}
		if (func_17(func_15()))
		{
			if (func_223(func_15()) == 4 || func_223(func_15()) == 5)
			{
				return 0;
			}
		}
		if (func_17(func_15()))
		{
			if (!func_222(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_221(Global_114963.f_25004.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_114954) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_220())
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
		if (!func_211(4))
		{
			return 0;
		}
		if (!func_151(5))
		{
			return 0;
		}
		if (func_183(iParam3, bParam4) && !bParam5)
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
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_183(0, 0))
		{
			return 0;
		}
		if (Global_33962)
		{
			return 0;
		}
		if (func_224(30) && !func_183(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_17(func_15()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_114963.f_2370.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_114963.f_2370.f_539.f_2296[iVar4];
				if (func_210(iVar8))
				{
					if (func_188(iVar4))
					{
						if (!func_136(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_15() != iVar4)
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

bool func_188(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_114963.f_2370.f_539.f_2296[iParam0];
	return func_189(iVar0);
}

int func_189(int iParam0)
{
	return func_190(iParam0, 1);
}

int func_190(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_210(iParam0))
	{
		return 0;
	}
	func_191(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_191(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_192(func_203(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_192(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_202(iParam0, iParam1))
	{
		iVar0 = func_201(iParam1);
		iVar1 = func_199(iParam0);
		iVar2 = (func_199(iParam0) - func_199(iParam1));
		iVar3 = (func_201(iParam0) - func_201(iParam1));
		iVar4 = (func_198(iParam0) - func_198(iParam1));
		iVar5 = (func_197(iParam0) - func_197(iParam1));
		iVar6 = (func_196(iParam0) - func_196(iParam1));
		iVar7 = (func_195(iParam0) - func_195(iParam1));
	}
	else
	{
		iVar0 = func_201(iParam0);
		iVar1 = func_199(iParam1);
		iVar2 = (func_199(iParam1) - func_199(iParam0));
		iVar3 = (func_201(iParam1) - func_201(iParam0));
		iVar4 = (func_198(iParam1) - func_198(iParam0));
		iVar5 = (func_197(iParam1) - func_197(iParam0));
		iVar6 = (func_196(iParam1) - func_196(iParam0));
		iVar7 = (func_195(iParam1) - func_195(iParam0));
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
		iVar4 = (iVar4 + func_194(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_193(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_193(float fParam0, float fParam1, float fParam2)
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

int func_194(int iParam0, int iParam1)
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

int func_195(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_196(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_197(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_198(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_199(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_200(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_200(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_201(int iParam0)
{
	return iParam0 & 15;
}

int func_202(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_210(iParam1) || !func_210(iParam0))
	{
		return 1;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_198(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_197(iParam0);
	iVar1 = func_197(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_196(iParam0);
	iVar1 = func_196(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_195(iParam0);
	iVar1 = func_195(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_203()
{
	var uVar0;
	
	func_209(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_208(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_207(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_206(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_205(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_204(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_204(var uParam0, int iParam1)
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

void func_205(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_206(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_201(*uParam0);
	iVar1 = func_199(*uParam0);
	if (iParam1 < 1 || iParam1 > func_194(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_208(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_209(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_210(int iParam0)
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
	iVar0 = func_195(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_196(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_197(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_199(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_201(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_198(iParam0);
	if (iVar5 < 1 || iVar5 > func_194(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_15();
				if (!func_17(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_219()) || Global_114010) || Global_33818) || func_218()) || func_23(8, -1)) || func_217()) || func_216()) || func_215()) || func_214()) || Global_114963.f_7697.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_219()) || Global_33818) || func_218()) || func_23(8, -1)) || func_215()) || func_217()) || func_216()) || func_214()) || Global_114963.f_7697.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_219()) || Global_114010) || Global_33818) || func_218()) || func_23(8, -1)) || func_215()) || func_217()) || func_216()) || func_214()) || Global_114963.f_7697.f_919[iVar0] == 5) || Global_45468 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_219()) || Global_114010) || Global_33818) || func_218()) || func_23(8, -1)) || func_217()) || func_216()) || func_214()) || Global_114963.f_7697.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_219() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_23(8, -1)) || func_214()) || func_213()) || Global_114963.f_7697.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_23(8, -1) || func_217()) || func_216()) || func_213()) || func_212())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_219()) || Global_33818) || func_218()) || func_23(8, -1)) || func_216()) || func_215()) || func_214()) || Global_114963.f_7697.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_219()) || func_216()) || Global_114010) || Global_33818) || func_218()) || Global_46147) || func_23(8, -1)) || func_215()) || func_213()) || func_214()) || Global_114963.f_7697.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_219()) || Global_114010) || Global_33818) || func_218()) || func_23(8, -1)) || func_215()) || func_213()) || func_217()) || func_216()) || func_214())
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

var func_212()
{
	return Global_102525.f_1;
}

int func_213()
{
	if (Global_99383 != -1)
	{
		return BitTest(Global_93249[Global_99383 /*34*/].f_15, 13);
	}
	return 0;
}

int func_214()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_215()
{
	if (Global_80598)
	{
		return 1;
	}
	else if (Global_65057 && !Global_65063)
	{
		return 1;
	}
	return 0;
}

bool func_216()
{
	return Global_102538.f_418 > 0;
}

bool func_217()
{
	return Global_102538.f_417 > 0;
}

var func_218()
{
	return Global_1575095;
}

int func_219()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_99939.f_44 == 1;
	}
	return 0;
}

int func_220()
{
	func_14();
	if (Global_10324[Global_21649 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_221(int iParam0)
{
	return func_202(func_203(), iParam0);
}

int func_222(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_15();
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

int func_223(int iParam0)
{
	if (!func_17(iParam0))
	{
		return 7;
	}
	return Global_114963.f_7697.f_919[iParam0];
}

int func_224(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_226())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_114963.f_25004, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_114963.f_25004.f_1, iVar0);
	}
	return iVar1;
}

int func_225()
{
	int iVar0;
	
	if (Global_33967)
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

int func_226()
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

float func_227(int iParam0, struct<3> Param1, bool bParam4)
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

void func_228()
{
	func_101(&uLocal_347, 0, 0, 0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, false))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_110, 0f);
		}
		AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
	}
	if (bLocal_334 != 3)
	{
		func_231(26);
	}
	else
	{
		func_231(8);
	}
	if (bLocal_334 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(472.195f, -1974.902f, 18.57787f, 572.7468f, -1921.216f, 28.68633f, 75f, 1);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_342, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_119 - Vector(20f, 20f, 20f), Local_119 + Vector(20f, 20f, 20f), true, true);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_110, false))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_110, true);
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_110))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_110);
		}
	}
	if (bLocal_334 == 2)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, "RE_BikeThief2");
	}
	func_73(&iLocal_150);
	func_73(&iLocal_148);
	func_74(&uLocal_359);
	func_73(&iLocal_149);
	func_80(0);
	func_230(&uLocal_151, 0);
	func_230(&uLocal_151, 1);
	func_230(&uLocal_151, 2);
	if ((func_66(iLocal_109) && func_66(iLocal_110)) && PED::IS_PED_IN_VEHICLE(iLocal_109, iLocal_110, false))
	{
		TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_109, iLocal_110, fLocal_131, 786485);
		PED::SET_PED_KEEP_TASK(iLocal_109, true);
	}
	func_95(&iLocal_108, 1, 0, 1);
	func_95(&iLocal_109, 1, 0, 1);
	func_229(&iLocal_110);
	if (func_66(iLocal_111))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_111);
		func_229(&iLocal_111);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_strpunk_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_beachvesp_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("scorcher"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bati"));
	STREAMING::REMOVE_ANIM_DICT(sLocal_335);
	STREAMING::REMOVE_ANIM_DICT(sLocal_336);
	STREAMING::REMOVE_ANIM_DICT(sLocal_338);
	STREAMING::REMOVE_ANIM_DICT(sLocal_339);
	STREAMING::REMOVE_ANIM_DICT(sLocal_340);
	STREAMING::REMOVE_ANIM_DICT(sLocal_341);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_229(int* iParam0)
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

void func_230(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_231(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_57();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_242())
	{
		func_235(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114954 = MISC::GET_GAME_TIMER();
		func_234(30000);
		StringCopy(&cVar0, func_233(Global_114952, 1), 64);
		if (func_56(Global_114952) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_114951, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_114949, (MISC::GET_GAME_TIMER() - Global_114950), 0);
	}
	else if (BitTest(Global_114959, 0) && Global_114963.f_25004.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114959, 0);
	}
	func_232(&Global_33875);
	Global_114953 = 0;
	func_186(-1);
}

void func_232(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_44883)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_44882 = 0;
	Global_44884 = 0;
	Global_44921 = 15;
	Global_65060 = 0;
	Global_65061 = 0;
}

char* func_233(int iParam0, bool bParam1)
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

void func_234(int iParam0)
{
	Global_45472 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_235(int iParam0)
{
	func_236(iParam0, 0, func_241(iParam0));
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_203();
	func_239(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_238(iParam0, &uVar0);
	Var1 = { func_237(&uVar0) };
}

struct<16> func_237(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_197(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_196(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_195(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_198(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_201(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_199(*uParam0), 64);
	return Var0;
}

void func_238(int iParam0, var uParam1)
{
	Global_114963.f_25004.f_43[iParam0] = *uParam1;
}

void func_239(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_199(*uParam0);
	iVar1 = func_201(*uParam0);
	iVar2 = func_198(*uParam0);
	iVar3 = func_197(*uParam0);
	iVar4 = func_196(*uParam0);
	iVar5 = func_195(*uParam0);
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
	iVar6 = func_194(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_194(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_240(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_240(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_209(uParam0, iParam1);
	func_208(uParam0, iParam2);
	func_207(uParam0, iParam3);
	func_205(uParam0, iParam5);
	func_206(uParam0, iParam4);
	func_204(uParam0, iParam6);
}

int func_241(int iParam0)
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

int func_242()
{
	if ((Global_114952 == func_57() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_114953)
	{
		return 1;
	}
	return 0;
}

