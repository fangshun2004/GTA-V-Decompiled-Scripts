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
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	BOOL bLocal_50 = 0;
	BOOL bLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	Ped pedLocal_55 = 0;
	Ped pedLocal_56 = 0;
	Ped pedLocal_57 = 0;
	Ped pedLocal_58 = 0;
	Vehicle veLocal_59 = 0;
	var uLocal_60 = 4;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	Vehicle veLocal_65 = 0;
	Object obLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	float fLocal_76 = 0f;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
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
	float fLocal_102 = 0f;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	float fLocal_112 = 0f;
	int iLocal_113 = 0;
	BOOL bLocal_114 = 0;
	BOOL bLocal_115 = 0;
	BOOL bLocal_116 = 0;
	BOOL bLocal_117 = 0;
	BOOL bLocal_118 = 0;
	BOOL bLocal_119 = 0;
	BOOL bLocal_120 = 0;
	BOOL bLocal_121 = 0;
	BOOL bLocal_122 = 0;
	BOOL bLocal_123 = 0;
	BOOL bLocal_124 = 0;
	BOOL bLocal_125 = 0;
	BOOL bLocal_126 = 0;
	BOOL bLocal_127 = 0;
	BOOL bLocal_128 = 0;
	BOOL bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	Vehicle veLocal_132 = 0;
	Vehicle veLocal_133 = 0;
	Cam caLocal_134 = 0;
	Cam caLocal_135 = 0;
	var uLocal_136 = 16;
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
	BOOL bLocal_301 = 0;
	char* sLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	BOOL bLocal_310 = 0;
	BOOL bLocal_311 = 0;
	BOOL bLocal_312 = 0;
	BOOL bLocal_313 = 0;
	BOOL bLocal_314 = 0;
	BOOL bLocal_315 = 0;
	BOOL bLocal_316 = 0;
	BOOL bLocal_317 = 0;
	int iLocal_318 = 0;
	Blip blLocal_319 = 0;
	Blip blLocal_320 = 0;
	Blip blLocal_321 = 0;
	Blip blLocal_322 = 0;
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
	fLocal_43 = 20f;
	bLocal_117 = true;
	iLocal_308 = 6000;
	uLocal_52 = { uScriptParam_0.f_1[0 /*3*/] };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(pedLocal_55))
			if (PED::IS_PED_IN_GROUP(pedLocal_55))
				PED::REMOVE_PED_FROM_GROUP(pedLocal_55);
	
		if (!PED::IS_PED_INJURED(pedLocal_57))
			if (PED::IS_PED_IN_GROUP(pedLocal_57))
				PED::REMOVE_PED_FROM_GROUP(pedLocal_57);
	
		func_183();
	}

	if (func_182(283, 1))
		SCRIPT::TERMINATE_THIS_THREAD();

	if (func_153(uLocal_52, -1, 0, false, false))
	{
		if (CLOCK::GET_CLOCK_HOURS() > 2 && CLOCK::GET_CLOCK_HOURS() < 15 && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	
		func_150(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_116)
		{
			if (!func_149())
				if (func_148())
					func_183();
		
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_SDRM", 0);
		
			switch (iLocal_48)
			{
				case 0:
					if (func_136())
						func_183();
				
					if (bLocal_50)
					{
						bLocal_51 = true;
						iLocal_48 = 1;
					}
					else
					{
						func_127();
					}
					break;
			
				case 1:
					func_126();
				
					if (!bLocal_114)
					{
						func_125();
						func_122();
						func_111();
					
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_318))
							func_110();
					}
					else
					{
						func_107();
					
						if (!bLocal_124)
							func_105();
					
						func_97();
						func_95();
						func_79();
						func_78(pedLocal_55, false);
						!bLocal_121;
					
						if (iLocal_49 == 0 && !bLocal_118)
						{
							func_74();
							func_72();
						}
						else
						{
							func_67();
						}
					
						if (iLocal_49 == 3)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_87, true) < 100f)
							{
								if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
									CUTSCENE::REQUEST_CUTSCENE("sdrm_mcs_2", 8);
							
								if (CUTSCENE::IS_CUTSCENE_ACTIVE())
								{
									if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
									{
										if (!PED::IS_PED_INJURED(pedLocal_55) && !PED::IS_PED_INJURED(pedLocal_57) && !PED::IS_PED_INJURED(pedLocal_56) && !PED::IS_PED_INJURED(pedLocal_58) && !ENTITY::IS_ENTITY_DEAD(veLocal_132, false))
										{
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Groom", pedLocal_55, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Groomsman", pedLocal_57, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Bride", pedLocal_56, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Father_of_the_bride", pedLocal_58, 0);
										}
									}
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_ACTIVE())
							{
								CUTSCENE::REMOVE_CUTSCENE();
							}
						
							if (bLocal_118)
							{
								if (func_66(true, false, true))
									func_31();
							}
							else if (!PED::IS_PED_INJURED(pedLocal_57))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_57, false))
								{
									if (HUD::DOES_BLIP_EXIST(blLocal_322))
									{
										HUD::REMOVE_BLIP(&blLocal_322);
									
										if (HUD::DOES_BLIP_EXIST(blLocal_320))
											HUD::REMOVE_BLIP(&blLocal_320);
									
										if (!HUD::DOES_BLIP_EXIST(blLocal_320))
											blLocal_320 = func_29(uLocal_67, true);
									}
								}
							}
						}
					
						if (func_3())
						{
							if (!PED::IS_PED_INJURED(pedLocal_55))
								TASK::TASK_SMART_FLEE_PED(pedLocal_55, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						
							if (!PED::IS_PED_INJURED(pedLocal_57))
								TASK::TASK_SMART_FLEE_PED(pedLocal_57, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						
							if (!PED::IS_PED_INJURED(pedLocal_56))
								TASK::TASK_SMART_FLEE_PED(pedLocal_56, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						
							if (!PED::IS_PED_INJURED(pedLocal_58))
								TASK::TASK_SMART_FLEE_PED(pedLocal_58, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						
							func_2();
						}
					}
				
					func_1();
					break;
			}
		}
		else
		{
			func_183();
		}
	}

	return;
}

void func_1() // Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_2() // Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_183();
	return;
}

BOOL func_3() // Hash - 0xFEBFA7AE ^0x99753EBC
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_INJURED(pedLocal_55))
		{
			return true;
		}
		else
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), true) || ENTITY::IS_ENTITY_IN_WATER(pedLocal_55))
				return true;
		
			if (bLocal_116)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_27();
				
					if (func_4(&uLocal_136, "stagdau", "stagd_police", 4, 0, 0, 0))
						return true;
				}
			}
		}
	}

	if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_59, false) || VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(veLocal_59) || ENTITY::IS_ENTITY_IN_WATER(veLocal_59))
		{
			func_27();
		
			if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
				return true;
		}
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("TOWTRUCK")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("TOWTRUCK2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), veLocal_59))
				{
					func_27();
				
					if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
						return true;
				}
			}
		}
	}
	else
	{
		func_27();
	
		if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
			return true;
	}

	if (!PED::IS_PED_INJURED(pedLocal_55))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_59, false))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				}
			}
		
			return true;
		}
	}

	if (iLocal_49 >= 1)
	{
		if (bLocal_123)
		{
			if (PED::IS_PED_INJURED(pedLocal_57))
			{
				func_27();
				return true;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_57, PLAYER::PLAYER_PED_ID(), true))
			{
				func_27();
				return true;
			}
		}
	
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(veLocal_59, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
			{
				if (!bLocal_126)
				{
					func_27();
				
					if (func_4(&uLocal_136, "stagdau", "stagd_comeba", 4, 0, 0, 0))
						bLocal_126 = true;
				}
			}
			else
			{
				bLocal_126 = false;
			}
		
			if (!ENTITY::IS_ENTITY_AT_ENTITY(veLocal_59, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0))
				return true;
		}
	}

	if (iLocal_49 == 3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_INJURED(pedLocal_56) || PED::IS_PED_INJURED(pedLocal_58))
				return true;
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_56, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_58, PLAYER::PLAYER_PED_ID(), true))
				return true;
	
		if (!PED::IS_PED_INJURED(pedLocal_57))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_57, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0) && bLocal_310)
			{
				if (!bLocal_127)
				{
					func_27();
				
					if (func_4(&uLocal_136, "stagdau", "stagd_nobest", 4, 0, 0, 0))
						bLocal_127 = true;
				}
			}
			else
			{
				bLocal_127 = false;
			}
		
			if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_57, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0))
				return true;
		}
	}

	return false;
}

BOOL func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x384540C1 ^0x384540C1
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_5(sParam2, iParam3, false);
}

BOOL func_5(char* sParam0, int iParam1, BOOL bParam2) // Hash - 0x77297D51 ^0x40DC584A
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
					func_25();
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
	
		if (func_24(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_23();
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
				func_15();
			
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
			
				if (func_14())
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
		
			if (func_13())
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
		
			func_12();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_11();
		func_6();
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
		func_25();
	}

	return 0;
}

void func_6() // Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_7())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_7() // Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (PLAYER::PLAYER_ID() == func_10())
		return false;

	if (func_8(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_8(Player plParam0) // Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_9(plParam0, 20);
}

BOOL func_9(Player plParam0, int iParam1) // Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

Player func_10() // Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_11() // Hash - 0xD7DE4C79 ^0xAC73CB38
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

void func_12() // Hash - 0xCD8A4D28 ^0xCD8A4D28
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

BOOL func_13() // Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

BOOL func_14() // Hash - 0x9A999369 ^0x4033F7BF
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

void func_15() // Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_22(14))
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
		Global_20383 = func_16();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

int func_16() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_17();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_17() // Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_20(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_19(PLAYER::PLAYER_PED_ID());
		
			if (func_18(num) && !func_22(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_18(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_18(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_19(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_20(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_20(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_18(iParam0))
		return func_21(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_21(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

BOOL func_22(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

void func_23() // Hash - 0x9E4A5D2E ^0x95EB1C77
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

BOOL func_24(int iParam0, int iParam1) // Hash - 0xA14C4D3F ^0xA6034F77
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

void func_25() // Hash - 0xE32CF1EF ^0xB9A7BEB2
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Hash - 0xC6B752B2 ^0xC6B752B2
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

void func_27() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_28();
	return;
}

void func_28() // Hash - 0xF6D04E68 ^0x80AE5309
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

Blip func_29(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Hash - 0xF4E99477 ^0x29669E98
{
	Blip blip;

	blip = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(blip, bParam3);
	return blip;
}

var func_30(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_31() // Hash - 0x9D4138F8 ^0xC5686C27
{
	switch (iLocal_131)
	{
		case 0:
			func_27();
			SYSTEM::WAIT(0);
			func_58(true, true, true, false, false, false, false);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
			bLocal_310 = false;
			iLocal_131 = iLocal_131 + 1;
			break;
	
		case 1:
			iLocal_131 = iLocal_131 + 1;
			break;
	
		case 2:
			if (!PED::IS_PED_INJURED(pedLocal_55) && !PED::IS_PED_INJURED(pedLocal_57) && !PED::IS_PED_INJURED(pedLocal_56) && !PED::IS_PED_INJURED(pedLocal_58) && !ENTITY::IS_ENTITY_DEAD(veLocal_132, false))
			{
				if (func_57())
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(veLocal_132, "SDRM_Car", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_55, "Groom", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_57, "Groomsman", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_56, "Bride", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_58, "Father_of_the_bride", 0, 0, 0);
					CUTSCENE::START_CUTSCENE(4);
					iLocal_131 = iLocal_131 + 1;
				}
			}
			break;
	
		case 3:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_132, false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_132, 1084227584);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(veLocal_132, true);
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
				}
			
				iLocal_131 = iLocal_131 + 1;
			}
			break;
	
		case 4:
			PED::DELETE_PED(&pedLocal_55);
			PED::DELETE_PED(&pedLocal_57);
			PED::DELETE_PED(&pedLocal_56);
			PED::DELETE_PED(&pedLocal_58);
			func_58(false, true, true, false, false, false, false);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
			func_32();
			break;
	}

	return;
}

void func_32() // Hash - 0x71D3CE81 ^0x9E1201A7
{
	while (!func_56())
	{
		SYSTEM::WAIT(0);
	}

	func_36(-1, 0);
	func_33();
	func_183();
	return;
}

void func_33() // Hash - 0xD765C186 ^0xD765C186
{
	func_34();
	return;
}

int func_34() // Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_35(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL func_35(BOOL bParam0) // Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_36(int iParam0, int iParam1) // Hash - 0xC3A96B7E ^0xC3A96B7E
{
	if (iParam0 == -1)
		iParam0 = func_54();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_53(iParam0))
	{
		func_52(iParam0, iParam1);
	
		if (!func_51(51))
		{
			func_47(_("Some Random Events will reward the player with stat boosts or money."), 1, 0, 4000, 10000, func_50(), 0, 138, 0);
			func_46(51);
		}
	
		if (func_45(iParam0))
			Global_113648.f_24997.f_2 = 3;
	
		if (func_44(iParam0, iParam1) != 322)
			func_38(func_44(iParam0, iParam1), uLocal_45, uLocal_45.f_1);
	
		Global_113636 = iParam1;
	
		if (Global_113634 == 0)
			if (Global_113637 == 1 || Global_113637 == 5 || Global_113637 == 11 || Global_113637 == 25)
				func_37(2);
			else if (Global_113637 == 26 || Global_113637 == 8 || Global_113637 == 17)
				func_37(7);
			else
				func_37(1);
	}

	return;
}

void func_37(int iParam0) // Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113634 = iParam0;
	return;
}

void func_38(int iParam0, var uParam1, var uParam2) // Hash - 0xEC2439E7 ^0x1B67A713
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_42(891 + iParam0, true, -1);
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
		func_39();

	return;
}

void func_39() // Hash - 0x9F269E94 ^0x9F269E94
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
		func_41(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78558)
		{
			if (func_40() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113382 = 0;
			
				if (!Global_63362)
					func_34();
			}
		}
	}

	return;
}

int func_40() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

BOOL func_41(int iParam0, int iParam1) // Hash - 0x77E0C72A ^0x80DA2A54
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

void func_42(int iParam0, BOOL bParam1, int iParam2) // Hash - 0xCF91FBA1 ^0xAE1D9C41
{
	if (iParam2 == -1)
		iParam2 = func_43();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_43() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

int func_44(int iParam0, int iParam1) // Hash - 0xE97012CD ^0x68FBF85A
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

BOOL func_45(int iParam0) // Hash - 0xBF3EFB31 ^0xBF3EFB31
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

void func_46(int iParam0) // Hash - 0x12249850 ^0x46987D7A
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

void func_47(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Hash - 0x4DC3172D ^0x4DC3172D
{
	func_48(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_48(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Hash - 0x37413FF5 ^0xCF18A821
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
		func_49();
	}

	return;
}

void func_49() // Hash - 0xCF8881D1 ^0x40507183
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

int func_50() // Hash - 0x35BC7314 ^0x35BC7314
{
	func_17();

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

BOOL func_51(int iParam0) // Hash - 0x3F44A899 ^0x7041C53
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

void func_52(int iParam0, int iParam1) // Hash - 0xE2246457 ^0xD5018049
{
	MISC::SET_BIT(&Global_113648.f_24997.f_8[iParam0], iParam1);
	return;
}

int func_53(int iParam0) // Hash - 0xAA02DAD0 ^0xAA02DAD0
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

int func_54() // Hash - 0x7AC1007E ^0x4E7D4F54
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_55(unk);
	return num;
}

int func_55(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Hash - 0x6DA57317 ^0x57A32A43
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

BOOL func_56() // Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_57() // Hash - 0x7E48580B ^0x77F2F890
{
	BOOL hasCutsceneLoaded;

	hasCutsceneLoaded = CUTSCENE::HAS_CUTSCENE_LOADED();

	if (!Global_78557)
		if (!hasCutsceneLoaded)
			Global_78557 = true;

	return hasCutsceneLoaded;
}

void func_58(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Hash - 0x787E640E ^0x67C15509
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_65(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_13())
				Global_20383.f_1 = 3;
		
			Global_21725 = 5;
		}
	
		func_64(true, bParam3, bParam2, false);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_65(0);
		HUD::THEFEED_RESUME();
		Global_63368 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_64(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_62(PLAYER::PLAYER_ID()) && !func_60(PLAYER::PLAYER_ID(), 0) && !func_59() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_62(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		Global_78556 = 0;
	}

	return;
}

BOOL func_59() // Hash - 0xAA7793E3 ^0x3F62CDC8
{
	return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

BOOL func_60(Player plParam0, int iParam1) // Hash - 0x5A3B86CC ^0x2CFA58CE
{
	BOOL flag;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_61(-1, false) == 8;
	else
		flag = Global_1853910[plParam0 /*862*/].f_205 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_61(int iParam0, BOOL bParam1) // Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_43();

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

BOOL func_62(Player plParam0) // Hash - 0x68897CDD ^0x62820466
{
	if (func_60(plParam0, 0))
		return true;

	if (func_63())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2))
		return true;

	return false;
}

BOOL func_63() // Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_64(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Hash - 0x3167F4C7 ^0xCE6B9B6A
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

void func_65(int iParam0) // Hash - 0x1B2EEE72 ^0xEDBC1F9D
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 13);
	else
		MISC::CLEAR_BIT(&Global_8253, 13);

	return;
}

BOOL func_66(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Hash - 0xF0D380FF ^0x29DD7336
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

void func_67() // Hash - 0x1C41791E ^0x16E90AEC
{
	if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false) && !ENTITY::IS_ENTITY_DEAD(pedLocal_55, false))
	{
		if (!bLocal_117)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_59, false) && PED::IS_PED_IN_VEHICLE(pedLocal_55, veLocal_59, false))
			{
				bLocal_117 = true;
			
				if (HUD::DOES_BLIP_EXIST(blLocal_319))
					HUD::REMOVE_BLIP(&blLocal_319);
			
				if (bLocal_122 && !bLocal_118)
					if (!HUD::DOES_BLIP_EXIST(blLocal_320))
						blLocal_320 = func_29(uLocal_67, true);
			
				!func_71();
			}
		}
	
		if (!bLocal_117 && !bLocal_119)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_59, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(pedLocal_55, veLocal_59, false))
				{
					!func_71();
				
					if (HUD::DOES_BLIP_EXIST(blLocal_319))
						HUD::REMOVE_BLIP(&blLocal_319);
				
					if (!HUD::DOES_BLIP_EXIST(blLocal_319))
					{
						blLocal_319 = func_70(pedLocal_55, false, 145);
						HUD::SET_BLIP_AS_FRIENDLY(blLocal_319, true);
					}
				
					bLocal_117 = false;
					bLocal_119 = true;
				}
			}
		}
	
		if (bLocal_117)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_59, false))
			{
				!func_71();
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_319))
				{
					blLocal_319 = func_68(veLocal_59, false, false);
					HUD::SET_BLIP_AS_FRIENDLY(blLocal_319, true);
				}
			
				if (HUD::DOES_BLIP_EXIST(blLocal_320))
					HUD::REMOVE_BLIP(&blLocal_320);
			
				bLocal_117 = false;
			}
		
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_59, false) && !PED::IS_PED_IN_VEHICLE(pedLocal_55, veLocal_59, false))
			{
				!func_71();
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_319))
				{
					blLocal_319 = func_68(veLocal_59, false, false);
					HUD::SET_BLIP_AS_FRIENDLY(blLocal_319, true);
				}
			
				if (HUD::DOES_BLIP_EXIST(blLocal_320))
					HUD::REMOVE_BLIP(&blLocal_320);
			
				bLocal_117 = false;
			}
		}
	}

	return;
}

