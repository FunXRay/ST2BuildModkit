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
	 * Enum MovieRenderPipelineRenderPasses.EEXRCompressionFormat
	 */
	enum class EEXRCompressionFormat : uint8_t
	{
		None = 0,
		PIZ  = 1,
		ZIP  = 2,
		DWAA = 3,
		DWAB = 4,
		MAX  = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MovieRenderPipelineRenderPasses.MoviePipelinePostProcessPass
	 * Size -> 0x0030
	 */
	struct FMoviePipelinePostProcessPass
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JM5J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Material[0x28];                                          // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
