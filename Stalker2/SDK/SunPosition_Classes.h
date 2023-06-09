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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class SunPosition.SunPositionFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USunPositionFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetSunPosition(float Latitude, float Longitude, float TimeZone, bool bIsDaylightSavingTime, int32_t Year, int32_t Month, int32_t Day, int32_t Hours, int32_t Minutes, int32_t Seconds, struct FSunPositionData* SunPositionData, int32_t Milliseconds);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