Blip func_68(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x177BFEFF ^0x177BFEFF
{
	return func_69(veParam0, !bParam1, bParam2);
}

Blip func_69(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x2E5A72B ^0x64F26CC0
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

Blip func_70(Ped pedParam0, BOOL bParam1, int iParam2) // Hash - 0xA714218A ^0xAD0F82BD
{
	Blip blip;

	blip = func_69(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2028[iParam2 /*29*/].f_3));

	return blip;
}

BOOL func_71() // Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_72() // Hash - 0xAB02C4D2 ^0x94B2E397
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_55))
	{
		if (!PED::IS_PED_INJURED(pedLocal_55))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
				{
					if (HUD::DOES_BLIP_EXIST(blLocal_321))
					{
						HUD::REMOVE_BLIP(&blLocal_321);
					
						if (!HUD::DOES_BLIP_EXIST(blLocal_320))
							blLocal_320 = func_29(uLocal_67, true);
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false))
				{
					if (HUD::DOES_BLIP_EXIST(blLocal_321))
					{
						HUD::REMOVE_BLIP(&blLocal_321);
					
						if (!HUD::DOES_BLIP_EXIST(blLocal_320))
							blLocal_320 = func_29(uLocal_67, true);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(blLocal_320))
				{
					HUD::REMOVE_BLIP(&blLocal_320);
				
					if (!HUD::DOES_BLIP_EXIST(blLocal_321))
						blLocal_321 = func_70(pedLocal_55, false, 145);
				}
			
				PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID());
			}
			else if (HUD::DOES_BLIP_EXIST(blLocal_320))
			{
				HUD::REMOVE_BLIP(&blLocal_320);
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_321))
					blLocal_321 = func_70(pedLocal_55, false, 145);
			}
		
			if (!PED::IS_PED_IN_GROUP(pedLocal_55))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 10f, 10f, 10f, false, true, 0))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_55);
					PED::SET_PED_AS_GROUP_MEMBER(pedLocal_55, func_73());
					PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_55, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_55, 0);
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_55);
					PED::SET_PED_AS_GROUP_MEMBER(pedLocal_55, func_73());
					PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_55, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_55, 0);
				}
			}
		}
	}

	return;
}

int func_73() // Hash - 0xDED80B4D ^0xD3C18941
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_74() // Hash - 0x8C6DC71 ^0x1217F181
{
	if (!PED::IS_PED_INJURED(pedLocal_55))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_77())
			{
				if (PED::IS_PED_IN_GROUP(pedLocal_55))
					PED::REMOVE_PED_FROM_GROUP(pedLocal_55);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_GO_TO_ENTITY) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_GO_TO_ENTITY) != 0)
					TASK::TASK_GO_TO_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), -1, 6f, 1073741824, 1073741824, 0);
			
				if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false))
					TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_55, 0, 0);
			
				if (!bLocal_125)
				{
					if (!func_71())
					{
						bLocal_125 = true;
					
						if (func_76())
							func_75(&uLocal_136, "stagdau", "stagd_nogood", "stagd_nogood_1", 4, 0, 0);
						else
							func_75(&uLocal_136, "stagdau", "stagd_nogood", "stagd_nogood_2", 4, 0, 0);
					}
				}
			}
			else
			{
				bLocal_125 = false;
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_GO_TO_ENTITY) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_GO_TO_ENTITY) == 0 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_PERFORM_SEQUENCE) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_PERFORM_SEQUENCE) == 0)
				{
					TASK::CLEAR_PED_TASKS(pedLocal_55);
				
					if (!PED::IS_PED_IN_GROUP(pedLocal_55))
					{
						PED::SET_PED_AS_GROUP_MEMBER(pedLocal_55, func_73());
						PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_55, true);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_55, 0);
					}
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(pedLocal_55) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false) && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_PERFORM_SEQUENCE) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_PERFORM_SEQUENCE) != 0)
		{
			PED::SET_PED_AS_GROUP_MEMBER(pedLocal_55, func_73());
			PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_55, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_55, 0);
		}
	}

	return;
}

BOOL func_75(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Hash - 0xB83D7D0 ^0xB83D7D0
{
	func_26(uParam0, 145, sParam1, iParam5, iParam6, 0);

	if (iParam4 > 7)
		if (iParam4 < 12)
			iParam4 = 7;

	Global_21732 = false;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 1;
	Global_22718 = 0;
	Global_22722 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_22729, sParam3, 24);
	Global_2883585 = 0;
	return func_5(sParam2, iParam4, false);
}

BOOL func_76() // Hash - 0xB366A366 ^0x79AE46B7
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), true))
			if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))))
				return true;

	return false;
}

BOOL func_77() // Hash - 0x52A1F378 ^0xF3CBD33F
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			if (!PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("RHINO")))
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1)
					return true;
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
			if (!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("RHINO"))
				return true;

	return false;
}

void func_78(Ped pedParam0, BOOL bParam1) // Hash - 0x558EE473 ^0x9DB6BEDF
{
	BOOL flag;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		flag = false;
	
		if (bParam1)
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(pedParam0))
				if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == PED::GET_VEHICLE_PED_IS_IN(pedParam0, false))
					flag = true;
		else
			flag = false;
	
		if (!PED::IS_PED_HEADTRACKING_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID()))
			if (!flag)
				TASK::TASK_LOOK_AT_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), -1, SLF_SLOW_TURN_RATE | 2048, 2);
		else if (flag)
			if (!AUDIO::IS_PED_IN_CURRENT_CONVERSATION(pedParam0))
				TASK::TASK_CLEAR_LOOK_AT(pedParam0);
	}

	return;
}

void func_79() // Hash - 0x7DEEEA9F ^0x16802967
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_55))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_55, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_93("stagd_chape_1"))
			{
				if (!HUD::DOES_BLIP_EXIST(blLocal_320))
					blLocal_320 = func_29(uLocal_67, true);
			
				bLocal_122 = true;
			}
		
			if (func_93("stagd_chape_3"))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			
				if (!PED::IS_PED_INJURED(pedLocal_55))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 30600);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_113);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
					}
				}
			}
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 13.5f, 13.5f, 13.5f, false, true, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(pedLocal_55, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (iLocal_49 == 0)
					{
						if (SYSTEM::TIMERB() > 5000)
						{
							if (iLocal_130 == 0)
							{
								if (!func_71())
								{
									func_92();
								
									if (func_4(&uLocal_136, "stagdau", sLocal_302, 4, 0, 0, 0))
										bLocal_310 = true;
								
									bLocal_121 = true;
									iLocal_130 = iLocal_130 + 1;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
					
						if (SYSTEM::TIMERB() > 5000)
						{
							if (iLocal_130 == 1)
							{
								if (!func_71())
								{
									HUD::DISPLAY_HUD(true);
									HUD::DISPLAY_RADAR(true);
									iLocal_130 = iLocal_130 + 1;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
					
						if (SYSTEM::TIMERB() > 2500)
						{
							if (iLocal_130 == 2)
							{
								if (!func_71())
								{
									func_92();
								
									if (func_16() == 0)
										func_4(&uLocal_136, "stagdau", "stagd_tailM", 4, 0, 0, 0);
								
									if (func_16() == 1)
										func_4(&uLocal_136, "stagdau", "stagd_tailF", 4, 0, 0, 0);
								
									if (func_16() == 2)
										func_4(&uLocal_136, "stagdau", "stagd_tailT", 4, 0, 0, 0);
								
									iLocal_130 = iLocal_130 + 1;
									SYSTEM::SETTIMERB(0);
								}
							}
						}
					}
				
					if (!bLocal_124)
					{
						if (iLocal_49 == 3)
						{
							if (!func_71())
							{
								if (iLocal_130 == 0)
								{
									func_4(&uLocal_136, "stagdau", "stagd_enough", 4, 0, 0, 0);
									iLocal_130 = iLocal_130 + 1;
								}
							}
						}
					
						if (iLocal_49 == 3)
							if (SYSTEM::TIMERB() > 5000)
								if (iLocal_130 == 0)
									if (!func_71())
										iLocal_130 = iLocal_130 + 1;
					
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_87, 150f, 150f, 150f, false, true, 0))
						{
							if (iLocal_303 == 0)
							{
								if (iLocal_307 == func_80(func_81()) + 11)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time10", 4, 0, 0, 0);
										iLocal_303 = 1;
									}
								}
							}
						
							if (iLocal_303 < 2)
							{
								if (iLocal_307 == func_80(func_81()) + 10)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time9", 4, 0, 0, 0);
										iLocal_303 = 2;
									}
								}
							}
						
							if (iLocal_303 < 3)
							{
								if (iLocal_307 == func_80(func_81()) + 9)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time8", 4, 0, 0, 0);
										iLocal_303 = 3;
									}
								}
							}
						
							if (iLocal_303 < 4)
							{
								if (iLocal_307 == func_80(func_81()) + 8)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time7", 4, 0, 0, 0);
										iLocal_303 = 4;
									}
								}
							}
						
							if (iLocal_303 < 5)
								if (iLocal_307 == func_80(func_81()) + 7)
									if (!func_71())
										iLocal_303 = 5;
						
							if (iLocal_303 < 6)
								if (iLocal_307 == func_80(func_81()) + 6)
									if (!func_71())
										iLocal_303 = 6;
						
							if (iLocal_303 < 7)
								if (iLocal_307 == func_80(func_81()) + 5)
									if (!func_71())
										iLocal_303 = 7;
						
							if (iLocal_303 < 8)
								if (iLocal_307 == func_80(func_81()) + 4)
									if (!func_71())
										iLocal_303 = 8;
						
							if (iLocal_303 < 9)
							{
								if (iLocal_307 == func_80(func_81()) + 3)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 9;
									}
								}
							}
						
							if (iLocal_303 < 10)
							{
								if (iLocal_307 == func_80(func_81()) + 2)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 10;
									}
								}
							}
						
							if (iLocal_303 < 11)
							{
								if (iLocal_307 == func_80(func_81()) + 1)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 11;
									}
								}
							}
						}
						else
						{
							if (iLocal_303 < 6)
							{
								if (iLocal_307 == func_80(func_81()) + 6)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = iLocal_303 + 1;
									}
								}
							}
						
							if (iLocal_303 < 7)
							{
								if (iLocal_307 == func_80(func_81()) + 5)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = iLocal_303 + 1;
									}
								}
							}
						
							if (iLocal_303 < 8)
							{
								if (iLocal_307 == func_80(func_81()) + 4)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = iLocal_303 + 1;
									}
								}
							}
						
							if (iLocal_303 < 9)
							{
								if (iLocal_307 == func_80(func_81()) + 3)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = iLocal_303 + 1;
									}
								}
							}
						
							if (iLocal_303 < 10)
							{
								if (iLocal_307 == func_80(func_81()) + 2)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = iLocal_303 + 1;
									}
								}
							}
						
							if (iLocal_303 < 11)
							{
								if (iLocal_307 == func_80(func_81()) + 1)
								{
									if (!func_71())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = iLocal_303 + 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return;
}

int func_80(int iParam0) // Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_81() // Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_91(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_90(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_89(&unk, CLOCK::GET_CLOCK_HOURS());
	func_84(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_83(&unk, CLOCK::GET_CLOCK_MONTH());
	func_82(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_82(var uParam0, int iParam1) // Hash - 0x15B9927E ^0x4A4674
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

void func_83(var uParam0, int iParam1) // Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_84(var uParam0, int iParam1) // Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_88(*uParam0);
	num2 = func_86(*uParam0);

	if (iParam1 < 1 || iParam1 > func_85(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_85(int iParam0, int iParam1) // Hash - 0xD3EBACB3 ^0xD3EBACB3
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

int func_86(int iParam0) // Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_87(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_88(int iParam0) // Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

void func_89(var uParam0, int iParam1) // Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_90(var uParam0, int iParam1) // Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_91(var uParam0, int iParam1) // Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

void func_92() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_25();
	return;
}

BOOL func_93(char* sParam0) // Hash - 0xBFB3A048 ^0xC37F964
{
	var string2;

	if (func_71())
	{
		TEXT_LABEL_COPY(&string2, { func_94() }, 4);
	
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &string2))
			return true;
	}

	return false;
}

struct<6> func_94() // Hash - 0xFF267AB8 ^0xED44CCFB
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

void func_95() // Hash - 0x6B2D5557 ^0x6A4AD36C
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	eViewModeContext camActiveViewModeContext2;
	eViewMode camViewModeForContext2;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_55))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_55, false))
		{
			if (!PED::IS_PED_INJURED(pedLocal_55))
			{
				if (!bLocal_129 && bLocal_118)
				{
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
					camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
				
					if (camActiveViewModeContext != ON_FOOT)
					{
						camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);
					
						if (camViewModeForContext != FIRST_PERSON)
						{
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_BEHIND, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_LEFT, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_RIGHT, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_DOWN, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_DOWN_ONLY, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT_ONLY, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT_ONLY, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UP, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UP_ONLY, true);
						}
					}
				
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedLocal_55, -2002.008f, 455.58f, 101.0381f, -2009.7614f, 453.2027f, 105.9135f, 12.4375f, false, true, 0) || SYSTEM::TIMERA() > 5000)
					{
						bLocal_129 = true;
						SYSTEM::SETTIMERA(0);
						func_58(true, true, true, false, false, false, false);
						HUD::CLEAR_HELP(true);
						HUD::DISPLAY_HUD(false);
						HUD::DISPLAY_RADAR(false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						VEHICLE::REQUEST_VEHICLE_ASSET(joaat("SUPERD"), 3);
					
						while (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("SUPERD")))
						{
							SYSTEM::WAIT(0);
						}
					
						caLocal_134 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.49612f, 103.55235f, -6.509435f, -0.037031f, -95.98762f, 29.001434f, false, 2);
						caLocal_135 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2014.3337f, 456.418f, 103.31525f, -6.198685f, -0.037031f, -100.57357f, 29.001434f, false, 2);
						CAM::SHAKE_CAM(caLocal_134, "HAND_SHAKE", 0.25f);
						CAM::SHAKE_CAM(caLocal_135, "HAND_SHAKE", 0.25f);
						CAM::SET_CAM_ACTIVE(caLocal_134, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						SYSTEM::WAIT(1000);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_135, caLocal_134, 4000, 1, 1);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						MISC::CLEAR_AREA_OF_VEHICLES(uLocal_99, 10f, false, false, false, false, false, false, 0);
					
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
						
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), uLocal_99, 8f, 8f, 8f, false, true, 0))
							{
								veLocal_133 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_133, true, false);
								VEHICLE::DELETE_VEHICLE(&veLocal_133);
							}
						}
					
						if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_59, 1);
						
							if (!HUD::DOES_BLIP_EXIST(blLocal_319))
							{
								blLocal_319 = func_68(veLocal_59, false, false);
								HUD::SET_BLIP_AS_FRIENDLY(blLocal_319, true);
							}
						}
					
						bLocal_117 = false;
					}
				}
			
				if (bLocal_129 && CAM::DOES_CAM_EXIST(caLocal_134))
				{
					if (SYSTEM::TIMERA() > 5700 && !bLocal_317)
					{
						if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							bLocal_317 = true;
						}
					}
				
					if (SYSTEM::TIMERA() > 6000)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						HUD::DISPLAY_HUD(true);
						HUD::DISPLAY_RADAR(true);
						func_58(false, true, true, false, false, false, false);
						CAM::SET_CAM_ACTIVE(caLocal_134, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DESTROY_CAM(caLocal_134, false);
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
			
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -2201.4172f, 4296.06f, 47.5076f, 100f, 100f, 100f, false, true, 0))
					MISC::CLEAR_AREA_OF_VEHICLES(uLocal_87, 5f, false, false, false, false, false, false, 0);
			}
		
			if (!bLocal_123)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_103, 100f, 100f, 100f, false, true, 0))
				{
					STREAMING::REQUEST_MODEL(joaat("IG_BESTMEN"));
				
					if (STREAMING::HAS_MODEL_LOADED(joaat("IG_BESTMEN")))
					{
						pedLocal_57 = PED::CREATE_PED(PED_TYPE_CIVMALE, joaat("IG_BESTMEN"), -2202.7468f, 4299.008f, 47.4293f, 73.0028f, true, true);
						func_96(&uLocal_136, 4, pedLocal_57, "BESTMAN", 0, 1);
						PED::SET_PED_COMPONENT_VARIATION(pedLocal_57, PV_COMP_HEAD, 0, 0, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_57, joaat("PLAYER"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_57, true);
						PED::SET_PED_CONFIG_FLAG(pedLocal_57, 185, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_57, iLocal_113);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
						bLocal_123 = true;
					}
				}
			}
		
			if (!bLocal_124)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_77, 20f, 20f, 20f, false, true, 0))
				{
					func_27();
				
					if (!func_71())
					{
						func_4(&uLocal_136, "stagdau", "stagd_spot", 4, 0, 0, 0);
						bLocal_124 = true;
					}
				}
			}
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_70, uLocal_73, fLocal_76, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedLocal_55, uLocal_70, uLocal_73, fLocal_76, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(pedLocal_55, uLocal_67, 0f, 0f, 2f, true, true, 0) && func_66(true, false, true) || bLocal_118)
			{
				switch (iLocal_49)
				{
					case 0:
						HUD::REMOVE_BLIP(&blLocal_320);
					
						if (!bLocal_118)
						{
							uLocal_67 = { uLocal_103 };
						
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
									VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 4, false);
						
							if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
							{
								camActiveViewModeContext2 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
							
								if (camActiveViewModeContext2 != ON_FOOT)
								{
									camViewModeForContext2 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext2);
								
									if (camViewModeForContext2 == FIRST_PERSON)
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 5000, 0, 2);
									}
									else
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_59, 5000, SLF_EXTEND_YAW_LIMIT | 2048, 4);
										CAM::SET_GAMEPLAY_VEHICLE_HINT(veLocal_59, 0f, 0f, 0f, true, -1, 3000, 2000);
									}
								}
							}
						
							func_27();
						
							if (!func_71())
							{
								func_4(&uLocal_136, "stagdau", "stagd_wait1", 4, 0, 0, 0);
							
								if (!PED::IS_PED_INJURED(pedLocal_55))
								{
									TASK::CLEAR_PED_TASKS(pedLocal_55);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2013.0945f, 460.3515f, 101.8024f, 2f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_99, 3f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_113);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
									PED::SET_PED_KEEP_TASK(pedLocal_55, true);
								}
							
								bLocal_118 = true;
								SYSTEM::SETTIMERA(0);
							}
						}
					
						if (!PED::IS_PED_INJURED(pedLocal_55) && !ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
						{
							if (bLocal_118 && ENTITY::IS_ENTITY_AT_COORD(pedLocal_55, uLocal_99, 1f, 1f, 1f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false))
							{
								if (PED::IS_PED_IN_GROUP(pedLocal_55))
								{
									if (!func_71())
										if (func_16() == 2)
											func_4(&uLocal_136, "stagdau", "stagd_reply", 4, 0, 0, 0);
								
									PED::REMOVE_PED_FROM_GROUP(pedLocal_55);
								}
							
								if (ENTITY::IS_ENTITY_OCCLUDED(pedLocal_55))
								{
									if (!PED::IS_PED_INJURED(pedLocal_55))
									{
										ENTITY::SET_ENTITY_VISIBLE(pedLocal_55, false, false);
										ENTITY::SET_ENTITY_COLLISION(pedLocal_55, false, false);
										ENTITY::SET_ENTITY_INVINCIBLE(pedLocal_55, true);
										ENTITY::FREEZE_ENTITY_POSITION(pedLocal_55, true);
									}
								
									if (SYSTEM::TIMERA() > 15000)
									{
										if (!PED::IS_PED_INJURED(pedLocal_55))
										{
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_HAIR, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_HEAD, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_UPPR, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_LOWR, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_JBIB, 0, 0, 0);
											ENTITY::SET_ENTITY_VISIBLE(pedLocal_55, true, false);
											ENTITY::SET_ENTITY_COLLISION(pedLocal_55, true, false);
											ENTITY::SET_ENTITY_INVINCIBLE(pedLocal_55, false);
											ENTITY::FREEZE_ENTITY_POSITION(pedLocal_55, false);
											ENTITY::SET_ENTITY_COORDS(pedLocal_55, uLocal_99, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(pedLocal_55, 106.5078f);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_55, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_55, BF_AlwaysFlee, true);
											PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(pedLocal_55, true);
											TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, -1, SLF_WHILE_NOT_IN_FOV, 4);
										
											if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
											{
												TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
												TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 4);
												TASK::TASK_ENTER_VEHICLE(0, veLocal_59, -1, 0, 2f, 1, 0);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
												TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_113);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
											}
										}
									
										SYSTEM::SETTIMERA(0);
										uLocal_67 = { uLocal_103 };
										uLocal_70 = { uLocal_106 };
										uLocal_73 = { uLocal_109 };
										fLocal_76 = fLocal_112;
										iLocal_49 = 1;
									}
								}
							}
						}
						break;
				
					case 1:
						if (!PED::IS_PED_INJURED(pedLocal_55) && !ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, veLocal_59, 5f, 5f, 5f, false, true, 0) && !bLocal_128)
							{
								func_4(&uLocal_136, "stagdau", "stagd_suit", 4, 0, 0, 0);
								bLocal_128 = true;
							}
						
							if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_59, false))
								{
									if (func_4(&uLocal_136, "stagdau", "stagd_chape", 4, 0, 0, 0))
									{
										iLocal_49 = 2;
										bLocal_118 = false;
										iLocal_130 = 0;
									}
								}
								else
								{
									if (iLocal_308 == 0)
										iLocal_308 = MISC::GET_GAME_TIMER();
								
									if (iLocal_308 != 0 && MISC::GET_GAME_TIMER() > iLocal_308 + 6000)
									{
										func_4(&uLocal_136, "stagdau", "stagd_getin", 4, 0, 0, 0);
										iLocal_308 = 0;
									}
								
									SYSTEM::SETTIMERA(0);
								}
							}
						}
						break;
				
					case 2:
						if (!bLocal_118)
						{
							func_27();
						
							if (func_4(&uLocal_136, "stagdau", "stagd_hairc", 4, 0, 0, 0))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
									{
										veLocal_132 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
										VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, false);
									}
								}
							
								if (!PED::IS_PED_INJURED(pedLocal_57) && !PED::IS_PED_INJURED(pedLocal_55))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false))
									{
										veLocal_132 = PED::GET_VEHICLE_PED_IS_IN(pedLocal_55, false);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
										TASK::TASK_ENTER_VEHICLE(0, veLocal_132, -1, 2, 1f, 1, 0);
										TASK::TASK_CLEAR_LOOK_AT(0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
										TASK::TASK_PERFORM_SEQUENCE(pedLocal_57, iLocal_113);
										PED::SET_PED_CONFIG_FLAG(pedLocal_57, 185, false);
									}
									else
									{
										TASK::TASK_GO_TO_ENTITY(pedLocal_57, pedLocal_55, -1, 8f, 1073741824, 1073741824, 0);
									}
								
									if (!HUD::DOES_BLIP_EXIST(blLocal_322))
										blLocal_322 = func_70(pedLocal_57, false, 145);
								
									if (HUD::DOES_BLIP_EXIST(blLocal_320))
										HUD::REMOVE_BLIP(&blLocal_320);
								}
							
								SYSTEM::SETTIMERA(0);
								bLocal_120 = true;
								bLocal_118 = true;
							}
						}
					
						if (bLocal_118 && !PED::IS_PED_INJURED(pedLocal_55))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_55, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 || SYSTEM::TIMERA() > 12000)
							{
								uLocal_67 = { uLocal_77 };
								uLocal_70 = { uLocal_80 };
								uLocal_73 = { uLocal_83 };
								fLocal_76 = fLocal_86;
								STREAMING::REQUEST_MODEL(joaat("IG_BRIDE"));
								STREAMING::REQUEST_MODEL(joaat("WASHINGTON"));
								STREAMING::REQUEST_MODEL(joaat("BALLER2"));
								STREAMING::REQUEST_MODEL(joaat("PRIMO"));
							
								if (STREAMING::HAS_MODEL_LOADED(joaat("IG_BRIDE")) && STREAMING::HAS_MODEL_LOADED(joaat("WASHINGTON")) && STREAMING::HAS_MODEL_LOADED(joaat("BALLER2")) && STREAMING::HAS_MODEL_LOADED(joaat("PRIMO")))
								{
									pedLocal_56 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, joaat("IG_BRIDE"), -330.36f, 6154.03f, 30.8f, 90f, true, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_56, true);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_56, iLocal_113);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
									pedLocal_58 = PED::CREATE_PED(PED_TYPE_CIVMALE, joaat("IG_BESTMEN"), -333.3692f, 6157.6436f, 30.489f, 83.2763f, true, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_58, true);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_58, PLAYER::PLAYER_PED_ID(), -1);
									PED::SET_PED_COMPONENT_VARIATION(pedLocal_58, PV_COMP_HEAD, 1, 0, 0);
									uLocal_60[0] = VEHICLE::CREATE_VEHICLE(joaat("WASHINGTON"), -342.1295f, 6141.4043f, 30.4839f, 133.4604f, true, true, false);
									uLocal_60[1] = VEHICLE::CREATE_VEHICLE(joaat("BALLER2"), -338.3777f, 6137.41f, 30.476f, 135.6866f, true, true, false);
									uLocal_60[2] = VEHICLE::CREATE_VEHICLE(joaat("PRIMO"), -329.4687f, 6143.247f, 30.4893f, 313.82f, true, true, false);
									uLocal_60[3] = VEHICLE::CREATE_VEHICLE(joaat("WASHINGTON"), -322.3235f, 6135.4272f, 30.4924f, 316.5898f, true, true, false);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_60[0], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_60[1], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_60[2], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_60[3], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									iLocal_49 = 3;
									bLocal_118 = false;
									iLocal_130 = 0;
								}
							}
						}
						break;
				
					case 3:
						if (!bLocal_118)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
								{
									VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, false);
									bLocal_118 = true;
									SYSTEM::WAIT(3000);
									func_27();
									SYSTEM::WAIT(0);
								}
							}
						}
						break;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_DEAD(pedLocal_55, false))
		{
			func_183();
		}
	}

	return;
}

