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
	eViewMode evmLocal_45 = THIRD_PERSON_NEAR;
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
	BOOL bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	BOOL bLocal_69 = 0;
	var uLocal_70 = 0;
	BOOL bLocal_71 = 0;
	Hash hLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 1;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 16;
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
	var uLocal_269 = 1097859072;
	var uLocal_270 = 1500;
	var uLocal_271 = 45;
	var uLocal_272 = 1103626240;
	var uLocal_273 = 5;
	var uLocal_274 = 1;
	var uLocal_275 = 0;
	char* sLocal_276 = 0;
	char* sLocal_277 = 0;
	var uLocal_278 = 1;
	var uLocal_279 = 0;
	Blip blLocal_280 = 0;
	Blip blLocal_281 = 0;
	var uLocal_282 = 1;
	var uLocal_283 = 0;
	var uLocal_284 = 4;
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
	var uLocal_296 = 21;
	var uLocal_297 = 6;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
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
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	float fLocal_328 = 0f;
	float fLocal_329 = 0f;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	BOOL bLocal_336 = 0;
	BOOL bLocal_337 = 0;
	BOOL bLocal_338 = 0;
	int iLocal_339 = 0;
	Vehicle veLocal_340 = 0;
	var uScriptParam_0 = 1;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
#endregion

void main() // Hash - 0x5D84F89F ^0x5D84F89F
{
	BOOL flag;
	BOOL flag2;
	int clockHours;

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
	uLocal_63 = { 500f, 500f, 500f };
	fLocal_329 = -1f;
	iLocal_332 = -1;
	bLocal_336 = true;
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("stripperhome");
	MISC::SET_MISSION_FLAG(true);
	PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(75))
		func_303();

	bLocal_337 = uScriptParam_0.f_5;

	if (bLocal_337)
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
		func_298(0, -1, false);
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}

	uLocal_76[0] = uScriptParam_0[0];
	Global_112673.f_1 = uLocal_76[0];
	flag = false;
	flag2 = true;
	clockHours = CLOCK::GET_CLOCK_HOURS();

	if (func_297() && uScriptParam_0.f_4)
	{
		flag2 = false;
	
		if (clockHours > 14 && clockHours < 22)
			flag = true;
	}

	while (!func_268(&uScriptParam_0, flag) && iLocal_74 != 6 && iLocal_74 != 5 && iLocal_74 != -1 || !func_267(iLocal_333, 1024))
	{
		func_259(false);
		SYSTEM::WAIT(0);
	}

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_258(0, false));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_258(1, false));

	if (!flag2)
		iLocal_74 = 2;

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (iLocal_335 > 0)
		{
			func_256();
			iLocal_335 = iLocal_335 - SYSTEM::ROUND(MISC::GET_FRAME_TIME() * 1000f);
		}
	
		switch (iLocal_74)
		{
			case -1:
				func_255();
				break;
		
			case 0:
				func_215(true);
				break;
		
			case 1:
				func_108();
				break;
		
			case 2:
				func_215(false);
				break;
		
			case 3:
				func_90();
				break;
		
			case 4:
				func_38(bLocal_336);
				break;
		
			case 5:
				func_11();
				break;
		
			case 6:
				if (!func_10(&uLocal_261))
					func_7(&uLocal_261);
				else if (func_1(&uLocal_261, 7.5f))
					func_303();
				break;
		}
	}

	return;
}

BOOL func_1(int* piParam0, float fParam1) // Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_3(piParam0, fParam1))
	{
		func_2(piParam0);
		return true;
	}

	return false;
}

void func_2(int* piParam0) // Hash - 0x4ECF353C ^0xF00161
{
	piParam0->f_1 = 0f;
	piParam0->f_2 = 0f;
	*piParam0 = 0;
	return;
}

BOOL func_3(int* piParam0, float fParam1) // Hash - 0x18521603 ^0x18521603
{
	if (func_10(piParam0))
		if (func_4(piParam0) > fParam1)
			return true;

	return false;
}

float func_4(int* piParam0) // Hash - 0x4CA081DF ^0xE7D9DC6
{
	if (func_10(piParam0))
		if (func_6(piParam0))
			return piParam0->f_2;
		else
			return func_5(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_5(BOOL bParam0) // Hash - 0xB0FB4432 ^0x9D798691
{
	float num;
	float num2;
	int networkTime;
	float num3;
	float num4;

	if (bParam0)
	{
		num = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		num2 = num / 1000f;
		return num2;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTime = NETWORK::GET_NETWORK_TIME();
		num3 = SYSTEM::TO_FLOAT(networkTime);
		num4 = num3 / 1000f;
		return num4;
	}

	return SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_6(int* piParam0) // Hash - 0x58F53CD ^0x58F53CD
{
	return IS_BIT_SET(*piParam0, 2);
}

void func_7(int* piParam0) // Hash - 0x227D76A6 ^0x227D76A6
{
	if (!func_10(piParam0))
		func_8(piParam0);

	return;
}

void func_8(int* piParam0) // Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_9(piParam0, 0f);
	return;
}

void func_9(int* piParam0, float fParam1) // Hash - 0xED66BE55 ^0x9F6586C1
{
	piParam0->f_1 = func_5(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

BOOL func_10(int* piParam0) // Hash - 0xA8A91C80 ^0xA8A91C80
{
	return IS_BIT_SET(*piParam0, 1);
}

void func_11() // Hash - 0xF012980D ^0xA505E51C
{
	if (!func_267(iLocal_333, 8192))
		if (func_37())
			func_26();
		else
			iLocal_74 = 6;

	if (func_267(iLocal_333, 16384))
		if (func_12())
			iLocal_74 = 6;

	return;
}

BOOL func_12() // Hash - 0xA0A6C4D ^0x78E7151
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_274[0], false))
		return true;

	if (func_267(iLocal_333, 8192))
	{
		PED::SET_PED_RESET_FLAG(uLocal_274[0], 60, true);
	
		if (ENTITY::IS_ENTITY_AT_COORD(uLocal_274[0], 96.8033f, -1287.5966f, 28.2688f, 5f, 5f, 2f, false, true, 1) || func_25(PLAYER::PLAYER_PED_ID(), 96.8033f, -1287.5966f, 28.2688f, true) > 100f)
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("PROP_MAGENTA_DOOR"), false))
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("PROP_MAGENTA_DOOR"), 96.12f, -1284.91f, 29.43f, true, 0f, false);
		
			if (CAM::DOES_CAM_EXIST(uLocal_284[0]))
			{
				if (CAM::IS_CAM_RENDERING(uLocal_284[0]))
				{
					func_13(true, true, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_CAM(uLocal_284[0], true);
				}
			}
		
			PED::DELETE_PED(&uLocal_274[0]);
			return true;
		}
	}

	return false;
}

void func_13(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x9A1B5783 ^0xCCF40339
{
	if (bParam0)
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);

	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
	func_15(false, true, bParam2, false, false, false, false);

	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}

	func_14(23, false);
	return;
}

void func_14(int iParam0, BOOL bParam1) // Hash - 0x48FB9B70 ^0xB8FAA002
{
	if (bParam1)
		MISC::SET_BIT(&Global_32412, iParam0);
	else
		MISC::CLEAR_BIT(&Global_32412, iParam0);

	return;
}

void func_15(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Hash - 0x787E640E ^0x67C15509
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_24(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_23())
				Global_20383.f_1 = 3;
		
			Global_21725 = 5;
		}
	
		func_22(true, bParam3, bParam2, false);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_24(0);
		HUD::THEFEED_RESUME();
		Global_63368 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_22(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_20(PLAYER::PLAYER_ID()) && !func_17(PLAYER::PLAYER_ID(), 0) && !func_16() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_20(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		Global_78556 = 0;
	}

	return;
}

BOOL func_16() // Hash - 0xAA7793E3 ^0x3F62CDC8
{
	return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

BOOL func_17(Player plParam0, int iParam1) // Hash - 0x5A3B86CC ^0x2CFA58CE
{
	BOOL flag;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_18(-1, false) == 8;
	else
		flag = Global_1853910[plParam0 /*862*/].f_205 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_18(int iParam0, BOOL bParam1) // Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_19();

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

int func_19() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

BOOL func_20(Player plParam0) // Hash - 0x68897CDD ^0x62820466
{
	if (func_17(plParam0, 0))
		return true;

	if (func_21())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2))
		return true;

	return false;
}

BOOL func_21() // Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_22(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Hash - 0x3167F4C7 ^0xCE6B9B6A
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

BOOL func_23() // Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_24(int iParam0) // Hash - 0x1B2EEE72 ^0xEDBC1F9D
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 13);
	else
		MISC::CLEAR_BIT(&Global_8253, 13);

	return;
}

float func_25(Ped pedParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4) // Hash - 0xC22B942A ^0xE0DB8793
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, fParam1, bParam4);
}

void func_26() // Hash - 0x81D5EA2E ^0xE44D79F1
{
	int taskSequenceId;

	func_29();

	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(96.12f, -1284.91f, 29.43f, 5f, joaat("PROP_MAGENTA_DOOR"), false))
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("PROP_MAGENTA_DOOR"), 96.12f, -1284.91f, 29.43f, false, 0f, false);

	func_27(&iLocal_333, 16384);
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_274[0], false);
	PED::SET_PED_CONFIG_FLAG(uLocal_274[0], 104, true);
	TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 98.2041f, -1291.2522f, 28.2688f, 1f, -1, 0.25f, 1, 1193033728);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 107.6303f, -1304.7424f, 27.7688f, 1f, -1, 0.25f, 0, 1193033728);
	TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_274[0], taskSequenceId);
	TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	func_27(&iLocal_333, 8192);
	return;
}

void func_27(var uParam0, int iParam1) // Hash - 0xF55E891F ^0xF55E891F
{
	func_28(uParam0, iParam1);
	return;
}

void func_28(var uParam0, int iParam1) // Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_29() // Hash - 0xC932CA83 ^0x21D49B1D
{
	if (!ENTITY::IS_ENTITY_OCCLUDED(uLocal_274[0]) && func_36(true, false, true))
	{
		func_30(0, false, false);
		uLocal_284[0] = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.5734f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, true, 2);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}

	return;
}

void func_30(eSetPlayerControlFlags espcfParam0, BOOL bParam1, BOOL bParam2) // Hash - 0xC2A49438 ^0x3E1070FB
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, espcfParam0);

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);

	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(bParam1);
	func_31(0);
	func_15(true, true, bParam2, false, false, false, false);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_14(23, true);
	return;
}

void func_31(int iParam0) // Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_35())
		return;

	if (Global_20584)
		if (func_34())
			func_32(true, true);
		else
			func_32(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		MISC::SET_BIT(&Global_8254, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_21725 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 30);
	else
		MISC::CLEAR_BIT(&Global_8253, 30);

	if (!func_23())
		Global_20383.f_1 = 3;

	return;
}

void func_32(BOOL bParam0, BOOL bParam1) // Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_33(0))
		{
			Global_20584 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
		
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
		}
	}
	else if (Global_20584 == true)
	{
		Global_20584 = false;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
	}

	return;
}

BOOL func_33(int iParam0) // Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

BOOL func_34() // Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_35() // Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1962996, 19);
}

BOOL func_36(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Hash - 0xF0D380FF ^0x29DD7336
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

BOOL func_37() // Hash - 0xCBC63A5B ^0xCBC63A5B
{
	if (uLocal_76[0] == 8 || uLocal_76[0] == 9 || func_25(uLocal_274[0], 96.12f, -1284.91f, 29.43f, true) > 10f)
		return false;

	return true;
}

void func_38(BOOL bParam0) // Hash - 0x7450978D ^0xE267D862
{
	Vector3 vector;
	var unk3;
	Vehicle vehiclePedIsIn;

	func_65();

	if (bParam0)
		vector = { uLocal_308 };
	else
		func_64(&vector, &unk3, false);

	func_61(vector);

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_274[0], false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
			{
				if (bLocal_338)
				{
					if (func_59(vehiclePedIsIn, 4f, 1, 1056964608, false, true, false))
					{
						func_58();
						TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_274[0], 0, 16777216);
						func_39();
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vector, 4f, 4f, 2f, true, true, 2))
				{
					bLocal_338 = true;
				}
			}
		}
	}

	return;
}

void func_39() // Hash - 0xCC860E5A ^0x46286380
{
	func_57();
	func_50(295, 0, 0);
	func_40(false);
	func_303();
	return;
}

void func_40(BOOL bParam0) // Hash - 0xA9CD9D ^0xA9CD9D
{
	var unk;
	var unk26;

	if (!func_47())
		return;

	if (!bLocal_69)
		return;

	unk = 3;
	unk26 = 3;
	TEXT_LABEL_ASSIGN_STRING(&unk[0 /*8*/], "GameType", 32);
	TEXT_LABEL_ASSIGN_STRING(&unk[1 /*8*/], "Location", 32);
	TEXT_LABEL_ASSIGN_STRING(&unk[2 /*8*/], "Type", 32);

	if (bParam0)
		TEXT_LABEL_ASSIGN_STRING(&unk26[0 /*6*/], "MP", 24);
	else
		TEXT_LABEL_ASSIGN_STRING(&unk26[0 /*6*/], "SP", 24);

	TEXT_LABEL_ASSIGN_STRING(&unk26[1 /*6*/], "City", 24);
	TEXT_LABEL_ASSIGN_STRING(&unk26[2 /*6*/], "????", 24);

	if (func_45(200, &unk26, &unk, 3, -1, false, false))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, func_44(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(108, func_43(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(102, func_42(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(8, func_41(), 0f);
	}

	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	bLocal_69 = false;
	return;
}

int func_41() // Hash - 0xA767DBD8 ^0xA767DBD8
{
	return iLocal_67;
}

int func_42() // Hash - 0xA767DBD8 ^0xA767DBD8
{
	return iLocal_68;
}

int func_43() // Hash - 0xA767DBD8 ^0xA767DBD8
{
	return iLocal_66;
}

int func_44() // Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return 0;
}

BOOL func_45(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Hash - 0xB348F537 ^0xD24CB377
{
	int num;
	int i;
	var gamerHandle;
	var clanDesc;

	!NETWORK::NETWORK_IS_SIGNED_ONLINE();

	if (!NETWORK::NETWORK_PLAYER_IS_CHEATER() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		num.f_2.f_1 = 4;
		num = iParam0;
	
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				gamerHandle = { func_46(PLAYER::PLAYER_ID()) };
			
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle))
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&clanDesc, 35, &gamerHandle))
						num.f_1 = clanDesc;
			}
		}
		else
		{
			num.f_1 = iParam4;
		}
	
		num.f_2 = iParam3;
	
		for (i = 0; i < iParam3; i = i + 1)
		{
			num.f_2.f_1[i /*16*/] = { uParam2->[i /*8*/] };
			TEXT_LABEL_COPY(&(num.f_2.f_1[i /*16*/].f_8), { uParam1->[i /*6*/] }, 8);
		}
	
		if (bParam5)
			Global_2097157.f_5 = { num };
	
		if (!bParam6)
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692733.f_3)
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&num, &(Global_1935368.f_10));
			else
				STATS::LEADERBOARDS2_WRITE_DATA(&num);
	
		return true;
	}

	NETWORK::NETWORK_PLAYER_IS_CHEATER();
	!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES();
	NETWORK::NETWORK_HAS_AGE_RESTRICTIONS();
	!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV();
	return false;
}

struct<13> func_46(Player plParam0) // Hash - 0x3F3CEB62 ^0x60A9D262
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

BOOL func_47() // Hash - 0x66FB9B9F ^0x98BE6BFD
{
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN() && func_48())
		return true;

	return false;
}

BOOL func_48() // Hash - 0x1C9B9817 ^0x5956764E
{
	if (func_49())
		return false;

	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == false)
		return false;

	return true;
}

BOOL func_49() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_2695031;
}

void func_50(int iParam0, int iParam1, int iParam2) // Hash - 0xEC2439E7 ^0x1B67A713
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_56(891 + iParam0, true, -1);
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
		Global_113648.f_10196[iParam0 /*12*/].f_10 = iParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = iParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_51();

	return;
}

void func_51() // Hash - 0x9F269E94 ^0x9F269E94
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
		func_55(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78558)
		{
			if (func_54() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113382 = 0;
			
				if (!Global_63362)
					func_52();
			}
		}
	}

	return;
}

int func_52() // Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_53(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL func_53(BOOL bParam0) // Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

int func_54() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

BOOL func_55(int iParam0, int iParam1) // Hash - 0x77E0C72A ^0x80DA2A54
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

void func_56(int iParam0, BOOL bParam1, int iParam2) // Hash - 0xCF91FBA1 ^0xAE1D9C41
{
	if (iParam2 == -1)
		iParam2 = func_19();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_57() // Hash - 0x55A64BCE ^0x55A64BCE
{
	iLocal_68 = iLocal_68 + 1;
	bLocal_69 = true;
	return;
}

void func_58() // Hash - 0xE635A2DA ^0xE9BE5038
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_274[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_274[0], false))
	{
		AUDIO::STOP_PED_SPEAKING(uLocal_274[0], true);
	
		if (PED::IS_PED_IN_GROUP(uLocal_274[0]))
			PED::REMOVE_PED_FROM_GROUP(uLocal_274[0]);
	}

	return;
}

BOOL func_59(Vehicle veParam0, float fParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Hash - 0x60473011 ^0x5B80F12B
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ACCELERATE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UD, true);

	if (bParam5)
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);

	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HORN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_NEXT_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PREV_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_FRONT_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_PEDAL, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_UNDERCARRIAGE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_BOOST, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_ASCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_DESCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_RIGHT, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	func_60(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_29 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, fParam1, iParam2, bParam4);

	Global_29 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= iParam3)
			return true;

	return false;
}

void func_60(Vehicle veParam0) // Hash - 0x94E8CB0B ^0x47923A23
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

void func_61(var uParam0, var uParam1, var uParam2) // Hash - 0x417F8D48 ^0x3EDB6FED
{
	Vehicle vehiclePedIsIn;

	if (HUD::DOES_BLIP_EXIST(blLocal_281))
		HUD::REMOVE_BLIP(&blLocal_281);

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_274[0], false))
			if (PED::IS_PED_IN_VEHICLE(uLocal_274[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				if (!HUD::DOES_BLIP_EXIST(blLocal_280))
					blLocal_280 = func_62(uParam0, true);

	return;
}

Blip func_62(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Hash - 0xF4E99477 ^0x29669E98
{
	Blip blip;

	blip = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(blip, bParam3);
	return blip;
}

var func_63(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_64(var uParam0, var uParam1, BOOL bParam2) // Hash - 0x757C3FDA ^0x757C3FDA
{
	uLocal_317 = { uLocal_317 };

	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { uLocal_314 };
				*uParam1 = fLocal_326;
			}
		
			uLocal_317 = { *uParam0 };
			break;
	
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.9908f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { uLocal_314 };
				*uParam1 = fLocal_326;
			}
		
			uLocal_317 = { *uParam0 };
			break;
	
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.4315f, 3776.8496f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { uLocal_314 };
				*uParam1 = fLocal_326;
			}
		
			uLocal_317 = { *uParam0 };
			break;
	}

	return;
}

void func_65() // Hash - 0x21CE86F1 ^0xA5C0591F
{
	if (PED::IS_PED_INJURED(uLocal_274[0]))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_274[0]))
		{
		}
		else
		{
			ENTITY::IS_ENTITY_DEAD(uLocal_274[0], false);
		}
	
		func_66(0);
	}

	return;
}

