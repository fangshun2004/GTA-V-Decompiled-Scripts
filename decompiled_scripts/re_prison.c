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
	bool bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_82[12];
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	int iLocal_121 = 0;
	var uLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_135 = 0;
	bool bLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	struct<7> Local_145 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_152 = 0;
	int* iLocal_153 = NULL;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	int* iLocal_159 = NULL;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 16;
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
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	struct<3> Local_329 = { 0, 0, 0 } ;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	struct<76> Local_335 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	int iLocal_421[3] = { 0, 0, 0 };
	int iLocal_425[3] = { 0, 0, 0 };
	int iLocal_429[3] = { 0, 0, 0 };
	float fLocal_433 = 0f;
	bool bLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	struct<13> Local_437[10];
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	bool bLocal_589 = 0;
	int iLocal_590 = 0;
	bool bLocal_591 = 0;
	int iLocal_592 = 0;
	var uLocal_593[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_614[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_635 = 0;
	int iLocal_636 = 0;
	var uLocal_637 = 0;
	int iLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	struct<3> Local_642 = { 0, 0, 0 } ;
	int iLocal_645 = 0;
	struct<41> Local_646 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4 } ;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
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
	fLocal_433 = 0f;
	bLocal_434 = true;
	Local_642 = { 1683.682f, 2518.867f, 44.5651f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_90(0);
	}
	iLocal_328 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
	}
	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_328, false))
		{
			func_90(0);
		}
		func_89();
		Local_329 = { ENTITY::GET_ENTITY_COORDS(iLocal_328, true) };
		switch (iLocal_327)
		{
			case 0:
				func_87();
				iLocal_327 = 1;
				break;
			
			case 1:
				if (!Global_33824)
				{
					func_86();
					func_85();
					func_84();
					func_82();
					iLocal_327 = 2;
				}
				break;
			
			case 2:
				if ((((func_81() && func_80()) && func_79()) && func_78()) && func_77())
				{
					iLocal_327 = 3;
				}
				break;
			
			case 3:
				func_71();
				SYSTEM::WAIT(0);
				func_70();
				SYSTEM::WAIT(0);
				func_67();
				func_66();
				iLocal_327 = 4;
				break;
			
			case 4:
				if (!Global_33824)
				{
					if (Global_99389)
					{
						func_90(0);
					}
					func_34();
					func_33();
					func_30();
					func_29();
					func_27();
					func_5();
					func_4();
				}
				else if (func_1(0))
				{
					func_90(1);
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(bool bParam0)
{
	if (bParam0)
	{
		if (func_3())
		{
			return 1;
		}
	}
	if (func_2(14))
	{
		return 1;
	}
	return 0;
}

bool func_2(int iParam0)
{
	return Global_44921 == iParam0;
}

int func_3()
{
	if (Global_113903)
	{
		return 1;
	}
	if (!func_2(14) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	if (iLocal_68 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1766.972f, 2409.596f, 43.55469f, 1826.647f, 2471.633f, 56.30863f, 12f, false, true, 0))
			{
				if (!bLocal_120)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_124[0] = 1;
				}
			}
			else
			{
				iLocal_124[0] = 0;
			}
		}
	}
	else if (iLocal_68 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1662.31f, 2391.06f, 43.51377f, 1761.362f, 2405.143f, 56.65472f, 12f, false, true, 0))
			{
				if (!bLocal_120)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_124[1] = 1;
				}
			}
			else
			{
				iLocal_124[1] = 0;
			}
		}
	}
	else if (iLocal_68 == 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1537.369f, 2465.132f, 43.5756f, 1655.663f, 2391.822f, 56.54404f, 12f, false, true, 0))
			{
				if (!bLocal_120)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_124[2] = 1;
				}
			}
			else
			{
				iLocal_124[2] = 0;
			}
		}
	}
	else if (iLocal_68 == 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1529.153f, 2584.264f, 43.6168f, 1535.014f, 2469.253f, 56.5985f, 12f, false, true, 0))
			{
				if (!bLocal_120)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_124[3] = 1;
				}
			}
			else
			{
				iLocal_124[3] = 0;
			}
		}
	}
	else if (iLocal_68 == 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1565.045f, 2681.205f, 43.50552f, 1529.915f, 2586.427f, 56.52686f, 12f, false, true, 0))
			{
				if (!bLocal_120)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_124[4] = 1;
				}
			}
			else
			{
				iLocal_124[4] = 0;
			}
		}
	}
	else if (iLocal_68 == 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1645.169f, 2760.33f, 43.6705f, 1567.113f, 2682.905f, 56.39177f, 12f, false, true, 0))
			{
				if (!bLocal_120)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_124[5] = 1;
				}
			}
			else
			{
				iLocal_124[5] = 0;
			}
		}
	}
	else if (iLocal_68 == 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1772.306f, 2766.364f, 43.59126f, 1650.228f, 2761.691f, 56.53028f, 12f, false, true, 0))
			{
				if (!bLocal_120)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_124[6] = 1;
				}
			}
			else
			{
				iLocal_124[6] = 0;
			}
		}
	}
	else if (iLocal_68 == 8)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, false, true, 0))
			{
				if (!bLocal_120)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_124[7] = 1;
				}
			}
			else
			{
				iLocal_124[7] = 0;
			}
		}
	}
	else if (iLocal_68 == 9)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, false, true, 0))
			{
				if (!bLocal_120)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_124[8] = 1;
				}
			}
			else
			{
				iLocal_124[8] = 0;
			}
		}
	}
	else if (iLocal_68 == 10)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1829.468f, 2480.96f, 43.52237f, 1836.998f, 2566.856f, 60.35412f, 20.5f, false, true, 0))
			{
				if (!bLocal_120)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_124[9] = 1;
				}
			}
			else
			{
				iLocal_124[9] = 0;
			}
		}
	}
	iLocal_68++;
	if (iLocal_68 > 10)
	{
		iLocal_68 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (iLocal_124[iVar0])
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			if (!bLocal_120)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", false, true);
				AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", true, true);
			}
		}
	}
}