void func_96(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Hash - 0x6C235EE0 ^0x9E57F206
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

void func_97() // Hash - 0x7BF6846D ^0xF96D4DB8
{
	if (bLocal_310 && iLocal_307 != func_80(func_81()) && !CAM::DOES_CAM_EXIST(caLocal_134))
		func_101(((iLocal_307 * 1000 * 60) - (func_80(func_81()) * 1000 * 60)) + ((iLocal_306 * 1000) - (func_104(func_81()) * 1000)), _("TIME"), 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);

	if (iLocal_306 == 0)
		if (iLocal_307 == func_80(func_81()) + 1 && iLocal_306 == func_104(func_81()) - 55 || iLocal_306 == func_104(func_81()) - 56 || iLocal_306 == func_104(func_81()) - 57 || iLocal_306 == func_104(func_81()) - 58 || iLocal_306 == func_104(func_81()) - 59)
			func_100();

	if (iLocal_307 == func_80(func_81()))
	{
		func_100();
		func_98();
	
		if (!func_71())
		{
			func_4(&uLocal_136, "stagdau", "stagd_failti", 4, 0, 0, 0);
		
			if (!PED::IS_PED_INJURED(pedLocal_55))
				TASK::TASK_USE_MOBILE_PHONE(pedLocal_55, true, 1);
		
			if (!PED::IS_PED_INJURED(pedLocal_56))
				TASK::TASK_SMART_FLEE_PED(pedLocal_56, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
		
			if (!PED::IS_PED_INJURED(pedLocal_58))
				TASK::TASK_SMART_FLEE_PED(pedLocal_58, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
		
			SYSTEM::WAIT(8500);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
					VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 3, false);
		
			SYSTEM::WAIT(2000);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_55, false))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_55);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 5000, SLF_WHILE_NOT_IN_FOV, 2);
				TASK::TASK_LOOK_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), 5000, SLF_WHILE_NOT_IN_FOV, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_55, 0, 0);
				PED::REMOVE_PED_FROM_GROUP(pedLocal_55);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_57, false))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 5000, 0, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_57, 500, 0);
			}
		
			SYSTEM::WAIT(1000);
		
			if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false))
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_59, false))
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_55, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
			
				if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == veLocal_59)
				{
					TASK::TASK_ENTER_VEHICLE(0, veLocal_59, -1, -1, 1f, 8, 0);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, veLocal_59, PLAYER::PLAYER_PED_ID(), 8, 15f, 786469, 10f, 10f, true);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
				}
			
				TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_113);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
				PED::SET_PED_KEEP_TASK(pedLocal_55, true);
			
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_57, false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
				
					if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == veLocal_59)
					{
						TASK::TASK_ENTER_VEHICLE(0, veLocal_59, -1, 0, 1073741824, 1, 0);
						TASK::TASK_PAUSE(0, 100000);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
					}
				
					TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_57, iLocal_113);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
					PED::SET_PED_KEEP_TASK(pedLocal_57, true);
				}
			}
		
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		
			while (func_71())
			{
				SYSTEM::WAIT(0);
			}
		
			func_2();
		}
	}

	return;
}

void func_98() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_99();
	return;
}

void func_99() // Hash - 0x21027D29 ^0xBEB9ECFD
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

void func_100() // Hash - 0x38B15317 ^0x254531DF
{
	int clockHours;
	int clockMinutes;
	int clockSeconds;

	clockHours = CLOCK::GET_CLOCK_HOURS();
	clockMinutes = CLOCK::GET_CLOCK_MINUTES();
	clockSeconds = CLOCK::GET_CLOCK_SECONDS();

	if (iLocal_309 == 0)
	{
		if (clockMinutes == 55 && clockSeconds >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 1)
	{
		if (clockMinutes == 56 && clockSeconds >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 2)
	{
		if (clockMinutes == 56 && clockSeconds >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 3)
	{
		if (clockMinutes == 57 && clockSeconds >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 4)
	{
		if (clockMinutes == 57 && clockSeconds >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 5)
	{
		if (clockMinutes == 58 && clockSeconds >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 6)
	{
		if (clockMinutes == 58 && clockSeconds >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 7)
	{
		if (clockMinutes == 58 && clockSeconds >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 8)
	{
		if (clockMinutes == 58 && clockSeconds >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 9)
	{
		if (clockMinutes == 59 && clockSeconds >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 10)
	{
		if (clockMinutes == 59 && clockSeconds >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 11)
	{
		if (clockMinutes == 59 && clockSeconds >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 12)
	{
		if (clockMinutes == 59 && clockSeconds >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}
	else if (iLocal_309 == 13)
	{
		if (clockMinutes >= 0 && clockHours == iLocal_307)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_309 = iLocal_309 + 1;
		}
	}

	return;
}

void func_101(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Hash - 0xE816D297 ^0xE816D297
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_103(7, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1655472.f_1 = 1;
		func_102(7, num);
		Global_1655472.f_4659[num] = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1655472.f_4659.f_11[num /*16*/], sParam1, 64);
		Global_1655472.f_4659.f_172[num] = iParam2;
		Global_1655472.f_4659.f_216[num] = iParam3;
		Global_1655472.f_4659.f_183[num] = iParam4;
		Global_1655472.f_4659.f_194[num] = iParam5;
		Global_1655472.f_4659.f_249[num] = iParam6;
		Global_1655472.f_4659.f_260[num] = iParam7;
		Global_1655472.f_4659.f_205[num] = iParam8;
		Global_1655472.f_4659.f_314[num] = iParam9;
		Global_1655472.f_4659.f_325[num] = iParam10;
		Global_1655472.f_4659.f_357[num] = iParam11;
		Global_1655472.f_4659.f_238[num] = iParam12;
		Global_1655472.f_4659.f_271[num] = iParam13;
		Global_1655472.f_4659.f_368[num] = iParam14;
		Global_1655472.f_4659.f_379[num] = iParam15;
		Global_1655472.f_4659.f_390[num] = iParam16;
		Global_1655472.f_4659.f_227[num] = iParam17;
	}

	return;
}

void func_102(int iParam0, int iParam1) // Hash - 0xB94ADBE4 ^0x5A6F4E87
{
	MISC::SET_BIT(&Global_1655472.f_7009[iParam0], iParam1);
	return;
}

BOOL func_103(int iParam0, int iParam1) // Hash - 0x3E555E75 ^0x3E555E75
{
	return IS_BIT_SET(Global_1655472.f_7009[iParam0], iParam1);
}

int func_104(int iParam0) // Hash - 0xC188C91C ^0x48884C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

void func_105() // Hash - 0x618018F0 ^0x61F73777
{
	if (!PED::IS_PED_INJURED(pedLocal_55))
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_59, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (PED::IS_PED_IN_VEHICLE(pedLocal_55, veLocal_59, false) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(veLocal_59))
				if (!func_71())
					if (func_106())
						func_4(&uLocal_136, "stagdau", "stagd_crash", 4, 0, 0, 0);
					else
						func_4(&uLocal_136, "stagdau", "stagd_bump1", 4, 0, 0, 0);
			else if (PED::IS_PED_IN_VEHICLE(pedLocal_55, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				if (!func_71())
					func_4(&uLocal_136, "stagdau", "stagd_bump1", 4, 0, 0, 0);

	return;
}

BOOL func_106() // Hash - 0x6E373505 ^0x528400E3
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return true;

	return false;
}

void func_107() // Hash - 0x6DAB00B4 ^0xA5ED2A4A
{
	if (!PED::IS_PED_INJURED(pedLocal_55))
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(pedLocal_55, false);

	if (!PED::IS_PED_INJURED(pedLocal_57))
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(pedLocal_57, false);

	if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0) || iLocal_49 == 1 || bLocal_126 || bLocal_127 || bLocal_125 || bLocal_118)
		if (iLocal_49 >= 2 && bLocal_120 && iLocal_49 != 1 && !bLocal_126 && !bLocal_127 && !bLocal_125 && !bLocal_118)
			if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_57, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0))
				if (func_109())
					func_108(0);
			else if (func_71() && !func_109())
				func_108(1);
		else if (func_109())
			func_108(0);
	else if (func_71() && !func_109())
		func_108(1);

	return;
}

void func_108(int iParam0) // Hash - 0x67413911 ^0x67413911
{
	Global_22736 = iParam0;
	return;
}

BOOL func_109() // Hash - 0xB8E6BAC9 ^0xB8E6BAC9
{
	if (Global_22736 == 1)
		return true;

	return false;
}

void func_110() // Hash - 0xA5C5F56A ^0x77B1ED1
{
	if (CLOCK::GET_CLOCK_HOURS() > 2 && CLOCK::GET_CLOCK_HOURS() < 15 && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
	}
	else
	{
		if (!PED::IS_PED_INJURED(pedLocal_55))
		{
			TASK::CLEAR_PED_TASKS(pedLocal_55);
			func_27();
			SYSTEM::WAIT(0);
			func_4(&uLocal_136, "stagdau", "stagd_failda", 4, 0, 0, 0);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_66))
				ENTITY::DETACH_ENTITY(obLocal_66, true, true);
		}
	
		while (func_71())
		{
			SYSTEM::WAIT(0);
		}
	
		func_2();
	}

	return;
}

void func_111() // Hash - 0x28864C6 ^0xA929E74F
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(pedLocal_55))
	{
		if (!bLocal_115)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 130f, 60f, 50f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(pedLocal_55) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 10f, 10f, 10f, false, true, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(blLocal_321))
				{
					blLocal_321 = func_70(pedLocal_55, false, 145);
					HUD::SHOW_HEIGHT_ON_BLIP(blLocal_321, false);
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 4);
				}
			
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 10f, 10f, 10f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(blLocal_321))
						HUD::SHOW_HEIGHT_ON_BLIP(blLocal_321, true);
				
					SYSTEM::SETTIMERB(0);
					func_98();
				
					while (func_71())
					{
						SYSTEM::WAIT(0);
					}
				
					if (!func_71())
					{
						if (func_16() == 0)
							func_4(&uLocal_136, "stagdau", "stagd_greetM", 4, 0, 0, 0);
					
						if (func_16() == 1)
							func_4(&uLocal_136, "stagdau", "stagd_greetF", 4, 0, 0, 0);
					
						if (func_16() == 2)
							func_4(&uLocal_136, "stagdau", "stagd_greetT", 4, 0, 0, 0);
					}
				
					bLocal_115 = true;
				}
			}
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(pedLocal_55))
			{
				if (!func_149() && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1131.777f, 2636.418f, 15.589f, -1040.995f, 2717.077f, 31.715f, 60.75f, false, true, 0) && HUD::DOES_BLIP_EXIST(blLocal_321))
				{
					if (!func_71())
						func_4(&uLocal_136, "stagdau", "stagd_greet2", 4, 0, 0, 0);
				
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						veLocal_65 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				
					func_112(true);
				}
			}
		}
		else if (!bLocal_301)
		{
			if (!PED::IS_PED_INJURED(pedLocal_55))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 25f, 25f, 25f, false, true, 0))
				{
					func_27();
					SYSTEM::WAIT(0);
					func_4(&uLocal_136, "stagdau", "stagd_leave", 4, 0, 0, 0);
					bLocal_301 = true;
				}
			}
		}
	}

	return;
}

int func_112(BOOL bParam0) // Hash - 0x3A78A0E1 ^0x6BB31D9
{
	if (func_116())
	{
		Global_113638 = true;
		Global_113635 = MISC::GET_GAME_TIMER();
	
		if (func_45(Global_113637))
			func_113(0);
	
		HUD::SET_MISSION_NAME(true, _("Random Event"));
	
		if (bParam0 && func_45(Global_113637))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_113(int iParam0) // Hash - 0x3B4E6AAB ^0x52844A7B
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_114(func_115(iParam0), -1);
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
					func_114(func_115(iParam0), -1);
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
					func_114(func_115(iParam0), -1);
					Global_113648.f_24997.f_4 = Global_113648.f_24997.f_4 + 1;
					MISC::SET_BIT(&Global_113644, 2);
				}
			}
			break;
	}

	return;
}

void func_114(char* sParam0, int iParam1) // Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

char* func_115(int iParam0) // Hash - 0x9F460003 ^0x5CADB8F2
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

BOOL func_116() // Hash - 0x8129EEA4 ^0x48B13301
{
	switch (func_117(&Global_32223, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_117(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Hash - 0x8F9349A ^0xC5C097C1
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98159.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_121(0))
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
		if (!func_119(iParam2))
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
			func_118(uParam0, iParam4);
	}

	return 2;
}

void func_118(var uParam0, int iParam1) // Hash - 0x6AC97785 ^0x6AC97785
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

BOOL func_119(int iParam0) // Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_120(iParam0, Global_43257);
}

BOOL func_120(int iParam0, int iParam1) // Hash - 0x1FD727E0 ^0x1FD727E0
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

BOOL func_121(int iParam0) // Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43257 == 15)
		return false;

	if (func_119(iParam0))
		return false;

	return true;
}