void func_66(int iParam0) // Hash - 0xB3073C49 ^0xB3073C49
{
	if (uLocal_76[0] > -1 && uLocal_76[0] < 10 && iParam0 != 2)
		func_88(uLocal_76[0], func_89(uLocal_76[0]) / 2);

	func_86();

	switch (iParam0)
	{
		case 0:
			func_84(_("~r~~a~ died."), uLocal_76[0]);
			func_88(uLocal_76[0], 0);
			func_72(uLocal_76[0], true);
			iLocal_74 = 6;
			break;
	
		case 1:
			HUD::CLEAR_PRINTS();
			func_67(_("~a~ was abandoned."), uLocal_76[0], false);
			iLocal_74 = 5;
			break;
	
		case 2:
			iLocal_74 = 5;
			break;
	
		case 4:
			func_84(_("~r~~a~ was scared."), uLocal_76[0]);
			iLocal_74 = 6;
			break;
	
		case 3:
			if (func_25(uLocal_274[0], 92.5861f, -1282.8604f, 28.2548f, true) < 10f)
				iLocal_74 = 5;
			else
				iLocal_74 = 6;
			break;
	}

	return;
}

void func_67(char* sParam0, int iParam1, BOOL bParam2) // Hash - 0x55CAB482 ^0x55CAB482
{
	var unk;

	TEXT_LABEL_COPY(&unk, { func_71(iParam1) }, 6);

	if (!func_70(sParam0, &unk))
		if (!bParam2)
			func_69(sParam0, &unk, -1);
		else
			func_68(sParam0, &unk);

	return;
}

void func_68(char* sParam0, const char* sParam1) // Hash - 0xAFD19873 ^0xEB95752D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

void func_69(char* sParam0, const char* sParam1, int iParam2) // Hash - 0xF37B3394 ^0xE3F991D6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
	return;
}

BOOL func_70(char* sParam0, const char* sParam1) // Hash - 0xCB708C57 ^0x57AB1DDC
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

struct<4> func_71(int iParam0) // Hash - 0x6899F25C ^0x6899F25C
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "SCLUB_NM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 16);
	return unk;
}

void func_72(int iParam0, BOOL bParam1) // Hash - 0x80CBEC6D ^0x4A06CBD4
{
	if (bParam1)
		func_27(&(Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	else
		func_73(&(Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_3), 2);

	return;
}

void func_73(var uParam0, int iParam1) // Hash - 0xF55E891F ^0xF55E891F
{
	func_74(uParam0, iParam1);
	return;
}

void func_74(var uParam0, int iParam1) // Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_75() // Hash - 0x807C9078 ^0x807C9078
{
	int num;

	num = func_77();

	switch (num)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		default:
			switch (func_76(-1))
			{
				case 0:
					return 3;
			
				case 1:
					return 4;
			
				case 2:
					return 5;
			
				case 3:
					return 6;
			
				case 4:
					return 7;
			
				default:
					break;
			}
			break;
	}

	return 3;
}

int func_76(int iParam0) // Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_19();
	
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

int func_77() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_78();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_78() // Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_82(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_81(PLAYER::PLAYER_PED_ID());
		
			if (func_80(num) && !func_79(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_80(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_79(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

BOOL func_80(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_81(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_82(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_82(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_80(iParam0))
		return func_83(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_83(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

void func_84(char* sParam0, int iParam1) // Hash - 0x23B7AC14 ^0xC1A16071
{
	var unk;

	TEXT_LABEL_COPY(&unk, { func_71(iParam1) }, 6);
	func_85(sParam0, &unk, 7500, 1);
	return;
}

void func_85(char* sParam0, const char* sParam1, int iParam2, int iParam3) // Hash - 0xA3B0AE7D ^0x4927FD61
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
	return;
}

void func_86() // Hash - 0x23F83D78 ^0xA6F61E7D
{
	if (HUD::DOES_BLIP_EXIST(blLocal_281))
		HUD::REMOVE_BLIP(&blLocal_281);

	if (HUD::DOES_BLIP_EXIST(blLocal_280))
		HUD::REMOVE_BLIP(&blLocal_280);

	func_87();
	return;
}

void func_87() // Hash - 0x621F4F41 ^0x18E001DE
{
	int i;

	for (i = 0; i < 1; i = i + 1)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_282[i]))
			HUD::REMOVE_BLIP(&uLocal_282[i]);
	}

	return;
}

void func_88(int iParam0, int iParam1) // Hash - 0x6BA5E7E8 ^0xB4A69D51
{
	Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/] = iParam1;
	return;
}

int func_89(int iParam0) // Hash - 0x5260F94D ^0x88DE16A7
{
	return Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/];
}

void func_90() // Hash - 0xC8B80847 ^0x76C00BEA
{
	func_65();
	func_86();

	switch (iLocal_80)
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_274[0], false))
				{
					if (!func_107("SCLUB_SECLUDED"))
						func_106("SCLUB_SECLUDED");
				
					if (func_105() && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) == 0f)
					{
						HUD::CLEAR_HELP(true);
						STREAMING::REQUEST_ANIM_DICT(func_100(uLocal_274[0], false, false));
						iLocal_80 = 1;
					}
				}
			}
			break;
	
		case 1:
			if (func_93())
				iLocal_80 = 2;
			break;
	
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_PERFORM_SEQUENCE) != 1)
			{
				func_256();
			
				if (CLOCK::GET_CLOCK_HOURS() > 20 || CLOCK::GET_CLOCK_HOURS() < 4)
					bLocal_336 = false;
			
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(evmLocal_45);
				func_91(bLocal_336);
				iLocal_74 = 4;
			}
			break;
	}

	return;
}

void func_91(BOOL bParam0) // Hash - 0x189F4872 ^0xE6F38DC9
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
				func_84(_("Take ~a~ ~y~home.~s~"), uLocal_76[0]);
			else
				func_92("SCLUB_CLUB_GO", 7500, 1);
			break;
	
		case 8:
		case 9:
			func_92(_("Take her ~y~home."), 7500, 1);
			break;
	}

	return;
}

void func_92(char* sParam0, int iParam1, int iParam2) // Hash - 0x8A76EF8E ^0x32DD2C0C
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
	return;
}

BOOL func_93() // Hash - 0x8C90C7AB ^0xACAA7432
{
	if (STREAMING::HAS_ANIM_DICT_LOADED(func_100(uLocal_274[0], false, false)))
	{
		func_94(uLocal_274[0], false, true, -1, true);
		func_94(PLAYER::PLAYER_PED_ID(), false, false, -1, true);
		return true;
	}

	return false;
}

void func_94(Ped pedParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Hash - 0x510C082A ^0xD1BD0848
{
	Vehicle vehiclePedIsIn;
	BOOL flag;
	char* animDict;
	int taskSequenceId;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		return;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
		return;

	evmLocal_45 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && func_99(false, true))
		if (evmLocal_45 != FIRST_PERSON)
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(FIRST_PERSON);

	flag = func_98(vehiclePedIsIn);
	animDict = func_100(pedParam0, false, false);

	if (!STREAMING::HAS_ANIM_DICT_LOADED(animDict))
	{
		STREAMING::REQUEST_ANIM_DICT(animDict);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		TASK::TASK_PLAY_ANIM(0, animDict, func_95(0, bParam2, bParam1, flag), 8f, -8f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_95(1, bParam2, bParam1, flag), 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_95(2, bParam2, bParam1, flag), 8f, -4f, iParam3, 1, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_95(3, bParam2, bParam1, flag), 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_95(4, bParam2, bParam1, flag), 4f, -2f, -1, 0, 0, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
	
		if (bParam4)
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	}

	return;
}

char* func_95(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Hash - 0x627B1EA2 ^0x627B1EA2
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_97(18);
					else
						str = func_97(23);
				else if (bParam1)
					str = func_97(8);
				else
					str = func_97(13);
			else if (bParam2)
				if (bParam1)
					str = func_96(18);
				else
					str = func_96(23);
			else if (bParam1)
				str = func_96(8);
			else
				str = func_96(13);
			break;
	
		case 1:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_97(19);
					else
						str = func_97(24);
				else if (bParam1)
					str = func_97(9);
				else
					str = func_97(14);
			else if (bParam2)
				if (bParam1)
					str = func_96(19);
				else
					str = func_96(24);
			else if (bParam1)
				str = func_96(9);
			else
				str = func_96(14);
			break;
	
		case 2:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_97(20);
					else
						str = func_97(25);
				else if (bParam1)
					str = func_97(10);
				else
					str = func_97(15);
			else if (bParam2)
				if (bParam1)
					str = func_96(20);
				else
					str = func_96(25);
			else if (bParam1)
				str = func_96(10);
			else
				str = func_96(15);
			break;
	
		case 3:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_97(21);
					else
						str = func_97(26);
				else if (bParam1)
					str = func_97(11);
				else
					str = func_97(16);
			else if (bParam2)
				if (bParam1)
					str = func_96(21);
				else
					str = func_96(26);
			else if (bParam1)
				str = func_96(11);
			else
				str = func_96(16);
			break;
	
		case 4:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_97(22);
					else
						str = func_97(27);
				else if (bParam1)
					str = func_97(12);
				else
					str = func_97(17);
			else if (bParam2)
				if (bParam1)
					str = func_96(22);
				else
					str = func_96(27);
			else if (bParam1)
				str = func_96(12);
			else
				str = func_96(17);
			break;
	
		case 5:
			if (bParam3)
				if (bParam1)
					str = func_97(3);
				else
					str = func_97(2);
			else if (bParam1)
				str = func_96(3);
			else
				str = func_96(2);
			break;
	
		case 6:
			break;
	}

	return str;
}

char* func_96(int iParam0) // Hash - 0x667A3A2C ^0x1AB1EDB
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "into_proposition_male";
			break;
	
		case 1:
			str = "into_proposition_prostitute";
			break;
	
		case 2:
			str = "proposition_loop_male";
			break;
	
		case 3:
			str = "proposition_loop_prostitute";
			break;
	
		case 4:
			str = "proposition_to_exit_male";
			break;
	
		case 5:
			str = "prop_to_sit_alt_prostitute";
			break;
	
		case 6:
			str = "prop_to_sit_male";
			break;
	
		case 7:
			str = "prop_to_sit_prostitute";
			break;
	
		case 8:
			str = "proposition_to_sex_p1_prostitute";
			break;
	
		case 9:
			str = "proposition_to_sex_p2_prostitute";
			break;
	
		case 10:
			str = "sex_loop_prostitute";
			break;
	
		case 11:
			str = "sex_to_proposition_p1_prostitute";
			break;
	
		case 12:
			str = "sex_to_proposition_p2_prostitute";
			break;
	
		case 13:
			str = "proposition_to_sex_p1_male";
			break;
	
		case 14:
			str = "proposition_to_sex_p2_male";
			break;
	
		case 15:
			str = "sex_loop_male";
			break;
	
		case 16:
			str = "sex_to_proposition_p1_male";
			break;
	
		case 17:
			str = "sex_to_proposition_p2_male";
			break;
	
		case 18:
			str = "proposition_to_BJ_p1_prostitute";
			break;
	
		case 19:
			str = "proposition_to_BJ_p2_prostitute";
			break;
	
		case 20:
			str = "BJ_loop_prostitute";
			break;
	
		case 21:
			str = "BJ_to_proposition_p1_prostitute";
			break;
	
		case 22:
			str = "BJ_to_proposition_p2_prostitute";
			break;
	
		case 23:
			str = "proposition_to_BJ_p1_male";
			break;
	
		case 24:
			str = "proposition_to_BJ_p2_male";
			break;
	
		case 25:
			str = "BJ_loop_male";
			break;
	
		case 26:
			str = "BJ_to_proposition_p1_male";
			break;
	
		case 27:
			str = "BJ_to_proposition_p2_male";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

char* func_97(int iParam0) // Hash - 0xAA08199C ^0xB0673DFD
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "low_car_sit_to_prop_player";
			break;
	
		case 1:
			str = "low_car_sit_to_prop_female";
			break;
	
		case 2:
			str = "low_car_prop_loop_player";
			break;
	
		case 3:
			str = "low_car_prop_loop_female";
			break;
	
		case 4:
			str = "low_car_prop_to_leave_player";
			break;
	
		case 5:
			str = "low_car_prop_to_sit_alt_female";
			break;
	
		case 6:
			str = "low_car_prop_to_sit_player";
			break;
	
		case 7:
			str = "low_car_prop_to_sit_female";
			break;
	
		case 8:
			str = "low_car_prop_to_sex_p1_female";
			break;
	
		case 9:
			str = "low_car_prop_to_sex_p2_female";
			break;
	
		case 10:
			str = "low_car_sex_loop_female";
			break;
	
		case 11:
			str = "low_car_sex_to_prop_p1_female";
			break;
	
		case 12:
			str = "low_car_sex_to_prop_p2_female";
			break;
	
		case 13:
			str = "low_car_prop_to_sex_p1_player";
			break;
	
		case 14:
			str = "low_car_prop_to_sex_p2_player";
			break;
	
		case 15:
			str = "low_car_sex_loop_player";
			break;
	
		case 16:
			str = "low_car_sex_to_prop_p1_player";
			break;
	
		case 17:
			str = "low_car_sex_to_prop_p2_player";
			break;
	
		case 18:
			str = "low_car_prop_to_bj_p1_female";
			break;
	
		case 19:
			str = "low_car_prop_to_bj_p2_female";
			break;
	
		case 20:
			str = "low_car_bj_loop_female";
			break;
	
		case 21:
			str = "low_car_bj_to_prop_p1_female";
			break;
	
		case 22:
			str = "low_car_bj_to_prop_p2_female";
			break;
	
		case 23:
			str = "low_car_prop_to_bj_p1_player";
			break;
	
		case 24:
			str = "low_car_prop_to_bj_p2_player";
			break;
	
		case 25:
			str = "low_car_bj_loop_player";
			break;
	
		case 26:
			str = "low_car_bj_to_prop_p1_player";
			break;
	
		case 27:
			str = "low_car_bj_to_prop_p2_player";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

BOOL func_98(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_ENTITYXF"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_PEYOTE2"):
			case joaat("LAYOUT_LOW_NEO"):
			case joaat("LAYOUT_LOW_PEYOTE3"):
			case joaat("LAYOUT_LOW_CALICO"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_LOW_ZR350"):
			case joaat("LAYOUT_LOW_IGNUS"):
			case joaat("LAYOUT_LOW_ZENO"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
				return true;
		}
	}

	return false;
}

BOOL func_99(BOOL bParam0, BOOL bParam1) // Hash - 0x7552C7C8 ^0x3187BB99
{
	BOOL flag;

	flag = false;

	if (bParam0)
		flag = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_FOOT) == FIRST_PERSON;

	if (bParam1)
		if (!flag)
			flag = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_VEHICLE) == FIRST_PERSON;

	return flag;
}

char* func_100(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Hash - 0xACA338EA ^0xCDE1556A
{
	Vehicle vehiclePedIsIn;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
			if (func_98(vehiclePedIsIn))
				if (!func_99(false, true) || bParam2 && !bParam1)
					return func_104();
				else
					return func_103();
			else if (ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("VSTR"))
				return "anim@mini@prostitutes@sex@veh_vstr@";
	}

	if (!func_99(false, true) || bParam2 && !bParam1)
		return func_102();

	return func_101();
}

char* func_101() // Hash - 0x306ACA3A ^0xF4BE1722
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_102() // Hash - 0x306ACA3A ^0xF2EC604C
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_103() // Hash - 0x306ACA3A ^0xE475604E
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_104() // Hash - 0x306ACA3A ^0x59FEA93E
{
	return "mini@prostitutes@sexlow_veh";
}

BOOL func_105() // Hash - 0x212F76C5 ^0x42DF722
{
	Ped pedInVehicleSeat;
	Vehicle randomVehicleInSphere;
	Vehicle vehiclePedIsIn;
	Vector3 entityCoords;
	float radius;
	Vector3 vector;
	var unk5;
	Vector3 outPosition;
	float num;
	Interior interiorFromEntity;

	radius = 25f;
	func_64(&vector, &unk5, false);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	
		if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(entityCoords, &outPosition, 1077936128, 0))
		{
			num = SYSTEM::VDIST(entityCoords, outPosition);
		
			if (num <= 10f)
				return false;
		}
	
		if (SYSTEM::VDIST(entityCoords, uLocal_308) < 20f || SYSTEM::VDIST(entityCoords, vector) < 20f)
			return false;
	
		if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(entityCoords - { 20f, 20f, 20f }, entityCoords + { 20f, 20f, 20f }))
			return false;
	
		PED::GET_CLOSEST_PED(entityCoords, radius, true, true, &pedInVehicleSeat, false, false, -1);
	
		if (!pedInVehicleSeat == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(pedInVehicleSeat, false))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedInVehicleSeat, PLAYER::PLAYER_PED_ID(), 17))
					return false;
		}
		else
		{
			randomVehicleInSphere = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(entityCoords, radius, 0, -1);
		
			if (!randomVehicleInSphere == 0)
			{
				if (!randomVehicleInSphere == vehiclePedIsIn)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(randomVehicleInSphere, false))
					{
						pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(randomVehicleInSphere, -1, false);
					
						if (!pedInVehicleSeat == 0)
							return false;
					}
				}
			}
		}
	
		interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	
		if (!interiorFromEntity == 0)
			return false;
	}

	return true;
}

void func_106(char* sParam0) // Hash - 0x99A98712 ^0xE46BE9F0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

