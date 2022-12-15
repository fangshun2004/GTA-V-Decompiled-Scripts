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
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
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
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	float fLocal_55 = 0f;
	float fLocal_56 = 0f;
	float fLocal_57 = 0f;
	int iLocal_58 = 0;
	BOOL bLocal_59 = 0;
	BOOL bLocal_60 = 0;
	BOOL bLocal_61 = 0;
	int iLocal_62 = 0;
	Blip blLocal_63 = 0;
	Blip blLocal_64 = 0;
	Blip blLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	Ped pedLocal_75 = 0;
	Ped pedLocal_76 = 0;
	Vehicle veLocal_77 = 0;
	int iLocal_78 = 0;
	Cam caLocal_79 = 0;
	Vehicle veLocal_80 = 0;
	BOOL bLocal_81 = 0;
	int iLocal_82 = 0;
	char* sLocal_83 = 0;
	char* sLocal_84 = 0;
	char* sLocal_85 = 0;
	char* sLocal_86 = 0;
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
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	float fLocal_119 = 0f;
	char* sLocal_120 = 0;
	char* sLocal_121 = 0;
	var uLocal_122 = 16;
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
	char* sLocal_287 = 0;
	char* sLocal_288 = 0;
	char* sLocal_289 = 0;
	char* sLocal_290 = 0;
	char* sLocal_291 = 0;
	char* sLocal_292 = 0;
	char* sLocal_293 = 0;
	char* sLocal_294 = 0;
	BOOL bLocal_295 = 0;
	BOOL bLocal_296 = 0;
	BOOL bLocal_297 = 0;
	BOOL bLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	char* sLocal_306 = 0;
	char* sLocal_307 = 0;
	char* sLocal_308 = 0;
	char* sLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	int iLocal_316 = 0;
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
	Hash hLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = -1;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 1000;
	var uLocal_340 = 1000;
	var uLocal_341 = 0;
	BOOL bLocal_342 = 0;
	var uScriptParam_343 = 0;
	var uScriptParam_344 = 5;
	var uScriptParam_345 = 0;
	var uScriptParam_346 = 0;
	var uScriptParam_347 = 0;
	var uScriptParam_348 = 0;
	var uScriptParam_349 = 0;
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
	var uScriptParam_360 = 5;
	var uScriptParam_361 = 0;
	var uScriptParam_362 = 0;
	var uScriptParam_363 = 0;
	var uScriptParam_364 = 0;
	var uScriptParam_365 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x17B4681A ^0x17B4681A
{
	var entityCoords;
	Vehicle unk;

	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_56 = 10f;
	fLocal_57 = 7f;
	iLocal_58 = 1;
	sLocal_84 = "random@car_thief@waving_ig_1";
	fLocal_119 = 1f;
	iLocal_299 = 786603;
	iLocal_300 = 786469;
	sLocal_307 = "car_returned_peyote";
	sLocal_308 = "girl_car_returned";
	sLocal_309 = "player_car_returned";
	uLocal_52 = { uScriptParam_343.f_1[0 /*3*/] };
	fLocal_55 = uScriptParam_343.f_17[0];

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		func_237();

	func_236();

	if (iLocal_301 == 2)
	{
		if (func_235(34))
			SCRIPT::TERMINATE_THIS_THREAD();
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			
				if (entityCoords.f_2 > 23f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -743.3924f, -2129.8203f, 12.076193f, -708.892f, -2160.7053f, 19.703499f, 124.5f, false, true, 0))
					SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
	}

	if (func_194(uLocal_52, 17, iLocal_301, false, false))
		func_191(-1);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_190();
		func_189(blLocal_63, &uLocal_66);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	
		func_188();
	
		if (!func_187())
		{
			if (func_186())
				func_237();
		
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_48)
				{
					case 0:
						if (func_169())
						{
							PED::SET_CREATE_RANDOM_COPS(false);
							iLocal_48 = 1;
						}
						break;
				
					case 1:
						if (!PED::IS_PED_INJURED(pedLocal_76))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(pedLocal_75) && func_168(veLocal_77) && !func_167(0))
							{
								if (func_166())
								{
									if (func_168(veLocal_80))
										VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veLocal_80, false);
								
									func_157(true);
									PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
									func_152(39, true);
									func_152(40, true);
									func_152(41, true);
									func_152(42, true);
									func_152(43, true);
									func_152(44, true);
									SYSTEM::SETTIMERA(0);
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(pedLocal_75))
								{
									TASK::TASK_SMART_FLEE_PED(pedLocal_75, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
									PED::SET_PED_KEEP_TASK(pedLocal_75, true);
									SYSTEM::WAIT(0);
								}
							
								func_237();
							}
						}
						else
						{
							if (!PED::IS_PED_INJURED(pedLocal_75) && func_168(veLocal_77))
							{
								TASK::TASK_VEHICLE_DRIVE_WANDER(pedLocal_75, veLocal_77, 20f, iLocal_299);
								PED::SET_PED_KEEP_TASK(pedLocal_75, true);
								SYSTEM::WAIT(0);
							}
						
							func_120(false);
						}
						break;
				}
			}
			else
			{
				func_237();
			}
		}
		else
		{
			if (PED::IS_PED_INJURED(pedLocal_76))
				if (uLocal_122[2 /*10*/].f_7)
					func_119(&uLocal_122, 2);
		
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			func_111();
		
			if (func_168(veLocal_77) && !func_110())
			{
				if (func_108())
				{
					if (!PED::IS_PED_INJURED(pedLocal_75))
					{
						switch (iLocal_49)
						{
							case 0:
								if (!PED::IS_PED_INJURED(pedLocal_76))
								{
									if (PED::IS_PED_IN_VEHICLE(pedLocal_76, veLocal_77, false))
									{
										if (iLocal_301 == 2)
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_76, true, 1);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_77, true, 1);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
											TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, veLocal_77, PLAYER::PLAYER_PED_ID(), 8, 30f, iLocal_300, 200f, 10f, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
											TASK::TASK_PERFORM_SEQUENCE(pedLocal_76, iLocal_78);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
										}
										else
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_76, true, 1);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
											TASK::TASK_VEHICLE_TEMP_ACTION(0, veLocal_77, 30, 1000);
											TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, veLocal_77, PLAYER::PLAYER_PED_ID(), 8, 40f, iLocal_300, 200f, 10f, true);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
											TASK::TASK_PERFORM_SEQUENCE(pedLocal_76, iLocal_78);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
										}
									
										uLocal_317 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_77, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_77, "wheel_lr")) };
										uLocal_320 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_77, uLocal_317) };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_wheel_burnout", veLocal_77, uLocal_320 + { -0.5f, -1f, 0f }, 0f, 180f, 0f, 0.25f, false, false, false);
										uLocal_323 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_77, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_77, "wheel_rr")) };
										uLocal_326 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_77, uLocal_323) };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_wheel_burnout", veLocal_77, uLocal_326 + { -0.5f, -1f, 0f }, 0f, 180f, 0f, 0.25f, false, false, false);
										SYSTEM::SETTIMERA(0);
									
										if (!HUD::DOES_BLIP_EXIST(blLocal_64))
											blLocal_64 = func_106(veLocal_77, true, 0);
									
										MISC::SET_INSTANCE_PRIORITY_HINT(2);
										iLocal_49 = 1;
									}
									else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_77, PLAYER::PLAYER_PED_ID(), true))
									{
										if (!PED::IS_PED_INJURED(pedLocal_76))
										{
											TASK::TASK_SMART_FLEE_PED(pedLocal_76, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
											PED::SET_PED_KEEP_TASK(pedLocal_76, true);
											SYSTEM::WAIT(0);
										}
									
										func_237();
									}
								}
								else
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(pedLocal_75, veLocal_77, 20f, iLocal_299);
									PED::SET_PED_KEEP_TASK(pedLocal_75, true);
									SYSTEM::WAIT(0);
									func_120(false);
								}
								break;
						
							case 1:
								if (func_168(veLocal_77))
								{
									if (iLocal_301 == 1)
									{
										if (SYSTEM::TIMERA() < 5000)
										{
											if (SYSTEM::TIMERA() > 2000)
												fLocal_119 = fLocal_119 + 0.4f;
											else
												fLocal_119 = fLocal_119 + 0.2f;
										
											if (fLocal_119 > 30f)
												fLocal_119 = 30f;
										
											VEHICLE::SET_VEHICLE_FORWARD_SPEED(veLocal_77, fLocal_119);
											closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(veLocal_77, true), 5f, 0, 4);
										
											if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
											{
												if (func_168(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
													if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), veLocal_77))
														SYSTEM::SETTIMERA(5000);
											
												if (func_168(closestVehicle))
													if (closestVehicle != veLocal_77)
														if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(closestVehicle, veLocal_77))
															SYSTEM::SETTIMERA(5000);
											}
										}
									}
								
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(veLocal_77) < 700f)
										func_237();
								}
							
								func_76();
							
								if (func_75() || func_74() || ENTITY::IS_ENTITY_UPSIDEDOWN(veLocal_77) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(veLocal_77, 1, 5000) || FILES::GET_DLC_VEHICLE_FLAGS(veLocal_77) || PED::IS_PED_INJURED(pedLocal_76) || !PED::IS_PED_IN_VEHICLE(pedLocal_76, veLocal_77, false))
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
									{
										if (func_168(veLocal_77))
											AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(veLocal_77, 0);
									
										AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
									}
								
									if (HUD::DOES_BLIP_EXIST(blLocal_64))
										HUD::REMOVE_BLIP(&blLocal_64);
								
									func_73();
								
									if (HUD::DOES_BLIP_EXIST(blLocal_63))
										HUD::REMOVE_BLIP(&blLocal_63);
								
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_75);
									VEHICLE::BRING_VEHICLE_TO_HALT(veLocal_77, 50f, 5, false);
									blLocal_65 = func_106(veLocal_77, false, 0);
									fLocal_109 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veLocal_77, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
									fLocal_107 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veLocal_77, true), ENTITY::GET_ENTITY_COORDS(pedLocal_75, true));
									fLocal_108 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_75, true));
									func_71(&uLocal_330, 0, false);
									iLocal_49 = 2;
								}
								break;
						
							case 2:
								if (func_168(veLocal_77))
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(veLocal_77) < 700f)
										func_237();
							
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
									func_237();
							
								if (!ENTITY::IS_ENTITY_DEAD(pedLocal_76, false))
									if (!PED::IS_PED_IN_VEHICLE(pedLocal_76, veLocal_77, false))
										func_70(pedLocal_76, &uLocal_67, -1, 0, false, false, -1082130432, 0, -1, -1, true, false, false);
								else
									func_69(&uLocal_67);
							
								if (!PED::IS_PED_INJURED(pedLocal_76))
								{
									if (!PED::IS_PED_IN_COMBAT(pedLocal_76, PLAYER::PLAYER_PED_ID()))
									{
										TASK::TASK_COMBAT_PED(pedLocal_76, PLAYER::PLAYER_PED_ID(), 0, 16);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(pedLocal_76));
									}
								}
							
								if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veLocal_77, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > fLocal_109 + 220f || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veLocal_77, true), ENTITY::GET_ENTITY_COORDS(pedLocal_75, true)) > fLocal_107 + 220f || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_75, true)) > fLocal_108 + 220f)
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_77, false))
										func_120(false);
									else
										func_237();
							
								if (HUD::DOES_BLIP_EXIST(blLocal_65))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_77, false))
									{
										HUD::REMOVE_BLIP(&blLocal_65);
										blLocal_63 = func_65(pedLocal_75, false, 0);
										func_64(&uLocal_66);
										func_71(&uLocal_330, 0, false);
									
										if (!bLocal_60)
										{
											if (iLocal_301 == 1)
												uLocal_93 = { -2258.759f, 4274.059f, 45.916603f };
											else if (bLocal_61)
												uLocal_93 = { -483.4162f, -2160.8735f, 8.359f };
											else
												uLocal_93 = { -485.9905f, -2153.542f, 8.1999f };
										
											if (!CAM::IS_SPHERE_VISIBLE(uLocal_93, 2f) && !ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_75))
											{
												ENTITY::SET_ENTITY_COORDS(pedLocal_75, uLocal_93, true, false, false, true);
												ENTITY::SET_ENTITY_HEADING(pedLocal_75, fLocal_106);
												bLocal_60 = true;
											}
										}
									
										iLocal_50 = 3;
										iLocal_304 = MISC::GET_GAME_TIMER();
									}
									else if (ENTITY::IS_ENTITY_AT_ENTITY(veLocal_77, pedLocal_75, 20f, 20f, 7f, false, true, 0))
									{
										func_63();
									
										if (func_62())
										{
											if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedLocal_75, veLocal_77, -1, false, false))
											{
												if (!bLocal_296)
													func_47(&uLocal_122, sLocal_294, sLocal_290, 4, 0, 0, 0);
											
												TASK::TASK_VEHICLE_DRIVE_WANDER(pedLocal_75, veLocal_77, 35f, iLocal_299);
												PED::SET_PED_KEEP_TASK(pedLocal_75, true);
												func_120(true);
											}
										}
									}
								}
								else if (HUD::DOES_BLIP_EXIST(blLocal_63))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_77, false))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_75, fLocal_56, fLocal_56, fLocal_56, false, true, 0))
										{
											if (func_46(true, false, true))
											{
												HUD::REMOVE_BLIP(&blLocal_63);
											
												if (iLocal_301 == 1)
													if (func_45(ENTITY::GET_ENTITY_HEADING(veLocal_77), 336f, 90f))
														sLocal_306 = "RANDOM@CAR_THEFT_1@MCS_2";
													else
														sLocal_306 = "RANDOM@CAR_THEFT_1@MCS_2";
												else
													sLocal_306 = "RANDOM@CAR_THEFT_1@MCS_3";
											
												STREAMING::REQUEST_ANIM_DICT(sLocal_306);
												iLocal_50 = 4;
												iLocal_49 = 3;
											}
										}
										else
										{
											func_43(ENTITY::GET_ENTITY_COORDS(pedLocal_75, true), &fLocal_56, &fLocal_57);
										}
									}
									else
									{
										HUD::REMOVE_BLIP(&blLocal_63);
										blLocal_65 = func_106(veLocal_77, false, 0);
										iLocal_50 = 0;
									}
								}
								break;
						
							case 3:
								if (iLocal_301 == 1)
								{
									if (func_4())
									{
										if (func_3(pedLocal_75))
											PED::SET_PED_RESET_FLAG(pedLocal_75, 310, true);
									
										func_120(true);
									}
								}
								else if (func_4())
								{
									if (func_3(pedLocal_75))
										PED::SET_PED_RESET_FLAG(pedLocal_75, 310, true);
								
									func_120(true);
								}
								break;
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(pedLocal_76))
						{
							if (PED::IS_PED_IN_VEHICLE(pedLocal_76, veLocal_77, false))
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(pedLocal_76, veLocal_77, PLAYER::PLAYER_PED_ID(), 8, 50f, iLocal_300, 10f, 10f, false);
								PED::SET_PED_KEEP_TASK(pedLocal_76, true);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(pedLocal_76));
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(pedLocal_76, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
								PED::SET_PED_KEEP_TASK(pedLocal_76, true);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(pedLocal_76));
							}
						}
					
						SYSTEM::WAIT(0);
						func_237();
					}
				}
				else
				{
					if (iLocal_49 == 1)
					{
						if (func_168(veLocal_77))
							VEHICLE::DELETE_VEHICLE(&veLocal_77);
					
						if (!PED::IS_PED_INJURED(pedLocal_76))
							PED::DELETE_PED(&pedLocal_76);
					}
				
					if (!PED::IS_PED_INJURED(pedLocal_75))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_75, sLocal_83, "agitated_idle_a", 3))
							ENTITY::STOP_ENTITY_ANIM(pedLocal_75, "waiting", sLocal_83, -2f);
					
						func_1(pedLocal_75, "GENERIC_CURSE_HIGH", 24);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uLocal_102, 1f, 20000, 1193033728, 1056964608);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_75, iLocal_78);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
					}
				
					func_237();
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(pedLocal_76))
				{
					TASK::TASK_SMART_FLEE_PED(pedLocal_76, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_76, true);
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_77))
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veLocal_77, 50f);
			
				func_237();
			}
		}
	}

	return;
}

