﻿#pragma once

/**
 * Name: Stalker2
 * Version: 0.3
 */

#define PROCESS_EVENTS_INDEX 0x4B
#define CREATE_DEFAULT_OBJECT_INDEX 0x00
#define POST_RENDER_INDEX 0x3C || 0x41 || 0x6C
#define GET_BONE_MATRIX_OFFSET 0x00
#define GET_VIEW_POINT_INDEX 0x00
#define GET_PLAYER_VIEW_POINT_OFFSET 0x00

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#include "Global_Structs.h"
#include "Global_Classes.h"
#include "Global_Params.h"