BOOL func_107(char* sParam0) // Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_108() // Hash - 0xAC5680DB ^0x7B73EF1A
{
	Vehicle lastDrivenVehicle;
	int clockHours;
	int num;
	int num2;
	int num3;

	if (iLocal_75 < 12 && iLocal_75 >= 2)
	{
		if (func_213(3000))
		{
			CAM::DO_SCREEN_FADE_OUT(1000);
			iLocal_75 = 12;
		}
	}

	if (!bLocal_71 && iLocal_75 >= 5)
	{
		lastDrivenVehicle = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(lastDrivenVehicle, false) && !ENTITY::IS_ENTITY_DEAD(lastDrivenVehicle, false))
			if (ENTITY::GET_ENTITY_MODEL(lastDrivenVehicle) == joaat("BLIMP2"))
				bLocal_71 = false;
			else if (VEHICLE::IS_BIG_VEHICLE(VEHICLE::GET_LAST_DRIVEN_VEHICLE()) && uLocal_76[0] == 5)
				bLocal_71 = func_210(&uLocal_70, -865f, 516.3f, 90f, true, 15f);
			else if (func_209(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
				bLocal_71 = func_210(&uLocal_70, uLocal_323, true, fLocal_327);
			else
				bLocal_71 = func_210(&uLocal_70, uLocal_308, true, fLocal_327);
	}

	if (iLocal_75 > 0 && iLocal_75 < 13)
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();

	switch (iLocal_75)
	{
		case 0:
			HUD::CLEAR_HELP(true);
			HUD::CLEAR_PRINTS();
			func_86();
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", false, -1);
			func_30(SPC_REMOVE_FIRES | 16 | 32, true, false);
		
			if (!func_267(iLocal_333, 131072))
				func_27(&iLocal_333, 131072);
		
			if (!func_267(iLocal_333, 256))
			{
				func_208();
				func_27(&iLocal_333, 256);
			}
		
			if (!func_267(iLocal_333, 32768))
			{
				STREAMING::REQUEST_ANIM_DICT(func_207());
				func_27(&iLocal_333, 32768);
			}
		
			if (!func_267(iLocal_333, 256))
			{
				STREAMING::REQUEST_ANIM_DICT(func_206());
				func_27(&iLocal_333, 256);
			}
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				veLocal_340 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				func_205(PLAYER::PLAYER_PED_ID(), veLocal_340);
				iLocal_75 = 1;
			}
			else
			{
				func_58();
				func_203(PLAYER::PLAYER_PED_ID(), uLocal_302);
				func_203(uLocal_274[0], uLocal_305);
				iLocal_75 = 2;
			}
		
			func_201();
			break;
	
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(veLocal_340, false))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veLocal_340, true), uLocal_308) < 2f)
				{
					func_58();
					func_203(PLAYER::PLAYER_PED_ID(), uLocal_302);
					func_203(uLocal_274[0], uLocal_305);
					STREAMING::NEW_LOAD_SCENE_STOP();
					iLocal_75 = 2;
				}
				else if (MISC::GET_GAME_TIMER() >= 10000)
				{
					iLocal_75 = 13;
				}
			}
			break;
	
		case 2:
			if (!CAM::IS_CAM_RENDERING(uLocal_284[0]))
			{
				CAM::SET_CAM_ACTIVE(uLocal_284[0], true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_340, false))
					if (ENTITY::GET_ENTITY_MODEL(veLocal_340) == joaat("BLIMP2"))
						ENTITY::SET_ENTITY_VISIBLE(veLocal_340, false, false);
			
				func_8(&uLocal_255);
				iLocal_75 = 3;
			}
			break;
	
		case 3:
			if (func_200(&uLocal_255) > 1f)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_284[1], uLocal_284[0], 6000, 1, 1);
				func_199(&uLocal_289, true, false, 2000, 1, true, false, true);
				clockHours = CLOCK::GET_CLOCK_HOURS();
				iLocal_330 = clockHours + 8;
			
				if (iLocal_330 > 23)
					iLocal_330 = iLocal_330 - 24;
			
				uLocal_289.f_7 = clockHours;
				uLocal_289.f_8 = iLocal_330;
				func_2(&uLocal_255);
				iLocal_75 = 4;
			}
			break;
	
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_284[1]) && CAM::IS_CAM_RENDERING(uLocal_284[1]))
			{
				if (!func_267(iLocal_331, 512))
				{
					if (ENTITY::DOES_ENTITY_EXIST(veLocal_340) && !ENTITY::IS_ENTITY_DEAD(veLocal_340, false))
						VEHICLE::SET_VEHICLE_DOORS_SHUT(veLocal_340, true);
				
					func_196(PLAYER::PLAYER_PED_ID(), func_198());
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_195());
					func_172();
					func_27(&iLocal_331, 512);
				}
				else if (!func_267(iLocal_331, 2048))
				{
					ENTITY::IS_ENTITY_DEAD(uLocal_274[0], false);
				
					if (!func_171() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_274[0]))
					{
						func_172();
					
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
							AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
					
						func_27(&iLocal_331, 2048);
						func_8(&uLocal_255);
						sLocal_277 = func_170();
						iLocal_75 = 5;
					}
				}
			}
			break;
	
		case 5:
			if (func_200(&uLocal_255) > 1f)
			{
				if (func_145(iLocal_330, 0, sLocal_277, "", &uLocal_289, func_200(&uLocal_255) * 0.2f, 0))
				{
					if (!func_171())
					{
						if (ENTITY::DOES_ENTITY_EXIST(veLocal_340))
							if (ENTITY::GET_ENTITY_MODEL(veLocal_340) != joaat("BLIMP2"))
								MISC::CLEAR_AREA(uLocal_305, 20f, true, false, false, false);
						else
							MISC::CLEAR_AREA(uLocal_305, 20f, true, false, false, false);
					
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_274[0]))
							ENTITY::SET_ENTITY_VISIBLE(uLocal_274[0], false, false);
					
						TASK::SET_PED_PATH_AVOID_FIRE(PLAYER::PLAYER_PED_ID(), false);
						func_8(&uLocal_255);
						iLocal_75 = 6;
					}
				}
			}
			break;
	
		case 6:
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		
			if (func_200(&uLocal_255) > 1.5f)
			{
				if (bLocal_71)
					func_143(&uLocal_70);
			
				func_8(&uLocal_255);
				iLocal_75 = 7;
			}
			break;
	
		case 7:
			if (!CAM::IS_CAM_RENDERING(uLocal_284[2]))
			{
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(true);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_284[2], uLocal_284[1], 6000, 1, 1);
				func_8(&uLocal_255);
				iLocal_75 = 8;
			}
			break;
	
		case 8:
			if (!func_267(iLocal_333, 262144))
				if (func_200(&uLocal_255) >= 1.25f)
					func_142();
		
			if (func_200(&uLocal_255) > 6f)
			{
				CAM::SET_CAM_ACTIVE(uLocal_284[3], true);
			
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_340, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(veLocal_340) == joaat("BLIMP2"))
						ENTITY::SET_ENTITY_VISIBLE(veLocal_340, true, false);
				
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_340, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veLocal_340, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(veLocal_340, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(veLocal_340);
				}
			
				func_8(&uLocal_255);
				iLocal_75 = 10;
			}
			break;
	
		case 10:
			if (func_200(&uLocal_255) > 2f)
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);
				iLocal_75 = 13;
			}
			break;
	
		case 12:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				if (!func_267(iLocal_333, 262144))
				{
					PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), uLocal_314, fLocal_326, false, true, true);
					func_142();
				}
			
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_340, false))
					if (ENTITY::GET_ENTITY_MODEL(veLocal_340) == joaat("BLIMP2"))
						ENTITY::SET_ENTITY_VISIBLE(veLocal_340, true, false);
			
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_340, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_340, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veLocal_340, 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(veLocal_340, 1000f);
					VEHICLE::SET_VEHICLE_FIXED(veLocal_340);
				}
			
				func_8(&uLocal_255);
				iLocal_75 = 13;
			}
			break;
	
		case 13:
			if (!CAM::IS_SCREEN_FADING_OUT() && func_200(&uLocal_255) >= 1f)
			{
				func_13(true, true, false);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
				PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 30, true, 0);
			
				if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), func_82(0)))
					func_141();
			
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(uLocal_308 - { 3f, 3f, 3f }, uLocal_308 + { 3f, 3f, 3f }, 15f, 1);
			
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_340, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_340, true, true);
				
					if (ENTITY::GET_ENTITY_MODEL(veLocal_340) != joaat("BLIMP2"))
					{
						ENTITY::SET_ENTITY_COORDS(veLocal_340, uLocal_308, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(veLocal_340, fLocal_327);
					
						if (VEHICLE::IS_BIG_VEHICLE(veLocal_340) && uLocal_76[0] == 5)
						{
							ENTITY::SET_ENTITY_COORDS(veLocal_340, -865f, 516.3f, 90f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(veLocal_340, 15f);
						}
						else if (func_209(veLocal_340))
						{
							ENTITY::SET_ENTITY_COORDS(veLocal_340, uLocal_323, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(veLocal_340, fLocal_328);
						}
					
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_340, 1084227584);
					}
				}
			
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					func_199(&uLocal_289, false, false, 2000, 1, false, false, true);
				}
				else
				{
					CLOCK::ADD_TO_CLOCK_TIME(8, 0, 0);
					func_139(SYSTEM::TO_FLOAT(8));
					CAM::DO_SCREEN_FADE_IN(2000);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					func_199(&uLocal_289, false, false, 2000, 1, true, false, true);
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_274[0]))
					PED::DELETE_PED(&uLocal_274[0]);
			
				if (!func_138(uLocal_76[0], -1))
				{
					if (uLocal_76[0] == 5)
						func_67(_("~a~' number has been added to your phone."), uLocal_76[0], false);
					else
						func_67(_("~a~'s number has been added to your phone."), uLocal_76[0], false);
				
					func_119(uLocal_76[0], 1, -1);
					SYSTEM::WAIT(4000);
				}
			
				func_117(uLocal_76[0]);
				num = func_116(uLocal_76[0]);
			
				if (num <= 2)
				{
					num2 = func_115(uLocal_76[0]);
					num3 = func_114(num);
					func_109(-384575792, num2, num3, 3, func_113(), func_112(uLocal_76[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
			
				func_39();
			}
			break;
	}

	return;
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) // Hash - 0xA1039CF ^0xA1039CF
{
	int num;

	if (func_53(false))
		return 0;

	if (iParam6 < 0)
		return 0;

	if (iParam7 < 0)
		return 0;

	if (iParam8 == 76)
		return 0;

	if (iParam9 == 235)
		return 0;

	if (iParam5 < 3)
		if (IS_BIT_SET(iParam4, iParam5))
			return 0;

	if (iParam4 < 1 || iParam4 > 7)
		return 0;

	if (iParam1 == -1)
		return 0;

	if (iParam1 == 83 || iParam2 == 83)
		return 0;

	if (Global_113648.f_7690.f_764 < 8)
	{
		num = iParam0;
		num.f_3 = func_111(iParam3);
		num.f_4 = MISC::GET_GAME_TIMER() + iParam6;
		num.f_5 = iParam7;
		num.f_1 = iParam11;
		num.f_2 = iParam4;
		num.f_6 = iParam5;
		num.f_7 = iParam8;
		num.f_8 = iParam9;
		num.f_9 = iParam10;
		num.f_10 = iParam1;
		num.f_11 = iParam2;
		num.f_13 = iParam12;
		MISC::CLEAR_BIT(&(num.f_1), 0);
		Global_113648.f_7690.f_651[Global_113648.f_7690.f_764 /*14*/] = { num };
		Global_113648.f_7690.f_764 = Global_113648.f_7690.f_764 + 1;
		func_110(0);
		func_110(1);
		func_110(2);
		return 1;
	}

	return 0;
}

void func_110(int iParam0) // Hash - 0xDBA91FA2 ^0x62041168
{
	int i;
	int num;
	int j;

	num = 0;

	if (!func_80(iParam0))
		return;

	for (i = 0; i < Global_113648.f_7690.f_136; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_7690[i /*15*/].f_2, iParam0))
			if (Global_113648.f_7690[i /*15*/].f_3 > num)
				num = Global_113648.f_7690[i /*15*/].f_3;
	}

	for (j = 0; j < Global_113648.f_7690.f_764; j = j + 1)
	{
		if (IS_BIT_SET(Global_113648.f_7690.f_651[j /*14*/].f_2, iParam0))
			if (Global_113648.f_7690.f_651[j /*14*/].f_3 == 5)
				num = 5;
	}

	Global_113648.f_7690.f_919[iParam0] = num;
	return;
}

int func_111(int iParam0) // Hash - 0x17C68833 ^0x17C68833
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
	
		case 7:
			return 4;
	
		case 2:
			return 3;
	
		case 1:
			return 2;
	
		case 3:
			return 1;
	
		case 5:
		case 6:
			return 0;
	}

	return 7;
}

int func_112(int iParam0) // Hash - 0xCC7C28F1 ^0xCC7C28F1
{
	switch (iParam0)
	{
		case 0:
			return 104;
	
		case 1:
			return 105;
	
		case 2:
			return 106;
	
		case 3:
			return 107;
	
		case 4:
			return 108;
	
		case 5:
			return 109;
	
		case 6:
			return 110;
	
		case 7:
			return 111;
	
		case 8:
			return 112;
	
		case 9:
			return 93;
	}

	return 145;
}

int func_113() // Hash - 0x35BC7314 ^0x35BC7314
{
	func_78();

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

int func_114(int iParam0) // Hash - 0x2E2A8C17 ^0x2E2A8C17
{
	switch (iParam0)
	{
		case 0:
			return 10;
	
		case 1:
			return 8;
	
		case 2:
			return 9;
	}

	return -1;
}

int func_115(int iParam0) // Hash - 0x2AAFEA47 ^0x2AAFEA47
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 4:
			return 2;
	
		case 5:
			return 3;
	
		case 8:
			return 4;
	
		case 9:
			return 5;
	}

	return -1;
}

int func_116(int iParam0) // Hash - 0x5FA99E86 ^0xC72990E7
{
	return Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_117(int iParam0) // Hash - 0x4D93CA11 ^0x60284BE3
{
	if (func_116(iParam0) < 0)
		func_118(iParam0, 0);

	Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2 = Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2 + 1;
	return;
}

void func_118(int iParam0, int iParam1) // Hash - 0xE307FFCC ^0x3B1106FE
{
	Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
	return;
}

void func_119(int iParam0, BOOL bParam1, int iParam2) // Hash - 0x6E6FD8F1 ^0xD9338C1A
{
	BOOL flag;
	int randomIntInRange;

	if (iParam2 < 0)
		iParam2 = func_75();

	func_137(iParam2) == 4;
	flag = Global_113648.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;

	if (flag)
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!func_136(func_112(iParam0), 3))
				flag = false;
		else if (!func_136(func_112(iParam0), 4))
			flag = false;

	Global_113648.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;

	if (bParam1)
	{
		if (!flag)
		{
			func_135(iParam0, 0);
			func_129(func_112(iParam0), func_137(iParam2), true);
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1800000, 2100000);
		
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					MISC::SET_BIT(&(Global_2359296[func_128() /*5568*/].f_681.f_1273), iParam0);
					func_125(-60084924, 15, false);
					break;
			}
		
			func_124(randomIntInRange);
			func_123(iParam0, randomIntInRange);
			Global_112642.f_15[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
	else if (flag)
	{
		func_120(func_112(iParam0), func_137(iParam2));
	}

	return;
}

void func_120(int iParam0, int iParam1) // Hash - 0x5207FAC0 ^0x6E316FC
{
	int num;

	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			num = iParam1;
			func_122(iParam0, num, 0);
			func_121(iParam0, num, 0);
		}
	}

	return;
}

void func_121(int iParam0, int iParam1, int iParam2) // Hash - 0xAB9B6CC ^0x1B5EEB55
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2028[iParam0 /*29*/].f_24[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_113648.f_28052[iParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_122(int iParam0, int iParam1, int iParam2) // Hash - 0xAB9B6CC ^0x80AE0F15
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2028[iParam0 /*29*/].f_12[iParam1] = iParam2;

	if (iParam0 < 162)
		Global_113648.f_28052[iParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

void func_123(int iParam0, int iParam1) // Hash - 0x85DBFDDA ^0x416B5B5D
{
	if (iParam1 > -1)
		Global_112642.f_4[iParam0] = MISC::GET_GAME_TIMER() + iParam1;
	else
		Global_112642.f_4[iParam0] = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000);

	return;
}

void func_124(int iParam0) // Hash - 0x1D9EA9C8 ^0xA8F2FCC6
{
	if (iParam0 != -1)
		Global_112642.f_3 = MISC::GET_GAME_TIMER() + iParam0;
	else
		Global_112642.f_3 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000);

	return;
}

void func_125(int iParam0, int iParam1, BOOL bParam2) // Hash - 0xA5060797 ^0xA5060797
{
	int num;

	if (func_127(iParam1, bParam2))
	{
		num = func_126();
		Global_2694418[num] = iParam1;
		Global_2694429[num] = iParam0;
	}

	return;
}

int func_126() // Hash - 0x6BB290B9 ^0x6BB290B9
{
	int num;
	int i;

	num = 9;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (Global_2694418[i] == 0)
		{
			num = i;
			i = 10;
		}
	}

	return num;
}

BOOL func_127(int iParam0, BOOL bParam1) // Hash - 0x53FB4C13 ^0x53FB4C13
{
	if (Global_1575048)
		return false;

	if (iParam0 == 22)
		return true;

	if (bParam1 || !Global_1575060 || iParam0 == 3 || iParam0 == 10 || iParam0 == 11 || iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30)
		return true;
	else
		return false;

	return true;
}

int func_128() // Hash - 0xF9396AAC ^0xF9396AAC
{
	int num;

	num = 0;
	return num;
}

void func_129(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x8A81DB2F ^0xDFC7B4EA
{
	int num;

	Global_8939 = iParam0;

	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		func_134();
	
		if (iParam1 == 4)
		{
			func_122(iParam0, 0, 1);
			func_122(iParam0, 1, 1);
			func_122(iParam0, 2, 1);
			func_121(iParam0, 0, 1);
			func_121(iParam0, 1, 1);
			func_121(iParam0, 2, 1);
		}
		else
		{
			if (func_133(iParam0, iParam1) == 1 && func_132(iParam0, iParam1) == 1)
				bParam2 = false;
		
			num = iParam1;
			func_122(iParam0, num, 1);
			func_121(iParam0, num, 1);
		
			if (iParam0 == 172 && !Global_2793044.f_6891)
				bParam2 = false;
		
			if (iParam0 == 171 && !Global_2793044.f_6890)
				bParam2 = false;
		
			if (iParam0 == 173 && !Global_2793044.f_6890)
				bParam2 = false;
		}
	
		if (bParam2)
		{
			if (!Global_78558)
			{
				if (iParam1 != 4)
				{
					if (Global_20383 != iParam1)
					{
						Global_8912[iParam1 /*4*/] = { func_131(iParam0) };
						Global_8929[iParam1] = 1;
						Global_8934[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20383)
					{
					}
					else
					{
						Global_8863[1 /*6*/] = { func_131(iParam0) };
						Global_8863[1 /*6*/].f_5 = iParam1;
						func_130();
					}
				}
				else
				{
					Global_8863[1 /*6*/] = { func_131(iParam0) };
					Global_8863[1 /*6*/].f_5 = iParam1;
					func_130();
				}
			}
			else
			{
				Global_8863[1 /*6*/] = { func_131(iParam0) };
				Global_8863[1 /*6*/].f_5 = iParam1;
				func_130();
			}
		}
	}

	return;
}

void func_130() // Hash - 0x50F99A24 ^0xCCC21134
{
	var txdName;
	var subject;
	const char* filenameForAudioConversation;

	TEXT_LABEL_ASSIGN_STRING(&txdName, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_8939 /*29*/].f_7)), 64);

	if (Global_8958 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		TEXT_LABEL_ASSIGN_STRING(&subject, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_8863[1 /*6*/]), 64);
		filenameForAudioConversation = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(_("New Contact"));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, filenameForAudioConversation, &subject);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(_("New Contact: ~n~~a~"));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_8863[1 /*6*/]);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, "", 0);
	}

	MISC::CLEAR_BIT(&Global_8253, 0);
	return;
}

struct<4> func_131(int iParam0) // Hash - 0x5D6A4A13 ^0x32291975
{
	return Global_2028[iParam0 /*29*/].f_3;
}

int func_132(int iParam0, int iParam1) // Hash - 0x97DCD8A1 ^0xF8178EDD
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2028[iParam0 /*29*/].f_24[iParam1];
}

int func_133(int iParam0, int iParam1) // Hash - 0x97DCD8A1 ^0x5A8D70D2
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2028[iParam0 /*29*/].f_12[iParam1];
}

void func_134() // Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_79(14))
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
		Global_20383 = func_77();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

void func_135(int iParam0, int iParam1) // Hash - 0xE307FFCC ^0x6F2DCB89
{
	Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
	return;
}

BOOL func_136(int iParam0, int iParam1) // Hash - 0xDE2524EF ^0xDE2524EF
{
	if (func_133(iParam0, iParam1) == 1)
		return true;

	return false;
}

int func_137(int iParam0) // Hash - 0xD4A4E644 ^0xD4A4E644
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 1:
			return 1;
	
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
	}

	return 4;
}

BOOL func_138(int iParam0, int iParam1) // Hash - 0xC2BECB69 ^0x680AFB7
{
	if (iParam1 < 0)
		iParam1 = func_75();

	return Global_113648.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_139(float fParam0) // Hash - 0xC963C32B ^0x1F04C43F
{
	int i;
	int j;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_10(&(Global_113648.f_18105.f_175[i /*19*/].f_5)))
			func_140(&(Global_113648.f_18105.f_175[i /*19*/].f_5), fParam0 * 60f);
	}

	for (j = 0; j < 6; j = j + 1)
	{
		if (func_10(&Global_113648.f_18105.f_362[j /*3*/]))
			func_140(&Global_113648.f_18105.f_362[j /*3*/], fParam0 * 60f);
	}

	AUDIO::SKIP_RADIO_FORWARD();
	return;
}

