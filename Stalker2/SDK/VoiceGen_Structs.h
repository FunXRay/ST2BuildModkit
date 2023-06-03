﻿#pragma once

/**
 * Name: Stalker2
 * Version: 0.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum VoiceGen.EVoiceGenVoice
	 */
	enum class EVoiceGenVoice : uint8_t
	{
		ar_XA_Wavenet_A_FEMALE   = 0,
		ar_XA_Wavenet_B_MALE     = 1,
		ar_XA_Wavenet_C_MALE     = 2,
		cs_CZ_Wavenet_A_FEMALE   = 3,
		da_DK_Wavenet_A_FEMALE   = 4,
		de_DE_Wavenet_A_FEMALE   = 5,
		de_DE_Wavenet_B_MALE     = 6,
		de_DE_Wavenet_C_FEMALE   = 7,
		de_DE_Wavenet_D_MALE     = 8,
		el_GR_Wavenet_A_FEMALE   = 9,
		en_AU_Wavenet_A_FEMALE   = 10,
		en_AU_Wavenet_B_MALE     = 11,
		en_AU_Wavenet_C_FEMALE   = 12,
		en_AU_Wavenet_D_MALE     = 13,
		en_GB_Wavenet_A_FEMALE   = 14,
		en_GB_Wavenet_B_MALE     = 15,
		en_GB_Wavenet_C_FEMALE   = 16,
		en_GB_Wavenet_D_MALE     = 17,
		en_IN_Wavenet_A_FEMALE   = 18,
		en_IN_Wavenet_B_MALE     = 19,
		en_IN_Wavenet_C_MALE     = 20,
		en_US_Wavenet_A_MALE     = 21,
		en_US_Wavenet_B_MALE     = 22,
		en_US_Wavenet_C_FEMALE   = 23,
		en_US_Wavenet_D_MALE     = 24,
		en_US_Wavenet_E_FEMALE   = 25,
		en_US_Wavenet_F_FEMALE   = 26,
		fi_FI_Wavenet_A_FEMALE   = 27,
		fil_PH_Wavenet_A_FEMALE  = 28,
		fr_CA_Wavenet_A_FEMALE   = 29,
		fr_CA_Wavenet_B_MALE     = 30,
		fr_CA_Wavenet_C_FEMALE   = 31,
		fr_CA_Wavenet_D_MALE     = 32,
		fr_FR_Wavenet_A_FEMALE   = 33,
		fr_FR_Wavenet_B_MALE     = 34,
		fr_FR_Wavenet_C_FEMALE   = 35,
		fr_FR_Wavenet_D_MALE     = 36,
		hi_IN_Wavenet_A_FEMALE   = 37,
		hi_IN_Wavenet_B_MALE     = 38,
		hi_IN_Wavenet_C_MALE     = 39,
		hu_HU_Wavenet_A_FEMALE   = 40,
		id_ID_Wavenet_A_FEMALE   = 41,
		id_ID_Wavenet_B_MALE     = 42,
		id_ID_Wavenet_C_MALE     = 43,
		it_IT_Wavenet_A_FEMALE   = 44,
		ja_JP_Wavenet_A_FEMALE   = 45,
		ja_JP_Wavenet_B_FEMALE   = 46,
		ja_JP_Wavenet_C_MALE     = 47,
		ja_JP_Wavenet_D_MALE     = 48,
		ko_KR_Wavenet_B_FEMALE   = 49,
		ko_KR_Wavenet_C_MALE     = 50,
		ko_KR_Wavenet_D_MALE     = 51,
		ko_KR_Wavenet_A_FEMALE   = 52,
		nb_no_Wavenet_E_FEMALE   = 53,
		nb_NO_Wavenet_A_FEMALE   = 54,
		nb_NO_Wavenet_B_MALE     = 55,
		nb_NO_Wavenet_C_FEMALE   = 56,
		nb_NO_Wavenet_D_MALE     = 57,
		nl_NL_Wavenet_B_MALE     = 58,
		nl_NL_Wavenet_C_MALE     = 59,
		nl_NL_Wavenet_D_FEMALE   = 60,
		nl_NL_Wavenet_E_FEMALE   = 61,
		nl_NL_Wavenet_A_FEMALE   = 62,
		pl_PL_Wavenet_A_FEMALE   = 63,
		pl_PL_Wavenet_B_MALE     = 64,
		pl_PL_Wavenet_C_MALE     = 65,
		pl_PL_Wavenet_D_FEMALE   = 66,
		pl_PL_Wavenet_E_FEMALE   = 67,
		pt_BR_Wavenet_A_FEMALE   = 68,
		pt_PT_Wavenet_A_FEMALE   = 69,
		pt_PT_Wavenet_B_MALE     = 70,
		pt_PT_Wavenet_C_MALE     = 71,
		pt_PT_Wavenet_D_FEMALE   = 72,
		ru_RU_Wavenet_A_FEMALE   = 73,
		ru_RU_Wavenet_B_MALE     = 74,
		ru_RU_Wavenet_C_FEMALE   = 75,
		ru_RU_Wavenet_D_MALE     = 76,
		sk_SK_Wavenet_A_FEMALE   = 77,
		sv_SE_Wavenet_A_FEMALE   = 78,
		tr_TR_Wavenet_A_FEMALE   = 79,
		tr_TR_Wavenet_B_MALE     = 80,
		tr_TR_Wavenet_C_FEMALE   = 81,
		tr_TR_Wavenet_D_FEMALE   = 82,
		tr_TR_Wavenet_E_MALE     = 83,
		uk_UA_Wavenet_A_FEMALE   = 84,
		vi_VN_Wavenet_A_FEMALE   = 85,
		vi_VN_Wavenet_B_MALE     = 86,
		vi_VN_Wavenet_C_FEMALE   = 87,
		vi_VN_Wavenet_D_MALE     = 88,
		es_ES_Standard_A_FEMALE  = 89,
		ar_XA_Standard_A_FEMALE  = 90,
		ar_XA_Standard_B_MALE    = 91,
		ar_XA_Standard_C_MALE    = 92,
		it_IT_Standard_A_FEMALE  = 93,
		ru_RU_Standard_A_FEMALE  = 94,
		ru_RU_Standard_B_MALE    = 95,
		ru_RU_Standard_C_FEMALE  = 96,
		ru_RU_Standard_D_MALE    = 97,
		ko_KR_Standard_A_FEMALE  = 98,
		ko_KR_Standard_B_FEMALE  = 99,
		ko_KR_Standard_C_MALE    = 100,
		ko_KR_Standard_D_MALE    = 101,
		ja_JP_Standard_A_FEMALE  = 102,
		ja_JP_Standard_B_FEMALE  = 103,
		ja_JP_Standard_C_MALE    = 104,
		ja_JP_Standard_D_MALE    = 105,
		vi_VN_Standard_A_FEMALE  = 106,
		vi_VN_Standard_B_MALE    = 107,
		vi_VN_Standard_C_FEMALE  = 108,
		vi_VN_Standard_D_MALE    = 109,
		fil_PH_Standard_A_FEMALE = 110,
		id_ID_Standard_A_FEMALE  = 111,
		id_ID_Standard_B_MALE    = 112,
		id_ID_Standard_C_MALE    = 113,
		nl_NL_Standard_A_FEMALE  = 114,
		nl_NL_Standard_B_MALE    = 115,
		nl_NL_Standard_C_MALE    = 116,
		nl_NL_Standard_D_FEMALE  = 117,
		nl_NL_Standard_E_FEMALE  = 118,
		cs_CZ_Standard_A_FEMALE  = 119,
		el_GR_Standard_A_FEMALE  = 120,
		pt_BR_Standard_A_FEMALE  = 121,
		hu_HU_Standard_A_FEMALE  = 122,
		pl_PL_Standard_E_FEMALE  = 123,
		pl_PL_Standard_A_FEMALE  = 124,
		pl_PL_Standard_B_MALE    = 125,
		pl_PL_Standard_C_MALE    = 126,
		pl_PL_Standard_D_FEMALE  = 127,
		sk_SK_Standard_A_FEMALE  = 128,
		tr_TR_Standard_A_FEMALE  = 129,
		tr_TR_Standard_B_MALE    = 130,
		tr_TR_Standard_C_FEMALE  = 131,
		tr_TR_Standard_D_FEMALE  = 132,
		tr_TR_Standard_E_MALE    = 133,
		uk_UA_Standard_A_FEMALE  = 134,
		en_IN_Standard_A_FEMALE  = 135,
		en_IN_Standard_B_MALE    = 136,
		en_IN_Standard_C_MALE    = 137,
		hi_IN_Standard_A_FEMALE  = 138,
		hi_IN_Standard_B_MALE    = 139,
		hi_IN_Standard_C_MALE    = 140,
		da_DK_Standard_A_FEMALE  = 141,
		fi_FI_Standard_A_FEMALE  = 142,
		pt_PT_Standard_A_FEMALE  = 143,
		pt_PT_Standard_B_MALE    = 144,
		pt_PT_Standard_C_MALE    = 145,
		pt_PT_Standard_D_FEMALE  = 146,
		nb_no_Standard_E_FEMALE  = 147,
		nb_NO_Standard_A_FEMALE  = 148,
		nb_NO_Standard_B_MALE    = 149,
		nb_NO_Standard_C_FEMALE  = 150,
		nb_NO_Standard_D_MALE    = 151,
		sv_SE_Standard_A_FEMALE  = 152,
		en_GB_Standard_A_FEMALE  = 153,
		en_GB_Standard_B_MALE    = 154,
		en_GB_Standard_C_FEMALE  = 155,
		en_GB_Standard_D_MALE    = 156,
		en_US_Standard_B_MALE    = 157,
		en_US_Standard_C_FEMALE  = 158,
		en_US_Standard_D_MALE    = 159,
		en_US_Standard_E_FEMALE  = 160,
		de_DE_Standard_A_FEMALE  = 161,
		de_DE_Standard_B_MALE    = 162,
		en_AU_Standard_A_FEMALE  = 163,
		en_AU_Standard_B_MALE    = 164,
		en_AU_Standard_C_FEMALE  = 165,
		en_AU_Standard_D_MALE    = 166,
		fr_CA_Standard_A_FEMALE  = 167,
		fr_CA_Standard_B_MALE    = 168,
		fr_CA_Standard_C_FEMALE  = 169,
		fr_CA_Standard_D_MALE    = 170,
		fr_FR_Standard_A_FEMALE  = 171,
		fr_FR_Standard_B_MALE    = 172,
		fr_FR_Standard_C_FEMALE  = 173,
		fr_FR_Standard_D_MALE    = 174,
		MAX                      = 175
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct VoiceGen.VoiceGenParams
	 * Size -> 0x000C
	 */
	struct FVoiceGenParams
	{
	public:
		EVoiceGenVoice                                             Voice;                                                   // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YHR2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Pitch;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeakingRate;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