void func_1(Ped pedParam0, char* sParam1, int iParam2) // Position - 0xB87 Hash - 0x48D349EA ^0xA208047E
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_2(iParam2), 1);
	return;
}

char* func_2(int iParam0) // Position - 0xB9E Hash - 0xA17D549C ^0xCF648034
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

BOOL func_3(Ped pedParam0) // Position - 0xD93 Hash - 0x3D210083 ^0xF7E7C389
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

BOOL func_4() // Position - 0xDB4 Hash - 0x4C389F52 ^0x8386A9EB
{
	Vector3 animInitialOffsetPosition;
	char* unk;
	Vector3 unk2;
	float boneName;

	boneName = "chassis";
	func_63();

	if (!PED::IS_PED_INJURED(pedLocal_75) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_168(veLocal_77) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_306))
	{
		switch (iLocal_51)
		{
			case 0:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (func_46(true, false, true))
					{
						if (!IS_BIT_SET(Global_8253, 11))
						{
							if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
							{
								func_35(true, true, true, false, false, false, false);
							
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
								
									while (!func_33(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fLocal_57, 1, 1056964608, false, true, false))
									{
										HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
										SYSTEM::WAIT(0);
									}
								
									func_33(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fLocal_57, 0, 1056964608, false, true, false);
								}
							
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							
								if (!PED::IS_PED_INJURED(pedLocal_75))
									PED::SET_PED_DIES_WHEN_INJURED(pedLocal_75, false);
							
								func_31();
								func_24(0);
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
								iLocal_51 = 1;
							}
						}
					}
				}
				break;
		
			case 1:
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(veLocal_77, 0, 0, 0f);
				VEHICLE::SET_VEHICLE_DOOR_LATCHED(veLocal_77, 0, true, true, true);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			
				if (iLocal_301 == 1)
				{
					if (func_168(veLocal_77))
					{
						if (func_45(ENTITY::GET_ENTITY_HEADING(veLocal_77), 336f, 90f))
						{
							uLocal_90 = { -2254.2998f, 4273.361f, 44.9697f };
							fLocal_105 = 336.6557f;
							uLocal_87 = { -2252.683f, 4274.1597f, 45.0612f };
							uLocal_93 = { -2257.825f, 4269.189f, 44.6334f };
							fLocal_106 = 272.8688f;
							uLocal_113 = { -2254.5876f, 4277.307f, 45.6133f };
							uLocal_116 = { 6.6248f, 0.0369f, 179.5595f };
						}
						else
						{
							uLocal_90 = { -2254.223f, 4272.33f, 44.9193f };
							fLocal_105 = 148.0287f;
							uLocal_93 = { -2255.733f, 4271.32f, 44.8166f };
							fLocal_106 = 179.4774f;
							uLocal_87 = { -2257.088f, 4268.938f, 44.6456f };
							uLocal_113 = { -2255.7751f, 4274.144f, 46.0666f };
							uLocal_116 = { 2.8781f, 0.3464f, -146.6097f };
						}
					}
				
					vector = { -2269.34f, 4279.89f, 45.47f };
					heading = 53.23f;
					fLocal_112 = 50f;
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uLocal_87, true, false, false, true);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, true);
					ENTITY::SET_ENTITY_COORDS(pedLocal_75, uLocal_93, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(veLocal_77, fLocal_105);
					ENTITY::SET_ENTITY_COORDS(veLocal_77, uLocal_90, true, false, false, true);
				}
				else
				{
					if (!func_45(ENTITY::GET_ENTITY_HEADING(veLocal_77), 64.6764f, 90f))
					{
						uLocal_113 = { -478.7095f, -2163.5984f, 10.3091f };
						uLocal_116 = { -7.4391f, 0.0006f, 35.6865f };
						uLocal_90 = { -484.9581f, -2155.266f, 8.248f };
						fLocal_105 = 243.308f;
						fLocal_112 = 22f;
					}
					else
					{
						uLocal_113 = { -488.0143f, -2149.419f, 9.9817f };
						uLocal_116 = { -11.7475f, 0.0006f, -145.0045f };
						uLocal_90 = { -484.3195f, -2154.1882f, 8.2182f };
						fLocal_105 = 64.6764f;
						fLocal_112 = 36.9289f;
					}
				
					vector = { -486.92f, -2169.01f, 8.89f };
					heading = 63.1f;
					ENTITY::SET_ENTITY_COORDS(veLocal_77, uLocal_90, true, false, false, true);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, true);
					ENTITY::SET_ENTITY_HEADING(veLocal_77, fLocal_105);
				}
			
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			
				if (func_168(veLocal_77))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_77, 1084227584);
				
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_76))
						if (PED::IS_PED_IN_VEHICLE(pedLocal_76, veLocal_77, false))
							PED::DELETE_PED(&pedLocal_76);
				}
			
				uLocal_310 = { 0f, 0f, 0f };
				uLocal_313 = { 0f, 0f, 0f };
				iLocal_302 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_310, uLocal_313, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_302, veLocal_77, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_77, boneName));
				PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_302, uLocal_310, uLocal_313, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_75, iLocal_302, sLocal_306, sLocal_308, 1000f, -2f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_302, sLocal_306, sLocal_309, 1000f, -2f, 1024, 0, 1148846080, 0);
				caLocal_79 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_ANIMATED_CAMERA", uLocal_113, uLocal_116, fLocal_112, false, 2);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(caLocal_79, iLocal_302, "car_returned_cam", sLocal_306);
				ENTITY::PLAY_ENTITY_ANIM(veLocal_77, sLocal_307, sLocal_306, 1000f, false, false, false, 0, 262144);
				uLocal_310 = { ENTITY::GET_ENTITY_COORDS(veLocal_77, true) };
				uLocal_313 = { ENTITY::GET_ENTITY_ROTATION(veLocal_77, 2) };
			
				if (func_168(veLocal_80))
				{
					if (func_23(veLocal_80, uLocal_90, true) <= 11f)
					{
						ENTITY::SET_ENTITY_COORDS(veLocal_80, vector, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(veLocal_80, heading);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_80, 1084227584);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_80, true, false);
					}
				}
			
				MISC::CLEAR_AREA(uLocal_90, 10f, true, false, false, false);
				SYSTEM::SETTIMERA(0);
			
				if (iLocal_301 == 2)
					VEHICLE::REQUEST_VEHICLE_ASSET(2136773105, 15);
				else
					VEHICLE::REQUEST_VEHICLE_ASSET(1830407356, 15);
			
				FIRE::STOP_FIRE_IN_RANGE(uLocal_90, 15f);
				CAM::SET_CAM_ACTIVE(caLocal_79, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				iLocal_51 = 3;
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				break;
		
			case 3:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			
				if (func_20())
					iLocal_51 = 4;
			
				if (iLocal_301 == 1)
				{
					if (SYSTEM::TIMERA() > 1500 && !bLocal_342)
						if (func_47(&uLocal_122, sLocal_294, sLocal_121, 4, 0, 0, 0))
							iLocal_51 = 4;
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_302) && !bLocal_342)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302) >= 0.2f)
					{
						if (func_47(&uLocal_122, sLocal_294, sLocal_121, 4, 0, 0, 0))
						{
							iLocal_62 = 0;
							iLocal_51 = 4;
						}
					}
				}
			
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				break;
		
			case 4:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			
				if (iLocal_301 == 2)
					if (!func_19())
						if (iLocal_62 == 0)
							if (func_47(&uLocal_122, sLocal_294, "RECT2_REWARD", 4, 0, 0, 0))
								iLocal_62 = 1;
			
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			
				if (iLocal_301 == 1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_302))
					{
						if (iLocal_316 == 0)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302) >= 0.83f)
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_306, sLocal_309, 1000f, -2f, -1, 1048576, PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302), false, false, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
								iLocal_316 = 1;
							}
						}
					
						if (!PED::IS_PED_INJURED(pedLocal_75))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302) >= 0.83f)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_75, sLocal_306, sLocal_308, 2))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(pedLocal_75, -1000f, false);
								
									if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_75, false))
									{
										if (func_168(veLocal_77))
										{
											PED::SET_PED_INTO_VEHICLE(pedLocal_75, veLocal_77, -1);
											PED::SET_PED_RESET_FLAG(pedLocal_75, 310, true);
										}
									}
								
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_75, true, false);
								}
								else
								{
									PED::SET_PED_RESET_FLAG(pedLocal_75, 310, true);
								}
							}
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_302))
				{
					if (iLocal_316 == 0)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302) >= 0.86f)
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_306, sLocal_309, 1000f, -2f, -1, 1048576, PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302), false, false, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
							iLocal_316 = 1;
						}
					}
				
					if (!PED::IS_PED_INJURED(pedLocal_75))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302) > 0.847f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_75, sLocal_306, sLocal_308, 2))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(pedLocal_75, -1000f, false);
							
								if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_75, false))
								{
									if (func_168(veLocal_77))
									{
										PED::SET_PED_INTO_VEHICLE(pedLocal_75, veLocal_77, -1);
										PED::SET_PED_RESET_FLAG(pedLocal_75, 310, true);
									}
								}
							
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_75, true, false);
							}
							else
							{
								PED::SET_PED_RESET_FLAG(pedLocal_75, 310, true);
							}
						}
					}
				}
			
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_302) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302) >= 0.99f || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_302) || func_20())
				{
					if (!ENTITY::IS_ENTITY_DEAD(veLocal_77, false) && ENTITY::IS_ENTITY_PLAYING_ANIM(veLocal_77, sLocal_306, sLocal_307, 3))
						ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(veLocal_77, sLocal_306, sLocal_307, 1f);
				
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_302))
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_302, 1f);
				
					if (bLocal_342)
					{
						animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_306, sLocal_309, uLocal_310, uLocal_313, 1f, 2) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(animInitialOffsetPosition, &(animInitialOffsetPosition.f_2), false, false);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), animInitialOffsetPosition, true, false, false, true);
						animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_306, sLocal_309, uLocal_310, uLocal_313, 1f, 2) };
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), animInitialOffsetPosition.f_2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					}
				
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, true, 0, true);
				
					if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_75, false))
					{
						if (func_168(veLocal_77))
						{
							PED::SET_PED_INTO_VEHICLE(pedLocal_75, veLocal_77, -1);
							PED::SET_PED_RESET_FLAG(pedLocal_75, 310, true);
						}
					}
				
					if (!PED::IS_PED_INJURED(pedLocal_75))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_75, false))
						{
							if (func_168(veLocal_77))
							{
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(veLocal_77, 0, 0, 0f);
								VEHICLE::SET_VEHICLE_DOOR_LATCHED(veLocal_77, 0, true, true, true);
								iLocal_305 = MISC::GET_GAME_TIMER();
								iLocal_51 = 5;
							}
						}
					}
				}
				break;
		
			case 5:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			
				if (MISC::GET_GAME_TIMER() - iLocal_305 > 100)
				{
					if (func_3(pedLocal_75) && func_168(veLocal_77))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, veLocal_77, 9, 1000);
						TASK::TASK_VEHICLE_DRIVE_WANDER(0, veLocal_77, 25f, iLocal_299);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_75, iLocal_78);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
						PED::SET_PED_RESET_FLAG(pedLocal_75, 310, true);
					}
				
					func_35(false, true, true, false, false, false, false);
				
					if (bLocal_342)
					{
						if (CAM::DOES_CAM_EXIST(caLocal_79))
						{
							CAM::SET_CAM_ACTIVE(caLocal_79, false);
							CAM::DESTROY_CAM(caLocal_79, false);
						}
					
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						SYSTEM::WAIT(750);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						func_18(500, true);
					}
					else
					{
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);
						CAM::SET_CAM_ACTIVE(caLocal_79, false);
					}
				
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_17(&veLocal_77);
					func_5(func_10(), 4, 5);
					return true;
				}
				else if (func_3(pedLocal_75))
				{
					PED::SET_PED_RESET_FLAG(pedLocal_75, 310, true);
				}
				break;
		}
	}

	return false;
}

void func_5(int iParam0, int iParam1, int iParam2) // Position - 0x17C6 Hash - 0xF0BE1C2C ^0xB42E6E17
{
	int num;
	int num2;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0] = Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2;
			break;
	
		case 3:
			num2 = 14192;
		
			switch (iParam1)
			{
				case 1:
					num2 = 72;
					break;
			
				case 3:
					num2 = 74;
					break;
			
				case 2:
					num2 = 73;
					break;
			
				case 4:
					num2 = 75;
					break;
			
				case 5:
					num2 = 76;
					break;
			
				case 6:
					num2 = 77;
					break;
			
				case 7:
					num2 = 78;
					break;
			}
		
			if (num2 != 14192)
			{
				num = func_9(num2, -1, 0);
				num = num + iParam2;
			
				if (num > 100)
					num = 100;
			
				func_6(num2, num, -1, true, false);
			}
			break;
	}

	return;
}