void func_5()
{
	struct<3> Var0;
	
	switch (iLocal_67)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
			{
				iLocal_67++;
			}
			break;
		
		case 1:
			iLocal_141 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 1797.785f, 2599.697f, 44.5769f, 269.6189f, true, true, false);
			iLocal_143 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_141, 6, joaat("s_m_y_cop_01"), -1, true, true);
			func_26(&iLocal_143);
			iLocal_67++;
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			if ((func_16(iLocal_143, iLocal_141, &Local_145, &uLocal_152, 0, 1, 0, 1, 1) || func_16(iLocal_144, iLocal_142, &Local_145, &uLocal_152, 0, 1, 0, 1, 1)) || (func_15(Var0, 4, 20, 0) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())))
			{
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, false, 0f, 50f, 0f);
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, false, 0f, 50f, 0f);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_143, false))
				{
					TASK::TASK_COMBAT_PED(iLocal_143, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				if (!func_14(&iLocal_153))
				{
					func_11(&iLocal_153);
				}
				iLocal_67++;
			}
			break;
		
		case 3:
			if (func_14(&iLocal_153))
			{
				if (func_8(&iLocal_153) > 15f)
				{
					iLocal_142 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 1755.159f, 2614.456f, 44.5652f, 179.3394f, true, true, false);
					iLocal_144 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_142, 6, joaat("s_m_y_cop_01"), -1, true, true);
					func_26(&iLocal_144);
					TASK::TASK_COMBAT_PED(iLocal_144, PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_67++;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					}
					if (func_7(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264))
					{
						func_6();
						iLocal_67 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
				if (func_7(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264))
				{
					func_6();
					iLocal_67 = 0;
				}
			}
			break;
	}
}

void func_6()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_141);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
	{
		PED::DELETE_PED(&iLocal_143);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_142);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_144))
	{
		PED::DELETE_PED(&iLocal_144);
	}
}

int func_7(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (SYSTEM::VDIST2(Param0, Param3) < (fParam6 * fParam6))
	{
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_141) && ENTITY::DOES_ENTITY_EXIST(iLocal_143)) && ENTITY::DOES_ENTITY_EXIST(iLocal_142)) && ENTITY::DOES_ENTITY_EXIST(iLocal_144))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_141) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_141))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_143) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_143))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_142) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_142))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_144) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_144))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if (SYSTEM::VDIST2(Param0, Param3) > 62500f)
	{
		return 1;
	}
	return 0;
}

