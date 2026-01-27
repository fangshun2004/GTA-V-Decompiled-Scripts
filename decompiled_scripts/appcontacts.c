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
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
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
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	char* sLocal_81[1] = { NULL };
	char cLocal_83[16] = "";
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	char cLocal_108[16] = "";
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 16;
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
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	char cLocal_281[16] = "";
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	struct<3> Local_285 = { 0, 0, 0 } ;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_299 = 0;
	bool bLocal_300 = 0;
	bool bLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	struct<3000> Local_305 = { 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_3305 = { 0, 0, 0 } ;
	char cLocal_3308[64] = "";
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	int iLocal_3324 = 0;
	int iLocal_3325 = 0;
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
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	iLocal_70 = 9999;
	iLocal_71 = 9999;
	fLocal_96 = 0.82f;
	fLocal_97 = 0.42f;
	fLocal_98 = 0f;
	fLocal_99 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_BIT(&Global_9463, 17);
	MISC::CLEAR_BIT(&Global_9464, 18);
	MISC::CLEAR_BIT(&Global_9464, 20);
	iLocal_277 = func_341(12);
	iLocal_278 = func_341(2);
	iLocal_279 = func_341(0);
	iLocal_78 = AUDIO::GET_SOUND_ID();
	if (Global_80280)
	{
		func_331();
	}
	else
	{
		func_319();
	}
	if (!Global_21610.f_1 == 10)
	{
		if (Global_21610.f_1 > 3)
		{
			if (Global_21610.f_1 != 9)
			{
				Global_21610.f_1 = 7;
			}
		}
	}
	iLocal_105 = MISC::GET_GAME_TIMER();
	func_318(147, 1320);
	func_318(74, 180);
	func_318(75, 190);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BitTest(Global_9464, 18))
		{
			func_317();
			if (Global_21610.f_1 > 3)
			{
				Global_21610.f_1 = 8;
			}
			MISC::CLEAR_BIT(&Global_9464, 18);
			func_316();
		}
		if ((iLocal_90 == 1 && Global_21610.f_1 == 10) && Local_305.f_2999 == 1)
		{
			func_203();
		}
		if (Global_21610.f_1 != 9)
		{
			switch (Global_21610.f_1)
			{
				case 7:
					if (BitTest(Global_9463, 16))
					{
						func_202();
					}
					else
					{
						func_199();
						if (BitTest(Global_9464, 0))
						{
							iLocal_106 = MISC::GET_GAME_TIMER();
							if ((iLocal_106 - iLocal_105) > 1000)
							{
								if (iLocal_107)
								{
									func_198();
								}
								else
								{
									func_178();
								}
							}
							if (iLocal_107)
							{
								func_177();
							}
						}
						else
						{
							func_178();
						}
					}
					if (!BitTest(Global_9463, 9))
					{
						if (func_176(2, Global_21582, 0))
						{
							if (BitTest(Global_9464, 0))
							{
							}
							else if (Global_21553 == 0)
							{
								if (!BitTest(Global_9464, 19))
								{
									func_174();
									func_173(Global_21591, "SET_DATA_SLOT_EMPTY", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									iLocal_80 = 0;
									StringCopy(&cLocal_83, "", 16);
									func_172();
									Global_21590 = 0;
									iLocal_90 = 0;
									func_173(Global_21591, "DISPLAY_VIEW", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									func_171(Global_21591, "SET_HEADER", "CELL_221", 0, 0, 0, 0);
									if (Global_21598)
									{
										func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
										func_170(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
										MISC::SET_BIT(&Global_9463, 17);
										func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
									}
									else
									{
										func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
										func_170(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
										MISC::SET_BIT(&Global_9463, 17);
										func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
									}
									if (Global_21610.f_1 > 3)
									{
										Global_21610.f_1 = 8;
									}
								}
							}
						}
					}
					break;
				
				case 8:
					if (iLocal_90 == 1)
					{
						func_199();
						func_203();
					}
					else if (iLocal_88 == 0)
					{
						func_160();
						func_149();
					}
					else
					{
						if (SYSTEM::TIMERA() > 1500)
						{
							iLocal_303 = 0;
							while (iLocal_303 < 4)
							{
								if (MISC::ARE_STRINGS_EQUAL(&(Global_2339[Global_8778 /*29*/].f_3), &(Global_9301[iLocal_303 /*16*/])))
								{
									if (!MISC::ARE_STRINGS_EQUAL(&(Global_9301[iLocal_303 /*16*/].f_8), "CELL_SFUN_NULL"))
									{
										bLocal_300 = true;
										iLocal_302 = iLocal_303;
									}
									else
									{
										bLocal_300 = false;
									}
								}
								iLocal_303++;
							}
							if (iLocal_89 == 0)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "GET_CURRENT_SELECTION");
								iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
								while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
								{
									SYSTEM::WAIT(0);
								}
								iLocal_74 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
								func_147();
							}
						}
						func_199();
						if (bLocal_301 == 1)
						{
							if (!Global_114904.f_18110.f_396)
							{
								if (!func_143(Global_21610, Global_8778))
								{
									Global_114904.f_18110.f_396 = 1;
								}
							}
						}
						if (func_143(Global_21610, Global_8778))
						{
							if (!Global_114904.f_18110.f_397)
							{
								if (bLocal_300 == 1)
								{
									if (func_142(Global_98251))
									{
										switch (func_140("AM_H_BBUDDY"))
										{
											case 2:
												func_138("AM_H_BBUDDY", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_114904.f_18110.f_397 = 1;
												break;
										}
										if (func_140("AM_H_BBUDDY1") == 0)
										{
											func_133("AM_H_BBUDDY1", 1);
										}
									}
									else
									{
										switch (func_140("AM_H_BBUDDY1"))
										{
											case 2:
												func_138("AM_H_BBUDDY1", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_114904.f_18110.f_397 = 1;
												break;
										}
										if (func_140("AM_H_BBUDDY") == 0)
										{
											func_133("AM_H_BBUDDY", 1);
										}
									}
								}
							}
						}
						if (iLocal_89)
						{
							func_132();
						}
						else
						{
							func_93();
						}
					}
					if (func_176(2, Global_21578, 0))
					{
						func_92();
						Global_21588 = 1;
						if (Global_80280)
						{
							func_331();
						}
						else
						{
							func_319();
						}
						SYSTEM::WAIT(0);
						if (Global_21610.f_1 > 3)
						{
							Global_21610.f_1 = 7;
						}
						StringCopy(&cLocal_83, "", 16);
						if (iLocal_88 == 1)
						{
							iLocal_88 = 0;
						}
						if (iLocal_89 == 1)
						{
							iLocal_89 = 0;
						}
						iLocal_90 = 0;
					}
					break;
				
				case 10:
					if (iLocal_101 == 4)
					{
					}
					func_3();
					break;
				
				case 6:
					func_316();
					break;
				
				default:
					break;
			}
			if (!Global_21610.f_1 == 8)
			{
				if ((Global_10088 - Global_10087) > Global_10089)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (func_176(2, Global_21578, 0))
							{
								if (BitTest(Global_9464, 0))
								{
									func_92();
								}
								else
								{
									func_92();
									if (!Global_21610.f_1 == 10)
									{
										func_316();
									}
									else if (Global_8778 == 132)
									{
										if (Global_2738986.f_1 || BitTest(Global_9464, 20))
										{
											Global_21610.f_1 = 7;
											func_173(Global_21591, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
											if (BitTest(Global_9464, 0))
											{
												func_171(Global_21591, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
											}
											else
											{
												func_171(Global_21591, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
											}
											AUDIO::STOP_SOUND(iLocal_78);
											iLocal_101 = 0;
										}
									}
									else
									{
										func_317();
										Global_21610.f_1 = 7;
										func_2();
										func_173(Global_21591, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
										if (BitTest(Global_9464, 0))
										{
											func_171(Global_21591, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
										}
										else
										{
											func_171(Global_21591, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
										}
										AUDIO::STOP_SOUND(iLocal_78);
										iLocal_101 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else
		{
			Global_21612 = 6;
			func_316();
		}
		if (func_1())
		{
			func_316();
		}
	}
}

int func_1()
{
	if (((Global_21610.f_1 == 1 || Global_21610.f_1 == 3) || Global_21610.f_1 == 0) || Global_21554 == 1)
	{
		Global_21597 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!Global_21610.f_1 == 10 && !Global_21610.f_1 == 9)
	{
		if (BitTest(Global_9463, 9))
		{
			SYSTEM::WAIT(750);
		}
		if (Global_21610.f_1 > 6)
		{
			func_173(Global_21591, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (BitTest(Global_9464, 0))
			{
				func_171(Global_21591, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_171(Global_21591, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_9466 = 99;
			if (BitTest(Global_9463, 9))
			{
				if (Global_21598)
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9463, 17);
			}
			else if (BitTest(Global_9464, 0))
			{
				if (Global_21598)
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_170(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_170(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21598)
			{
				if (iLocal_68 > 0)
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_21553 == 0)
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					MISC::SET_BIT(&Global_9463, 17);
				}
				else
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_9463, 17);
				}
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_68 > 0)
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_170(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::SET_BIT(&Global_9463, 17);
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_3()
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	int iVar8;
	int iVar9;
	
	switch (iLocal_101)
	{
		case 0:
			if (Global_8778 == 81)
			{
				if (Global_1835506 == 0)
				{
					Global_1835506 = 1;
				}
				if (HUD::DOES_TEXT_BLOCK_EXIST("LOWCAAU"))
				{
					HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC("LOWCAAU", 15);
					while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
					{
						SYSTEM::WAIT(0);
					}
				}
				StringCopy(&cLocal_108, "LOWCA_CALL10_1", 16);
			}
			else if ((Global_8778 == 212 || Global_8778 == 213) || Global_8778 == 214)
			{
				if (Global_1835506 == 0)
				{
					Global_1835506 = 1;
				}
				if (HUD::DOES_TEXT_BLOCK_EXIST("X25MAAU"))
				{
					HUD::REQUEST_ADDITIONAL_TEXT_FOR_DLC("X25MAAU", 15);
					while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(15))
					{
						SYSTEM::WAIT(0);
					}
				}
				bVar0 = func_90();
				if (Global_8778 == 212)
				{
					if (bVar0)
					{
						StringCopy(&cLocal_108, "X25MA_SC_10B", 16);
					}
					else
					{
						StringCopy(&cLocal_108, "X25MA_SC_10A", 16);
					}
				}
				else if (Global_8778 == 213)
				{
					if (bVar0)
					{
						StringCopy(&cLocal_108, "X25MA_BT_10B", 16);
					}
					else
					{
						StringCopy(&cLocal_108, "X25MA_BT_10A", 16);
					}
				}
				else
				{
					Global_8778 = 214;
					if (bVar0)
					{
						StringCopy(&cLocal_108, "X25MA_GA_14A", 16);
					}
					else
					{
						StringCopy(&cLocal_108, "X25MA_GA_13A", 16);
					}
				}
				Global_118[Global_8778 /*10*/] = { cLocal_108 };
			}
			else
			{
				if (HUD::DOES_TEXT_BLOCK_EXIST(&Global_24006))
				{
					HUD::REQUEST_ADDITIONAL_TEXT(&Global_24006, 1);
					while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(1))
					{
						SYSTEM::WAIT(0);
					}
				}
				cLocal_108 = { Global_118[Global_8778 /*10*/] };
				StringConCat(&cLocal_108, "_1", 16);
			}
			if ((((HUD::DOES_TEXT_LABEL_EXIST(&cLocal_108) || iLocal_280 == 1) || Global_8778 == 212) || Global_8778 == 213) || Global_8778 == 214)
			{
				iLocal_102 = Global_24003;
				if (func_89(129))
				{
					iLocal_102 = Global_98832;
				}
			}
			else
			{
				iLocal_102 = Global_24002;
			}
			if ((iLocal_280 == 1 && MISC::ARE_STRINGS_EQUAL(&cLocal_281, "CELLPHONE_CHEAT")) && Global_80280 == 0)
			{
				if ((MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_SEAPLANE") || MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_DUELC")) || MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_BUBBLE"))
				{
					bLocal_94 = true;
				}
				if (bLocal_94)
				{
					if (func_88())
					{
						iLocal_95 = 0;
					}
					else
					{
						iLocal_95 = 1;
					}
				}
				if (iLocal_95 == 0)
				{
					iLocal_103 = MISC::GET_GAME_TIMER();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(&cLocal_83, -1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_87("CELL_300");
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_MONOC"))
					{
						func_87("CELL_MONOSIGNAL");
					}
					else if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_DIRECTOR"))
					{
						func_87("CELL_DRCT");
					}
					else
					{
						func_87("CELL_CHEAT");
					}
					func_87("CELL_195");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_173(Global_21591, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					iLocal_101 = 1;
				}
				else
				{
					iLocal_101 = 2;
					iLocal_103 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				iLocal_101 = 2;
				iLocal_103 = MISC::GET_GAME_TIMER();
			}
			break;
		
		case 1:
			iLocal_104 = MISC::GET_GAME_TIMER();
			if ((iLocal_104 - iLocal_103) > 1500)
			{
				iLocal_101 = 3;
			}
			break;
		
		case 2:
			iLocal_104 = MISC::GET_GAME_TIMER();
			if (iLocal_102 != Global_24002)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_78))
				{
					if (Global_2738986.f_37 == 0)
					{
						if (Global_21553)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_78, "Dial_and_Remote_Ring", &Global_21599, true);
						}
						else if ((iLocal_104 - iLocal_103) > 1700)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_78, "Remote_Ring", &Global_21599, true);
						}
					}
				}
			}
			else if ((func_89(130) || func_89(132)) || func_89(128))
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_78))
				{
					if (Global_2738986.f_37 == 0)
					{
						if (Global_21553)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_78, "Dial_and_Remote_Ring", &Global_21599, true);
						}
						else if ((iLocal_104 - iLocal_103) > 1700)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_78, "Remote_Ring", &Global_21599, true);
						}
					}
				}
			}
			if ((iLocal_104 - iLocal_103) > iLocal_102)
			{
				if (iLocal_102 == Global_24002)
				{
					bLocal_91 = false;
					if ((Global_8778 == 130 || Global_8778 == 132) || Global_8778 == 128)
					{
						if (!BitTest(Global_9464, 20))
						{
							bLocal_91 = true;
							if ((iLocal_104 - iLocal_103) > iLocal_102 + 10000)
							{
								if (Global_21610.f_1 == 10)
								{
									if (Global_8778 == 130)
									{
										Global_21610.f_1 = 3;
									}
								}
							}
						}
					}
					if (!bLocal_91)
					{
						iLocal_101 = 4;
						AUDIO::STOP_SOUND(iLocal_78);
						iLocal_92 = 0;
						SYSTEM::SETTIMERB(0);
						if (func_86(Global_8778, Global_21610) == 0)
						{
							if (Global_8778 == 132)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
								GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22998);
								GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
								func_87("CELL_300");
								func_87("CELL_220");
								func_87("CELL_219");
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(5), -1f, -1f, &(Global_118[Global_8778 /*10*/].f_4), "CELL_300", "CELL_220", "CELL_195", 0);
							}
						}
						else
						{
							func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(5), -1f, -1f, &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), "CELL_220", &(Global_2339[Global_8778 /*29*/].f_3), 0);
						}
						func_173(Global_21591, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					iLocal_101 = 3;
				}
			}
			break;
		
		case 3:
			if (iLocal_280 == 1)
			{
				if (MISC::ARE_STRINGS_EQUAL(&cLocal_281, "CELLPHONE_CHEAT") && Global_80280 == 0)
				{
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_MONOC"))
					{
						if (Global_10284 == 0)
						{
							Global_10284 = 1;
							Global_114904.f_14058[0 /*20*/].f_6 = 5;
							Global_114904.f_14058[2 /*20*/].f_6 = 5;
							Global_114904.f_14058[1 /*20*/].f_6 = 5;
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
								{
									if (!FIRE::IS_EXPLOSION_IN_SPHERE(4, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 40f))
									{
										FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(2f, 0f, 0f), 4, 0.1f, true, false, 1f, false);
									}
								}
							}
						}
						else
						{
							Global_10284 = 0;
						}
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_SUPJUM"))
					{
						func_85(0, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_HEALA"))
					{
						func_85(6, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_SLIDEYC"))
					{
						func_85(1, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_FASTR"))
					{
						func_85(2, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_WANTDN"))
					{
						func_85(9, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_WANTUP"))
					{
						func_85(8, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_WEATHER"))
					{
						func_85(5, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_FASTS"))
					{
						func_85(3, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_POWER"))
					{
						func_85(7, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_CHUTE"))
					{
						func_85(10, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_BANG"))
					{
						func_85(11, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_FLAMB"))
					{
						func_85(12, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_EXPMEL"))
					{
						func_85(13, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_ZEROG"))
					{
						func_85(14, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_INVINC"))
					{
						func_85(15, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_SLOWMO"))
					{
						func_85(16, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_SKYFA"))
					{
						func_85(17, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_DRUNK"))
					{
						func_85(18, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_DEADEYE"))
					{
						func_85(19, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_WEAPONS"))
					{
						func_85(4, 0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_BUZZARD"))
					{
						func_85(20, joaat("buzzard"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_COMET2"))
					{
						func_85(20, joaat("comet2"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_BMX"))
					{
						func_85(20, joaat("bmx"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_CADDY"))
					{
						func_85(20, joaat("caddy"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_DUSTER"))
					{
						func_85(20, joaat("duster"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_PCJ"))
					{
						func_85(20, joaat("pcj"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_RAPIDGT"))
					{
						func_85(20, joaat("rapidgt"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_STRETCH"))
					{
						func_85(20, joaat("stretch"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_STUNT"))
					{
						func_85(20, joaat("stunt"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_TRASH"))
					{
						func_85(20, joaat("trash"));
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_SANCHEZ"))
					{
						func_85(20, joaat("sanchez"));
					}
					if (func_88())
					{
						if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_SEAPLANE"))
						{
							func_85(20, joaat("dodo"));
						}
						if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_DUELC"))
						{
							func_85(20, joaat("dukes2"));
						}
						if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_BUBBLE"))
						{
							func_85(20, joaat("submersible2"));
						}
					}
					if (MISC::ARE_STRINGS_EQUAL(&Local_285, "CHEAT_DIRECTOR"))
					{
						iVar1 = func_47(0, 0, 119);
						if (iVar1 != 0)
						{
							func_45(iVar1);
						}
						else
						{
							func_44();
						}
					}
					func_39(0);
				}
				else if (MISC::ARE_STRINGS_EQUAL(&cLocal_281, "CELLPHONE_CHEAT"))
				{
					func_39(0);
				}
				else
				{
					func_38(&uLocal_112, 1, 0, &Local_285, 0, 1);
					Global_24004 = 0;
					func_37(&uLocal_112, Global_8778, &Global_24006, &cLocal_281, 2, 0, 0, 0, 0);
				}
			}
			else
			{
				iVar8 = 1;
				switch (Global_8778)
				{
					case 81:
						StringCopy(&Var2, "BENNY", 24);
						break;
					
					case 0:
						StringCopy(&Var2, "MICHAEL", 24);
						break;
					
					case 2:
						StringCopy(&Var2, "TREVOR", 24);
						break;
					
					case 1:
						StringCopy(&Var2, "FRANKLIN", 24);
						break;
					
					case 12:
						StringCopy(&Var2, "LESTER", 24);
						break;
					
					case 13:
						StringCopy(&Var2, "LESTER", 24);
						break;
					
					case 15:
						StringCopy(&Var2, "TRACEY", 24);
						break;
					
					case 19:
						StringCopy(&Var2, "LAMAR", 24);
						break;
					
					case 17:
						StringCopy(&Var2, "AMANDA", 24);
						break;
					
					case 45:
						StringCopy(&Var2, "MALEEXECASSIST", 24);
						break;
					
					case 29:
						StringCopy(&Var2, "FEMEXECASSIST", 24);
						break;
					
					case 35:
						StringCopy(&Var2, "CHENGSR", 24);
						break;
					
					case 14:
						StringCopy(&Var2, "JIMMY", 24);
						break;
					
					case 103:
						StringCopy(&Var2, "TONYA", 24);
						break;
					
					case 50:
						StringCopy(&Var2, "BEVERLY", 24);
						break;
					
					case 64:
						StringCopy(&Var2, "NIGEL", 24);
						break;
					
					case 34:
						StringCopy(&Var2, "OSCAR", 24);
						break;
					
					case 49:
						StringCopy(&Var2, "BARRY", 24);
						break;
					
					case 33:
						StringCopy(&Var2, "GAYMILITARY", 24);
						break;
					
					case 20:
						StringCopy(&Var2, "NervousRon", 24);
						break;
					
					case 24:
						StringCopy(&Var2, "Wade", 24);
						break;
					
					case 69:
						StringCopy(&Var2, "OMEGA", 24);
						break;
					
					case 60:
						StringCopy(&Var2, "MARNIE", 24);
						break;
					
					case 37:
						StringCopy(&Var2, "STRETCH", 24);
						break;
					
					case 23:
						StringCopy(&Var2, "STEVE", 24);
						break;
					
					case 51:
						StringCopy(&Var2, "CRIS", 24);
						break;
					
					case 30:
						StringCopy(&Var2, "Dave", 24);
						break;
					
					case 58:
						StringCopy(&Var2, "JOSH", 24);
						break;
					
					case 36:
						StringCopy(&Var2, "FRIEDLANDER", 24);
						break;
					
					case 62:
						StringCopy(&Var2, "MAUDE", 24);
						break;
					
					case 55:
						StringCopy(&Var2, "JIMMYBOSTON", 24);
						break;
					
					case 56:
						StringCopy(&Var2, "JOE", 24);
						break;
					
					case 26:
						StringCopy(&Var2, "SOLOMON", 24);
						break;
					
					case 54:
						StringCopy(&Var2, "CLETUS", 24);
						break;
					
					case 43:
						StringCopy(&Var2, "TANISHA", 24);
						break;
					
					case 16:
						StringCopy(&Var2, "ABIGAIL", 24);
						break;
					
					case 44:
						StringCopy(&Var2, "DENISE", 24);
						break;
					
					case 84:
						StringCopy(&Var2, "BRUCIE", 24);
						break;
					
					case 70:
						StringCopy(&Var2, "BikerBoss", 24);
						break;
					
					case 72:
						StringCopy(&Var2, "MexicanBoss", 24);
						break;
					
					case 89:
						StringCopy(&Var2, "MECHANIC", 24);
						break;
					
					case 91:
						StringCopy(&Var2, "MorsMutual", 24);
						break;
					
					case 85:
						StringCopy(&Var2, "FM_MERRYWEATHER", 24);
						break;
					
					case 41:
						StringCopy(&Var2, "PEGASUS", 24);
						break;
					
					case 18:
						StringCopy(&Var2, "SIMEON", 24);
						break;
					
					case 31:
						StringCopy(&Var2, "MARTIN", 24);
						break;
					
					case 52:
						StringCopy(&Var2, "DOM", 24);
						break;
					
					case 86:
						StringCopy(&Var2, "GERALD", 24);
						break;
					
					case 212:
						StringCopy(&Var2, "XM25_AISECRETARY", 24);
						iVar8 = 6;
						break;
					
					case 213:
						StringCopy(&Var2, "XM25_AIBUTLER", 24);
						iVar8 = 3;
						break;
					
					case 214:
						StringCopy(&Var2, "XM25_AIGANG", 24);
						iVar8 = 7;
						break;
					
					default:
						StringCopy(&Var2, "MICHAEL", 24);
						break;
				}
				func_38(&uLocal_112, iVar8, 0, &Var2, 0, 1);
				Global_24004 = 0;
				switch (Global_8778)
				{
					case 81:
						func_9(&uLocal_112, 81, "LOWCAAU", "LOWCA_CALL10", 2, 0, 0, 0, 0);
						break;
					
					case 13:
						func_9(&uLocal_112, 12, &Global_24006, "LES_APH2", 2, 0, 0, 0, 0);
						break;
					
					case 36:
						iVar9 = CLOCK::GET_CLOCK_HOURS();
						if (iVar9 > 17 || iVar9 < 9)
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "SHR_APH3", 2, 0, 0, 0, 0);
						}
						if (iVar9 > 8 && iVar9 < 13)
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "SHR_APH1", 2, 0, 0, 0, 0);
						}
						if (iVar9 > 12 && iVar9 < 18)
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "SHR_APH2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 17:
						if (func_8(21) && !func_8(22))
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "AMA_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, &(Global_118[Global_8778 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 20:
						if (Global_80280)
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "ANS_RBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, &(Global_118[Global_8778 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 44:
						if (func_7(126))
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "DEN_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, &(Global_118[Global_8778 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 15:
						if (!func_8(19))
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "TRA_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "TRA_APH2", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "TRA_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "TRA_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 19:
						if (!func_8(19))
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "LAM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "LAM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "LAM_APH3", 2, 0, 0, 0, 0);
						}
						break;
					
					case 14:
						if (!func_8(19))
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "JIM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(21))
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "JIM_APH3", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "JIM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "JIM_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 49:
						if (func_6(7))
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "BAR_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "BAR_APH1", 2, 0, 0, 0, 0);
						}
						break;
					
					case 85:
						iLocal_304 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iLocal_304 <= 50)
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "ANS_MWBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "ANS_MWBusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 41:
						iLocal_304 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iLocal_304 <= 50)
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "ANS_PGbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "ANS_PGbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 91:
						iLocal_304 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iLocal_304 <= 50)
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "ANS_INSbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_112, Global_8778, &Global_24006, "ANS_INSbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 86:
						func_9(&uLocal_112, Global_8778, &Global_24006, "ANS_GBusy", 2, 0, 0, 0, 0);
						break;
					
					default:
						func_9(&uLocal_112, Global_8778, &Global_24006, &(Global_118[Global_8778 /*10*/]), 2, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_9464, 31);
			}
			break;
		
		case 4:
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_78))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_78, "Remote_Engaged", &Global_21599, true);
			}
			if (SYSTEM::TIMERB() > 1500)
			{
				if (iLocal_92 == 0)
				{
					if (Global_21610 == 2)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							func_4(PLAYER::PLAYER_PED_ID(), "PHONE_CALL_NOT_CONNECTED", 24);
							iLocal_92 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_4(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_5(iParam2), 1);
}

int func_5(int iParam0)
{
	int iVar0;
	
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
	iVar0 = 0;
	return iVar0;
}

int func_6(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_114904.f_18581[iParam0 /*6*/], 3);
}

int func_7(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114904.f_9092.f_99.f_58[iParam0];
}

int func_8(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114904.f_9092.f_330[iParam0 /*6*/];
}

void func_9(var uParam0, int iParam1, char* sParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (Global_80280 || func_34(0))
	{
		if (((Global_8778 == 81 || Global_8778 == 212) || Global_8778 == 213) || Global_8778 == 214)
		{
			if (Global_1835506 == 0)
			{
				Global_1835506 = 1;
			}
			func_10(uParam0, iParam1, sParam2, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else if (Global_1835506 == 1)
		{
			func_37(uParam0, iParam1, &Global_24006, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else
		{
			func_10(uParam0, iParam1, &Global_24006, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
	}
	else
	{
		func_10(uParam0, iParam1, &Global_24006, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
	}
}

int func_10(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_33(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_23031 = 0;
	Global_22990 = 1;
	Global_22997 = 0;
	Global_22992 = 0;
	Global_23974 = 0;
	Global_23976 = 0;
	Global_23980 = 0;
	Global_22988 = 0;
	Global_23035 = 0;
	Global_23037 = 0;
	if (iParam5 == 1)
	{
		Global_22995 = 1;
	}
	else
	{
		Global_22995 = 0;
	}
	Global_2883585 = 0;
	return func_11(sParam3, iParam4, bParam8);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
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
					func_32();
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
		if (func_31(8, -1))
		{
			return 0;
		}
		Global_23059 = { Global_23053 };
		func_30();
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
			MISC::CLEAR_BIT(&Global_9465, 0);
			if (bParam2)
			{
				func_22();
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
				if (func_21())
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
			if (func_20())
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
			func_19();
			Global_22993 = bParam2;
		}
		Global_22985 = iParam1;
		StringCopy(&Global_22602, sParam0, 24);
		Global_21849 = 0;
		func_18();
		func_12();
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
		func_32();
	}
	return 0;
}

void func_12()
{
	if (!func_13())
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

int func_13()
{
	if (!Global_262145.f_28485)
	{
		return 0;
	}
	if (!Global_80280)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_17())
	{
		return 0;
	}
	if (func_14(PLAYER::PLAYER_ID()))
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

int func_14(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_16(8))
		{
			return 1;
		}
		if (Global_2733002.f_5971.f_1 > 0)
		{
			return 1;
		}
	}
	return func_15(iParam0, 20);
}

var func_15(int iParam0, int iParam1)
{
	return BitTest(Global_1892653[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_16(int iParam0)
{
	return BitTest(Global_2733002.f_5960, iParam0);
}

int func_17()
{
	return -1;
}

void func_18()
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

void func_19()
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

int func_20()
{
	if (Global_21610.f_1 == 1 || Global_21610.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_21()
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

void func_22()
{
	if (func_29(14))
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
		Global_21610 = func_23();
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

var func_23()
{
	func_24();
	return Global_114904.f_2370.f_539.f_4321;
}

void func_24()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_27(Global_114904.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_26(PLAYER::PLAYER_PED_ID());
			if (func_25(iVar0) && (!func_29(14) || Global_113852))
			{
				if (Global_114904.f_2370.f_539.f_4321 != iVar0 && func_25(Global_114904.f_2370.f_539.f_4321))
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

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return func_28(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_28(int iParam0)
{
	return Global_2339[iParam0 /*29*/];
}

bool func_29(int iParam0)
{
	return Global_44869 == iParam0;
}

void func_30()
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

bool func_31(int iParam0, int iParam1)
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

void func_32()
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

void func_33(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_22437 = { *uParam0 };
	Global_8779 = uParam1;
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

int func_34(int iParam0)
{
	if (iParam0 && Global_1575062)
	{
		if (func_35())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return Global_1575062;
}

int func_35()
{
	if (func_36())
	{
		return 1;
	}
	return Global_1575065;
	return 0;
}

int func_36()
{
	if (Global_1575062 || Global_1575068)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_37(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_33(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_23031 = 0;
	Global_22990 = 1;
	Global_22997 = 0;
	Global_22992 = 0;
	Global_23974 = 0;
	Global_23976 = 0;
	Global_23980 = 0;
	Global_22988 = 0;
	Global_23035 = 0;
	Global_23037 = 0;
	if (iParam5 == 1)
	{
		Global_22995 = 1;
	}
	else
	{
		Global_22995 = 0;
	}
	Global_2883585 = 1;
	return func_11(sParam3, iParam4, bParam8);
}

void func_38(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_39(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (Global_21842)
	{
		if (func_42())
		{
			func_40(1, 1);
		}
		else
		{
			func_40(0, 0);
		}
	}
	if (Global_21610.f_1 == 10 || Global_21610.f_1 == 9)
	{
		MISC::SET_BIT(&Global_9464, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22983 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_9463, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9463, 30);
	}
	if (!func_20())
	{
		Global_21610.f_1 = 3;
	}
}

void func_40(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_41(0))
		{
			Global_21842 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21547);
			}
			Global_21538 = { Global_21556[Global_21555 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21538);
		}
	}
	else if (Global_21842 == 1)
	{
		Global_21842 = 0;
		Global_21538 = { Global_21563[Global_21555 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21547);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21538);
		}
	}
}

int func_41(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_21610.f_1 > 3)
		{
			if (BitTest(Global_9463, 14))
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
	if (Global_21610.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_42()
{
	return BitTest(Global_1964145, 5);
}

bool func_43()
{
	return BitTest(Global_1964145, 19);
}

void func_44()
{
	float fVar0;
	
	MISC::SET_GAME_PAUSED(true);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	fVar0 = 0f;
	while ((!PAD::IS_CONTROL_JUST_PRESSED(2, 201) && !PAD::IS_CONTROL_JUST_PRESSED(2, 202)) || fVar0 < 1f)
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, false, -1, 0, 0, true, 0);
		SYSTEM::WAIT(0);
		fVar0 = (fVar0 + MISC::GET_FRAME_TIME());
	}
	MISC::SET_GAME_PAUSED(false);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		Global_113846 = 1;
	}
}

void func_45(int iParam0)
{
	float fVar0;
	char* sVar1;
	
	MISC::SET_GAME_PAUSED(true);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	fVar0 = 0f;
	while (!PAD::IS_CONTROL_JUST_PRESSED(2, 201) || fVar0 < 1f)
	{
		sVar1 = func_46(iParam0, 119);
		HUD::SET_WARNING_MESSAGE("FBR_GENERIC", 16384, 0, false, -1, "FBR_DIR_MODE", sVar1, true, 0);
		SYSTEM::WAIT(0);
		fVar0 = (fVar0 + MISC::GET_FRAME_TIME());
	}
	MISC::SET_GAME_PAUSED(false);
}

char* func_46(int iParam0, int iParam1)
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
			break;
		
		case 2:
			return "FBR_BLK_RNNNG";
			break;
		
		case 13:
			return "FBR_BLK_DEAD";
			break;
		
		case 3:
			return "FBR_BLK_MISS";
			break;
		
		case 5:
			return "FBR_BLK_SHOP";
			break;
		
		case 4:
			return "FBR_BLK_CUTS";
			break;
		
		case 6:
			return "FBR_BLK_WANT";
			break;
		
		case 7:
			return "FBR_BLK_ONLI";
			break;
		
		case 8:
			return "FBR_BLK_ACT";
			break;
		
		case 9:
			return "FBR_BLK_LOC";
			break;
		
		case 10:
			return "FBR_BLK_VEH";
			break;
		
		case 11:
			return "FBR_BLK_PARA";
			break;
		
		case 12:
			return "FBR_BLK_FALL";
			break;
		
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

int func_47(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 13;
	}
	if (bParam1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
		{
			return 2;
		}
	}
	if (func_84() && !func_29(14))
	{
		return 3;
	}
	if (func_83())
	{
		return 3;
	}
	if (func_82())
	{
		return 8;
	}
	if (bParam1)
	{
		if (func_81())
		{
			return 8;
		}
	}
	if (Global_99324)
	{
		return 3;
	}
	if (Global_34033)
	{
		return 8;
	}
	if (Global_33924)
	{
		return 8;
	}
	if (Global_2883694)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2883693)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("creator")) > 0)
	{
		return 3;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_80(bParam1))
	{
		return 3;
	}
	if (PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 12;
	}
	if (func_79(Global_113928, 256))
	{
		return 3;
	}
	if (((func_78() || func_77()) || func_68()) || func_67())
	{
		return 5;
	}
	if (func_67())
	{
		return 5;
	}
	if (func_66())
	{
		return 5;
	}
	if (func_65())
	{
		return 5;
	}
	if (func_77())
	{
		return 5;
	}
	if (func_64() && !Global_113851)
	{
		return 8;
	}
	if (func_68())
	{
		return 5;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_63())
	{
		return 4;
	}
	if (func_62())
	{
		return 4;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_51(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
			{
				return 11;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || Global_113951)
			{
				return 10;
			}
		}
	}
	if (Global_34031)
	{
		return 8;
	}
	if (Global_80278)
	{
		return 4;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
		{
			return 6;
		}
		if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		if (TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
		{
			return 8;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 7;
	}
	if (func_50())
	{
		return 8;
	}
	if (Global_33778)
	{
		return 3;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return 4;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, false, true, 0))
	{
		return 9;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	if (bParam1)
	{
		if (!func_48(0))
		{
			return 8;
		}
	}
	if (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	return 0;
}

int func_48(bool bParam0)
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if ((((((((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		return 0;
	}
	if ((((((func_62() || Global_24390.f_4) || func_49()) || MISC::IS_MEMORY_CARD_IN_USE()) || MISC::IS_AUTO_SAVE_IN_PROGRESS()) || func_63()) || func_83())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
	}
	return 1;
}

int func_49()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_99882.f_44 == 1;
	}
	return 0;
}

bool func_50()
{
	return Global_62191;
}

int func_51(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, false, true, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return 5;
	}
	Var0 = { func_61(PLAYER::PLAYER_ID()) };
	if (Global_113991[10 /*10*/].f_1)
	{
		if (SYSTEM::VDIST2(Var0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 3;
		}
	}
	if (func_8(2) && !func_8(17))
	{
		if (SYSTEM::VDIST2(Var0, -59.96629f, -1099.005f, 25.52088f) < 8f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, false, true))
			{
				return 9;
			}
		}
	}
	if (SYSTEM::VDIST2(Var0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, false, true))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, false, true))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, false, true))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, false, true))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(Var0, 128.83f, -1297.98f, 29.3f) < 2f || SYSTEM::VDIST2(Var0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 9;
	}
	if (SYSTEM::VDIST2(Var0, 1081.951f, -1976.762f, 30.47218f) < 6f && func_60(26))
	{
		return 9;
	}
	if (!iLocal_25)
	{
		func_52(iParam0);
	}
	iVar3 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_113866 || iVar3 == Global_113867) || iVar3 == Global_113868)
	{
		return 9;
	}
	else if (iVar3 == Global_113857)
	{
		return 9;
	}
	else if (iVar3 == Global_113858)
	{
		return 9;
	}
	else if (iVar3 == Global_113861)
	{
		return 9;
	}
	else if (iVar3 == Global_113860)
	{
		return 9;
	}
	else if (iVar3 == Global_113862)
	{
		return 9;
	}
	else if (iVar3 == Global_113863)
	{
		return 9;
	}
	else if (iVar3 == Global_113864)
	{
		return 9;
	}
	else if (iVar3 == Global_113865)
	{
		return 9;
	}
	else if (iVar3 == Global_113869)
	{
		return 9;
	}
	else if (iVar3 == Global_113870)
	{
		return 9;
	}
	else if (iVar3 == Global_113871)
	{
		return 9;
	}
	else if (iVar3 == Global_113872)
	{
		return 9;
	}
	else if (iVar3 == Global_113873)
	{
		return 9;
	}
	else if ((iVar3 == Global_113874 || iVar3 == Global_113875) && func_8(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= (19 - 1))
	{
		if (iVar3 == Global_113876[iVar4])
		{
			return 9;
		}
		iVar4++;
	}
	return 0;
}

void func_52(var uParam0)
{
	int iVar0;
	
	uParam0 = uParam0;
	func_55(24, &Global_113857);
	func_55(47, &Global_113858);
	func_55(10, &Global_113866);
	func_55(9, &Global_113867);
	func_55(8, &Global_113868);
	func_55(21, &Global_113869);
	func_55(11, &Global_113870);
	func_55(18, &Global_113874);
	func_55(19, &Global_113875);
	Global_113861 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_113860 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_113862 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_113863 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_113864 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_113865 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_113871 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_113872 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_113873 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_113876[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS(func_53(iVar0));
		iVar0++;
	}
	iLocal_25 = 1;
}

Vector3 func_53(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_54(int iParam0)
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

var func_55(int iParam0, var uParam1)
{
	struct<5> Var0;
	
	Var0 = { func_56(iParam0) };
	*uParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_56(int iParam0)
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_59(1, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_59(2, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_59(3, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_59(4, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_59(5, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_59(6, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_59(7, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1312440[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_59(35, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_59(36, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_59(37, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_59(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_59(39, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_59(40, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_59(41, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_59(42, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_59(43, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var5 = { func_59(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_59(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_59(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_59(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_59(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_59(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_59(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_59(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_59(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_59(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_59(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_59(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_59(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_59(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_59(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_59(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_59(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_59(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_59(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_59(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_59(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_59(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_59(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_59(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_59(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_59(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_59(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_59(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_59(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_59(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_59(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_59(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_59(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_59(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_59(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_59(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_59(91, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_59(97, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var5 = { func_59(103, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var5 = { func_59(104, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var5 = { func_59(105, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var5 = { func_59(106, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var5 = { func_59(107, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var5 = { func_59(108, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var5 = { func_59(109, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var5 = { func_59(110, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var5 = { func_59(111, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var5 = { func_59(112, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var5 = { func_59(113, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var5 = { func_59(114, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var5 = { func_59(103, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var5 = { func_59(106, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var5 = { func_59(109, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var5 = { func_59(112, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
		case 212:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 223:
			Var0 = { 2920f, 4470f, -100f };
			Var0.f_3 = "sf_dlc_warehouse_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 197:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 1103.562f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 214:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 215:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 216:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 217:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 218:
			Var0 = { -2000f, 1113.4f, 25.7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 219:
			Var0 = { -1350f, 160f, -99.2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 220:
			Var0 = { 1.1f, -705.6f, 16.1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 221:
			Var0 = { -1010f, -70f, -99.4f };
			Var0.f_3 = "sf_dlc_studio_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 222:
			Var0 = { 1550f, 250f, -50f };
			Var0.f_3 = "h4_dlc_int_02_h4";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 224:
			Var0 = { -935.7f, -2992.2f, 13.9f };
			Var0.f_3 = "v_hanger";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 225:
			Var0 = { 730f, -2990f, -39f };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 226:
			Var0 = { 152.3f, -1004.4f, -97.8f };
			Var0.f_3 = "v_motel_mp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 227:
			Var0 = { 170f, 5190f, 10f };
			Var0.f_3 = "xs_x18_int_mod2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 228:
			Var0 = { 850f, -3000f, -50f };
			Var0.f_3 = "reh_dlc_int_04_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 229:
			Var0 = { 495f, -2560f, -50f };
			Var0.f_3 = "xm3_DLC_INT_04_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 230:
			Var0 = { 570f, -415.1f, -69.6f };
			Var0.f_3 = "xm3_DLC_INT_03_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 231:
			Var0 = { 984.4f, -95.4f, 76.8f };
			Var0.f_3 = "bkr_biker_dlc_int_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 232:
			Var0 = { -880f, -2770f, -49f };
			Var0.f_3 = "M23_1_dlc_int_01_M23_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 233:
			Var0 = { 800f, -3000f, -69f };
			Var0.f_3 = "reh_dlc_int_03_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 234:
			Var0 = { 930.1f, -2269.9f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 235:
			Var0 = { 930.1f, -2240.1f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 236:
			Var0 = { 930.1f, -2213.2f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 237:
			Var0 = { 930.1f, -2183.4f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 238:
			Var0 = { 1000f, -2200f, -50f };
			Var0.f_3 = "m23_2_dlc_int_warehouse2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 239:
			Var0 = { 1000f, -2230f, -50f };
			Var0.f_3 = "m23_2_dlc_int_warehouse2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 240:
			Var0 = { 1220f, -2280f, -49f };
			Var0.f_3 = "m23_2_int_warehouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 241:
			Var0 = { -1421.015f, -3012.587f, -80f };
			Var0.f_3 = "ba_dlc_int_03_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 242:
			Var0 = { -2000f, 1113.2f, 27.6f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 243:
			Var0 = { Global_4718592.f_231597[0 /*160*/].f_16 };
			Var0.f_3 = func_58(&(Global_4718592.f_231597[0 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 244:
			Var0 = { Global_4718592.f_231597[1 /*160*/].f_16 };
			Var0.f_3 = func_58(&(Global_4718592.f_231597[1 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 245:
			Var0 = { Global_4718592.f_231597[2 /*160*/].f_16 };
			Var0.f_3 = func_58(&(Global_4718592.f_231597[2 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 246:
			Var0 = { Global_4718592.f_231597[3 /*160*/].f_16 };
			Var0.f_3 = func_58(&(Global_4718592.f_231597[3 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 247:
			Var0 = { Global_4718592.f_231597[4 /*160*/].f_16 };
			Var0.f_3 = func_58(&(Global_4718592.f_231597[4 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 248:
			Var0 = { -196.14f, -580.65f, 135f };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = "imp_dt1_02_cargarage_a";
			break;
	}
	switch (iParam0)
	{
		case 249:
			Var0 = { -24.4f, -73.8f, -75f };
			Var0.f_3 = "m25_1_int_tycoon_studio_lo";
			Var0.f_4 = "m25_1_int_tycoon_studio_lo";
			break;
		
		case 250:
			Var0 = { 60.37f, -80.918f, -75f };
			Var0.f_3 = "m25_1_int_tycoon_studio_mid";
			Var0.f_4 = "m25_1_int_tycoon_studio_mid";
			break;
	}
	if (func_57(Var0))
	{
	}
	return Var0;
}

int func_57(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_58(var uParam0)
{
	return uParam0;
}

struct<6> func_59(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_96389[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_93156)
	{
		if (Global_93156[iVar0 /*5*/] != -1)
		{
			if (Global_80551.f_109[Global_93156[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_61(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

bool func_62()
{
	return Global_1575090;
}

int func_63()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_64()
{
	return MISC::GET_GAME_TIMER() <= Global_24529.f_6481 + 100;
}

bool func_65()
{
	return BitTest(Global_80529, 9);
}

bool func_66()
{
	return BitTest(Global_80529, 8);
}

int func_67()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (((((((((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_intro", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_enterchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_exitchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_d", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_intro", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_d", 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_68()
{
	int iVar0;
	
	if (func_78())
	{
		iVar0 = 0;
		while (iVar0 < 65)
		{
			if (func_69(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_69(int iParam0)
{
	return func_70(iParam0, 20, 1);
}

int func_70(int iParam0, int iParam1, bool bParam2)
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
		if (func_76() == 0)
		{
			return BitTest(func_71(func_75(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_114904.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 16715)
	{
		iVar0 = func_72(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_72(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_73(uParam1));
}

int func_73(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_74();
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

int func_74()
{
	return Global_1574927;
}

int func_75(int iParam0)
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

int func_76()
{
	return Global_33775;
}

bool func_77()
{
	return Global_102481.f_418 > 0;
}

bool func_78()
{
	return Global_102481.f_417 > 0;
}

bool func_79(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_80(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_80529, 0);
}

bool func_81()
{
	return Global_102468.f_1;
}

bool func_82()
{
	return Global_80548;
}

int func_83()
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

int func_84()
{
	if (Global_44869 == 15)
	{
		return 0;
	}
	return 1;
}

void func_85(int iParam0, int iParam1)
{
	MISC::SET_BIT(&Global_34027, iParam0);
	Global_34028 = iParam1;
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2339[iParam0 /*29*/].f_24[iParam1];
}

void func_87(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_88()
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

int func_89(int iParam0)
{
	if ((Global_24098 || Global_24097) || Global_24099)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_118[iParam0 /*10*/].f_8 != 198)
	{
		if (Global_21610.f_1 == 10)
		{
			if (Global_8778 == iParam0)
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
	return 0;
}

int func_90()
{
	return func_91(PLAYER::PLAYER_ID());
}

int func_91(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_92()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21599, true);
	}
}

void func_93()
{
	if (Global_21588 == 0)
	{
		if (func_176(2, Global_21579, 0))
		{
			MISC::CLEAR_BIT(&Global_9464, 0);
			iLocal_89 = 0;
			func_174();
			Global_21588 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "GET_CURRENT_SELECTION");
			iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_77 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
			if (func_127(Global_8778))
			{
				if (iLocal_77 == 0)
				{
					if (bLocal_300)
					{
						Global_24098 = 0;
						Global_24097 = 0;
						Global_24099 = 1;
						func_105();
					}
					else
					{
						Global_24098 = 0;
						Global_24097 = 0;
						Global_24099 = 0;
						func_105();
					}
				}
				if (iLocal_77 == 1)
				{
					if (bLocal_300)
					{
						Global_24098 = 0;
						Global_24097 = 0;
						Global_24099 = 0;
						func_105();
					}
					else if (func_95(Global_8778, Global_21610))
					{
						func_94();
						iLocal_89 = 1;
					}
					else
					{
						Global_24098 = 1;
						Global_24097 = 0;
						Global_24099 = 0;
						func_105();
					}
				}
				if (iLocal_77 == 2)
				{
					if (func_95(Global_8778, Global_21610))
					{
						func_94();
						iLocal_89 = 1;
					}
					else
					{
						Global_24098 = 1;
						Global_24097 = 0;
						Global_24099 = 0;
						func_105();
					}
				}
			}
			else
			{
				if (iLocal_77 == 0)
				{
					if (bLocal_300)
					{
						Global_24098 = 0;
						Global_24097 = 0;
						Global_24099 = 1;
						func_105();
					}
					else if (func_95(Global_8778, Global_21610))
					{
						func_94();
						iLocal_89 = 1;
					}
					else
					{
						Global_24098 = 1;
						Global_24097 = 0;
						Global_24099 = 0;
						func_105();
					}
				}
				if (iLocal_77 == 1)
				{
					if (func_95(Global_8778, Global_21610))
					{
						func_94();
						iLocal_89 = 1;
					}
					else
					{
						Global_24098 = 1;
						Global_24097 = 0;
						Global_24099 = 0;
						func_105();
					}
				}
			}
		}
	}
}

void func_94()
{
	func_173(Global_21591, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (Global_21598)
	{
		func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9463, 17);
	func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_270", 0, 0, 0, 0);
	func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_271", 0, 0, 0, 0);
	func_173(Global_21591, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_171(Global_21591, "SET_HEADER", "CELL_269", 0, 0, 0, 0);
}

int func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_104();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if (!func_29(6) && !func_29(7))
	{
		if (func_96(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_104();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if (!func_101(6))
	{
		iVar1 = func_99(iParam0);
		iVar2 = func_99(iParam1);
		if (iVar1 != 7 && iVar2 != 7)
		{
			iVar3 = func_98(iVar1, iVar2);
			if (iVar3 != 10)
			{
				iVar4 = func_97(iVar3);
				if (iVar4 == 3 || iVar4 == 4)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_97(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_98260[iParam0 /*2*/];
	}
	return -1;
}

int func_98(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_99(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_104())
	{
		return func_100(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_104())
	{
		return 6;
	}
	if (iParam0 == 222)
	{
		return 6;
	}
	return 6;
}

var func_100(int iParam0)
{
	return Global_2339[iParam0 /*29*/].f_11;
}

int func_101(int iParam0)
{
	if (Global_44869 == 15)
	{
		return 0;
	}
	if (func_102(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_102(int iParam0)
{
	return func_103(iParam0, Global_44869);
}

int func_103(int iParam0, int iParam1)
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

int func_104()
{
	if (Global_33775 == 0 || Global_33775 == 2)
	{
		return 221;
	}
	return 161;
}

void func_105()
{
	if (Global_21610.f_1 > 3)
	{
		Global_21610.f_1 = 10;
		func_126();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!func_125())
					{
						func_124();
					}
				}
				else if (func_123() == 0)
				{
					func_124();
				}
			}
		}
		if (Global_10285[Global_21610 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_122();
			func_173(Global_21591, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if (func_86(Global_8778, Global_21610) == 0)
	{
		func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8778 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
	}
	else
	{
		func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), "CELL_211", &(Global_2339[Global_8778 /*29*/].f_3), 0);
	}
	func_108();
	if (Global_80280)
	{
		func_106(1918, 1, -1);
	}
}

void func_106(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_71(iParam0, func_73(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_107(iParam0, iVar0, iParam2, 1);
}

void func_107(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 16715)
	{
		iVar0 = func_72(iParam0, uParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

void func_108()
{
	char cVar0[24];
	
	if (Global_21593 == 1)
	{
		return;
	}
	if (Global_21610.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21591))
	{
		if (Global_80280)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_21610.f_1)
	{
		case 6:
			func_173(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_121(Global_10085);
			if (Global_10085 == 1)
			{
				func_173(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21614), -1082130432, -1082130432, -1082130432);
				Global_21590 = Global_21614;
			}
			else
			{
				func_173(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21615), -1082130432, -1082130432, -1082130432);
				Global_21590 = Global_21615;
			}
			if (Global_21598)
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21844 == 0)
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9463, 17);
			}
			else if (Global_80280)
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9463, 17);
			}
			else
			{
				if (Global_21843 == 1)
				{
					if (Global_21598)
					{
						func_170(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_170(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_21598)
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_9463, 17);
			}
			if (Global_80280)
			{
				Global_21590 = Global_21614;
				if (func_117() && BitTest(Global_9465, 9))
				{
					func_112(0);
				}
				func_173(Global_21591, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
				func_173(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_173(Global_21591, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_170(Global_21591, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
			if (BitTest(Global_9463, 20))
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21598)
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21553)
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_21609 == 1)
			{
				func_111();
				func_173(Global_21591, "SET_THEME", SYSTEM::TO_FLOAT(Global_114904.f_14058[Global_21610 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22996)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22998);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_87("CELL_300");
					func_87("CELL_217");
					func_87("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_86(Global_8778, Global_21610) == 0)
				{
					func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_8778 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), "CELL_217", &(Global_2339[Global_8778 /*29*/].f_3), 0);
				}
				func_173(Global_21591, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22983 == 4 || Global_22983 == 3)
			{
				func_173(Global_21591, "SET_THEME", SYSTEM::TO_FLOAT(Global_114904.f_14058[Global_21610 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_111();
				if (Global_22996)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22998);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_87("CELL_300");
					func_87("CELL_219");
					func_87("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_23241)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_86(Global_8778, Global_21610) == 0)
					{
						func_173(Global_21591, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8778 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_173(Global_21591, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), &cVar0, &(Global_2339[Global_8778 /*29*/].f_3), 0);
					}
				}
				func_173(Global_21591, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_109();
			break;
		
		default:
			break;
	}
}

void func_109()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21591))
	{
		func_110();
		if (Global_21609 == 1)
		{
			if (Global_21598)
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_23030)
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_9463, 20))
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21598)
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
		}
		else
		{
			func_170(Global_21591, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9463, 17);
			if (BitTest(Global_9463, 20))
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21598)
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_21553)
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_110()
{
	if (Global_80280)
	{
		func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9463, 17);
	}
}

void func_111()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21610 == 0)
		{
			switch (Global_114904.f_14058[Global_21610 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_21610 == 1)
		{
			switch (Global_114904.f_14058[Global_21610 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_21610 == 2)
		{
			switch (Global_114904.f_14058[Global_21610 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_21610 == 3)
		{
			switch (Global_4525120)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_112(bool bParam0)
{
	int iVar0;
	
	MISC::SET_BIT(&Global_9465, 9);
	if (bParam0)
	{
		func_173(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	func_116();
	func_115();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_10011[iVar0] = 0;
		Global_10048[iVar0] = 0;
		iVar0++;
	}
	func_113(10, "CELL_16", 0, "appSettings", 24);
	if (bParam0)
	{
		func_173(Global_21591, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
		func_173(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
	}
}

void func_113(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	func_114(iParam0, sParam1, iParam2, sParam3, iParam4, 1, 1, 0, 0);
	Global_10048[iParam2] = 1;
	Global_10011[iParam2] = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iParam0 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iParam0 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_87(&(Global_9470[iParam0 /*15*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_114(int iParam0, char* sParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_9470[iParam0 /*15*/]), sParam1, 16);
	Global_9470[iParam0 /*15*/].f_4 = uParam2;
	StringCopy(&(Global_9470[iParam0 /*15*/].f_5), sParam3, 16);
	Global_9470[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_9470[iParam0 /*15*/].f_10 = uParam4;
	Global_9470[iParam0 /*15*/].f_11 = iParam5;
	Global_9470[iParam0 /*15*/].f_12 = iParam6;
	Global_9470[iParam0 /*15*/].f_13 = iParam7;
	Global_9470[iParam0 /*15*/].f_14 = iParam8;
	if (Global_9470[iParam0 /*15*/].f_12 == 0)
	{
		Global_9470[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_9470[iParam0 /*15*/].f_13 == 0)
	{
		Global_9470[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_9470[iParam0 /*15*/].f_14 == 0)
	{
		Global_9470[iParam0 /*15*/].f_14 = 0;
	}
}

void func_115()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_10048[iVar0] = 0;
		iVar0++;
	}
}

void func_116()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_87(&(Global_9470[10 /*15*/]));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar0++;
	}
	func_173(Global_21591, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_173(Global_21591, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
}

int func_117()
{
	if (func_118())
	{
		return 1;
	}
	return 0;
}

bool func_118()
{
	return (func_119() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_119()
{
	return func_120(9539, -1);
}

bool func_120(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_74();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_121(int iParam0)
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
	
	Global_24052 = 0;
	Global_10085 = iParam0;
	func_115();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_29(14))
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_9470[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_9470[iVar1 /*15*/].f_4)
					{
						if (Global_10048[iVar0] == 0)
						{
							Global_10011[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_9464, 3))
								{
									iVar2 = 42;
									Global_21846 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21846 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_87(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2696959)
							{
								if (iVar1 == 14)
								{
									func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24046), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_10048[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_9470[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_9470[iVar1 /*15*/].f_4)
					{
						if (Global_10048[iVar0] == 0)
						{
							Global_10011[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_114904.f_14148[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_114904.f_14148[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_114904.f_14148[iVar3 /*104*/].f_99[Global_21610] == 1)
											{
												Global_24052++;
											}
										}
									}
									iVar3++;
								}
								func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24052), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_80280)
								{
									iVar4 = 0;
									iVar4 = Global_4521273;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4521275[iVar5 /*296*/].f_24 != 0)
										{
											if (Global_4521275[iVar5 /*296*/].f_28 == 0)
											{
												if (Global_4521275[iVar5 /*296*/].f_291[Global_21610] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21610)
									{
										case 0:
											iVar6 = Global_46105;
											break;
										
										case 1:
											iVar6 = Global_46106;
											break;
										
										case 2:
											iVar6 = Global_46107;
											break;
										
										default:
											break;
									}
									func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24046), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_87(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9469);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_9464, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_87(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_9464, 3))
								{
									iVar8 = 42;
									Global_21846 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21846 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_87(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_87(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 24 && MISC::ARE_STRINGS_EQUAL(&(Global_9470[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_9464, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_87(&(Global_9470[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_9470[iVar1 /*15*/].f_10 == 57 && iVar1 == 24)
							{
								iVar9 = 0;
								iVar9 = Global_1881981.f_1;
								func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9470[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_9470[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_10048[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_122()
{
	if (Global_10285[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_10285[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_10285[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_10285[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_10285[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_10285[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_9463, 25);
	MISC::SET_BIT(&Global_9464, 11);
}

int func_123()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21610.f_1 == 10 || Global_21610.f_1 == 9)
		{
			if (Global_21553 == 0)
			{
				if (Global_8778 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_22983 != 2)
						{
						}
					}
				}
			}
		}
		if (func_29(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(BitTest(Global_4718592.f_38, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926461))))
		{
			return 0;
		}
		if (Global_113952)
		{
			return 0;
		}
	}
	if (Global_80280)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4525122 || iVar2 == 1)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_114904.f_14058.f_89)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_125() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_80280)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 1);
			if (Global_80280)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_21553)
			{
				if (Global_8778 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
							}
							else
							{
								if (Global_80280)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_9463, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_125()
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_126()
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_21563[Global_21555 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_21550 = 1;
	}
}

int func_127(int iParam0)
{
	int iVar0;
	
	if (func_128(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_114904.f_7695.f_650)
	{
		if (Global_114904.f_7695.f_199[iVar0 /*15*/].f_6 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114904.f_7695.f_136)
	{
		if (Global_114904.f_7695[iVar0 /*15*/].f_6 == iParam0)
		{
			if (BitTest(Global_114904.f_7695[iVar0 /*15*/].f_1, 7))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = Global_93156[iVar0 /*5*/];
		if (iVar1 != -1)
		{
			iVar2 = -1;
			iVar2 = Global_80551.f_109[Global_93156[iVar0 /*5*/] /*4*/];
			if (iVar2 != -1)
			{
				if (func_129(Global_93192[iVar2 /*34*/].f_12, iParam0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_129(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 19:
			return func_131(uParam0, 8);
			break;
		
		case 14:
			return func_131(uParam0, 16);
			break;
		
		case 17:
			return func_131(uParam0, 32);
			break;
	}
	return func_130(uParam0, iParam1);
}

int func_130(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			return BitTest(uParam0, iParam1);
		
		default:
	}
	return 0;
}

bool func_131(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_132()
{
	if (Global_21588 == 0)
	{
		if (func_176(2, Global_21579, 0))
		{
			MISC::CLEAR_BIT(&Global_9464, 0);
			func_174();
			Global_21588 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "GET_CURRENT_SELECTION");
			iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_77 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
			if (iLocal_77 == 0)
			{
				Global_24093[Global_21610] = 1;
				iLocal_88 = 0;
				Global_24098 = 0;
				Global_24097 = 1;
				Global_24099 = 0;
				func_105();
			}
			else
			{
				iLocal_89 = 0;
				func_147();
			}
		}
	}
}

void func_133(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_113541 && iParam1)
	{
		if (func_137(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(false);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_114904.f_20417.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_114904.f_20417[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_114904.f_20417.f_145 - 2))
			{
				func_136(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_135((Global_114904.f_20417.f_145 - 1));
			Global_114904.f_20417.f_145 = (Global_114904.f_20417.f_145 - 1);
			func_134();
			return;
		}
		iVar0++;
	}
}

void func_134()
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

void func_135(int iParam0)
{
	StringCopy(&(Global_114904.f_20417[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_114904.f_20417[iParam0 /*16*/].f_4), "", 16);
	Global_114904.f_20417[iParam0 /*16*/].f_8 = 0;
	Global_114904.f_20417[iParam0 /*16*/].f_9 = 0;
	Global_114904.f_20417[iParam0 /*16*/].f_11 = 0;
	Global_114904.f_20417[iParam0 /*16*/].f_10 = -1;
	Global_114904.f_20417[iParam0 /*16*/].f_12 = 0;
	Global_114904.f_20417[iParam0 /*16*/].f_13 = 0;
	Global_114904.f_20417[iParam0 /*16*/].f_14 = 0;
	Global_114904.f_20417[iParam0 /*16*/].f_15 = 0;
}

void func_136(int iParam0, int iParam1)
{
	Global_114904.f_20417[iParam0 /*16*/] = { Global_114904.f_20417[iParam1 /*16*/] };
	Global_114904.f_20417[iParam0 /*16*/].f_4 = { Global_114904.f_20417[iParam1 /*16*/].f_4 };
	Global_114904.f_20417[iParam0 /*16*/].f_8 = Global_114904.f_20417[iParam1 /*16*/].f_8;
	Global_114904.f_20417[iParam0 /*16*/].f_10 = Global_114904.f_20417[iParam1 /*16*/].f_10;
	Global_114904.f_20417[iParam0 /*16*/].f_9 = Global_114904.f_20417[iParam1 /*16*/].f_9;
	Global_114904.f_20417[iParam0 /*16*/].f_11 = Global_114904.f_20417[iParam1 /*16*/].f_11;
	Global_114904.f_20417[iParam0 /*16*/].f_12 = Global_114904.f_20417[iParam1 /*16*/].f_12;
	Global_114904.f_20417[iParam0 /*16*/].f_13 = Global_114904.f_20417[iParam1 /*16*/].f_13;
	Global_114904.f_20417[iParam0 /*16*/].f_14 = Global_114904.f_20417[iParam1 /*16*/].f_14;
	Global_114904.f_20417[iParam0 /*16*/].f_15 = Global_114904.f_20417[iParam1 /*16*/].f_15;
}

bool func_137(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_138(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_139(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_139(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_134();
	}
}

int func_140(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113544))
	{
		return 1;
	}
	if (func_141(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_141(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_114904.f_20417.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_114904.f_20417[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_142(int iParam0)
{
	return 0;
	if (((iParam0 == 92 || iParam0 == 68) || iParam0 == 79) || iParam0 == 34)
	{
		return 0;
	}
	return 1;
}

int func_143(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	return 0;
	iVar0 = func_104();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if ((Global_98251 != -1 && BitTest(Global_93192[Global_98251 /*34*/].f_15, 15)) && BitTest(Global_98252, iParam1))
	{
		if (Global_98250 != 5 || func_146() == Global_98251)
		{
			if (!func_145(12))
			{
				if (func_144(iParam0, iParam1, &iVar1) && func_97(iVar1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_144(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_99(iParam0);
	iVar1 = func_99(iParam1);
	if (iVar0 != 7 && iVar1 != 7)
	{
		*uParam2 = func_98(iVar0, iVar1);
		if (*uParam2 != 10)
		{
			return 1;
		}
	}
	*uParam2 = 10;
	return 0;
}

bool func_145(int iParam0)
{
	return BitTest(Global_98259, iParam0);
}

int func_146()
{
	return Global_80543;
}

void func_147()
{
	SYSTEM::SETTIMERA(0);
	if (Global_21610.f_1 > 3)
	{
		Global_21610.f_1 = 8;
	}
	if (Global_21598)
	{
		func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9463, 17);
	iLocal_88 = 1;
	func_173(Global_21591, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_127(Global_8778))
	{
		if (bLocal_300)
		{
			func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Global_9301[iLocal_302 /*16*/].f_8), 0, 0, 0, 0);
			func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_301)
			{
				if (func_148(Global_8778, Global_21610))
				{
					func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_95(Global_8778, Global_21610))
				{
					func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
		else
		{
			func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_301)
			{
				if (func_148(Global_8778, Global_21610))
				{
					func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_95(Global_8778, Global_21610))
				{
					func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
	}
	else if (bLocal_300)
	{
		func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Global_9301[iLocal_302 /*16*/].f_8), 0, 0, 0, 0);
		if (bLocal_301)
		{
			if (func_148(Global_8778, Global_21610))
			{
				func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
			}
			if (func_95(Global_8778, Global_21610))
			{
				func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
			}
		}
	}
	else if (bLocal_301)
	{
		if (func_148(Global_8778, Global_21610))
		{
			func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
		}
		if (func_95(Global_8778, Global_21610))
		{
			func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
		}
	}
	func_173(Global_21591, "DISPLAY_VIEW", 18f, SYSTEM::TO_FLOAT(iLocal_74), -1082130432, -1082130432, -1082130432);
	func_171(Global_21591, "SET_HEADER", &(Global_2339[Global_8778 /*29*/].f_3), 0, 0, 0, 0);
}

int func_148(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_104();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if ((iParam0 == 1 && iParam1 == 0) || (iParam0 == 0 && iParam1 == 1))
	{
		if (func_8(90) && !func_8(20))
		{
			return 0;
		}
	}
	if (!func_101(6))
	{
		if (func_144(iParam0, iParam1, &iVar1) && func_97(iVar1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_149()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 22, true);
	}
	if (func_176(2, Global_21579, 0))
	{
		func_174();
		Global_21588 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "GET_CURRENT_SELECTION");
		iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
		{
			SYSTEM::WAIT(0);
		}
		iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
		iLocal_79 = Global_10271[iVar0];
		sLocal_81[0] = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_10188[iLocal_79 /*5*/]));
		if (MISC::ARE_STRINGS_EQUAL(sLocal_81[0], "*"))
		{
			cLocal_83 = { Global_10254[Global_21610 /*4*/] };
			iLocal_80 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_83);
		}
		else if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_83) < 14)
		{
			StringConCat(&cLocal_83, sLocal_81[0], 16);
			iLocal_80++;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_HEADER");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(&cLocal_83, -1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (func_176(2, 178, 0))
	{
		func_92();
		Global_21588 = 1;
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_83) > 0)
		{
			StringCopy(&cLocal_83, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 0, (iLocal_80 - 1)), 16);
			iLocal_80 = (iLocal_80 - 1);
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_HEADER");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(&cLocal_83, -1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (func_176(2, Global_21582, 0))
	{
		if (!func_159())
		{
			func_174();
			Global_10254[Global_21610 /*4*/] = { cLocal_83 };
			Global_8778 = 144;
			iLocal_280 = 0;
			if (Global_21610.f_1 > 3)
			{
				Global_21610.f_1 = 10;
				func_126();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!func_125())
							{
								func_124();
							}
						}
						else if (func_123() == 0)
						{
							func_124();
						}
					}
				}
			}
			iVar1 = 0;
			iLocal_93 = 0;
			iVar3 = func_104();
			while (iVar1 < iVar3)
			{
				iVar4 = iVar1;
				if (iVar4 != 146)
				{
					sVar2 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_118[iVar1 /*10*/].f_4));
					if (MISC::ARE_STRINGS_EQUAL(sVar2, &cLocal_83))
					{
						if ((func_158(iVar4, Global_21610) == 1 || func_158(iVar4, Global_21610) == 2) || MISC::ARE_STRINGS_EQUAL(sVar2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_118[130 /*10*/].f_4))))
						{
							Global_8778 = iVar4;
						}
						else
						{
							iLocal_93 = 1;
						}
					}
				}
				iVar1++;
			}
			if ((Global_8778 == 144 && iLocal_280 == 0) && iLocal_93 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(&cLocal_83, -1);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_87("CELL_300");
				func_87("CELL_211");
				func_87("CELL_195");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_173(Global_21591, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_280 = 0;
				iVar5 = 0;
				while (iVar5 < 37)
				{
					sVar6 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_8782[iVar5 /*14*/]));
					if (MISC::ARE_STRINGS_EQUAL(sVar6, &cLocal_83))
					{
						iLocal_280 = 1;
						cLocal_281 = { Global_8782[iVar5 /*14*/].f_4 };
						Local_285 = { Global_8782[iVar5 /*14*/].f_8 };
					}
					iVar5++;
				}
				if (iLocal_280 == 0)
				{
					iLocal_87 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_83);
					if (iLocal_87 > 6)
					{
						StringCopy(&(uLocal_291[0]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 0, 1), 4);
						StringCopy(&(uLocal_291[1]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 1, 2), 4);
						StringCopy(&(uLocal_291[2]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 2, 3), 4);
						StringCopy(&(uLocal_291[3]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 3, 4), 4);
						StringCopy(&(uLocal_291[4]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 4, 5), 4);
						StringCopy(&(uLocal_291[5]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 5, 6), 4);
						if (((MISC::ARE_STRINGS_EQUAL(&(uLocal_291[0]), "1") && MISC::ARE_STRINGS_EQUAL(&(uLocal_291[1]), "9")) && MISC::ARE_STRINGS_EQUAL(&(uLocal_291[2]), "9")) && MISC::ARE_STRINGS_EQUAL(&(uLocal_291[3]), "9"))
						{
							iVar7 = func_157(&(uLocal_291[4]));
							iVar8 = func_157(&(uLocal_291[5]));
							func_156(iVar7, iVar8);
							iLocal_280 = 1;
						}
						if (iLocal_280 == 0)
						{
							if (iLocal_87 == 10 || iLocal_87 == 7)
							{
								if (iLocal_87 == 10)
								{
									StringCopy(&(uLocal_291[0]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 3, 4), 4);
									StringCopy(&(uLocal_291[1]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 4, 5), 4);
									StringCopy(&(uLocal_291[2]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 5, 6), 4);
									StringCopy(&(uLocal_291[3]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 6, 7), 4);
									StringCopy(&(uLocal_291[4]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 7, 8), 4);
									StringCopy(&(uLocal_291[5]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 8, 9), 4);
									StringCopy(&(uLocal_291[6]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 9, 10), 4);
								}
								else
								{
									StringCopy(&(uLocal_291[0]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 0, 1), 4);
									StringCopy(&(uLocal_291[1]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 1, 2), 4);
									StringCopy(&(uLocal_291[2]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 2, 3), 4);
									StringCopy(&(uLocal_291[3]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 3, 4), 4);
									StringCopy(&(uLocal_291[4]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 4, 5), 4);
									StringCopy(&(uLocal_291[5]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 5, 6), 4);
									StringCopy(&(uLocal_291[6]), HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cLocal_83, 6, 7), 4);
								}
								if ((((MISC::ARE_STRINGS_EQUAL(&(uLocal_291[0]), "5") && MISC::ARE_STRINGS_EQUAL(&(uLocal_291[1]), "5")) && MISC::ARE_STRINGS_EQUAL(&(uLocal_291[2]), "5")) && MISC::ARE_STRINGS_EQUAL(&(uLocal_291[3]), "0")) && MISC::ARE_STRINGS_EQUAL(&(uLocal_291[4]), "1"))
								{
									iVar9 = func_157(&(uLocal_291[5]));
									iVar10 = func_157(&(uLocal_291[6]));
									func_156(iVar9, iVar10);
									iLocal_280 = 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if (func_158(Global_8778, Global_21610) == 2 || Global_8778 == 130)
				{
					func_155(Global_8778, Global_21610, 1);
					if (Global_8778 == 130)
					{
						if (!func_158(130, 0) == 1)
						{
							func_151(130, 4, 1);
							func_151(130, 3, 0);
						}
						if (Global_80280)
						{
							if (!func_150(130, 3))
							{
								func_151(130, 3, 1);
							}
						}
					}
				}
				if (func_86(Global_8778, Global_21610) == 0)
				{
					func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8778 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), "CELL_211", &(Global_2339[Global_8778 /*29*/].f_3), 0);
				}
			}
			func_108();
		}
	}
}

int func_150(int iParam0, int iParam1)
{
	if (func_158(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

void func_151(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_10166 = iParam0;
	if (Global_118[iParam0 /*10*/].f_8 != 198)
	{
		func_22();
		if (iParam1 == 4)
		{
			func_154(iParam0, 0, 1);
			func_154(iParam0, 1, 1);
			func_154(iParam0, 2, 1);
			func_155(iParam0, 0, 1);
			func_155(iParam0, 1, 1);
			func_155(iParam0, 2, 1);
		}
		else
		{
			if (func_158(iParam0, iParam1) == 1 && func_86(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_154(iParam0, iVar0, 1);
			func_155(iParam0, iVar0, 1);
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
						Global_10139[iParam1 /*4*/] = { func_153(iParam0) };
						Global_10156[iParam1] = 1;
						Global_10161[iParam1] = iParam0;
					}
					else if (iParam0 == Global_21610)
					{
					}
					else
					{
						Global_10090[1 /*6*/] = { func_153(iParam0) };
						Global_10090[1 /*6*/].f_5 = iParam1;
						func_152();
					}
				}
				else
				{
					Global_10090[1 /*6*/] = { func_153(iParam0) };
					Global_10090[1 /*6*/].f_5 = iParam1;
					func_152();
				}
			}
			else
			{
				Global_10090[1 /*6*/] = { func_153(iParam0) };
				Global_10090[1 /*6*/].f_5 = iParam1;
				func_152();
			}
		}
	}
}

void func_152()
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
	MISC::CLEAR_BIT(&Global_9463, 0);
}

struct<4> func_153(int iParam0)
{
	return Global_2339[iParam0 /*29*/].f_3;
}

void func_154(int iParam0, int iParam1, int iParam2)
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

void func_155(int iParam0, int iParam1, int iParam2)
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

void func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (iParam0 + iParam1);
	iVar0 = (20 - iVar0);
	iVar0 += 5;
	switch (iVar0)
	{
		case 7:
			StringCopy(&cLocal_281, "ANS_RAN1", 16);
			StringCopy(&Local_285, "ANS_M_USA1", 24);
			break;
		
		case 8:
			StringCopy(&cLocal_281, "ANS_RAN2", 16);
			StringCopy(&Local_285, "ANS_F_USA1", 24);
			break;
		
		case 9:
			StringCopy(&cLocal_281, "ANS_RAN3", 16);
			StringCopy(&Local_285, "ANS_M_ENG1", 24);
			break;
		
		case 10:
			StringCopy(&cLocal_281, "ANS_RAN4", 16);
			StringCopy(&Local_285, "ANS_M_USA2", 24);
			break;
		
		case 11:
			StringCopy(&cLocal_281, "ANS_RAN5", 16);
			StringCopy(&Local_285, "ANS_M_ASIAN", 24);
			break;
		
		case 12:
			StringCopy(&cLocal_281, "ANS_RAN6", 16);
			StringCopy(&Local_285, "ANS_F_USA2", 24);
			break;
		
		case 13:
			StringCopy(&cLocal_281, "ANS_RAN7", 16);
			StringCopy(&Local_285, "ANSWER_FX", 24);
			break;
		
		case 14:
			StringCopy(&cLocal_281, "ANS_RAN8", 16);
			StringCopy(&Local_285, "ANSWER_FX", 24);
			break;
		
		case 15:
			StringCopy(&cLocal_281, "ANS_RAN9", 16);
			StringCopy(&Local_285, "ANSWER_FX", 24);
			break;
		
		case 16:
			StringCopy(&cLocal_281, "ANS_RAN10", 16);
			StringCopy(&Local_285, "ANSWER_FX", 24);
			break;
		
		case 17:
			StringCopy(&cLocal_281, "ANS_RAN1", 16);
			StringCopy(&Local_285, "ANS_M_USA1", 24);
			break;
		
		case 18:
			StringCopy(&cLocal_281, "ANS_RAN2", 16);
			StringCopy(&Local_285, "ANS_F_USA1", 24);
			break;
		
		case 19:
			StringCopy(&cLocal_281, "ANS_RAN3", 16);
			StringCopy(&Local_285, "ANS_M_ENG1", 24);
			break;
		
		case 20:
			StringCopy(&cLocal_281, "ANS_RAN4", 16);
			StringCopy(&Local_285, "ANS_M_USA2", 24);
			break;
		
		case 21:
			StringCopy(&cLocal_281, "ANS_RAN5", 16);
			StringCopy(&Local_285, "ANS_M_ASIAN", 24);
			break;
		
		case 22:
			StringCopy(&cLocal_281, "ANS_RAN6", 16);
			StringCopy(&Local_285, "ANS_F_USA2", 24);
			break;
		
		case 23:
			StringCopy(&cLocal_281, "ANS_RAN7", 16);
			StringCopy(&Local_285, "ANSWER_FX", 24);
			break;
		
		case 24:
			StringCopy(&cLocal_281, "ANS_RAN8", 16);
			StringCopy(&Local_285, "ANSWER_FX", 24);
			break;
		
		case 25:
			StringCopy(&cLocal_281, "ANS_RAN9", 16);
			StringCopy(&Local_285, "ANSWER_FX", 24);
			break;
		
		default:
			StringCopy(&cLocal_281, "ANS_RAN8", 16);
			StringCopy(&Local_285, "ANSWER_FX", 24);
			break;
	}
}

int func_157(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "1"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "2"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "3"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "4"))
	{
		return 4;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "5"))
	{
		return 5;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "6"))
	{
		return 6;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "7"))
	{
		return 7;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "8"))
	{
		return 8;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "9"))
	{
		return 9;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "A"))
	{
		return 10;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "B"))
	{
		return 11;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "C"))
	{
		return 12;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "D"))
	{
		return 13;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "E"))
	{
		return 14;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "F"))
	{
		return 15;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "G"))
	{
		return 16;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "H"))
	{
		return 17;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "I"))
	{
		return 18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "J"))
	{
		return 19;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "K"))
	{
		return 20;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "L"))
	{
		return 21;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "M"))
	{
		return 22;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "N"))
	{
		return 23;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "O"))
	{
		return 24;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "P"))
	{
		return 25;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Q"))
	{
		return 26;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "R"))
	{
		return 27;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "S"))
	{
		return 28;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "T"))
	{
		return 29;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "U"))
	{
		return 30;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "V"))
	{
		return 31;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "W"))
	{
		return 32;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "X"))
	{
		return 33;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Y"))
	{
		return 34;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Z"))
	{
		return 35;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_158(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2339[iParam0 /*29*/].f_12[iParam1];
}

int func_159()
{
	if (Global_80280)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_160()
{
	if (Global_21589)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_21589 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_21590)
			{
				case 0:
					func_168();
					Global_21590 = 1;
					break;
				
				case 1:
					func_168();
					Global_21590 = 2;
					break;
				
				case 2:
					func_168();
					func_166();
					Global_21590 = 3;
					break;
				
				case 3:
					func_168();
					Global_21590 = 4;
					break;
				
				case 4:
					func_168();
					Global_21590 = 5;
					break;
				
				case 5:
					func_168();
					func_166();
					Global_21590 = 6;
					break;
				
				case 6:
					func_168();
					Global_21590 = 7;
					break;
				
				case 7:
					func_168();
					Global_21590 = 8;
					break;
				
				case 8:
					func_168();
					func_166();
					Global_21590 = 9;
					break;
				
				case 9:
					func_168();
					Global_21590 = 10;
					break;
				
				case 10:
					func_168();
					Global_21590 = 11;
					break;
				
				case 11:
					func_168();
					func_166();
					Global_21590 = 0;
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_21590)
			{
				case 0:
					func_164();
					func_161();
					Global_21590 = 11;
					break;
				
				case 1:
					func_164();
					Global_21590 = 0;
					break;
				
				case 2:
					func_164();
					Global_21590 = 1;
					break;
				
				case 3:
					func_164();
					func_161();
					Global_21590 = 2;
					break;
				
				case 4:
					func_164();
					Global_21590 = 3;
					break;
				
				case 5:
					func_164();
					Global_21590 = 4;
					break;
				
				case 6:
					func_164();
					func_161();
					Global_21590 = 5;
					break;
				
				case 7:
					func_164();
					Global_21590 = 6;
					break;
				
				case 8:
					func_164();
					Global_21590 = 7;
					break;
				
				case 9:
					func_164();
					func_161();
					Global_21590 = 8;
					break;
				
				case 10:
					func_164();
					Global_21590 = 9;
					break;
				
				case 11:
					func_164();
					Global_21590 = 10;
					break;
				}
			}
	}
	if (Global_21589 == 0)
	{
		if (func_176(2, Global_21585, 0))
		{
			func_168();
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
			switch (Global_21610.f_1)
			{
				case 6:
					if (Global_21590 < (35 - 1))
					{
						Global_21590++;
					}
					break;
				
				case 5:
					if (Global_21590 < 3)
					{
						Global_21590++;
					}
					break;
				}
		}
		if (func_176(2, Global_21584, 0))
		{
			func_164();
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
			if (Global_21590 > 0)
			{
				Global_21590 = (Global_21590 - 1);
			}
		}
		if (func_176(2, Global_21586, 0))
		{
			func_161();
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
			if (Global_21590 > 3)
			{
				Global_21590 = (Global_21590 - 4);
			}
		}
		if (func_176(2, Global_21587, 0))
		{
			func_166();
			Global_21589 = 1;
			SYSTEM::SETTIMERA(0);
			if (Global_21590 < 8)
			{
				Global_21590 += 4;
			}
		}
	}
}

void func_161()
{
	func_173(Global_21591, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
	func_162();
}

void func_162()
{
	if (func_163())
	{
		if (Global_21847 == 0)
		{
			MOBILE::CELL_SET_INPUT(1);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(2);
		}
	}
}

int func_163()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_80280)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4525122 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_164()
{
	func_173(Global_21591, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
	func_165();
}

void func_165()
{
	if (func_163())
	{
		if (Global_21847 == 0)
		{
			MOBILE::CELL_SET_INPUT(3);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(4);
		}
	}
}

void func_166()
{
	func_173(Global_21591, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
	func_167();
}

void func_167()
{
	if (func_163())
	{
		if (Global_21847 == 0)
		{
			MOBILE::CELL_SET_INPUT(2);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(1);
		}
	}
}

void func_168()
{
	func_173(Global_21591, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
	func_169();
}

void func_169()
{
	if (func_163())
	{
		if (Global_21847 == 0)
		{
			MOBILE::CELL_SET_INPUT(4);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(3);
		}
	}
}

void func_170(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_87(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_87(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_87(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_87(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_87(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_171(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_87(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_87(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_87(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_87(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_87(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_172()
{
	int iVar0[12];
	int iVar13;
	int iVar14;
	
	StringCopy(&(Global_10188[0 /*5*/]), "CELL_900", 16);
	Global_10188[0 /*5*/].f_4 = 10;
	StringCopy(&(Global_10188[1 /*5*/]), "CELL_901", 16);
	Global_10188[1 /*5*/].f_4 = 0;
	StringCopy(&(Global_10188[2 /*5*/]), "CELL_902", 16);
	Global_10188[2 /*5*/].f_4 = 1;
	StringCopy(&(Global_10188[3 /*5*/]), "CELL_903", 16);
	Global_10188[3 /*5*/].f_4 = 2;
	StringCopy(&(Global_10188[4 /*5*/]), "CELL_904", 16);
	Global_10188[4 /*5*/].f_4 = 3;
	StringCopy(&(Global_10188[5 /*5*/]), "CELL_905", 16);
	Global_10188[5 /*5*/].f_4 = 4;
	StringCopy(&(Global_10188[6 /*5*/]), "CELL_906", 16);
	Global_10188[6 /*5*/].f_4 = 5;
	StringCopy(&(Global_10188[7 /*5*/]), "CELL_907", 16);
	Global_10188[7 /*5*/].f_4 = 6;
	StringCopy(&(Global_10188[8 /*5*/]), "CELL_908", 16);
	Global_10188[8 /*5*/].f_4 = 7;
	StringCopy(&(Global_10188[9 /*5*/]), "CELL_909", 16);
	Global_10188[9 /*5*/].f_4 = 8;
	StringCopy(&(Global_10188[10 /*5*/]), "CELL_910", 16);
	Global_10188[10 /*5*/].f_4 = 9;
	StringCopy(&(Global_10188[11 /*5*/]), "CELL_911", 16);
	Global_10188[11 /*5*/].f_4 = 11;
	iVar13 = 0;
	while (iVar13 < 12)
	{
		iVar0[iVar13] = 0;
		iVar13++;
	}
	if (Global_10271[0] == 0)
	{
	}
	iVar13 = 0;
	while (iVar13 < 12)
	{
		iVar14 = 0;
		while (iVar14 < 12)
		{
			if (iVar13 == Global_10188[iVar14 /*5*/].f_4)
			{
				if (iVar0[iVar13] == 0)
				{
					Global_10271[iVar13] = iVar14;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
					func_87(&(Global_10188[iVar14 /*5*/]));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iVar0[iVar13] = 1;
				}
			}
			iVar14++;
		}
		iVar13++;
	}
}

void func_173(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_174()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21599, true);
		func_175();
	}
}

void func_175()
{
	if (func_163())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_177()
{
	if (func_176(2, Global_21578, 0))
	{
		iLocal_107 = 0;
		MISC::SET_BIT(&Global_9464, 0);
		func_92();
		Global_21588 = 1;
		if (Global_80280)
		{
			func_331();
		}
		else
		{
			func_319();
		}
		SYSTEM::WAIT(0);
		if (Global_21610.f_1 > 3)
		{
			Global_21610.f_1 = 7;
		}
		StringCopy(&cLocal_83, "", 16);
	}
}

void func_178()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_21588 == 0)
	{
		if (func_176(2, Global_21579, 0))
		{
			if (!func_159())
			{
				Global_24098 = 0;
				Global_24097 = 0;
				Global_24099 = 0;
				iLocal_280 = 0;
				func_174();
				Global_21588 = 1;
				if (iLocal_68 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "GET_CURRENT_SELECTION");
					iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
					{
						SYSTEM::WAIT(0);
					}
					iLocal_76 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
					bVar0 = false;
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
					{
						if (Global_80280)
						{
							if (iLocal_76 < iLocal_71)
							{
								bVar0 = true;
							}
						}
						else if (iLocal_76 == iLocal_70 || iLocal_76 > iLocal_70)
						{
							bVar0 = true;
						}
					}
					if (BitTest(Global_9464, 0))
					{
						bVar0 = false;
					}
					if (bVar0)
					{
						Local_305.f_2936 = (iLocal_76 - iLocal_70);
						func_183();
					}
					else
					{
						if (iLocal_76 < 0)
						{
							iLocal_76 = 0;
						}
						Global_8778 = Global_21616[iLocal_76];
						if (Global_21839 != 145)
						{
							if (Global_8778 != Global_21839)
							{
								iLocal_64 = 1;
							}
							else
							{
								iLocal_64 = 0;
							}
						}
						else
						{
							iLocal_64 = 0;
						}
						if (iLocal_64 == 0)
						{
							if (BitTest(Global_9463, 9))
							{
								if (!BitTest(Global_9463, 29))
								{
									func_182(Global_8778, 1);
									if (func_86(Global_8778, Global_21610) == 0)
									{
										func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(1), -1f, -1f, "CELL_288", "CELL_300", &(Global_118[Global_8778 /*10*/].f_4), "CELL_195", 0);
									}
									else
									{
										func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(1), -1f, -1f, "CELL_288", &(Global_2339[Global_8778 /*29*/].f_7), &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_3), 0);
									}
									func_170(Global_21591, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
									func_173(Global_21591, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
									MISC::SET_BIT(&Global_9463, 29);
								}
							}
							else
							{
								bLocal_300 = false;
								bLocal_301 = false;
								if (Global_80280)
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (MISC::ARE_STRINGS_EQUAL(&(Global_2339[Global_8778 /*29*/].f_3), &(Global_9366[iVar1 /*24*/])))
										{
											if (!MISC::ARE_STRINGS_EQUAL(&(Global_9366[iVar1 /*24*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_300 = true;
												iLocal_302 = iVar1;
											}
										}
										iVar1++;
									}
								}
								else
								{
									iVar2 = 0;
									while (iVar2 < 4)
									{
										if (MISC::ARE_STRINGS_EQUAL(&(Global_2339[Global_8778 /*29*/].f_3), &(Global_9301[iVar2 /*16*/])))
										{
											if (!MISC::ARE_STRINGS_EQUAL(&(Global_9301[iVar2 /*16*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_300 = true;
												iLocal_302 = iVar2;
												if (iLocal_302 == iLocal_302)
												{
												}
											}
										}
										iVar2++;
									}
								}
								if (func_180(Global_8778) && BitTest(Global_9464, 0) == 0)
								{
									if (func_148(Global_8778, Global_21610) == 0 && func_95(Global_8778, Global_21610) == 0)
									{
										bLocal_301 = false;
									}
									else
									{
										bLocal_301 = true;
									}
								}
								if (BitTest(Global_9464, 0))
								{
									func_179();
									iLocal_107 = 1;
								}
								else if (bLocal_301 == 0 && bLocal_300 == 0)
								{
									Global_24098 = 0;
									Global_24097 = 0;
									Global_24099 = 0;
									if (BitTest(Global_9464, 19) && Global_8778 == 129)
									{
									}
									else
									{
										func_105();
									}
								}
								else
								{
									func_147();
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_179()
{
	iLocal_105 = MISC::GET_GAME_TIMER();
	func_173(Global_21591, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	SYSTEM::WAIT(0);
	switch (Global_8778)
	{
		case 2:
			func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), 0f, -1f, -1f, "CELL_7001", &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), 0, 0);
			break;
		
		case 0:
			func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), 0f, -1f, -1f, "CELL_7002", &(Global_2339[Global_8778 /*29*/].f_3), &(Global_2339[Global_8778 /*29*/].f_7), 0, 0);
			break;
		
		case 12:
			func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), 0f, -1f, -1f, "CELL_7003", &(Global_2339[Global_8778 /*29*/].f_3), "CELL_E_311", 0, 0);
			break;
	}
	if (Global_21598)
	{
		func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
	}
	else
	{
		func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	if (Global_21598)
	{
		func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	func_173(Global_21591, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_171(Global_21591, "SET_HEADER", "CELL_249", 0, 0, 0, 0);
}

int func_180(int iParam0)
{
	switch (Global_21610)
	{
		case 0:
			if (func_181(iParam0, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_181(iParam0, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_181(iParam0, 2))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_181(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_104();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	iVar1 = func_99(iParam0);
	iVar2 = func_99(iParam1);
	if (iVar1 != 7 && iVar2 != 7)
	{
		iVar3 = func_98(iVar1, iVar2);
		if (iVar3 != 10)
		{
			if (func_97(iVar3) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_182(int iParam0, int iParam1)
{
	Global_2339[iParam0 /*29*/].f_18 = iParam1;
	if (iParam0 < 162)
	{
		Global_114904.f_28058[iParam0 /*29*/].f_18 = iParam1;
	}
}

void func_183()
{
	char* sVar0;
	
	if (Global_21610.f_1 > 3)
	{
		Global_21610.f_1 = 8;
	}
	if (Global_21598)
	{
		func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9463, 17);
	func_173(Global_21591, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
	func_187(&Local_305);
	if (Global_21610.f_1 > 3)
	{
		func_173(Global_21591, "DISPLAY_VIEW", 18f, SYSTEM::TO_FLOAT(iLocal_74), -1082130432, -1082130432, -1082130432);
		iLocal_74 = 0;
		if (func_186(&Local_305))
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Local_305[Local_305.f_2936]);
		}
		else
		{
			sVar0 = func_184(&(Local_305.f_34[func_185(Local_305.f_2936, &Local_305) /*29*/].f_13));
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_HEADER");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFNH");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar0);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		Local_305.f_2999 = 0;
		iLocal_90 = 1;
	}
}

var func_184(var uParam0)
{
	return uParam0;
}

int func_185(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = (iParam0 - uParam1->f_33);
	if (iVar0 >= 100)
	{
		iVar0 = 99;
	}
	return iVar0;
}

int func_186(var uParam0)
{
	if (uParam0->f_2936 < uParam0->f_33)
	{
		return 1;
	}
	return 0;
}

void func_187(var uParam0)
{
	int iVar0;
	struct<22> Var1;
	var uVar36;
	char* sVar37;
	bool bVar38;
	struct<13> Var39;
	
	iVar0 = 0;
	if (func_197(uParam0, &uVar36))
	{
		if (func_186(uParam0))
		{
			uParam0->f_2963 = { func_196((*uParam0)[uParam0->f_2936]) };
			sVar37 = PLAYER::GET_PLAYER_NAME((*uParam0)[uParam0->f_2936]);
		}
		else
		{
			uParam0->f_2963 = { uParam0->f_34[func_185(uParam0->f_2936, uParam0) /*29*/] };
			sVar37 = func_184(&(uParam0->f_34[func_185(uParam0->f_2936, uParam0) /*29*/].f_13));
		}
		StringCopy(&(uParam0->f_2983), sVar37, 64);
		bVar38 = false;
		if (NETWORK::NETWORK_HAS_HEADSET())
		{
			if (!Global_1836729)
			{
				if (func_195(PLAYER::PLAYER_ID()))
				{
					bVar38 = true;
				}
			}
		}
		if (func_186(uParam0))
		{
			if (((NETWORK::NETWORK_IS_PLAYER_MUTED_BY_ME((*uParam0)[uParam0->f_2936]) || NETWORK::NETWORK_IS_PLAYER_BLOCKED_BY_ME((*uParam0)[uParam0->f_2936])) || NETWORK::NETWORK_AM_I_BLOCKED_BY_PLAYER((*uParam0)[uParam0->f_2936])) || NETWORK::NETWORK_AM_I_MUTED_BY_PLAYER((*uParam0)[uParam0->f_2936]))
			{
				bVar38 = false;
			}
		}
		if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		{
			bVar38 = false;
		}
		if (PAD::IS_USING_REMOTE_PLAY(0))
		{
			bVar38 = false;
		}
		if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&(uParam0->f_2963)) || NETWORK::NETWORK_IS_GAMER_BLOCKED_BY_ME(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (NETWORK::NETWORK_AM_I_MUTED_BY_GAMER(&(uParam0->f_2963)) || NETWORK::NETWORK_AM_I_BLOCKED_BY_GAMER(&(uParam0->f_2963)))
		{
			bVar38 = false;
		}
		if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY())
		{
			if (func_194())
			{
				if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY_CHAT())
				{
					bVar38 = false;
				}
			}
			else if (func_193())
			{
				bVar38 = false;
			}
		}
		if (bVar38)
		{
			if (Global_80280)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (!Global_2738986.f_1 || Global_2738986.f_38)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1000");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1000b");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
			else if (Global_44869 == 15)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				if (!Global_2738986.f_1 || Global_2738986.f_38)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1000");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1000b");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
		}
		bVar38 = false;
		if (func_186(uParam0))
		{
			Var39 = { func_196((*uParam0)[uParam0->f_2936]) };
			if (((func_195(PLAYER::PLAYER_ID()) && func_195((*uParam0)[uParam0->f_2936])) && NETWORK::NETWORK_CAN_TEXT_CHAT_WITH_GAMER(&Var39)) && NETWORK::_NETWORK_DOES_COMMUNICATION_GROUP_EXIST(2))
			{
				bVar38 = true;
			}
		}
		if (bVar38)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT_EMPTY");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1009");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_2937[iVar0] = 2;
			iVar0++;
		}
		bVar38 = false;
		if (func_186(uParam0))
		{
			if (NETWORK::NETWORK_GET_FRIEND_COUNT() < NETWORK::NETWORK_GET_MAX_FRIENDS())
			{
				if (!NETWORK::NETWORK_IS_FRIEND(&(uParam0->f_2963)))
				{
					bVar38 = true;
				}
			}
		}
		if (bVar38)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("PIM_DFRQ2");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_2937[iVar0] = 3;
			iVar0++;
		}
		bVar38 = false;
		bVar38 = true;
		if (bVar38)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1007");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_2937[iVar0] = 4;
			iVar0++;
		}
		bVar38 = false;
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&(uParam0->f_2963)))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &(uParam0->f_2963));
			}
		}
		if (Var1.f_0 != -1)
		{
			if (Var1.f_21 == 1)
			{
				if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() && !func_192(Var1.f_0))
				{
					bVar38 = true;
					uParam0->f_2947 = { Var1.f_1 };
				}
			}
		}
		if (bVar38)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1003");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_2937[iVar0] = 5;
			iVar0++;
		}
		MISC::CLEAR_BIT(&Global_9465, 6);
		bVar38 = false;
		if (func_186(uParam0))
		{
			if (func_191(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_2936]))
				{
					if (!func_190((*uParam0)[uParam0->f_2936], 0))
					{
						if (!BitTest(Global_2658291[(*uParam0)[uParam0->f_2936] /*468*/].f_203, 2))
						{
							bVar38 = true;
							MISC::SET_BIT(&Global_9465, 6);
						}
					}
				}
			}
			if ((*uParam0)[uParam0->f_2936] != func_17() && func_191((*uParam0)[uParam0->f_2936], 0, 0))
			{
				if (func_188((*uParam0)[uParam0->f_2936], 146))
				{
					bVar38 = false;
				}
			}
		}
		if (Global_1836697 || Global_1836698)
		{
			bVar38 = false;
		}
		if (bVar38)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			if (!BitTest(Global_2673271.f_1063, (*uParam0)[uParam0->f_2936]))
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1008");
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_MP_1008b");
			}
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_2937[iVar0] = 7;
			iVar0++;
		}
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_LEFT_SESS");
		HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(true, true);
		func_39(0);
		return;
	}
}

int func_188(int iParam0, int iParam1)
{
	if (Global_1892653[iParam0 /*615*/] == iParam1)
	{
		return func_189(iParam0);
	}
	return 0;
}

int func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892653[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

bool func_190(int iParam0, int iParam1)
{
	return BitTest(Global_2658291[iParam0 /*468*/].f_222, iParam1);
}

int func_191(int iParam0, bool bParam1, bool bParam2)
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
				if (iVar0 == Global_2673271.f_3)
				{
					return Global_2673271.f_2;
				}
				else if (Global_2658291[iVar0 /*468*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		iVar0 = NETWORK::NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT();
		if (iVar0 > 0)
		{
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				NETWORK::NETWORK_CLAN_GET_MEMBERSHIP_DESC(&Global_2708434, iVar1);
				if (iParam0 == Global_2708434)
				{
					return 1;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

bool func_193()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_194()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_195(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (MISC::IS_PS3_VERSION() || func_193())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || func_194())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			if (NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, true) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_196(iParam0) };
			if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) || (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) && NETWORK::NETWORK_IS_FRIEND(&Var1)))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_196(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_197(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		*iParam1 = 2;
	}
	else if (uParam0->f_2936 < uParam0->f_33)
	{
		if (func_191((*uParam0)[uParam0->f_2936], 0, 1))
		{
			return 1;
		}
		else
		{
			*iParam1 = 2;
		}
	}
	else
	{
		iVar0 = func_185(uParam0->f_2936, uParam0);
		if (NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(uParam0->f_34[iVar0 /*29*/])))
		{
			return 1;
		}
		else
		{
			*iParam1 = 0;
		}
	}
	return 0;
}

void func_198()
{
	if (func_176(2, Global_21579, 0))
	{
		MISC::CLEAR_BIT(&Global_9464, 0);
		iLocal_107 = 0;
		func_174();
		Global_21588 = 1;
		Global_24098 = 0;
		Global_24097 = 0;
		Global_24099 = 0;
		func_105();
	}
}

void func_199()
{
	if (iLocal_100)
	{
		if (SYSTEM::TIMERA() > 150)
		{
			iLocal_100 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (func_176(2, 181, 0))
		{
			if (iLocal_72 > 0)
			{
				iLocal_72 = (iLocal_72 - 1);
			}
			else
			{
				iLocal_72 = (iLocal_68 - 1);
			}
			func_161();
			iLocal_100 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_176(2, 180, 0))
		{
			iLocal_72++;
			if (iLocal_72 == iLocal_68)
			{
				iLocal_72 = 0;
			}
			func_166();
		}
	}
	if (iLocal_100 == 0)
	{
		if (func_176(2, Global_21586, 0))
		{
			if (iLocal_72 > 0)
			{
				iLocal_72 = (iLocal_72 - 1);
			}
			else
			{
				iLocal_72 = (iLocal_68 - 1);
			}
			func_161();
			iLocal_100 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_176(2, Global_21587, 0))
		{
			iLocal_72++;
			if (iLocal_72 == iLocal_68)
			{
				iLocal_72 = 0;
			}
			func_166();
			iLocal_100 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_176(2, Global_21585, 0))
		{
			func_201();
			func_201();
			func_201();
			func_201();
			func_201();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
			iLocal_100 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_176(2, Global_21584, 0))
		{
			func_200();
			func_200();
			func_200();
			func_200();
			func_200();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_21599, true);
			iLocal_100 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_200()
{
	if (iLocal_72 > 0)
	{
		iLocal_72 = (iLocal_72 - 1);
	}
	else
	{
		iLocal_72 = (iLocal_68 - 1);
	}
	func_173(Global_21591, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_201()
{
	iLocal_72++;
	if (iLocal_72 == iLocal_68)
	{
		iLocal_72 = 0;
	}
	func_173(Global_21591, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_202()
{
	iLocal_72++;
	if (iLocal_72 == iLocal_68)
	{
		iLocal_72 = 0;
		MISC::CLEAR_BIT(&Global_9463, 16);
	}
	func_166();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "GET_CURRENT_SELECTION");
	iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_76 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
	if (iLocal_76 < 0)
	{
		iLocal_76 = 0;
	}
	if (Global_80280)
	{
		if (iLocal_76 > iLocal_71 || iLocal_76 == iLocal_71)
		{
			if (Global_24014 == Global_21616[iLocal_76])
			{
				MISC::CLEAR_BIT(&Global_9463, 16);
			}
		}
	}
	else if (Global_24014 == Global_21616[iLocal_76])
	{
		MISC::CLEAR_BIT(&Global_9463, 16);
	}
}

void func_203()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<22> Var4;
	int iVar39;
	struct<13> Var40;
	char* sVar53;
	int iVar54;
	int iVar55;
	struct<13> Var56;
	struct<13> Var69;
	
	if (BitTest(Global_9465, 6))
	{
		if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Local_305.f_2963)))
		{
			MISC::CLEAR_BIT(&Global_9465, 6);
			StringCopy(&cLocal_83, "", 16);
			Global_21610.f_1 = 3;
		}
	}
	switch (Local_305.f_2999)
	{
		case 0:
			if (BitTest(uLocal_299, 1))
			{
				if (!Global_102481.f_1514)
				{
					MISC::CLEAR_BIT(&uLocal_299, 0);
					MISC::CLEAR_BIT(&uLocal_299, 1);
				}
				return;
			}
			if (Local_305.f_2976)
			{
				if (Local_305.f_2981)
				{
					iVar39 = 2;
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("HUD_CONNPROB", "HUD_DISCON", iVar39, 0, false, -1, 0, 0, true, 0);
					if (Local_305.f_2982)
					{
						if (func_176(2, Global_21579, 0) || PAD::IS_CONTROL_PRESSED(2, 201))
						{
							Global_21610.f_1 = 3;
						}
					}
					else if (func_176(2, Global_21579, 0) || PAD::IS_CONTROL_PRESSED(2, 201))
					{
					}
					else
					{
						Local_305.f_2982 = 1;
					}
				}
				else
				{
					iLocal_74 = Local_305.f_2946;
					switch (Local_305.f_2937[Local_305.f_2946])
					{
						case 1:
							if (!Global_2738986.f_1)
							{
								if (!NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY() && !NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_ACTIVE())
								{
									Local_305.f_2976 = 0;
									func_315();
									Local_305.f_2977 = 0;
									if (func_186(&Local_305))
									{
										sVar53 = PLAYER::GET_PLAYER_NAME(Local_305[Local_305.f_2936]);
									}
									else
									{
										sVar53 = func_184(&(Local_305.f_34[func_185(Local_305.f_2936, &Local_305) /*29*/].f_13));
									}
									func_314(sVar53);
									Local_305.f_2999 = 1;
									func_313(&(Local_305.f_2979));
									func_312(0);
									if (Global_80280)
									{
										iVar55 = Global_262145.f_162;
										if (!MONEY::NETWORK_CAN_SPEND_MONEY2(iVar55, false, true, false, &iVar54, -1, 0))
										{
											iVar55 = (iVar55 - iVar54);
										}
										Var40 = { func_196(PLAYER::PLAYER_ID()) };
										if (iVar55 > 0)
										{
											if (func_311())
											{
												func_300(joaat("service_spend_call_player"), iVar55, &iVar0, 0, 1, 0);
												Global_4515413[iVar0 /*84*/].f_13 = { Var40 };
											}
											else
											{
												MONEY::NETWORK_SPENT_CALL_PLAYER(iVar55, &Var40, false, true);
											}
										}
										func_106(1917, 1, -1);
									}
								}
								else if (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
								{
								}
								else if (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_ACTIVE())
								{
									if (!Global_2738986.f_59)
									{
										Global_2738986 = 1;
										Global_2738986.f_2 = 1;
										Global_2738986.f_59 = 1;
									}
								}
							}
							else if (Global_2738986.f_38)
							{
							}
							else
							{
								func_299();
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_21599, true);
								if (Global_2738986.f_1)
								{
									func_297();
								}
								Global_21610.f_1 = 3;
							}
							return;
							break;
						
						case 2:
							if (func_296(&(Global_2733002.f_404[Local_305[Local_305.f_2936] /*2*/])))
							{
								if (!func_295(&(Global_2733002.f_404[Local_305[Local_305.f_2936] /*2*/]), 30000, 0))
								{
									if (func_283(0, 0, 1, 1))
									{
										func_273("CELL_MP_1009H", PLAYER::GET_PLAYER_NAME(Local_305[Local_305.f_2936]), func_274(Local_305[Local_305.f_2936], -2, 0, 0, 0), -1);
									}
									Local_305.f_2976 = 0;
									return;
								}
							}
							Var56 = { func_196(Local_305[Local_305.f_2936]) };
							if (((!func_195(PLAYER::PLAYER_ID()) || !func_195(Local_305[Local_305.f_2936])) || !NETWORK::NETWORK_CAN_TEXT_CHAT_WITH_GAMER(&Var56)) || !NETWORK::_NETWORK_DOES_COMMUNICATION_GROUP_EXIST(2))
							{
								if (func_283(1, 1, 1, 1))
								{
									if (!MISC::ARE_STRINGS_EQUAL(PLAYER::GET_PLAYER_NAME(Local_305[Local_305.f_2936]), "**Invalid**"))
									{
										func_273("CELL_MP_1009M", PLAYER::GET_PLAYER_NAME(Local_305[Local_305.f_2936]), func_274(Local_305[Local_305.f_2936], -2, 0, 0, 0), -1);
									}
									else
									{
										func_272("CELL_MP_1009N", -1);
									}
								}
								Local_305.f_2976 = 0;
								return;
							}
							Local_305.f_2976 = 0;
							Local_305.f_2999 = 2;
							iLocal_3324 = 1;
							return;
							break;
						
						case 3:
							if (!NETWORK::NETWORK_IS_ADDING_FRIEND())
							{
								if (MISC::IS_PS3_VERSION() && !NETWORK::NETWORK_IS_FRIEND(&(Local_305.f_2963)))
								{
									if (NETWORK::NETWORK_ADD_FRIEND(&(Local_305.f_2963), ""))
									{
										Local_305.f_2976 = 0;
										Global_21610.f_1 = 3;
									}
								}
								else
								{
									NETWORK::NETWORK_SHOW_PROFILE_UI(&(Local_305.f_2963));
									Local_305.f_2976 = 0;
									Global_21610.f_1 = 3;
								}
							}
							break;
						
						case 5:
							if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
							{
								if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&(Local_305.f_2963)))
								{
									NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var4, 35, &(Local_305.f_2963));
								}
							}
							if (Var4.f_0 != -1)
							{
								if (Var4.f_21 == 1)
								{
									if (!func_192(Var4.f_0))
									{
										if (NETWORK::NETWORK_CLAN_JOIN(Var4.f_0))
										{
											Local_305.f_2976 = 0;
											HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREW_JOIN");
											HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Var4.f_1));
											HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(true, true);
											Global_21610.f_1 = 3;
										}
										else
										{
											Global_21610.f_1 = 3;
											Local_305.f_2976 = 0;
											Global_21610.f_1 = 3;
										}
										return;
									}
								}
							}
							Local_305.f_2976 = 0;
							break;
						
						case 4:
							Local_305.f_2976 = 0;
							func_183();
							NETWORK::NETWORK_SHOW_PROFILE_UI(&(Local_305.f_2963));
							break;
						
						case 7:
							if (BitTest(Global_2673271.f_1063, Local_305[Local_305.f_2936]))
							{
								MISC::CLEAR_BIT(&(Global_2673271.f_1063), Local_305[Local_305.f_2936]);
							}
							else
							{
								Global_2673271.f_1063 = 0;
								MISC::SET_BIT(&(Global_2673271.f_1063), Local_305[Local_305.f_2936]);
							}
							func_183();
							Local_305.f_2976 = 0;
							break;
						}
				}
			}
			else if (Global_21588 == 0)
			{
				if (func_176(2, Global_21579, 0))
				{
					Local_305.f_2982 = 0;
					Local_305.f_2981 = 0;
					MISC::CLEAR_BIT(&Global_9464, 0);
					iLocal_89 = 0;
					func_174();
					Global_21588 = 1;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "GET_CURRENT_SELECTION");
					iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
					{
						SYSTEM::WAIT(0);
					}
					Local_305.f_2946 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
					if (!func_197(&Local_305, &iVar3))
					{
						switch (iVar3)
						{
							case 0:
								func_271("PLAYER_N_ON", 7500, 1);
								break;
							
							case 1:
								func_271("PLAYERLEFT", 7500, 1);
								break;
							
							case 2:
								Global_2738986.f_59 = 0;
								Local_305.f_2981 = 1;
								Local_305.f_2976 = 1;
								return;
								break;
						}
						Global_21610.f_1 = 3;
						return;
					}
					Global_2738986.f_59 = 0;
					Local_305.f_2976 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_197(&Local_305, &iVar3))
			{
				func_312(1);
				func_299();
				Local_305.f_2978 = 1;
				Local_305.f_2977 = 1;
				return;
			}
			else if (Local_305.f_2977)
			{
				if (!Local_305.f_2978)
				{
					if (!Global_2738986.f_1 || !NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
					{
						func_312(1);
						func_299();
						Local_305.f_2978 = 1;
						Local_305.f_2977 = 1;
						return;
					}
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
					{
						if (func_176(2, Global_21580, 0))
						{
							func_299();
							Local_305.f_2976 = 0;
							return;
						}
						if (func_270(Global_2738986.f_20))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&(Global_2738986.f_20)))
							{
								if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2738986.f_20)))
								{
									func_312(1);
									func_299();
									Local_305.f_2978 = 1;
									Local_305.f_2977 = 1;
									return;
								}
							}
						}
						else
						{
							func_312(1);
							func_299();
							Local_305.f_2978 = 1;
							Local_305.f_2977 = 1;
							return;
						}
					}
					else
					{
						func_299();
						Local_305.f_2976 = 0;
						func_183();
						return;
					}
					if (!Global_2738986.f_37)
					{
						if (Global_2738986.f_33 == -1)
						{
							if (func_295(&(Local_305.f_2979), 40000, 1))
							{
								func_312(1);
								func_299();
								Local_305.f_2978 = 1;
								Local_305.f_2977 = 1;
								return;
							}
						}
						else
						{
							switch (Global_2738986.f_33)
							{
								case 1:
									func_269();
									func_268();
									if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
									{
										if (iVar1 == iVar2)
										{
										}
									}
									AUDIO::STOP_SOUND(iLocal_78);
									return;
									break;
								
								case 2:
									func_312(1);
									func_299();
									Local_305.f_2978 = 1;
									return;
									break;
								
								default:
									func_312(1);
									func_299();
									Local_305.f_2978 = 1;
									return;
									break;
								}
							}
						}
				}
			}
			else if (!func_296(&(Local_305.f_2979)))
			{
				func_313(&(Local_305.f_2979));
				func_267(&(Local_305.f_2979), 1, 0);
			}
			else
			{
				if (func_295(&(Local_305.f_2979), 15000, 1))
				{
					func_299();
					func_92();
					func_317();
					Global_21610.f_1 = 3;
					return;
				}
				if (Global_2738986.f_1 || BitTest(Global_9464, 20))
				{
					if (func_176(2, Global_21580, 0))
					{
						func_299();
						Global_21610.f_1 = 3;
						return;
					}
				}
				if (Global_2738986.f_1)
				{
					if (func_266(&Local_305, &(Local_305.f_2983)))
					{
						func_265(&(Local_305.f_2979), 1, 0);
						Local_305.f_2978 = 0;
						Local_305.f_2977 = 1;
						if (Global_80280)
						{
							func_263(105, 1, -1, 1);
						}
					}
					else
					{
						func_312(1);
						func_299();
						Local_305.f_2978 = 1;
						Local_305.f_2977 = 1;
						return;
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_3324 == 1)
			{
				if (func_255(&Local_3305, &(Local_3305.f_1), &(Local_3305.f_2), 0, 0, &cLocal_3308, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0))
				{
					StringCopy(&cLocal_3308, MISC::GET_ONSCREEN_KEYBOARD_RESULT(), 64);
					Local_3305.f_0 = 0;
					Local_3305.f_2 = 0;
					Local_3305.f_1 = 0;
					iLocal_3324 = 0;
					func_265(&(Global_2733002.f_404[Local_305[Local_305.f_2936] /*2*/]), 0, 0);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_3308))
					{
					}
					else
					{
						iLocal_3325 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cLocal_3308);
						StringCopy(&cLocal_3308, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(&cLocal_3308, 0, iLocal_3325, 63), 64);
						Var69 = { func_196(Local_305[Local_305.f_2936]) };
						NETWORK::NETWORK_SEND_TEXT_MESSAGE(&cLocal_3308, &Var69);
						func_204("CP_TM_SENT", Local_305[Local_305.f_2936], 0, 0, 0, 1, 0);
						func_106(1916, 1, -1);
					}
					Local_305.f_2999 = 0;
				}
				if (Local_3305.f_0 == 2)
				{
					Local_3305.f_0 = 0;
					Local_3305.f_2 = 0;
					Local_3305.f_1 = 0;
					iLocal_3324 = 0;
					Local_305.f_2999 = 0;
				}
			}
			break;
	}
}

int func_204(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar18;
	bool bVar19;
	
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (func_254(iParam1))
		{
			if (!bParam2)
			{
				StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
			}
			else
			{
				StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
			{
			}
			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
			if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
			{
				if (Global_4718592.f_126753[iVar1] != -1)
				{
					HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_214(iVar1, iParam1, 0));
				}
				else
				{
					HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_274(iParam1, -2, 1, 0, 0));
				}
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_274(iParam1, -2, 1, 0, 0));
			}
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_212(&Var2));
			if (!bParam4)
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
			else
			{
				Global_2708504 = { func_196(iParam1) };
				if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2708434, 35, &Global_2708504))
				{
					bVar18 = false;
					if (MISC::ARE_STRINGS_EQUAL(&(Global_2708434.f_22), "Leader") && Global_2708434.f_30 == 0)
					{
						bVar18 = true;
					}
					if (Global_2708434.f_21 > 0)
					{
						bVar19 = false;
					}
					else
					{
						bVar19 = true;
					}
					if (bParam5)
					{
						if (bParam6)
						{
							Var2 = { func_211(&Var2) };
						}
						iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2708434, 35), &(Global_2708434.f_17), Global_2708434.f_30, bVar18, false, Global_2708434, &Var2, Global_1576248, Global_1576249, Global_1576250);
					}
					else
					{
						iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2708434, 35), &(Global_2708434.f_17), Global_2708434.f_30, bVar18, false, Global_2708434, Global_1576248, Global_1576249, Global_1576250);
					}
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
				}
			}
			func_205(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
		}
	}
	return iVar0;
}

void func_205(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_210() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_208(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_206(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1943908.f_5[iVar0 /*53*/] = iParam0;
		Global_1943908.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1943908.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1943908.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1943908.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1943908.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1943908.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1943908.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1943908.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1943908.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1943908.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1943908.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1943908 - 1))
	{
		if (iParam0 > Global_1943908.f_5[iVar0 /*53*/].f_1)
		{
			func_207(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1943908++;
	if (Global_1943908 > 5)
	{
		Global_1943908 = 5;
		return Global_1943908;
	}
	return (Global_1943908 - 1);
}

void func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1943908.f_5[iVar0 /*53*/] = { Global_1943908.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_208(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_254(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_209(-1, 0) == 8;
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

int func_209(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_74();
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

bool func_210()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_211(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_212(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_213(&cVar0);
}

var func_213(char[4] cParam0)
{
	return cParam0;
}

int func_214(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058124.f_14[iParam0];
	if (func_238())
	{
		iVar2 = func_234(iParam1);
		if (!iVar2 == -1)
		{
			return func_232(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3605[iParam0 /*26968*/].f_8610[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_17())
	{
		if (Global_4718592.f_126753[iParam0] != -1 && Global_4718592.f_126753[iParam0] <= 4)
		{
			if (Global_4718592.f_126753[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_126753[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_126753[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_126753[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_16, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_126753[iParam0];
			}
		}
		else
		{
			iVar0 = func_220(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_22, 13))
		{
			iVar0 = func_219(iParam0);
		}
		if (BitTest(Global_4718592.f_25, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_16, 26) && !func_216(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1))
		{
			iVar0 = func_215(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_215(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_216(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058124.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3605[iParam0 /*26968*/].f_26699, bVar0))
			{
				bVar1 = Global_1058124.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_217(iParam0, bVar0, iParam1, bVar1) || !func_217(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3605[iParam0 /*26968*/].f_26701[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_217(iParam0, bVar0, iParam1, bVar1) || !func_217(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3605[iParam0 /*26968*/].f_26701[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_217(iParam0, bVar0, iParam1, bVar1) || !func_217(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3605[iParam0 /*26968*/].f_26701[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_217(iParam0, bVar0, iParam1, bVar1) || !func_217(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3605[iParam0 /*26968*/].f_26701[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3554, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3554, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3554, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3554, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3554, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3554, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3554, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3554, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3554, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3554, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3554, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3554, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3554, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3554, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3554, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3554, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_217(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3605[iParam0 /*26968*/].f_26700, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3605[iParam2 /*26968*/].f_26700, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_191(iVar1, 1, 1) || func_208(iVar1, 0)) || BitTest(Global_2658291[iVar1 /*468*/].f_203, 2)) || func_218(iVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("mp_f_freemode_01") || iVar4 == joaat("mp_m_freemode_01"))
				{
					if (iVar3 == joaat("mp_f_freemode_01") || iVar3 == joaat("mp_m_freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_218(int iParam0)
{
	return BitTest(Global_1845250[iParam0 /*880*/].f_36.f_18, 14);
}

int func_219(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_192969;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_192970;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_192971;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_192972;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_220(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_231(Global_4718592.f_192777))
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	}
	if ((func_230() || (func_229() && func_227())) && Global_1689064.f_1)
	{
		if (bParam1)
		{
			return func_226(iParam2, iVar0);
		}
		else
		{
			return func_226(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_216(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_16, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_225(1);
				}
				else
				{
					return func_225(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_221(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_221(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_225(1);
	}
	return func_225(0);
}

int func_221(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_224(iParam0, iParam1, iParam3);
	if (func_222(Global_4718592.f_132500, 1, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_222(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_192777 == 65)
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (func_223(Global_4718592.f_192777, 0))
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9605[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_223(int iParam0, bool bParam1)
{
	if (iParam0 == 93)
	{
		if (bParam1)
		{
			if (PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX()) == 2)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_224(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_216(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_225(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_226(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_224(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_227()
{
	if (func_228())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_197677, 4);
}

bool func_228()
{
	return BitTest(Global_4718592.f_185514, 12);
}

bool func_229()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_197677, 0);
	}
	return ((BitTest(Global_4718592.f_197677, 0) || Global_1926476) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_230()
{
	if (func_228() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

bool func_231(int iParam0)
{
	return iParam0 == 94;
}

int func_232(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_233(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_233(int iParam0)
{
	return Global_2649159.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_234(int iParam0)
{
	if (func_254(iParam0))
	{
		if (func_236(iParam0, 1))
		{
			return Global_2649159.f_818.f_11[func_235(iParam0)];
		}
	}
	return -1;
}

int func_235(int iParam0)
{
	if (func_254(iParam0))
	{
		return Global_1892653[iParam0 /*615*/].f_10;
	}
	return func_17();
}

int func_236(int iParam0, bool bParam1)
{
	if (!func_254(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_237(iParam0))
		{
			return 0;
		}
	}
	return func_254(Global_1892653[iParam0 /*615*/].f_10);
}

int func_237(int iParam0)
{
	if (func_254(iParam0))
	{
		if (func_254(Global_1892653[iParam0 /*615*/].f_10))
		{
			return Global_1892653[iParam0 /*615*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_238()
{
	if ((((((((func_253() || func_252()) || func_251()) || func_250()) || func_249()) || func_247()) || func_245()) || func_242()) || func_239())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_37, 1))
	{
		return 1;
	}
	return 0;
}

int func_239()
{
	return func_240(Global_4718592.f_132500);
}

int func_240(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_241(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_241(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_35569[iParam0];
	}
	return -1;
}

int func_242()
{
	return func_243(Global_4718592.f_132500);
}

int func_243(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_244(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_244(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33076[iParam0];
	}
	return -1;
}

int func_245()
{
	return func_246(Global_4718592.f_132500);
}

int func_246(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31140[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_247()
{
	return func_248(Global_4718592.f_132500);
}

int func_248(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30435[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_249()
{
	return Global_2685150.f_24;
}

var func_250()
{
	return Global_2685150.f_21;
}

var func_251()
{
	return Global_2685150.f_19;
}

var func_252()
{
	return Global_2685150.f_18;
}

var func_253()
{
	return Global_2685150.f_17;
}

int func_254(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
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

int func_255(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, bool bParam29, int iParam30, int iParam31, bool bParam32, char* sParam33, bool bParam34, int iParam35, bool bParam36, bool bParam37, bool bParam38, bool bParam39)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<16> Var10;
	int iVar26;
	int iVar27;
	int iVar28;
	
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (bParam3)
			{
				if (iParam7 == 6)
				{
					iVar6 = 121;
				}
				else if (iParam7 == 7)
				{
					iVar6 = 63;
				}
				else if (func_262())
				{
					iVar6 = 21;
				}
				else
				{
					iVar6 = 51;
				}
				if (*iParam1 == 0)
				{
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						if (func_262())
						{
							sVar4 = "FMMC_KEY_TIS2SJ";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP2";
						}
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_KEY_TIP7";
						iVar6 = 21;
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_KEY_TIP5";
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_KEY_TIP6";
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_KEY_TIP10";
					}
					else if (iParam7 == 8)
					{
						sVar4 = "FMMC_KEY_TXT7";
					}
					else if (iParam7 == 9)
					{
						sVar4 = "FMMC_KEY_TXT8";
					}
					else if (iParam7 == 10)
					{
						sVar4 = "FMMC_KEY_VSS";
					}
				}
				else if (*iParam1 == -4)
				{
					sVar4 = func_261();
				}
				else if (func_262())
				{
					sVar4 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					sVar4 = "FMMC_KEY_TIP2F";
				}
				if (MISC::IS_XBOX360_VERSION())
				{
					sVar5 = sVar4;
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						sVar4 = "FMMC_SS_RL_35";
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_SS_RL_32";
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_SS_RL_33";
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_SS_RL_34";
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_SS_RL_49";
					}
					else if (iParam7 == 7)
					{
						sVar4 = "FMMC_SS_RL_57";
					}
				}
				if (MISC::IS_PC_VERSION())
				{
					iVar7 = 6;
				}
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (bParam24)
				{
					if (bParam26)
					{
						sVar4 = "LINE_NUMBER";
					}
					else
					{
						sVar4 = "WEB_SEARCH";
					}
				}
				if (iParam35 != -1)
				{
					iVar6 = iParam35;
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar7, sVar4, sVar5, "", "", "", "", iVar6);
				}
				else
				{
					MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar7, sVar4, sVar5, sParam5, sParam10, "", "", iVar6);
				}
			}
			else
			{
				if (MISC::IS_PC_VERSION())
				{
					iVar8 = 6;
				}
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (bParam4)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (func_260())
					{
						if (*iParam1 == 0)
						{
							sVar4 = "PMC_KEY_TIP";
						}
						else if (*iParam1 == -4)
						{
							sVar4 = func_261();
						}
						else
						{
							sVar4 = "PMC_KEY_TIPF";
						}
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 25;
					}
					if (func_259())
					{
						iVar9 = 64;
					}
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_132513)))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_132513), "", "", "", iVar9);
					}
				}
				else if (bParam32)
				{
					sVar4 = "CST_KEY_TEXT";
					iVar9 = 63;
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_193437)))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_193437), "", "", "", iVar9);
					}
				}
				else if (bParam25)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_BLIMP";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_193437)))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_193437), "", "", "", iVar9);
					}
				}
				else if (iParam30 != -1)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "DMC_HTM_EH";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					Var10 = { Global_4718592.f_193469[iParam30 /*16*/] };
					if (iParam31 > -1)
					{
						Var10 = { Global_4718592.f_193550[iParam30 /*65*/][iParam31 /*16*/] };
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&Var10))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &Var10, "", "", "", iVar9);
					}
				}
				else if (bParam27)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					iVar9 = 60;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
				}
				else if (bParam34)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_CDM_T";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "FMMC_CDM_F1";
					}
					iVar9 = 60;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
				}
				else if (bParam13)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam33))
					{
						sVar4 = sParam33;
					}
					iVar9 = 63;
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam9)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
					{
						iVar9 = 63;
						if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPT";
						}
						else if (*iParam1 == -3)
						{
							sVar4 = "FMMC_KEY_TIPTS";
						}
						else if (*iParam1 == -4)
						{
							sVar4 = func_261();
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPTF";
						}
						if (func_260())
						{
							if (*iParam1 == 0)
							{
								sVar4 = "PMC_KEY_TIPT";
							}
							else if (*iParam1 == -3)
							{
								sVar4 = "PMC_KEY_TIPTS";
							}
							else if (*iParam1 == -4)
							{
								sVar4 = func_261();
							}
							else
							{
								sVar4 = "PMC_KEY_TIPTF";
							}
						}
					}
					else
					{
						iVar9 = 63;
						if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_ALTT";
						}
						else if (*iParam1 == -3)
						{
							sVar4 = "FMMC_KEY_ALTTS";
						}
						else if (*iParam1 == -4)
						{
							sVar4 = func_261();
						}
						else
						{
							sVar4 = "FMMC_KEY_ALTTF";
						}
						if (func_260())
						{
							if (*iParam1 == 0)
							{
								sVar4 = "PMC_KEY_ALTT";
							}
							else if (*iParam1 == -3)
							{
								sVar4 = "PMC_KEY_ALTTS";
							}
							else if (*iParam1 == -4)
							{
								sVar4 = func_261();
							}
							else
							{
								sVar4 = "PMC_KEY_ALTTF";
							}
						}
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M36";
					}
					iVar26 = 0;
					while (iVar26 <= 7)
					{
						if (MISC::IS_STRING_NULL(&(Global_4718592.f_132664[iVar26 /*16*/])))
						{
							StringCopy(&(Global_4718592.f_132664[iVar26 /*16*/]), "", 64);
						}
						iVar26++;
					}
					MISC::DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(iVar8, sVar4, sVar5, &(Global_4718592.f_132664[0 /*16*/]), &(Global_4718592.f_132664[1 /*16*/]), &(Global_4718592.f_132664[2 /*16*/]), &(Global_4718592.f_132664[3 /*16*/]), &(Global_4718592.f_132664[4 /*16*/]), &(Global_4718592.f_132664[5 /*16*/]), &(Global_4718592.f_132664[6 /*16*/]), &(Global_4718592.f_132664[7 /*16*/]), iVar9);
				}
				else if (bParam6)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP4";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP4F";
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_SMS3";
					}
					iVar9 = 126;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_112337[iParam16 /*44*/].f_6[0 /*16*/])))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						iVar27 = 0;
						while (iVar27 <= 1)
						{
							if (MISC::IS_STRING_NULL(&(Global_4718592.f_112337[iParam16 /*44*/].f_6[iVar27 /*16*/])))
							{
								StringCopy(&(Global_4718592.f_112337[iParam16 /*44*/].f_6[iVar27 /*16*/]), "", 64);
							}
							iVar27++;
						}
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_112337[iParam16 /*44*/].f_6[0 /*16*/]), &(Global_4718592.f_112337[iParam16 /*44*/].f_6[1 /*16*/]), "", "", iVar9);
					}
				}
				else if (bParam8)
				{
					iVar9 = 61;
					if (bParam11)
					{
						if (func_262())
						{
							if (*iParam1 == 0)
							{
								sVar4 = "CELL_EMASH_SOD";
							}
							else if (*iParam1 == -1)
							{
								sVar4 = "CELL_EMASH_SODE";
							}
							else if (*iParam1 == -4)
							{
								sVar4 = func_261();
							}
							else
							{
								sVar4 = "CELL_EMASH_SODF";
							}
						}
						else if (*iParam1 == 0)
						{
							sVar4 = "CELL_EMAIL_SOD";
						}
						else if (*iParam1 == -1)
						{
							sVar4 = "CELL_EMAIL_SODE";
						}
						else if (*iParam1 == -4)
						{
							sVar4 = func_261();
						}
						else
						{
							sVar4 = "CELL_EMAIL_SODF";
						}
						if (MISC::IS_XBOX360_VERSION())
						{
							sVar5 = sVar4;
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					else if (func_262())
					{
						if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8S";
						}
						else if (*iParam1 == -4)
						{
							sVar4 = func_261();
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8FS";
						}
						if (MISC::IS_XBOX360_VERSION())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
						iVar9 = 21;
					}
					else
					{
						if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8";
						}
						else if (*iParam1 == -4)
						{
							sVar4 = func_261();
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8F";
						}
						if (MISC::IS_XBOX360_VERSION())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam12)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP9";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP9F";
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP9N";
					}
					iVar9 = 16;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam39)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP17S";
					}
					else if (*iParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP17ES";
					}
					else if (*iParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP17OS";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP17FS";
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP17N";
					}
					if (MISC::IS_XBOX360_VERSION() || func_194())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam14)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP12N";
					}
					iVar9 = 16;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam28)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIPTN";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPTNF";
					}
					iVar9 = 16;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam15)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					iVar9 = 61;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam17)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP14S";
					}
					else if (*iParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP14ES";
					}
					else if (*iParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP14OS";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP14FS";
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP14N";
					}
					if (func_194())
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 20;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam29)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP16S";
					}
					else if (*iParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP16ES";
					}
					else if (*iParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP16OS";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP16FS";
					}
					if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP16IS";
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP16N";
					}
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(64);
					iVar9 = 15;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam18 > 0)
				{
					if (bParam20)
					{
						sVar4 = "FMMC_KEY_TIP15B";
					}
					else if (bParam21)
					{
						sVar4 = "FMMC_KEY_TIP15U";
					}
					else if (bParam19)
					{
						sVar4 = "FMMC_KEY_TIP15N";
					}
					else if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP15I";
					}
					else if (*iParam1 == 0)
					{
						if (iParam18 == 2)
						{
							sVar4 = "FMMC_MCK_TIP15";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP15";
						}
					}
					else if (*iParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP16OS";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP15F";
					}
					if (MISC::IS_XBOX360_VERSION() || func_194())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam36)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "ACID_NAME_TIP1";
					}
					else if (*iParam1 == -1)
					{
						sVar4 = "ACID_NAME_TIP2";
					}
					else if (*iParam1 == -2)
					{
						sVar4 = "ACID_NAME_TIP3";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "ACID_NAME_TIP4";
					}
					if (bParam23)
					{
						sVar4 = "ACID_NAME_TIP5s";
					}
					if (MISC::IS_XBOX360_VERSION() || func_194())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam37)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "LAB_NAME_TIP1";
					}
					else if (*iParam1 == -1)
					{
						sVar4 = "LAB_NAME_TIP2";
					}
					else if (*iParam1 == -2)
					{
						sVar4 = "LAB_NAME_TIP3";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "LAB_NAME_TIP4";
					}
					if (bParam23)
					{
						sVar4 = "LAB_NAME_TIP5s";
					}
					if (MISC::IS_XBOX360_VERSION() || func_194())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam38)
				{
					if (bParam23)
					{
						sVar4 = "CSTM_TLTIP_TIP5";
					}
					else if (bParam19)
					{
						sVar4 = "CSTM_TLTIP_TIP6";
					}
					else if (*iParam1 == 0)
					{
						sVar4 = "CSTM_TLTIP_TIP1";
					}
					else if (*iParam1 == -1)
					{
						sVar4 = "CSTM_TLTIP_TIP2";
					}
					else if (*iParam1 == -2)
					{
						sVar4 = "CSTM_TLTIP_TIP3";
					}
					else if (*iParam1 == -4)
					{
						sVar4 = func_261();
					}
					else
					{
						sVar4 = "CSTM_TLTIP_TIP4";
					}
					if (MISC::IS_XBOX360_VERSION() || func_194())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(64);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
					{
						iVar9 = 501;
						if (bParam11)
						{
							if (func_262())
							{
								if (*iParam1 == 0)
								{
									sVar4 = "CELL_EMASH_BOD";
								}
								else if (*iParam1 == -1)
								{
									sVar4 = "CELL_EMASH_BODE";
								}
								else if (*iParam1 == -4)
								{
									sVar4 = func_261();
								}
								else
								{
									sVar4 = "CELL_EMASH_BODF";
								}
							}
							else if (*iParam1 == 0)
							{
								sVar4 = "CELL_EMAIL_BOD";
							}
							else if (*iParam1 == -1)
							{
								sVar4 = "CELL_EMAIL_BODE";
							}
							else if (*iParam1 == -4)
							{
								sVar4 = func_261();
							}
							else
							{
								sVar4 = "CELL_EMAIL_BODF";
							}
						}
						else
						{
							if (*iParam1 == 0)
							{
								sVar4 = "FMMC_KEY_TIP3";
							}
							else if (*iParam1 == -1)
							{
								sVar4 = "FMMC_KEY_TIP3E";
							}
							else if (*iParam1 == -4)
							{
								sVar4 = func_261();
							}
							else
							{
								sVar4 = "FMMC_KEY_TIP3F";
							}
							if (func_260())
							{
								if (*iParam1 == 0)
								{
									sVar4 = "PMC_KEY_TIP3";
								}
								else if (*iParam1 == -1)
								{
									sVar4 = "PMC_KEY_TIP3E";
								}
								else if (*iParam1 == -4)
								{
									sVar4 = func_261();
								}
								else
								{
									sVar4 = "PMC_KEY_TIP3F";
								}
							}
						}
					}
					else
					{
						iVar9 = 251;
						if (func_262())
						{
							iVar9 = 150;
						}
						if (bParam11)
						{
							if (*iParam1 == 0)
							{
								sVar4 = "CELL_EMASH_BOD";
							}
							else if (*iParam1 == -1)
							{
								sVar4 = "CELL_EMASH_BODE";
							}
							else if (*iParam1 == -4)
							{
								sVar4 = func_261();
							}
							else
							{
								sVar4 = "CELL_EMASH_BODF";
							}
						}
						else if (func_262())
						{
							if (*iParam1 == 0)
							{
								sVar4 = "FMMC_KEY_TIPSS";
							}
							else if (*iParam1 == -1)
							{
								sVar4 = "FMMC_KEY_TIPSSE";
							}
							else if (*iParam1 == -4)
							{
								sVar4 = func_261();
							}
							else
							{
								sVar4 = "FMMC_KEY_TIPSSF";
							}
						}
						else if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPS";
						}
						else if (*iParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIPSE";
						}
						else if (*iParam1 == -4)
						{
							sVar4 = func_261();
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPSF";
						}
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M20";
						if (bParam11)
						{
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					iVar28 = 0;
					while (iVar28 <= 7)
					{
						if (MISC::IS_STRING_NULL(&(Global_4718592.f_132535[iVar28 /*16*/])))
						{
							StringCopy(&(Global_4718592.f_132535[iVar28 /*16*/]), "", 64);
						}
						iVar28++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam33))
					{
						sVar4 = sParam33;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (bParam11)
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(iVar8, sVar4, sVar5, sParam5, sParam10, "", "", "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(iVar8, sVar4, sVar5, &(Global_4718592.f_132535[0 /*16*/]), &(Global_4718592.f_132535[1 /*16*/]), &(Global_4718592.f_132535[2 /*16*/]), &(Global_4718592.f_132535[3 /*16*/]), &(Global_4718592.f_132535[4 /*16*/]), &(Global_4718592.f_132535[5 /*16*/]), &(Global_4718592.f_132535[6 /*16*/]), &(Global_4718592.f_132535[7 /*16*/]), iVar9);
					}
				}
			}
			StringCopy(&Global_1925585, "", 64);
			*iParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = MISC::UPDATE_ONSCREEN_KEYBOARD();
			switch (*uParam0)
			{
				case 0:
					return 0;
				
				case 3:
					*uParam2 = 0;
					*uParam0 = 0;
					*iParam1 = 0;
					return 0;
				
				case 2:
					*iParam1 = 0;
					return 0;
				
				case 1:
					if ((bParam4 || bParam13) || bParam29)
					{
						if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1925585))
						{
							StringCopy(&Global_1925585, MISC::GET_ONSCREEN_KEYBOARD_RESULT(), 64);
							if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1925585))
							{
								*iParam1 = 0;
								return 1;
							}
							iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT());
							iVar3 = 0;
							while (iVar3 <= (iVar1 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1925585))
									{
										if (MISC::ARE_STRINGS_EQUAL(" ", HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Global_1925585, 0, 1)))
										{
											iVar2 = HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_1925585);
											StringCopy(&Global_1925585, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Global_1925585, 1, iVar2), 64);
										}
									}
									else
									{
										*iParam1 = 0;
										return 1;
									}
								}
								iVar3++;
							}
						}
					}
					if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(*iParam1))
					{
						if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(*iParam1))
						{
							HUD::BUSYSPINNER_OFF();
							iVar0 = SOCIALCLUB::SC_PROFANITY_GET_STRING_STATUS(*iParam1);
							switch (iVar0)
							{
								case 0:
									if (bParam9)
									{
										StringCopy(&Global_1925585, MISC::GET_ONSCREEN_KEYBOARD_RESULT(), 64);
										iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_1925585);
										iVar3 = 0;
										while (iVar3 <= (iVar1 - 1))
										{
											if (*uParam2 != 0)
											{
												if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1925585))
												{
													if (MISC::ARE_STRINGS_EQUAL(" ", HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Global_1925585, iVar3, iVar3 + 1)))
													{
														*iParam1 = -3;
													}
												}
											}
											iVar3++;
										}
									}
									if (*iParam1 != -3)
									{
										*iParam1 = 0;
										return 1;
									}
									else
									{
										*uParam2 = 0;
										*uParam0 = 0;
										return 0;
									}
									break;
								
								case 1:
									*uParam2 = 0;
									*uParam0 = 0;
									return 0;
									break;
								
								case -1:
									*uParam2 = 0;
									*uParam0 = 0;
									*iParam1 = -4;
									return 0;
									break;
							}
						}
						else if (bParam11)
						{
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) == 0)
							{
								HUD::BUSYSPINNER_OFF();
								*iParam1 = 0;
								return 1;
							}
						}
						break;
					}
					if (bParam4)
					{
						if (bParam22)
						{
							SOCIALCLUB::SC_PROFANITY_CHECK_STRING_UGC(&Global_1925585, iParam1);
						}
						else
						{
							SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&Global_1925585, iParam1);
						}
					}
					else if (MISC::IS_STRING_NULL_OR_EMPTY(MISC::GET_ONSCREEN_KEYBOARD_RESULT()))
					{
						*iParam1 = -2;
						*uParam2 = 0;
						*uParam0 = 0;
						HUD::BUSYSPINNER_OFF();
						return 0;
					}
					else if (bParam22)
					{
						SOCIALCLUB::SC_PROFANITY_CHECK_STRING_UGC(MISC::GET_ONSCREEN_KEYBOARD_RESULT(), iParam1);
					}
					else
					{
						SOCIALCLUB::SC_PROFANITY_CHECK_STRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT(), iParam1);
					}
					if (func_194())
					{
						if ((!NETWORK::NETWORK_IS_SIGNED_ONLINE() || func_257() == 0) || func_256() == 1)
						{
							*iParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					if (bParam17)
					{
						HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("ERROR_CHECKYACHTNAME");
						HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
					}
					else if (bParam29)
					{
						HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("ERROR_CHECKVEHICLENAME");
						HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
					}
					else
					{
						HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("ERROR_CHECKPROFANITY");
						HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
					}
					if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(*iParam1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1925585))
						{
							*iParam1 = -1;
						}
						else
						{
							*iParam1 = -2;
						}
						*uParam2 = 0;
						*uParam0 = 0;
						HUD::BUSYSPINNER_OFF();
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_256()
{
	if (!func_257())
	{
		return 1;
	}
	return 0;
}

int func_257()
{
	if (func_258())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_258()
{
	return Global_2697488;
}

int func_259()
{
	return 0;
	return func_210();
}

int func_260()
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2136380241) > 0;
	return 0;
}

char* func_261()
{
	return "PROF_CHK_UA";
}

int func_262()
{
	if ((((LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_263(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_264(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
	}
}

int func_264(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_73(uParam1));
}

void func_265(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_266(var uParam0, char* sParam1)
{
	if (Global_2738986.f_1)
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			NETWORK::NETWORK_SESSION_VOICE_CONNECT_TO_PLAYER(&(uParam0->f_2963));
			Global_2738986.f_20 = { uParam0->f_2963 };
			StringCopy(&(Global_2738986.f_4), sParam1, 64);
			return 1;
		}
	}
	return 0;
}

void func_267(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_268()
{
	if (Global_21610.f_1 > 3)
	{
		Global_21610.f_1 = 9;
		Global_22996 = 1;
		if (Global_80280)
		{
			if (!MISC::IS_PC_VERSION())
			{
				func_170(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				MISC::SET_BIT(&(Global_2733002.f_918), 15);
			}
		}
	}
}

void func_269()
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22998);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_87("CELL_300");
	func_87("CELL_219");
	func_87("CELL_219");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	Global_2738986.f_37 = 1;
	MISC::CLEAR_BIT(&Global_9463, 27);
	func_108();
}

bool func_270(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_271(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

void func_272(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_273(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam3);
}

int func_274(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!func_254(iParam0))
	{
		return 1;
	}
	if (func_281(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_126753[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_281(PLAYER::PLAYER_ID()) || (func_280() && func_279())) && !BitTest(Global_2733002.f_3788, 31)) && !bParam4)
	{
		iVar1 = func_278();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_191(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_126753[iParam1] != -1)
							{
								return func_214(iParam1, iParam0, 0);
							}
							else
							{
								return func_276(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_276(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_126753[iParam1] != -1)
				{
					return func_214(iParam1, iParam0, 0);
				}
				else
				{
					return func_275(0, -1, 0);
				}
			}
			else
			{
				return func_275(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_126753[iParam1] != -1)
		{
			return func_214(iParam1, iParam0, 0);
		}
		else
		{
			return func_276(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_276(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_275(bool bParam0, int iParam1, bool bParam2)
{
	return func_220(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_276(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1845250[PLAYER::PLAYER_ID() /*880*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1845250[iVar2 /*880*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_238())
			{
				iVar3 = func_234(iParam0);
				if (!iVar3 == -1)
				{
					return func_232(iVar3);
				}
			}
			if ((func_277(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_16, 18)) || ((func_216(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && BitTest(Global_4718592.f_16, 23)) && !BitTest(Global_4718592.f_16, 18)))
			{
				return func_225(1);
			}
			else if (BitTest(Global_4718592.f_16, 26))
			{
				return func_215(1);
			}
			else
			{
				return func_220(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836707 || Global_1836697) || Global_1845250[iParam0 /*880*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836707 == 1 && Global_1836717 == 0))
			{
				return func_225(1);
			}
			else
			{
				return func_220(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836701 && Global_1836163.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_234(iParam0);
	if (!iVar4 == -1)
	{
		return func_232(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_277(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

var func_278()
{
	return Global_2621446.f_2;
}

var func_279()
{
	return BitTest(Global_2621446, 4);
}

var func_280()
{
	return BitTest(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_36.f_18, 14);
}

int func_281(int iParam0)
{
	if (func_208(iParam0, 0))
	{
		return 1;
	}
	if (func_282())
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

bool func_282()
{
	return BitTest(Global_2621446, 3);
}

int func_283(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_294())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_64())
	{
		return 0;
	}
	if (func_293())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_290(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_289(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_288())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1836463)
	{
		return 0;
	}
	if (func_287())
	{
		return 0;
	}
	if (func_286())
	{
		return 0;
	}
	if (func_285())
	{
		return 0;
	}
	if (Global_77342)
	{
		return 0;
	}
	if (Global_2740204)
	{
		return 0;
	}
	if (func_284())
	{
		return 0;
	}
	return 1;
}

bool func_284()
{
	return Global_2709273;
}

bool func_285()
{
	return Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_185 != 0;
}

bool func_286()
{
	return Global_2685150.f_693;
}

bool func_287()
{
	return Global_2685150.f_848;
}

bool func_288()
{
	return Global_2673271.f_2915.f_583;
}

int func_289(int iParam0)
{
	if (Global_2658291[iParam0 /*468*/].f_222 == 0)
	{
		return 0;
	}
	return 1;
}

int func_290(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_291(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845250[iParam0 /*880*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_291(int iParam0)
{
	return func_292(iParam0);
}

var func_292(int iParam0)
{
	return BitTest(Global_1845250[iParam0 /*880*/].f_11.f_1, 0);
}

bool func_293()
{
	return BitTest(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_36.f_18, 0);
}

int func_294()
{
	if (Global_22983 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_295(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_267(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_296(var uParam0)
{
	return uParam0->f_1;
}

void func_297()
{
	Global_2738986.f_1 = 0;
	Global_2738986 = 0;
	Global_2738986.f_2 = 0;
	Global_2738986.f_33 = -1;
	Global_2738986.f_34 = -1;
	StringCopy(&(Global_2738986.f_4), "", 64);
	StringCopy(&(Global_2738986.f_39[0 /*16*/]), "", 64);
	Global_2738986.f_38 = 0;
	Global_2738986.f_56 = 0;
	Global_2738986.f_57 = 0;
	Global_2738986.f_58 = -2;
	Global_2738986.f_3 = 0;
	func_298(&(Global_2738986.f_20));
}

void func_298(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_299()
{
	Global_2738986.f_2 = 1;
	Global_2738986.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2738986 = 0;
			Global_2738986.f_2 = 0;
		}
		else if (func_270(Global_2738986.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2738986.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2738986.f_20)))
				{
					func_297();
				}
			}
		}
		else
		{
			func_297();
		}
	}
	else
	{
		func_297();
	}
	if (Global_2738986.f_37)
	{
		func_39(0);
	}
	Global_2738986.f_37 = 0;
	Global_2738986.f_3 = 0;
}

void func_300(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_311())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("service_spend_mechanic_wage"):
		case joaat("service_spend_utility_bills"):
		case joaat("service_spend_prostitutes"):
		case joaat("service_spend_strip_club"):
		case joaat("service_spend_cinema"):
		case joaat("service_spend_fairground"):
		case joaat("service_spend_lottery"):
		case joaat("service_spend_telescope"):
		case joaat("service_spend_call_player"):
		case joaat("service_spend_vehicle_insurance"):
		case joaat("service_spend_vehicle_insurance_premium"):
		case joaat("service_spend_car_repair"):
		case joaat("service_spend_personal_vehicle_dropoff"):
		case joaat("service_spend_pegasus_delivery"):
		case joaat("service_spend_car_impound"):
		case joaat("service_spend_carwash"):
		case joaat("service_spend_healthcare"):
		case joaat("service_spend_other_player_healthcare"):
		case joaat("service_spend_arrest_bail"):
		case joaat("service_spend_cash_drop"):
		case joaat("service_spend_robbed_by_mugger"):
		case joaat("service_spend_cash_drop_holdup"):
		case joaat("service_spend_match_entry_fee"):
		case joaat("service_spend_race_vehicle_rental"):
		case joaat("service_spend_challenge_wager"):
		case joaat("service_spend_betting"):
		case joaat("service_spend_airstrike"):
		case joaat("service_spend_ammo_drop"):
		case joaat("service_spend_backup_gang"):
		case joaat("service_spend_backup_heli"):
		case joaat("service_spend_boat_pickup"):
		case joaat("service_spend_bounty"):
		case joaat("service_spend_bull_shark"):
		case joaat("service_spend_cops_turn_eye"):
		case joaat("service_spend_heli_pickup"):
		case joaat("service_spend_hire_mercenary"):
		case joaat("service_spend_hire_mugger"):
		case joaat("service_spend_locate_vehicle"):
		case joaat("service_spend_lose_wanted_level"):
		case joaat("service_spend_off_the_radar"):
		case joaat("service_spend_passive"):
		case joaat("service_spend_request_heist"):
		case joaat("service_spend_request_job"):
		case joaat("service_spend_reveal_players"):
		case joaat("service_spend_taxi"):
		case joaat("service_spend_bank_interest"):
		case joaat("service_spend_cash_gift"):
		case joaat("service_spend_cash_shared"):
		case joaat("service_spend_impromptu_race_fee"):
		case joaat("service_spend_bounty_dm"):
		case joaat("service_spend_wager"):
		case joaat("service_spend_pay_boss"):
		case joaat("service_spend_pay_goon"):
		case joaat("service_spend_rename_organization"):
		case joaat("service_spend_rename_acid_product"):
		case joaat("service_spend_rename_acid_lab"):
		case joaat("service_spend_pa_service_heli_pickup"):
		case joaat("service_spend_order_bodyguard_vehicle"):
		case joaat("service_spend_order_warehouse_vehicle"):
		case joaat("service_spend_jukebox"):
		case joaat("service_spend_business"):
		case joaat("service_spend_ba_vp_bounty"):
		case joaat("service_spend_ba_vp_bullshark"):
		case joaat("service_spend_ba_sarge_ammo"):
		case joaat("service_spend_ba_sarge_molotov"):
		case joaat("service_spend_ba_enforcer_armour"):
		case joaat("service_spend_vehicle_export_mods"):
		case joaat("service_spend_import_export_repair"):
		case joaat("service_spend_employ_assassins"):
		case joaat("service_spend_gangops_cannon"):
		case joaat("service_spend_gangops_skip_mission"):
		case joaat("service_spend_gangops_start_strand"):
		case joaat("service_spend_gangops_trip_skip"):
		case joaat("service_spend_gangops_repair_cost"):
		case joaat("service_spend_nightclub_entry_fee"):
		case joaat("service_spend_nightclub_bar_drink"):
		case joaat("service_spend_nightclub_dj_rehire"):
		case joaat("service_spend_arena_join_spectator"):
		case joaat("service_spend_arena_spectator_box"):
		case joaat("service_spend_make_it_rain"):
		case 571787049:
			if (iParam1 > 0 || Global_262145.f_28023)
			{
				func_301(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_pickup"):
		case joaat("service_earn_jobs"):
		case joaat("service_earn_betting"):
		case joaat("service_earn_lottery"):
		case joaat("service_earn_challenge_win"):
		case joaat("service_earn_property_sales"):
		case joaat("service_earn_vehicle_sales"):
		case joaat("service_earn_lester_target_kill"):
		case joaat("service_earn_bounty_collected"):
		case joaat("service_earn_crate_drop"):
		case joaat("service_earn_holdups"):
		case joaat("service_earn_import_export"):
		case joaat("service_earn_armored_trucks"):
		case joaat("service_earn_jobshare_cash"):
		case joaat("service_earn_not_badsport"):
		case joaat("service_earn_bank_interest"):
		case joaat("service_earn_debug"):
		case joaat("service_earn_cncw"):
		case joaat("service_earn_cncb"):
		case joaat("service_earn_job_bonus"):
		case joaat("service_earn_bend_job"):
		case joaat("service_earn_personal_vehicle"):
		case joaat("service_earn_daily_objectives"):
		case joaat("service_earn_ambient_job_plane_takedown"):
		case joaat("service_earn_ambient_job_distract_cops"):
		case joaat("service_earn_ambient_job_destroy_veh"):
		case joaat("service_earn_refund_backup_vagos"):
		case joaat("service_earn_refund_backup_lost"):
		case joaat("service_earn_refund_backup_families"):
		case joaat("service_earn_refund_hire_mugger"):
		case joaat("service_earn_refund_hire_mercenary"):
		case joaat("service_earn_refund_buy_cardropoff"):
		case joaat("service_earn_refund_heli_pickup"):
		case joaat("service_earn_refund_boat_pickup"):
		case joaat("service_earn_refund_clear_wanted"):
		case joaat("service_earn_refund_head_2_head"):
		case joaat("service_earn_refund_challenge"):
		case joaat("service_earn_refund_share_last_job"):
		case joaat("service_earn_refund_lottery"):
		case -1426920838:
		case joaat("service_earn_gangattack_pickup"):
		case joaat("service_earn_ambient_job_hot_target_deliver"):
		case joaat("service_earn_ambient_job_hot_target_kill"):
		case joaat("service_earn_ambient_job_urban_warfare"):
		case joaat("service_earn_ambient_job_checkpoint_collection"):
		case joaat("service_earn_ambient_job_time_trial"):
		case joaat("service_earn_ambient_job_challenges"):
		case joaat("service_earn_ambient_job_heli_hot_target"):
		case joaat("service_earn_ambient_job_dead_drop"):
		case joaat("service_earn_ambient_job_penned_in"):
		case joaat("service_earn_ambient_job_pass_parcel"):
		case joaat("service_earn_ambient_job_blast"):
		case joaat("service_earn_ambient_job_hot_property"):
		case joaat("service_earn_ambient_job_king"):
		case joaat("service_earn_ambient_job_beast"):
		case joaat("service_earn_boss"):
		case joaat("service_earn_goon"):
		case joaat("service_earn_boss_agency"):
		case joaat("service_earn_from_destroying_contraband"):
		case joaat("service_earn_premium_job"):
		case joaat("service_earn_from_vehicle_export"):
		case joaat("service_earn_smuggler_agency"):
		case joaat("service_earn_wage_payment_bonus"):
		case joaat("service_earn_wage_payment"):
		case joaat("service_earn_refundammodrop"):
		case joaat("service_earn_salvage_checkpoint_collection"):
		case joaat("service_earn_ambient_mugging"):
		case joaat("service_earn_ambient_pickup"):
		case joaat("service_earn_deathmatch_bounty"):
		case joaat("service_earn_cashing_out"):
		case joaat("service_earn_job_bonus_criminal_mastermind"):
		case joaat("service_earn_job_bonus_heist_award"):
		case joaat("service_earn_job_bonus_first_time_bonus"):
		case joaat("service_earn_refund_orbital_manual"):
		case joaat("service_earn_refund_orbital_auto"):
		case joaat("service_earn_gangops_wages"):
		case joaat("service_earn_gangops_wages_bonus"):
		case joaat("service_earn_gangops_prep_participation"):
		case joaat("service_earn_gangops_setup"):
		case joaat("service_earn_gangops_setup_fail"):
		case joaat("service_earn_gangops_finale"):
		case joaat("service_earn_gangops_award_mastermind_2"):
		case joaat("service_earn_gangops_award_mastermind_3"):
		case joaat("service_earn_gangops_award_mastermind_4"):
		case joaat("service_earn_gangops_award_loyalty_award_2"):
		case joaat("service_earn_gangops_award_loyalty_award_3"):
		case joaat("service_earn_gangops_award_loyalty_award_4"):
		case joaat("service_earn_gangops_award_first_time_xm_base"):
		case joaat("service_earn_gangops_award_first_time_xm_submarine"):
		case joaat("service_earn_gangops_award_first_time_xm_silo"):
		case joaat("service_earn_gangops_award_supporting"):
		case joaat("service_earn_gangops_award_order"):
		case joaat("service_earn_gangops_elite_xm_base"):
		case joaat("service_earn_gangops_elite_xm_submarine"):
		case joaat("service_earn_gangops_elite_xm_silo"):
		case joaat("service_earn_gangops_rival_delivery"):
		case joaat("service_earn_doomsday_finale_bonus"):
		case joaat("service_earn_bounty_hunter_reward"):
		case joaat("service_earn_from_business_battle"):
		case joaat("service_earn_from_club_management_participation"):
		case joaat("service_earn_from_fmbb_phonecall_mission"):
		case joaat("service_earn_from_business_hub_sell"):
		case joaat("service_earn_from_fmbb_boss_work"):
		case joaat("service_earn_fmbb_wage_bonus"):
		case joaat("service_earn_bb_event_bonus"):
		case joaat("service_earn_arena_skill_lvl_award"):
		case joaat("service_earn_arena_career_tier_progression_1"):
		case joaat("service_earn_arena_career_tier_progression_2"):
		case joaat("service_earn_arena_career_tier_progression_3"):
		case joaat("service_earn_arena_career_tier_progression_4"):
		case joaat("service_earn_spin_the_wheel_cash"):
			func_301(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("service_spend_spin_the_wheel_payment"):
		case joaat("service_spend_casino_generic"):
		case joaat("service_spend_arcade_game"):
		case joaat("service_spend_arcade_generic"):
		case joaat("service_spend_casino_heist_skip_mission"):
		case joaat("service_spend_casino_heist_setup_heist"):
		case joaat("service_spend_casino_heist_casino_model"):
		case joaat("service_spend_casino_heist_vault_door"):
		case joaat("service_spend_casino_heist_door_security"):
		case joaat("service_spend_island_heist_support_airstrike"):
		case joaat("service_spend_island_heist_support_heavy_weapon"):
		case joaat("service_spend_island_heist_support_sniper"):
		case joaat("service_spend_island_heist_support_air_support"):
		case joaat("service_spend_island_heist_support_drone"):
		case joaat("service_spend_island_heist_support_weapon_stash"):
		case joaat("service_spend_island_heist_suppressors"):
		case joaat("service_spend_island_heist_replay"):
		case joaat("service_spend_beach_party_generic"):
		case joaat("service_spend_submarine_utility_fee"):
		case joaat("service_spend_submarine_boat"):
		case joaat("service_spend_submarine_relocation"):
		case joaat("service_spend_casino_club_generic"):
		case joaat("service_spend_business_expenses"):
		case joaat("service_spend_fixer_hq_concierge"):
		case joaat("service_spend_request_company_suv"):
		case joaat("service_spend_interaction_menu_ability"):
		case joaat("service_spend_agent_14_vehicle_request"):
		case joaat("service_spend_tony_limo"):
		case joaat("service_spend_nightclub_toilet_attendant"):
		case joaat("service_spend_jugallo_boss_vehicle_request"):
		case 1989973742:
		case 767920357:
		case 1238804234:
		case -2140508184:
			if (iParam1 > 0 || Global_262145.f_28023)
			{
				func_301(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_assassinate_target_killed"):
		case joaat("service_earn_arena_war"):
		case joaat("service_earn_refund_arena_spec_box_entry"):
		case joaat("service_earn_ambient_job_rc_time_trial"):
		case joaat("service_earn_daily_objective_event"):
		case joaat("service_earn_collectables_action_figures"):
		case joaat("service_earn_casino_mission_reward"):
		case joaat("service_earn_casino_award_mission_one_first_time"):
		case joaat("service_earn_casino_award_mission_two_first_time"):
		case joaat("service_earn_casino_award_mission_three_first_time"):
		case joaat("service_earn_casino_award_mission_four_first_time"):
		case joaat("service_earn_casino_award_mission_five_first_time"):
		case joaat("service_earn_casino_award_mission_six_first_time"):
		case joaat("service_earn_casino_award_straight_flush"):
		case joaat("service_earn_casino_award_top_pair"):
		case joaat("service_earn_casino_award_full_house"):
		case joaat("service_earn_casino_award_lucky_lucky"):
		case joaat("service_earn_casino_award_high_roller_bronze"):
		case joaat("service_earn_casino_award_high_roller_silver"):
		case joaat("service_earn_casino_award_high_roller_gold"):
		case joaat("service_earn_casino_award_high_roller_platinum"):
		case joaat("service_earn_casino_story_mission_reward"):
		case joaat("service_earn_casino_heist_setup_mission"):
		case joaat("service_earn_casino_heist_prep_mission"):
		case joaat("service_earn_casino_heist_finale"):
		case joaat("service_earn_casino_heist_award_smash_n_grab"):
		case joaat("service_earn_casino_heist_award_in_plain_sight"):
		case joaat("service_earn_casino_heist_award_undetected"):
		case joaat("service_earn_casino_heist_award_all_rounder"):
		case joaat("service_earn_casino_heist_award_elite_thief"):
		case joaat("service_earn_casino_heist_award_professional"):
		case joaat("service_earn_casino_heist_elite_stealth"):
		case joaat("service_earn_casino_heist_elite_subterfuge"):
		case joaat("service_earn_casino_heist_elite_direct"):
		case joaat("service_earn_collectable_item"):
		case joaat("service_earn_collectable_completed_collection"):
		case joaat("service_earn_collectables_signal_jammers"):
		case joaat("service_earn_collectables_signal_jammers_complete"):
		case joaat("service_earn_island_heist_finale"):
		case joaat("service_earn_island_heist_elite_challenge"):
		case joaat("service_earn_island_heist_award_professional"):
		case joaat("service_earn_island_heist_award_elite_thief"):
		case joaat("service_earn_island_heist_award_the_island_heist"):
		case joaat("service_earn_island_heist_award_going_alone"):
		case joaat("service_earn_island_heist_award_team_work"):
		case joaat("service_earn_island_heist_award_cat_burglar"):
		case joaat("service_earn_island_heist_award_pro_thief"):
		case joaat("service_earn_island_heist_award_mixing_it_up"):
		case joaat("service_earn_island_heist_prep"):
		case joaat("service_earn_island_heist_dj_mission"):
		case joaat("service_earn_tuner_robbery_prep"):
		case joaat("service_earn_tuner_robbery_finale"):
		case joaat("service_earn_tuner_car_club_membership"):
		case joaat("service_earn_tuner_daily_vehicle"):
		case joaat("service_earn_tuner_daily_vehicle_bonus"):
		case joaat("service_earn_tuner_award_union_depository"):
		case joaat("service_earn_tuner_award_military_convoy"):
		case joaat("service_earn_tuner_award_fleeca_bank"):
		case joaat("service_earn_tuner_award_freight_train"):
		case joaat("service_earn_tuner_award_bolingbroke_ass"):
		case joaat("service_earn_tuner_award_iaa_raid"):
		case joaat("service_earn_tuner_award_meth_job"):
		case joaat("service_earn_tuner_award_bunker_raid"):
		case joaat("service_earn_auto_shop_delivery_award"):
		case joaat("service_earn_agency_security_contract"):
		case joaat("service_earn_agency_payphone_hit"):
		case joaat("service_earn_agency_story_prep"):
		case joaat("service_earn_agency_story_finale"):
		case joaat("service_earn_fixer_award_sec_con"):
		case joaat("service_earn_fixer_award_phone_hit"):
		case joaat("service_earn_fixer_award_agency_story"):
		case joaat("service_earn_fixer_award_short_trip"):
		case joaat("service_earn_fixer_rival_delivery"):
		case joaat("service_earn_music_studio_short_trip"):
		case joaat("service_earn_from_contraband"):
		case joaat("service_earn_nclub_troublemaker"):
		case joaat("service_earn_sightseeing_reward"):
		case joaat("service_earn_ambient_job_clubhouse_contract"):
		case joaat("service_earn_ambient_job_underwater_cargo"):
		case joaat("service_earn_ambient_job_crime_scene"):
		case joaat("service_earn_ambient_job_metal_detector"):
		case joaat("service_earn_ambient_job_smuggler_plane"):
		case joaat("service_earn_ambient_job_smuggler_trail"):
		case joaat("service_earn_ambient_job_golden_gun"):
		case joaat("service_earn_ambient_job_ammunation_delivery"):
		case joaat("service_earn_ambient_job_source_research"):
		case joaat("service_earn_yohan_source_goods"):
		case joaat("service_earn_taxi_job"):
		case joaat("service_earn_daily_stash_house_participation"):
		case joaat("service_earn_daily_stash_house_completed"):
		case joaat("service_earn_ambient_job_gang_convoy"):
		case joaat("service_earn_ambient_job_shop_robbery"):
		case joaat("service_earn_ambient_job_xmas_mugger"):
		case joaat("service_earn_ambient_job_maze_bank"):
		case joaat("service_earn_juggalo_story_mission"):
		case joaat("service_earn_juggalo_phone_mission"):
		case joaat("service_earn_winter_22_award_juggalo_story"):
		case joaat("service_earn_winter_22_award_acid_lab"):
		case joaat("service_earn_winter_22_award_daily_stash"):
		case joaat("service_earn_winter_22_award_dead_drop"):
		case joaat("service_earn_winter_22_award_random_event"):
		case joaat("service_earn_winter_22_award_taxi"):
		case joaat("service_earn_acid_lab_setup_participation"):
		case joaat("service_earn_acid_lab_source_participation"):
		case joaat("service_earn_acid_lab_sell_participation"):
		case joaat("service_earn_smuggler_ops"):
		case joaat("service_earn_ambient_job_armored_truck"):
		case joaat("service_earn_ambient_job_bicycle_time_trial"):
		case joaat("service_earn_cayo_attrition_bonus_objective"):
		case joaat("service_earn_avenger_operations"):
		case joaat("service_earn_avenger_ops_bonus"):
		case joaat("service_earn_ambient_job_drug_vehicle"):
		case 649031587:
		case -1539520895:
		case 560526114:
		case -256590568:
		case -470808433:
		case 1245164680:
		case -1433838369:
		case 1648751987:
		case 674719198:
		case 617724895:
		case 1424147761:
		case 2131157548:
		case 1237940902:
		case -1688538833:
		case 918785029:
		case -1343182760:
		case -1725871206:
		case 1435585629:
		case 1851118721:
		case -1961446392:
		case -1726080156:
		case 300207193:
		case 1378095557:
		case -1948553812:
		case -1672547752:
		case -485163763:
		case 723646035:
		case 805615290:
		case -243568299:
		case 1226579288:
		case -2107356056:
		case -428381543:
		case 72361536:
		case -804351832:
		case 1570992221:
		case 565434243:
		case -1154756209:
		case 1496037489:
		case -1919450538:
			func_301(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_301(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_311())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_74()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4516903 = 1;
			return 0;
		}
		if (Global_2698442)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4516904 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4515413[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_308(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4515413[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4515413[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4516884 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4516902 = 1;
			Global_4516905 = iParam4;
			Global_4516907 = iParam3;
			Global_4516908 = 1;
			Global_4516906 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4516905 = iParam4;
			Global_4516907 = iParam3;
			Global_4516908 = 1;
			Global_4516906 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_307(1, iParam4);
			Global_4516902 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_302(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_302(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			MISC::SET_BIT(&(Global_2658291[PLAYER::PLAYER_ID() /*468*/].f_130.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_303(iParam0);
	}
}

void func_303(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_311())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_306(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4515413[iParam0 /*84*/].f_65);
		}
		func_304(&(Global_4515413[iParam0 /*84*/]));
	}
}

void func_304(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_12 = 0;
	uParam0->f_2 = 0;
	func_305(&(uParam0->f_13));
	func_305(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_305(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_306(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4515413[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_307(int iParam0, int iParam1)
{
	Global_2699667 = iParam1;
	Global_2699666 = iParam0;
}

int func_308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4515413[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_311())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4515413[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4515413[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4515413[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4515413[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4515413[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4515413[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4515413[iVar0 /*84*/].f_65 = iParam0;
			Global_4515413[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4515413[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4515413[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4515413[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4515413[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4515413[iVar0 /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			Global_4515413[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4516884 = 0;
			if (bParam6)
			{
				Global_4515413[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_309(Global_4515413[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_309(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)
{
	struct<4> Var0;
	int iVar36;
	
	if (iParam84 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_65 };
	Var0.f_3.f_32 = iParam84;
	iVar36 = func_310(Var0.f_1);
	if (Global_262145.f_23800 && !Global_262145.f_23801)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 36, iVar36, Var0.f_0);
	}
}

var func_310(int iParam0)
{
	var uVar0;
	
	if (func_254(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_311()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_312(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_9464, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9464, 20);
	}
}

void func_313(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_314(char* sParam0)
{
	Global_8778 = 132;
	StringCopy(&Global_22998, sParam0, 64);
	if (Global_21610.f_1 > 3)
	{
		Global_21610.f_1 = 10;
		func_124();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_22998);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_87("CELL_300");
	func_87("CELL_211");
	func_87("CELL_211");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	MISC::SET_BIT(&Global_9463, 20);
	func_108();
	MISC::CLEAR_BIT(&Global_9463, 20);
}

void func_315()
{
	NETWORK::NETWORK_SESSION_VOICE_HOST();
	Global_2738986 = 1;
	Global_2738986.f_2 = 0;
	Global_2738986.f_33 = -1;
	Global_2738986.f_34 = -1;
	Global_2738986.f_38 = 0;
}

void func_316()
{
	AUDIO::STOP_SOUND(iLocal_78);
	AUDIO::RELEASE_SOUND_ID(iLocal_78);
	Local_305.f_2978 = 0;
	MISC::CLEAR_BIT(&Global_9463, 16);
	MISC::CLEAR_BIT(&Global_9463, 9);
	MISC::CLEAR_BIT(&Global_9463, 29);
	MISC::CLEAR_BIT(&Global_9464, 20);
	MISC::CLEAR_BIT(&Global_9464, 0);
	MISC::CLEAR_BIT(&Global_9464, 18);
	func_318(12, iLocal_277);
	func_318(2, iLocal_278);
	func_318(0, iLocal_279);
	if (Local_305.f_2999 == 1)
	{
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (Global_2738986.f_33 == -1)
			{
				func_299();
			}
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_317()
{
	if (!Global_80280)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (BitTest(Global_9463, 11))
			{
				if (!Global_21553)
				{
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
				}
				if (Global_80280)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				MISC::CLEAR_BIT(&Global_9463, 11);
			}
		}
	}
}

void func_318(int iParam0, int iParam1)
{
	Global_2339[iParam0 /*29*/].f_1 = iParam1;
	if (iParam0 < 162)
	{
		Global_114904.f_28058[iParam0 /*29*/].f_1 = iParam1;
	}
}

void func_319()
{
	int iVar0[222];
	int iVar223;
	int iVar224;
	int iVar225;
	
	func_318(147, 1320);
	func_318(74, 180);
	func_318(75, 190);
	func_173(Global_21591, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	SYSTEM::WAIT(0);
	iLocal_68 = 0;
	iLocal_107 = 0;
	iLocal_90 = 0;
	func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iVar223 = 0;
	while (iVar223 < 221)
	{
		iVar224 = 0;
		iVar225 = 221;
		func_318(iVar225, 5000);
		func_22();
		while (iVar224 < 221)
		{
			if (BitTest(Global_9464, 0))
			{
				if ((iVar224 == 2 || iVar224 == 0) || iVar224 == 12)
				{
					func_318(12, 3);
					func_318(2, 1);
					func_318(0, 2);
					bLocal_65 = true;
				}
				else
				{
					bLocal_65 = false;
				}
			}
			else if (func_158(iVar224, Global_21610) == 1)
			{
				bLocal_65 = true;
			}
			else
			{
				bLocal_65 = false;
			}
			if (bLocal_65)
			{
				if (iVar224 != Global_21610)
				{
					if (iVar0[iVar224] == 0)
					{
						if (func_330(iVar224, Global_21610) == 1 || func_96(iVar224, Global_21610))
						{
							fLocal_66 = (SYSTEM::TO_FLOAT(func_341(iVar224)) / 100f);
						}
						else
						{
							fLocal_66 = SYSTEM::TO_FLOAT(func_341(iVar224));
						}
						if (func_330(iVar225, Global_21610) == 1 || func_96(iVar225, Global_21610))
						{
							fLocal_67 = (SYSTEM::TO_FLOAT(func_341(iVar225)) / 100f);
						}
						else
						{
							fLocal_67 = SYSTEM::TO_FLOAT(func_341(iVar225));
						}
						if (fLocal_66 < fLocal_67)
						{
							iVar225 = iVar224;
							if (BitTest(Global_9464, 0))
							{
								if (iVar225 == 2)
								{
									func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar223), 0f, -1f, -1f, "CELL_7001", &(Global_2339[iVar225 /*29*/].f_3), &(Global_2339[iVar225 /*29*/].f_7), 0, 0);
								}
								if (iVar225 == 0)
								{
									func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar223), 0f, -1f, -1f, "CELL_7002", &(Global_2339[iVar225 /*29*/].f_3), &(Global_2339[iVar225 /*29*/].f_7), 0, 0);
								}
								if (iVar225 == 12)
								{
									func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar223), 0f, -1f, -1f, "CELL_7003", &(Global_2339[iVar225 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar224++;
		}
		Global_21616[iVar223] = iVar225;
		iVar0[iVar225] = 1;
		if (!BitTest(Global_9464, 0))
		{
			if (func_158(iVar225, Global_21610) == 1)
			{
				if (iVar224 != Global_21610)
				{
					if (func_86(iVar225, Global_21610) == 0)
					{
						if (func_330(iVar225, Global_21610) == 1 || func_96(iVar225, Global_21610))
						{
							func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar223), 1f, -1f, -1f, &(Global_118[iVar225 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar223), 0f, -1f, -1f, &(Global_118[iVar225 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (func_330(iVar225, Global_21610) == 1 || func_96(iVar225, Global_21610))
					{
						func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar223), 1f, -1f, -1f, &(Global_2339[iVar225 /*29*/].f_3), &(Global_2339[iVar225 /*29*/].f_3), &(Global_2339[iVar225 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar223), 0f, -1f, -1f, &(Global_2339[iVar225 /*29*/].f_3), &(Global_2339[iVar225 /*29*/].f_3), &(Global_2339[iVar225 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (func_158(iVar223, Global_21610) == 1)
		{
			if (iVar223 != Global_21610)
			{
				iLocal_68++;
			}
		}
		iVar223++;
	}
	if (!BitTest(Global_9464, 0))
	{
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (Global_21553 == 0)
			{
				func_321();
			}
		}
	}
	func_320();
}

void func_320()
{
	if (!Global_21610.f_1 == 10 && !Global_21610.f_1 == 9)
	{
		if (BitTest(Global_9463, 9))
		{
			SYSTEM::WAIT(750);
		}
		if (Global_21610.f_1 > 6)
		{
			func_173(Global_21591, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (BitTest(Global_9464, 0))
			{
				func_171(Global_21591, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_171(Global_21591, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_9466 = 99;
			if (BitTest(Global_9463, 9))
			{
				if (Global_21598)
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9463, 17);
			}
			else if (BitTest(Global_9464, 0))
			{
				if (Global_21598)
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_170(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_170(Global_21591, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21598)
			{
				if (iLocal_68 > 0)
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_21553 == 0)
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					MISC::SET_BIT(&Global_9463, 17);
				}
				else
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::SET_BIT(&Global_9463, 17);
				}
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_68 > 0)
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_170(Global_21591, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_170(Global_21591, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::SET_BIT(&Global_9463, 17);
				func_170(Global_21591, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
	func_318(12, iLocal_277);
	func_318(2, iLocal_278);
	func_318(0, iLocal_279);
}

void func_321()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	func_318(147, 1320);
	func_318(74, 180);
	func_318(75, 190);
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_69 = iLocal_68;
	iLocal_70 = iLocal_69;
	func_329(&Local_305);
	iVar16 = 0;
	if (Global_80280)
	{
		if (func_324() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (func_191(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == PLAYER::PLAYER_ID())
				{
					Local_305[iVar1] = iVar0;
					func_323(PLAYER::GET_PLAYER_NAME(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_305.f_33 = iVar1;
	iVar2 = 0;
	iVar1 = 0;
	if (func_195(PLAYER::PLAYER_ID()))
	{
		iVar17 = NETWORK::NETWORK_GET_FRIEND_COUNT();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (NETWORK::NETWORK_IS_FRIEND_ONLINE(NETWORK::NETWORK_GET_FRIEND_NAME(iVar2)))
			{
				if (NETWORK::NETWORK_IS_FRIEND_IN_SAME_TITLE(NETWORK::NETWORK_GET_FRIEND_NAME(iVar2)))
				{
					Var3 = { func_322(iVar2) };
					if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_305.f_34[iVar1 /*29*/] = { Var3 };
								if (func_194())
								{
									StringCopy(&(Local_305.f_34[iVar1 /*29*/].f_13), NETWORK::NETWORK_GET_FRIEND_DISPLAY_NAME(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_305.f_34[iVar1 /*29*/].f_13), NETWORK::NETWORK_GET_FRIEND_NAME(iVar2), 64);
								}
								func_323(&(Local_305.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_305.f_2935 = (Local_305.f_33 + iVar1);
}

struct<13> func_322(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_FRIEND(iParam0, &Var0, 13);
	return Var0;
}

void func_323(char* sParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(2));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iLocal_69));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_87("CELL_MP_999");
	func_87("CELL_MP_999");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_69++;
	iLocal_68++;
}

int func_324()
{
	if (!func_325())
	{
		return 0;
	}
	return 1;
}

int func_325()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_328())
	{
		return 1;
	}
	if (func_327())
	{
		return 1;
	}
	return func_326(120, -1);
}

int func_326(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_264(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_327()
{
	return Global_1575078;
}

bool func_328()
{
	return Global_1575080;
}

void func_329(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = func_17();
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		uParam0->f_34[iVar0 /*29*/] = { Var1 };
		iVar0++;
	}
	uParam0->f_2936 = 0;
	uParam0->f_33 = 0;
	uParam0->f_2935 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_2937[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_2946 = 0;
	StringCopy(&(uParam0->f_2947), "", 64);
	uParam0->f_2963 = { Var1 };
	uParam0->f_2976 = 0;
	uParam0->f_2977 = 0;
	func_313(&(uParam0->f_2979));
	uParam0->f_2999 = 0;
	StringCopy(&(uParam0->f_2983), "", 64);
}

int func_330(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2339[iParam0 /*29*/].f_19[iParam1];
}

void func_331()
{
	int iVar0[222];
	int iVar223;
	int iVar224;
	int iVar225;
	int iVar226;
	
	func_318(147, 1320);
	func_318(74, 180);
	func_318(75, 190);
	func_173(Global_21591, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	SYSTEM::WAIT(0);
	func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iLocal_68 = 0;
	if (!BitTest(Global_9464, 0))
	{
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (Global_21553 == 0 && func_340(0))
			{
				func_338();
			}
		}
	}
	iLocal_71 = iLocal_68;
	iLocal_107 = 0;
	iLocal_90 = 0;
	iVar223 = iLocal_68;
	while (iVar223 < 221)
	{
		iVar224 = 0;
		iVar225 = 221;
		func_318(iVar225, 5000);
		func_22();
		while (iVar224 < 221)
		{
			if (BitTest(Global_9464, 0))
			{
				if ((iVar224 == 2 || iVar224 == 0) || iVar224 == 12)
				{
					func_318(12, 3);
					func_318(2, 1);
					func_318(0, 2);
					bLocal_65 = true;
				}
				else
				{
					bLocal_65 = false;
				}
			}
			else if (func_158(iVar224, Global_21610) == 1)
			{
				bLocal_65 = true;
			}
			else
			{
				bLocal_65 = false;
			}
			if (func_337())
			{
				if (Global_1836596 == 1 && iVar224 == 19)
				{
					bLocal_65 = false;
				}
				if (Global_1836595 == 1 && iVar224 == 175)
				{
					bLocal_65 = false;
				}
			}
			iVar226 = iVar224;
			if ((func_336(iVar226) && !func_333(iVar226)) && !func_332(iVar226))
			{
				bLocal_65 = false;
			}
			if (bLocal_65)
			{
				if (iVar224 != Global_21610)
				{
					if (iVar0[iVar224] == 0)
					{
						if (func_330(iVar224, Global_21610) == 1 || func_96(iVar224, Global_21610))
						{
							fLocal_66 = (SYSTEM::TO_FLOAT(func_341(iVar224)) / 100f);
						}
						else
						{
							fLocal_66 = SYSTEM::TO_FLOAT(func_341(iVar224));
						}
						if (func_330(iVar225, Global_21610) == 1 || func_96(iVar225, Global_21610))
						{
							fLocal_67 = (SYSTEM::TO_FLOAT(func_341(iVar225)) / 100f);
						}
						else
						{
							fLocal_67 = SYSTEM::TO_FLOAT(func_341(iVar225));
						}
						if (fLocal_66 < fLocal_67)
						{
							iVar225 = iVar224;
							if (BitTest(Global_9464, 0))
							{
								if (iVar225 == 2)
								{
									func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar223), 0f, -1f, -1f, "CELL_7001", &(Global_2339[iVar225 /*29*/].f_3), &(Global_2339[iVar225 /*29*/].f_7), 0, 0);
								}
								if (iVar225 == 0)
								{
									func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar223), 0f, -1f, -1f, "CELL_7002", &(Global_2339[iVar225 /*29*/].f_3), &(Global_2339[iVar225 /*29*/].f_7), 0, 0);
								}
								if (iVar225 == 12)
								{
									func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar223), 0f, -1f, -1f, "CELL_7003", &(Global_2339[iVar225 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar224++;
		}
		Global_21616[iVar223] = iVar225;
		iVar0[iVar225] = 1;
		if (!BitTest(Global_9464, 0))
		{
			if (func_158(iVar225, Global_21610) == 1)
			{
				if (iVar224 != Global_21610)
				{
					if (func_86(iVar225, Global_21610) == 0)
					{
						if (func_330(iVar225, Global_21610) == 1 || func_96(iVar225, Global_21610))
						{
							func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar223), 1f, -1f, -1f, &(Global_118[iVar225 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar223), 0f, -1f, -1f, &(Global_118[iVar225 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (func_330(iVar225, Global_21610) == 1 || func_96(iVar225, Global_21610))
					{
						func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar223), 1f, -1f, -1f, &(Global_2339[iVar225 /*29*/].f_3), &(Global_2339[iVar225 /*29*/].f_3), &(Global_2339[iVar225 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_170(Global_21591, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar223), 0f, -1f, -1f, &(Global_2339[iVar225 /*29*/].f_3), &(Global_2339[iVar225 /*29*/].f_3), &(Global_2339[iVar225 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (func_158(iVar223, Global_21610) == 1)
		{
			if (iVar223 != Global_21610)
			{
				iLocal_68++;
			}
		}
		iVar223++;
	}
	func_320();
}

int func_332(int iParam0)
{
	if (BitTest(Global_9463, 16))
	{
		return Global_24014 == iParam0;
	}
	return 0;
}

int func_333(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!func_335())
	{
		return 1;
	}
	iVar0 = func_334(iParam0);
	if (iVar0 != -1)
	{
		iVar1 = (iVar0 / 32);
		bVar2 = (iVar0 % 32);
		switch (iVar1)
		{
			case 0:
				return !BitTest(func_71(10869, -1), bVar2);
			
			case 1:
				return !BitTest(func_71(10870, -1), bVar2);
			
			case 2:
				return !BitTest(func_71(10871, -1), bVar2);
			}
		
		default:
	}
	return 0;
}

int func_334(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		case 18:
			return 2;
		
		case 19:
			return 3;
		
		case 20:
			return 4;
		
		case 22:
			return 5;
		
		case 31:
			return 6;
		
		case 41:
			return 7;
		
		case 52:
			return 8;
		
		case 53:
			return 9;
		
		case 62:
			return 10;
		
		case 74:
			return 11;
		
		case 75:
			return 11;
		
		case 76:
			return 12;
		
		case 77:
			return 13;
		
		case 78:
			return 14;
		
		case 79:
			return 15;
		
		case 80:
			return 16;
		
		case 81:
			return 17;
		
		case 82:
			return 18;
		
		case 84:
			return 19;
		
		case 85:
			return 20;
		
		case 86:
			return 21;
		
		case 130:
			return 22;
		
		case 104:
			return 23;
		
		case 105:
			return 24;
		
		case 106:
			return 25;
		
		case 107:
			return 26;
		
		case 108:
			return 27;
		
		case 109:
			return 28;
		
		case 110:
			return 29;
		
		case 111:
			return 30;
		
		case 131:
			return 31;
		
		case 147:
			return 32;
		
		case 148:
			return 33;
		
		case 151:
			return 34;
		
		case 152:
			return 35;
		
		case 153:
			return 36;
		
		case 154:
			return 37;
		
		case 155:
			return 38;
		
		case 156:
			return 39;
		
		case 157:
			return 40;
		
		case 158:
			return 41;
		
		case 159:
			return 42;
		
		case 163:
			return 43;
		
		case 164:
			return 44;
		
		case 167:
			return 45;
		
		case 168:
			return 46;
		
		case 169:
			return 47;
		
		case 171:
			return 48;
		
		case 172:
			return 49;
		
		case 173:
			return 50;
		
		case 175:
			return 51;
		
		case 176:
			return 52;
		
		case 179:
			return 53;
		
		case 180:
			return 54;
		
		case 181:
			return 55;
		
		case 182:
			return 56;
		
		case 183:
			return 57;
		
		case 184:
			return 58;
		
		case 188:
			return 59;
		
		case 189:
			return 60;
		
		case 165:
			return 61;
		
		case 190:
			return 62;
		
		case 191:
			return 63;
		
		case 195:
			return 64;
		
		case 196:
			return 65;
		
		case 197:
			return 66;
		
		case 201:
			return 67;
		
		case 204:
			return 69;
		
		case 210:
			return 70;
		
		case 212:
			return 71;
		
		case 213:
			return 72;
		
		case 214:
			return 73;
		
		default:
	}
	return -1;
}

bool func_335()
{
	return Global_262145.f_33214;
}

bool func_336(int iParam0)
{
	return func_334(iParam0) != -1;
}

int func_337()
{
	if (Global_80280)
	{
		if (Global_1836595 || Global_1836596 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_338()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	int iVar17;
	
	func_318(147, 1320);
	func_318(74, 180);
	func_318(75, 190);
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_69 = iLocal_68;
	iLocal_70 = iLocal_69;
	func_329(&Local_305);
	iVar16 = 0;
	if (Global_80280)
	{
		if (func_324() == 0)
		{
			iVar16 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (func_191(iVar0, 0, 1))
		{
			if (iVar16 == 0)
			{
				if (!iVar0 == PLAYER::PLAYER_ID())
				{
					Local_305[iVar1] = iVar0;
					func_339(PLAYER::GET_PLAYER_NAME(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_305.f_33 = iVar1;
	iVar1 = 0;
	iVar2 = 0;
	if (func_195(PLAYER::PLAYER_ID()))
	{
		iVar17 = NETWORK::NETWORK_GET_FRIEND_COUNT();
		if (iVar17 > 100)
		{
			iVar17 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar17 - 1))
		{
			if (NETWORK::NETWORK_IS_FRIEND_ONLINE(NETWORK::NETWORK_GET_FRIEND_NAME(iVar2)))
			{
				if (NETWORK::NETWORK_IS_FRIEND_IN_SAME_TITLE(NETWORK::NETWORK_GET_FRIEND_NAME(iVar2)))
				{
					Var3 = { func_322(iVar2) };
					if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var3))
					{
						if (iVar16 == 0)
						{
							if (iVar1 < 100)
							{
								Local_305.f_34[iVar1 /*29*/] = { Var3 };
								if (func_194())
								{
									StringCopy(&(Local_305.f_34[iVar1 /*29*/].f_13), NETWORK::NETWORK_GET_FRIEND_DISPLAY_NAME(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_305.f_34[iVar1 /*29*/].f_13), NETWORK::NETWORK_GET_FRIEND_NAME(iVar2), 64);
								}
								func_339(&(Local_305.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_305.f_2935 = (Local_305.f_33 + iVar1);
}

void func_339(char* sParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(2));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(iLocal_69));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_87("CELL_MP_999");
	func_87("CELL_MP_999");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_69++;
	iLocal_68++;
}

int func_340(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (!func_335())
	{
		return 1;
	}
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	switch (iVar0)
	{
		case 0:
			return !BitTest(func_71(10869, -1), bVar1);
		
		case 1:
			return !BitTest(func_71(10870, -1), bVar1);
		
		case 2:
			return !BitTest(func_71(10871, -1), bVar1);
		
		default:
	}
	return 0;
}

var func_341(int iParam0)
{
	return Global_2339[iParam0 /*29*/].f_1;
}