void func_6(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x18B6 Hash - 0x7D768555 ^0x693A841
{
	Hash statName;

	bParam4;
	statName = Global_2805027[iParam0 /*3*/][func_7(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_7(int iParam0) // Position - 0x18E6 Hash - 0x1A3F3220 ^0x1A3F3220
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

int func_8() // Position - 0x191A Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

int func_9(int iParam0, int iParam1, int iParam2) // Position - 0x1926 Hash - 0x4BC84F7B ^0x370D7D6F
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

int func_10() // Position - 0x1963 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_11();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_11() // Position - 0x197C Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_15(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_14(PLAYER::PLAYER_PED_ID());
		
			if (func_13(num) && !func_12(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_13(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_12(int iParam0) // Position - 0x1A79 Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

BOOL func_13(int iParam0) // Position - 0x1A87 Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_14(Ped pedParam0) // Position - 0x1A93 Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_15(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_15(int iParam0) // Position - 0x1AD0 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_13(iParam0))
		return func_16(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_16(int iParam0) // Position - 0x1AF5 Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

void func_17(Vehicle* pveParam0) // Position - 0x1B04 Hash - 0xC50F9886 ^0x638B6124
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*pveParam0, false);
	
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
	}

	return;
}

void func_18(int iParam0, BOOL bParam1) // Position - 0x1B3C Hash - 0xE7B2CDD3 ^0xC2D0D6D9
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		if (!CAM::IS_SCREEN_FADING_IN())
			CAM::DO_SCREEN_FADE_IN(iParam0);

	if (bParam1)
	{
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}

	return;
}

BOOL func_19() // Position - 0x1B78 Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

BOOL func_20() // Position - 0x1B9A Hash - 0xAB59F157 ^0xD9B90404
{
	int vehicleAsset;

	vehicleAsset = 1830407356;

	if (iLocal_301 == 2)
		vehicleAsset = 2136773105;

	if (func_21(1000))
	{
		if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(vehicleAsset))
		{
			CAM::SET_CAM_ACTIVE(caLocal_79, false);
			CAM::DO_SCREEN_FADE_OUT(500);
		
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				SYSTEM::WAIT(0);
			}
		
			bLocal_342 = true;
			return true;
		}
	}

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(vehicleAsset))
		{
			bLocal_342 = true;
			return true;
		}
	}

	return false;
}

BOOL func_21(int iParam0) // Position - 0x1C0C Hash - 0x7FAC01B4 ^0x9388B6EC
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
			Global_27 = MISC::GET_GAME_TIMER();
	
		Global_28 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_27 > iParam0)
		{
			if (func_22())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_22() // Position - 0x1C56 Hash - 0x57459B9C ^0x9A36D842
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

float func_23(Vehicle veParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1C88 Hash - 0xC22B942A ^0xE0DB8793
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam1, bParam4);
}

void func_24(int iParam0) // Position - 0x1CC2 Hash - 0x7E11E9C ^0x544BF257
{
	if (func_30())
		return;

	if (!Global_20383.f_1 == 1)
	{
		if (func_29(0))
			func_25(iParam0);
	
		MISC::SET_BIT(&Global_8254, 2);
	}

	return;
}

void func_25(int iParam0) // Position - 0x1CF5 Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_30())
		return;

	if (Global_20584)
		if (func_28())
			func_27(true, true);
		else
			func_27(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		MISC::SET_BIT(&Global_8254, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_21725 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 30);
	else
		MISC::CLEAR_BIT(&Global_8253, 30);

	if (!func_26())
		Global_20383.f_1 = 3;

	return;
}

BOOL func_26() // Position - 0x1D7F Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_27(BOOL bParam0, BOOL bParam1) // Position - 0x1DA6 Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_29(0))
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

BOOL func_28() // Position - 0x1E1A Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_29(int iParam0) // Position - 0x1E28 Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

BOOL func_30() // Position - 0x1E7F Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1962996, 19);
}

void func_31() // Position - 0x1E8E Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_32();
	return;
}

void func_32() // Position - 0x1E9E Hash - 0xF6D04E68 ^0x80AE5309
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

BOOL func_33(Vehicle veParam0, float fParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1EBF Hash - 0x60473011 ^0x5B80F12B
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
	func_34(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_29 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, fParam1, iParam2, bParam4);

	Global_29 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= iParam3)
			return true;

	return false;
}

void func_34(Vehicle veParam0) // Position - 0x2057 Hash - 0x94E8CB0B ^0x47923A23
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

void func_35(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2083 Hash - 0x787E640E ^0x67C15509
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_42(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_26())
				Global_20383.f_1 = 3;
		
			Global_21725 = 5;
		}
	
		func_41(true, bParam3, bParam2, false);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_42(0);
		HUD::THEFEED_RESUME();
		Global_63368 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_41(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_39(PLAYER::PLAYER_ID()) && !func_37(PLAYER::PLAYER_ID(), 0) && !func_36() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_39(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		Global_78556 = 0;
	}

	return;
}

BOOL func_36() // Position - 0x21D0 Hash - 0xAA7793E3 ^0x3F62CDC8
{
	return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

BOOL func_37(Player plParam0, int iParam1) // Position - 0x21EA Hash - 0x5A3B86CC ^0x2CFA58CE
{
	BOOL flag;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_38(-1, false) == 8;
	else
		flag = Global_1853910[plParam0 /*862*/].f_205 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_38(int iParam0, BOOL bParam1) // Position - 0x2235 Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_8();

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

BOOL func_39(Player plParam0) // Position - 0x2276 Hash - 0x68897CDD ^0x62820466
{
	if (func_37(plParam0, 0))
		return true;

	if (func_40())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2))
		return true;

	return false;
}

BOOL func_40() // Position - 0x22B5 Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_41(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x22C3 Hash - 0x3167F4C7 ^0xCE6B9B6A
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

void func_42(int iParam0) // Position - 0x22F6 Hash - 0x1B2EEE72 ^0xEDBC1F9D
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 13);
	else
		MISC::CLEAR_BIT(&Global_8253, 13);

	return;
}

void func_43(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x2319 Hash - 0x7B97391D ^0x9AF8EB5F
{
	BOOL flag;
	float dx;
	float unk;

	flag = false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		dx = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - uParam0 };
		headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
	
		if (func_44(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), headingFromVector2d, 15f))
			flag = true;
	
		dx = { uParam0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
	
		if (func_44(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), headingFromVector2d, 15f))
			flag = true;
	}

	if (flag)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 30f)
			*uParam3 = 6f * 4f;
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 20f)
			*uParam3 = 6f * 3f;
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
			*uParam3 = 6f * 2f;
		else
			*uParam3 = 6f;
	
		*uParam4 = (*uParam3 / 1.33f) - 1f;
	}
	else
	{
		*uParam3 = 6f;
		*uParam4 = (*uParam3 / 1.33f) - 1f;
	}

	return;
}

BOOL func_44(Vehicle veParam0, float fParam1, float fParam2) // Position - 0x241A Hash - 0x910E6355 ^0xC68C334A
{
	float entityHeading;
	float num;
	float num2;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		entityHeading = ENTITY::GET_ENTITY_HEADING(veParam0);
		num2 = fParam1 - fParam2;
	
		if (num2 < 0f)
			num2 = num2 + 360f;
	
		num = fParam1 + fParam2;
	
		if (num >= 360f)
			num = num - 360f;
	
		if (num > num2)
			if (entityHeading < num && entityHeading > num2)
				return true;
		else if (entityHeading < num || entityHeading > num2)
			return true;
	}

	return false;
}

BOOL func_45(float fParam0, float fParam1, float fParam2) // Position - 0x24A1 Hash - 0x142F7A4A ^0x142F7A4A
{
	float num;
	float num2;

	num2 = fParam1 - fParam2;

	if (num2 < 0f)
		num2 = num2 + 360f;

	num = fParam1 + fParam2;

	if (num >= 360f)
		num = num - 360f;

	if (num > num2)
		if (fParam0 < num && fParam0 > num2)
			return true;
	else if (fParam0 < num || fParam0 > num2)
		return true;

	return false;
}

BOOL func_46(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2516 Hash - 0xF0D380FF ^0x29DD7336
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

BOOL func_47(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x25FB Hash - 0x384540C1 ^0x384540C1
{
	func_61(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_48(sParam2, iParam3, false);
}

BOOL func_48(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x2649 Hash - 0x77297D51 ^0x40DC584A
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
					func_60();
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
	
		if (func_59(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_58();
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
				func_57();
			
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
			
				if (func_56())
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
		
			if (func_26())
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
		
			func_55();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_54();
		func_49();
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
		func_60();
	}

	return 0;
}

void func_49() // Position - 0x2917 Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_50())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_50() // Position - 0x294E Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (PLAYER::PLAYER_ID() == func_53())
		return false;

	if (func_51(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_51(Player plParam0) // Position - 0x29B1 Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_52(plParam0, 20);
}

BOOL func_52(Player plParam0, int iParam1) // Position - 0x29C1 Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

Player func_53() // Position - 0x29D9 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_54() // Position - 0x29E2 Hash - 0xDB58E314 ^0x9CD71162
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

void func_55() // Position - 0x2A14 Hash - 0xCD8A4D28 ^0xCD8A4D28
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

BOOL func_56() // Position - 0x2AA9 Hash - 0x9A999369 ^0x4033F7BF
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

void func_57() // Position - 0x2B42 Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_12(14))
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
		Global_20383 = func_10();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

void func_58() // Position - 0x2BE4 Hash - 0xBE88A374 ^0xF3CC4604
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

BOOL func_59(int iParam0, int iParam1) // Position - 0x2C3C Hash - 0xA14C4D3F ^0xA6034F77
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

void func_60() // Position - 0x2C74 Hash - 0xE32CF1EF ^0xB9A7BEB2
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

void func_61(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2CCB Hash - 0xC6B752B2 ^0xC6B752B2
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

BOOL func_62() // Position - 0x2D21 Hash - 0xC07956FD ^0x1121EB1D
{
	if (PED::IS_PED_INJURED(pedLocal_76))
		return true;
	else if (func_168(veLocal_77))
		if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_76, veLocal_77, 10f, 10f, 10f, false, true, 0))
			return true;

	return false;
}

void func_63() // Position - 0x2D65 Hash - 0x48506058 ^0x33477BA5
{
	float vehicleEngineHealth;
	BOOL flag;
	BOOL flag2;

	if (func_168(veLocal_77))
	{
		vehicleEngineHealth = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(veLocal_77);
	
		if (vehicleEngineHealth > 0f && vehicleEngineHealth < 650f)
		{
			flag2 = true;
		}
		else if (vehicleEngineHealth > 650f && vehicleEngineHealth < 950f)
		{
		}
		else
		{
			flag = true;
		}
	
		if (flag && VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(veLocal_77))
			sLocal_121 = sLocal_293;
		else if (flag2)
			sLocal_121 = sLocal_292;
		else
			sLocal_121 = sLocal_291;
	}

	return;
}

void func_64(var uParam0) // Position - 0x2DE0 Hash - 0xEE73B491 ^0x5CAB0245
{
	*uParam0 = -99;
	return;
}

Blip func_65(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x2DEE Hash - 0xDAE0482B ^0xDAE0482B
{
	iParam2 = iParam2;
	return func_66(pedParam0, bParam1, 145);
}

Blip func_66(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x2E04 Hash - 0xA714218A ^0xAD0F82BD
{
	Blip blip;

	blip = func_67(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2028[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_67(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2E4E Hash - 0x2E5A72B ^0x64F26CC0
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

var func_68(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2EF2 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_69(Blip* pblParam0) // Position - 0x2F09 Hash - 0x448A57D ^0x38679B08
{
	BOOL flag;
	var unk;

	if (HUD::DOES_BLIP_EXIST(*pblParam0))
	{
		HUD::REMOVE_BLIP(pblParam0);
		flag = true;
	}

	if (HUD::DOES_BLIP_EXIST(pblParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(pblParam0->f_1));
		flag = true;
	}

	if (ENTITY::DOES_ENTITY_EXIST(pblParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pblParam0->f_7, false))
			if (HUD::DOES_PED_HAVE_AI_BLIP(pblParam0->f_7))
				HUD::SET_PED_HAS_AI_BLIP(pblParam0->f_7, false);
	
		flag = true;
	}

	if (flag)
		*pblParam0 = { unk };

	return;
}

int func_70(Ped pedParam0, var uParam1, int iParam2, Player plParam3, BOOL bParam4, BOOL bParam5, int iParam6, const char* sParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12) // Position - 0x2F7B Hash - 0x1E0371E4 ^0x2179AF37
{
	BOOL flag;

	if (plParam3 == 0)
		plParam3 = PLAYER::GET_PLAYER_INDEX();

	if (iParam6 < 0f)
		iParam6 = 100f;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(pedParam0))
		{
			flag = true;
		
			if (PED::IS_PED_IN_FLYING_VEHICLE(pedParam0) && bParam11)
				flag = false;
		
			if (flag)
			{
				if (iParam8 == -1)
					HUD::SET_PED_HAS_AI_BLIP(pedParam0, true);
				else
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(pedParam0, true, iParam8);
			
				uParam1->f_7 = pedParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(pedParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(pedParam0, iParam6);
			
				if (HUD::DOES_BLIP_EXIST(*uParam1))
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
	
		if (!iParam9 == -1)
			HUD::SET_PED_AI_BLIP_SPRITE(pedParam0, iParam9);
	
		HUD::SET_PED_AI_BLIP_FORCED_ON(pedParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(pedParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(pedParam0);
	
		if (!iParam9 == -1 || bParam12)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
				
					if (bParam10)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
			
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
	
		if (!IS_BIT_SET(uParam1->f_6, 2))
			if (HUD::DOES_BLIP_EXIST(*uParam1))
				MISC::SET_BIT(&(uParam1->f_6), 2);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
		{
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(pedParam0);
		
			if (!IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					
						if (bParam10)
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						else
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
				
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}

	return 0;
}

void func_71(var uParam0, const char* sParam1, BOOL bParam2) // Position - 0x316F Hash - 0xAF87CC41 ^0x2F8CE1AE
{
	const char* str;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (IS_BIT_SET(Global_2793044.f_4690, 26))
			return;

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

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	str = sParam1;

	if (MISC::IS_STRING_NULL(str))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			str = _("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.");
		else
			str = _("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.");

	if (!MISC::IS_STRING_NULL(uParam0->f_3))
		if (func_72(uParam0->f_3))
			HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);

	if (!MISC::IS_STRING_NULL(str))
		if (func_72(str))
			HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);

	return;
}

BOOL func_72(const char* sParam0) // Position - 0x3249 Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_73() // Position - 0x325C Hash - 0x2E5252A9 ^0x8A59A06D
{
	if (!PED::IS_PED_INJURED(pedLocal_76))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_76, BF_CanDoDrivebys, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_76, BF_0x66BB9FCC, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_76, BF_CanLeaveVehicle, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_76, BF_CanUseVehicles, false);
		TASK::TASK_COMBAT_PED(pedLocal_76, PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_76, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(pedLocal_76));
	}
	else
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(pedLocal_76));
	}

	if (func_168(veLocal_77))
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_77, 1);

	return;
}

int func_74() // Position - 0x32C9 Hash - 0x6BBD7CDA ^0xE68BFAD5
{
	if (func_168(veLocal_77))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_77, 40f, 40f, 10f, false, true, 0))
		{
			if (bLocal_81)
			{
				if (!PED::IS_PED_INJURED(pedLocal_76))
				{
					if (!bLocal_298)
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(veLocal_77))
						{
							TASK::TASK_DRIVE_BY(pedLocal_76, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 40f, 100, true, -753768974);
							bLocal_298 = true;
						}
					}
				
					if (MISC::GET_GAME_TIMER() > iLocal_303 + 7000)
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_77, 20f, 20f, 10f, false, true, 0))
							if (func_47(&uLocal_122, sLocal_294, sLocal_289, 4, 0, 0, 0))
								iLocal_303 = MISC::GET_GAME_TIMER();
				
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(veLocal_77);
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(veLocal_77);
					bLocal_81 = false;
				}
			}
		
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_77, PLAYER::PLAYER_PED_ID(), true))
			{
				if (!PED::IS_PED_INJURED(pedLocal_76))
					func_47(&uLocal_122, sLocal_294, sLocal_289, 4, 0, 0, 0);
			
				iLocal_82 = iLocal_82 + 1;
				bLocal_81 = true;
			}
		
			if (iLocal_82 > 10)
				return 1;
		}
		else
		{
			bLocal_298 = false;
			bLocal_81 = false;
		}
	}

	return 0;
}