void func_140(int* piParam0, float fParam1) // Hash - 0xA833ACAB ^0xA833ACAB
{
	if (func_10(piParam0))
		func_9(piParam0, func_4(piParam0) + fParam1);

	return;
}

void func_141() // Hash - 0x28076B41 ^0xF3174F31
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (i < 1)
			Global_97143[i] = Global_97143[i + 1];
		else
			Global_97143[i] = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_142() // Hash - 0x23539F55 ^0x72B70762
{
	int randomIntInRange;
	int taskSequenceId;

	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_276))
	{
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 50000);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_314, 1f, -1, 0.25f, 0, fLocal_326);
	
		if (randomIntInRange < 15000)
			TASK::TASK_PLAY_ANIM(0, sLocal_276, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0, false, false, false);
		else if (randomIntInRange >= 15000 && randomIntInRange < 35000)
			TASK::TASK_PLAY_ANIM(0, sLocal_276, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0, false, false, false);
		else
			TASK::TASK_PLAY_ANIM(0, sLocal_276, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0, false, false, false);
	
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), taskSequenceId);
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		func_27(&iLocal_333, 262144);
	}

	return;
}

void func_143(var uParam0) // Hash - 0xE6DAF914 ^0x981F5DE3
{
	Vehicle vehicle;

	vehicle = *uParam0;

	if (ENTITY::DOES_ENTITY_EXIST(vehicle))
	{
		if (!func_144(vehicle))
		{
			ENTITY::SET_ENTITY_COLLISION(vehicle, true, false);
			ENTITY::SET_ENTITY_VISIBLE(vehicle, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(vehicle, false);
		}
	}

	return;
}

BOOL func_144(Vehicle veParam0) // Hash - 0x2E9AC124 ^0x5164B34A
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;
	else
		return true;

	return false;
}

BOOL func_145(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6) // Hash - 0xCB113A03 ^0x5D923C93
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	var unk;
	var unk2;
	var unk3;
	float num6;
	float num7;
	float num8;
	float num9;

	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_169();
			num5 = func_169();
			func_168(&num5, iParam0);
			func_167(&num5, iParam1);
			func_166(&num5, 0);
		
			if (func_164(*uParam4, num5))
				func_159(&num5, 0, 0, 0, 1, 0, 0);
		
			func_156(*uParam4, num5, &num, &num2, &num3, &unk, &unk2, &unk3);
			uParam4->f_11 = num + (num2 * 60) + ((num3 + iParam6) * 3600);
			func_139(SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f);
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(false);
			func_155();
			uParam4->f_10 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			func_154();
			uParam4->f_3 = uParam4->f_3 + 1;
			break;
	
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (MISC::GET_HASH_KEY(sParam2) != 0)
						MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam2, 1f);
				
					if (MISC::GET_HASH_KEY(sParam3) != 0)
					{
						MISC::UNLOAD_ALL_CLOUD_HATS();
						MISC::LOAD_CLOUD_HAT(sParam3, 0);
					}
				
					uParam4->f_3 = 2;
				}
			}
		
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				num5 = *uParam4;
				func_159(&num5, uParam4->f_11, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(func_153(num5), func_152(num5), func_151(num5));
				AUDIO::STOP_SOUND(uParam4->f_10);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				return true;
			}
		
			num8 = fParam5;
			num6 = 0.1f;
			num7 = 0.9f;
			num9 = func_150((num8 - num6) / (num7 - num6), 0f, 1f);
			num4 = SYSTEM::ROUND((float)uParam4->f_11 * num9);
			num5 = *uParam4;
			func_159(&num5, num4, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(func_153(num5), func_152(num5), func_151(num5));
		
			if (func_149(num5) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
				CLOCK::SET_CLOCK_DATE(func_149(num5), func_148(num5), func_146(num5));
		
			func_256();
			GRAPHICS::RESET_ADAPTATION(6);
			break;
	}

	return false;
}

int func_146(int iParam0) // Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_147(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_148(int iParam0) // Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

int func_149(int iParam0) // Hash - 0x826C592F ^0xDEC5AA46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

float func_150(float fParam0, float fParam1, float fParam2) // Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

int func_151(int iParam0) // Hash - 0x90B520AB ^0x257AC1C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_152(int iParam0) // Hash - 0xC188C91C ^0x48884C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_153(int iParam0) // Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_154() // Hash - 0xD6A6D4D6 ^0xA96113E0
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_113648.f_14143[i /*104*/].f_16);
	}

	return;
}

int func_155() // Hash - 0x4B7FD20D ^0xCEE4D72C
{
	Vehicle vehiclePedIsIn;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		return 0;

	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		return 0;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
		return 0;

	AUDIO::SET_VEH_RADIO_STATION(vehiclePedIsIn, "OFF");
	return 1;
}

void func_156(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Hash - 0xB807819C ^0xB807819C
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_164(iParam0, iParam1))
	{
		num = func_148(iParam1);
		num2 = func_146(iParam0);
		num3 = func_146(iParam0) - func_146(iParam1);
		num4 = func_148(iParam0) - func_148(iParam1);
		num5 = func_149(iParam0) - func_149(iParam1);
		num6 = func_153(iParam0) - func_153(iParam1);
		num7 = func_152(iParam0) - func_152(iParam1);
		num8 = func_151(iParam0) - func_151(iParam1);
	}
	else
	{
		num = func_148(iParam0);
		num2 = func_146(iParam1);
		num3 = func_146(iParam1) - func_146(iParam0);
		num4 = func_148(iParam1) - func_148(iParam0);
		num5 = func_149(iParam1) - func_149(iParam0);
		num6 = func_153(iParam1) - func_153(iParam0);
		num7 = func_152(iParam1) - func_152(iParam0);
		num8 = func_151(iParam1) - func_151(iParam0);
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
	
		num5 = num5 + func_158(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_157(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
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

float func_157(float fParam0, float fParam1, float fParam2) // Hash - 0xDB08F514 ^0x78C0BF6F
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

int func_158(int iParam0, int iParam1) // Hash - 0xD3EBACB3 ^0xD3EBACB3
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

void func_159(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_146(*uParam0);
	i = func_148(*uParam0);
	num2 = func_149(*uParam0);
	j = func_153(*uParam0);
	k = func_152(*uParam0);
	l = func_151(*uParam0);

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

	for (m = func_158(i, num); num2 > m; m = func_158(i, num))
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
	func_160(uParam0, l, k, j, num2, i, num);
	return;
}

void func_160(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x733BFBA2 ^0x733BFBA2
{
	func_166(uParam0, iParam1);
	func_167(uParam0, iParam2);
	func_168(uParam0, iParam3);
	func_163(uParam0, iParam5);
	func_162(uParam0, iParam4);
	func_161(uParam0, iParam6);
	return;
}

void func_161(var uParam0, int iParam1) // Hash - 0x15B9927E ^0x4A4674
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

void func_162(var uParam0, int iParam1) // Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_148(*uParam0);
	num2 = func_146(*uParam0);

	if (iParam1 < 1 || iParam1 > func_158(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_163(var uParam0, int iParam1) // Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_164(int iParam0, int iParam1) // Hash - 0xEA08B1 ^0xEA08B1
{
	int num;
	int num2;

	if (!func_165(iParam1) || !func_165(iParam0))
		return 1;

	num = func_146(iParam0);
	num2 = func_146(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_148(iParam0);
	num2 = func_148(iParam1);

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

	num = func_153(iParam0);
	num2 = func_153(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_152(iParam0);
	num2 = func_152(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_151(iParam0);
	num2 = func_151(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

BOOL func_165(int iParam0) // Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_151(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_152(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_153(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_146(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_148(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_149(iParam0);

	if (num6 < 1 || num6 > func_158(num5, num4))
		return false;

	return true;
}

void func_166(var uParam0, int iParam1) // Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

void func_167(var uParam0, int iParam1) // Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_168(var uParam0, int iParam1) // Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

int func_169() // Hash - 0x9E44C35 ^0xB9993D58
{
	int unk;

	func_166(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_167(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_168(&unk, CLOCK::GET_CLOCK_HOURS());
	func_162(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_163(&unk, CLOCK::GET_CLOCK_MONTH());
	func_161(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

char* func_170() // Hash - 0x6DB60FBE ^0x1C1253E8
{
	char* str;

	switch (uLocal_76[0])
	{
		case 0:
			str = "CLEARING";
			break;
	
		case 1:
			str = "OVERCAST";
			break;
	
		case 4:
			str = "CLOUDS";
			break;
	
		case 5:
			str = "CLEAR";
			break;
	
		case 8:
			str = "EXTRASUNNY";
			break;
	
		case 9:
			str = "RAIN";
			break;
	
		default:
			str = "EXTRASUNNY";
			break;
	}

	return str;
}

BOOL func_171() // Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_172() // Hash - 0x584E6C08 ^0x642E153B
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_274[0], false))
	{
		if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
		{
			func_193(&uLocal_81, 1, 0, func_194(uLocal_76[0]), 0, 1);
			func_175("SC_SEX", false, false, false);
		}
		else
		{
			func_173(uLocal_274[0], "SEX_ORAL", 10);
		}
	}

	return;
}

void func_173(Ped pedParam0, char* sParam1, int iParam2) // Hash - 0x48D349EA ^0xA208047E
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_174(iParam2), 1);
	return;
}

char* func_174(int iParam0) // Hash - 0xA17D549C ^0xC517DD52
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

BOOL func_175(char* sParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Hash - 0xA69AEDCC ^0x1C988128
{
	var unk;
	char* str;

	if (func_192())
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 24);
	
		if (bParam1)
			func_191(&unk, bParam2);
		else
			unk = { func_190(unk) };
	
		if (bParam3)
			str = "SCAUD";
		else
			str = "SHAUD";
	
		if (func_176(&uLocal_81, str, &unk, 7, 0, 0, 0))
			return true;
	}

	return false;
}

BOOL func_176(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x384540C1 ^0x384540C1
{
	func_189(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_177(sParam2, iParam3, false);
}

BOOL func_177(char* sParam0, int iParam1, BOOL bParam2) // Hash - 0x77297D51 ^0x40DC584A
{
	Global_21726 = 0;

	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == false)
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
					func_188();
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
	
		if (func_187(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_186();
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
				func_134();
			
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
			
				if (func_185())
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
		
			if (func_23())
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
		
			func_184();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_183();
		func_178();
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
		func_188();
	}

	return 0;
}

void func_178() // Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_179())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_179() // Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (PLAYER::PLAYER_ID() == func_182())
		return false;

	if (func_180(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_180(Player plParam0) // Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_181(plParam0, 20);
}

BOOL func_181(Player plParam0, int iParam1) // Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

Player func_182() // Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_183() // Hash - 0xEB26B6A8 ^0x5D52FC48
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

void func_184() // Hash - 0xCD8A4D28 ^0xCD8A4D28
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

BOOL func_185() // Hash - 0x9A999369 ^0x4033F7BF
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

void func_186() // Hash - 0xA5A75755 ^0x610A5F55
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

BOOL func_187(int iParam0, int iParam1) // Hash - 0xA14C4D3F ^0xA6034F77
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

void func_188() // Hash - 0xE32CF1EF ^0xB9A7BEB2
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

void func_189(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Hash - 0xC6B752B2 ^0xC6B752B2
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

struct<6> func_190(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Hash - 0x481483AE ^0x8D623D8B
{
	int num;

	TEXT_LABEL_APPEND_STRING(&uParam0, "_", 24);
	num = uLocal_76[0];
	TEXT_LABEL_APPEND_INT(&uParam0, num, 24);
	return uParam0;
}

void func_191(char* sParam0, BOOL bParam1) // Hash - 0xCCA605AE ^0xF4677CB
{
	TEXT_LABEL_APPEND_STRING(sParam0, "_", 24);

	if (func_77() == 2)
		TEXT_LABEL_APPEND_STRING(sParam0, "T", 24);
	else if (func_77() == 0)
		TEXT_LABEL_APPEND_STRING(sParam0, "M", 24);
	else if (func_77() == 1)
		TEXT_LABEL_APPEND_STRING(sParam0, "F", 24);

	if (bParam1)
		*sParam0 = { func_190(*sParam0) };

	return;
}

BOOL func_192() // Hash - 0x1F9E7CC4 ^0x42BC08EF
{
	if (HUD::IS_MESSAGE_BEING_DISPLAYED() || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() || Global_21725 != 0)
		return false;

	return true;
}

void func_193(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Hash - 0x6C235EE0 ^0x9E57F206
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

char* func_194(int iParam0) // Hash - 0xE6862179 ^0x35490227
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
	
		case 1:
			return "Nikki";
	
		case 2:
			return "Chastity";
	
		case 3:
			return _("Cheetah");
	
		case 4:
			return "Sapphire";
	
		case 5:
			return _("Infernus");
	
		case 6:
			return "Fufu";
	
		case 7:
			return "Peach";
	
		case 8:
			return "TaxiLiz";
	
		case 9:
			return "REHH2Hiker";
	}

	return "Invalid name";
}

float func_195() // Hash - 0xDDD97505 ^0xDDD97505
{
	switch (uLocal_76[0])
	{
		case 1:
			return 325.6f;
	
		case 0:
			return 52.89f;
	
		case 4:
			return 14.5f;
	
		case 5:
			return 43.85f;
	
		case 8:
			return 193.5f;
	
		case 9:
			return 233.2f;
	}

	return 0f;
}

Vector3 func_196(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3) // Hash - 0x516F68C3 ^0x1C5F4134
{
	var groundZ;

	vParam1.f_2 = vParam1.f_2 + 0.15f;

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam1, &groundZ, false, false))
		vParam1.f_2 = groundZ;

	if (func_197(pedParam0))
		ENTITY::SET_ENTITY_COORDS(pedParam0, vParam1, true, false, false, true);

	return vParam1;
}

BOOL func_197(Ped pedParam0) // Hash - 0x251F0A94 ^0x6A446318
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	return !ENTITY::IS_ENTITY_DEAD(pedParam0, false);
}

Vector3 func_198() // Hash - 0x132FCD27 ^0x132FCD27
{
	switch (uLocal_76[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
	
		case 0:
			return -162.4315f, -1635.1072f, 32.6529f;
	
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
	
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
	
		case 8:
			return -28.5266f, -1565.7926f, 28.918f;
	
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
	}

	return 0f, 0f, 0f;
}

void func_199(var uParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Hash - 0x1D042B44 ^0x81FB386C
{
	Vehicle playersLastVehicle;

	if (iParam4 == 1)
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), SPC_DEACTIVATE_GADGETS);

	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);

	if (bParam7)
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);

	if (!bParam1 && bParam6)
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);
	else
		CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, true, false, 0);

	if (bParam1)
	{
		HUD::CLEAR_HELP(true);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
				CAM::SET_CAM_ACTIVE(uParam0->f_4, false);
		
			CAM::DESTROY_CAM(uParam0->f_4, true);
		}
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	
		playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	
		if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
			ENTITY::SET_ENTITY_VISIBLE(playersLastVehicle, true, false);
	
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
	
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}

	func_15(bParam1, true, false, false, false, false, false);
	func_154();

	if (!bParam1 && bParam5)
		if (uParam0->f_5)
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		else
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);

	if (!bParam1)
		if (CAM::IS_SCREEN_FADED_OUT())
			CAM::DO_SCREEN_FADE_IN(250);

	if (!bParam1)
		if (Global_113648.f_32751.f_4801 != -15)
			Global_113648.f_32751.f_4801 = func_169();

	return;
}

float func_200(int* piParam0) // Hash - 0x828E31ED ^0x7E930FA0
{
	if (func_10(piParam0))
		if (func_6(piParam0))
			return piParam0->f_2;
		else
			return func_5(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return 0f;
}

void func_201() // Hash - 0xC6AA4EB0 ^0xC6AA4EB0
{
	int i;
	var unk;
	var unk14;
	var unk27;

	unk = 4;
	unk14 = 4;
	unk27 = 4;
	func_202(&unk, &unk14, &unk27);

	for (i = 0; i < 4; i = i + 1)
	{
		if (!CAM::DOES_CAM_EXIST(uLocal_284[i]))
		{
			uLocal_284[i] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), unk[i /*3*/], unk14[i /*3*/], unk27[i], false, 2);
			CAM::SHAKE_CAM(uLocal_284[i], "HAND_SHAKE", 0.3f);
		}
	}

	uLocal_289.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
	CAM::ADD_CAM_SPLINE_NODE(uLocal_289.f_4, unk[0 /*3*/], unk14[0 /*3*/], 6000, 3, 2);
	CAM::ADD_CAM_SPLINE_NODE(uLocal_289.f_4, unk[1 /*3*/], unk14[1 /*3*/], 6000, 3, 2);
	CAM::SET_CAM_FOV(uLocal_289.f_4, unk27[0]);
	return;
}

void func_202(var uParam0, var uParam1, var uParam2) // Hash - 0xF0EAE615 ^0xF0EAE615
{
	switch (uLocal_76[0])
	{
		case 1:
			uParam0->[0 /*3*/] = { 140.9085f, -1885.5271f, 25.6959f };
			uParam1->[0 /*3*/] = { -9.0308f, 0f, 126.3829f };
			uParam2->[0] = 40f;
			uParam0->[1 /*3*/] = { 141.712f, -1884.935f, 30.7241f };
			uParam1->[1 /*3*/] = { 4.7025f, 0f, 129.5531f };
			uParam2->[1] = 40f;
			uParam0->[2 /*3*/] = { 139.18987f, -1885.8654f, 24.96737f };
			uParam1->[2 /*3*/] = { -3.535496f, 0.081819f, 135.13081f };
			uParam2->[2] = 50f;
			uParam0->[3 /*3*/] = { 133.9669f, -1893.2922f, 23.9573f };
			uParam1->[3 /*3*/] = { -1.8669f, -0.0329f, -5.5828f };
			uParam2->[3] = 50f;
			break;
	
		case 0:
			uParam0->[0 /*3*/] = { -186.5408f, -1629.3278f, 35.8275f };
			uParam1->[0 /*3*/] = { -1.5588f, 0f, -118.8025f };
			uParam2->[0] = 40f;
			uParam0->[1 /*3*/] = { -186.1923f, -1629.5049f, 48.7132f };
			uParam1->[1 /*3*/] = { -1.2745f, 0f, -116.9616f };
			uParam2->[1] = 40f;
			uParam0->[2 /*3*/] = { -184.9595f, -1632.1932f, 36.32303f };
			uParam1->[2 /*3*/] = { -3.262451f, 0.073971f, -100.67564f };
			uParam2->[2] = 40f;
			uParam0->[3 /*3*/] = { -164.7078f, -1632.2499f, 34.0944f };
			uParam1->[3 /*3*/] = { -3.7303f, 0.0222f, 108.1824f };
			uParam2->[3] = 40f;
			break;
	
		case 4:
			uParam0->[0 /*3*/] = { -208.6886f, 112.8581f, 73.0855f };
			uParam1->[0 /*3*/] = { -0.1055f, 0f, -156.0082f };
			uParam2->[0] = 40f;
			uParam0->[1 /*3*/] = { -208.9068f, 113.3747f, 85.2889f };
			uParam1->[1 /*3*/] = { 3.8438f, 0f, -157.0767f };
			uParam2->[1] = 40f;
			uParam0->[2 /*3*/] = { -206.23572f, 106.94099f, 72.07555f };
			uParam1->[2 /*3*/] = { -11.58381f, 0.084975f, -158.97023f };
			uParam2->[2] = 45f;
			uParam0->[3 /*3*/] = { -197.6886f, 94.7063f, 69.814f };
			uParam1->[3 /*3*/] = { 0.5155f, -0.0266f, 48.8652f };
			uParam2->[3] = 45f;
			break;
	
		case 5:
			uParam0->[0 /*3*/] = { -871.6285f, 520.8466f, 93.1945f };
			uParam1->[0 /*3*/] = { -0.1377f, -1.3933f, -105.9309f };
			uParam2->[0] = 40f;
			uParam0->[1 /*3*/] = { -871.5255f, 521.1066f, 104.6356f };
			uParam1->[1 /*3*/] = { 3.1118f, -1.3933f, -105.9309f };
			uParam2->[1] = 40f;
			uParam0->[2 /*3*/] = { -866.6436f, 514.61206f, 92.90275f };
			uParam1->[2 /*3*/] = { -5.957637f, -1.324997f, -101.906235f };
			uParam2->[2] = 40f;
			uParam0->[3 /*3*/] = { -849.5522f, 514.2322f, 91.0095f };
			uParam1->[3 /*3*/] = { -1.626f, -1.3198f, 92.3739f };
			uParam2->[3] = 40f;
			break;
	
		case 8:
			uParam0->[0 /*3*/] = { -27.698f, -1584.6459f, 31.1034f };
			uParam1->[0 /*3*/] = { 0.0044f, 0f, -1.9117f };
			uParam2->[0] = 40f;
			uParam0->[1 /*3*/] = { -27.698f, -1584.6459f, 40.4849f };
			uParam1->[1 /*3*/] = { 7.981f, 0f, -1.9117f };
			uParam2->[1] = 40f;
			uParam0->[2 /*3*/] = { -28.639044f, -1579.7404f, 30.824232f };
			uParam1->[2 /*3*/] = { -7.527712f, 0.030218f, -14.330508f };
			uParam2->[2] = 40f;
			uParam0->[3 /*3*/] = { -28.6719f, -1568.0903f, 29.7492f };
			uParam1->[3 /*3*/] = { -1.5414f, 0f, -168.6005f };
			uParam2->[3] = 40f;
			break;
	
		case 9:
			uParam0->[0 /*3*/] = { 3323.6306f, 5148.861f, 20.9592f };
			uParam1->[0 /*3*/] = { 1.1547f, 1.0064f, 21.8733f };
			uParam2->[0] = 40f;
			uParam0->[1 /*3*/] = { 3323.844f, 5148.672f, 28.2303f };
			uParam1->[1 /*3*/] = { 11.4168f, 1.0064f, 22.8025f };
			uParam2->[1] = 40f;
			uParam0->[2 /*3*/] = { 3328.9038f, 5157.8184f, 20.579899f };
			uParam1->[2 /*3*/] = { -3.634001f, 1.039937f, 30.448088f };
			uParam2->[2] = 40f;
			uParam0->[3 /*3*/] = { 3315.3682f, 5171.7715f, 18.9066f };
			uParam1->[3 /*3*/] = { -2.8773f, 1.0064f, -103.0585f };
			uParam2->[3] = 40f;
			break;
	}

	return;
}

void func_203(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3) // Hash - 0x3A9CF293 ^0xAA33458D
{
	float num;
	float num2;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		TASK::SET_PED_PATH_AVOID_FIRE(pedParam0, true);
	
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_PERFORM_SEQUENCE) != 1)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_339);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_339);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16777216);
		
			if (pedParam0 == PLAYER::PLAYER_PED_ID())
			{
				num = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(pedParam0, true), uLocal_302);
				num2 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(pedParam0, true), uLocal_305);
			
				if (num2 < num)
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_274[0], 0);
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_204(), 0, 552, -1);
				else
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_302, 1f, -1, 0.25f, 64, 1193033728);
			}
		
			if (pedParam0 != PLAYER::PLAYER_PED_ID())
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_204(), 0, 546, -1);
				else
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, 1f, -1, 0.25f, 1, 1193033728);
			
				if (func_25(pedParam0, vParam1, true) > 5f)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "gestures@f@standing@casual", "gesture_come_here_soft", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0, false, false, false);
				}
			}
		
			TASK::CLOSE_SEQUENCE_TASK(iLocal_339);
			TASK::TASK_PERFORM_SEQUENCE(pedParam0, iLocal_339);
		}
	}

	return;
}