float func_8(int* iParam0)
{
	if (func_14(iParam0))
	{
		if (func_10(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_9(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_9(bool bParam0)
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

bool func_10(int* iParam0)
{
	return BitTest(*iParam0, 2);
}

void func_11(int* iParam0)
{
	if (!func_14(iParam0))
	{
		func_12(iParam0);
	}
}

void func_12(int* iParam0)
{
	func_13(iParam0, 0f);
}

void func_13(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_9(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_14(int* iParam0)
{
	return BitTest(*iParam0, 1);
}

int func_15(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
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

int func_16(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!func_25(*uParam2, 1))
		{
			if (func_24(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_25(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_25(*uParam2, 4))
		{
			if (func_22(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_25(*uParam2, 8))
		{
			if (func_21(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_25(*uParam2, 128);
		if (bParam4)
		{
			if (func_17(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_25(*uParam2, 16))
		{
			if (func_17(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_62)
		{
			iLocal_63 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_62 = true;
		}
		iLocal_64 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_65 = (iLocal_63 - iLocal_64);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_65) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_62)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_65) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (func_20(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_18(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_18(int iParam0, bool bParam1)
{
	return func_19(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

float func_19(int iParam0, int iParam1, bool bParam2)
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

int func_20(int iParam0, int iParam1)
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_21(int iParam0, int iParam1, var uParam2)
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_22(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	if (MISC::IS_BULLET_IN_AREA(Var0, 4f, true))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(Var0, SYSTEM::TO_FLOAT(uParam2->f_6), true, true))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_23(iVar3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_19(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_24(int iParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_18(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_26(int iParam0)
{
	WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("weapon_assaultshotgun"), -1, false, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
	PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 1);
	TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam0, 0f);
	PED::SET_PED_KEEP_TASK(*iParam0, true);
	PED::SET_PED_ACCURACY(*iParam0, 100);
	PED::SET_PED_COMBAT_RANGE(*iParam0, 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 23, false);
	PED::SET_PED_SEEING_RANGE(*iParam0, 1000f);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, true);
}

void func_27()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bLocal_591)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_586, false))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_586))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_586, 101, "PrisonHeli", true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_587, false))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_587, 0f, 4f, -2f) };
				TASK::TASK_VEHICLE_AIM_AT_COORD(iLocal_587, Var0);
			}
			if (bLocal_589)
			{
				if (!func_28())
				{
					bLocal_589 = false;
					VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_586, false, false);
				}
			}
			else if (func_28())
			{
				bLocal_589 = true;
				VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_586, true, false);
			}
			if (bLocal_589)
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_586, true) };
				if (SYSTEM::VDIST2(Local_329, Var3) < 90000f)
				{
					if (!iLocal_590)
					{
						iLocal_590 = 1;
					}
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_588))
		{
			HUD::REMOVE_BLIP(&iLocal_588);
		}
	}
}

int func_28()
{
	if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 6)
	{
		return 1;
	}
	return 0;
}

void func_29()
{
	int iVar0;
	struct<3> Var1;
	
	if (!Local_646.f_18[0])
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		if (!bLocal_123)
		{
			if (SYSTEM::VDIST2(Var1, Local_642) < 5625f)
			{
				iLocal_645 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(Local_646.f_27[iVar0]))
		{
			if (!Local_646.f_18[iVar0])
			{
				if (func_16(Local_646.f_27[iVar0], 0, &Local_145, &uLocal_152, 1, 1, 0, 1, 1) || iLocal_645)
				{
					TASK::TASK_COMBAT_PED(Local_646.f_27[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					Local_646.f_18[iVar0] = 1;
				}
			}
			if (!Local_646.f_18[iVar0])
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_646.f_27[iVar0]))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_646.f_27[iVar0], Local_646.f_14[iVar0], 0, 0, -1);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_646.f_36[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_646.f_36[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_646.f_31[iVar0]))
		{
			if (PED::IS_PED_INJURED(Local_646.f_31[iVar0]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_646.f_40[iVar0]))
				{
					HUD::REMOVE_BLIP(&(Local_646.f_40[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (!Local_646.f_22[0])
	{
		if (!PED::IS_PED_INJURED(Local_646.f_31[0]))
		{
			if ((func_16(Local_646.f_31[0], 0, &Local_145, &uLocal_152, 1, 1, 0, 1, 1) || Local_646.f_18[1] == 1) || iLocal_645)
			{
				TASK::CLEAR_PED_TASKS(Local_646.f_31[0]);
				TASK::TASK_COMBAT_PED(Local_646.f_31[0], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_646.f_22[0] = 1;
			}
		}
	}
	if (!Local_646.f_22[1])
	{
		if (!PED::IS_PED_INJURED(Local_646.f_31[1]))
		{
			if ((func_16(Local_646.f_31[1], 0, &Local_145, &uLocal_152, 0, 1, 0, 1, 1) || Local_646.f_18[1] == 1) || iLocal_645)
			{
				TASK::CLEAR_PED_TASKS(Local_646.f_31[1]);
				TASK::TASK_COMBAT_PED(Local_646.f_31[1], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_646.f_22[1] = 1;
			}
		}
	}
	if (!Local_646.f_22[2])
	{
		if (!PED::IS_PED_INJURED(Local_646.f_31[2]))
		{
			if ((func_16(Local_646.f_31[2], 0, &Local_145, &uLocal_152, 0, 1, 0, 1, 1) || Local_646.f_18[2] == 1) || iLocal_645)
			{
				TASK::CLEAR_PED_TASKS(Local_646.f_31[2]);
				TASK::TASK_COMBAT_PED(Local_646.f_31[2], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_646.f_22[2] = 1;
			}
		}
	}
	if (!Local_646.f_22[3])
	{
		if (!PED::IS_PED_INJURED(Local_646.f_31[3]))
		{
			if ((func_16(Local_646.f_31[3], 0, &Local_145, &uLocal_152, 0, 1, 0, 1, 1) || Local_646.f_18[2] == 1) || iLocal_645)
			{
				TASK::CLEAR_PED_TASKS(Local_646.f_31[3]);
				TASK::TASK_COMBAT_PED(Local_646.f_31[3], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_646.f_22[3] = 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_646.f_27[1]))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_646.f_27[1]))
		{
			if (!Local_646.f_22[0])
			{
				if (!PED::IS_PED_INJURED(Local_646.f_31[0]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_646.f_31[0], Local_646.f_27[1], -2f, 0f, 0f, 1f, -1, 0.1f, true);
				}
			}
			if (!Local_646.f_22[1])
			{
				if (!PED::IS_PED_INJURED(Local_646.f_31[1]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_646.f_31[1], Local_646.f_27[1], -1f, 0f, 0f, 1f, -1, 0.1f, true);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_646.f_27[2]))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_646.f_27[2]))
		{
			if (!Local_646.f_22[2])
			{
				if (!PED::IS_PED_INJURED(Local_646.f_31[2]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_646.f_31[2], Local_646.f_27[2], 1f, 0f, 0f, 1f, -1, 0.1f, true);
				}
			}
			if (!Local_646.f_22[3])
			{
				if (!PED::IS_PED_INJURED(Local_646.f_31[3]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_646.f_31[3], Local_646.f_27[2], -1f, 0f, 0f, 1f, -1, 0.1f, true);
				}
			}
		}
	}
}

void func_30()
{
	int iVar0;
	struct<3> Var1;
	
	iLocal_436++;
	if (iLocal_436 >= 30)
	{
		if (!bLocal_123)
		{
			if (func_15(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4, 100, 0))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_335.f_64[iVar0]) && !PED::IS_PED_INJURED(Local_335.f_64[iVar0]))
					{
						if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
						{
							if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
							{
								PED::SET_PED_ACCURACY(Local_335.f_64[iVar0], 10);
								iLocal_435 = 1;
							}
						}
						else if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_ACCURACY(Local_335.f_64[iVar0], 10);
							iLocal_435 = 1;
						}
						else
						{
							PED::SET_PED_ACCURACY(Local_335.f_64[iVar0], 100);
							iLocal_435 = 1;
						}
					}
					iVar0++;
				}
			}
			else
			{
				iLocal_435 = 0;
			}
		}
		iLocal_436 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_335.f_64[iVar0]) && !PED::IS_PED_INJURED(Local_335.f_64[iVar0]))
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
			{
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
			}
			if ((((func_16(Local_335.f_64[iVar0], 0, &Local_145, &uLocal_152, 0, 1, 0, 1, 1) || MISC::IS_BULLET_IN_AREA(Local_335[iVar0 /*3*/], 20f, true)) || MISC::IS_SNIPER_BULLET_IN_AREA(Local_335[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_335[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_435) || func_32(&(Local_335.f_64[iVar0])))
			{
				if (!func_2(5))
				{
					if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (bLocal_136)
						{
							func_31(iVar0);
						}
					}
					else
					{
						func_31(iVar0);
					}
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_335.f_64[iVar0]))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_335.f_64[iVar0], Local_335.f_42[iVar0], 0, 0, -1);
					Local_335.f_53[iVar0] = 0;
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_335.f_75[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_335.f_75[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_425[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_425[iVar0], false)) && ENTITY::DOES_ENTITY_EXIST(iLocal_421[iVar0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_421[iVar0], false))
		{
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_425[iVar0], 0f, 3.5f, -2f) };
			TASK::TASK_VEHICLE_AIM_AT_COORD(iLocal_425[iVar0], Var1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_421[iVar0], false, false, false);
			if (iLocal_429[iVar0])
			{
				if (!func_28())
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_421[iVar0], false))
					{
						iLocal_429[iVar0] = 0;
						VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_421[iVar0], false, false);
					}
				}
			}
			else if (func_28())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_421[iVar0], false))
				{
					iLocal_429[iVar0] = 1;
					VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_421[iVar0], true, false);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_433 > 20f)
	{
		bLocal_434 = false;
	}
	else if (fLocal_433 < -20f)
	{
		bLocal_434 = true;
	}
	if (bLocal_434)
	{
		fLocal_433 = (fLocal_433 + 0.25f);
	}
	else
	{
		fLocal_433 = (fLocal_433 - 0.25f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_421[0]))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_421[0], (53f + fLocal_433));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_421[1]))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_421[1], (13f + fLocal_433));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_421[2]))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_421[2], (250f + fLocal_433));
	}
}