int func_75() // Position - 0x33D5 Hash - 0xC8D271C3 ^0xE48E5154
{
	if (func_168(veLocal_77))
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_77, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_77, 1, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_77, 4, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_77, 5, false))
			return 1;

	return 0;
}

void func_76() // Position - 0x3420 Hash - 0x5A39DAAD ^0xC35689AB
{
	if (func_168(veLocal_77) && HUD::DOES_BLIP_EXIST(blLocal_64))
		func_77(&uLocal_330, veLocal_77, 0, 0, true, true, true);

	return;
}

void func_77(var uParam0, Vehicle veParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x344A Hash - 0x85234EBF ^0x85234EBF
{
	func_78(uParam0, veParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_78(var uParam0, Vehicle veParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3467 Hash - 0x61CE440A ^0x61CE440A
{
	func_79(uParam0, veParam1, fParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_79(var uParam0, Vehicle veParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3485 Hash - 0x811E56D5 ^0xAB2F569F
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		func_71(uParam0, 0, false);

	uParam0->f_6 = 2;
	func_80(uParam0, veParam1, uParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_80(var uParam0, Vehicle veParam1, var uParam2, var uParam3, var uParam4, const char* sParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x34BD Hash - 0xDAF9A1E8 ^0x9B7C725B
{
	const char* string2;
	BOOL flag;

	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	string2 = sParam5;

	if (MISC::IS_STRING_NULL(string2))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			string2 = _("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.");
		else
			string2 = _("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.");

	if (func_72(string2))
		func_105();

	if (func_104(veParam1) && ENTITY::IS_ENTITY_VISIBLE(veParam1))
	{
		flag = false;
	
		if (ENTITY::IS_ENTITY_A_PED(veParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1), true);
		
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(veParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1));
		
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(veParam1));
		
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
	
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_99(uParam0, bParam7, bParam9, false))
				func_95(uParam0, veParam1, uParam2, iParam6);
		
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_85(string2))
				{
					if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
						{
							if (!func_72(string2))
							{
								func_84(string2, -1);
								uParam0->f_3 = string2;
							
								if (MISC::ARE_STRINGS_EQUAL(_("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target."), string2))
									func_83(true);
							}
						}
					}
				}
			}
			else if (func_85(string2))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(veParam1) && flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
					{
						if (!func_72(string2))
						{
							func_84(string2, -1);
							uParam0->f_3 = string2;
						
							if (MISC::ARE_STRINGS_EQUAL(_("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target."), string2))
								func_83(true);
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
				if (func_72(sParam5))
					HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
						func_71(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
						func_71(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
						func_71(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
						func_71(uParam0, string2, true);
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
						func_71(uParam0, string2, true);
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
					func_71(uParam0, string2, true);
		
			if (!func_99(uParam0, bParam7, bParam9, false))
				if (!*uParam0 && !uParam0->f_1 && !func_82(uParam0))
					func_81(uParam0);
		}
	}
	else
	{
		func_71(uParam0, string2, false);
	}

	return;
}

void func_81(var uParam0) // Position - 0x382A Hash - 0x4809780E ^0x49596B3F
{
	if (func_104(PLAYER::PLAYER_PED_ID()))
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());

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
	return;
}

BOOL func_82(var uParam0) // Position - 0x3893 Hash - 0x98F74CA5 ^0xEF4CACA5
{
	int num;

	if (uParam0->f_2 > 0)
	{
		num = uParam0->f_10 / 2;
	
		if (uParam0->f_2 + num > MISC::GET_GAME_TIMER())
			return true;
	}

	return false;
}

int func_83(BOOL bParam0) // Position - 0x38BE Hash - 0xEA423090 ^0xE108A001
{
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (bParam0)
				Global_113648.f_10051.f_100 = Global_113648.f_10051.f_100 + 1;
		
			return Global_113648.f_10051.f_100;
	
		case 4:
			if (bParam0)
				Global_113648.f_10051.f_101 = Global_113648.f_10051.f_101 + 1;
		
			return Global_113648.f_10051.f_101;
	
		case 5:
		case 15:
			if (bParam0)
				Global_113648.f_10051.f_102 = Global_113648.f_10051.f_102 + 1;
		
			return Global_113648.f_10051.f_102;
	
		default:
			break;
	}

	return 3;
}

void func_84(const char* sParam0, int iParam1) // Position - 0x3968 Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_85(const char* sParam0) // Position - 0x397F Hash - 0x4F114C67 ^0xD267F793
{
	if (!func_86(true, true, false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_72(sParam0) || func_72(_("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.")))
			HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
	
		return false;
	}

	switch (Global_43257)
	{
		case 0:
		case 3:
			if (func_83(false) < 3)
				return true;
			break;
	
		case 4:
			if (func_83(false) < 1)
				return true;
			break;
	
		case 5:
		case 15:
			if (func_83(false) < 1)
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_86(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3A18 Hash - 0x3D231FF2 ^0x1CCF6728
{
	Vehicle vehiclePedIsIn;
	int seatIndex;

	if (bParam0)
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			return false;

	if (bParam2)
		return true;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return false;

	if (func_29(0))
		return false;

	if (func_94())
		return false;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return false;

	if (Global_75693)
		return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1779901043) > 0)
		return false;

	if (Global_60543)
		return false;

	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
					return false;
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
				return false;
		
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
				return false;
		}
	}

	if (func_93() || func_92(*Global_4718592.f_166301) || func_91())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			seatIndex = func_90(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_TURRET_SEAT(vehiclePedIsIn, seatIndex) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == 562680400 && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == 1181327175 && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == -1693015116 && seatIndex == 0 && func_89(vehiclePedIsIn, 10) && VEHICLE::GET_VEHICLE_MOD(vehiclePedIsIn, 10) != -1)
				return false;
		}
	}

	if (Global_1962010)
		return false;

	if (func_87(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_87(Player plParam0) // Position - 0x3C71 Hash - 0xA439E034 ^0x18C6D29E
{
	if (plParam0 != func_53())
		if (func_88(plParam0, true, true))
			return Global_2657589[plParam0 /*466*/].f_321.f_7 != -1;
		else if (Global_1575060 && plParam0 == PLAYER::PLAYER_ID() && func_88(plParam0, true, false))
			return Global_2657589[plParam0 /*466*/].f_321.f_7 != -1;

	return false;
}

BOOL func_88(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3CD7 Hash - 0x3FF6E4CA ^0xE6B59972
{
	Player player;

	player = plParam0;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		{
			if (bParam1)
				if (!PLAYER::IS_PLAYER_PLAYING(plParam0))
					return false;
		
			if (bParam2)
				if (player == Global_2672505.f_3)
					return Global_2672505.f_2;
				else if (Global_2657589[player /*466*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_89(Vehicle veParam0, int iParam1) // Position - 0x3D37 Hash - 0xCE6C32C8 ^0x91687715
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return true;
			
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) > 0)
						return true;
					break;
			}
		}
	}

	return false;
}

int func_90(Ped pedParam0, BOOL bParam1) // Position - 0x3D99 Hash - 0x4E1330D6 ^0x886EF094
{
	Vehicle vehiclePedIsIn;
	int vehicleModelNumberOfSeats;
	int i;
	int seatIndex;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, bParam1))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, bParam1);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
			
				if (vehicleModelNumberOfSeats == 1)
				{
					seatIndex = -1;
					return seatIndex;
				}
			
				for (i = 0; i < vehicleModelNumberOfSeats; i = i + 1)
				{
					seatIndex = i - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false) == pedParam0)
							return seatIndex;
				}
			}
		}
	}

	return seatIndex;
}

BOOL func_91() // Position - 0x3E1E Hash - 0x4228A1C2 ^0xF0823820
{
	return Global_2683862.f_19;
}

BOOL func_92(int iParam0) // Position - 0x3E2C Hash - 0x6B8F9071 ^0x6B8F9071
{
	return iParam0 == 51;
}

BOOL func_93() // Position - 0x3E39 Hash - 0x4228A1C2 ^0x58D4D226
{
	return Global_2683862.f_18;
}

BOOL func_94() // Position - 0x3E47 Hash - 0x44A439DC ^0x3D5209CD
{
	return MISC::GET_GAME_TIMER() <= Global_23270.f_6321 + 100;
}

void func_95(var uParam0, Vehicle veParam1, Vector3 vParam2, var uParam3, var uParam4, int iParam5) // Position - 0x3E5C Hash - 0x9F7B2F79 ^0x8B74986F
{
	Ped pedIndexFromEntityIndex;
	int easeInTime;
	int easeOutTime;
	eScriptLookAtFlags flags;
	int num;

	if (Global_1581968 == 1)
		return;

	if (ENTITY::IS_ENTITY_DEAD(veParam1, false))
		func_71(uParam0, 0, false);

	if (func_98(vParam2, 0f, 0f, 0f, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(veParam1))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1);
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(pedIndexFromEntityIndex, false))
				if (PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex))
					if (!func_96())
						vParam2 = { 0f, 0f, 1f };
				else if (PED::IS_PED_MALE(pedIndexFromEntityIndex))
					vParam2 = { 0f, 0f, 1f };
		}
	}

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	easeInTime = uParam0->f_9;
	easeOutTime = uParam0->f_10;

	if (iParam5 == 1726668277)
	{
		if (easeInTime < 1500)
			easeInTime = 1500;
	
		if (easeOutTime < 1500)
			easeOutTime = 1500;
	}

	CAM::SET_GAMEPLAY_ENTITY_HINT(veParam1, vParam2, true, -1, easeInTime, easeOutTime, iParam5);
	flags = SLF_WHILE_NOT_IN_FOV;
	num = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veParam1, -1, flags, num);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
	return;
}

BOOL func_96() // Position - 0x3F6C Hash - 0x5976C0FC ^0xC3C6644E
{
	return func_97(PLAYER::PLAYER_ID());
}

BOOL func_97(Player plParam0) // Position - 0x3F7C Hash - 0x2281DC14 ^0xFBEE7D11
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == -1667301416)
		return 1;

	return 0;
}

BOOL func_98(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x3F9B Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_99(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3FE2 Hash - 0x17D4AD0E ^0xDA1B4F91
{
	if (uParam0->f_1)
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
		
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_103(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_102(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_102(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_103(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
		
			if (func_82(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
	
		case 1:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_103(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_102(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_102(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_103(bParam1, bParam2, bParam3))
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
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					if (!func_103(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (!func_102(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 1)
				if (!func_102(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 2)
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					uParam0->f_5 = 0;
				else if (!func_103(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 > 500)
				if (uParam0->f_6 == 0)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						if (func_101(bParam1, bParam2, bParam3))
							uParam0->f_5 = 0;
					else if (func_100(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 1)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_100(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 2)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
						uParam0->f_5 = 0;
					else if (func_101(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
			break;
	
		case 4:
			if (!func_82(uParam0))
				uParam0->f_5 = 0;
			break;
	}

	if (!func_86(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}

	if (uParam0->f_7)
	{
		func_105();
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_100(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x434F Hash - 0xF87F500F ^0xE2038DA5
{
	if (!func_86(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM))
				return true;
		}
	}

	return false;
}

BOOL func_101(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x43A1 Hash - 0x3FCF0638 ^0x1EFD5267
{
	if (!func_86(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_102(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x43EA Hash - 0xF87F500F ^0xE2038DA5
{
	if (!func_86(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_116)
				return true;
		}
	}

	return false;
}

BOOL func_103(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4449 Hash - 0xF22F9C98 ^0xCA2E1CBD
{
	if (!func_86(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_104(Vehicle veParam0) // Position - 0x449F Hash - 0xF847883B ^0xE7694E14
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam0), false))
				return true;
		else if (ENTITY::IS_ENTITY_A_PED(veParam0))
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0)))
				return true;
		else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam0))
			return true;

	return false;
}

void func_105() // Position - 0x44FA Hash - 0x4941A993 ^0x296D04CD
{
	MISC::SET_BIT(&Global_8254, 4);
	return;
}

Blip func_106(Vehicle veParam0, BOOL bParam1, int iParam2) // Position - 0x450A Hash - 0x6E07861D ^0x6E07861D
{
	iParam2 = iParam2;
	return func_107(veParam0, bParam1, false);
}

Blip func_107(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x451F Hash - 0x177BFEFF ^0x177BFEFF
{
	return func_67(veParam0, !bParam1, bParam2);
}

BOOL func_108() // Position - 0x4532 Hash - 0xA8493EF1 ^0x27FAF800
{
	float xSize;

	xSize = 300f;

	if (iLocal_301 == 1)
		xSize = 220f;

	if (func_168(veLocal_77))
	{
		func_109(blLocal_64, veLocal_77, xSize, 1061158912, false);
	
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_77, xSize, xSize, 100f, false, true, 0))
			return true;
		else if (!ENTITY::IS_ENTITY_OCCLUDED(veLocal_77))
			return true;
	}

	return false;
}

void func_109(Blip blParam0, Vehicle veParam1, float fParam2, int iParam3, BOOL bParam4) // Position - 0x4597 Hash - 0xBE866CF5 ^0x5FE08F9C
{
	int num;
	float distanceBetweenCoords;
	float num2;

	num2 = fParam2 * iParam3;

	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(veParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1), false))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veParam1, true), true);
				
					if (distanceBetweenCoords >= num2 || bParam4)
					{
						num = SYSTEM::ROUND(255f * ((distanceBetweenCoords - num2) / (fParam2 - num2)));
					
						if (num <= 0)
							num = 0;
					
						if (num >= 255)
							num = 255;
					
						HUD::SET_BLIP_FLASHES(blParam0, true);
						HUD::SET_BLIP_ALPHA(blParam0, 255 - num);
					}
					else
					{
						HUD::SET_BLIP_FLASHES(blParam0, false);
						HUD::SET_BLIP_ALPHA(blParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(veParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1)))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veParam1, true), true);
				
					if (distanceBetweenCoords >= num2 || bParam4)
					{
						num = SYSTEM::ROUND((255f * (distanceBetweenCoords - num2)) / (fParam2 - num2));
					
						if (num <= 0)
							num = 0;
					
						if (num >= 255)
							num = 255;
					
						HUD::SET_BLIP_FLASHES(blParam0, true);
						HUD::SET_BLIP_ALPHA(blParam0, 255 - num);
					}
					else
					{
						HUD::SET_BLIP_FLASHES(blParam0, false);
						HUD::SET_BLIP_ALPHA(blParam0, 255);
					}
				}
			}
		}
	}

	return;
}

BOOL func_110() // Position - 0x46F0 Hash - 0xBB0645CB ^0xCF99D2D5
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_77, false) && VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(veLocal_77))
		return true;

	return false;
}

void func_111() // Position - 0x4716 Hash - 0x1D04F9BB ^0xDB30E71D
{
	if (!PED::IS_PED_INJURED(pedLocal_75) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_50)
		{
			case 0:
				iLocal_58 = iLocal_58;
			
				if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_75, false))
				{
					if (iLocal_301 == 1)
					{
						if (func_118())
							iLocal_50 = 1;
					}
					else if (!PED::IS_PED_RAGDOLL(pedLocal_75) && !TASK::IS_PED_GETTING_UP(pedLocal_75))
					{
						TASK::TASK_LOOK_AT_ENTITY(pedLocal_75, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.5486f, 18.99127f, 26.75f, false, true, 0))
						{
							TASK::TASK_ACHIEVE_HEADING(pedLocal_75, 345f, 0);
							iLocal_50 = 1;
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
							TASK::TASK_PLAY_ANIM(0, sLocal_84, "arms_waving", 2f, -8f, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(0, sLocal_84, "arms_waving", 8f, -8f, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(0, sLocal_84, "arms_waving", 8f, -2f, -1, 0, 0, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_75, iLocal_78);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
							iLocal_304 = MISC::GET_GAME_TIMER();
							iLocal_50 = 2;
						}
					}
				}
				break;
		
			case 1:
				if (iLocal_301 == 1)
				{
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_75, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				
					if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_75, SCRIPT_TASK_PERFORM_SEQUENCE) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
						TASK::TASK_PLAY_ANIM(0, sLocal_84, sLocal_86, 4f, -2f, -1, 0, 0, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_75, iLocal_78);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
						iLocal_50 = 2;
					}
				}
				else if (PED::IS_PED_FACING_PED(pedLocal_75, PLAYER::PLAYER_PED_ID(), 60f))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_75, SCRIPT_TASK_PERFORM_SEQUENCE) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
						TASK::TASK_PLAY_ANIM(0, sLocal_84, "arms_waving", 2f, -8f, -1, 0, 0, false, false, false);
					
						if (bLocal_61 == false)
							TASK::TASK_PLAY_ANIM(0, sLocal_84, "pointing", 8f, -4f, -1, 0, 0, false, false, false);
					
						TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_75, iLocal_78);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
						iLocal_50 = 2;
					}
				}
			
				if (func_118())
					func_117();
				break;
		
			case 2:
				if (func_118())
					func_117();
			
				if (iLocal_301 == 2)
				{
					if (!PED::IS_PED_FACING_PED(pedLocal_75, PLAYER::PLAYER_PED_ID(), 60f) && !func_115(pedLocal_75, SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY))
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_75, PLAYER::PLAYER_PED_ID(), 0);
				
					if (func_114(pedLocal_75, PLAYER::PLAYER_PED_ID(), true) < 25f)
						if (!func_19())
							if (MISC::GET_GAME_TIMER() - iLocal_304 > 6000)
								func_113();
				}
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_75, SCRIPT_TASK_PERFORM_SEQUENCE) != 1 && !func_115(pedLocal_75, SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY))
				{
					if (iLocal_301 == 1)
					{
						uLocal_93 = { -2260.1f, 4274.24f, 44.9f };
					
						if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_75, uLocal_93, 1.5f, 1.5f, 1.5f, false, true, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_75, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, uLocal_93, 1f, 20000, fLocal_106, 1056964608);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_75, iLocal_78);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_75, sLocal_83, "waiting", 3))
						{
							TASK::TASK_PLAY_ANIM(pedLocal_75, sLocal_83, "waiting", 4f, -4f, -1, 0, 0, false, false, false);
						
							if (func_114(pedLocal_75, PLAYER::PLAYER_PED_ID(), true) < 25f)
								func_113();
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_75, sLocal_83, "waiting", 3))
					{
						TASK::TASK_PLAY_ANIM(pedLocal_75, sLocal_83, "waiting", 4f, -4f, -1, 0, 0, false, false, false);
					}
				}
				break;
		
			case 3:
				if (!PED::IS_PED_HEADTRACKING_PED(pedLocal_75, PLAYER::PLAYER_PED_ID()))
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_75, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_75, 40f, 40f, 10f, false, true, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_75, 9f, 9f, 9f, false, true, 0))
				{
					if (func_112())
					{
						if (bLocal_59)
						{
							if (iLocal_301 == 1)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_PLAY_ANIM(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_75, iLocal_78);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
								bLocal_59 = false;
								iLocal_304 = MISC::GET_GAME_TIMER();
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_PLAY_ANIM(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_75, iLocal_78);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
								bLocal_59 = false;
								iLocal_304 = MISC::GET_GAME_TIMER();
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_75, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_75, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
							{
								if (!PED::IS_PED_FACING_PED(pedLocal_75, PLAYER::PLAYER_PED_ID(), 45f))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_75, iLocal_78);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
								}
								else if (MISC::GET_GAME_TIMER() - iLocal_304 > 6000)
								{
									bLocal_59 = true;
								}
							}
						}
						else if (!PED::IS_PED_FACING_PED(pedLocal_75, PLAYER::PLAYER_PED_ID(), 70f))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_75);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_78);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_78);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_75, iLocal_78);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_78);
							iLocal_304 = iLocal_304 + 4000;
						}
					}
				
					if (!PED::IS_PED_INJURED(pedLocal_76))
					{
						TASK::TASK_SMART_FLEE_PED(pedLocal_76, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_76, true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_76);
					}
				}
				else
				{
					if (iLocal_301 == 1)
						uLocal_93 = { -2260.1f, 4274.24f, 44.9f };
					else if (bLocal_61)
						uLocal_93 = { -483.4162f, -2160.8735f, 8.359f };
					else
						uLocal_93 = { -485.9905f, -2153.542f, 8.1999f };
				
					if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_75, uLocal_93, 4f, 4f, 4f, false, true, 0))
						if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_75, SCRIPT_TASK_GO_STRAIGHT_TO_COORD) == 7)
							TASK::TASK_GO_STRAIGHT_TO_COORD(pedLocal_75, uLocal_93, 1f, 20000, fLocal_106, 1056964608);
					else if (!PED::IS_PED_FACING_PED(pedLocal_75, PLAYER::PLAYER_PED_ID(), 50f))
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_75, PLAYER::PLAYER_PED_ID(), -1);
				
					bLocal_59 = true;
				}
				break;
		
			case 4:
				break;
		}
	}

	if (func_167(1))
	{
		if (!PED::IS_PED_INJURED(pedLocal_75))
		{
			TASK::TASK_SMART_FLEE_PED(pedLocal_75, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			PED::SET_PED_KEEP_TASK(pedLocal_75, true);
			SYSTEM::WAIT(0);
		}
	
		func_237();
	}

	return;
}

BOOL func_112() // Position - 0x4D82 Hash - 0x110E0697 ^0x110E0697
{
	if (!bLocal_296)
		if (func_47(&uLocal_122, sLocal_294, sLocal_290, 4, 0, 0, 0))
			bLocal_296 = true;

	return bLocal_296;
}

BOOL func_113() // Position - 0x4DAB Hash - 0x110E0697 ^0x110E0697
{
	if (!bLocal_297)
		if (func_47(&uLocal_122, sLocal_294, sLocal_288, 4, 0, 0, 0))
			bLocal_297 = true;

	return bLocal_297;
}

float func_114(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x4DD4 Hash - 0x7B2C17A2 ^0xDF922C6D
{
	Vector3 entityCoords;
	Vector3 unk;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1, false))
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, true) };
	else
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}

BOOL func_115(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x4E32 Hash - 0x5CB13EA9 ^0x50B73240
{
	if (func_116(pedParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
			return true;

	return false;
}

BOOL func_116(Ped pedParam0) // Position - 0x4E65 Hash - 0x7E48B415 ^0x126328AB
{
	if (func_3(pedParam0))
		if (!PED::IS_PED_INJURED(pedParam0))
			return true;

	return false;
}

BOOL func_117() // Position - 0x4E85 Hash - 0x7868B7EF ^0xB19F19D9
{
	if (!bLocal_295)
		if (SYSTEM::TIMERA() > 2000)
			if (func_47(&uLocal_122, sLocal_294, sLocal_287, 4, 0, 0, 0))
				bLocal_295 = true;

	return bLocal_295;
}

BOOL func_118() // Position - 0x4EB8 Hash - 0xD8730DDF ^0x694C7948
{
	if (!PED::IS_PED_INJURED(pedLocal_76) && !PED::IS_PED_INJURED(pedLocal_75))
		if (func_168(veLocal_77))
			if (PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_76, veLocal_77))
				return true;
	else
		return true;

	return false;
}

void func_119(var uParam0, int iParam1) // Position - 0x4EF6 Hash - 0xD18CB130 ^0xA0F4C6FD
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

void func_120(BOOL bParam0) // Position - 0x4F13 Hash - 0x86360B99 ^0x562BCDC7
{
	int num;

	if (iLocal_301 == 2)
	{
		num = func_10();
	
		switch (num)
		{
			case 0:
				while (!func_143(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(pedLocal_75))
						PED::SET_PED_RESET_FLAG(pedLocal_75, 310, true);
				
					SYSTEM::WAIT(0);
				}
				break;
		
			case 1:
				while (!func_143(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(pedLocal_75))
						PED::SET_PED_RESET_FLAG(pedLocal_75, 310, true);
				
					SYSTEM::WAIT(0);
				}
				break;
		
			case 2:
				while (!func_143(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (func_3(pedLocal_75))
						PED::SET_PED_RESET_FLAG(pedLocal_75, 310, true);
				
					SYSTEM::WAIT(0);
				}
				break;
		}
	}

	if (bParam0)
		func_142(8);

	func_124(17, iLocal_301);
	func_121();
	func_237();
	return;
}

void func_121() // Position - 0x500E Hash - 0xD765C186 ^0xD765C186
{
	func_122();
	return;
}

int func_122() // Position - 0x501B Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_123(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL func_123(BOOL bParam0) // Position - 0x5066 Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_124(int iParam0, int iParam1) // Position - 0x508E Hash - 0x207C13D1 ^0xB789CC4C
{
	if (iParam0 == -1)
		iParam0 = func_140();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_139(iParam0))
	{
		func_138(iParam0, iParam1);
	
		if (!func_137(51))
		{
			func_133(_("Some Random Events will reward the player with stat boosts or money."), 1, 0, 4000, 10000, func_136(), 0, 138, 0);
			func_132(51);
		}
	
		if (func_131(iParam0))
			Global_113648.f_24997.f_2 = 3;
	
		if (func_130(iParam0, iParam1) != 322)
			func_125(func_130(iParam0, iParam1), uLocal_45, uLocal_45.f_1);
	
		Global_113636 = iParam1;
	
		if (Global_113634 == 0)
			if (Global_113637 == 1 || Global_113637 == 5 || Global_113637 == 11 || Global_113637 == 25)
				func_142(2);
			else if (Global_113637 == 26 || Global_113637 == 8 || Global_113637 == 17)
				func_142(7);
			else
				func_142(1);
	}

	return;
}

void func_125(int iParam0, var uParam1, var uParam2) // Position - 0x5192 Hash - 0xEC2439E7 ^0x1B67A713
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_129(891 + iParam0, 1, -1);
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
		func_126();

	return;
}

void func_126() // Position - 0x5278 Hash - 0x9F269E94 ^0x9F269E94
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
		func_128(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78558)
		{
			if (func_127() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113382 = 0;
			
				if (!Global_63362)
					func_122();
			}
		}
	}

	return;
}

int func_127() // Position - 0x5736 Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

BOOL func_128(int iParam0, int iParam1) // Position - 0x5741 Hash - 0x77E0C72A ^0x80DA2A54
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

void func_129(int iParam0, int iParam1, int iParam2) // Position - 0x5792 Hash - 0xCF91FBA1 ^0xC4FE4CB6
{
	if (iParam2 == -1)
		iParam2 = func_8();

	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
	return;
}

int func_130(int iParam0, int iParam1) // Position - 0x57B0 Hash - 0xE97012CD ^0x68FBF85A
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

BOOL func_131(int iParam0) // Position - 0x5B24 Hash - 0xBF3EFB31 ^0xBF3EFB31
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

void func_132(int iParam0) // Position - 0x5B53 Hash - 0x12249850 ^0x46987D7A
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

void func_133(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x5B95 Hash - 0x2B872DAE ^0x63FE6CA
{
	func_134(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_134(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x5BB7 Hash - 0x7C3327C8 ^0x126CE460
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
		func_135();
	}

	return;
}

void func_135() // Position - 0x5D8B Hash - 0xCF8881D1 ^0x40507183
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

int func_136() // Position - 0x5EA2 Hash - 0x35BC7314 ^0x35BC7314
{
	func_11();

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

BOOL func_137(int iParam0) // Position - 0x5EE8 Hash - 0x3F44A899 ^0x7041C53
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

void func_138(int iParam0, int iParam1) // Position - 0x5F28 Hash - 0xE2246457 ^0xD5018049
{
	MISC::SET_BIT(&Global_113648.f_24997.f_8[iParam0], iParam1);
	return;
}

int func_139(int iParam0) // Position - 0x5F43 Hash - 0xAA02DAD0 ^0xAA02DAD0
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

int func_140() // Position - 0x5FF4 Hash - 0x7AC1007E ^0x4E7D4F54
{
	var unk;
	int unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_141(unk);
	return num;
}

int func_141(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x6011 Hash - 0x6DA57317 ^0x57A32A43
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

void func_142(int iParam0) // Position - 0x61EB Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113634 = iParam0;
	return;
}

BOOL func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x61F9 Hash - 0xCD7D90D3 ^0xCD7D90D3
{
	int num;
	var unk;
	int unk2;
	int unk3;

	if (func_123(false))
		return false;

	if (iParam4 < 0)
		return false;

	if (iParam5 < 0)
		return false;

	if (iParam6 == 76)
		return false;

	if (iParam7 == 235)
		return false;

	if (iParam3 < 3)
		if (IS_BIT_SET(iParam2, iParam3))
			return false;

	if (iParam2 < 1 || iParam2 > 7)
		return false;

	if (Global_113648.f_7690.f_866 < 10)
	{
		num = iParam0;
		num.f_3 = func_151(iParam1);
		num.f_4 = MISC::GET_GAME_TIMER() + iParam4;
		num.f_5 = iParam5;
		num.f_1 = iParam9;
		num.f_2 = iParam2;
		num.f_6 = iParam3;
		num.f_7 = iParam6;
		num.f_8 = iParam7;
		num.f_9 = iParam8;
		MISC::CLEAR_BIT(&(num.f_1), 0);
		Global_113648.f_7690.f_765[Global_113648.f_7690.f_866 /*10*/] = { num };
		Global_113648.f_7690.f_866 = Global_113648.f_7690.f_866 + 1;
		return true;
	}
	else
	{
		unk10 = { func_150(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		num2 = 0;
		func_149(&num2);
		num3 = func_148(unk10, Global_113648.f_7690.f_765[num2 /*10*/]);
	
		if (num3 == 2)
		{
			func_146(Global_113648.f_7690.f_765[num2 /*10*/]);
			Global_113648.f_7690.f_765[num2 /*10*/] = { unk10 };
			func_145(&unk10);
			return true;
		}
		else if (num3 == 1)
		{
			if (func_144(unk10))
			{
				func_146(Global_113648.f_7690.f_765[num2 /*10*/]);
				Global_113648.f_7690.f_765[num2 /*10*/] = { unk10 };
				func_145(&unk10);
				return true;
			}
			else
			{
				if (!func_144(Global_113648.f_7690.f_765[num2 /*10*/]))
				{
					Global_113648.f_7690.f_765[num2 /*10*/] = { unk10 };
					func_145(&unk10);
					return true;
				}
			
				func_145(&unk10);
				return true;
			}
		}
		else
		{
			func_146(unk10);
			func_145(&unk10);
			return true;
		}
	}

	return false;
}

BOOL func_144(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Position - 0x6418 Hash - 0x5829CA23 ^0x90D2141D
{
	if (uParam0.f_8 == 0)
		return false;

	return true;
}

void func_145(var uParam0) // Position - 0x6430 Hash - 0x7F9E7548 ^0x7F9E7548
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_146(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Position - 0x6442 Hash - 0xA7FCC8CC ^0xD13FD65B
{
	if (func_144(uParam0))
		func_147(uParam0.f_8, 0);

	return;
}

void func_147(int iParam0, int iParam1) // Position - 0x645F Hash - 0xEFDF2B54 ^0x1CE7BA3B
{
	if (iParam0 == 235 || iParam0 == 0)
		return;

	Global_113648.f_8615[iParam0] = 1;
	Global_113648.f_8615.f_236[iParam0] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

int func_148(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19) // Position - 0x649C Hash - 0xC393E93F ^0x75404E91
{
	var unk;
	var unk2;

	unk = uParam0.f_3;
	unk2 = uParam10.f_3;

	if (unk > unk2)
		return 2;

	if (unk < unk2)
		return 0;

	return 1;
}

void func_149(var uParam0) // Position - 0x64CD Hash - 0x2F9672FB ^0x2F9672FB
{
	int i;

	*uParam0 = 0;

	for (i = 0; i < Global_113648.f_7690.f_866; i = i + 1)
	{
		if (func_148(Global_113648.f_7690.f_765[i /*10*/], Global_113648.f_7690.f_765[*uParam0 /*10*/]) == 0)
			*uParam0 = i;
	}

	return;
}

struct<10> func_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x6524 Hash - 0x242D9B5A ^0x9F57922F
{
	int num;

	num = iParam0;
	num.f_3 = func_151(iParam1);
	num.f_4 = MISC::GET_GAME_TIMER() + iParam4;
	num.f_5 = iParam5;
	num.f_1 = iParam9;
	num.f_2 = iParam2;
	num.f_6 = iParam3;
	num.f_7 = iParam6;
	num.f_8 = iParam7;
	num.f_9 = iParam8;
	MISC::CLEAR_BIT(&(num.f_1), 0);
	return num;
}

int func_151(int iParam0) // Position - 0x657D Hash - 0x17C68833 ^0x17C68833
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

void func_152(int iParam0, BOOL bParam1) // Position - 0x65E7 Hash - 0x64B1D886 ^0x64B1D886
{
	if (bParam1)
		if (!func_156(iParam0, 2, true))
			func_155(iParam0, 2, true);
	else if (func_156(iParam0, 2, true))
		func_153(iParam0, 2, true);

	return;
}

void func_153(int iParam0, int iParam1, BOOL bParam2) // Position - 0x661E Hash - 0x1F4148DA ^0xB2D02435
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
		if (func_127() == 0)
		{
			address = func_9(func_154(iParam0), -1, 0);
			MISC::CLEAR_BIT(&address, iParam1);
			func_6(func_154(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

int func_154(int iParam0) // Position - 0x6690 Hash - 0x28E83966 ^0x9E37924F
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

void func_155(int iParam0, int iParam1, BOOL bParam2) // Position - 0x6A29 Hash - 0x1F4148DA ^0x95628DB
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
		if (func_127() == 0)
		{
			address = func_9(func_154(iParam0), -1, 0);
			MISC::SET_BIT(&address, iParam1);
			func_6(func_154(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_156(int iParam0, int iParam1, BOOL bParam2) // Position - 0x6A9B Hash - 0xA45BEB30 ^0x6033D2A2
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_127() == 0)
			return IS_BIT_SET(func_9(func_154(iParam0), -1, 0), iParam1);
	else
		return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);

	return false;
}

int func_157(BOOL bParam0) // Position - 0x6AFC Hash - 0x3A78A0E1 ^0xFB516C6B
{
	if (func_160())
	{
		Global_113638 = true;
		Global_113635 = MISC::GET_GAME_TIMER();
	
		if (func_131(Global_113637))
			func_158(0);
	
		HUD::SET_MISSION_NAME(true, _("Random Event"));
	
		if (bParam0 && func_131(Global_113637))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_158(int iParam0) // Position - 0x6B4F Hash - 0x3B4E6AAB ^0xDE553B62
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!DECORATOR::DECOR_GET_BOOL())
				{
					func_84(func_159(iParam0), -1);
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
					func_84(func_159(iParam0), -1);
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
					func_84(func_159(iParam0), -1);
					Global_113648.f_24997.f_4 = Global_113648.f_24997.f_4 + 1;
					MISC::SET_BIT(&Global_113644, 2);
				}
			}
			break;
	}

	return;
}

char* func_159(int iParam0) // Position - 0x6C2A Hash - 0x7CF8A08F ^0x7CFB52B5
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

BOOL func_160() // Position - 0x6C6E Hash - 0x8129EEA4 ^0x48B13301
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

int func_161(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x6CA4 Hash - 0x8F9349A ^0xC5C097C1
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

void func_162(var uParam0, int iParam1) // Position - 0x6DDB Hash - 0x6AC97785 ^0x6AC97785
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

BOOL func_163(int iParam0) // Position - 0x6E2A Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_164(iParam0, Global_43257);
}

BOOL func_164(int iParam0, int iParam1) // Position - 0x6E3B Hash - 0x1FD727E0 ^0x1FD727E0
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

BOOL func_165(int iParam0) // Position - 0x701C Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43257 == 15)
		return false;

	if (func_163(iParam0))
		return false;

	return true;
}

BOOL func_166() // Position - 0x703E Hash - 0x6C9A3F7E ^0x78D6F164
{
	float xSize;

	switch (iLocal_301)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2300.3167f, 4179.6123f, 36.981594f, -2191.317f, 4368.794f, 74.89676f, 70.75f, false, true, 0))
				return true;
			break;
	
		case 2:
			if (bLocal_61)
				xSize = 80f;
			else
				xSize = 80f;
		
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -487.5048f, -2157.9895f, 8.2627f, xSize, xSize, 40f, false, true, 0))
				return true;
			break;
	}

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		if (!PED::IS_PED_INJURED(pedLocal_75))
			if (ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_75))
				return true;

	return false;
}

BOOL func_167(int iParam0) // Position - 0x70F4 Hash - 0x954C8014 ^0x5C576D80
{
	BOOL flag;
	Vector3 vector;
	Vector3 unk;

	vector = { 6f, 6f, 6f };
	vector2 = { -6f, -6f, -6f };

	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(pedLocal_75))
		{
			if (iParam0 == 0 || func_114(pedLocal_75, pedLocal_76, true) > 15f)
			{
				if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_75, 31086, 0f, 0f, 0f), 4f, false))
					flag = true;
			
				vector = { vector + PED::GET_PED_BONE_COORDS(pedLocal_75, 31086, 0f, 0f, 0f) };
				vector2 = { vector2 + PED::GET_PED_BONE_COORDS(pedLocal_75, 31086, 0f, 0f, 0f) };
			
				if (MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, -37975472, true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, -1813897027, true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, 741814745, true))
					flag = true;
			}
		
			if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(pedLocal_75, 31086, 0f, 0f, 0f), 6f))
				flag = true;
		
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(pedLocal_75, 31086, 0f, 0f, 0f), 6f))
				flag = true;
		
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_75, PLAYER::PLAYER_PED_ID(), true))
				flag = true;
		}
	}

	flag;
	return flag;
}