char* func_204() // Hash - 0x778D7685 ^0xEA3E3EAD
{
	char* str;

	if (uLocal_76[0] == 1)
		str = "BC_NIKKI_H_F";

	return str;
}

void func_205(Ped pedParam0, Vehicle veParam1) // Hash - 0xDC6D8076 ^0x8888286D
{
	if (!PED::IS_PED_INJURED(pedParam0) && !ENTITY::IS_ENTITY_DEAD(veParam1, false))
		TASK::TASK_VEHICLE_PARK(pedParam0, veParam1, uLocal_308, fLocal_327, 3, 1092616192, false);

	return;
}

char* func_206() // Hash - 0x306ACA3A ^0xBAFC68AF
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_207() // Hash - 0x5ED825D7 ^0x3F6049B2
{
	if (func_77() == 0)
		return "facials@p_m_zero@variations@happy";
	else if (func_77() == 1)
		return "facials@p_m_one@variations@happy";
	else if (func_77() == 2)
		return "facials@p_m_two@variations@happy";

	return "facials@p_m_zero@variations@happy";
}

void func_208() // Hash - 0xB01BE95B ^0xDC41473A
{
	sLocal_276 = "move_p_m_one_idles@generic";
	STREAMING::REQUEST_ANIM_DICT(sLocal_276);
	return;
}

BOOL func_209(Vehicle veParam0) // Hash - 0x5EB36C53 ^0x4568F726
{
	if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("BLIMP")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("CARGOBOB")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("CARGOBOB2")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("CARGOBOB3")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("BUZZARD")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("BUZZARD2")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("MAVERICK")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("POLMAV")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("ANNIHILATOR")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("FROGGER")))
		return true;
	else if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("FROGGER2")))
		return true;

	return false;
}

BOOL func_210(var uParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4, float fParam5) // Hash - 0x3FDE1CB0 ^0xD5ECAFD2
{
	if (func_212(uParam0))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(*uParam0);
	
		if (!func_211(fParam1))
		{
			ENTITY::SET_ENTITY_COORDS(*uParam0, fParam1, true, false, false, true);
		
			if (bParam4)
				ENTITY::SET_ENTITY_HEADING(*uParam0, fParam5);
		
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 1084227584);
		}
	
		return 1;
	}

	return 0;
}

BOOL func_211(float fParam0, var uParam1, var uParam2) // Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_212(var uParam0) // Hash - 0x589CD941 ^0xF6D8379C
{
	Vehicle playersLastVehicle;

	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
	{
		if (!func_144(playersLastVehicle))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(playersLastVehicle, PLAYER::PLAYER_PED_ID(), uLocal_63, false, true, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(playersLastVehicle);
				ENTITY::SET_ENTITY_COLLISION(playersLastVehicle, false, false);
				ENTITY::SET_ENTITY_VISIBLE(playersLastVehicle, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(playersLastVehicle, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, true);
				*uParam0 = playersLastVehicle;
				return true;
			}
		}
	}

	return false;
}

BOOL func_213(int iParam0) // Hash - 0x7FAC01B4 ^0x9388B6EC
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
			Global_27 = MISC::GET_GAME_TIMER();
	
		Global_28 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_27 > iParam0)
		{
			if (func_214())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_214() // Hash - 0x57459B9C ^0x9A36D842
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

void func_215(BOOL bParam0) // Hash - 0x180EE9E8 ^0x535A0DA5
{
	var unk;
	float num;

	func_65();

	if (ENTITY::IS_ENTITY_DEAD(uLocal_274[0], false))
		return;

	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_308 + ({ 0f, 1f, 1f } * { 10f, 10f, 10f }), uLocal_308 + ({ 0f, -1f, -1f } * { 10f, 10f, 10f }), false, true);
	num = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_274[0], true));

	if (iLocal_78 != 9)
	{
		if (num >= 200f / 2f && func_192() && !func_267(iLocal_333, 2) || func_254(uLocal_274[0], false))
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_281))
				HUD::REMOVE_BLIP(&blLocal_281);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_280))
				HUD::REMOVE_BLIP(&blLocal_280);
		
			func_251(0);
			func_84(_("Return to ~b~~a~.~s~"), uLocal_76[0]);
			iLocal_78 = 9;
		}
	}

	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (iLocal_78 != 8)
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_281))
				HUD::REMOVE_BLIP(&blLocal_281);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_280))
				HUD::REMOVE_BLIP(&blLocal_280);
		
			iLocal_78 = 8;
		}
	}

	if (func_240(uLocal_274[0], &uLocal_267, &uLocal_264))
		func_66(4);

	if (iLocal_78 <= 1)
		func_259(true);

	switch (iLocal_78)
	{
		case 0:
			iLocal_79 = 0;
		
			if (func_192())
			{
				if (!func_267(iLocal_333, 1))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_274[0], true);
					func_84(_("Meet ~b~~a~~s~ behind the club."), uLocal_76[0]);
					func_251(0);
					func_27(&iLocal_333, 1);
				}
			
				iLocal_78 = 1;
			}
			break;
	
		case 1:
			iLocal_79 = 1;
			unk = { func_71(uLocal_76[0]) };
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				veLocal_340 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				iLocal_334 = ENTITY::GET_ENTITY_HEALTH(veLocal_340);
			}
		
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_274[0], true), 3f, 3f, 3f, false, true, 0) || VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_340, false) && func_239(veLocal_340, uLocal_274[0], true) <= 10f)
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_274[0], false);
			
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_340) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veLocal_340) < 1 || !bParam0 && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(veLocal_340)))
				{
					if (!func_70(_("Get a larger vehicle to take ~a~ home."), &unk))
					{
						func_67(_("Get a larger vehicle to take ~a~ home."), uLocal_76[0], false);
						func_173(uLocal_274[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					HUD::CLEAR_HELP(true);
					TASK::CLEAR_PED_TASKS(uLocal_274[0]);
					func_237();
				
					if (!func_267(iLocal_333, 2))
						func_27(&iLocal_333, 2);
				
					func_236();
					func_86();
					func_229(39, true);
					func_229(40, true);
					func_229(41, true);
					func_229(42, true);
					func_229(43, true);
					func_229(44, true);
					iLocal_78 = 2;
				}
			}
			else if (func_70(_("Get a larger vehicle to take ~a~ home."), &unk))
			{
				HUD::CLEAR_HELP(true);
			}
			break;
	
		case 2:
			iLocal_79 = 2;
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_274[0], false))
					iLocal_78 = 3;
			}
			else
			{
				func_173(uLocal_274[0], "NEED_A_VEHICLE", 10);
				iLocal_78 = 3;
			}
			break;
	
		case 3:
			iLocal_79 = 3;
			func_226();
		
			if (!func_171())
			{
				if (func_192())
				{
					PATHFIND::SET_ROADS_IN_AREA(uLocal_308 - { 3f, 3f, 3f }, uLocal_308 + { 3f, 3f, 3f }, false, true);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_308 - { 3f, 3f, 3f }, uLocal_308 + { 3f, 3f, 3f }, false, true);
					MISC::CLEAR_AREA_OF_VEHICLES(uLocal_308, 10f, false, false, false, false, false, false, 0);
					MISC::CLEAR_AREA_OF_PEDS(uLocal_308, 10f, 0);
					iLocal_301 = PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_308 - { 35f, 35f, 35f }, uLocal_308 + { 35f, 35f, 35f }, false, true, true, true);
					func_8(&uLocal_246);
				
					if (bParam0)
					{
						func_91(true);
						func_225();
					}
					else
					{
						iLocal_74 = 3;
					}
				}
			}
			break;
	
		case 4:
			iLocal_79 = 4;
			func_222(num, uLocal_311);
			func_216();
		
			if (func_4(&uLocal_258) > 45f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_320) > 100f * 100f && func_25(PLAYER::PLAYER_PED_ID(), uLocal_311, true) > 100f)
			{
				if (uLocal_76[0] == 8)
					func_175("SC_WALK", false, false, false);
				else
					func_173(uLocal_274[0], "GENERIC_FUCK_YOU", 10);
			
				func_66(3);
			}
			else if (func_254(uLocal_274[0], true))
			{
				if (HUD::DOES_BLIP_EXIST(blLocal_281))
					HUD::REMOVE_BLIP(&blLocal_281);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_280))
					HUD::REMOVE_BLIP(&blLocal_280);
			
				func_251(0);
				func_84(_("Return to ~b~~a~.~s~"), uLocal_76[0]);
				iLocal_78 = 9;
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_308, 3f, 3f, 2f, true, true, 2) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_305, 5f, 5f, 2f, true, true, 1))
			{
				if (func_36(true, false, true))
					iLocal_74 = 1;
			}
			else if (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				func_225();
			}
			break;
	
		case 5:
			iLocal_79 = 5;
			func_222(num, uLocal_308);
			func_216();
			func_237();
		
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_308, 1f, 1f, 2f, true, true, 2))
			{
				iLocal_78 = 6;
			}
			else
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
					func_225();
				else
					func_61(uLocal_308);
			
				if (func_107(_("Walk her to the door.")))
					HUD::CLEAR_HELP(true);
			}
			break;
	
		case 6:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (func_59(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 3f, 2, 0.5f, false, true, false))
					{
						func_58();
						func_203(uLocal_274[0], uLocal_305);
					
						if (uLocal_76[0] == 9 || uLocal_76[0] == 8)
							func_175("SC_GO_DOOR", false, false, false);
						else
							func_175("SC_FOLLOWD", false, false, true);
					
						iLocal_78 = 7;
					}
				}
			}
			else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_274[0]);
				func_225();
				HUD::CLEAR_HELP(true);
			}
			break;
	
		case 7:
			iLocal_79 = 7;
		
			if (!func_171() && !HUD::IS_MESSAGE_BEING_DISPLAYED() && !func_267(iLocal_333, 2048))
			{
				unk = { func_71(uLocal_76[0]) };
				func_85(_("Follow ~b~~a~~s~ to her home."), &unk, 7500, 1);
				func_86();
				func_251(0);
				func_27(&iLocal_333, 2048);
			}
		
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_311, 5f, 5f, 2f, false, true, 1) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_305, 5f, 5f, 2f, false, true, 1) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				if (func_36(true, false, true))
					iLocal_74 = 1;
			break;
	
		case 8:
			if (!func_267(iLocal_331, 4096) && !func_171() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_274[0]))
			{
				if (iLocal_79 > 1 || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_274[0], true)) < 3f * 3f)
				{
					func_173(uLocal_274[0], "GENERIC_FRIGHTENED_MED", 10);
					func_27(&iLocal_331, 4096);
				}
			}
		
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				iLocal_78 = iLocal_79;
			break;
	
		case 9:
			if (num > 200f)
			{
				func_66(1);
			}
			else if (num <= 200f / 2f && !func_254(uLocal_274[0], true))
			{
				HUD::CLEAR_PRINTS();
				iLocal_78 = iLocal_79;
			
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
					func_225();
			}
			break;
	}

	return;
}

void func_216() // Hash - 0xC9365DD7 ^0xC9365DD7
{
	char* animDict;
	BOOL flag;
	BOOL isEntityPlayingAnim;
	BOOL isPedShooting;
	BOOL flag2;
	BOOL isPedInAnyVehicle;
	BOOL flag3;

	if (!func_267(iLocal_333, 16))
		if (func_217())
			func_27(&iLocal_333, 16);
		else
			return;

	animDict = func_100(uLocal_274[0], false, false);

	if (!func_267(iLocal_333, 8))
	{
		if (!func_267(iLocal_333, 4))
		{
			if (!func_267(iLocal_331, 256))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
					func_175("SC_BJ", false, false, false);
			
				func_27(&iLocal_331, 256);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT(animDict);
				func_27(&iLocal_333, 4);
			}
		}
		else if (STREAMING::HAS_ANIM_DICT_LOADED(animDict))
		{
			func_94(uLocal_274[0], true, true, -1, true);
			PED::SET_PED_KEEP_TASK(uLocal_274[0], true);
			func_7(&uLocal_255);
			func_27(&iLocal_333, 8);
		}
	}
	else if (func_267(iLocal_333, 4))
	{
		flag = false;
		isEntityPlayingAnim = ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_274[0], animDict, func_95(4, true, true, func_98(veLocal_340)), 3);
		isPedShooting = PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID());
		flag2 = TASK::GET_SCRIPT_TASK_STATUS(uLocal_274[0], SCRIPT_TASK_PERFORM_SEQUENCE) == 7;
		isPedInAnyVehicle = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
		flag3 = false;
	
		if (isPedInAnyVehicle)
			if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				flag3 = ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 5f;
	
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_4(&uLocal_255) > 35f || SYSTEM::VDIST(uLocal_308, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 75f || isPedShooting || flag3)
		{
			if (!flag2 && !isEntityPlayingAnim)
				TASK::TASK_PLAY_ANIM(uLocal_274[0], animDict, func_95(4, true, true, func_98(veLocal_340)), 8f, -8f, -1, 0, 0, false, false, false);
		
			if (isPedShooting)
				iLocal_335 = 2000;
		
			flag = true;
		}
		else if (flag2)
		{
			flag = true;
		}
	
		if (isEntityPlayingAnim)
			func_256();
	
		if (flag && flag2 && !isEntityPlayingAnim)
		{
			if (!isPedShooting && isPedInAnyVehicle)
			{
				if (flag3)
				{
					ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) - SYSTEM::CEIL((float)PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()) * 0.1f), 0);
					func_173(PLAYER::PLAYER_PED_ID(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_173(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", 10);
				}
			
				func_27(&iLocal_331, 128);
			}
		
			STREAMING::REMOVE_ANIM_DICT(animDict);
			func_73(&iLocal_333, 4);
		}
	
		if (!func_267(iLocal_331, 64))
		{
			if (func_4(&uLocal_255) > 10f)
			{
				func_173(PLAYER::PLAYER_PED_ID(), "SEX_GENERIC", 10);
				func_173(uLocal_274[0], "SEX_ORAL", 10);
				func_27(&iLocal_331, 64);
			}
		}
	
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		func_256();
	}

	return;
}