void func_31(int iParam0)
{
	if (!Local_335.f_53[iParam0])
	{
		TASK::TASK_SHOOT_AT_ENTITY(Local_335.f_64[iParam0], PLAYER::PLAYER_PED_ID(), -1, 0);
		PED::SET_PED_SEEING_RANGE(Local_335.f_64[iParam0], 1000f);
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_335.f_64[iParam0]);
		Local_335.f_53[iParam0] = 1;
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
	}
}

int func_32(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
	}
	if (SYSTEM::VDIST2(Var0, Var3) < 100f)
	{
		return 1;
	}
	return 0;
}

void func_33()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 2 || func_15(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4, 150, 0))
		{
			if (AUDIO::PREPARE_ALARM("PRISON_ALARMS"))
			{
				AUDIO::START_ALARM("PRISON_ALARMS", false);
			}
		}
		else
		{
			AUDIO::STOP_ALARM("PRISON_ALARMS", false);
		}
	}
}

void func_34()
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1840.23f, 2471.49f, 41.94113f, 1840.553f, 2751.983f, 54.68177f, 84.25f, false, true, 0))
		{
			func_64(&Local_145, 2);
		}
		else
		{
			func_62(&Local_145, 2);
		}
	}
	if (iLocal_66 > 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (func_15(Var0, 4, 150, 0))
				{
					func_61(4, 1);
					if (!func_14(&iLocal_159))
					{
						func_11(&iLocal_159);
					}
					if (!bLocal_135)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_143) && !ENTITY::IS_ENTITY_DEAD(iLocal_143, false))
						{
							func_60(&uLocal_162, 8, iLocal_143, "TANNOY", 0, 1);
							if (func_37(&uLocal_162, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
							{
								bLocal_123 = true;
								bLocal_135 = true;
							}
						}
					}
				}
				else
				{
					func_61(4, 0);
					if (func_14(&iLocal_159))
					{
						func_12(&iLocal_159);
					}
					bLocal_123 = false;
				}
			}
			else
			{
				func_61(4, 0);
				if (func_14(&iLocal_159))
				{
					func_12(&iLocal_159);
				}
				bLocal_123 = false;
			}
			if (bLocal_123)
			{
				if (func_14(&iLocal_159))
				{
					if (func_8(&iLocal_159) > 10f)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							bLocal_136 = true;
							bLocal_123 = false;
							func_61(4, 0);
						}
					}
				}
			}
			if (!bLocal_120)
			{
				if (bLocal_135)
				{
					if (!func_36())
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", true, true);
							bLocal_120 = true;
						}
					}
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", true, true);
					bLocal_120 = true;
				}
			}
			if (!bLocal_123)
			{
				if (func_15(Var0, 4, 100, 0))
				{
					if (!bLocal_120)
					{
						if (bLocal_135)
						{
							if (!func_36())
							{
								AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
								AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", true, true);
								bLocal_120 = true;
							}
						}
						else
						{
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", true, true);
							bLocal_120 = true;
						}
					}
					func_35();
				}
			}
			iLocal_66 = 0;
		}
	}
	iLocal_66++;
}

void func_35()
{
	int iVar0;
	
	if (!iLocal_119)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			iLocal_69[iVar0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_82[iVar0 /*3*/], 10f, 10f, 10f, 0f, false, 7);
			iVar0++;
		}
		iLocal_119 = 1;
	}
}

int func_36()
{
	if (Global_23023 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_37(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_59(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_38(sParam2, iParam3, 0);
}

int func_38(char* sParam0, int iParam1, bool bParam2)
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
					func_58();
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
		if (func_57(8, -1))
		{
			return 0;
		}
		Global_23099 = { Global_23093 };
		func_56();
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
				func_49();
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
				if (func_48())
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
			if (func_47())
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
			func_46();
			Global_23033 = bParam2;
		}
		Global_23025 = iParam1;
		StringCopy(&Global_22642, sParam0, 24);
		Global_21889 = 0;
		func_45();
		func_39();
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
		func_58();
	}
	return 0;
}

void func_39()
{
	if (!func_40())
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

int func_40()
{
	if (!Global_262145.f_28486)
	{
		return 0;
	}
	if (!Global_80337)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_44())
	{
		return 0;
	}
	if (func_41(PLAYER::PLAYER_ID()))
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

int func_41(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_43(8))
		{
			return 1;
		}
		if (Global_2733190.f_5975.f_1 > 0)
		{
			return 1;
		}
	}
	return func_42(iParam0, 20);
}

