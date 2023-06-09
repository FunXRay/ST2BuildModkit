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
	 * Enum SkinnedDecalComponent.ESkinnedDecalAdditionalData
	 */
	enum class ESkinnedDecalAdditionalData : uint8_t
	{
		NoAdditionalData = 0,
		SpawnTime        = 1,
		DecalBoneID      = 2,
		MAX              = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