BOOL func_168(Vehicle veParam0) // Position - 0x721B Hash - 0x7E47BB06 ^0x2662F952
{
	if (func_3(veParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FILES::GET_DLC_VEHICLE_FLAGS(veParam0))
				return true;

	return false;
}

BOOL func_169() // Position - 0x7245 Hash - 0x2F3F55EE ^0x2F3F55EE
{
	float dx;
	Vector3 unk;
	float unk2;
	Hash vector;
	Hash unk3;
	Hash unk4;
	char* heading;
	char* model;
	char* model2;

	vector = { uLocal_99 };
	heading = fLocal_111;

	switch (iLocal_301)
	{
		case 1:
			uLocal_96 = { -2257.4817f, 4266.638f, 44.5095f };
			fLocal_110 = 293.9091f;
			uLocal_99 = { -2253.7632f, 4273.17f, 44.977f };
			fLocal_111 = 185.5212f;
			model = -85696186;
			model3 = 1830407356;
			model2 = 663522487;
			str = "CThiefVictim";
			name = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_287 = "RECT1_ATTR";
			sLocal_288 = "RECT1_HELP";
			sLocal_289 = "RECT1_FYOU";
			sLocal_290 = "RECT1_JOY";
			sLocal_291 = "RECT1_OK";
			sLocal_292 = "RECT1_BAD";
			sLocal_293 = "RECT1_GOOD";
			sLocal_294 = "RECT1AU";
			sLocal_83 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_85 = "random@car_thief@waving_ig_1";
			uLocal_102 = { -2270.632f, 4287.437f, 44.9008f };
			fLocal_57 = 3f;
		
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_96) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_99))
			{
				vector = { uLocal_96 };
				heading = fLocal_110;
				bLocal_61 = true;
				sLocal_84 = "random@car_thief@waving_ig_2";
				sLocal_86 = "waving_l";
			}
			else
			{
				sLocal_86 = "waving";
				sLocal_84 = "random@car_thief@waving_ig_1";
				vector = { uLocal_99 };
				heading = fLocal_111;
			}
			break;
	
		case 2:
			uLocal_99 = { -538.6718f, -2183.4421f, 5.2336f };
			uLocal_96 = { -365.7f, -2179.2603f, 9.3184f };
			model = 153984193;
			model3 = 2136773105;
			model2 = -1023672578;
			str = "CThiefGolfer";
			name2 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_287 = "RECT2_ATTR";
			sLocal_288 = "RECT2_HELP";
			sLocal_289 = "RECT2_FYOU";
			sLocal_290 = "RECT2_JOY";
			sLocal_291 = "RECT2_OK";
			sLocal_292 = "RECT2_BAD";
			sLocal_293 = "RECT2_GOOD";
			sLocal_294 = "RECT2AU";
			sLocal_83 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_84 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			sLocal_85 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			uLocal_102 = { -505.1966f, -2159.2275f, 7.6466f };
			fLocal_56 = 15f;
			fLocal_57 = 3f;
		
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_96) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_99))
				bLocal_61 = true;
			break;
	}

	STREAMING::REQUEST_MODEL(model);
	STREAMING::REQUEST_MODEL(model2);
	STREAMING::REQUEST_MODEL(model3);
	STREAMING::REQUEST_ANIM_DICT(sLocal_83);
	STREAMING::REQUEST_ANIM_DICT(sLocal_84);
	STREAMING::REQUEST_ANIM_DICT(sLocal_85);
	STREAMING::REQUEST_ANIM_DICT("RANDOM@CAR_THIEF@WAITING_IG_4");
	STREAMING::REQUEST_PTFX_ASSET();

	if (STREAMING::HAS_MODEL_LOADED(model) && STREAMING::HAS_MODEL_LOADED(model2) && STREAMING::HAS_MODEL_LOADED(model3) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_83) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_84) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_85) && STREAMING::HAS_ANIM_DICT_LOADED("RANDOM@CAR_THIEF@WAITING_IG_4") && STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		if (iLocal_301 == 1)
		{
			func_183("re_cartheft - Distance to vTop = ", SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_96));
			func_183("re_cartheft - Distance to vBottom = ", SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_99));
			veLocal_77 = VEHICLE::CREATE_VEHICLE(model3, vector, heading, true, true, false);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(veLocal_77, 0, false);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veLocal_77, false);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_77, true);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(veLocal_77, false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(veLocal_77, false);
			VEHICLE::SET_VEHICLE_EXTRA(veLocal_77, 2, false);
			pedLocal_76 = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_77, PED_TYPE_CRIMINAL, model2, -1, true, true);
			PED::SET_PED_CONFIG_FLAG(pedLocal_76, 42, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_76, BF_CanLeaveVehicle, true);
			WEAPON::GIVE_WEAPON_TO_PED(pedLocal_76, 453432689, -1, true, true);
			PED::SET_PED_ACCURACY(pedLocal_76, 10);
			PED::SET_DRIVER_ABILITY(pedLocal_76, 1f);
			PED::SET_DRIVER_RACING_MODIFIER(pedLocal_76, 1f);
			VEHICLE::SET_VEHICLE_COLOURS(veLocal_77, 135, 135);
			PED::ADD_RELATIONSHIP_GROUP("re_cartheft relGroupThief", &hLocal_329);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_329, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_329, 45677184);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 45677184, hLocal_329);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_76, hLocal_329);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(veLocal_77, true);
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				dx = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - uLocal_52 };
				fLocal_55 = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
			}
		
			pedLocal_75 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, model, uLocal_52, fLocal_55, true, true);
			AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_75, name);
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_75, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_75, PV_COMP_HEAD, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_75, PV_COMP_HAIR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_75, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_75, PV_COMP_LOWR, 1, 1, 0);
			AUDIO::STOP_PED_SPEAKING(pedLocal_75, true);
		
			if (bLocal_61)
			{
				uLocal_90 = { -2254.413f, 4270.227f, 44.8028f };
				fLocal_105 = 124.6557f;
				uLocal_87 = { -2252.683f, 4274.1597f, 45.0612f };
				uLocal_93 = { -2257.825f, 4269.189f, 44.6334f };
				fLocal_106 = 272.8688f;
				uLocal_113 = { -2258.0403f, 4272.2437f, 45.75466f };
				uLocal_116 = { 1.729481f, 0f, -114.935196f };
			}
			else
			{
				uLocal_90 = { -2253.634f, 4269.119f, 44.7686f };
				fLocal_105 = 336.143f;
				uLocal_93 = { -2255.733f, 4271.32f, 44.8166f };
				fLocal_106 = 179.4774f;
				uLocal_87 = { -2257.088f, 4268.938f, 44.6456f };
				uLocal_113 = { -2254.8865f, 4273.539f, 46.2282f };
				uLocal_116 = { -7.492095f, 0f, -168.19087f };
			}
		}
		else
		{
			if (bLocal_61)
				veLocal_77 = VEHICLE::CREATE_VEHICLE(model3, -488.7506f, -2159.3254f, 8.2581f, 15.0886f, true, true, false);
			else
				veLocal_77 = VEHICLE::CREATE_VEHICLE(model3, -486.3563f, -2159.9421f, 8.2887f, 288.8187f, true, true, false);
		
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(veLocal_77, 0, false);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veLocal_77, false);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(veLocal_77, 3);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_77, true);
			VEHICLE::SET_VEHICLE_MOD_KIT(veLocal_77, 0);
			VEHICLE::SET_VEHICLE_MOD(veLocal_77, 11, 2, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_77, 16, 3, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_77, 12, 1, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_77, 13, 1, false);
			VEHICLE::SET_VEHICLE_WHEEL_TYPE(veLocal_77, 3);
			VEHICLE::SET_VEHICLE_MOD(veLocal_77, 23, 6, false);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veLocal_77, 3);
			VEHICLE::TOGGLE_VEHICLE_MOD(veLocal_77, 18, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(veLocal_77, 22, true);
			VEHICLE::SET_VEHICLE_COLOURS(veLocal_77, 143, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veLocal_77, 31, 2);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(veLocal_77, false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(veLocal_77, false);
		
			if (bLocal_61)
				pedLocal_75 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, model, -490.4008f, -2160.7551f, 8.2498f, 314.0037f, true, true);
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -583.08844f, -2234.2488f, 4.523423f, -685.1817f, -2350.9036f, 17.070732f, 178f, false, true, 0))
				pedLocal_75 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, model, -486.81f, -2156.99f, 8.27f, -172.34f, true, true);
			else
				pedLocal_75 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, model, -486.2511f, -2161.808f, 8.3041f, 353.4264f, true, true);
		
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_75, PV_COMP_HEAD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_75, PV_COMP_HAIR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_75, PV_COMP_UPPR, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_75, PV_COMP_LOWR, 1, 2, 0);
			pedLocal_76 = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_77, PED_TYPE_CRIMINAL, model2, -1, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(pedLocal_76, 453432689, -1, true, true);
			PED::SET_PED_ACCURACY(pedLocal_76, 10);
			PED::SET_DRIVER_ABILITY(pedLocal_76, 1f);
			PED::SET_DRIVER_RACING_MODIFIER(pedLocal_76, 1f);
			PED::SET_PED_CONFIG_FLAG(pedLocal_76, 42, true);
			AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_76, name2);
			uLocal_90 = { -501.9105f, -2148.0193f, 8.0392f };
			fLocal_105 = 294.4744f;
			uLocal_87 = { -501.0442f, -2150.7988f, 8.139f };
			uLocal_93 = { -493.8062f, -2156.036f, 8.1978f };
			uLocal_113 = { -504.365f, -2144.5342f, 9.8585f };
			uLocal_116 = { -6.6935f, 0f, -127.8147f };
		}
	
		PED::SET_PED_CAN_BE_TARGETTED(pedLocal_75, false);
		PED::SET_PED_CONFIG_FLAG(pedLocal_75, 185, true);
		VEHICLE::SET_CAN_RESPRAY_VEHICLE(veLocal_77, false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(veLocal_77, true, true, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_75, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_76, true);
		TASK::TASK_LOOK_AT_ENTITY(pedLocal_75, pedLocal_76, -1, 0, 2);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(veLocal_77);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(veLocal_77, true);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(veLocal_77, false, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(model3, true);
		AUDIO::START_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(veLocal_77, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(veLocal_77, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_75, BF_AlwaysFlee, false);
		PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_75, 512, true);
	
		switch (func_10())
		{
			case 0:
				sLocal_120 = "MICHAEL";
				break;
		
			case 1:
				sLocal_120 = "FRANKLIN";
				break;
		
			case 2:
				sLocal_120 = "TREVOR";
				break;
		}
	
		func_182(&uLocal_122, 0, PLAYER::PLAYER_PED_ID(), sLocal_120, 0, 1);
		func_182(&uLocal_122, 1, pedLocal_75, str, 0, 1);
		func_182(&uLocal_122, 2, pedLocal_76, "CThief", 0, 1);
		return true;
	}
	else if (func_170())
	{
		func_237();
	}

	return false;
}