var func_42(int iParam0, int iParam1)
{
	return BitTest(Global_1892925[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_43(int iParam0)
{
	return BitTest(Global_2733190.f_5964, iParam0);
}

int func_44()
{
	return -1;
}

void func_45()
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

void func_46()
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

int func_47()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_48()
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

void func_49()
{
	if (func_2(14))
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
		Global_21649 = func_50();
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

var func_50()
{
	func_51();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_51()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_54(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_53(PLAYER::PLAYER_PED_ID());
			if (func_52(iVar0) && (!func_2(14) || Global_113909))
			{
				if (Global_114963.f_2370.f_539.f_4321 != iVar0 && func_52(Global_114963.f_2370.f_539.f_4321))
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

bool func_52(int iParam0)
{
	return iParam0 < 3;
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_54(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_54(int iParam0)
{
	if (func_52(iParam0))
	{
		return func_55(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_55(int iParam0)
{
	return Global_2349[iParam0 /*29*/];
}

void func_56()
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

bool func_57(int iParam0, int iParam1)
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

void func_58()
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

void func_59(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_22477 = { *uParam0 };
	Global_8818 = iParam1;
	StringCopy(&Global_23093, sParam2, 24);
	Global_24012 = uParam5;
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

void func_60(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_61(int iParam0, int iParam1)
{
	MISC::SET_BIT(&Global_33975, iParam0);
	StringCopy(&(Global_33976[iParam0 /*6*/]), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_34031[iParam0] = iParam1;
}

void func_62(var uParam0, int iParam1)
{
	func_63(uParam0, iParam1);
}

void func_63(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_64(var uParam0, int iParam1)
{
	func_65(uParam0, iParam1);
}

void func_65(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_66()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_security_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_prisguard_01"));
}

void func_67()
{
	func_69();
	func_68();
}

void func_68()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_646.f_27[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_646.f_27[iVar0], false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_646.f_27[iVar0], joaat("weapon_assaultrifle"), -1, true, true);
			ENTITY::SET_ENTITY_LOD_DIST(Local_646.f_27[iVar0], 1000);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_646.f_27[iVar0], -183807561);
			PED::SET_PED_IS_AVOIDED_BY_OTHERS(Local_646.f_27[iVar0], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_646.f_27[iVar0], true);
			if (!PED::IS_PED_INJURED(Local_646.f_27[iVar0]))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_646.f_27[iVar0], Local_646.f_14[iVar0], 0, 0, -1);
			}
		}
		iVar0++;
	}
}

void func_69()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_646.f_27[iVar0]))
		{
			Local_646.f_27[iVar0] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Local_646[iVar0 /*3*/], Local_646.f_10[iVar0], true, true);
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
	Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_646[1 /*3*/], Local_646.f_10[1], -2f, 0f, 0f) };
	Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_646[1 /*3*/], Local_646.f_10[1], -1f, 0f, 0f) };
	Var7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_646[2 /*3*/], Local_646.f_10[2], 1f, 0f, 0f) };
	Var10 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_646[2 /*3*/], Local_646.f_10[2], -1f, 0f, 0f) };
	Local_646.f_31[0] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Var1, Local_646.f_10[1], true, true);
	Local_646.f_31[1] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Var4, Local_646.f_10[1], true, true);
	Local_646.f_31[2] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Var7, Local_646.f_10[2], true, true);
	Local_646.f_31[3] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Var10, Local_646.f_10[2], true, true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_646.f_31[iVar0]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_646.f_31[iVar0], joaat("weapon_assaultrifle"), -1, true, true);
			ENTITY::SET_ENTITY_LOD_DIST(Local_646.f_31[iVar0], 500);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_646.f_31[iVar0], -183807561);
			PED::SET_PED_STEERS_AROUND_PEDS(Local_646.f_31[iVar0], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_646.f_31[iVar0], true);
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_prisguard_01"));
}

void func_70()
{
	if (bLocal_591)
	{
		iLocal_586 = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 10f, 10f, -30f, 0f, true, true, false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_586, true, true, false);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_586);
		ENTITY::SET_ENTITY_VELOCITY(iLocal_586, 0f, 0f, 10f);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_586, 500);
		if (func_28())
		{
			bLocal_589 = true;
			VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_586, true, false);
		}
		iLocal_587 = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), 10f, 10f, -20f, 0f, true, true);
		PED::SET_PED_INTO_VEHICLE(iLocal_587, iLocal_586, -1);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_586, false))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_586, 101, "PrisonHeli", true);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("polmav"));
	}
}

void func_71()
{
	func_76();
	func_75();
	func_74();
	func_73();
	func_72();
}

