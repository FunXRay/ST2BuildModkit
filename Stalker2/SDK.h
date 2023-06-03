﻿#pragma once

// --------------------------------------- \\
//      Sdk Generated By ( CheatGear )     \\
// --------------------------------------- \\
// Name: Stalker2, Version: 0.3

#include <set>
#include <string>
#include <vector>
#include <locale>
#include <unordered_set>
#include <unordered_map>
#include <iostream>
#include <sstream>
#include <cstdint>
#include <Windows.h>

#include "SDK/BasicTypes_Package.h"
#include "SDK/Global_Package.h"
#include "SDK/CoreUObject_Package.h"
#include "SDK/NiagaraCore_Package.h"
#include "SDK/PacketHandler_Package.h"
#include "SDK/InputCore_Package.h"
#include "SDK/DeveloperSettings_Package.h"
#include "SDK/Chaos_Package.h"
#include "SDK/PhysicsCore_Package.h"
#include "SDK/AudioPlatformConfiguration_Package.h"
#include "SDK/AudioExtensions_Package.h"
#include "SDK/CoreOnline_Package.h"
#include "SDK/NetCore_Package.h"
#include "SDK/SlateCore_Package.h"
#include "SDK/Slate_Package.h"
#include "SDK/MeshDescription_Package.h"
#include "SDK/TypedElementFramework_Package.h"
#include "SDK/ClothingSystemRuntimeInterface_Package.h"
#include "SDK/Engine_Package.h"
#include "SDK/OpenColorIO_Package.h"
#include "SDK/PropertyPath_Package.h"
#include "SDK/MovieScene_Package.h"
#include "SDK/MovieSceneTracks_Package.h"
#include "SDK/UMG_Package.h"
#include "SDK/MovieRenderPipelineCore_Package.h"
#include "SDK/MovieRenderPipelineSettings_Package.h"
#include "SDK/NiagaraShader_Package.h"
#include "SDK/Niagara_Package.h"
#include "SDK/HoudiniNiagara_Package.h"
#include "SDK/SoundUtilities_Package.h"
#include "SDK/HeadMountedDisplay_Package.h"
#include "SDK/ChaosSolverEngine_Package.h"
#include "SDK/GeometryCollectionEngine_Package.h"
#include "SDK/ApexDestruction_Package.h"
#include "SDK/GameplayTags_Package.h"
#include "SDK/GameplayTasks_Package.h"
#include "SDK/NavigationSystem_Package.h"
#include "SDK/AIModule_Package.h"
#include "SDK/AudioMixer_Package.h"
#include "SDK/AkAudio_Package.h"
#include "SDK/EnhancedInput_Package.h"
#include "SDK/SunPosition_Package.h"
#include "SDK/Stalker2_Package.h"
#include "SDK/W_CheckedWindow_Package.h"
#include "SDK/RigVM_Package.h"
#include "SDK/LevelSequence_Package.h"
#include "SDK/AnimationCore_Package.h"
#include "SDK/ControlRig_Package.h"
#include "SDK/ControlRigSpline_Package.h"
#include "SDK/StreamlineBlueprint_Package.h"
#include "SDK/SRLEAsset_Package.h"
#include "SDK/SignificanceManager_Package.h"
#include "SDK/UObjectPlugin_Package.h"
#include "SDK/VectorVM_Package.h"
#include "SDK/W_SaveSlot_Package.h"
#include "SDK/DmgTypeBP_Environmental_Package.h"
#include "SDK/W_UserWaterElement_Package.h"
#include "SDK/PBIK_Package.h"
#include "SDK/IKRig_Package.h"
#include "SDK/CinematicKeyFrameTracks_Package.h"
#include "SDK/ImGui_Package.h"
#include "SDK/AxisMain_ByRama_Package.h"
#include "SDK/AnimationSharing_Package.h"
#include "SDK/AdvancedWidgets_Package.h"
#include "SDK/CustomMeshComponent_Package.h"
#include "SDK/ResonanceAudio_Package.h"
#include "SDK/AnimGraphRuntime_Package.h"
#include "SDK/Synthesis_Package.h"
#include "SDK/Landscape_Package.h"
#include "SDK/Water_Package.h"
#include "SDK/MetasoundFrontend_Package.h"
#include "SDK/MetasoundEngine_Package.h"
#include "SDK/ClothingSystemRuntimeCommon_Package.h"
#include "SDK/ClothingSystemRuntimeNv_Package.h"
#include "SDK/SessionMessages_Package.h"
#include "SDK/MaterialShaderQualitySettings_Package.h"
#include "SDK/ProceduralMeshComponent_Package.h"
#include "SDK/ChaosNiagara_Package.h"
#include "SDK/W_BenchmarkPlayerMenu_Package.h"
#include "SDK/ImgMediaEngine_Package.h"
#include "SDK/AudioCapture_Package.h"
#include "SDK/W_UserWaterElementText_Package.h"
#include "SDK/VoiceGen_Package.h"
#include "SDK/OnlineSubsystem_Package.h"
#include "SDK/OnlineSubsystemUtils_Package.h"
#include "SDK/Foliage_Package.h"
#include "SDK/StaticMeshDescription_Package.h"
#include "SDK/SubMenuInterface_Package.h"
#include "SDK/DirectLinkTest_Package.h"
#include "SDK/W_PauseMenu_Package.h"
#include "SDK/DLSS_Package.h"
#include "SDK/GamepadUMGPlugin_Package.h"
#include "SDK/AudioModulation_Package.h"
#include "SDK/HoudiniEngineRuntime_Package.h"
#include "SDK/MediaCompositing_Package.h"
#include "SDK/DynamicPlayRate_Package.h"
#include "SDK/CinematicCamera_Package.h"
#include "SDK/TemplateSequence_Package.h"
#include "SDK/AssetRegistry_Package.h"
#include "SDK/ActorSequence_Package.h"
#include "SDK/FacialAnimation_Package.h"
#include "SDK/SequencerScripting_Package.h"
#include "SDK/EngineSettings_Package.h"
#include "SDK/AugmentedReality_Package.h"
#include "SDK/AxisElement_ByRama_Package.h"
#include "SDK/ControlsSettingsDetails_Package.h"
#include "SDK/SkinnedDecalComponent_Package.h"
#include "SDK/AudioLinkEngine_Package.h"
#include "SDK/W_Text_Package.h"
#include "SDK/CableComponent_Package.h"
#include "SDK/Landmass_Package.h"
#include "SDK/DirectLink_Package.h"
#include "SDK/PrefabAsset_Package.h"
#include "SDK/GeometryCache_Package.h"
#include "SDK/VariantManagerContent_Package.h"
#include "SDK/AndroidFileServer_Package.h"
#include "SDK/EngineMessages_Package.h"
#include "SDK/AssetTags_Package.h"
#include "SDK/MediaUtils_Package.h"
#include "SDK/MediaAssets_Package.h"
#include "SDK/ImgMedia_Package.h"
#include "SDK/ArchVisCharacter_Package.h"
#include "SDK/ImageWriteQueue_Package.h"
#include "SDK/MovieSceneCapture_Package.h"
#include "SDK/GameplayCameras_Package.h"
#include "SDK/PoseSearch_Package.h"
#include "SDK/MoviePlayer_Package.h"
#include "SDK/NiagaraAnimNotifies_Package.h"
#include "SDK/ChaosCloth_Package.h"
#include "SDK/HairStrandsCore_Package.h"
#include "SDK/TimeManagement_Package.h"
#include "SDK/Spatialization_Package.h"
#include "SDK/GeometryCollectionTracks_Package.h"
#include "SDK/WTF_Settings_Graphics_Package.h"
#include "SDK/AudioWidgets_Package.h"
#include "SDK/Serialization_Package.h"
#include "SDK/AudioLinkCore_Package.h"
#include "SDK/W_GameMenuElement_Package.h"
#include "SDK/ActorLayerUtilities_Package.h"
#include "SDK/MovieRenderPipelineRenderPasses_Package.h"
#include "SDK/DatasmithCore_Package.h"
#include "SDK/JsonUtilities_Package.h"
#include "SDK/TcpMessaging_Package.h"
#include "SDK/W_MainMenuView_Package.h"
#include "SDK/BuildPatchServices_Package.h"
#include "SDK/BP_BenchmarkPlayer_Package.h"
#include "SDK/TakeMovieScene_Package.h"
#include "SDK/DLSSBlueprint_Package.h"
#include "SDK/AutomationUtils_Package.h"
#include "SDK/Stalker2BPGlobal_Package.h"
#include "SDK/AudioAnalyzer_Package.h"
#include "SDK/AudioSynesthesia_Package.h"
#include "SDK/OodleNetworkHandlerComponent_Package.h"
#include "SDK/GeometryCacheTracks_Package.h"
#include "SDK/FullBodyIK_Package.h"
#include "SDK/TypedElementRuntime_Package.h"
#include "SDK/DebugGUI_Package.h"
#include "SDK/WmfMediaFactory_Package.h"
#include "SDK/MRMesh_Package.h"
#include "SDK/ImgMediaFactory_Package.h"
#include "SDK/SoundFields_Package.h"
#include "SDK/LevelBookmarks_Package.h"
#include "SDK/W_SaveGame_Package.h"
#include "SDK/FieldSystemEngine_Package.h"
#include "SDK/EyeTracker_Package.h"
#include "SDK/W_Settings_Package.h"
#include "SDK/RawInput_Package.h"
#include "SDK/AppleImageUtils_Package.h"
#include "SDK/W_CatcherAction_Package.h"
#include "SDK/DatasmithContent_Package.h"
#include "SDK/Paper2D_Package.h"
#include "SDK/Overlay_Package.h"
#include "SDK/UdpMessaging_Package.h"
#include "SDK/AndroidPermission_Package.h"
#include "SDK/VictoryElement_Package.h"
#include "SDK/W_WaterElement_Package.h"
