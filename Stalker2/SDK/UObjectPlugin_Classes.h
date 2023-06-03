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
	 * Class UObjectPlugin.MyPluginObject
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMyPluginObject : public UObject
	{
	public:
		struct FMyPluginStruct                                     MyStruct;                                                // 0x0028(0x0010) NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