void func_122() // Hash - 0x7038A45C ^0x3300310B
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_55))
	{
		if (!PED::IS_PED_INJURED(pedLocal_55))
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), 3f))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_55);
				ENTITY::SET_ENTITY_HEALTH(pedLocal_55, 99, 0);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::GET_PLAYERS_LAST_VEHICLE()) < 3f)
				{
					ENTITY::FREEZE_ENTITY_POSITION(pedLocal_55, true);
				}
				else
				{
					ENTITY::FREEZE_ENTITY_POSITION(pedLocal_55, false);
				
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), pedLocal_55))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_55);
						ENTITY::SET_ENTITY_HEALTH(pedLocal_55, 99, 0);
					}
				}
			}
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_55, 2f, 2f, 2f, false, true, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (func_66(true, false, true))
					{
						if (!bLocal_311)
						{
							func_112(true);
							func_58(true, true, true, false, false, false, false);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
							HUD::CLEAR_HELP(true);
							HUD::DISPLAY_HUD(false);
							HUD::DISPLAY_RADAR(false);
						
							if (!PED::IS_PED_INJURED(pedLocal_55))
							{
								MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), 5f, true, false, false, false);
								GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f);
							}
						
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), pedLocal_55, 5f, 5f, 5f, false, true, 0))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(pedLocal_55, true) - { 1.5f, 4f, 3f }, true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1084227584);
								}
							}
						
							if (!PED::IS_PED_INJURED(pedLocal_55))
							{
								iLocal_318 = PED::CREATE_SYNCHRONIZED_SCENE(-935.57f, 2767.616f, 24.448f, 2.433f, 0.152f, 53.743f, 2);
								caLocal_134 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_318, 0.158f);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(caLocal_134, iLocal_318, "untie_cam", "re@stag_do@");
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_55);
								TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_55, iLocal_318, "re@stag_do@", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_55, false, false);
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_318, "re@stag_do@", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
								CAM::SET_CAM_ACTIVE(caLocal_134, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								bLocal_311 = true;
							}
						}
					}
				}
			}
		}
		else
		{
			func_2();
		}
	}

	if (bLocal_311 && !bLocal_313)
	{
		func_27();
		SYSTEM::WAIT(0);
	
		if (func_16() == 0)
			func_4(&uLocal_136, "stagdau", "stagd_untieM", 4, 0, 0, 0);
	
		if (func_16() == 1)
			func_4(&uLocal_136, "stagdau", "stagd_untieF", 4, 0, 0, 0);
	
		if (func_16() == 2)
			func_4(&uLocal_136, "stagdau", "stagd_untieT", 4, 0, 0, 0);
	
		bLocal_313 = true;
	}

	if (bLocal_311 && !bLocal_312)
	{
		if (!bLocal_316)
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_318) > 0.2f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_318) < 0.3f)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ROPE_CUT", PLAYER::PLAYER_PED_ID(), "ROPE_CUT_SOUNDSET", false, 0);
				bLocal_316 = true;
			}
		}
	
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_318) > 0.46470588f && !bLocal_317)
		{
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				bLocal_317 = true;
			}
		}
	
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_318) > 0.5f)
			bLocal_312 = true;
	
		if (func_123(1000))
		{
			CAM::DO_SCREEN_FADE_OUT(800);
		
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				SYSTEM::WAIT(0);
			}
		
			bLocal_312 = true;
			bLocal_315 = true;
		}
	}

	if (bLocal_312 && !bLocal_314)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_66))
			ENTITY::DETACH_ENTITY(obLocal_66, true, true);
	
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -936.6537f, 2767.4968f, 24.4289f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 208.4017f);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
		CAM::SET_CAM_ACTIVE(caLocal_134, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(caLocal_134, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
		func_58(false, true, true, false, false, false, false);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
	
		if (!PED::IS_PED_INJURED(pedLocal_55))
		{
			ENTITY::FREEZE_ENTITY_POSITION(pedLocal_55, false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_55);
			PED::SET_PED_CAN_RAGDOLL(pedLocal_55, true);
			ENTITY::SET_ENTITY_COORDS(pedLocal_55, -935.6716f, 2767.7717f, 24.4289f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(pedLocal_55, 136.9073f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_55, false, false);
		}
	
		if (bLocal_315)
		{
			CAM::DO_SCREEN_FADE_IN(800);
		
			while (CAM::IS_SCREEN_FADING_IN())
			{
				SYSTEM::WAIT(0);
			}
		
			bLocal_315 = false;
		}
	
		bLocal_317 = false;
		bLocal_314 = true;
	}

	if (bLocal_314 && !PED::IS_PED_INJURED(pedLocal_55))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 20f, 20f, 20f, false, true, 0) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PLAYER::GET_PLAYERS_LAST_VEHICLE()) >= 1 && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) != joaat("RHINO"))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, SLF_WHILE_NOT_IN_FOV, 3);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6500);
				TASK::TASK_ENTER_VEHICLE(0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_113);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
			}
			else if (!PED::IS_PED_IN_GROUP(pedLocal_55))
			{
				PED::SET_PED_AS_GROUP_MEMBER(pedLocal_55, func_73());
				PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_55, true);
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_55, 0);
			}
		}
		else if (!PED::IS_PED_IN_GROUP(pedLocal_55))
		{
			PED::SET_PED_AS_GROUP_MEMBER(pedLocal_55, func_73());
			PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_55, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_55, 0);
		}
	
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_55, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		blLocal_320 = func_29(uLocal_67, true);
		bLocal_114 = true;
		bLocal_116 = true;
		STREAMING::REMOVE_ANIM_DICT("re@stag_do@");
		STREAMING::REMOVE_ANIM_DICT("re@stag_do@idle_a");
		iLocal_305 = func_80(func_81());
		iLocal_307 = iLocal_305 + 5;
		iLocal_304 = func_104(func_81());
	
		if (iLocal_304 >= 30)
		{
			iLocal_306 = 0;
			iLocal_307 = iLocal_307 + 1;
		}
	
		if (iLocal_307 > 24)
			iLocal_307 = iLocal_307 - 24;
	
		if (iLocal_307 == 0)
			sLocal_302 = "stagd_ptime0";
		else if (iLocal_307 == 1)
			sLocal_302 = "stagd_ptime1";
		else if (iLocal_307 == 2)
			sLocal_302 = "stagd_ptime2";
		else if (iLocal_307 == 3)
			sLocal_302 = "stagd_ptime3";
		else if (iLocal_307 == 4)
			sLocal_302 = "stagd_ptime4";
		else if (iLocal_307 == 5)
			sLocal_302 = "stagd_ptime5";
		else if (iLocal_307 == 6)
			sLocal_302 = "stagd_ptime6";
		else if (iLocal_307 == 7)
			sLocal_302 = "stagd_ptime7";
		else if (iLocal_307 == 8)
			sLocal_302 = "stagd_ptime8";
		else if (iLocal_307 == 9)
			sLocal_302 = "stagd_ptime9";
		else if (iLocal_307 == 10)
			sLocal_302 = "stagd_ptim10";
		else if (iLocal_307 == 11)
			sLocal_302 = "stagd_ptim11";
		else if (iLocal_307 == 12)
			sLocal_302 = "stagd_ptim12";
		else if (iLocal_307 == 13)
			sLocal_302 = "stagd_ptim13";
		else if (iLocal_307 == 14)
			sLocal_302 = "stagd_ptim14";
		else if (iLocal_307 == 15)
			sLocal_302 = "stagd_ptim15";
		else if (iLocal_307 == 16)
			sLocal_302 = "stagd_ptim16";
		else if (iLocal_307 == 17)
			sLocal_302 = "stagd_ptim17";
		else if (iLocal_307 == 18)
			sLocal_302 = "stagd_ptim18";
		else if (iLocal_307 == 19)
			sLocal_302 = "stagd_ptim19";
		else if (iLocal_307 == 20)
			sLocal_302 = "stagd_ptim20";
		else if (iLocal_307 == 21)
			sLocal_302 = "stagd_ptim21";
		else if (iLocal_307 == 22)
			sLocal_302 = "stagd_ptim22";
		else if (iLocal_307 == 23)
			sLocal_302 = "stagd_ptim23";
	}

	return;
}

BOOL func_123(int iParam0) // Hash - 0x7FAC01B4 ^0x9388B6EC
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
			Global_27 = MISC::GET_GAME_TIMER();
	
		Global_28 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_27 > iParam0)
		{
			if (func_124())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_124() // Hash - 0x57459B9C ^0x9A36D842
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

void func_125() // Hash - 0xF3E62AA9 ^0x48C89B3C
{
	if (!PED::IS_PED_INJURED(pedLocal_55))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true, false);
	
		veLocal_133 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(pedLocal_55, false), 30f, 0, 4);
	
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_133, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_133, -1, false))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(veLocal_133, pedLocal_55, 30f, 30f, 30f, false, true, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_133, true, false);
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_133, false))
					{
						VEHICLE::START_VEHICLE_HORN(veLocal_133, 3000, 0, false);
					
						if (!PED::IS_PED_INJURED(pedLocal_55))
							if (!func_71() && !bLocal_115)
								func_4(&uLocal_136, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
				}
				else
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_133);
				}
			}
		}
	}

	return;
}

void func_126() // Hash - 0xD3ADA56D ^0x10639AB8
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

void func_127() // Hash - 0xDFECBF9E ^0xDC6F09D8
{
	func_128(39, true);
	func_128(40, true);
	func_128(41, true);
	func_128(42, true);
	func_128(43, true);
	func_128(44, true);
	STREAMING::REQUEST_MODEL(joaat("U_M_Y_STAGGRM_01"));
	STREAMING::REQUEST_MODEL(joaat("SUPERD"));
	STREAMING::REQUEST_MODEL(joaat("PROP_STAG_DO_ROPE"));

	while (!STREAMING::HAS_MODEL_LOADED(joaat("U_M_Y_STAGGRM_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("SUPERD")) || !STREAMING::HAS_MODEL_LOADED(joaat("PROP_STAG_DO_ROPE")))
	{
		SYSTEM::WAIT(0);
	}

	STREAMING::REQUEST_ANIM_DICT("re@stag_do@");
	STREAMING::REQUEST_ANIM_DICT("re@stag_do@idle_a");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1);

	while (!STREAMING::HAS_ANIM_DICT_LOADED("re@stag_do@") || !STREAMING::HAS_ANIM_DICT_LOADED("re@stag_do@idle_a") || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1))
	{
		SYSTEM::WAIT(0);
	}

	pedLocal_55 = PED::CREATE_PED(PED_TYPE_MISSION, joaat("U_M_Y_STAGGRM_01"), -935.57f, 2767.616f, 24.448f, 140.5f, true, true);
	AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_55, "GROOM");
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_55, joaat("PLAYER"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_55, true);
	PED::SET_PED_MONEY(pedLocal_55, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_HAIR, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_HEAD, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_UPPR, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_LOWR, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_JBIB, 1, 0, 0);
	TASK::TASK_SET_DECISION_MAKER(pedLocal_55, joaat("EMPTY"));
	PED::SET_PED_COMBAT_MOVEMENT(pedLocal_55, CM_WillRetreat);
	PED::SET_PED_CONFIG_FLAG(pedLocal_55, 206, true);
	PED::SET_PED_CONFIG_FLAG(pedLocal_55, 134, true);
	obLocal_66 = OBJECT::CREATE_OBJECT(joaat("PROP_STAG_DO_ROPE"), ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_66, pedLocal_55, PED::GET_PED_BONE_INDEX(pedLocal_55, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	veLocal_59 = VEHICLE::CREATE_VEHICLE(joaat("SUPERD"), -2009.0146f, 455.3556f, 101.6528f, 274.8103f, false, false, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_59, true);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(veLocal_59, 0f);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_59, 3);
	VEHICLE::SET_VEHICLE_MOD_KIT(veLocal_59, 0);
	VEHICLE::SET_VEHICLE_MOD_COLOR_1(veLocal_59, 0, 73, 0);
	VEHICLE::SET_VEHICLE_MOD_COLOR_2(veLocal_59, 2, 48);
	VEHICLE::SET_VEHICLE_MOD(veLocal_59, 11, 1, false);
	VEHICLE::SET_VEHICLE_MOD(veLocal_59, 12, 1, false);
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("SUPERD"), 3);
	ENTITY::SET_ENTITY_LOD_DIST(veLocal_59, 10000);
	VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(veLocal_59, 5f);
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(veLocal_59);
	uLocal_77 = { -352.88f, 6164.31f, 30.5f };
	uLocal_80 = { -355.2565f, 6164.9307f, 30.2944f };
	uLocal_83 = { -330.5575f, 6139.8516f, 34.4886f };
	fLocal_86 = 25.375f;
	uLocal_87 = { -343.5804f, 6156.198f, 30.489f };
	uLocal_90 = { -1991.1265f, 457.991f, 101.1808f };
	uLocal_93 = { -2002.6903f, 460.539f, 99.828f };
	uLocal_96 = { -1997.6046f, 445.6651f, 105.0519f };
	uLocal_99 = { -2026.817f, 450.3329f, 104.8771f };
	fLocal_102 = 24.6875f;
	uLocal_103 = { -2205.3506f, 4298.7896f, 47.265f };
	uLocal_106 = { -2207.5254f, 4301.697f, 47.1803f };
	uLocal_109 = { -2195.6367f, 4295.4067f, 51.1889f };
	fLocal_112 = 12.5625f;
	uLocal_67 = { uLocal_90 };
	uLocal_70 = { uLocal_93 };
	uLocal_73 = { uLocal_96 };
	fLocal_76 = fLocal_102;
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("SUPERD"), true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_87 - { 10f, 10f, 10f }, uLocal_87 + { 10f, 10f, 10f }, false, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_87 - { 20f, 20f, 20f }, uLocal_87 + { 20f, 20f, 20f }, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(ENTITY::GET_ENTITY_COORDS(pedLocal_55, false) - { 10f, 10f, 10f }, ENTITY::GET_ENTITY_COORDS(pedLocal_55, false) + { 10f, 10f, 10f }, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA({ 101.6406f, 455.1994f, -2007.751f } - { 15f, 15f, 15f }, { 101.6406f, 455.1994f, -2007.751f } + { 15f, 15f, 15f }, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA({ 47.4293f, 4299.008f, -2202.7468f } - { 15f, 25f, 25f }, { 47.4293f, 4299.008f, -2202.7468f } + { 15f, 25f, 25f }, false, true, true, true);
	MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(pedLocal_55, true), 10f, 0);

	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_55, false))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
		TASK::TASK_PLAY_ANIM(0, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, 0, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_113);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
		PED::SET_PED_KEEP_TASK(pedLocal_55, true);
	}

	if (func_16() == 0)
		func_96(&uLocal_136, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);

	if (func_16() == 1)
		func_96(&uLocal_136, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);

	if (func_16() == 2)
		func_96(&uLocal_136, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);

	func_96(&uLocal_136, 3, pedLocal_55, "GROOM", 0, 1);
	bLocal_50 = true;
	return;
}

void func_128(int iParam0, BOOL bParam1) // Hash - 0x64B1D886 ^0x64B1D886
{
	if (bParam1)
		if (!func_135(iParam0, 2, true))
			func_134(iParam0, 2, true);
	else if (func_135(iParam0, 2, true))
		func_129(iParam0, 2, true);

	return;
}