void func_72()
{
	Local_437[0 /*13*/][0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_437[0 /*13*/][1 /*3*/] = { 1826.054f, 2478.934f, 61.7157f };
	Local_437[0 /*13*/][2 /*3*/] = { 1820.909f, 2477.528f, 61.7153f };
	Local_437[0 /*13*/][3 /*3*/] = { 1822.585f, 2472.122f, 61.7167f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_01");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_437[0 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_437[0 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_437[0 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_437[0 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_437[1 /*13*/][0 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_437[1 /*13*/][1 /*3*/] = { 1763.129f, 2413.976f, 61.7328f };
	Local_437[1 /*13*/][2 /*3*/] = { 1758.079f, 2411.984f, 61.7403f };
	Local_437[1 /*13*/][3 /*3*/] = { 1760.213f, 2406.827f, 61.7419f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_02");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_437[1 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_437[1 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_437[1 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_437[1 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_437[2 /*13*/][0 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_437[2 /*13*/][1 /*3*/] = { 1662.521f, 2394.692f, 61.7532f };
	Local_437[2 /*13*/][2 /*3*/] = { 1658.854f, 2398.062f, 61.7573f };
	Local_437[2 /*13*/][3 /*3*/] = { 1655.15f, 2394.705f, 61.7429f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_03");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_437[2 /*13*/][0 /*3*/], 1655.908f, 2349.021f, 55.1775f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_437[2 /*13*/][1 /*3*/], 1733.875f, 2385.521f, 44.9049f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_437[2 /*13*/][2 /*3*/], 1662.234f, 2446.357f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_437[2 /*13*/][3 /*3*/], 1524.631f, 2426.997f, 44.6212f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_437[3 /*13*/][0 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_437[3 /*13*/][1 /*3*/] = { 1542.189f, 2465.756f, 61.7247f };
	Local_437[3 /*13*/][2 /*3*/] = { 1543.899f, 2470.971f, 61.7482f };
	Local_437[3 /*13*/][3 /*3*/] = { 1539.14f, 2473.264f, 61.7359f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_04");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_437[3 /*13*/][0 /*3*/], 1455.081f, 2432.642f, 51.3366f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_437[3 /*13*/][1 /*3*/], 1576.174f, 2407.076f, 44.8143f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_437[3 /*13*/][2 /*3*/], 1578.1f, 2486.227f, 44.5655f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_437[3 /*13*/][3 /*3*/], 1512.837f, 2560.419f, 44.8417f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_437[4 /*13*/][0 /*3*/] = { 1535.098f, 2581.919f, 61.7312f };
	Local_437[4 /*13*/][1 /*3*/] = { 1535.124f, 2581.101f, 61.7002f };
	Local_437[4 /*13*/][2 /*3*/] = { 1538.325f, 2585.722f, 61.7251f };
	Local_437[4 /*13*/][3 /*3*/] = { 1534.679f, 2589.268f, 61.7123f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_05");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_437[4 /*13*/][0 /*3*/], 1484.2f, 2584.409f, 51.9283f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_437[4 /*13*/][1 /*3*/], 1535.154f, 2538.926f, 44.496f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_437[4 /*13*/][2 /*3*/], 1570.661f, 2587.814f, 44.5655f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_437[4 /*13*/][3 /*3*/], 1538.227f, 2655.531f, 44.9156f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_437[5 /*13*/][0 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_437[5 /*13*/][1 /*3*/] = { 1567.927f, 2677.463f, 61.7741f };
	Local_437[5 /*13*/][2 /*3*/] = { 1572.574f, 2678.193f, 61.7702f };
	Local_437[5 /*13*/][3 /*3*/] = { 1572.359f, 2683.086f, 61.7664f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_06");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_437[5 /*13*/][0 /*3*/], 1505.538f, 2727.242f, 37.6965f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_437[5 /*13*/][1 /*3*/], 1545.95f, 2632.524f, 44.7178f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_437[5 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_437[5 /*13*/][3 /*3*/], 1599.041f, 2713.393f, 44.4309f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_437[6 /*13*/][0 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_437[6 /*13*/][1 /*3*/] = { 1646.051f, 2756.671f, 61.9091f };
	Local_437[6 /*13*/][2 /*3*/] = { 1651.533f, 2754.668f, 61.9021f };
	Local_437[6 /*13*/][3 /*3*/] = { 1653.125f, 2759.327f, 61.9056f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_07");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_437[6 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_437[6 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_437[6 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_437[6 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_437[7 /*13*/][0 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_437[7 /*13*/][1 /*3*/] = { 1769.768f, 2763.816f, 61.9248f };
	Local_437[7 /*13*/][2 /*3*/] = { 1772.442f, 2759.139f, 61.9193f };
	Local_437[7 /*13*/][3 /*3*/] = { 1776.893f, 2762.356f, 61.9258f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_08");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_437[7 /*13*/][0 /*3*/], 1783.204f, 2811.375f, 44.4414f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_437[7 /*13*/][1 /*3*/], 1709.275f, 2764.432f, 44.5747f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_437[7 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_437[7 /*13*/][3 /*3*/], 1822.456f, 2749.189f, 44.9326f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_437[9 /*13*/][0 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_437[9 /*13*/][1 /*3*/] = { 1820.524f, 2621.49f, 61.9951f };
	Local_437[9 /*13*/][2 /*3*/] = { 1820.414f, 2621.544f, 61.9908f };
	Local_437[9 /*13*/][3 /*3*/] = { 1823.45f, 2617.477f, 61.9829f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_10");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_437[9 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_437[9 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_437[9 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_437[9 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
}

void func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_335.f_64[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_335.f_64[iVar0], false))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_335.f_64[iVar0], -183807561);
			PED::SET_PED_CONFIG_FLAG(Local_335.f_64[iVar0], 132, true);
			PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(Local_335.f_64[iVar0], 300f, 10);
			PED::SET_PED_SEEING_RANGE(Local_335.f_64[iVar0], 1000f);
			PED::SET_PED_ID_RANGE(Local_335.f_64[iVar0], 1000f);
			PED::SET_PED_HEARING_RANGE(Local_335.f_64[iVar0], 1000f);
			PED::SET_PED_COMBAT_ABILITY(Local_335.f_64[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_335.f_64[iVar0], 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_335.f_64[iVar0], 0, false);
			PED::SET_PED_TARGET_LOSS_RESPONSE(Local_335.f_64[iVar0], 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_335.f_64[iVar0], 1);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_335.f_64[iVar0], 0f);
			PED::SET_PED_KEEP_TASK(Local_335.f_64[iVar0], true);
			PED::SET_PED_ACCURACY(Local_335.f_64[iVar0], 20);
			PED::SET_PED_COMBAT_RANGE(Local_335.f_64[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_335.f_64[iVar0], 23, false);
			WEAPON::GIVE_WEAPON_TO_PED(Local_335.f_64[iVar0], joaat("weapon_sniperrifle"), -1, true, true);
			ENTITY::SET_ENTITY_LOD_DIST(Local_335.f_64[iVar0], 1000);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_335.f_64[iVar0], true);
			PED::SET_PED_SEEING_RANGE(Local_335.f_64[iVar0], 1000f);
			if (!PED::IS_PED_INJURED(Local_335.f_64[iVar0]))
			{
				if (iVar0 == 0)
				{
					TASK::TASK_PATROL(Local_335.f_64[iVar0], "miss_Tower_01", 1, false, true);
				}
				else if (iVar0 == 1)
				{
					TASK::TASK_PATROL(Local_335.f_64[iVar0], "miss_Tower_02", 1, false, true);
				}
				else if (iVar0 == 2)
				{
					TASK::TASK_PATROL(Local_335.f_64[iVar0], "miss_Tower_03", 1, false, true);
				}
				else if (iVar0 == 3)
				{
					TASK::TASK_PATROL(Local_335.f_64[iVar0], "miss_Tower_04", 1, false, true);
				}
				else if (iVar0 == 4)
				{
					TASK::TASK_PATROL(Local_335.f_64[iVar0], "miss_Tower_05", 1, false, true);
				}
				else if (iVar0 == 5)
				{
					TASK::TASK_PATROL(Local_335.f_64[iVar0], "miss_Tower_06", 1, false, true);
				}
				else if (iVar0 == 6)
				{
					TASK::TASK_PATROL(Local_335.f_64[iVar0], "miss_Tower_07", 1, false, true);
				}
				else if (iVar0 == 7)
				{
					TASK::TASK_PATROL(Local_335.f_64[iVar0], "miss_Tower_08", 1, false, true);
				}
				else if (iVar0 == 9)
				{
					TASK::TASK_PATROL(Local_335.f_64[iVar0], "miss_Tower_10", 1, false, true);
				}
				else
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_335.f_64[iVar0], Local_335.f_42[iVar0], 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_74()
{
	int iVar0;
	
	if (!CAM::IS_SPHERE_VISIBLE(1823.845f, 2621.267f, 57f, 0.5f))
	{
		iLocal_421[0] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1823.845f, 2621.267f, 57f, 53f, true, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_421[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_421[0], false))
		{
			iLocal_425[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_421[0], 6, joaat("s_m_m_prisguard_01"), -1, true, true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_425[0], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_425[0], iLocal_333);
			ENTITY::SET_ENTITY_COLLISION(iLocal_421[0], false, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_421[0], false, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_421[0], false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_421[0], true);
		}
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SPHERE_VISIBLE(1761.418f, 2410.378f, 61f, 0.5f))
	{
		iLocal_421[1] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1761.418f, 2410.378f, 61f, 13f, true, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_421[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_421[1], false))
		{
			iLocal_425[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_421[1], 6, joaat("s_m_m_prisguard_01"), -1, true, true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_425[1], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_425[1], iLocal_333);
			ENTITY::SET_ENTITY_COLLISION(iLocal_421[1], false, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_421[1], false, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_421[1], false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_421[1], true);
		}
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SPHERE_VISIBLE(1534.635f, 2585.162f, 61f, 0.5f))
	{
		iLocal_421[2] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1534.635f, 2585.162f, 61f, 250f, true, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_421[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_421[2], false))
		{
			iLocal_425[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_421[2], 6, joaat("s_m_m_prisguard_01"), -1, true, true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_425[2], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_425[2], iLocal_333);
			ENTITY::SET_ENTITY_COLLISION(iLocal_421[2], false, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_421[2], false, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_421[2], false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_421[2], true);
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_425[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_425[iVar0], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_421[iVar0], false))
		{
			if (func_28())
			{
				iLocal_429[iVar0] = 1;
				VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_421[iVar0], true, false);
			}
		}
		iVar0++;
	}
}

void func_75()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_335.f_64[iVar0]))
		{
			Local_335.f_64[iVar0] = PED::CREATE_PED(6, joaat("s_m_m_prisguard_01"), Local_335[iVar0 /*3*/], Local_335.f_31[iVar0], true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_prisguard_01"));
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
}

void func_76()
{
	Local_335[0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_335[1 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_335[2 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_335[3 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_335[4 /*3*/] = { 1530.493f, 2585.172f, 61.7001f };
	Local_335[5 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_335[6 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_335[7 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_335[8 /*3*/] = { 1852.475f, 2697.632f, 61.9547f };
	Local_335[9 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_335.f_31[0] = 248.9733f;
	Local_335.f_31[1] = 45.8793f;
	Local_335.f_31[2] = 186.3656f;
	Local_335.f_31[3] = 313.5206f;
	Local_335.f_31[4] = 95.9574f;
	Local_335.f_31[5] = 289.3531f;
	Local_335.f_31[6] = 13.7511f;
	Local_335.f_31[7] = 0f;
	Local_335.f_31[8] = 208.5786f;
	Local_335.f_31[9] = 280.9389f;
}

int func_77()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_646.f_14[iVar0]))
		{
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
	return 1;
}

int func_78()
{
	if (bLocal_635)
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_prisoner_01")))
		{
			return 0;
		}
	}
	return 1;
}

int func_79()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_335.f_42[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	return 1;
}

int func_80()
{
	if (bLocal_591)
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
		{
			return 0;
		}
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "PrisonHeli"))
		{
			return 0;
		}
	}
	return 1;
}

int func_81()
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_security_01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
	{
		return 0;
	}
	return 1;
}

void func_82()
{
	int iVar0;
	
	func_83();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(Local_646.f_14[iVar0]);
		iVar0++;
	}
}

void func_83()
{
	Local_646[0 /*3*/] = { 1768.628f, 2538.97f, 44.4054f };
	Local_646[1 /*3*/] = { 1633.613f, 2498.849f, 44.4117f };
	Local_646[2 /*3*/] = { 1622.61f, 2555.683f, 44.4051f };
	Local_646.f_10[0] = 0f;
	Local_646.f_10[1] = 0f;
	Local_646.f_10[2] = 198.4323f;
	Local_646.f_14[0] = "PatrolGuard02";
	Local_646.f_14[1] = "PatrolGuard03";
	Local_646.f_14[2] = "PatrolGuard04";
}

void func_84()
{
	int iVar0;
	
	Local_335.f_42[0] = "TowerGuard01";
	Local_335.f_42[1] = "TowerGuard02";
	Local_335.f_42[2] = "TowerGuard03";
	Local_335.f_42[3] = "TowerGuard04";
	Local_335.f_42[4] = "TowerGuard05";
	Local_335.f_42[5] = "TowerGuard06";
	Local_335.f_42[6] = "TowerGuard07";
	Local_335.f_42[7] = "TowerGuard08";
	Local_335.f_42[8] = "TowerGuard09";
	Local_335.f_42[9] = "TowerGuard10";
	iVar0 = 0;
	while (iVar0 < 10)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(Local_335.f_42[iVar0]);
		iVar0++;
	}
	STREAMING::REQUEST_MODEL(joaat("polmav"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_prisguard_01"));
}

void func_85()
{
	bLocal_591 = false;
	if (func_28())
	{
		iLocal_592 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
		if (iLocal_592 == 0)
		{
			bLocal_591 = true;
			STREAMING::REQUEST_MODEL(joaat("polmav"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "PrisonHeli");
		}
		else
		{
			bLocal_591 = false;
		}
	}
}

void func_86()
{
	STREAMING::REQUEST_MODEL(joaat("s_m_m_security_01"));
	STREAMING::REQUEST_MODEL(joaat("s_m_m_prisguard_01"));
	STREAMING::REQUEST_MODEL(joaat("polmav"));
}

void func_87()
{
	iLocal_332 = iLocal_332;
	iLocal_332 = 0;
	func_88();
	func_34();
	Local_145.f_4 = 75;
	Local_145.f_6 = 15;
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, true, 0f, 0f, 0f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, true, 0f, 50f, 0f);
	PED::ADD_RELATIONSHIP_GROUP("Prison_Guards", &iLocal_333);
	PED::ADD_RELATIONSHIP_GROUP("Prison_Prisoners", &iLocal_334);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_333, iLocal_334);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_334, iLocal_333);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_333, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_333);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("player"), iLocal_334);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_334, joaat("player"));
}