BOOL func_217() // Hash - 0xE8C2F411 ^0x52497263
{
	Vector3 vector;
	var unk3;

	if (!func_192())
		return false;

	func_64(&vector, &unk3, false);

	if (SYSTEM::VDIST(uLocal_308, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 75f * 2f && SYSTEM::VDIST(vector, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 75f / 2f && func_116(uLocal_76[0]) > 1 && func_218())
		return true;

	return false;
}

BOOL func_218() // Hash - 0x50072E62 ^0x19AD8EC8
{
	Vehicle vehiclePedIsIn;
	Hash entityModel;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return false;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
	
		if (func_220(entityModel, false) && func_219(vehiclePedIsIn))
			return true;
	}

	return false;
}

int func_219(Vehicle veParam0) // Hash - 0x13CBDF45 ^0x4E7F803E
{
	int i;
	int modType;
	Hash hashKey;
	var unk;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
		{
			for (i = 0; i < 49; i = i + 1)
			{
				modType = i;
			
				if (modType != 17 && modType != 18 && modType != 19 && modType != 20 && modType != 21 && modType != 22)
				{
					if (VEHICLE::GET_VEHICLE_MOD(veParam0, modType) != -1)
					{
						TEXT_LABEL_ASSIGN_STRING(&unk, VEHICLE::GET_MOD_TEXT_LABEL(veParam0, modType, VEHICLE::GET_VEHICLE_MOD(veParam0, modType)), 16);
						hashKey = MISC::GET_HASH_KEY(&unk);
					
						if (hashKey != 0)
							if (hashKey == MISC::GET_HASH_KEY(_("Stunt Cage")))
								return 0;
					}
				}
			}
		}
	
		switch (ENTITY::GET_ENTITY_MODEL(veParam0))
		{
			case joaat("PEYOTE2"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 4))
					return 0;
				break;
		
			case joaat("PEYOTE3"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 4) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case joaat("COQUETTE4"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case joaat("ZORRUSSO"):
				if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == -1)
					return 0;
				break;
		
			case joaat("MANANA2"):
				if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case joaat("RT3000"):
				if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == -1 || VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == 3)
					return 0;
				break;
		
			case joaat("ENTITY3"):
				if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == 0)
					return 0;
				break;
		}
	
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_STANDARD"):
			case joaat("LAYOUT_STD_EXITFIXUP"):
			case joaat("LAYOUT_STD_HABANERO"):
			case joaat("LAYOUT_STD_STRETCH"):
			case joaat("LAYOUT_STD_HIGHWINDOW"):
			case joaat("LAYOUT_RANGER"):
			case joaat("LAYOUT_RANGER_SWAT"):
			case joaat("LAYOUT_4X4"):
			case joaat("LAYOUT_BISON"):
			case joaat("LAYOUT_VAN_BODHI"):
			case joaat("LAYOUT_STD_LOWROOF"):
			case joaat("LAYOUT_STD_STRATUM"):
			case joaat("LAYOUT_VAN_ROOSEVELT"):
			case joaat("LAYOUT_STD_HUNTLEY"):
			case joaat("LAYOUT_STD_WARRENER"):
			case joaat("LAYOUT_LOW_BLADE"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_STD_KURUMA"):
			case joaat("LAYOUT_STD_BLISTA2"):
			case joaat("LAYOUT_STD_CHINO"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_STD_LOWRIDER"):
			case joaat("LAYOUT_STD_LOWRIDER_CHINO"):
			case joaat("LAYOUT_STD_LOWRIDER_SIDEDOOR"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_STD_BALLER4"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_STD_LOWRIDER2"):
			case joaat("LAYOUT_STD_LOWRIDER2_SIDEDOOR"):
			case joaat("LAYOUT_STD_LOWRIDER2_SLAMVAN"):
			case joaat("LAYOUT_STD_WINDSOR2"):
			case joaat("LAYOUT_STD_XLS"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_STD_OMNIS"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_TORERO"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_STD_NEON"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_RANGER_TOROS"):
			case joaat("LAYOUT_STD_DEVIANT"):
			case joaat("LAYOUT_STD_DRAFTER"):
			case joaat("LAYOUT_STD_DYNASTY"):
			case joaat("LAYOUT_STD_PARAGON"):
			case joaat("LAYOUT_STD_ZION3"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_PEYOTE2"):
			case joaat("LAYOUT_LOW_NEO"):
			case joaat("LAYOUT_RANGER_NOVAK"):
			case joaat("LAYOUT_RANGER_EVERON"):
			case joaat("LAYOUT_LOW_PEYOTE3"):
			case joaat("LAYOUT_RANGER_SEMINOLE2"):
			case joaat("LAYOUT_LOW_CALICO"):
			case joaat("LAYOUT_STD_CYPHER"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_STANDARD_SULTAN3"):
			case joaat("LAYOUT_STD_WARRENER2"):
			case joaat("LAYOUT_LOW_ZR350"):
			case joaat("LAYOUT_LOW_IGNUS"):
			case joaat("LAYOUT_STANDARD_BUFFALO4"):
			case joaat("LAYOUT_STD_ASTRON"):
			case joaat("LAYOUT_STD_CINQUEMILA"):
			case joaat("LAYOUT_STD_DEITY"):
			case joaat("LAYOUT_STD_GRANGER2"):
			case joaat("LAYOUT_STD_I-WAGEN"):
			case joaat("LAYOUT_LOW_ZENO"):
			case joaat("LAYOUT_STD_S95"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
			case joaat("LAYOUT_STD_RHINEHART"):
			case joaat("LAYOUT_STANDARD_SENTINEL4"):
			case joaat("LAYOUT_LOW_TORERO2"):
			case joaat("LAYOUT_STD_GREENWOOD"):
			case -607167196:
			case -1809273022:
			case 342836334:
			case -581105676:
				return 1;
		}
	
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0) == joaat("LAYOUT_STD_RIPLEY") && ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("SLAMVAN"))
			return 1;
	
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("WEEVIL") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("BRIOSO2"))
			return 1;
	
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("BRIOSO3"))
			return 1;
	}

	return 0;
}

int func_220(Hash hParam0, BOOL bParam1) // Hash - 0xFACD3603 ^0xD11AEDC7
{
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0) || VEHICLE::IS_THIS_MODEL_A_BIKE(hParam0))
		return 0;

	if (func_221(hParam0))
		return 0;

	if (!bParam1)
		if (hParam0 == joaat("POLICE") || hParam0 == joaat("POLICE2") || hParam0 == joaat("POLICE3") || hParam0 == joaat("POLICE4") || hParam0 == joaat("FBI") || hParam0 == joaat("FBI2") || hParam0 == joaat("CADDY") || hParam0 == joaat("CADDY2"))
			return 0;

	if (hParam0 == joaat("ISSI2") || hParam0 == joaat("HOTKNIFE") || hParam0 == joaat("JB700") || hParam0 == joaat("JESTER") || hParam0 == joaat("JESTER2") || hParam0 == joaat("STROMBERG") || hParam0 == joaat("BARRAGE") || hParam0 == joaat("KAMACHO") || hParam0 == joaat("GB200") || hParam0 == joaat("FAGALOA") || hParam0 == joaat("TEZERACT") || hParam0 == joaat("SWINGER") || hParam0 == joaat("IMPERATOR") || hParam0 == joaat("LOCUST") || hParam0 == joaat("SCHLAGEN") || hParam0 == joaat("OUTLAW") || hParam0 == joaat("COMET7") || hParam0 == joaat("YOUGA4") || hParam0 == joaat("SM722"))
		return 0;

	return 1;
}

BOOL func_221(Hash hParam0) // Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLMAV"):
		case joaat("POLICEB"):
		case joaat("POLICET"):
		case joaat("POLICEOLD2"):
		case joaat("POLICEOLD1"):
		case joaat("SHERIFF"):
		case joaat("SHERIFF2"):
			return true;
	}

	return false;
}

void func_222(float fParam0, Vector3 vParam1, var uParam2, var uParam3) // Hash - 0x3F3C7D6F ^0x36CDEDA6
{
	Vehicle vehiclePedIsIn;
	float entitySpeed;
	float vehicleEstimatedMaxSpeed;

	if (!func_267(iLocal_331, 262144))
	{
		if (func_224(uLocal_274[0]))
		{
			if (uLocal_76[0] == 8)
				func_175("SC_STEALC", false, false, false);
			else
				func_173(uLocal_274[0], "GENERIC_SHOCKED_MED", 10);
		
			func_8(&uLocal_249);
			func_27(&iLocal_331, 262144);
		}
	}
	else if (func_4(&uLocal_249) > 10f)
	{
		func_73(&iLocal_331, 262144);
		func_8(&uLocal_249);
	}

	if (fParam0 > 5f || !func_192() || func_267(iLocal_333, 4))
		return;

	if (!func_267(iLocal_331, 1) && !func_267(iLocal_331, 128))
	{
		if (SYSTEM::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 75f)
		{
			if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				if (func_175("SC_NEAR", false, false, false))
					func_27(&iLocal_331, 1);
			else
				func_27(&iLocal_331, 1);
		
			MISC::CLEAR_AREA_OF_VEHICLES(uLocal_308, 5f, false, false, false, false, false, false, 0);
		}
	}

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
	{
		if (!func_267(iLocal_331, 16))
		{
			func_173(uLocal_274[0], "NEED_A_VEHICLE", 10);
			func_27(&iLocal_331, 16);
			func_8(&uLocal_246);
		}
	
		if (!func_267(iLocal_331, 4))
			func_73(&iLocal_331, 4);
	
		if (!func_267(iLocal_331, 8))
			func_73(&iLocal_331, 8);
	}
	else
	{
		entitySpeed = ENTITY::GET_ENTITY_SPEED(vehiclePedIsIn);
		vehicleEstimatedMaxSpeed = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(vehiclePedIsIn);
	
		if (entitySpeed < vehicleEstimatedMaxSpeed * 0.9f || entitySpeed > vehicleEstimatedMaxSpeed * 0.1f)
			func_8(&uLocal_252);
	
		if (!func_267(iLocal_331, 4))
		{
			if (func_4(&uLocal_246) > 15f && func_4(&uLocal_252) > 5f)
			{
				func_173(uLocal_274[0], "DRIVEN_FAST", 10);
				func_27(&iLocal_331, 4);
				func_8(&uLocal_246);
			}
		}
		else if (func_4(&uLocal_246) < 5f)
		{
			func_73(&iLocal_331, 4);
			func_8(&uLocal_246);
		}
	
		if (!func_267(iLocal_331, 8))
		{
			if (func_4(&uLocal_246) > 15f && func_4(&uLocal_252) > 5f)
			{
				func_173(uLocal_274[0], "DRIVEN_SLOW", 10);
				func_27(&iLocal_331, 4);
				func_8(&uLocal_246);
			}
		}
		else if (func_4(&uLocal_246) < 5f)
		{
			func_73(&iLocal_331, 8);
			func_8(&uLocal_246);
		}
	
		if (!func_267(iLocal_331, 131072))
		{
			if (func_223(uLocal_274[0], &iLocal_334))
			{
				if (func_4(&uLocal_249) > 5f)
				{
					func_173(uLocal_274[0], "CRASH_GENERIC_DRIVEN", 10);
					func_27(&iLocal_331, 131072);
					func_8(&uLocal_246);
				}
			}
		}
		else if (func_4(&uLocal_249) > 5f)
		{
			func_73(&iLocal_331, 131072);
			func_8(&uLocal_249);
		}
	
		if (!func_267(iLocal_331, 65536))
		{
			if (func_4(&uLocal_246) > 30f || func_4(&uLocal_246) > 10f && !func_267(iLocal_331, 32))
			{
				func_173(uLocal_274[0], "BOOTY_FLIRT", 10);
				func_27(&iLocal_331, 32);
				func_27(&iLocal_331, 524288);
				func_8(&uLocal_246);
			}
			else if (func_267(iLocal_331, 524288))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_274[0]) && func_4(&uLocal_246) > 4f)
				{
					func_173(PLAYER::PLAYER_PED_ID(), "BOOTY_FLIRT_RESP", 10);
					func_73(&iLocal_331, 524288);
				}
			}
		}
	}

	return;
}

BOOL func_223(Ped pedParam0, var uParam1) // Hash - 0xDA2790D1 ^0xA22986F5
{
	Vehicle vehiclePedIsIn;
	int entityHealth;
	int num;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(pedParam0, vehiclePedIsIn))
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(vehiclePedIsIn))
			{
				entityHealth = ENTITY::GET_ENTITY_HEALTH(vehiclePedIsIn);
				num = *uParam1 - entityHealth;
				*uParam1 = entityHealth;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(vehiclePedIsIn);
			
				if (num > 10)
					return true;
			}
		}
	}

	return false;
}

BOOL func_224(Entity eParam0) // Hash - 0x834D12B ^0xD18CC4B
{
	if (!ENTITY::IS_ENTITY_DEAD(eParam0, false))
		if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_SEEN_CAR_STOLEN, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(eParam0, PLAYER::PLAYER_PED_ID()))
			return true;

	return false;
}

void func_225() // Hash - 0xAE8C7A8D ^0x94376F62
{
	func_87();
	func_8(&uLocal_246);

	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_280))
			HUD::REMOVE_BLIP(&blLocal_280);
	
		if (!HUD::DOES_BLIP_EXIST(blLocal_281))
			blLocal_281 = func_62(uLocal_311, false);
	
		func_8(&uLocal_258);
		uLocal_320 = { ENTITY::GET_ENTITY_COORDS(uLocal_274[0], true) };
		iLocal_78 = 4;
	}
	else
	{
		func_8(&uLocal_249);
		func_61(uLocal_308);
		iLocal_78 = 5;
	}

	return;
}

void func_226() // Hash - 0x6F1DDD28 ^0x983DF1
{
	if (!func_267(iLocal_331, 1024))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_227(uLocal_76[0]))
			{
				if (!func_171())
				{
					func_173(uLocal_274[0], "NICE_CAR", 10);
					func_27(&iLocal_331, 1024);
				}
			}
		}
	}

	return;
}

BOOL func_227(int iParam0) // Hash - 0xA364DE6 ^0x638E0B83
{
	Vehicle vehiclePedIsIn;
	Hash entityModel;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
	
		if (func_228(iParam0, entityModel))
			return true;
	}

	return false;
}

BOOL func_228(int iParam0, Hash hParam1) // Hash - 0x1DF10507 ^0x1DF10507
{
	switch (hParam1)
	{
		case joaat("MANANA"):
		case joaat("TORNADO"):
		case joaat("TORNADO3"):
		case joaat("TORNADO4"):
		case joaat("ZTYPE"):
		case joaat("REGINA"):
			if (iParam0 == 0)
				return true;
			break;
	
		case joaat("BLISTA"):
		case joaat("SURGE"):
		case joaat("DILETTANTE"):
		case joaat("PENUMBRA"):
		case joaat("ASTEROPE"):
			if (iParam0 == 1)
				return true;
			break;
	
		case joaat("DOMINATOR"):
		case joaat("GAUNTLET"):
		case joaat("PHOENIX"):
		case joaat("SABREGT"):
		case joaat("BULLET"):
		case joaat("BANSHEE"):
		case joaat("PEYOTE"):
		case joaat("BUFFALO"):
		case joaat("BUFFALO2"):
			if (iParam0 == 2)
				return true;
			break;
	
		case joaat("CHEETAH"):
		case joaat("COGCABRIO"):
		case joaat("JB700"):
		case joaat("STINGERGT"):
		case joaat("MONROE"):
		case joaat("COMET2"):
		case joaat("ORACLE"):
		case joaat("ORACLE2"):
		case joaat("INTRUDER"):
		case joaat("JACKAL"):
		case joaat("EXEMPLAR"):
		case joaat("FELON"):
		case joaat("SUPERD"):
		case joaat("INFERNUS"):
		case joaat("ENTITYXF"):
		case joaat("ADDER"):
		case joaat("VACCA"):
			if (iParam0 == 3 || iParam0 == 5)
				return true;
			break;
	
		case joaat("BALLER"):
		case joaat("BISON"):
		case joaat("DUBSTA"):
		case joaat("GRANGER"):
		case joaat("PATRIOT"):
		case joaat("BALLER2"):
		case joaat("BJXL"):
		case joaat("CAVALCADE"):
		case joaat("CAVALCADE2"):
		case joaat("GRESLEY"):
		case joaat("LANDSTALKER"):
		case joaat("MESA"):
		case joaat("RANCHERXL"):
		case joaat("SANDKING"):
		case joaat("REBEL"):
		case joaat("STRETCH"):
		case joaat("ROMERO"):
		case joaat("COACH"):
		case joaat("BUS"):
			if (iParam0 == 4 || iParam0 == 7)
				return true;
			break;
	
		case joaat("SURANO"):
		case joaat("RAPIDGT2"):
		case joaat("NINEF2"):
		case joaat("ZION2"):
		case joaat("TORNADO2"):
		case joaat("SENTINEL2"):
		case joaat("ISSI2"):
		case joaat("FELON2"):
			if (iParam0 == 6 || iParam0 == 1)
				return true;
			break;
	
		case joaat("VADER"):
		case joaat("AKUMA"):
		case joaat("BAGGER"):
		case joaat("BATI"):
		case joaat("BATI2"):
		case joaat("DOUBLE"):
		case joaat("HEXER"):
		case joaat("NEMESIS"):
		case joaat("RUFFIAN"):
			if (iParam0 == 8)
				return true;
			break;
	
		case joaat("FBI"):
		case joaat("TAXI"):
		case joaat("PRANGER"):
		case joaat("AMBULANCE"):
		case joaat("POLICE3"):
			if (iParam0 == 9)
				return true;
			break;
	}

	return false;
}

void func_229(int iParam0, BOOL bParam1) // Hash - 0x64B1D886 ^0x64B1D886
{
	if (bParam1)
		if (!func_235(iParam0, 2, true))
			func_234(iParam0, 2, true);
	else if (func_235(iParam0, 2, true))
		func_230(iParam0, 2, true);

	return;
}

void func_230(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x1F4148DA ^0xB2D02435
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
		if (func_54() == 0)
		{
			address = func_232(func_233(iParam0), -1, 0);
			MISC::CLEAR_BIT(&address, iParam1);
			func_231(func_233(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

void func_231(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Hash - 0x7D768555 ^0x693A841
{
	Hash statName;

	bParam4;
	statName = Global_2805027[iParam0 /*3*/][func_76(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_232(int iParam0, int iParam1, int iParam2) // Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_76(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

int func_233(int iParam0) // Hash - 0x28E83966 ^0x9E37924F
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

void func_234(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x1F4148DA ^0x95628DB
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
		if (func_54() == 0)
		{
			address = func_232(func_233(iParam0), -1, 0);
			MISC::SET_BIT(&address, iParam1);
			func_231(func_233(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_235(int iParam0, int iParam1, BOOL bParam2) // Hash - 0xA45BEB30 ^0x6033D2A2
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_54() == 0)
			return IS_BIT_SET(func_232(func_233(iParam0), -1, 0), iParam1);
	else
		return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);

	return false;
}

void func_236() // Hash - 0x673919C0 ^0xA26F7A70
{
	if (uLocal_76[0] == 8)
		func_175("SC_GREET", false, false, false);
	else
		func_173(uLocal_274[0], "GENERIC_HI_FLIRTY", 10);

	return;
}

void func_237() // Hash - 0xF6C605C0 ^0xE08A48DE
{
	if (!PED::IS_PED_IN_GROUP(uLocal_274[0]) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_274[0], true)) < 10f)
	{
		PED::SET_PED_AS_GROUP_MEMBER(uLocal_274[0], func_238());
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_274[0], 0);
	}

	return;
}

int func_238() // Hash - 0xDED80B4D ^0xD3C18941
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

float func_239(Vehicle veParam0, Vehicle veParam1, BOOL bParam2) // Hash - 0x7B2C17A2 ^0xDF922C6D
{
	Vector3 entityCoords;
	Vector3 entityCoords2;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, false) };

	if (!ENTITY::IS_ENTITY_DEAD(veParam1, false))
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(veParam1, true) };
	else
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(veParam1, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}

BOOL func_240(Ped pedParam0, var uParam1, int* piParam2) // Hash - 0x164BFEB2 ^0x446FDA6
{
	var unk;
	Vehicle vehiclePedIsIn;

	if (!func_10(piParam2))
		func_7(piParam2);

	if (func_4(piParam2) > 3f)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (func_243(pedParam0, vehiclePedIsIn, uParam1, &unk, false, true, false, true, true))
		{
			func_241(&unk);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
				{
					if (!PED::DOES_RELATIONSHIP_GROUP_EXIST(hLocal_72))
						PED::ADD_RELATIONSHIP_GROUP("BootyCall", &hLocal_72);
				
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_72, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), hLocal_72);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, hLocal_72);
					TASK::TASK_SMART_FLEE_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				}
			}
		
			func_8(piParam2);
			return true;
		}
	}

	return false;
}

void func_241(var uParam0) // Hash - 0x948AA937 ^0x948AA937
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_242(true);
			break;
	
		case 2:
			break;
	}

	return;
}

void func_242(BOOL bParam0) // Hash - 0xCA404ED3 ^0x8C563DDE
{
	Global_112642 = 0;
	Global_112642.f_1 = -1;
	Global_112642.f_2 = -1;

	if (bParam0)
		func_124(-1);

	return;
}