void func_129(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x1F4148DA ^0xB2D02435
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
		if (func_40() == 0)
		{
			address = func_132(func_133(iParam0), -1, 0);
			MISC::CLEAR_BIT(&address, iParam1);
			func_130(func_133(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

void func_130(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Hash - 0x7D768555 ^0x693A841
{
	Hash statName;

	bParam4;
	statName = Global_2805027[iParam0 /*3*/][func_131(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_131(int iParam0) // Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_43();
	
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

int func_132(int iParam0, int iParam1, int iParam2) // Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_131(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

int func_133(int iParam0) // Hash - 0x28E83966 ^0x9E37924F
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

void func_134(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x1F4148DA ^0x95628DB
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
		if (func_40() == 0)
		{
			address = func_132(func_133(iParam0), -1, 0);
			MISC::SET_BIT(&address, iParam1);
			func_130(func_133(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_135(int iParam0, int iParam1, BOOL bParam2) // Hash - 0xA45BEB30 ^0x6033D2A2
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_40() == 0)
			return IS_BIT_SET(func_132(func_133(iParam0), -1, 0), iParam1);
	else
		return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);

	return false;
}

BOOL func_136() // Hash - 0xC05B0E62 ^0x94C54EFE
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_45) < 75f * 75f)
			return true;
	
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_147())
			return false;
	}

	if (func_143())
		return true;

	if (func_137(100f, true) != -1)
		return true;

	return false;
}

int func_137(float fParam0, BOOL bParam1) // Hash - 0xA169FFDC ^0x284941E0
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
		if (func_18(func_16()))
		{
			num4 = func_50();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_113648.f_18576[num /*6*/], 2) && !IS_BIT_SET(Global_113648.f_18576[num /*6*/], 3))
				{
					func_138(num, &unk);
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

void func_138(int iParam0, var uParam1) // Hash - 0x8B7D73B4 ^0xA3C765CF
{
	switch (iParam0)
	{
		case 0:
			func_139(uParam1, "Abigail1", func_141(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 1:
			func_139(uParam1, "Abigail2", func_141(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 2:
			func_139(uParam1, "Barry1", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 3:
			func_139(uParam1, "Barry2", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 4:
			func_139(uParam1, "Barry3", func_141(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 5:
			func_139(uParam1, "Barry3A", func_141(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, _("Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry."), 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 6:
			func_139(uParam1, "Barry3C", func_141(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 7:
			func_139(uParam1, "Barry4", func_141(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_140(iParam0), 0, 0);
			break;
	
		case 8:
			func_139(uParam1, "Dreyfuss1", func_141(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, _("The killer's identity and location have been revealed."), 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 9:
			func_139(uParam1, "Epsilon1", func_141(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 10:
			func_139(uParam1, "Epsilon2", func_141(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 11:
			func_139(uParam1, "Epsilon3", func_141(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 12:
			func_139(uParam1, "Epsilon4", func_141(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 13:
			func_139(uParam1, "Epsilon5", func_141(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 14:
			func_139(uParam1, "Epsilon6", func_141(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 15:
			func_139(uParam1, "Epsilon7", func_141(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 16:
			func_139(uParam1, "Epsilon8", func_141(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 17:
			func_139(uParam1, "Extreme1", func_141(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 18:
			func_139(uParam1, "Extreme2", func_141(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 19:
			func_139(uParam1, "Extreme3", func_141(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 20:
			func_139(uParam1, "Extreme4", func_141(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 21:
			func_139(uParam1, "Fanatic1", func_141(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_140(iParam0), 1, 0);
			break;
	
		case 22:
			func_139(uParam1, "Fanatic2", func_141(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_140(iParam0), 1, 0);
			break;
	
		case 23:
			func_139(uParam1, "Fanatic3", func_141(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_140(iParam0), 0, 1);
			break;
	
		case 24:
			func_139(uParam1, "Hao1", func_141(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_140(iParam0), 0, 1);
			break;
	
		case 25:
			func_139(uParam1, "Hunting1", func_141(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 26:
			func_139(uParam1, "Hunting2", func_141(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 27:
			func_139(uParam1, "Josh1", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 28:
			func_139(uParam1, "Josh2", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 29:
			func_139(uParam1, "Josh3", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 30:
			func_139(uParam1, "Josh4", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 31:
			func_139(uParam1, "Maude1", func_141(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 32:
			func_139(uParam1, "Minute1", func_141(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 33:
			func_139(uParam1, "Minute2", func_141(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 34:
			func_139(uParam1, "Minute3", func_141(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 35:
			func_139(uParam1, "MrsPhilips1", func_141(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 36:
			func_139(uParam1, "MrsPhilips2", func_141(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 37:
			func_139(uParam1, "Nigel1", func_141(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 38:
			func_139(uParam1, "Nigel1A", func_141(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, _("Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill."), 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 39:
			func_139(uParam1, "Nigel1B", func_141(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 40:
			func_139(uParam1, "Nigel1C", func_141(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 41:
			func_139(uParam1, "Nigel1D", func_141(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
			break;
	
		case 42:
			func_139(uParam1, "Nigel2", func_141(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 43:
			func_139(uParam1, "Nigel3", func_141(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
			break;
	
		case 44:
			func_139(uParam1, "Omega1", func_141(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 45:
			func_139(uParam1, "Omega2", func_141(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 46:
			func_139(uParam1, "Paparazzo1", func_141(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 47:
			func_139(uParam1, "Paparazzo2", func_141(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 48:
			func_139(uParam1, "Paparazzo3", func_141(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 49:
			func_139(uParam1, "Paparazzo3A", func_141(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, _("Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly."), 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 50:
			func_139(uParam1, "Paparazzo3B", func_141(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 51:
			func_139(uParam1, "Paparazzo4", func_141(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 52:
			func_139(uParam1, "Rampage1", func_141(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 54:
			func_139(uParam1, "Rampage3", func_141(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 55:
			func_139(uParam1, "Rampage4", func_141(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 56:
			func_139(uParam1, "Rampage5", func_141(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
			break;
	
		case 53:
			func_139(uParam1, "Rampage2", func_141(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
			break;
	
		case 57:
			func_139(uParam1, "TheLastOne", func_141(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 58:
			func_139(uParam1, "Tonya1", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, _("Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~"), -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 59:
			func_139(uParam1, "Tonya2", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 60:
			func_139(uParam1, "Tonya3", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 61:
			func_139(uParam1, "Tonya4", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		case 62:
			func_139(uParam1, "Tonya5", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_139(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Hash - 0x340E6E87 ^0xA591C803
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

int func_140(int iParam0) // Hash - 0x899A1C9C ^0x899A1C9C
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

struct<2> func_141(int iParam0) // Hash - 0xC3DE6A8D ^0x39E7FF24
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_142(iParam0) };

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

struct<2> func_142(int iParam0) // Hash - 0xC3CEFD8A ^0xD34CD849
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

BOOL func_143() // Hash - 0x7055FFB1 ^0x7055FFB1
{
	if (func_146() && !func_147())
		return true;

	if (func_145() && func_144())
		return true;

	return false;
}

BOOL func_144() // Hash - 0x79CF7679 ^0x79CF7679
{
	return Global_113366 > 0;
}

BOOL func_145() // Hash - 0xCF2296C0 ^0xCF2296C0
{
	if (Global_97603 != -1)
		return true;

	return false;
}

BOOL func_146() // Hash - 0x98CCC132 ^0x97B0D6ED
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);

	return false;
}

BOOL func_147() // Hash - 0x29CB2928 ^0xE369A18D
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_148() // Hash - 0xF2B7F534 ^0x7F3EC4F9
{
	if (!func_119(5))
		return true;

	if (func_143())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_147())
			return false;

	if (func_137(100f, true) != -1)
		return true;

	return false;
}

BOOL func_149() // Hash - 0x1121F6F2 ^0x90CE37A6
{
	if (Global_113637 == func_54() && MISC::GET_RANDOM_EVENT_FLAG() && Global_113638)
		return true;

	return false;
}

void func_150(int iParam0) // Hash - 0xA62BD46A ^0x1E050688
{
	if (iParam0 == -1)
		iParam0 = func_54();

	if (iParam0 == -1)
		return;

	func_152(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113634 = 0;
	func_151();
	return;
}

void func_151() // Hash - 0x178BF2A7 ^0x744062F5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_152(int iParam0) // Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113637 = iParam0;
	return;
}

BOOL func_153(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Hash - 0xC601B4EA ^0xC601B4EA
{
	BOOL flag;
	Vector3 entityCoords;
	int i;
	Vector3 vector;
	int num;

	if (!Global_152234)
		return false;

	if (iParam3 == -1)
		iParam3 = func_54();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!func_181())
			return false;

	uLocal_45 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_147())
				return false;
		}
	
		if (!Global_113648.f_9087)
			return false;
	
		if (func_35(false))
			return false;
	
		if (func_143())
			return false;
	
		if (func_180())
			return false;
	
		if (Global_113637 != -1)
			return false;
	
		if (func_18(func_16()))
			if (func_137(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_45.f_2 > 50f)
				return false;
	
		if (!func_179(iParam3))
			return false;
	
		if (func_18(func_16()))
			if (func_178(func_16()) == 4 || func_178(func_16()) == 5)
				return false;
	
		if (func_18(func_16()))
			if (!func_177(iParam3, iParam4, 145))
				return false;
	
		if (!func_176(Global_113648.f_24997.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_113639 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_175())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_166(4))
			return false;
	
		if (!func_119(5))
			return false;
	
		if (func_165(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_3 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_165(0, 0))
			return false;
	
		if (Global_32310)
			return false;
	
		if (func_179(30) && !func_165(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_18(func_16()))
		{
			for (i = 0; i < 3; i = i + 1)
			{
				vector = { Global_113648.f_2365.f_539.f_2300[i /*3*/] };
				num = Global_113648.f_2365.f_539.f_2296[i];
			
				if (func_164(num))
					if (func_155(i))
						if (!func_154(vector, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (func_16() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_154(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_155(int iParam0) // Hash - 0x687D9246 ^0x687D9246
{
	int num;

	num = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_156(num);
}

BOOL func_156(int iParam0) // Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_157(iParam0, 1);
}

int func_157(int iParam0, int iParam1) // Hash - 0x1F92FEBC ^0x1F92FEBC
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_164(iParam0))
		return 0;

	func_158(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_158(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Hash - 0x2BEE335D ^0x2BEE335D
{
	func_159(func_81(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_159(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Hash - 0xB807819C ^0xB807819C
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_163(iParam0, iParam1))
	{
		num = func_88(iParam1);
		num2 = func_86(iParam0);
		num3 = func_86(iParam0) - func_86(iParam1);
		num4 = func_88(iParam0) - func_88(iParam1);
		num5 = func_162(iParam0) - func_162(iParam1);
		num6 = func_80(iParam0) - func_80(iParam1);
		num7 = func_104(iParam0) - func_104(iParam1);
		num8 = func_161(iParam0) - func_161(iParam1);
	}
	else
	{
		num = func_88(iParam0);
		num2 = func_86(iParam1);
		num3 = func_86(iParam1) - func_86(iParam0);
		num4 = func_88(iParam1) - func_88(iParam0);
		num5 = func_162(iParam1) - func_162(iParam0);
		num6 = func_80(iParam1) - func_80(iParam0);
		num7 = func_104(iParam1) - func_104(iParam0);
		num8 = func_161(iParam1) - func_161(iParam0);
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
	
		num5 = num5 + func_85(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_160(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
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

float func_160(float fParam0, float fParam1, float fParam2) // Hash - 0xDB08F514 ^0x78C0BF6F
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

int func_161(int iParam0) // Hash - 0x90B520AB ^0x257AC1C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_162(int iParam0) // Hash - 0x826C592F ^0xDEC5AA46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

BOOL func_163(int iParam0, int iParam1) // Hash - 0xEA08B1 ^0xEA08B1
{
	int num;
	int num2;

	if (!func_164(iParam1) || !func_164(iParam0))
		return 1;

	num = func_86(iParam0);
	num2 = func_86(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_88(iParam0);
	num2 = func_88(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_162(iParam0);
	num2 = func_162(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_80(iParam0);
	num2 = func_80(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_104(iParam0);
	num2 = func_104(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_161(iParam0);
	num2 = func_161(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

BOOL func_164(int iParam0) // Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_161(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_104(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_80(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_86(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_88(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_162(iParam0);

	if (num6 < 1 || num6 > func_85(num5, num4))
		return false;

	return true;
}

BOOL func_165(int iParam0, int iParam1) // Hash - 0x577FB514 ^0xAAF8B538
{
	if (IS_BIT_SET(Global_113648.f_24997.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_166(int iParam0) // Hash - 0x97844555 ^0xADCD6DAA
{
	int num;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				num = func_16();
			
				if (!func_18(num))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_174() || Global_112695 || Global_32166 || func_173() || func_24(8, -1) || func_172() || func_171() || func_170() || func_169() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_174() || Global_32166 || func_173() || func_24(8, -1) || func_170() || func_172() || func_171() || func_169() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_174() || Global_112695 || Global_32166 || func_173() || func_24(8, -1) || func_170() || func_172() || func_171() || func_169() || Global_113648.f_7690.f_919[num] == 5 || Global_43804 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_174() || Global_112695 || Global_32166 || func_173() || func_24(8, -1) || func_172() || func_171() || func_169() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 4:
						if (func_174() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_24(8, -1) || func_169() || func_168() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 5:
						if (func_24(8, -1) || func_172() || func_171() || func_168() || func_167())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_174() || Global_32166 || func_173() || func_24(8, -1) || func_171() || func_170() || func_169() || Global_113648.f_7690.f_919[num] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_174() || func_171() || Global_112695 || Global_32166 || func_173() || Global_44446 || func_24(8, -1) || func_170() || func_168() || func_169() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_174() || Global_112695 || Global_32166 || func_173() || func_24(8, -1) || func_170() || func_168() || func_172() || func_171() || func_169())
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

BOOL func_167() // Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_100720.f_1;
}

BOOL func_168() // Hash - 0xC20DBA70 ^0xAC4006FB
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);

	return false;
}

BOOL func_169() // Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
		return true;

	return false;
}

BOOL func_170() // Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_171() // Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_388 > 0;
}

BOOL func_172() // Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_387 > 0;
}

BOOL func_173() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575060;
}

BOOL func_174() // Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_175() // Hash - 0xB12DEAA2 ^0xB12DEAA2
{
	func_15();

	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_176(int iParam0) // Hash - 0xCDB90269 ^0xCDB90269
{
	return func_163(func_81(), iParam0);
}

BOOL func_177(int iParam0, int iParam1, int iParam2) // Hash - 0xBEEFD79C ^0xBEEFD79C
{
	BOOL num;
	int num2;

	num = 0;
	num2 = func_16();

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

int func_178(int iParam0) // Hash - 0x45FC9D61 ^0x45FC9D61
{
	if (!func_18(iParam0))
		return 7;

	return Global_113648.f_7690.f_919[iParam0];
}

BOOL func_179(int iParam0) // Hash - 0xF2A54181 ^0xF2A54181
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!func_181())
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

BOOL func_180() // Hash - 0xB72C022E ^0x452A7B6D
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

BOOL func_181() // Hash - 0x44DD83CC ^0x7B62A376
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

BOOL func_182(int iParam0, int iParam1) // Hash - 0xEAB85351 ^0xA700209D
{
	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		iParam1 == 1;
		return true;
	}

	return false;
}

void func_183() // Hash - 0x174A830A ^0x412463F6
{
	if (bLocal_51)
	{
		func_221(false);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_87 - { 10f, 10f, 10f }, uLocal_87 + { 10f, 10f, 10f }, true, true);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		func_27();
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
	
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_65, false))
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_65, false) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_65, 50f, 50f, 50f, false, true, 0))
				func_195(veLocal_65, 0, 145);
	
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_87, 100f, 100f, 100f, false, true, 0))
		{
			if (!PED::IS_PED_INJURED(pedLocal_55) && !PED::IS_PED_INJURED(pedLocal_57))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -330.36f, 6154.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_CHAT_TO_PED(0, pedLocal_57, 16, 0f, 0f, 0f, 0f, 0f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_113);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_113);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -330.36f, 6155.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_CHAT_TO_PED(0, pedLocal_55, 16, 0f, 0f, 0f, 0f, 0f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_113);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_57, iLocal_113);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_113);
			}
		}
	
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_133);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_59);
	
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	
		if (!PED::IS_PED_INJURED(pedLocal_55))
		{
			PED::SET_PED_CONFIG_FLAG(pedLocal_55, 317, true);
		
			if (!ENTITY::IS_ENTITY_ATTACHED(pedLocal_55))
				ENTITY::FREEZE_ENTITY_POSITION(pedLocal_55, false);
		
			PED::REMOVE_PED_FROM_GROUP(pedLocal_55);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_55, false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(obLocal_66))
		{
			ENTITY::DETACH_ENTITY(obLocal_66, true, true);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_55);
	
		if (!PED::IS_PED_INJURED(pedLocal_57))
		{
			PED::SET_PED_CONFIG_FLAG(pedLocal_57, 317, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_57, false);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_57);
	
		if (!PED::IS_PED_INJURED(pedLocal_56))
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_56, false);
	
		if (!PED::IS_PED_INJURED(pedLocal_58))
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_58, false);
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_56);
	}

	func_184(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_184(int iParam0) // Hash - 0xE6B11918 ^0x37AF2AD2
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_54();

	if (iParam0 == -1)
		return;

	if (func_149())
	{
		func_188(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113639 = MISC::GET_GAME_TIMER();
		func_187(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_186(Global_113637, true), 64);
	
		if (func_53(Global_113637) > 0)
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

	func_185(&Global_32223);
	Global_113638 = false;
	func_152(-1);
	return;
}

void func_185(var uParam0) // Hash - 0x995C9E2 ^0x995C9E2
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

char* func_186(int iParam0, BOOL bParam1) // Hash - 0x959319CB ^0xB1FF87D5
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

void func_187(int iParam0) // Hash - 0xC0234809 ^0x4FD853DC
{
	Global_43808 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_188(int iParam0) // Hash - 0x881273A8 ^0x881273A8
{
	func_189(iParam0, 0, func_194(iParam0));
	return;
}

void func_189(int iParam0, int iParam1, int iParam2) // Hash - 0xA7DBC311 ^0xA7DBC311
{
	int unk;
	var unk2;

	unk = func_81();
	func_192(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_191(iParam0, &unk);
	unk2 = { func_190(&unk) };
	return;
}

struct<16> func_190(var uParam0) // Hash - 0x12F70C2D ^0x64492F0E
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_80(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_104(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_161(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_162(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_88(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_86(*uParam0), 64);
	return unk;
}

void func_191(int iParam0, var uParam1) // Hash - 0x63EF72B0 ^0xC612AA53
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
	return;
}

void func_192(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_86(*uParam0);
	i = func_88(*uParam0);
	num2 = func_162(*uParam0);
	j = func_80(*uParam0);
	k = func_104(*uParam0);
	l = func_161(*uParam0);

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

	for (m = func_85(i, num); num2 > m; m = func_85(i, num))
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
	func_193(uParam0, l, k, j, num2, i, num);
	return;
}

void func_193(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x733BFBA2 ^0x733BFBA2
{
	func_91(uParam0, iParam1);
	func_90(uParam0, iParam2);
	func_89(uParam0, iParam3);
	func_83(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_82(uParam0, iParam6);
	return;
}

int func_194(int iParam0) // Hash - 0x4219564C ^0x4219564C
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

int func_195(Vehicle veParam0, int iParam1, int iParam2) // Hash - 0xBB1BDF97 ^0x5A50B401
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

	func_196(veParam0, iParam2);
	return 1;
}

void func_196(Vehicle veParam0, int iParam1) // Hash - 0x403E4E98 ^0x34F9BF63
{
	Ped pedInVehicleSeat;
	int i;
	int j;

	if (!func_202(veParam0))
		return;

	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
	{
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
			pedInVehicleSeat = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, -1);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
			if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("PLAYER_ZERO"))
				iParam1 = 0;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("PLAYER_ONE"))
				iParam1 = 1;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("PLAYER_TWO"))
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
	func_197(veParam0, &(Global_113648.f_32751.f_5510));
	return;
}

void func_197(Vehicle veParam0, var uParam1) // Hash - 0x5E84B52A ^0xEF20F807
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_201(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(veParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
		VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(veParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(veParam0);
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
	
		if (uParam1->f_65 == -1 && !func_200(uParam1->f_66))
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
	
		func_199(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_198(i + 1));
		}
	
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 11);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
	
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(veParam0, "IgnoredByQuickSave"))
			MISC::SET_BIT(&(uParam1->f_77), 27);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
	}

	return;
}

int func_198(int iParam0) // Hash - 0xEE599357 ^0xEE599357
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

int func_199(var uParam0, var uParam1, var uParam2) // Hash - 0x4455160E ^0x8E5B3F28
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

BOOL func_200(int iParam0) // Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return true;
	
		default:
		
	}

	return false;
}

void func_201(var uParam0) // Hash - 0xB95AF921 ^0x4DC7C61C
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

BOOL func_202(Vehicle veParam0) // Hash - 0x835CB3EF ^0xB88368F0
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_219(veParam0, 0, false) || func_219(veParam0, 1, false) || func_219(veParam0, 2, false) || func_218(veParam0) != 145 || func_217(veParam0) || func_216(veParam0) || func_215(veParam0) || func_214(veParam0) || !func_203(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		func_216(veParam0);
		func_216(veParam0);
		func_219(veParam0, 0, false);
		func_219(veParam0, 1, false);
		func_219(veParam0, 2, false);
		func_218(veParam0) != 145;
		return false;
	}

	return true;
}

BOOL func_203(Hash hParam0) // Hash - 0x66FE4A4A ^0x10D5195D
{
	if (hParam0 == 0)
		return false;

	if (!func_204(hParam0, false, -1))
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0))
		return false;

	switch (hParam0)
	{
		case joaat("BUS"):
		case joaat("STRETCH"):
		case joaat("BARRACKS"):
		case joaat("ARMYTANKER"):
		case joaat("RHINO"):
		case joaat("ARMYTRAILER"):
		case joaat("BARRACKS2"):
		case joaat("FLATBED"):
		case joaat("RIPLEY"):
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("AIRBUS"):
		case joaat("COACH"):
		case joaat("RENTALBUS"):
		case joaat("TOURBUS"):
		case joaat("FIRETRUK"):
		case joaat("PBUS"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("BOATTRAILER"):
		case joaat("BIFF"):
		case joaat("HAULER"):
		case joaat("DOCKTRAILER"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
		case joaat("TRACTOR2"):
		case joaat("BULLDOZER"):
		case joaat("HANDLER"):
		case joaat("TIPTRUCK"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("RUBBLE"):
		case joaat("SCRAP"):
		case joaat("TIPTRUCK2"):
		case joaat("CAMPER"):
		case joaat("TACO"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("JOURNEY"):
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLICEB"):
		case joaat("POLICEOLD1"):
		case joaat("POLICEOLD2"):
		case joaat("POLICET"):
		case joaat("TAXI"):
		case joaat("SUBMERSIBLE"):
		case joaat("SUBMERSIBLE2"):
		case joaat("MONSTER"):
			return false;
	}

	return true;
}

BOOL func_204(Hash hParam0, BOOL bParam1, int iParam2) // Hash - 0x9BD8A1CC ^0xA5081522
{
	int i;
	Hash outData;

	if (hParam0 == 0)
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(hParam0))
		return false;

	if (hParam0 == joaat("DOMINATOR2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("BUFFALO3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("GAUNTLET2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("BLIMP2") || hParam0 == joaat("STALION2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_181())
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

	if (hParam0 == joaat("BLIMP"))
		if (!func_213() && !func_212() && !func_211() && !func_210() && !func_181())
			return false;

	if (hParam0 == joaat("HOTKNIFE") || hParam0 == joaat("CARBONRS") || hParam0 == joaat("KHAMELION"))
	{
		if (func_209() || MISC::IS_PC_VERSION() || func_208())
		{
		}
		else if (!func_211())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_207(hParam0, iParam2))
			return false;

	if (!func_205(hParam0))
		return false;

	return true;
}

BOOL func_205(Hash hParam0) // Hash - 0xC7E3100C ^0xC03816C
{
	int num;
	var unk;
	var name;

	if (!func_206())
		return true;

	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&num, &unk);

	if (num == 4)
		return true;

	switch (hParam0)
	{
		case joaat("DUNE4"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_DUNE4_t0_v3", 64);
			break;
	
		case joaat("VOLTIC2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case joaat("RUINER2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_RUINER2_t0_v3", 64);
			break;
	
		case joaat("PHANTOM2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case joaat("TECHNICAL2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case joaat("BOXVILLE5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case joaat("WASTELANDER"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case joaat("BLAZER5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&name))
		return false;

	return true;
}

BOOL func_206() // Hash - 0x2E0B1DC1 ^0xD2D0A3D9
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_207(Hash hParam0, int iParam1) // Hash - 0x2FF24ACC ^0x92A5C100
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

	if (hParam0 == joaat("BTYPE3"))
		if (!Global_262145.f_7059 && !Global_262145.f_13397 && cloudTimeAsInt < Global_262145.f_13398)
			num = 0;

	if (hParam0 == joaat("FACTION3"))
		if (!Global_262145.f_14737 && cloudTimeAsInt < Global_262145.f_14749)
			num = 0;
	else if (hParam0 == joaat("VIRGO3") || hParam0 == joaat("VIRGO2"))
		if (!Global_262145.f_14733 && cloudTimeAsInt < Global_262145.f_14745)
			num = 0;
	else if (hParam0 == joaat("SABREGT2"))
		if (!Global_262145.f_14734 && cloudTimeAsInt < Global_262145.f_14746)
			num = 0;
	else if (hParam0 == joaat("TORNADO5"))
		if (!Global_262145.f_14735 && cloudTimeAsInt < Global_262145.f_14747)
			num = 0;
	else if (hParam0 == joaat("MINIVAN2"))
		if (!Global_262145.f_14736 && cloudTimeAsInt < Global_262145.f_14748)
			num = 0;
	else if (hParam0 == joaat("SLAMVAN3"))
		if (!Global_262145.f_14738 && cloudTimeAsInt < Global_262145.f_14750)
			num = 0;

	if (hParam0 == joaat("PROTOTIPO"))
		if (!Global_262145.f_14739 && cloudTimeAsInt < Global_262145.f_14742)
			num = 0;
	else if (hParam0 == joaat("SEVEN70"))
		if (!Global_262145.f_14740 && cloudTimeAsInt < Global_262145.f_14743)
			num = 0;
	else if (hParam0 == joaat("PFISTER811"))
		if (!Global_262145.f_14741 && cloudTimeAsInt < Global_262145.f_14744)
			num = 0;

	if (hParam0 == joaat("BF400"))
		if (!Global_262145.f_17313 && cloudTimeAsInt < Global_262145.f_17278)
			num = 0;
	else if (hParam0 == joaat("BRIOSO"))
		if (!Global_262145.f_17308 && cloudTimeAsInt < Global_262145.f_17273)
			num = 0;
	else if (hParam0 == joaat("CLIFFHANGER"))
		if (!Global_262145.f_17312 && cloudTimeAsInt < Global_262145.f_17277)
			num = 0;
	else if (hParam0 == joaat("CONTENDER"))
		if (!Global_262145.f_17311 && cloudTimeAsInt < Global_262145.f_17276)
			num = 0;
	else if (hParam0 == joaat("LE7B"))
		if (!Global_262145.f_17305 && cloudTimeAsInt < Global_262145.f_17270)
			num = 0;
	else if (hParam0 == joaat("OMNIS"))
		if (!Global_262145.f_17306 && cloudTimeAsInt < Global_262145.f_17271)
			num = 0;
	else if (hParam0 == joaat("TROPHYTRUCK"))
		if (!Global_262145.f_17309 && cloudTimeAsInt < Global_262145.f_17274)
			num = 0;
	else if (hParam0 == joaat("TROPHYTRUCK2"))
		if (!Global_262145.f_17310 && cloudTimeAsInt < Global_262145.f_17275)
			num = 0;
	else if (hParam0 == joaat("TROPOS"))
		if (!Global_262145.f_17307 && cloudTimeAsInt < Global_262145.f_17272)
			num = 0;
	else if (hParam0 == joaat("GARGOYLE"))
		if (!Global_262145.f_17315 && cloudTimeAsInt < Global_262145.f_17280)
			num = 0;
	else if (hParam0 == joaat("RALLYTRUCK"))
		if (!Global_262145.f_17316 && cloudTimeAsInt < Global_262145.f_17281)
			num = 0;
	else if (hParam0 == joaat("TAMPA2"))
		if (!Global_262145.f_17304 && cloudTimeAsInt < Global_262145.f_17269)
			num = 0;
	else if (hParam0 == joaat("TYRUS"))
		if (!Global_262145.f_17303 && cloudTimeAsInt < Global_262145.f_17268)
			num = 0;
	else if (hParam0 == joaat("SHEAVA"))
		if (!Global_262145.f_17302 && cloudTimeAsInt < Global_262145.f_17267)
			num = 0;
	else if (hParam0 == joaat("LYNX"))
		if (!Global_262145.f_17314 && cloudTimeAsInt < Global_262145.f_17279)
			num = 0;
	else if (hParam0 == joaat("STALION2"))
		if (!Global_262145.f_17317 && cloudTimeAsInt < Global_262145.f_17282)
			num = 0;
	else if (hParam0 == joaat("GAUNTLET2"))
		if (!Global_262145.f_17318 && cloudTimeAsInt < Global_262145.f_17283)
			num = 0;
	else if (hParam0 == joaat("DOMINATOR2"))
		if (!Global_262145.f_17319 && cloudTimeAsInt < Global_262145.f_17284)
			num = 0;
	else if (hParam0 == joaat("BUFFALO3"))
		if (!Global_262145.f_17320 && cloudTimeAsInt < Global_262145.f_17285)
			num = 0;

	if (hParam0 == joaat("DEFILER"))
		if (!Global_262145.f_17474 && cloudTimeAsInt < Global_262145.f_17496)
			num = 0;
	else if (hParam0 == joaat("NIGHTBLADE"))
		if (!Global_262145.f_17475 && cloudTimeAsInt < Global_262145.f_17497)
			num = 0;
	else if (hParam0 == joaat("ZOMBIEA"))
		if (!Global_262145.f_17476 && cloudTimeAsInt < Global_262145.f_17498)
			num = 0;
	else if (hParam0 == joaat("ESSKEY"))
		if (!Global_262145.f_17477 && cloudTimeAsInt < Global_262145.f_17499)
			num = 0;
	else if (hParam0 == joaat("AVARUS"))
		if (!Global_262145.f_17478 && cloudTimeAsInt < Global_262145.f_17500)
			num = 0;
	else if (hParam0 == joaat("ZOMBIEB"))
		if (!Global_262145.f_17479 && cloudTimeAsInt < Global_262145.f_17501)
			num = 0;
	else if (hParam0 == joaat("HAKUCHOU2"))
		if (!Global_262145.f_17481 && cloudTimeAsInt < Global_262145.f_17502)
			num = 0;
	else if (hParam0 == joaat("VORTEX"))
		if (!Global_262145.f_17482 && cloudTimeAsInt < Global_262145.f_17503)
			num = 0;
	else if (hParam0 == joaat("SHOTARO"))
		if (!Global_262145.f_17483 && cloudTimeAsInt < Global_262145.f_17504)
			num = 0;
	else if (hParam0 == joaat("CHIMERA"))
		if (!Global_262145.f_17484 && cloudTimeAsInt < Global_262145.f_17505)
			num = 0;
	else if (hParam0 == joaat("RAPTOR"))
		if (!Global_262145.f_17485 && cloudTimeAsInt < Global_262145.f_17506)
			num = 0;
	else if (hParam0 == joaat("DAEMON2"))
		if (!Global_262145.f_17486 && cloudTimeAsInt < Global_262145.f_17507)
			num = 0;
	else if (hParam0 == joaat("BLAZER4"))
		if (!Global_262145.f_17487 && cloudTimeAsInt < Global_262145.f_17508)
			num = 0;
	else if (hParam0 == joaat("TORNADO6"))
		if (!Global_262145.f_17493 && cloudTimeAsInt < Global_262145.f_17515)
			num = 0;
	else if (hParam0 == joaat("YOUGA2"))
		if (!Global_262145.f_17490 && cloudTimeAsInt < Global_262145.f_17511)
			num = 0;
	else if (hParam0 == joaat("WOLFSBANE"))
		if (!Global_262145.f_17491 && cloudTimeAsInt < Global_262145.f_17512)
			num = 0;
	else if (hParam0 == joaat("FAGGIO3"))
		if (!Global_262145.f_17492 && cloudTimeAsInt < Global_262145.f_17513)
			num = 0;
	else if (hParam0 == joaat("FAGGIO"))
		if (!Global_262145.f_17480 && cloudTimeAsInt < Global_262145.f_17514)
			num = 0;
	else if (hParam0 == joaat("BAGGER"))
		if (!Global_262145.f_17494 && cloudTimeAsInt < Global_262145.f_17516)
			num = 0;
	else if (hParam0 == joaat("SANCTUS"))
		if (!Global_262145.f_17488 && cloudTimeAsInt < Global_262145.f_17509)
			num = 0;
	else if (hParam0 == joaat("MANCHEZ"))
		if (!Global_262145.f_17489 && cloudTimeAsInt < Global_262145.f_17510)
			num = 0;
	else if (hParam0 == joaat("RATBIKE"))
		if (!Global_262145.f_17495 && cloudTimeAsInt < Global_262145.f_17517)
			num = 0;

	if (hParam0 == joaat("VOLTIC2"))
		if (!Global_262145.f_19131 && cloudTimeAsInt < Global_262145.f_19228)
			num = 0;
	else if (hParam0 == joaat("RUINER2"))
		if (!Global_262145.f_19132 && cloudTimeAsInt < Global_262145.f_19229)
			num = 0;
	else if (hParam0 == joaat("DUNE4"))
		if (!Global_262145.f_19133 && cloudTimeAsInt < Global_262145.f_19230)
			num = 0;
	else if (hParam0 == joaat("DUNE5"))
		if (!Global_262145.f_19134 && cloudTimeAsInt < Global_262145.f_19231)
			num = 0;
	else if (hParam0 == joaat("PHANTOM2"))
		if (!Global_262145.f_19135 && cloudTimeAsInt < Global_262145.f_19232)
			num = 0;
	else if (hParam0 == joaat("TECHNICAL2"))
		if (!Global_262145.f_19136 && cloudTimeAsInt < Global_262145.f_19233)
			num = 0;
	else if (hParam0 == joaat("BOXVILLE5"))
		if (!Global_262145.f_19137 && cloudTimeAsInt < Global_262145.f_19234)
			num = 0;
	else if (hParam0 == joaat("WASTELANDER"))
		if (!Global_262145.f_19138 && cloudTimeAsInt < Global_262145.f_19235)
			num = 0;
	else if (hParam0 == joaat("BLAZER5"))
		if (!Global_262145.f_19139 && cloudTimeAsInt < Global_262145.f_19236)
			num = 0;
	else if (hParam0 == joaat("COMET2"))
		if (!Global_262145.f_19140 && cloudTimeAsInt < Global_262145.f_19237)
			num = 0;
	else if (hParam0 == joaat("COMET3"))
		if (!Global_262145.f_19141 && cloudTimeAsInt < Global_262145.f_19238)
			num = 0;
	else if (hParam0 == joaat("DIABLOUS"))
		if (!Global_262145.f_19142 && cloudTimeAsInt < Global_262145.f_19239)
			num = 0;
	else if (hParam0 == joaat("DIABLOUS2"))
		if (!Global_262145.f_19143 && cloudTimeAsInt < Global_262145.f_19240)
			num = 0;
	else if (hParam0 == joaat("ELEGY"))
		if (!Global_262145.f_19144 && cloudTimeAsInt < Global_262145.f_19241)
			num = 0;
	else if (hParam0 == joaat("ELEGY2"))
		if (!Global_262145.f_19145 && cloudTimeAsInt < Global_262145.f_19242)
			num = 0;
	else if (hParam0 == joaat("FCR"))
		if (!Global_262145.f_19146 && cloudTimeAsInt < Global_262145.f_19243)
			num = 0;
	else if (hParam0 == joaat("FCR2"))
		if (!Global_262145.f_19147 && cloudTimeAsInt < Global_262145.f_19244)
			num = 0;
	else if (hParam0 == joaat("ITALIGTB"))
		if (!Global_262145.f_19148 && cloudTimeAsInt < Global_262145.f_19245)
			num = 0;
	else if (hParam0 == joaat("ITALIGTB2"))
		if (!Global_262145.f_19149 && cloudTimeAsInt < Global_262145.f_19246)
			num = 0;
	else if (hParam0 == joaat("NERO"))
		if (!Global_262145.f_19150 && cloudTimeAsInt < Global_262145.f_19247)
			num = 0;
	else if (hParam0 == joaat("NERO2"))
		if (!Global_262145.f_19151 && cloudTimeAsInt < Global_262145.f_19248)
			num = 0;
	else if (hParam0 == joaat("PENETRATOR"))
		if (!Global_262145.f_19152 && cloudTimeAsInt < Global_262145.f_19249)
			num = 0;
	else if (hParam0 == joaat("SPECTER"))
		if (!Global_262145.f_19153 && cloudTimeAsInt < Global_262145.f_19250)
			num = 0;
	else if (hParam0 == joaat("SPECTER2"))
		if (!Global_262145.f_19154 && cloudTimeAsInt < Global_262145.f_19251)
			num = 0;
	else if (hParam0 == joaat("TEMPESTA"))
		if (!Global_262145.f_19155 && cloudTimeAsInt < Global_262145.f_19252)
			num = 0;

	if (hParam0 == joaat("GP1"))
		if (!Global_262145.f_20212 && cloudTimeAsInt < Global_262145.f_20208)
			num = 0;
	else if (hParam0 == joaat("INFERNUS2"))
		if (!Global_262145.f_20213 && cloudTimeAsInt < Global_262145.f_20209)
			num = 0;
	else if (hParam0 == joaat("RUSTON"))
		if (!Global_262145.f_20214 && cloudTimeAsInt < Global_262145.f_20210)
			num = 0;
	else if (hParam0 == joaat("TURISMO2"))
		if (!Global_262145.f_20215 && cloudTimeAsInt < Global_262145.f_20211)
			num = 0;

	if (hParam0 == joaat("XA21"))
		if (!Global_262145.f_21094 && cloudTimeAsInt < Global_262145.f_21102)
			num = 0;
	else if (hParam0 == joaat("CHEETAH2"))
		if (!Global_262145.f_21095 && cloudTimeAsInt < Global_262145.f_21103)
			num = 0;
	else if (hParam0 == joaat("TORERO"))
		if (!Global_262145.f_21096 && cloudTimeAsInt < Global_262145.f_21104)
			num = 0;
	else if (hParam0 == joaat("VAGNER"))
		if (!Global_262145.f_21097 && cloudTimeAsInt < Global_262145.f_21105)
			num = 0;
	else if (hParam0 == joaat("ARDENT"))
		if (!Global_262145.f_21098 && cloudTimeAsInt < Global_262145.f_21106)
			num = 0;
	else if (hParam0 == joaat("NIGHTSHARK"))
		if (!Global_262145.f_21099 && cloudTimeAsInt < Global_262145.f_21107)
			num = 0;

	if (hParam0 == joaat("MICROLIGHT"))
		if (!Global_262145.f_21893 && cloudTimeAsInt < Global_262145.f_21913)
			num = 0;
	else if (hParam0 == joaat("MOGUL"))
		if (!Global_262145.f_21905 && cloudTimeAsInt < Global_262145.f_21925)
			num = 0;
	else if (hParam0 == joaat("ROGUE"))
		if (!Global_262145.f_21896 && cloudTimeAsInt < Global_262145.f_21916)
			num = 0;
	else if (hParam0 == joaat("STARLING"))
		if (!Global_262145.f_21906 && cloudTimeAsInt < Global_262145.f_21926)
			num = 0;
	else if (hParam0 == joaat("SEABREEZE"))
		if (!Global_262145.f_21894 && cloudTimeAsInt < Global_262145.f_21914)
			num = 0;
	else if (hParam0 == joaat("TULA"))
		if (!Global_262145.f_21910 && cloudTimeAsInt < Global_262145.f_21930)
			num = 0;
	else if (hParam0 == joaat("PYRO"))
		if (!Global_262145.f_21908 && cloudTimeAsInt < Global_262145.f_21928)
			num = 0;
	else if (hParam0 == joaat("MOLOTOK"))
		if (!Global_262145.f_21909 && cloudTimeAsInt < Global_262145.f_21929)
			num = 0;
	else if (hParam0 == joaat("NOKOTA"))
		if (!Global_262145.f_21904 && cloudTimeAsInt < Global_262145.f_21924)
			num = 0;
	else if (hParam0 == joaat("BOMBUSHKA"))
		if (!Global_262145.f_21911 && cloudTimeAsInt < Global_262145.f_21931)
			num = 0;
	else if (hParam0 == joaat("HUNTER"))
		if (!Global_262145.f_21907 && cloudTimeAsInt < Global_262145.f_21927)
			num = 0;
	else if (hParam0 == joaat("HAVOK"))
		if (!Global_262145.f_21903 && cloudTimeAsInt < Global_262145.f_21923)
			num = 0;
	else if (hParam0 == joaat("HOWARD"))
		if (!Global_262145.f_21895 && cloudTimeAsInt < Global_262145.f_21915)
			num = 0;
	else if (hParam0 == joaat("ALPHAZ1"))
		if (!Global_262145.f_21897 && cloudTimeAsInt < Global_262145.f_21917)
			num = 0;
	else if (hParam0 == joaat("CYCLONE"))
		if (!Global_262145.f_21898 && cloudTimeAsInt < Global_262145.f_21918)
			num = 0;
	else if (hParam0 == joaat("VISIONE"))
		if (!Global_262145.f_21899 && cloudTimeAsInt < Global_262145.f_21919)
			num = 0;
	else if (hParam0 == joaat("VIGILANTE"))
		if (!Global_262145.f_21900 && cloudTimeAsInt < Global_262145.f_21920)
			num = 0;
	else if (hParam0 == joaat("RETINUE"))
		if (!Global_262145.f_21901 && cloudTimeAsInt < Global_262145.f_21921)
			num = 0;
	else if (hParam0 == joaat("RAPIDGT3"))
		if (!Global_262145.f_21902 && cloudTimeAsInt < Global_262145.f_21922)
			num = 0;

	if (hParam0 == joaat("DELUXO"))
		if (!Global_262145.f_22861 && cloudTimeAsInt < Global_262145.f_22889)
			num = 0;
	else if (hParam0 == joaat("STROMBERG"))
		if (!Global_262145.f_22862 && cloudTimeAsInt < Global_262145.f_22890)
			num = 0;
	else if (hParam0 == joaat("RIOT2"))
		if (!Global_262145.f_22863 && cloudTimeAsInt < Global_262145.f_22891)
			num = 0;
	else if (hParam0 == joaat("CHERNOBOG"))
		if (!Global_262145.f_22864 && cloudTimeAsInt < Global_262145.f_22892)
			num = 0;
	else if (hParam0 == joaat("KHANJALI"))
		if (!Global_262145.f_22865 && cloudTimeAsInt < Global_262145.f_22893)
			num = 0;
	else if (hParam0 == joaat("AKULA"))
		if (!Global_262145.f_22866 && cloudTimeAsInt < Global_262145.f_22894)
			num = 0;
	else if (hParam0 == joaat("THRUSTER"))
		if (!Global_262145.f_22867 && cloudTimeAsInt < Global_262145.f_22895)
			num = 0;
	else if (hParam0 == joaat("BARRAGE"))
		if (!Global_262145.f_22868 && cloudTimeAsInt < Global_262145.f_22896)
			num = 0;
	else if (hParam0 == joaat("VOLATOL"))
		if (!Global_262145.f_22869 && cloudTimeAsInt < Global_262145.f_22897)
			num = 0;
	else if (hParam0 == joaat("COMET4"))
		if (!Global_262145.f_22870 && cloudTimeAsInt < Global_262145.f_22898)
			num = 0;
	else if (hParam0 == joaat("NEON"))
		if (!Global_262145.f_22871 && cloudTimeAsInt < Global_262145.f_22899)
			num = 0;
	else if (hParam0 == joaat("STREITER"))
		if (!Global_262145.f_22872 && cloudTimeAsInt < Global_262145.f_22900)
			num = 0;
	else if (hParam0 == joaat("SENTINEL3"))
		if (!Global_262145.f_22873 && cloudTimeAsInt < Global_262145.f_22901)
			num = 0;
	else if (hParam0 == joaat("YOSEMITE"))
		if (!Global_262145.f_22874 && cloudTimeAsInt < Global_262145.f_22902)
			num = 0;
	else if (hParam0 == joaat("SC1"))
		if (!Global_262145.f_22875 && cloudTimeAsInt < Global_262145.f_22903)
			num = 0;
	else if (hParam0 == joaat("AUTARCH"))
		if (!Global_262145.f_22876 && cloudTimeAsInt < Global_262145.f_22904)
			num = 0;
	else if (hParam0 == joaat("GT500"))
		if (!Global_262145.f_22877 && cloudTimeAsInt < Global_262145.f_22905)
			num = 0;
	else if (hParam0 == joaat("HUSTLER"))
		if (!Global_262145.f_22878 && cloudTimeAsInt < Global_262145.f_22906)
			num = 0;
	else if (hParam0 == joaat("REVOLTER"))
		if (!Global_262145.f_22879 && cloudTimeAsInt < Global_262145.f_22907)
			num = 0;
	else if (hParam0 == joaat("PARIAH"))
		if (!Global_262145.f_22880 && cloudTimeAsInt < Global_262145.f_22908)
			num = 0;
	else if (hParam0 == joaat("RAIDEN"))
		if (!Global_262145.f_22881 && cloudTimeAsInt < Global_262145.f_22909)
			num = 0;
	else if (hParam0 == joaat("SAVESTRA"))
		if (!Global_262145.f_22882 && cloudTimeAsInt < Global_262145.f_22910)
			num = 0;
	else if (hParam0 == joaat("RIATA"))
		if (!Global_262145.f_22883 && cloudTimeAsInt < Global_262145.f_22911)
			num = 0;
	else if (hParam0 == joaat("HERMES"))
		if (!Global_262145.f_22884 && cloudTimeAsInt < Global_262145.f_22912)
			num = 0;
	else if (hParam0 == joaat("COMET5"))
		if (!Global_262145.f_22885 && cloudTimeAsInt < Global_262145.f_22913)
			num = 0;
	else if (hParam0 == joaat("Z190"))
		if (!Global_262145.f_22886 && cloudTimeAsInt < Global_262145.f_22914)
			num = 0;
	else if (hParam0 == joaat("VISERIS"))
		if (!Global_262145.f_22887 && cloudTimeAsInt < Global_262145.f_22915)
			num = 0;
	else if (hParam0 == joaat("KAMACHO"))
		if (!Global_262145.f_22888 && cloudTimeAsInt < Global_262145.f_22916)
			num = 0;

	if (hParam0 == joaat("GB200"))
		if (!Global_262145.f_24081 && cloudTimeAsInt < Global_262145.f_24097)
			num = 0;
	else if (hParam0 == joaat("FAGALOA"))
		if (!Global_262145.f_24082 && cloudTimeAsInt < Global_262145.f_24098)
			num = 0;
	else if (hParam0 == joaat("ELLIE"))
		if (!Global_262145.f_24086 && cloudTimeAsInt < Global_262145.f_24102)
			num = 0;
	else if (hParam0 == joaat("ISSI3"))
		if (!Global_262145.f_24089 && cloudTimeAsInt < Global_262145.f_24105)
			num = 0;
	else if (hParam0 == joaat("MICHELLI"))
		if (!Global_262145.f_24094 && cloudTimeAsInt < Global_262145.f_24110)
			num = 0;
	else if (hParam0 == joaat("FLASHGT"))
		if (!Global_262145.f_24088 && cloudTimeAsInt < Global_262145.f_24104)
			num = 0;
	else if (hParam0 == joaat("HOTRING"))
		if (!Global_262145.f_24080 && cloudTimeAsInt < Global_262145.f_24096)
			num = 0;
	else if (hParam0 == joaat("TEZERACT"))
		if (!Global_262145.f_24087 && cloudTimeAsInt < Global_262145.f_24103)
			num = 0;
	else if (hParam0 == joaat("TYRANT"))
		if (!Global_262145.f_24093 && cloudTimeAsInt < Global_262145.f_24109)
			num = 0;
	else if (hParam0 == joaat("DOMINATOR3"))
		if (!Global_262145.f_24092 && cloudTimeAsInt < Global_262145.f_24108)
			num = 0;
	else if (hParam0 == joaat("TAIPAN"))
		if (!Global_262145.f_24083 && cloudTimeAsInt < Global_262145.f_24099)
			num = 0;
	else if (hParam0 == joaat("ENTITY2"))
		if (!Global_262145.f_24085 && cloudTimeAsInt < Global_262145.f_24101)
			num = 0;
	else if (hParam0 == joaat("JESTER3"))
		if (!Global_262145.f_24095 && cloudTimeAsInt < Global_262145.f_24111)
			num = 0;
	else if (hParam0 == joaat("CHEBUREK"))
		if (!Global_262145.f_24091 && cloudTimeAsInt < Global_262145.f_24107)
			num = 0;
	else if (hParam0 == joaat("CARACARA"))
		if (!Global_262145.f_24084 && cloudTimeAsInt < Global_262145.f_24100)
			num = 0;
	else if (hParam0 == joaat("SEASPARROW"))
		if (!Global_262145.f_24090 && cloudTimeAsInt < Global_262145.f_24106)
			num = 0;

	if (hParam0 == joaat("TERBYTE"))
		if (!Global_262145.f_24171 && cloudTimeAsInt < Global_262145.f_24158)
			num = 0;
	else if (hParam0 == joaat("PBUS2"))
		if (!Global_262145.f_24172 && cloudTimeAsInt < Global_262145.f_24159)
			num = 0;
	else if (hParam0 == joaat("MULE4"))
		if (!Global_262145.f_24177 && cloudTimeAsInt < Global_262145.f_24164)
			num = 0;
	else if (hParam0 == joaat("POUNDER2"))
		if (!Global_262145.f_24176 && cloudTimeAsInt < Global_262145.f_24163)
			num = 0;
	else if (hParam0 == joaat("SWINGER"))
		if (!Global_262145.f_24174 && cloudTimeAsInt < Global_262145.f_24161)
			num = 0;
	else if (hParam0 == joaat("MENACER"))
		if (!Global_262145.f_24180 && cloudTimeAsInt < Global_262145.f_24167)
			num = 0;
	else if (hParam0 == joaat("SCRAMJET"))
		if (!Global_262145.f_24182 && cloudTimeAsInt < Global_262145.f_24169)
			num = 0;
	else if (hParam0 == joaat("STRIKEFORCE"))
		if (!Global_262145.f_24183 && cloudTimeAsInt < Global_262145.f_24170)
			num = 0;
	else if (hParam0 == joaat("OPPRESSOR2"))
		if (!Global_262145.f_24181 && cloudTimeAsInt < Global_262145.f_24168)
			num = 0;
	else if (hParam0 == joaat("PATRIOT2"))
		if (!Global_262145.f_24173 && cloudTimeAsInt < Global_262145.f_24160)
			num = 0;
	else if (hParam0 == joaat("STAFFORD"))
		if (!Global_262145.f_24175 && cloudTimeAsInt < Global_262145.f_24162)
			num = 0;
	else if (hParam0 == joaat("FREECRAWLER"))
		if (!Global_262145.f_24179 && cloudTimeAsInt < Global_262145.f_24166)
			num = 0;
	else if (hParam0 == joaat("BLIMP3"))
		if (!Global_262145.f_24178 && cloudTimeAsInt < Global_262145.f_24165)
			num = 0;

	if (hParam0 == joaat("MONSTER3"))
	{
	}
	else if (hParam0 == joaat("CERBERUS"))
	{
	}
	else if (hParam0 == joaat("CERBERUS2"))
	{
	}
	else if (hParam0 == joaat("CERBERUS3"))
	{
	}
	else if (hParam0 == joaat("BRUTUS"))
	{
	}
	else if (hParam0 == joaat("BRUTUS2"))
	{
	}
	else if (hParam0 == joaat("BRUTUS3"))
	{
	}
	else if (hParam0 == joaat("SCARAB"))
	{
	}
	else if (hParam0 == joaat("SCARAB2"))
	{
	}
	else if (hParam0 == joaat("SCARAB3"))
	{
	}
	else if (hParam0 == joaat("IMPERATOR"))
	{
	}
	else if (hParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (hParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (hParam0 == joaat("ZR380"))
	{
	}
	else if (hParam0 == joaat("ZR3802"))
	{
	}
	else if (hParam0 == joaat("ZR3803"))
	{
	}
	else if (hParam0 == joaat("IMPALER"))
	{
	}
	else if (hParam0 == joaat("DEVESTE"))
	{
		if (!Global_262145.f_26768 && cloudTimeAsInt < Global_262145.f_26770)
			num = 0;
	}
	else if (hParam0 == joaat("TOROS"))
	{
		if (!Global_262145.f_25781 && cloudTimeAsInt < Global_262145.f_25774)
			num = 0;
	}
	else if (hParam0 == joaat("CLIQUE"))
	{
		if (!Global_262145.f_25782 && cloudTimeAsInt < Global_262145.f_25775)
			num = 0;
	}
	else if (hParam0 == joaat("ITALIGTO"))
	{
		if (!Global_262145.f_25783 && cloudTimeAsInt < Global_262145.f_25776)
			num = 0;
	}
	else if (hParam0 == joaat("DEVIANT"))
	{
		if (!Global_262145.f_25784 && cloudTimeAsInt < Global_262145.f_25777)
			num = 0;
	}
	else if (hParam0 == joaat("VAMOS"))
	{
		if (!Global_262145.f_26769 && cloudTimeAsInt < Global_262145.f_26771)
			num = 0;
	}
	else if (hParam0 == joaat("TULIP"))
	{
		if (!Global_262145.f_25785 && cloudTimeAsInt < Global_262145.f_25778)
			num = 0;
	}
	else if (hParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_262145.f_25786 && cloudTimeAsInt < Global_262145.f_25779)
			num = 0;
	}
	else if (hParam0 == joaat("RCBANDITO"))
	{
		if (!Global_262145.f_25787 && cloudTimeAsInt < Global_262145.f_25780)
			num = 0;
	}
	else if (hParam0 == joaat("THRAX"))
	{
		if (!Global_262145.f_25792 && cloudTimeAsInt < Global_262145.f_25813)
			num = 0;
	}
	else if (hParam0 == joaat("DRAFTER"))
	{
		if (!Global_262145.f_25793 && cloudTimeAsInt < Global_262145.f_25814)
			num = 0;
	}
	else if (hParam0 == joaat("LOCUST"))
	{
		if (!Global_262145.f_25794 && cloudTimeAsInt < Global_262145.f_25815)
			num = 0;
	}
	else if (hParam0 == joaat("NOVAK"))
	{
		if (!Global_262145.f_25795 && cloudTimeAsInt < Global_262145.f_25816)
			num = 0;
	}
	else if (hParam0 == joaat("ZORRUSSO"))
	{
		if (!Global_262145.f_25796 && cloudTimeAsInt < Global_262145.f_25817)
			num = 0;
	}
	else if (hParam0 == joaat("GAUNTLET3"))
	{
		if (!Global_262145.f_25797 && cloudTimeAsInt < Global_262145.f_25818)
			num = 0;
	}
	else if (hParam0 == joaat("ISSI7"))
	{
		if (!Global_262145.f_25798 && cloudTimeAsInt < Global_262145.f_25819)
			num = 0;
	}
	else if (hParam0 == joaat("ZION3"))
	{
		if (!Global_262145.f_25799 && cloudTimeAsInt < Global_262145.f_25820)
			num = 0;
	}
	else if (hParam0 == joaat("NEBULA"))
	{
		if (!Global_262145.f_25800 && cloudTimeAsInt < Global_262145.f_25821)
			num = 0;
	}
	else if (hParam0 == joaat("HELLION"))
	{
		if (!Global_262145.f_25801 && cloudTimeAsInt < Global_262145.f_25822)
			num = 0;
	}
	else if (hParam0 == joaat("DYNASTY"))
	{
		if (!Global_262145.f_25802 && cloudTimeAsInt < Global_262145.f_25823)
			num = 0;
	}
	else if (hParam0 == joaat("RROCKET"))
	{
		if (!Global_262145.f_25803 && cloudTimeAsInt < Global_262145.f_25824)
			num = 0;
	}
	else if (hParam0 == joaat("PEYOTE2"))
	{
		if (!Global_262145.f_25804 && cloudTimeAsInt < Global_262145.f_25825)
			num = 0;
	}
	else if (hParam0 == joaat("GAUNTLET4"))
	{
		if (!Global_262145.f_25805 && cloudTimeAsInt < Global_262145.f_25826)
			num = 0;
	}
	else if (hParam0 == joaat("CARACARA2"))
	{
		if (!Global_262145.f_25806 && cloudTimeAsInt < Global_262145.f_25827)
			num = 0;
	}
	else if (hParam0 == joaat("JUGULAR"))
	{
		if (!Global_262145.f_25807 && cloudTimeAsInt < Global_262145.f_25828)
			num = 0;
	}
	else if (hParam0 == joaat("S80"))
	{
		if (!Global_262145.f_25808 && cloudTimeAsInt < Global_262145.f_25829)
			num = 0;
	}
	else if (hParam0 == joaat("KRIEGER"))
	{
		if (!Global_262145.f_25809 && cloudTimeAsInt < Global_262145.f_25830)
			num = 0;
	}
	else if (hParam0 == joaat("EMERUS"))
	{
		if (!Global_262145.f_25810 && cloudTimeAsInt < Global_262145.f_25831)
			num = 0;
	}
	else if (hParam0 == joaat("NEO"))
	{
		if (!Global_262145.f_25811 && cloudTimeAsInt < Global_262145.f_25832)
			num = 0;
	}
	else if (hParam0 == joaat("PARAGON"))
	{
		if (!Global_262145.f_25812 && cloudTimeAsInt < Global_262145.f_25833)
			num = 0;
	}
	else if (hParam0 == joaat("ASBO"))
	{
		if (!Global_262145.f_28613 && cloudTimeAsInt < Global_262145.f_28634)
			num = 0;
	}
	else if (hParam0 == joaat("KANJO"))
	{
		if (!Global_262145.f_28614 && cloudTimeAsInt < Global_262145.f_28635)
			num = 0;
	}
	else if (hParam0 == joaat("EVERON"))
	{
		if (!Global_262145.f_28615 && cloudTimeAsInt < Global_262145.f_28636)
			num = 0;
	}
	else if (hParam0 == joaat("RETINUE2"))
	{
		if (!Global_262145.f_28616 && cloudTimeAsInt < Global_262145.f_28637)
			num = 0;
	}
	else if (hParam0 == joaat("YOSEMITE2"))
	{
		if (!Global_262145.f_28617 && cloudTimeAsInt < Global_262145.f_28638)
			num = 0;
	}
	else if (hParam0 == joaat("SUGOI"))
	{
		if (!Global_262145.f_28618 && cloudTimeAsInt < Global_262145.f_28639)
			num = 0;
	}
	else if (hParam0 == joaat("SULTAN2"))
	{
		if (!Global_262145.f_28619 && cloudTimeAsInt < Global_262145.f_28640)
			num = 0;
	}
	else if (hParam0 == joaat("OUTLAW"))
	{
		if (!Global_262145.f_28620 && cloudTimeAsInt < Global_262145.f_28641)
			num = 0;
	}
	else if (hParam0 == joaat("VAGRANT"))
	{
		if (!Global_262145.f_28621 && cloudTimeAsInt < Global_262145.f_28642)
			num = 0;
	}
	else if (hParam0 == joaat("KOMODA"))
	{
		if (!Global_262145.f_28622 && cloudTimeAsInt < Global_262145.f_28643)
			num = 0;
	}
	else if (hParam0 == joaat("STRYDER"))
	{
		if (!Global_262145.f_28623 && cloudTimeAsInt < Global_262145.f_28644)
			num = 0;
	}
	else if (hParam0 == joaat("FURIA"))
	{
		if (!Global_262145.f_28624 && cloudTimeAsInt < Global_262145.f_28645)
			num = 0;
	}
	else if (hParam0 == joaat("ZHABA"))
	{
		if (!Global_262145.f_28625 && cloudTimeAsInt < Global_262145.f_28646)
			num = 0;
	}
	else if (hParam0 == joaat("JB7002"))
	{
		if (!Global_262145.f_28626 && cloudTimeAsInt < Global_262145.f_28647)
			num = 0;
	}
	else if (hParam0 == joaat("FIRETRUK"))
	{
		if (!Global_262145.f_28627 && cloudTimeAsInt < Global_262145.f_28648)
			num = 0;
	}
	else if (hParam0 == joaat("BURRITO2"))
	{
		if (!Global_262145.f_28628 && cloudTimeAsInt < Global_262145.f_28649)
			num = 0;
	}
	else if (hParam0 == joaat("BOXVILLE"))
	{
		if (!Global_262145.f_28629 && cloudTimeAsInt < Global_262145.f_28650)
			num = 0;
	}
	else if (hParam0 == joaat("STOCKADE"))
	{
		if (!Global_262145.f_28630 && cloudTimeAsInt < Global_262145.f_28651)
			num = 0;
	}
	else if (hParam0 == joaat("MINITANK"))
	{
		if (!Global_262145.f_28631 && cloudTimeAsInt < Global_262145.f_28652)
			num = 0;
	}
	else if (hParam0 == joaat("LGUARD"))
	{
		if (!Global_262145.f_28632 && cloudTimeAsInt < Global_262145.f_28653)
			num = 0;
	}
	else if (hParam0 == joaat("BLAZER2"))
	{
		if (!Global_262145.f_28633 && cloudTimeAsInt < Global_262145.f_28654)
			num = 0;
	}
	else if (hParam0 == joaat("FORMULA"))
	{
		if (!Global_262145.f_28656 && cloudTimeAsInt < Global_262145.f_28657 && !Global_262145.f_28611)
			num = 0;
	}
	else if (hParam0 == joaat("FORMULA2"))
	{
		if (!Global_262145.f_28659 && cloudTimeAsInt < Global_262145.f_28660 && !Global_262145.f_28612)
			num = 0;
	}
	else if (hParam0 == joaat("IMORGON"))
	{
		if (!Global_262145.f_28664 && cloudTimeAsInt < Global_262145.f_28667)
			num = 0;
	}
	else if (hParam0 == joaat("REBLA"))
	{
		if (!Global_262145.f_28665 && cloudTimeAsInt < Global_262145.f_28668)
			num = 0;
	}
	else if (hParam0 == joaat("VSTR"))
	{
		if (!Global_262145.f_28666 && cloudTimeAsInt < Global_262145.f_28669)
			num = 0;
	}
	else if (hParam0 == joaat("GAUNTLET5"))
	{
		if (!Global_262145.f_29682 && cloudTimeAsInt < Global_262145.f_29347)
			num = 0;
	}
	else if (hParam0 == joaat("CLUB"))
	{
		if (!Global_262145.f_29333 && cloudTimeAsInt < Global_262145.f_29354)
			num = 0;
	}
	else if (hParam0 == joaat("DUKES3"))
	{
		if (!Global_262145.f_29334 && cloudTimeAsInt < Global_262145.f_29340)
			num = 0;
	}
	else if (hParam0 == joaat("YOSEMITE3"))
	{
		if (!Global_262145.f_29680 && cloudTimeAsInt < Global_262145.f_29348)
			num = 0;
	}
	else if (hParam0 == joaat("PEYOTE3"))
	{
		if (!Global_262145.f_29681 && cloudTimeAsInt < Global_262145.f_29349)
			num = 0;
	}
	else if (hParam0 == joaat("GLENDALE2"))
	{
		if (!Global_262145.f_29327 && cloudTimeAsInt < Global_262145.f_29346)
			num = 0;
	}
	else if (hParam0 == joaat("PENUMBRA2"))
	{
		if (!Global_262145.f_29328 && cloudTimeAsInt < Global_262145.f_29355)
			num = 0;
	}
	else if (hParam0 == joaat("LANDSTALKER2"))
	{
		if (!Global_262145.f_29329 && cloudTimeAsInt < Global_262145.f_29345)
			num = 0;
	}
	else if (hParam0 == joaat("SEMINOLE2"))
	{
		if (!Global_262145.f_29330 && cloudTimeAsInt < Global_262145.f_29343)
			num = 0;
	}
	else if (hParam0 == joaat("TIGON"))
	{
		if (!Global_262145.f_29676 && cloudTimeAsInt < Global_262145.f_29350)
			num = 0;
	}
	else if (hParam0 == joaat("OPENWHEEL1"))
	{
		if (!Global_262145.f_29677 && cloudTimeAsInt < Global_262145.f_29351)
			num = 0;
	}
	else if (hParam0 == joaat("OPENWHEEL2"))
	{
		if (!Global_262145.f_29678 && cloudTimeAsInt < Global_262145.f_29352)
			num = 0;
	}
	else if (hParam0 == joaat("COQUETTE4"))
	{
		if (!Global_262145.f_29679 && cloudTimeAsInt < Global_262145.f_29353)
			num = 0;
	}
	else if (hParam0 == joaat("MANANA2"))
	{
		if (!Global_262145.f_29331 && cloudTimeAsInt < Global_262145.f_29342)
			num = 0;
	}
	else if (hParam0 == joaat("YOUGA3"))
	{
		if (!Global_262145.f_29332 && cloudTimeAsInt < Global_262145.f_29344)
			num = 0;
	}
	else if (hParam0 == joaat("TOREADOR"))
	{
		if (!Global_262145.f_30141 && cloudTimeAsInt < Global_262145.f_30124)
			num = 0;
	}
	else if (hParam0 == joaat("ANNIHILATOR2"))
	{
		if (!Global_262145.f_30142 && cloudTimeAsInt < Global_262145.f_30125)
			num = 0;
	}
	else if (hParam0 == joaat("ALKONOST"))
	{
		if (!Global_262145.f_30143 && cloudTimeAsInt < Global_262145.f_30126)
			num = 0;
	}
	else if (hParam0 == joaat("PATROLBOAT"))
	{
		if (!Global_262145.f_30144 && cloudTimeAsInt < Global_262145.f_30127)
			num = 0;
	}
	else if (hParam0 == joaat("LONGFIN"))
	{
		if (!Global_262145.f_30145 && cloudTimeAsInt < Global_262145.f_30128)
			num = 0;
	}
	else if (hParam0 == joaat("WINKY"))
	{
		if (!Global_262145.f_30146 && cloudTimeAsInt < Global_262145.f_30129)
			num = 0;
	}
	else if (hParam0 == joaat("VETO"))
	{
		if (!Global_262145.f_30147 && cloudTimeAsInt < Global_262145.f_30130)
			num = 0;
	}
	else if (hParam0 == joaat("VETO2"))
	{
		if (!Global_262145.f_30148 && cloudTimeAsInt < Global_262145.f_30131)
			num = 0;
	}
	else if (hParam0 == joaat("ITALIRSX"))
	{
		if (!Global_262145.f_30149 && cloudTimeAsInt < Global_262145.f_30132)
			num = 0;
	}
	else if (hParam0 == joaat("WEEVIL"))
	{
		if (Global_262145.f_30158)
		{
		}
		else if (!Global_262145.f_30150 && cloudTimeAsInt < Global_262145.f_30133)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("MANCHEZ2"))
	{
		if (!Global_262145.f_30151 && cloudTimeAsInt < Global_262145.f_30134)
			num = 0;
	}
	else if (hParam0 == joaat("SLAMTRUCK"))
	{
		if (!Global_262145.f_30152 && cloudTimeAsInt < Global_262145.f_30135)
			num = 0;
	}
	else if (hParam0 == joaat("VETIR"))
	{
		if (!Global_262145.f_30153 && cloudTimeAsInt < Global_262145.f_30136)
			num = 0;
	}
	else if (hParam0 == joaat("SQUADDIE"))
	{
		if (!Global_262145.f_30154 && cloudTimeAsInt < Global_262145.f_30137)
			num = 0;
	}
	else if (hParam0 == joaat("BRIOSO2"))
	{
		if (Global_262145.f_30159)
		{
		}
		else if (!Global_262145.f_30155 && cloudTimeAsInt < Global_262145.f_30138)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("DINGHY5"))
	{
		if (!Global_262145.f_30156 && cloudTimeAsInt < Global_262145.f_30139)
			num = 0;
	}
	else if (hParam0 == joaat("VERUS"))
	{
		if (!Global_262145.f_30157 && cloudTimeAsInt < Global_262145.f_30140)
			num = 0;
	}
	else if (hParam0 == joaat("TAILGATER2"))
	{
		if (!Global_262145.f_31009 && cloudTimeAsInt < Global_262145.f_30992)
			num = 0;
	}
	else if (hParam0 == joaat("EUROS"))
	{
		if (!Global_262145.f_31010 && cloudTimeAsInt < Global_262145.f_30993)
			num = 0;
	}
	else if (hParam0 == joaat("SULTAN3"))
	{
		if (!Global_262145.f_31011 && cloudTimeAsInt < Global_262145.f_30994)
			num = 0;
	}
	else if (hParam0 == joaat("RT3000"))
	{
		if (!Global_262145.f_31012 && cloudTimeAsInt < Global_262145.f_30995)
			num = 0;
	}
	else if (hParam0 == joaat("VECTRE"))
	{
		if (!Global_262145.f_31013 && cloudTimeAsInt < Global_262145.f_30996)
			num = 0;
	}
	else if (hParam0 == joaat("ZR350"))
	{
		if (!Global_262145.f_31014 && cloudTimeAsInt < Global_262145.f_30997)
			num = 0;
	}
	else if (hParam0 == joaat("WARRENER2"))
	{
		if (!Global_262145.f_31015 && cloudTimeAsInt < Global_262145.f_30998)
			num = 0;
	}
	else if (hParam0 == joaat("CALICO"))
	{
		if (!Global_262145.f_31016 && cloudTimeAsInt < Global_262145.f_30999)
			num = 0;
	}
	else if (hParam0 == joaat("REMUS"))
	{
		if (!Global_262145.f_31017 && cloudTimeAsInt < Global_262145.f_31000)
			num = 0;
	}
	else if (hParam0 == joaat("CYPHER"))
	{
		if (!Global_262145.f_31018 && cloudTimeAsInt < Global_262145.f_31001)
			num = 0;
	}
	else if (hParam0 == joaat("DOMINATOR7"))
	{
		if (!Global_262145.f_31019 && cloudTimeAsInt < Global_262145.f_31002)
			num = 0;
	}
	else if (hParam0 == joaat("JESTER4"))
	{
		if (!Global_262145.f_31020 && cloudTimeAsInt < Global_262145.f_31003)
			num = 0;
	}
	else if (hParam0 == joaat("FUTO2"))
	{
		if (!Global_262145.f_31021 && cloudTimeAsInt < Global_262145.f_31004)
			num = 0;
	}
	else if (hParam0 == joaat("DOMINATOR8"))
	{
		if (!Global_262145.f_31022 && cloudTimeAsInt < Global_262145.f_31005)
			num = 0;
	}
	else if (hParam0 == joaat("PREVION"))
	{
		if (!Global_262145.f_31023 && cloudTimeAsInt < Global_262145.f_31006)
			num = 0;
	}
	else if (hParam0 == joaat("GROWLER"))
	{
		if (!Global_262145.f_31024 && cloudTimeAsInt < Global_262145.f_31007)
			num = 0;
	}
	else if (hParam0 == joaat("COMET6"))
	{
		if (!Global_262145.f_31025 && cloudTimeAsInt < Global_262145.f_31008)
			num = 0;
	}
	else if (hParam0 == joaat("CHAMPION"))
	{
		if (!Global_262145.f_31889 && cloudTimeAsInt < Global_262145.f_31874)
			num = 0;
	}
	else if (hParam0 == joaat("BUFFALO4"))
	{
		if (!Global_262145.f_31890 && cloudTimeAsInt < Global_262145.f_31875)
			num = 0;
	}
	else if (hParam0 == joaat("DEITY"))
	{
		if (!Global_262145.f_31891 && cloudTimeAsInt < Global_262145.f_31876)
			num = 0;
	}
	else if (hParam0 == joaat("JUBILEE"))
	{
		if (!Global_262145.f_31892 && cloudTimeAsInt < Global_262145.f_31877)
			num = 0;
	}
	else if (hParam0 == joaat("IGNUS"))
	{
		if (!Global_262145.f_31893 && cloudTimeAsInt < Global_262145.f_31878)
			num = 0;
	}
	else if (hParam0 == joaat("CINQUEMILA"))
	{
		if (!Global_262145.f_31894 && cloudTimeAsInt < Global_262145.f_31879)
			num = 0;
	}
	else if (hParam0 == joaat("ASTRON"))
	{
		if (!Global_262145.f_31895 && cloudTimeAsInt < Global_262145.f_31880)
			num = 0;
	}
	else if (hParam0 == joaat("COMET7"))
	{
		if (!Global_262145.f_31896 && cloudTimeAsInt < Global_262145.f_31881)
			num = 0;
	}
	else if (hParam0 == joaat("ZENO"))
	{
		if (!Global_262145.f_31897 && cloudTimeAsInt < Global_262145.f_31882)
			num = 0;
	}
	else if (hParam0 == joaat("REEVER"))
	{
		if (!Global_262145.f_31898 && cloudTimeAsInt < Global_262145.f_31883)
			num = 0;
	}
	else if (hParam0 == joaat("IWAGEN"))
	{
		if (!Global_262145.f_31899 && cloudTimeAsInt < Global_262145.f_31884)
			num = 0;
	}
	else if (hParam0 == joaat("GRANGER2"))
	{
		if (!Global_262145.f_31900 && cloudTimeAsInt < Global_262145.f_31885)
			num = 0;
	}
	else if (hParam0 == joaat("PATRIOT3"))
	{
		if (!Global_262145.f_31901 && cloudTimeAsInt < Global_262145.f_31886)
			num = 0;
	}
	else if (hParam0 == joaat("SHINOBI"))
	{
		if (!Global_262145.f_31902 && cloudTimeAsInt < Global_262145.f_31887)
			num = 0;
	}
	else if (hParam0 == joaat("BALLER7"))
	{
		if (Global_262145.f_31967)
		{
		}
		else if (!Global_262145.f_31903 && cloudTimeAsInt < Global_262145.f_31888)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("BRIOSO3"))
	{
		if (!*Global_262145.f_33131 && cloudTimeAsInt < *Global_262145.f_33112)
			num = 0;
	}
	else if (hParam0 == joaat("CORSITA"))
	{
		if (!*Global_262145.f_33125 && cloudTimeAsInt < *Global_262145.f_33106)
			num = 0;
	}
	else if (hParam0 == joaat("DRAUGUR"))
	{
		if (!*Global_262145.f_33129 && cloudTimeAsInt < *Global_262145.f_33110)
			num = 0;
	}
	else if (hParam0 == joaat("GREENWOOD"))
	{
		if (!*Global_262145.f_33123 && cloudTimeAsInt < *Global_262145.f_33104)
			num = 0;
	}
	else if (hParam0 == joaat("KANJOSJ"))
	{
		if (!*Global_262145.f_33134 && cloudTimeAsInt < *Global_262145.f_33115)
			num = 0;
	}
	else if (hParam0 == joaat("LM87"))
	{
		if (!*Global_262145.f_33126 && cloudTimeAsInt < *Global_262145.f_33107)
			num = 0;
	}
	else if (hParam0 == joaat("POSTLUDE"))
	{
		if (!*Global_262145.f_33135 && cloudTimeAsInt < *Global_262145.f_33116)
			num = 0;
	}
	else if (hParam0 == joaat("RHINEHART"))
	{
		if (!*Global_262145.f_33137 && cloudTimeAsInt < *Global_262145.f_33118)
			num = 0;
	}
	else if (hParam0 == joaat("SM722"))
	{
		if (!*Global_262145.f_33128 && cloudTimeAsInt < *Global_262145.f_33109)
			num = 0;
	}
	else if (hParam0 == joaat("TENF"))
	{
		if (!*Global_262145.f_33136 && cloudTimeAsInt < *Global_262145.f_33117)
			num = 0;
	}
	else if (hParam0 == joaat("TENF2"))
	{
		if (!*Global_262145.f_33139 && cloudTimeAsInt < *Global_262145.f_33120)
			num = 0;
	}
	else if (hParam0 == joaat("TORERO2"))
	{
		if (!*Global_262145.f_33124 && cloudTimeAsInt < *Global_262145.f_33105)
			num = 0;
	}
	else if (hParam0 == joaat("VIGERO2"))
	{
		if (!*Global_262145.f_33132 && cloudTimeAsInt < *Global_262145.f_33113)
			num = 0;
	}
	else if (hParam0 == joaat("WEEVIL2"))
	{
		if (!*Global_262145.f_33138 && cloudTimeAsInt < *Global_262145.f_33119)
			num = 0;
	}
	else if (hParam0 == joaat("RUINER4"))
	{
		if (!*Global_262145.f_33130 && cloudTimeAsInt < *Global_262145.f_33111)
			num = 0;
	}
	else if (hParam0 == joaat("SENTINEL4"))
	{
		if (!*Global_262145.f_33140 && cloudTimeAsInt < *Global_262145.f_33121)
			num = 0;
	}
	else if (hParam0 == joaat("CONADA"))
	{
		if (!*Global_262145.f_33127 && cloudTimeAsInt < *Global_262145.f_33108)
			num = 0;
	}
	else if (hParam0 == joaat("OMNISEGT"))
	{
		if (!*Global_262145.f_33122 && cloudTimeAsInt < *Global_262145.f_33103)
			num = 0;
	}
	else if (hParam0 == joaat("MANCHEZ3"))
	{
		if (!*Global_262145.f_33962 && cloudTimeAsInt < *Global_262145.f_33946)
			num = 0;
	}
	else if (hParam0 == joaat("BRICKADE2"))
	{
		if (!*Global_262145.f_33962 && cloudTimeAsInt < *Global_262145.f_33946)
			num = 0;
	}
	else if (hParam0 == joaat("EUDORA"))
	{
		if (!*Global_262145.f_33971 && cloudTimeAsInt < *Global_262145.f_33954)
			num = 0;
	}
	else if (hParam0 == joaat("POWERSURGE"))
	{
		if (!*Global_262145.f_33965 && cloudTimeAsInt < *Global_262145.f_33949)
			num = 0;
	}
	else if (hParam0 == joaat("JOURNEY2"))
	{
		if (!*Global_262145.f_33959 && cloudTimeAsInt < *Global_262145.f_33943)
			num = 0;
	}
	else if (hParam0 == joaat("SURFER3"))
	{
		if (!*Global_262145.f_33960 && cloudTimeAsInt < *Global_262145.f_33944)
			num = 0;
	}
	else if (hParam0 == joaat("ENTITY3"))
	{
		if (!*Global_262145.f_33957 && cloudTimeAsInt < *Global_262145.f_33941)
			num = 0;
	}
	else if (hParam0 == joaat("PANTHERE"))
	{
		if (!*Global_262145.f_33968 && cloudTimeAsInt < *Global_262145.f_33952)
			num = 0;
	}
	else if (hParam0 == joaat("BOOR"))
	{
		if (!*Global_262145.f_33972 && cloudTimeAsInt < *Global_262145.f_33956)
			num = 0;
	}
	else if (hParam0 == joaat("EVERON2"))
	{
		if (!*Global_262145.f_33969 && cloudTimeAsInt < *Global_262145.f_33953)
			num = 0;
	}
	else if (hParam0 == joaat("TULIP2"))
	{
		if (!*Global_262145.f_33958 && cloudTimeAsInt < *Global_262145.f_33942)
			num = 0;
	}
	else if (hParam0 == joaat("R300"))
	{
		if (!*Global_262145.f_33961 && cloudTimeAsInt < *Global_262145.f_33945)
			num = 0;
	}
	else if (hParam0 == joaat("VIRTUE"))
	{
		if (!*Global_262145.f_33970 && cloudTimeAsInt < *Global_262145.f_33955)
			num = 0;
	}
	else if (hParam0 == joaat("ISSI8"))
	{
		if (!*Global_262145.f_33966 && cloudTimeAsInt < *Global_262145.f_33950)
			num = 0;
	}
	else if (hParam0 == joaat("BROADWAY"))
	{
		if (!*Global_262145.f_33967 && cloudTimeAsInt < *Global_262145.f_33951)
			num = 0;
	}
	else if (hParam0 == joaat("TAHOMA"))
	{
		if (!*Global_262145.f_33964 && cloudTimeAsInt < *Global_262145.f_33948)
			num = 0;
	}
	else if (hParam0 == joaat("TAXI"))
	{
		if (!*Global_262145.f_33963 && cloudTimeAsInt < *Global_262145.f_33947)
			num = 0;
	}

	return num;
}

BOOL func_208() // Hash - 0x4C81F065 ^0x79C65D03
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_209() // Hash - 0x4C81F065 ^0xB17A9745
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL func_210() // Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_211() // Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_212() // Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_213() // Hash - 0x64659D79 ^0xC3C726F6
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return true;

	return false;
}

BOOL func_214(Vehicle veParam0) // Hash - 0xC71C0264 ^0xD1A8DB3A
{
	Hash entityModel;
	const char* vehicleNumberPlateText;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	vehicleNumberPlateText = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);

	if (entityModel == joaat("SPEEDO") && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G "))
		return true;

	if (!func_204(entityModel, false, -1))
		return true;

	return false;
}

BOOL func_215(Vehicle veParam0) // Hash - 0xA5B9FC6B ^0x23EADD90
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

BOOL func_216(Vehicle veParam0) // Hash - 0xB4CAAE6F ^0x153EF8BE
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

BOOL func_217(Vehicle veParam0) // Hash - 0x7BB181DF ^0x17C4552A
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

int func_218(Vehicle veParam0) // Hash - 0x593067C2 ^0x2918B7DD
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

BOOL func_219(Vehicle veParam0, int iParam1, BOOL bParam2) // Hash - 0xBCC62924 ^0x77695844
{
	int i;
	var garageName;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_220(iParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113648.f_7231[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_220(int iParam0, int iParam1, char* sParam2, var uParam3) // Hash - 0x4E74AA3 ^0x7FB173E0
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

void func_221(BOOL bParam0) // Hash - 0x1254D1D1 ^0x1254D1D1
{
	int i;

	for (i = 0; i < 60; i = i + 1)
	{
		func_128(i, bParam0);
	}

	return;
}