void func_88()
{
	Local_82[0 /*3*/] = { 1809.816f, 2482.877f, 44.4744f };
	Local_82[1 /*3*/] = { 1755.823f, 2424.904f, 44.4319f };
	Local_82[2 /*3*/] = { 1661.2f, 2410.096f, 44.4265f };
	Local_82[3 /*3*/] = { 1555.966f, 2476.43f, 44.4042f };
	Local_82[4 /*3*/] = { 1549.141f, 2583.103f, 44.4225f };
	Local_82[5 /*3*/] = { 1581.156f, 2671.974f, 44.481f };
	Local_82[6 /*3*/] = { 1655.49f, 2743.69f, 44.4665f };
	Local_82[7 /*3*/] = { 1768.776f, 2748.527f, 44.4402f };
	Local_82[8 /*3*/] = { 1831.2f, 2696f, 44.4578f };
	Local_82[9 /*3*/] = { 1803.121f, 2617.781f, 44.5082f };
	Local_82[10 /*3*/] = { 1817.221f, 2608.387f, 44.6204f };
	Local_82[11 /*3*/] = { 1843.838f, 2608.361f, 44.6178f };
}

void func_89()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1879.956f, 2705.097f, 52.07341f, 1869.859f, 2726.776f, 59.82338f, 24.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1833.113f, 2520.888f, 52.26086f, 1833.115f, 2554.431f, 61.25998f, 15f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1832.742f, 2568.421f, 48.87375f, 1833.015f, 2596.529f, 57.12439f, 27.75f, false, true, 0))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
	}
	if (!iLocal_121)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1917.889f, 2618.476f, -45.677f, 1822.889f, 2618.476f, 45.677f, 195f, false, false, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), -183807561);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -183807561, joaat("player"));
					iLocal_121 = 1;
				}
				if ((MISC::IS_BULLET_IN_AREA(1874.072f, 2605.423f, 44.6723f, 100f, true) && !PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID())) || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID())))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), -183807561);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -183807561, joaat("player"));
					iLocal_121 = 1;
				}
			}
		}
	}
}