BOOL func_243(Ped pedParam0, Vehicle veParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Hash - 0x33F38C47 ^0x6B79929C
{
	Ped entity2;
	BOOL flag;

	entity2 = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::IS_ENTITY_DEAD(entity2, false) && !ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		if (!func_267(*uParam2, 1))
		{
			if (func_250(pedParam0, uParam2))
			{
				*uParam3 = 1;
				return true;
			}
		}
	
		if (!func_267(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return true;
			}
		}
	
		if (!func_267(*uParam2, 4))
		{
			if (func_248(entity2, pedParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return true;
			}
		}
	
		if (!func_267(*uParam2, 8))
		{
			if (func_247(entity2, pedParam0, uParam2))
			{
				*uParam3 = 8;
				return true;
			}
		}
	
		flag = !func_267(*uParam2, 128);
	
		if (bParam4)
		{
			if (func_244(pedParam0, veParam1, true, bParam6, flag, true))
			{
				*uParam3 = 32;
				return true;
			}
		}
		else if (!func_267(*uParam2, 16))
		{
			if (func_244(pedParam0, veParam1, false, bParam6, flag, bParam8))
			{
				*uParam3 = 16;
				return true;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (bParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, entity2, true))
		{
			*uParam3 = 16;
			return true;
		}
	}

	return false;
}

BOOL func_244(Ped pedParam0, Vehicle veParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Hash - 0x3BC9CDC2 ^0xEB04BCD
{
	Vehicle playersLastVehicle;
	Vehicle playersLastVehicle2;

	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = ENTITY::GET_ENTITY_HEALTH(pedParam0);
			bLocal_59 = true;
		}
	
		iLocal_61 = ENTITY::GET_ENTITY_HEALTH(pedParam0);
		iLocal_62 = iLocal_60 - iLocal_61;
		playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	
		if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle, false))
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, playersLastVehicle, true))
				if ((float)iLocal_62 > 100f)
					return true;
	
		if (bLocal_59)
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), true))
				if ((float)iLocal_62 > 100f)
					return true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		return true;
	}

	if (!bParam3)
	{
		playersLastVehicle2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	
		if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle2, false))
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, playersLastVehicle2, true))
				return true;
	}

	if (bParam4)
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			if (PED::IS_PED_BEING_JACKED(pedParam0))
				if (PED::GET_PEDS_JACKER(pedParam0) == PLAYER::PLAYER_PED_ID())
					return true;

	if (bParam5)
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			if (ENTITY::IS_ENTITY_AT_COORD(pedParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
					return true;

	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		if (PED::WAS_PED_KILLED_BY_STEALTH(pedParam0))
			return true;

	if (func_246(PLAYER::PLAYER_PED_ID(), pedParam0))
		return true;

	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(pedParam0) && func_245(pedParam0, true) < 1.5f)
			return true;
		else if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(pedParam0, false)))
				return true;
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			return true;
	
		if (!ENTITY::IS_ENTITY_DEAD(veParam1, false))
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veParam1, PLAYER::PLAYER_PED_ID(), true))
				return true;
	}

	return false;
}

float func_245(Ped pedParam0, BOOL bParam1) // Hash - 0x79FFA778 ^0x4B7398A2
{
	return func_239(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), pedParam0, bParam1);
}

BOOL func_246(Ped pedParam0, Ped pedParam1) // Hash - 0x3BB6C07C ^0x9C1177A9
{
	int weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);

	if (weaponHash == joaat("WEAPON_PETROLCAN"))
		if (PED::IS_PED_SHOOTING(pedParam0))
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(pedParam0, true), ENTITY::GET_ENTITY_COORDS(pedParam1, true)) < 2.5f)
				if (PED::IS_PED_FACING_PED(pedParam0, pedParam1, 180f))
					return true;

	return false;
}

BOOL func_247(Ped pedParam0, Ped pedParam1, var uParam2) // Hash - 0x5F32F0C1 ^0xA09598DD
{
	if (WEAPON::IS_PED_ARMED(pedParam0, 4))
		if (PED::IS_PED_SHOOTING(pedParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(pedParam0))
			if (ENTITY::IS_ENTITY_AT_COORD(pedParam1, ENTITY::GET_ENTITY_COORDS(pedParam0, true), (float)uParam2->f_4, (float)uParam2->f_4, (float)uParam2->f_4, false, true, 0))
				return true;

	return false;
}

BOOL func_248(Ped pedParam0, Ped pedParam1, var uParam2, BOOL bParam3) // Hash - 0xCD0E467F ^0x301C1532
{
	float entityCoords;
	Vehicle vehiclePedIsIn;

	vehiclePedIsIn = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, true) };

	if (MISC::IS_BULLET_IN_AREA(entityCoords, 4f, true))
		return true;

	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(entityCoords, SYSTEM::TO_FLOAT(uParam2->f_6), true, true))
		return true;

	if (WEAPON::IS_PED_ARMED(pedParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(pedParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(pedParam1, ENTITY::GET_ENTITY_COORDS(pedParam0, true), (float)uParam2->f_6 * 3, (float)uParam2->f_6 * 3, (float)uParam2->f_6 * 3, false, true, 0))
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1), pedParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, pedParam0, 17))
					return true;
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1), false))
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1), false);
		
			if (PED::IS_PED_PLANTING_BOMB(pedParam0) || func_249(vehiclePedIsIn))
				if (ENTITY::IS_ENTITY_AT_COORD(pedParam1, ENTITY::GET_ENTITY_COORDS(pedParam0, true), (float)uParam2->f_6 * 3, (float)uParam2->f_6 * 3, (float)uParam2->f_6 * 3, false, true, 0))
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1), pedParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, pedParam0, 17))
						return true;
		}
	}

	if (bParam3)
		if (MISC::IS_PROJECTILE_IN_AREA(entityCoords - (float)uParam2->f_6, entityCoords.f_1 - (float)uParam2->f_6, entityCoords.f_2 - (float)uParam2->f_6, entityCoords + (float)uParam2->f_6, entityCoords.f_1 + (float)uParam2->f_6, entityCoords.f_2 + (float)uParam2->f_6, false))
			return true;

	return false;
}

BOOL func_249(Vehicle veParam0) // Hash - 0x210D7AE8 ^0x290C4F0C
{
	int weaponHash;
	Entity entity;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false) != 0)
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true))
					if (weaponHash == joaat("WEAPON_STICKYBOMB"))
						if (func_239(PLAYER::PLAYER_PED_ID(), veParam0, true) < 40f)
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &entity))
								if (ENTITY::IS_ENTITY_A_VEHICLE(entity) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(entity) == veParam0 || ENTITY::IS_ENTITY_A_PED(entity) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false))
									if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_ATTACK) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_ATTACK))
										return true;

	return false;
}

BOOL func_250(Ped pedParam0, var uParam1) // Hash - 0x96913365 ^0x3F8A0D70
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
				if (PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 90f))
					if (func_245(pedParam0, true) < uParam1->f_2)
						if (uParam1->f_1 == 0)
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						else if (MISC::GET_GAME_TIMER() - uParam1->f_1 > uParam1->f_3)
							return true;

	return false;
}

void func_251(int iParam0) // Hash - 0x29D2FDA8 ^0x383D5C2C
{
	var gxtEntry;

	if (HUD::DOES_BLIP_EXIST(uLocal_282[iParam0]))
		HUD::REMOVE_BLIP(&uLocal_282[iParam0]);

	uLocal_282[iParam0] = func_252(uLocal_274[iParam0], false, 145);
	gxtEntry = { func_71(uLocal_76[iParam0]) };
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_282[iParam0], &gxtEntry);
	return;
}

Blip func_252(Entity eParam0, BOOL bParam1, int iParam2) // Hash - 0xA714218A ^0xAD0F82BD
{
	Blip blip;

	blip = func_253(eParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2028[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_253(Entity eParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x2E5A72B ^0x64F26CC0
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(eParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(eParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(eParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(eParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

BOOL func_254(Ped pedParam0, BOOL bParam1) // Hash - 0xA12155CC ^0x65166BFF
{
	Vector3 entityCoords;
	Vector3 entityCoords2;
	Vehicle vehiclePedIsIn;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (PED::GET_PED_GROUP_INDEX(pedParam0) == func_238())
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (!PED::IS_PED_IN_VEHICLE(pedParam0, vehiclePedIsIn, false) && SYSTEM::VDIST(entityCoords, entityCoords2) > 10f)
					return true;
	}

	if (bParam1 && func_267(iLocal_333, 2))
	{
		num = MISC::ABSF(entityCoords.f_2 - entityCoords2.f_2);
	
		if (num > 8f)
			return true;
	}

	return false;
}

void func_255() // Hash - 0xF751EE45 ^0x5D60E42F
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_274[0], false))
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			func_196(uLocal_274[0], OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0f, 2f, 0f));
			iLocal_74 = 1;
			iLocal_75 = 0;
		}
	}

	return;
}

void func_256() // Hash - 0xF4F02F08 ^0x941C5F21
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_257();
	return;
}

void func_257() // Hash - 0x9A142650 ^0x461C197C
{
	Global_23131.f_134 = 1;
	return;
}

Hash func_258(int iParam0, BOOL bParam1) // Hash - 0xFD7EFDDA ^0x6A171253
{
	if (iParam0 == 0)
		if (bParam1)
			return joaat("CSB_STRIPPER_01");
		else
			return joaat("S_F_Y_STRIPPER_01");
	else if (iParam0 == 1)
		if (bParam1)
			return joaat("CSB_STRIPPER_02");
		else
			return joaat("S_F_Y_STRIPPER_02");

	return 0;
}

void func_259(BOOL bParam0) // Hash - 0x7D7F05B6 ^0x77198C43
{
	var unk;

	if (!func_165(iLocal_73))
	{
		iLocal_73 = func_169();
		func_159(&iLocal_73, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_267(iLocal_333, 512))
		{
			if (func_266(iLocal_73) && ENTITY::IS_ENTITY_OCCLUDED(uLocal_274[0]))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					TEXT_LABEL_ASSIGN_STRING(&unk, "SC_CANCEL_", 64);
					TEXT_LABEL_APPEND_INT(&unk, uLocal_76[0], 64);
					func_193(&uLocal_81, 1, 0, func_194(uLocal_76[0]), 0, 1);
					func_265(&uLocal_81, func_112(uLocal_76[0]), "SHAUD", &unk, 7, 0, 0, true);
				}
				else
				{
					func_263();
				}
			
				func_262(uLocal_274[0]);
				func_27(&iLocal_333, 512);
			}
		}
		else if (func_261())
		{
			func_73(&iLocal_333, 512);
		}
		else if (!func_171() && func_260() && !func_261())
		{
			func_242(true);
			func_66(2);
		}
	}

	return;
}

BOOL func_260() // Hash - 0x6FD1B5DA ^0x6FD1B5DA
{
	if (Global_21725 == 0)
		return true;

	return false;
}

BOOL func_261() // Hash - 0xE5DF1CBC ^0xE5DF1CBC
{
	if (Global_21774 == 1 || Global_22741 == 1)
		return true;

	return false;
}

void func_262(Ped pedParam0) // Hash - 0x631273C8 ^0x49081EE4
{
	if (!PED::IS_PED_INJURED(pedParam0))
	{
		TASK::SET_PED_PATH_AVOID_FIRE(pedParam0, true);
	
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_PERFORM_SEQUENCE) != 1)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_339);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_339);
			TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 8000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_305, 1.5f, -1, 0.25f, 0, 1193033728);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_339);
			TASK::TASK_PERFORM_SEQUENCE(pedParam0, iLocal_339);
		}
	}

	return;
}

void func_263() // Hash - 0x54B2EB9D ^0xFDD18B21
{
	int num;

	if (func_264())
		return;

	num = func_115(uLocal_76[0]);
	func_109(-384575792, num, 6, 3, func_113(), func_112(uLocal_76[0]), 0, 10000, -1, 0, -1, 0, 1);
	return;
}

BOOL func_264() // Hash - 0xDBD936D3 ^0xDBD936D3
{
	if (func_54() == 0)
		return true;

	return false;
}

int func_265(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Hash - 0xFCEBC461 ^0xFCEBC461
{
	func_189(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21773 = 1;
	Global_21732 = true;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_21730 = 0;
	Global_21777 = 0;
	Global_21779 = 0;
	Global_2883585 = 0;
	return func_177(sParam3, iParam4, bParam7);
}

BOOL func_266(int iParam0) // Hash - 0xCDB90269 ^0xCDB90269
{
	return func_164(func_169(), iParam0);
}

BOOL func_267(int iParam0, int iParam1) // Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_268(var uParam0, BOOL bParam1) // Hash - 0xC06BD5AD ^0xC4860114
{
	Vector3 vector;
	float heading;
	int num;
	var unk3;
	var unk19;
	var unk35;

	func_296();
	func_64(&vector, &heading, bParam1);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (fLocal_329 == -1f)
			fLocal_329 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vector);
	
		if (iLocal_332 == -1)
			iLocal_332 = uParam0->f_3;
	
		if (!func_267(iLocal_333, 32))
		{
			func_292(&uLocal_278, func_294(uParam0->[0], false));
			func_291(&uLocal_278);
			func_27(&iLocal_333, 32);
			STREAMING::REQUEST_ANIM_DICT("mini@strip_club@idles@stripper");
			STREAMING::REQUEST_ANIM_DICT("gestures@f@standing@casual");
			func_290();
			return false;
		}
		else if (!func_289(&uLocal_278) || !STREAMING::HAS_ANIM_DICT_LOADED("mini@strip_club@idles@stripper") || !func_288())
		{
			return false;
		}
	
		if (bLocal_337)
			if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				return false;
	
		if (!func_267(iLocal_333, 1024))
		{
			uLocal_76[0] = uParam0->[0];
			uLocal_274[0] = PED::CREATE_PED(PED_TYPE_MISSION, func_294(uParam0->[0], false), vector, heading, true, true);
			func_282(uLocal_274[0], uLocal_76[0], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_274[num], true);
			PED::SET_PED_KEEP_TASK(uLocal_274[0], true);
			PED::SET_PED_DIES_WHEN_INJURED(uLocal_274[0], true);
			func_278(uLocal_274[0]);
			TASK::TASK_PLAY_ANIM(uLocal_274[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0, false, false, false);
			TASK::TASK_LOOK_AT_ENTITY(uLocal_274[num], PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 4);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_274[0], 0);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_274[0], func_194(uParam0->[0]));
			func_193(&uLocal_81, 1, uLocal_274[0], func_194(uParam0->[0]), 0, 1);
			func_27(&iLocal_333, 1024);
		}
	
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vector) > 100f)
		{
			if (func_192())
			{
				if (!func_267(iLocal_333, 1))
				{
					func_277(bParam1);
					func_251(0);
					func_27(&iLocal_333, 1);
				}
			}
		
			if (!func_267(iLocal_333, 64) && !func_267(iLocal_333, 512))
			{
				if (func_276(func_112(uParam0->[0])))
				{
					TEXT_LABEL_ASSIGN_STRING(&unk3, "BC_PLYRC_", 64);
				
					if (func_77() == 2)
					{
						func_193(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						TEXT_LABEL_APPEND_STRING(&unk3, "T", 64);
					}
					else if (func_77() == 0)
					{
						func_193(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						TEXT_LABEL_APPEND_STRING(&unk3, "M", 64);
					}
					else if (func_77() == 1)
					{
						func_193(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						TEXT_LABEL_APPEND_STRING(&unk3, "F", 64);
					}
				
					func_193(&uLocal_81, 3, 0, func_194(uParam0->[0]), 0, 1);
					unk19 = { func_275() };
					func_270(&uLocal_81, func_112(uParam0->[0]), "BCAUD", &unk3, &unk3, &unk19, &unk19, 12, 1, 0, 0, false);
					func_27(&iLocal_333, 64);
				}
			
				if (func_165(iLocal_73))
				{
					if (func_266(iLocal_73))
					{
						if (uParam0->[0] == 8 || uParam0->[0] == 9)
						{
							TEXT_LABEL_ASSIGN_STRING(&unk35, "SC_CANCEL_", 64);
							TEXT_LABEL_APPEND_INT(&unk35, uParam0->[0], 64);
							func_193(&uLocal_81, 1, 0, func_194(uParam0->[0]), 0, 1);
							func_265(&uLocal_81, func_112(uParam0->[0]), "SHAUD", &unk35, 12, 0, 0, true);
						}
						else
						{
							func_263();
						}
					
						func_27(&iLocal_333, 512);
					}
				}
			}
			else if (func_261())
			{
				func_73(&iLocal_333, 64);
				func_73(&iLocal_333, 512);
			}
			else if (!func_171() && func_260() && !func_261())
			{
				func_269(uParam0->[0]);
				func_242(true);
				func_66(2);
			}
		
			if (!func_267(iLocal_333, 128))
			{
				if (!func_33(0))
				{
					func_67(_("To cancel the booty call, call ~a~ back."), uLocal_76[0], false);
					func_27(&iLocal_333, 128);
				}
			}
		
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vector) > fLocal_329 + (200f * 3f))
				func_66(1);
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vector) < fLocal_329)
				fLocal_329 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vector);
		
			return false;
		}
	}
	else
	{
		return false;
	}

	if (func_77() == 2)
		func_193(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	else if (func_77() == 0)
		func_193(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	else if (func_77() == 1)
		func_193(&uLocal_81, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);

	return true;
}

void func_269(int iParam0) // Hash - 0x52F81938 ^0x9865F50C
{
	if (Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
		Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;

	Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 = Global_113648.f_243[func_75() /*53*/].f_2[iParam0 /*5*/].f_1 + 1;
	return;
}

int func_270(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11) // Hash - 0x94AC7535 ^0x94AC7535
{
	var unk;
	var unk12;

	func_189(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_274();

	if (iParam8 == 1)
		Global_21737 = 1;
	else
		Global_21737 = 0;

	unk = 10;
	unk12 = 10;
	func_272(2, &unk, &unk12, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_271(&unk, &unk12, iParam7, bParam11);
}

int func_271(var uParam0, var uParam1, int iParam2, BOOL bParam3) // Hash - 0x695B3F87 ^0x1B4CFA62
{
	int i;

	Global_21726 = 0;

	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam2 > Global_21727)
			{
				if (bParam3 == false)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
				}
				else
				{
					func_188();
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
	
		if (func_187(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_186();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22721 = Global_22722;
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21344.f_370 = Global_22714;
		Global_21721 = Global_21722;
		Global_21723 = Global_21724;
	
		if (Global_21983 == 0)
		{
			Global_21879[0 /*6*/] = { Global_21905[0 /*6*/] };
			Global_21879[1 /*6*/] = { Global_21905[1 /*6*/] };
			Global_21931[0 /*6*/] = { Global_21957[0 /*6*/] };
			Global_21931[1 /*6*/] = { Global_21957[1 /*6*/] };
			Global_21892[0 /*6*/] = { Global_21918[0 /*6*/] };
			Global_21892[1 /*6*/] = { Global_21918[1 /*6*/] };
			Global_21944[0 /*6*/] = { Global_21970[0 /*6*/] };
			Global_21944[1 /*6*/] = { Global_21970[1 /*6*/] };
		}
	
		if (Global_21731)
		{
			MISC::CLEAR_BIT(&Global_8253, 20);
			MISC::CLEAR_BIT(&Global_8254, 17);
			MISC::CLEAR_BIT(&Global_8255, 0);
		
			if (bParam3)
			{
				func_134();
			
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
			
				if (func_185())
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_78558)
				{
					if (Global_21983 == 0)
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
			}
		
			if (func_23())
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
			}
		
			func_184();
			Global_21735 = bParam3;
		}
	
		Global_21727 = iParam2;
	
		if (Global_21721 > 0)
		{
			for (i = 0; i < Global_21721; i = i + 1)
			{
				TEXT_LABEL_ASSIGN_STRING(&Global_21344.f_6[i /*6*/], uParam0->[i], 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_21344.f_187[i /*6*/], uParam1->[i], 24);
			}
		}
	
		Global_20591 = 0;
		func_183();
		return 1;
	}

	if (Global_21725 == 5)
		return 0;

	if (iParam2 < Global_21727 || iParam2 == Global_21727)
		return 0;

	if (iParam2 == 2)
	{
	}
	else
	{
		func_188();
	}

	return 0;
}

void func_272(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16) // Hash - 0x6DD28D94 ^0x6DD28D94
{
	func_273(iParam0);
	uParam1->[0] = uParam3;
	uParam2->[0] = uParam4;
	uParam1->[1] = uParam5;
	uParam2->[1] = uParam6;
	uParam1->[2] = iParam7;
	uParam2->[2] = iParam8;
	uParam1->[3] = iParam9;
	uParam2->[3] = iParam10;
	uParam1->[4] = iParam11;
	uParam2->[4] = iParam12;
	uParam1->[5] = iParam13;
	uParam2->[5] = iParam14;
	uParam1->[6] = iParam15;
	uParam2->[6] = iParam16;
	return;
}

void func_273(int iParam0) // Hash - 0xFE69F562 ^0xFE69F562
{
	Global_21722 = iParam0;
	Global_21732 = 1;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return;
}

void func_274() // Hash - 0x8E617574 ^0x8E617574
{
	Global_21773 = 0;
	Global_21732 = 1;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_21739 = 0;
	Global_22722 = 0;
	Global_21730 = 0;
	Global_21777 = 0;
	Global_21779 = 0;
	Global_2883585 = 0;
	return;
}

struct<16> func_275() // Hash - 0xFC4DE825 ^0x3FDE25A2
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "BC_DECR_", 64);
	TEXT_LABEL_APPEND_INT(&unk, uLocal_76[0], 64);
	return unk;
}

BOOL func_276(int iParam0) // Hash - 0x5B77F40B ^0xD5AF2169
{
	if (Global_22839 || Global_22838 || Global_22840)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return false;
		}
	}

	if (Global_117[iParam0 /*10*/].f_8 != 169)
		if (Global_20383.f_1 == 10)
			if (Global_7568 == iParam0)
				return true;
			else
				return false;
		else
			return false;

	return false;
}