BOOL func_170() // Position - 0x7A75 Hash - 0xC05B0E62 ^0x94C54EFE
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_45) < 75f * 75f)
			return true;
	
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_181())
			return false;
	}

	if (func_177())
		return true;

	if (func_171(100f, true) != -1)
		return true;

	return false;
}

int func_171(float fParam0, BOOL bParam1) // Position - 0x7AFB Hash - 0xA169FFDC ^0x284941E0
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
		if (func_13(func_10()))
		{
			num4 = func_136();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_113648.f_18576[num /*6*/], 2) && !IS_BIT_SET(Global_113648.f_18576[num /*6*/], 3))
				{
					func_172(num, &unk);
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

void func_172(int iParam0, var uParam1) // Position - 0x7BAC Hash - 0x2D8E3F8 ^0x7018B42B
{
	switch (iParam0)
	{
		case 0:
			func_173(uParam1, "Abigail1", func_175(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 1:
			func_173(uParam1, "Abigail2", func_175(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 2:
			func_173(uParam1, "Barry1", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 3:
			func_173(uParam1, "Barry2", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
	
		case 4:
			func_173(uParam1, "Barry3", func_175(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 5:
			func_173(uParam1, "Barry3A", func_175(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, _("Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry."), 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 6:
			func_173(uParam1, "Barry3C", func_175(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 7:
			func_173(uParam1, "Barry4", func_175(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_174(iParam0), 0, 0);
			break;
	
		case 8:
			func_173(uParam1, "Dreyfuss1", func_175(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, _("The killer's identity and location have been revealed."), 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 9:
			func_173(uParam1, "Epsilon1", func_175(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 10:
			func_173(uParam1, "Epsilon2", func_175(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 11:
			func_173(uParam1, "Epsilon3", func_175(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 12:
			func_173(uParam1, "Epsilon4", func_175(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 13:
			func_173(uParam1, "Epsilon5", func_175(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 14:
			func_173(uParam1, "Epsilon6", func_175(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 15:
			func_173(uParam1, "Epsilon7", func_175(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 16:
			func_173(uParam1, "Epsilon8", func_175(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 17:
			func_173(uParam1, "Extreme1", func_175(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 18:
			func_173(uParam1, "Extreme2", func_175(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 19:
			func_173(uParam1, "Extreme3", func_175(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 20:
			func_173(uParam1, "Extreme4", func_175(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 21:
			func_173(uParam1, "Fanatic1", func_175(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_174(iParam0), 1, 0);
			break;
	
		case 22:
			func_173(uParam1, "Fanatic2", func_175(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_174(iParam0), 1, 0);
			break;
	
		case 23:
			func_173(uParam1, "Fanatic3", func_175(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_174(iParam0), 0, 1);
			break;
	
		case 24:
			func_173(uParam1, "Hao1", func_175(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_174(iParam0), 0, 1);
			break;
	
		case 25:
			func_173(uParam1, "Hunting1", func_175(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 26:
			func_173(uParam1, "Hunting2", func_175(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 27:
			func_173(uParam1, "Josh1", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 28:
			func_173(uParam1, "Josh2", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
	
		case 29:
			func_173(uParam1, "Josh3", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
	
		case 30:
			func_173(uParam1, "Josh4", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 31:
			func_173(uParam1, "Maude1", func_175(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 32:
			func_173(uParam1, "Minute1", func_175(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 33:
			func_173(uParam1, "Minute2", func_175(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 34:
			func_173(uParam1, "Minute3", func_175(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 35:
			func_173(uParam1, "MrsPhilips1", func_175(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 36:
			func_173(uParam1, "MrsPhilips2", func_175(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 37:
			func_173(uParam1, "Nigel1", func_175(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 38:
			func_173(uParam1, "Nigel1A", func_175(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, _("Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill."), 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
	
		case 39:
			func_173(uParam1, "Nigel1B", func_175(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
	
		case 40:
			func_173(uParam1, "Nigel1C", func_175(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
	
		case 41:
			func_173(uParam1, "Nigel1D", func_175(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
	
		case 42:
			func_173(uParam1, "Nigel2", func_175(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
	
		case 43:
			func_173(uParam1, "Nigel3", func_175(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
	
		case 44:
			func_173(uParam1, "Omega1", func_175(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 45:
			func_173(uParam1, "Omega2", func_175(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 46:
			func_173(uParam1, "Paparazzo1", func_175(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 47:
			func_173(uParam1, "Paparazzo2", func_175(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 48:
			func_173(uParam1, "Paparazzo3", func_175(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 49:
			func_173(uParam1, "Paparazzo3A", func_175(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, _("Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly."), 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 50:
			func_173(uParam1, "Paparazzo3B", func_175(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 51:
			func_173(uParam1, "Paparazzo4", func_175(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 52:
			func_173(uParam1, "Rampage1", func_175(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 54:
			func_173(uParam1, "Rampage3", func_175(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 55:
			func_173(uParam1, "Rampage4", func_175(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 56:
			func_173(uParam1, "Rampage5", func_175(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
	
		case 53:
			func_173(uParam1, "Rampage2", func_175(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
	
		case 57:
			func_173(uParam1, "TheLastOne", func_175(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 58:
			func_173(uParam1, "Tonya1", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, _("Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~"), -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 59:
			func_173(uParam1, "Tonya2", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 60:
			func_173(uParam1, "Tonya3", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 61:
			func_173(uParam1, "Tonya4", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		case 62:
			func_173(uParam1, "Tonya5", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_173(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x8DF4 Hash - 0x340E6E87 ^0xA591C803
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

int func_174(int iParam0) // Position - 0x8E85 Hash - 0xC999F6B2 ^0xC999F6B2
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

struct<2> func_175(int iParam0) // Position - 0x91CB Hash - 0x323E6781 ^0xC1CA7211
{
	var unk;
	var unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_176(iParam0) };

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

struct<2> func_176(int iParam0) // Position - 0x9203 Hash - 0x975AC8C9 ^0xC5DD7C0A
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

BOOL func_177() // Position - 0x9650 Hash - 0x7055FFB1 ^0x7055FFB1
{
	if (func_180() && !func_181())
		return true;

	if (func_179() && func_178())
		return true;

	return false;
}

BOOL func_178() // Position - 0x9682 Hash - 0x79CF7679 ^0x79CF7679
{
	return Global_113366 > 0;
}

BOOL func_179() // Position - 0x9690 Hash - 0xCF2296C0 ^0xCF2296C0
{
	if (Global_97603 != -1)
		return true;

	return false;
}

BOOL func_180() // Position - 0x96A5 Hash - 0x98CCC132 ^0x97B0D6ED
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);

	return false;
}

BOOL func_181() // Position - 0x96C8 Hash - 0x29CB2928 ^0xE369A18D
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

void func_182(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x96E5 Hash - 0x6C235EE0 ^0x9E57F206
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

void func_183(char* sParam0, float fParam1) // Position - 0x9780 Hash - 0x2E949C6A ^0x2E949C6A
{
	func_185(sParam0);
	func_184(fParam1);
	return;
}

void func_184(float fParam0) // Position - 0x9794 Hash - 0xDD586179 ^0xDD586179
{
	fParam0 != 0f;
	return;
}

void func_185(char* sParam0) // Position - 0x97A3 Hash - 0xF54A2398 ^0xC5887C42
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
	return;
}

BOOL func_186() // Position - 0x97B6 Hash - 0xF2B7F534 ^0x7F3EC4F9
{
	if (!func_163(5))
		return true;

	if (func_177())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_181())
			return false;

	if (func_171(100f, true) != -1)
		return true;

	return false;
}

BOOL func_187() // Position - 0x9818 Hash - 0x1121F6F2 ^0x90CE37A6
{
	if (Global_113637 == func_140() && MISC::GET_RANDOM_EVENT_FLAG() && Global_113638)
		return true;

	return false;
}

void func_188() // Position - 0x9843 Hash - 0x231478AA ^0xA263CA1B
{
	if (func_116(PLAYER::PLAYER_PED_ID()))
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != veLocal_77 && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != veLocal_80)
				veLocal_80 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	return;
}

void func_189(Blip blParam0, var uParam1) // Position - 0x988D Hash - 0x54F8B7E9 ^0xFC9A9E73
{
	int value;
	int num;

	if (*uParam1 == -99)
		*uParam1 = MISC::GET_GAME_TIMER();

	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		value = MISC::GET_GAME_TIMER() - *uParam1;
	
		if (value < 5000)
		{
			num = SYSTEM::CEIL(SYSTEM::TO_FLOAT(value) / 1000f);
		
			if ((num * 1000) - value < 500)
				if (HUD::GET_BLIP_ALPHA(blParam0) != 255)
					HUD::SET_BLIP_ALPHA(blParam0, 255);
			else if (HUD::GET_BLIP_ALPHA(blParam0) != 0)
				HUD::SET_BLIP_ALPHA(blParam0, 0);
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
		
			if (HUD::GET_BLIP_ALPHA(blParam0) != 255)
				HUD::SET_BLIP_ALPHA(blParam0, 255);
		}
	}

	return;
}

void func_190() // Position - 0x992C Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_191(int iParam0) // Position - 0x9934 Hash - 0xA62BD46A ^0x1E050688
{
	if (iParam0 == -1)
		iParam0 = func_140();

	if (iParam0 == -1)
		return;

	func_193(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113634 = 0;
	func_192();
	return;
}

void func_192() // Position - 0x996A Hash - 0x178BF2A7 ^0x744062F5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_193(int iParam0) // Position - 0x99A7 Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113637 = iParam0;
	return;
}

BOOL func_194(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x99B5 Hash - 0xC601B4EA ^0xC601B4EA
{
	BOOL flag;
	Vector3 entityCoords;
	int unk;
	Vector3 unk2;
	int i;

	if (!Global_152234)
		return false;

	if (iParam3 == -1)
		iParam3 = func_140();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!func_234())
			return false;

	uLocal_45 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_181())
				return false;
		}
	
		if (!Global_113648.f_9087)
			return false;
	
		if (func_123(false))
			return false;
	
		if (func_177())
			return false;
	
		if (func_233())
			return false;
	
		if (Global_113637 != -1)
			return false;
	
		if (func_13(func_10()))
			if (func_171(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_45.f_2 > 50f)
				return false;
	
		if (!func_232(iParam3))
			return false;
	
		if (func_13(func_10()))
			if (func_231(func_10()) == 4 || func_231(func_10()) == 5)
				return false;
	
		if (func_13(func_10()))
			if (!func_230(iParam3, iParam4, 145))
				return false;
	
		if (!func_229(Global_113648.f_24997.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_113639 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_228())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_219(4))
			return false;
	
		if (!func_163(5))
			return false;
	
		if (func_218(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_3 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_218(0, 0))
			return false;
	
		if (Global_32310)
			return false;
	
		if (func_232(30) && !func_218(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_13(func_10()))
		{
			for (i = 0; i < 3; i = i + 1)
			{
				vector = { Global_113648.f_2365.f_539.f_2300[i /*3*/] };
				num = Global_113648.f_2365.f_539.f_2296[i];
			
				if (func_217(num))
					if (func_195(i))
						if (!func_98(vector, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (func_10() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_195(int iParam0) // Position - 0x9D4F Hash - 0x687D9246 ^0x687D9246
{
	int num;

	num = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_196(num);
}

BOOL func_196(int iParam0) // Position - 0x9D70 Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_197(iParam0, 1);
}

int func_197(int iParam0, int iParam1) // Position - 0x9D7F Hash - 0x1F92FEBC ^0x1F92FEBC
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_217(iParam0))
		return 0;

	func_198(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_198(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x9DD2 Hash - 0x2BEE335D ^0x2BEE335D
{
	func_199(func_210(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_199(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x9DF0 Hash - 0xB807819C ^0xB807819C
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_209(iParam0, iParam1))
	{
		num = func_208(iParam1);
		num2 = func_206(iParam0);
		num3 = func_206(iParam0) - func_206(iParam1);
		num4 = func_208(iParam0) - func_208(iParam1);
		num5 = func_205(iParam0) - func_205(iParam1);
		num6 = func_204(iParam0) - func_204(iParam1);
		num7 = func_203(iParam0) - func_203(iParam1);
		num8 = func_202(iParam0) - func_202(iParam1);
	}
	else
	{
		num = func_208(iParam0);
		num2 = func_206(iParam1);
		num3 = func_206(iParam1) - func_206(iParam0);
		num4 = func_208(iParam1) - func_208(iParam0);
		num5 = func_205(iParam1) - func_205(iParam0);
		num6 = func_204(iParam1) - func_204(iParam0);
		num7 = func_203(iParam1) - func_203(iParam0);
		num8 = func_202(iParam1) - func_202(iParam0);
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
	
		num5 = num5 + func_201(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_200(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
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

float func_200(float fParam0, float fParam1, float fParam2) // Position - 0x9FF1 Hash - 0xDB08F514 ^0x78C0BF6F
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

int func_201(int iParam0, int iParam1) // Position - 0xA033 Hash - 0xD3EBACB3 ^0xD3EBACB3
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

int func_202(int iParam0) // Position - 0xA0D5 Hash - 0x90B520AB ^0x257AC1C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_203(int iParam0) // Position - 0xA0E8 Hash - 0xC188C91C ^0x48884C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_204(int iParam0) // Position - 0xA0FB Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_205(int iParam0) // Position - 0xA10E Hash - 0x826C592F ^0xDEC5AA46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_206(int iParam0) // Position - 0xA120 Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_207(BOOL bParam0, var uParam1, var uParam2) // Position - 0xA142 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_208(int iParam0) // Position - 0xA159 Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

BOOL func_209(int iParam0, int iParam1) // Position - 0xA166 Hash - 0xEA08B1 ^0xEA08B1
{
	int num;
	int num2;

	if (!func_217(iParam1) || !func_217(iParam0))
		return 1;

	num = func_206(iParam0);
	num2 = func_206(iParam1);

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

	num = func_205(iParam0);
	num2 = func_205(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_204(iParam0);
	num2 = func_204(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_203(iParam0);
	num2 = func_203(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_202(iParam0);
	num2 = func_202(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_210() // Position - 0xA272 Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_216(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_215(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_214(&unk, CLOCK::GET_CLOCK_HOURS());
	func_213(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_212(&unk, CLOCK::GET_CLOCK_MONTH());
	func_211(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_211(var uParam0, int iParam1) // Position - 0xA2B8 Hash - 0x15B9927E ^0x4A4674
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

void func_212(var uParam0, int iParam1) // Position - 0xA33E Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_213(var uParam0, int iParam1) // Position - 0xA371 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_208(*uParam0);
	num2 = func_206(*uParam0);

	if (iParam1 < 1 || iParam1 > func_201(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_214(var uParam0, int iParam1) // Position - 0xA3C2 Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_215(var uParam0, int iParam1) // Position - 0xA3FC Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_216(var uParam0, int iParam1) // Position - 0xA437 Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_217(int iParam0) // Position - 0xA473 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_202(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_203(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_204(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_206(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_208(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_205(iParam0);

	if (num6 < 1 || num6 > func_201(num5, num4))
		return false;

	return true;
}

BOOL func_218(int iParam0, int iParam1) // Position - 0xA54F Hash - 0x577FB514 ^0xAAF8B538
{
	if (IS_BIT_SET(Global_113648.f_24997.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_219(int iParam0) // Position - 0xA56F Hash - 0x97844555 ^0xADCD6DAA
{
	int num;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				num = func_10();
			
				if (!func_13(num))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_227() || Global_112695 || Global_32166 || func_226() || func_59(8, -1) || func_225() || func_224() || func_223() || func_222() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_227() || Global_32166 || func_226() || func_59(8, -1) || func_223() || func_225() || func_224() || func_222() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_227() || Global_112695 || Global_32166 || func_226() || func_59(8, -1) || func_223() || func_225() || func_224() || func_222() || Global_113648.f_7690.f_919[num] == 5 || Global_43804 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_227() || Global_112695 || Global_32166 || func_226() || func_59(8, -1) || func_225() || func_224() || func_222() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 4:
						if (func_227() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_59(8, -1) || func_222() || func_221() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 5:
						if (func_59(8, -1) || func_225() || func_224() || func_221() || func_220())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_227() || Global_32166 || func_226() || func_59(8, -1) || func_224() || func_223() || func_222() || Global_113648.f_7690.f_919[num] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_227() || func_224() || Global_112695 || Global_32166 || func_226() || Global_44446 || func_59(8, -1) || func_223() || func_221() || func_222() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || unk_0x279D0BCF8F708D74(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_227() || Global_112695 || Global_32166 || func_226() || func_59(8, -1) || func_223() || func_221() || func_225() || func_224() || func_222())
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

BOOL func_220() // Position - 0xAC8C Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_100720.f_1;
}

BOOL func_221() // Position - 0xAC9A Hash - 0xC20DBA70 ^0xAC4006FB
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);

	return false;
}

BOOL func_222() // Position - 0xACBD Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1424752554) > 0)
		return true;

	return false;
}

BOOL func_223() // Position - 0xACD7 Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_224() // Position - 0xAD01 Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_388 > 0;
}

BOOL func_225() // Position - 0xAD12 Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_387 > 0;
}

BOOL func_226() // Position - 0xAD23 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575060;
}

BOOL func_227() // Position - 0xAD2F Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_228() // Position - 0xAD4B Hash - 0xB12DEAA2 ^0xB12DEAA2
{
	func_57();

	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_229(int iParam0) // Position - 0xAD73 Hash - 0xCDB90269 ^0xCDB90269
{
	return func_209(func_210(), iParam0);
}

BOOL func_230(int iParam0, int iParam1, int iParam2) // Position - 0xAD85 Hash - 0xBEEFD79C ^0xBEEFD79C
{
	BOOL num;
	int num2;

	num = 0;
	num2 = func_10();

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

int func_231(int iParam0) // Position - 0xAE69 Hash - 0x45FC9D61 ^0x45FC9D61
{
	if (!func_13(iParam0))
		return 7;

	return Global_113648.f_7690.f_919[iParam0];
}

BOOL func_232(int iParam0) // Position - 0xAE8D Hash - 0xF2A54181 ^0xF2A54181
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!func_234())
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

BOOL func_233() // Position - 0xAEE5 Hash - 0xB72C022E ^0x452A7B6D
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

BOOL func_234() // Position - 0xAF29 Hash - 0x44DD83CC ^0x6D2C8335
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

BOOL func_235(int iParam0) // Position - 0xAFE1 Hash - 0x3D43FEFC ^0x3D43FEFC
{
	int i;

	if (iParam0 == 94 || iParam0 == -1)
		return false;

	if (Global_94666[iParam0 /*2*/])
		return true;

	for (i = 0; i < Global_91433; i = i + 1)
	{
		if (Global_91433[i /*5*/] != -1)
			if (Global_78828.f_109[Global_91433[i /*5*/] /*4*/] == iParam0)
				return true;
	}

	return false;
}

void func_236() // Position - 0xB049 Hash - 0x1768D41F ^0x1D1067EA
{
	if (SYSTEM::VDIST(uLocal_52, -2255.21f, 4271.04f, 44.875f) < 5f)
		iLocal_301 = 1;
	else if (SYSTEM::VDIST(uLocal_52, -500.924f, -2165.36f, 7.6988f) < 5f)
		iLocal_301 = 2;

	return;
}

void func_237() // Position - 0xB094 Hash - 0x817BE284 ^0x39D02456
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_76) && !ENTITY::IS_ENTITY_DEAD(pedLocal_76, false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_76, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(pedLocal_76));
		func_249(&pedLocal_76, true, 0, 1);
	}

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_75) && !ENTITY::IS_ENTITY_DEAD(pedLocal_75, false))
	{
		PED::SET_PED_RESET_FLAG(pedLocal_75, 310, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_75, false);
	}

	if (HUD::DOES_BLIP_EXIST(blLocal_64))
		HUD::REMOVE_BLIP(&blLocal_64);

	func_69(&uLocal_67);

	if (HUD::DOES_BLIP_EXIST(blLocal_65))
		HUD::REMOVE_BLIP(&blLocal_65);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
	{
		if (func_168(veLocal_77))
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(veLocal_77, 0);
	
		AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
	}

	if (iLocal_301 == 2)
		VEHICLE::REMOVE_VEHICLE_ASSET(2136773105);
	else
		VEHICLE::REMOVE_VEHICLE_ASSET(1830407356);

	func_17(&veLocal_77);

	if (func_168(veLocal_80))
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veLocal_80, true);

	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	func_152(39, false);
	func_152(40, false);
	func_152(41, false);
	func_152(42, false);
	func_152(43, false);
	func_152(44, false);
	func_238(-1);
	func_71(&uLocal_330, 0, false);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_238(int iParam0) // Position - 0xB1B0 Hash - 0xE6B11918 ^0x37AF2AD2
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_140();

	if (iParam0 == -1)
		return;

	if (func_187())
	{
		func_242(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113639 = MISC::GET_GAME_TIMER();
		func_241(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_240(Global_113637, true), 64);
	
		if (func_139(Global_113637) > 0)
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

	func_239(&Global_32223);
	Global_113638 = false;
	func_193(-1);
	return;
}

void func_239(var uParam0) // Position - 0xB262 Hash - 0x995C9E2 ^0x995C9E2
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

char* func_240(int iParam0, BOOL bParam1) // Position - 0xB29F Hash - 0x959319CB ^0x28257271
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

void func_241(int iParam0) // Position - 0xB4E8 Hash - 0xC0234809 ^0x4FD853DC
{
	Global_43808 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_242(int iParam0) // Position - 0xB4FA Hash - 0x881273A8 ^0x881273A8
{
	func_243(iParam0, 0, func_248(iParam0));
	return;
}

void func_243(int iParam0, int iParam1, int iParam2) // Position - 0xB50F Hash - 0xA7DBC311 ^0xA7DBC311
{
	int unk;
	var unk2;

	unk = func_210();
	func_246(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_245(iParam0, &unk);
	unk2 = { func_244(&unk) };
	return;
}

struct<16> func_244(var uParam0) // Position - 0xB53E Hash - 0xB96DB942 ^0x95F998CA
{
	var unk;
	int unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_204(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_203(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_202(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_205(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_208(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_206(*uParam0), 64);
	return unk;
}

void func_245(int iParam0, var uParam1) // Position - 0xB60F Hash - 0x63EF72B0 ^0xC612AA53
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
	return;
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xB627 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_206(*uParam0);
	i = func_208(*uParam0);
	num2 = func_205(*uParam0);
	j = func_204(*uParam0);
	k = func_203(*uParam0);
	l = func_202(*uParam0);

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

	for (m = func_201(i, num); num2 > m; m = func_201(i, num))
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
	func_247(uParam0, l, k, j, num2, i, num);
	return;
}

void func_247(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xB7A9 Hash - 0x733BFBA2 ^0x733BFBA2
{
	func_216(uParam0, iParam1);
	func_215(uParam0, iParam2);
	func_214(uParam0, iParam3);
	func_212(uParam0, iParam5);
	func_213(uParam0, iParam4);
	func_211(uParam0, iParam6);
	return;
}

int func_248(int iParam0) // Position - 0xB7E1 Hash - 0x4219564C ^0x4219564C
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

void func_249(Ped* ppedParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0xB984 Hash - 0x34362197 ^0xC592197
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!PED::IS_PED_INJURED(*ppedParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
		
			if (iParam3 == 0)
				TASK::CLEAR_PED_SECONDARY_TASK(*ppedParam0);
		
			PED::SET_PED_KEEP_TASK(*ppedParam0, bParam1);
		
			if (iParam2 == 1)
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, false);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
	}

	return;
}