void func_90(bool bParam0)
{
	int iVar0;
	
	func_96();
	func_95();
	func_94();
	func_93();
	func_92();
	func_91();
	AUDIO::STOP_ALARM("PRISON_ALARMS", true);
	if (iLocal_121)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("player"), -183807561);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, -183807561, joaat("player"));
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_69[iVar0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_69[iVar0]);
		}
		iVar0++;
	}
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, true, 0f, 0f, 0f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, true, 0f, 50f, 0f);
	if (bParam0)
	{
		MISC::CLEAR_AREA(1695.1f, 2595.8f, 50f, 1000f, true, false, false, false);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_91()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_141);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_143);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_142);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_144))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_144);
	}
}

void func_92()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_646.f_27[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_646.f_36[iVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_646.f_36[iVar0]));
			}
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_646.f_27[iVar0]))
			{
				PED::DELETE_PED(&(Local_646.f_27[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_646.f_27[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_646.f_31[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_646.f_40[iVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_646.f_40[iVar0]));
			}
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_646.f_31[iVar0]))
			{
				PED::DELETE_PED(&(Local_646.f_31[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_646.f_31[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_93()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_638))
	{
		HUD::REMOVE_BLIP(&iLocal_638);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_636))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_636);
	}
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_593[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_614[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_614[iVar0]));
			}
			PED::DELETE_PED(&(uLocal_593[iVar0]));
		}
		iVar0++;
	}
}

void func_95()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_421[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_421[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_425[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_425[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_335.f_64[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_335.f_75[iVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_335.f_75[iVar0]));
			}
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_335.f_64[iVar0]))
			{
				PED::DELETE_PED(&(Local_335.f_64[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_335.f_64[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_96()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_588))
	{
		HUD::REMOVE_BLIP(&iLocal_588);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_586))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_586))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_586);
			PED::DELETE_PED(&iLocal_587);
		}
		else
		{
			func_97(&iLocal_586, &iLocal_587);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_586);
		}
	}
}

void func_97(int iParam0, var uParam1)
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