void func_277(BOOL bParam0) // Hash - 0x8844B47 ^0x69B6C132
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
				func_84(_("Meet ~b~~a~~s~ at her home."), uLocal_76[0]);
			else
				func_84(_("Meet ~b~~a~~s~ behind the club."), uLocal_76[0]);
			break;
	
		case 8:
			func_84(_("Meet ~b~~a~~s~ at the college."), uLocal_76[0]);
			break;
	
		case 9:
			func_84(_("Meet ~b~~a~~s~ at the marina."), uLocal_76[0]);
			break;
	}

	return;
}

void func_278(Ped pedParam0) // Hash - 0x9B480E40 ^0xC0F9F409
{
	if (ENTITY::GET_ENTITY_MODEL(pedParam0) == joaat("S_F_Y_STRIPPER_02"))
	{
		func_281(pedParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		func_280(pedParam0, 2, MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
		func_279(pedParam0, 0, 0);
	}

	return;
}

void func_279(Ped pedParam0, int iParam1, int iParam2) // Hash - 0x8A7DC5 ^0x89F8B44
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(pedParam0, PV_COMP_FEET, iParam1, iParam2))
		PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_FEET, iParam1, iParam2, 0);

	return;
}

void func_280(Ped pedParam0, int iParam1, int iParam2) // Hash - 0x2AD4645D ^0xE77E3259
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(pedParam0, PV_COMP_UPPR, iParam1, iParam2))
		PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_UPPR, iParam1, iParam2, 0);

	return;
}

void func_281(Ped pedParam0, int iParam1, int iParam2) // Hash - 0xC5A52EE2 ^0x4BAA0204
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(pedParam0, PV_COMP_ACCS, iParam1, iParam2))
		PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_ACCS, iParam1, iParam2, 0);

	return;
}

void func_282(Ped pedParam0, int iParam1, BOOL bParam2) // Hash - 0x4F886472 ^0x55887727
{
	BOOL flag;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(pedParam0);
		flag = false;
	
		if (ENTITY::GET_ENTITY_MODEL(pedParam0) == joaat("MP_F_STRIPPERLITE"))
			flag = true;
	
		switch (iParam1)
		{
			case 0:
				if (flag)
				{
					func_287(pedParam0, 1, 0);
					func_286(pedParam0, 1, 0);
					func_280(pedParam0, 1, 0);
					func_285(pedParam0, 1, 0);
					func_284(pedParam0, true, -1, -1);
				}
				else
				{
					func_287(pedParam0, 1, 1);
					func_286(pedParam0, 2, 0);
					func_280(pedParam0, 0, 0);
					func_285(pedParam0, 0, 0);
					func_281(pedParam0, 1, 0);
					func_283(pedParam0, 0, 0);
					func_284(pedParam0, bParam2, -1, -1);
				}
				break;
		
			case 1:
				if (flag)
				{
					func_287(pedParam0, 0, 0);
					func_286(pedParam0, 0, 0);
					func_280(pedParam0, 0, 0);
					func_285(pedParam0, 0, 0);
					func_281(pedParam0, 0, 0);
					func_284(pedParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(pedParam0, 0, 0);
					func_286(pedParam0, 0, 0);
					func_280(pedParam0, 0, 0);
					func_285(pedParam0, 0, 0);
					func_279(pedParam0, 4, 0);
					func_281(pedParam0, 0, 0);
					func_284(pedParam0, bParam2, 0, 4);
				}
				break;
		
			case 2:
				if (flag)
				{
					func_287(pedParam0, 1, 0);
					func_286(pedParam0, 1, 1);
					func_280(pedParam0, 1, 0);
					func_285(pedParam0, 1, 0);
					func_284(pedParam0, true, -1, -1);
				}
				else
				{
					func_287(pedParam0, 0, 1);
					func_286(pedParam0, 1, 1);
					func_280(pedParam0, 1, 0);
					func_285(pedParam0, 1, 1);
					func_281(pedParam0, 1, 0);
					func_283(pedParam0, 1, 0);
					func_284(pedParam0, bParam2, -1, -1);
				}
				break;
		
			case 3:
				if (flag)
				{
					func_287(pedParam0, 0, 0);
					func_286(pedParam0, 0, 1);
					func_280(pedParam0, 0, 1);
					func_285(pedParam0, 0, 1);
					func_281(pedParam0, 0, 0);
					func_284(pedParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(pedParam0, 0, 0);
					func_286(pedParam0, 2, 0);
					func_280(pedParam0, 0, 2);
					func_285(pedParam0, 1, 1);
					func_279(pedParam0, 0, 0);
					func_281(pedParam0, 0, 0);
					func_284(pedParam0, bParam2, 2, 0);
				}
				break;
		
			case 4:
				if (flag)
				{
					func_287(pedParam0, 1, 0);
					func_286(pedParam0, 1, 0);
					func_280(pedParam0, 1, 0);
					func_285(pedParam0, 1, 0);
					func_284(pedParam0, true, -1, -1);
				}
				else
				{
					func_287(pedParam0, 1, 0);
					func_286(pedParam0, 2, 1);
					func_280(pedParam0, 1, 2);
					func_285(pedParam0, 0, 2);
					func_281(pedParam0, 1, 0);
					func_283(pedParam0, 1, 2);
					func_284(pedParam0, bParam2, -1, -1);
				}
				break;
		
			case 5:
				if (flag)
				{
					func_287(pedParam0, 0, 0);
					func_286(pedParam0, 0, 0);
					func_280(pedParam0, 0, 0);
					func_285(pedParam0, 0, 0);
					func_281(pedParam0, 0, 0);
					func_284(pedParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(pedParam0, 1, 1);
					func_286(pedParam0, 1, 0);
					func_280(pedParam0, 0, 1);
					func_285(pedParam0, 0, 2);
					func_279(pedParam0, 2, 0);
					func_281(pedParam0, 0, 0);
					func_284(pedParam0, bParam2, 1, 2);
				}
				break;
		
			case 6:
				if (flag)
				{
					func_287(pedParam0, 1, 0);
					func_286(pedParam0, 1, 0);
					func_280(pedParam0, 1, 0);
					func_285(pedParam0, 1, 0);
					func_284(pedParam0, true, -1, -1);
				}
				else
				{
					func_287(pedParam0, 0, 0);
					func_286(pedParam0, 1, 0);
					func_280(pedParam0, 0, 1);
					func_285(pedParam0, 0, 1);
					func_281(pedParam0, 1, 0);
					func_283(pedParam0, 0, 1);
					func_284(pedParam0, bParam2, 0, 1);
				}
				break;
		
			case 7:
				if (flag)
				{
					func_287(pedParam0, 0, 0);
					func_286(pedParam0, 0, 1);
					func_280(pedParam0, 0, 0);
					func_285(pedParam0, 0, 0);
					func_281(pedParam0, 0, 0);
					func_284(pedParam0, bParam2, -1, -1);
				}
				else
				{
					func_287(pedParam0, 1, 0);
					func_286(pedParam0, 0, 2);
					func_280(pedParam0, 1, 1);
					func_285(pedParam0, 0, 1);
					func_279(pedParam0, 0, 0);
					func_281(pedParam0, 1, 0);
					func_284(pedParam0, bParam2, 0, 0);
				}
				break;
		
			case 8:
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_UPPR, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_LOWR, 0, 1, 0);
				break;
		
			case 9:
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HEAD, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HAIR, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_UPPR, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_LOWR, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_ACCS, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_DECL, 0, 0, 0);
				break;
		}
	}

	return;
}

void func_283(Ped pedParam0, int iParam1, int iParam2) // Hash - 0x5BDB13E7 ^0xB5B0941A
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(pedParam0, PV_COMP_JBIB, iParam1, iParam2))
		PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_JBIB, iParam1, iParam2, 0);

	return;
}

void func_284(Ped pedParam0, BOOL bParam1, int iParam2, int iParam3) // Hash - 0x3173D2A9 ^0xDC6980AF
{
	Hash entityModel;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		return;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (entityModel == func_258(0, false) || entityModel == func_258(0, true))
	{
		if (bParam1)
		{
			func_280(pedParam0, 2, 0);
			func_281(pedParam0, 1, 0);
		}
	}
	else if (entityModel == func_258(1, false) || entityModel == func_258(1, true))
	{
		if (bParam1)
		{
			func_280(pedParam0, 0, iParam2);
			func_279(pedParam0, iParam3, 0);
			func_281(pedParam0, 1, 0);
		}
	}
	else if (entityModel == joaat("MP_F_STRIPPERLITE"))
	{
		if (bParam1)
			func_281(pedParam0, 1, 0);
	}

	return;
}

void func_285(Ped pedParam0, int iParam1, int iParam2) // Hash - 0xFC18B125 ^0x76E9A292
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(pedParam0, PV_COMP_LOWR, iParam1, iParam2))
		PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_LOWR, iParam1, iParam2, 0);

	return;
}

void func_286(Ped pedParam0, int iParam1, int iParam2) // Hash - 0x5D0BA585 ^0x2B93C46C
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(pedParam0, PV_COMP_HAIR, iParam1, iParam2))
		PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HAIR, iParam1, iParam2, 0);

	return;
}

void func_287(Ped pedParam0, int iParam1, int iParam2) // Hash - 0xD029473F ^0x79503823
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(pedParam0, PV_COMP_HEAD, iParam1, iParam2))
		PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HEAD, iParam1, iParam2, 0);

	return;
}

BOOL func_288() // Hash - 0x6A463E60 ^0x31686B2F
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
		return true;
	else if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_204()))
		return true;

	return false;
}

BOOL func_289(var uParam0) // Hash - 0xCCAA006D ^0xDAFDA8A9
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->[i]))
			{
				!STREAMING::HAS_MODEL_LOADED(uParam0->[i]);
				return false;
			}
		}
	}

	return true;
}

void func_290() // Hash - 0xE9646643 ^0x1AB9C468
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_204()))
		TASK::REQUEST_WAYPOINT_RECORDING(func_204());

	return;
}

void func_291(var uParam0) // Hash - 0xCAA51832 ^0x80DEE02B
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] != 0)
			STREAMING::REQUEST_MODEL(uParam0->[i]);
	}

	return;
}

int func_292(var uParam0, int iParam1) // Hash - 0xECE1029C ^0xECE1029C
{
	int i;
	int num;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] != 0)
			if (uParam0->[i] == iParam1)
				return 0;
	}

	num = func_293(uParam0);

	if (num < 0 || num >= *uParam0)
		return 0;

	uParam0->[num] = iParam1;
	return 1;
}

int func_293(var uParam0) // Hash - 0xFC830CB7 ^0xFC830CB7
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == 0)
			return i;
	}

	return -1;
}

Hash func_294(var uParam0, BOOL bParam1) // Hash - 0xC65B6842 ^0x745F093B
{
	int num;

	if (bParam1)
		return joaat("MP_F_STRIPPERLITE");

	num = func_112(uParam0);

	if (num != 145)
		return func_295(num);

	return func_258(0, false);
}

Hash func_295(int iParam0) // Hash - 0xBF0B24A5 ^0xBF0B24A5
{
	if (!func_80(iParam0))
		return func_83(iParam0);
	else
		iParam0 != 145;

	return 0;
}

void func_296() // Hash - 0xC38956D1 ^0xC38956D1
{
	switch (uLocal_76[0])
	{
		case 1:
			uLocal_302 = { 128.1002f, -1895.0007f, 22.4811f };
			uLocal_305 = { 128.1059f, -1896.8188f, 22.6792f };
			uLocal_308 = { 133.9411f, -1881.8903f, 22.5257f };
			uLocal_311 = { 130.1663f, -1893.0575f, 22.3748f };
			uLocal_314 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_326 = 330.5705f;
			fLocal_327 = 244f;
			uLocal_323 = { 146.293f, -1888.0493f, 22.2193f };
			fLocal_328 = fLocal_327;
			break;
	
		case 0:
			uLocal_302 = { -161.9628f, -1636.501f, 33.0339f };
			uLocal_305 = { -159.9415f, -1637.307f, 33.0339f };
			uLocal_308 = { -178.6316f, -1629.5216f, 32.1789f };
			uLocal_311 = { -166.1453f, -1633.1024f, 32.6574f };
			uLocal_314 = { -166.6636f, -1633.2289f, 32.6567f };
			fLocal_326 = 108.072f;
			fLocal_327 = 180.9811f;
			uLocal_323 = { uLocal_308 };
			fLocal_328 = fLocal_327;
			break;
	
		case 4:
			uLocal_302 = { -198.3824f, 87.8785f, 68.7436f };
			uLocal_305 = { -197.2292f, 86.3497f, 68.7561f };
			uLocal_308 = { -200.9078f, 113.537f, 68.5518f };
			uLocal_311 = { -200.1384f, 96.9809f, 68.5203f };
			uLocal_314 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_326 = 48.99f;
			fLocal_327 = 64.3f;
			uLocal_323 = { uLocal_308 };
			fLocal_328 = fLocal_327;
			break;
	
		case 5:
			uLocal_302 = { -849.0348f, 510.6906f, 89.8218f };
			uLocal_305 = { -849.0408f, 508.5767f, 89.8218f };
			uLocal_308 = { -846.1005f, 520.2202f, 89.6217f };
			uLocal_311 = { -851.8972f, 512.73f, 89.6217f };
			uLocal_314 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_326 = 92.365f;
			fLocal_327 = 293f;
			uLocal_323 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_328 = fLocal_327;
			break;
	
		case 8:
			uLocal_302 = { -28.2427f, -1555.8925f, 29.6918f };
			uLocal_305 = { -24.8589f, -1556.8461f, 29.6819f };
			uLocal_308 = { -41.8174f, -1575.6086f, 28.2831f };
			uLocal_311 = { -25.3404f, -1556.3406f, 29.6919f };
			uLocal_314 = { -27.7382f, -1570.5724f, 29.3f };
			fLocal_326 = 181.352f;
			fLocal_327 = 47.9206f;
			uLocal_323 = { uLocal_308 };
			fLocal_328 = fLocal_327;
			break;
	
		case 9:
			uLocal_302 = { 3313.487f, 5175.8306f, 18.619f };
			uLocal_305 = { 3310.8157f, 5176.3306f, 18.619f };
			uLocal_308 = { 3334.3206f, 5161.122f, 17.2996f };
			uLocal_311 = { 3317.7876f, 5171.707f, 17.4471f };
			uLocal_314 = { 3318.0757f, 5171.805f, 17.4385f };
			fLocal_326 = 236.4579f;
			uLocal_323 = { 3322.9268f, 5148.6074f, 17.3141f };
			fLocal_328 = 310.8648f;
			break;
	}

	return;
}

int func_297() // Hash - 0x10D27BC5 ^0x10D27BC5
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_337)
				return 1;
			else
				return 0;
			break;
	
		default:
			return 0;
	}

	return 0;
}

int func_298(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x75751681 ^0x9140C9A0
{
	int i;

	for (i = NETWORK::NETWORK_GET_SCRIPT_STATUS(); i != 2; i = NETWORK::NETWORK_GET_SCRIPT_STATUS())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bParam2)
				func_302();
			else
				return 0;
	
		if (!func_301(false))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (!bParam2)
						func_302();
					else
						return 0;
			
				if (func_300())
					if (!bParam2)
						func_302();
					else
						return 0;
			
				if (func_299(157))
					if (!bParam2)
						func_302();
					else
						return 0;
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
					func_302();
				else
					return 0;
			}
		}
	
		SYSTEM::WAIT(0);
	}

	if (iParam1 > -1)
		Global_1574666 = i;

	if (iParam0 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!bParam2)
				func_302();
			else
				return 0;
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
		if (!bParam2)
			func_302();
		else
			return 0;

	return 1;
}

BOOL func_299(int iParam0) // Hash - 0xA28ADBB4 ^0x6EB81E64
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_300() // Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2683862.f_693;
}

BOOL func_301(BOOL bParam0) // Hash - 0x1CCCE169 ^0x1CCCE169
{
	bParam0;
	return Global_1575035;
}

void func_302() // Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_303() // Hash - 0xAD0632AA ^0x90637161
{
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	func_86();
	HUD::CLEAR_PRINTS();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_301, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_308 - { 3f, 3f, 3f }, uLocal_308 + { 3f, 3f, 3f }, true, true);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(uLocal_308 - { 3f, 3f, 3f }, uLocal_308 + { 3f, 3f, 3f }, 15f, 1);

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);

	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_274[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_274[0], false))
		{
			if (!func_267(iLocal_333, 8192))
				TASK::TASK_WANDER_STANDARD(uLocal_274[0], 1193033728, 0);
		
			PED::SET_PED_KEEP_TASK(uLocal_274[0], true);
		
			if (!PED::DOES_RELATIONSHIP_GROUP_EXIST(hLocal_72))
				PED::ADD_RELATIONSHIP_GROUP("BootyCall", &hLocal_72);
		
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_72, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), hLocal_72);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_274[0], hLocal_72);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_274[0]);
	}

	if (iLocal_332 != -1)
		func_305(&iLocal_332);

	if (bLocal_71)
		func_143(&uLocal_70);

	PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	func_123(uLocal_76[0], -1);
	Global_112642 = 0;
	func_304(false);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_304(BOOL bParam0) // Hash - 0x1254D1D1 ^0x1254D1D1
{
	int i;

	for (i = 0; i < 60; i = i + 1)
	{
		func_229(i, bParam0);
	}

	return;
}

void func_305(var uParam0) // Hash - 0x995C9E2 ^0x995C9E2
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

