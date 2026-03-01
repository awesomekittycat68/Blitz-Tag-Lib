#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CustomMapLoader_LoadZoneRequest.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "../GorillaTagScripts_VirtualStumpCustomMaps/MapLoadStatus.hpp"

namespace GlobalNamespace {
    struct CustomMapLoader : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapLoader");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::CustomMapLoader* GetInstance() {
            static BNM::Field<::GlobalNamespace::CustomMapLoader*> field = GetClass().GetField("instance");
            return field.Get();
        }
        bool GetCanLoadEntities() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CanLoadEntities"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCanLoadEntities(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CanLoadEntities"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int64_t GetLoadedMapModFileId() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_LoadedMapModFileId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::CustomMapAccessDoor* GetAccessDoor() {
            static BNM::Field<::GlobalNamespace::CustomMapAccessDoor*> _field = GetClass().GetField(O("accessDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetAPPROVEDLAYERS() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("APPROVED_LAYERS"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetAssetBundleSceneFilePaths() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("assetBundleSceneFilePaths"));
            return _field.Get();
        }
        ::GameObject* GetAtmNoShellPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("atmNoShellPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetAtmPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("atmPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int64_t GetAttemptedLoadID() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("attemptedLoadID"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetAttemptedSceneToLoad() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("attemptedSceneToLoad"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>* GetAvailableModesForOldMaps() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("availableModesForOldMaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::MonoType*>* GetBadComponents() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::MonoType*>*> _field = GetClass().GetField(O("badComponents"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetCachedExceptionMessage() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedExceptionMessage"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetCachedLuauScript() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedLuauScript"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::MonoType*>* GetComponentAllowlist() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::MonoType*>*> _field = GetClass().GetField(O("componentAllowlist"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetComponentTypeStringAllowList() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("componentTypeStringAllowList"));
            return _field.Get();
        }
        ::GlobalNamespace::CompositeTriggerEvents* GetCompositeTryOnArea() {
            static BNM::Field<::GlobalNamespace::CompositeTriggerEvents*> _field = GetClass().GetField(O("compositeTryOnArea"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GameObject* GetCustomMapATM() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("customMapATM"));
            return _field.Get();
        }
        ::Transform* GetCustomMapsDefaultSpawnLocation() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("CustomMapsDefaultSpawnLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings* GetCustomMapZoneShaderSettings() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings*> _field = GetClass().GetField(O("customMapZoneShaderSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BetterDayNightManager* GetDayNightManager() {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager*> _field = GetClass().GetField(O("dayNightManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDefaultFont() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("DefaultFont"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaGameModes::GameModeType GetDefaultGameModeForNonCustomOldMaps() {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("defaultGameModeForNonCustomOldMaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterParameters* GetDefaultLavaParameters() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterParameters*> _field = GetClass().GetField(O("defaultLavaParameters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NexusGroupId* GetDefaultNexusGroupId() {
            static BNM::Field<::GlobalNamespace::NexusGroupId*> _field = GetClass().GetField(O("defaultNexusGroupId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Swimming::WaterParameters* GetDefaultWaterParameters() {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterParameters*> _field = GetClass().GetField(O("defaultWaterParameters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetDevModeEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("devModeEnabled"));
            return _field.Get();
        }
        static bool GetDisableHoldingHandsAllModes() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableHoldingHandsAllModes"));
            return _field.Get();
        }
        static bool GetDisableHoldingHandsCustomMode() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableHoldingHandsCustomMode"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDontDestroyOnLoadSceneName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("dontDestroyOnLoadSceneName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetEntitiesToCreate() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("entitiesToCreate"));
            return _field.Get();
        }
        static bool GetErrorEncounteredDuringLoad() {
            static BNM::Field<bool> _field = GetClass().GetField(O("errorEncounteredDuringLoad"));
            return _field.Get();
        }
        ::GameObject* GetForceVolumePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("forceVolumePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorManager* GetGhostReactorManager() {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("ghostReactorManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGliderWindVolume() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gliderWindVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        ::GameObject* GetHoverboardDispenserPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("hoverboardDispenserPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::Component*>* GetInitializePhaseTwoComponents() {
            static BNM::Field<::BNM::Structures::Mono::List<::Component*>*> _field = GetClass().GetField(O("initializePhaseTwoComponents"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetInitialSceneIndexes() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("initialSceneIndexes"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetInitialSceneNames() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("initialSceneNames"));
            return _field.Get();
        }
        static ::GlobalNamespace::CustomMapLoader* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::CustomMapLoader*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static bool GetIsLoading() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLoading"));
            return _field.Get();
        }
        static bool GetIsUnloading() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isUnloading"));
            return _field.Get();
        }
        ::GameObject* GetLeafGlider() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leafGlider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetLeafGliderIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("leafGliderIndex"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GliderHoldable*>* GetLeafGliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GliderHoldable*>*> _field = GetClass().GetField(O("leafGliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::LightmapData*>* GetLightmaps() {
            static BNM::Field<::BNM::Structures::Mono::Array<::LightmapData*>*> _field = GetClass().GetField(O("lightmaps"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::Texture2D*>* GetLightmapsToKeep() {
            static BNM::Field<::BNM::Structures::Mono::List<::Texture2D*>*> _field = GetClass().GetField(O("lightmapsToKeep"));
            return _field.Get();
        }
        static int64_t GetLoadedMapModFileId_f() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("loadedMapModFileId"));
            return _field.Get();
        }
        static void* GetLoadedMapModId() {
            static BNM::Field<void*> _field = GetClass().GetField(O("loadedMapModId"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetLoadedMapPackageInfo() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("loadedMapPackageInfo"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetLoadedSceneFilePaths() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("loadedSceneFilePaths"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetLoadedSceneIndexes() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("loadedSceneIndexes"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetLoadedSceneNames() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("loadedSceneNames"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLoadScenesCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("loadScenesCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::AssetBundle* GetMapBundle() {
            static BNM::Field<::AssetBundle*> _field = GetClass().GetField(O("mapBundle"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<bool>* GetMapLoadFinishedCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("mapLoadFinishedCallback"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GorillaTagScripts_VirtualStumpCustomMaps::MapLoadStatus, int, ::BNM::Structures::Mono::String*>* GetMapLoadProgressCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GorillaTagScripts_VirtualStumpCustomMaps::MapLoadStatus, int, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("mapLoadProgressCallback"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMasterAudioMixer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("masterAudioMixer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static uint8_t GetMaxPlayersForMap() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("maxPlayersForMap"));
            return _field.Get();
        }
        static int GetNumObjectsToProcessPerFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("numObjectsToProcessPerFrame"));
            return _field.Get();
        }
        static int GetObjectsProcessedForLoadingScene() {
            static BNM::Field<int> _field = GetClass().GetField(O("objectsProcessedForLoadingScene"));
            return _field.Get();
        }
        static int GetObjectsProcessedThisFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("objectsProcessedThisFrame"));
            return _field.Get();
        }
        ::GameObject* GetPlaceholderParent() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("placeholderParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GameObject*>* GetPlaceholderReplacements() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("placeholderReplacements"));
            return _field.Get();
        }
        ::GameObject* GetPublicJoinTrigger() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("publicJoinTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::CustomMapLoader_LoadZoneRequest>* GetQueuedLoadZoneRequests() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CustomMapLoader_LoadZoneRequest>*> _field = GetClass().GetField(O("queuedLoadZoneRequests"));
            return _field.Get();
        }
        static bool GetRefreshReviveStations() {
            static BNM::Field<bool> _field = GetClass().GetField(O("refreshReviveStations"));
            return _field.Get();
        }
        ::GameObject* GetReviveStationPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("reviveStationPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRopeSwingPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ropeSwingPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetRunningAsyncLoad() {
            static BNM::Field<bool> _field = GetClass().GetField(O("runningAsyncLoad"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetSceneLoadedCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("sceneLoadedCallback"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetSceneUnloadedCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("sceneUnloadedCallback"));
            return _field.Get();
        }
        static bool GetShouldAbortMapLoading() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldAbortMapLoading"));
            return _field.Get();
        }
        static bool GetShouldAbortSceneLoad() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldAbortSceneLoad"));
            return _field.Get();
        }
        ::GameObject* GetStoreCheckoutCounterPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("storeCheckoutCounterPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GameObject*>* GetStoreCheckouts() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("storeCheckouts"));
            return _field.Get();
        }
        ::GameObject* GetStoreDisplayStandPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("storeDisplayStandPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GameObject*>* GetStoreDisplayStands() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("storeDisplayStands"));
            return _field.Get();
        }
        ::GameObject* GetStoreTryOnAreaPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("storeTryOnAreaPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GameObject*>* GetStoreTryOnAreas() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("storeTryOnAreas"));
            return _field.Get();
        }
        ::GameObject* GetStoreTryOnConsolePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("storeTryOnConsolePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GameObject*>* GetStoreTryOnConsoles() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("storeTryOnConsoles"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::Component*>* GetTeleporters() {
            static BNM::Field<::BNM::Structures::Mono::List<::Component*>*> _field = GetClass().GetField(O("teleporters"));
            return _field.Get();
        }
        static int GetTotalObjectsInLoadingScene() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalObjectsInLoadingScene"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetUnloadMapCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("unloadMapCallback"));
            return _field.Get();
        }
        static bool GetUsingDynamicLighting() {
            static BNM::Field<bool> _field = GetClass().GetField(O("usingDynamicLighting"));
            return _field.Get();
        }
        ::GameObject* GetVirtualStumpMesh() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("virtualStumpMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWaterVolumePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waterVolumePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetZiplinePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ziplinePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetZoneLoadingCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("zoneLoadingCoroutine"));
            return _field.Get();
        }
        ::GameObject* GetZoneShaderSettingsTrigger() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("zoneShaderSettingsTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAccessDoor(::GlobalNamespace::CustomMapAccessDoor* value) {
            static BNM::Field<::GlobalNamespace::CustomMapAccessDoor*> _field = GetClass().GetField(O("accessDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetAssetBundleSceneFilePaths(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("assetBundleSceneFilePaths"));
            _field.Set(value);
        }
        void SetAtmNoShellPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("atmNoShellPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAtmPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("atmPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetAttemptedLoadID(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("attemptedLoadID"));
            _field.Set(value);
        }
        static void SetAttemptedSceneToLoad(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("attemptedSceneToLoad"));
            _field.Set(value);
        }
        void SetAvailableModesForOldMaps(::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaGameModes::GameModeType>*> _field = GetClass().GetField(O("availableModesForOldMaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetCachedExceptionMessage(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedExceptionMessage"));
            _field.Set(value);
        }
        static void SetCachedLuauScript(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedLuauScript"));
            _field.Set(value);
        }
        void SetCompositeTryOnArea(::GlobalNamespace::CompositeTriggerEvents* value) {
            static BNM::Field<::GlobalNamespace::CompositeTriggerEvents*> _field = GetClass().GetField(O("compositeTryOnArea"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetCustomMapATM(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("customMapATM"));
            _field.Set(value);
        }
        void SetCustomMapsDefaultSpawnLocation(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("CustomMapsDefaultSpawnLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomMapZoneShaderSettings(::GorillaTag_Rendering::ZoneShaderSettings* value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings*> _field = GetClass().GetField(O("customMapZoneShaderSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDayNightManager(::GlobalNamespace::BetterDayNightManager* value) {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager*> _field = GetClass().GetField(O("dayNightManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultFont(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("DefaultFont"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultGameModeForNonCustomOldMaps(::GorillaGameModes::GameModeType value) {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("defaultGameModeForNonCustomOldMaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultLavaParameters(::GorillaLocomotion_Swimming::WaterParameters* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterParameters*> _field = GetClass().GetField(O("defaultLavaParameters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultNexusGroupId(::GlobalNamespace::NexusGroupId* value) {
            static BNM::Field<::GlobalNamespace::NexusGroupId*> _field = GetClass().GetField(O("defaultNexusGroupId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultWaterParameters(::GorillaLocomotion_Swimming::WaterParameters* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::WaterParameters*> _field = GetClass().GetField(O("defaultWaterParameters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetDevModeEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("devModeEnabled"));
            _field.Set(value);
        }
        static void SetDisableHoldingHandsAllModes(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableHoldingHandsAllModes"));
            _field.Set(value);
        }
        static void SetDisableHoldingHandsCustomMode(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableHoldingHandsCustomMode"));
            _field.Set(value);
        }
        void SetDontDestroyOnLoadSceneName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("dontDestroyOnLoadSceneName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetEntitiesToCreate(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("entitiesToCreate"));
            _field.Set(value);
        }
        static void SetErrorEncounteredDuringLoad(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("errorEncounteredDuringLoad"));
            _field.Set(value);
        }
        void SetForceVolumePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("forceVolumePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGhostReactorManager(::GlobalNamespace::GhostReactorManager* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("ghostReactorManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGliderWindVolume(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("gliderWindVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        void SetHoverboardDispenserPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("hoverboardDispenserPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInitializePhaseTwoComponents(::BNM::Structures::Mono::List<::Component*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Component*>*> _field = GetClass().GetField(O("initializePhaseTwoComponents"));
            _field.Set(value);
        }
        static void SetInitialSceneIndexes(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("initialSceneIndexes"));
            _field.Set(value);
        }
        static void SetInitialSceneNames(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("initialSceneNames"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::CustomMapLoader* value) {
            static BNM::Field<::GlobalNamespace::CustomMapLoader*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        static void SetIsLoading(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLoading"));
            _field.Set(value);
        }
        static void SetIsUnloading(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isUnloading"));
            _field.Set(value);
        }
        void SetLeafGlider(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leafGlider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLeafGliderIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("leafGliderIndex"));
            _field.Set(value);
        }
        void SetLeafGliders(::BNM::Structures::Mono::Array<::GlobalNamespace::GliderHoldable*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GliderHoldable*>*> _field = GetClass().GetField(O("leafGliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLightmaps(::BNM::Structures::Mono::Array<::LightmapData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::LightmapData*>*> _field = GetClass().GetField(O("lightmaps"));
            _field.Set(value);
        }
        static void SetLightmapsToKeep(::BNM::Structures::Mono::List<::Texture2D*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Texture2D*>*> _field = GetClass().GetField(O("lightmapsToKeep"));
            _field.Set(value);
        }
        static void SetLoadedMapModFileId(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("loadedMapModFileId"));
            _field.Set(value);
        }
        static void SetLoadedMapModId(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("loadedMapModId"));
            _field.Set(value);
        }
        static void SetLoadedMapPackageInfo(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("loadedMapPackageInfo"));
            _field.Set(value);
        }
        static void SetLoadedSceneFilePaths(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("loadedSceneFilePaths"));
            _field.Set(value);
        }
        static void SetLoadedSceneIndexes(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("loadedSceneIndexes"));
            _field.Set(value);
        }
        static void SetLoadedSceneNames(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("loadedSceneNames"));
            _field.Set(value);
        }
        void SetLoadScenesCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("loadScenesCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetMapBundle(::AssetBundle* value) {
            static BNM::Field<::AssetBundle*> _field = GetClass().GetField(O("mapBundle"));
            _field.Set(value);
        }
        static void SetMapLoadFinishedCallback(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("mapLoadFinishedCallback"));
            _field.Set(value);
        }
        static void SetMapLoadProgressCallback(::BNM::Structures::Mono::Action<::GorillaTagScripts_VirtualStumpCustomMaps::MapLoadStatus, int, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GorillaTagScripts_VirtualStumpCustomMaps::MapLoadStatus, int, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("mapLoadProgressCallback"));
            _field.Set(value);
        }
        void SetMasterAudioMixer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("masterAudioMixer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetMaxPlayersForMap(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("maxPlayersForMap"));
            _field.Set(value);
        }
        static void SetObjectsProcessedForLoadingScene(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("objectsProcessedForLoadingScene"));
            _field.Set(value);
        }
        static void SetObjectsProcessedThisFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("objectsProcessedThisFrame"));
            _field.Set(value);
        }
        void SetPlaceholderParent(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("placeholderParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPlaceholderReplacements(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("placeholderReplacements"));
            _field.Set(value);
        }
        void SetPublicJoinTrigger(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("publicJoinTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetQueuedLoadZoneRequests(::BNM::Structures::Mono::List<::GlobalNamespace::CustomMapLoader_LoadZoneRequest>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CustomMapLoader_LoadZoneRequest>*> _field = GetClass().GetField(O("queuedLoadZoneRequests"));
            _field.Set(value);
        }
        static void SetRefreshReviveStations(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("refreshReviveStations"));
            _field.Set(value);
        }
        void SetReviveStationPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("reviveStationPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeSwingPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ropeSwingPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRunningAsyncLoad(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("runningAsyncLoad"));
            _field.Set(value);
        }
        static void SetSceneLoadedCallback(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("sceneLoadedCallback"));
            _field.Set(value);
        }
        static void SetSceneUnloadedCallback(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("sceneUnloadedCallback"));
            _field.Set(value);
        }
        static void SetShouldAbortMapLoading(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldAbortMapLoading"));
            _field.Set(value);
        }
        static void SetShouldAbortSceneLoad(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldAbortSceneLoad"));
            _field.Set(value);
        }
        void SetStoreCheckoutCounterPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("storeCheckoutCounterPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetStoreCheckouts(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("storeCheckouts"));
            _field.Set(value);
        }
        void SetStoreDisplayStandPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("storeDisplayStandPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetStoreDisplayStands(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("storeDisplayStands"));
            _field.Set(value);
        }
        void SetStoreTryOnAreaPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("storeTryOnAreaPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetStoreTryOnAreas(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("storeTryOnAreas"));
            _field.Set(value);
        }
        void SetStoreTryOnConsolePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("storeTryOnConsolePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetStoreTryOnConsoles(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("storeTryOnConsoles"));
            _field.Set(value);
        }
        static void SetTeleporters(::BNM::Structures::Mono::List<::Component*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Component*>*> _field = GetClass().GetField(O("teleporters"));
            _field.Set(value);
        }
        static void SetTotalObjectsInLoadingScene(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalObjectsInLoadingScene"));
            _field.Set(value);
        }
        static void SetUnloadMapCallback(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("unloadMapCallback"));
            _field.Set(value);
        }
        static void SetUsingDynamicLighting(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("usingDynamicLighting"));
            _field.Set(value);
        }
        void SetVirtualStumpMesh(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("virtualStumpMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaterVolumePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("waterVolumePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZiplinePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ziplinePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetZoneLoadingCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("zoneLoadingCoroutine"));
            _field.Set(value);
        }
        void SetZoneShaderSettingsTrigger(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("zoneShaderSettingsTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::BNM::Coroutine::IEnumerator* AbortMapLoad() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("AbortMapLoad"));
            return _m.Call();
        }
        static ::BNM::Coroutine::IEnumerator* AbortSceneLoad(int sceneIndex) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("AbortSceneLoad"), {"sceneIndex"});
            return _m.Call(sceneIndex);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CacheLightmaps() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CacheLightmaps"));
            _m.Call();
        }
        static void CleanupPlaceholders() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CleanupPlaceholders"));
            _m.Call();
        }
        static void CloseDoorAndUnloadMap(::BNM::Structures::Mono::Action<>* unloadCompleted) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CloseDoorAndUnloadMap"), {"unloadCompleted"});
            _m.Call(unloadCompleted);
        }
        static ::BNM::Coroutine::IEnumerator* CloseDoorAndUnloadMapCoroutine() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("CloseDoorAndUnloadMapCoroutine"));
            return _m.Call();
        }
        static ::BNM::Coroutine::IEnumerator* FinalizeSceneLoad(::BNM::IL2CPP::Il2CppObject* sceneDescriptor, bool useProgressCallback, int startingProgress, int endingProgress) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("FinalizeSceneLoad"), {"sceneDescriptor", "useProgressCallback", "startingProgress", "endingProgress"});
            return _m.Call(sceneDescriptor, useProgressCallback, startingProgress, endingProgress);
        }
        static bool get_CanLoadEntities() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CanLoadEntities"));
            return _m.Call();
        }
        static int64_t get_LoadedMapModFileId() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_LoadedMapModFileId"));
            return _m.Call();
        }
        static void* get_LoadedMapModId() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_LoadedMapModId"));
            return _m.Call();
        }
        static ::Transform* GetCustomMapsDefaultSpawnLocation_1() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetCustomMapsDefaultSpawnLocation"));
            return _m.Call();
        }
        static int64_t GetLoadingMapModId() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetLoadingMapModId"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetLuauGamemodeScript() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetLuauGamemodeScript"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetPackageInfo(::BNM::Structures::Mono::String* packageInfoFilePath) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetPackageInfo"), {"packageInfoFilePath"});
            return _m.Call(packageInfoFilePath);
        }
        static uint8_t GetRoomSizeForCurrentlyLoadedMap() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("GetRoomSizeForCurrentlyLoadedMap"));
            return _m.Call();
        }
        static int GetSceneIndex(::BNM::Structures::Mono::String* sceneName) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetSceneIndex"), {"sceneName"});
            return _m.Call(sceneName);
        }
        static ::BNM::Structures::Mono::String* GetSceneNameFromFilePath(::BNM::Structures::Mono::String* filePath) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetSceneNameFromFilePath"), {"filePath"});
            return _m.Call(filePath);
        }
        static void Initialize(::BNM::Structures::Mono::Action<::GorillaTagScripts_VirtualStumpCustomMaps::MapLoadStatus, int, ::BNM::Structures::Mono::String*>* onLoadProgress, ::BNM::Structures::Mono::Action<bool>* onLoadFinished, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* onSceneLoaded, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* onSceneUnloaded) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"), {"onLoadProgress", "onLoadFinished", "onSceneLoaded", "onSceneUnloaded"});
            _m.Call(onLoadProgress, onLoadFinished, onSceneLoaded, onSceneUnloaded);
        }
        static void InitializeComponentsPhaseOne(::GameObject* childGameObject) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeComponentsPhaseOne"), {"childGameObject"});
            _m.Call(childGameObject);
        }
        static void InitializeComponentsPhaseTwo() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeComponentsPhaseTwo"));
            _m.Call();
        }
        static void InitOnLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitOnLoad"));
            _m.Call();
        }
        static bool IsCustomScene(::BNM::Structures::Mono::String* sceneName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCustomScene"), {"sceneName"});
            return _m.Call(sceneName);
        }
        static bool IsDevModeEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsDevModeEnabled"));
            return _m.Call();
        }
        static bool IsLoading() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLoading"));
            return _m.Call();
        }
        static bool IsMapLoaded() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMapLoaded"));
            return _m.Call();
        }
        template <typename TP0 = void*>
        static bool IsMapLoaded(TP0 mapModId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMapLoaded"), {"mapModId"});
            return _m.Call(mapModId);
        }
        static ::BNM::Coroutine::IEnumerator* LoadAssetBundle(int64_t mapModID, ::BNM::Structures::Mono::String* packageInfoFilePath, ::BNM::Structures::Mono::Action<bool, bool>* OnLoadComplete) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("LoadAssetBundle"), {"mapModID", "packageInfoFilePath", "OnLoadComplete"});
            return _m.Call(mapModID, packageInfoFilePath, OnLoadComplete);
        }
        static bool LoadedMapWantsHoldingHandsDisabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LoadedMapWantsHoldingHandsDisabled"));
            return _m.Call();
        }
        static void LoadInitialSceneNames() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadInitialSceneNames"));
            _m.Call();
        }
        static ::BNM::Coroutine::IEnumerator* LoadInitialScenesCoroutine(::BNM::Structures::Mono::Array<int>* sceneIndexes) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("LoadInitialScenesCoroutine"), {"sceneIndexes"});
            return _m.Call(sceneIndexes);
        }
        static void LoadLightmaps(::BNM::Structures::Mono::Array<::Texture2D*>* colorMaps, ::BNM::Structures::Mono::Array<::Texture2D*>* dirMaps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadLightmaps"), {"colorMaps", "dirMaps"});
            _m.Call(colorMaps, dirMaps);
        }
        static void LoadMap(int64_t mapModId, ::BNM::Structures::Mono::String* mapFilePath) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadMap"), {"mapModId", "mapFilePath"});
            _m.Call(mapModId, mapFilePath);
        }
        static ::BNM::Coroutine::IEnumerator* LoadSceneFromAssetBundle(int sceneIndex, ::BNM::Structures::Mono::Action<bool, bool, ::BNM::Structures::Mono::String*>* OnLoadComplete, bool useProgressCallback, int startingProgress, int endingProgress) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("LoadSceneFromAssetBundle"), {"sceneIndex", "OnLoadComplete", "useProgressCallback", "startingProgress", "endingProgress"});
            return _m.Call(sceneIndex, OnLoadComplete, useProgressCallback, startingProgress, endingProgress);
        }
        static ::BNM::Coroutine::IEnumerator* LoadScenesCoroutine(::BNM::Structures::Mono::Array<int>* sceneIndexes, ::BNM::Structures::Mono::Action<bool, bool, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*>* loadCompleteCallback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("LoadScenesCoroutine"), {"sceneIndexes", "loadCompleteCallback"});
            return _m.Call(sceneIndexes, loadCompleteCallback);
        }
        static ::BNM::Coroutine::IEnumerator* LoadZoneCoroutine(::BNM::Structures::Mono::Array<int>* loadScenes, ::BNM::Structures::Mono::Array<int>* unloadScenes) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("LoadZoneCoroutine"), {"loadScenes", "unloadScenes"});
            return _m.Call(loadScenes, unloadScenes);
        }
        static void LoadZoneTriggered(::BNM::Structures::Mono::Array<int>* loadSceneIndexes, ::BNM::Structures::Mono::Array<int>* unloadSceneIndexes, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* onSceneLoaded, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* onSceneUnloaded) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadZoneTriggered"), {"loadSceneIndexes", "unloadSceneIndexes", "onSceneLoaded", "onSceneUnloaded"});
            _m.Call(loadSceneIndexes, unloadSceneIndexes, onSceneLoaded, onSceneUnloaded);
        }
        static void OnAssetBundleLoaded(bool loadSucceeded, bool loadAborted) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAssetBundleLoaded"), {"loadSucceeded", "loadAborted"});
            _m.Call(loadSucceeded, loadAborted);
        }
        static void OnInitialLoadComplete(bool loadSucceeded, bool loadAborted) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnInitialLoadComplete"), {"loadSucceeded", "loadAborted"});
            _m.Call(loadSucceeded, loadAborted);
        }
        static bool OpenDoorToMap() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OpenDoorToMap"));
            return _m.Call();
        }
        static ::BNM::Coroutine::IEnumerator* ProcessChildObjects(::GameObject* parent, bool useProgressCallback, int startingProgress, int endingProgress) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ProcessChildObjects"), {"parent", "useProgressCallback", "startingProgress", "endingProgress"});
            return _m.Call(parent, useProgressCallback, startingProgress, endingProgress);
        }
        template <typename TP0 = void*>
        static void RemoveUnloadingStorePrefabs(TP0 unloadingScene) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveUnloadingStorePrefabs"), {"unloadingScene"});
            _m.Call(unloadingScene);
        }
        static void ReplaceDataOnlyScripts(::GameObject* gameObject) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReplaceDataOnlyScripts"), {"gameObject"});
            _m.Call(gameObject);
        }
        static void ReplacePlaceholders(::GameObject* placeholderGameObject) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReplacePlaceholders"), {"placeholderGameObject"});
            _m.Call(placeholderGameObject);
        }
        static void RequestAbortMapLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestAbortMapLoad"));
            _m.Call();
        }
        static ::BNM::Coroutine::IEnumerator* ResetLightmaps() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ResetLightmaps"));
            return _m.Call();
        }
        static void ResetToInitialZone(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* onSceneLoaded, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* onSceneUnloaded) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetToInitialZone"), {"onSceneLoaded", "onSceneUnloaded"});
            _m.Call(onSceneLoaded, onSceneUnloaded);
        }
        static void ResolveVirtualStumpColliderOverlaps(::BNM::Structures::Mono::String* sceneName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResolveVirtualStumpColliderOverlaps"), {"sceneName"});
            _m.Call(sceneName);
        }
        static bool SanitizeObject(::GameObject* gameObject, ::GameObject* mapRoot) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SanitizeObject"), {"gameObject", "mapRoot"});
            return _m.Call(gameObject, mapRoot);
        }
        static void SanitizeObjectRecursive(::GameObject* rootObject, ::GameObject* mapRoot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SanitizeObjectRecursive"), {"rootObject", "mapRoot"});
            _m.Call(rootObject, mapRoot);
        }
        static void set_CanLoadEntities(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CanLoadEntities"), {"value"});
            _m.Call(value);
        }
        static void SetupCollisions(::GameObject* gameObject) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupCollisions"), {"gameObject"});
            _m.Call(gameObject);
        }
        static void SetupDynamicLight(::GameObject* dynamicLightGameObject) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupDynamicLight"), {"dynamicLightGameObject"});
            _m.Call(dynamicLightGameObject);
        }
        static void SetupReviveStation(::GameObject* gameObject) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupReviveStation"), {"gameObject"});
            _m.Call(gameObject);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void StoreMapEntity(::GameObject* entityGameObject) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StoreMapEntity"), {"entityGameObject"});
            _m.Call(entityGameObject);
        }
        static void UnloadLightmaps() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnloadLightmaps"));
            _m.Call();
        }
        static ::BNM::Coroutine::IEnumerator* UnloadMapCoroutine() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("UnloadMapCoroutine"));
            return _m.Call();
        }
        static ::BNM::Coroutine::IEnumerator* UnloadSceneCoroutine(int sceneIndex, ::BNM::Structures::Mono::Action<>* OnUnloadComplete) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("UnloadSceneCoroutine"), {"sceneIndex", "OnUnloadComplete"});
            return _m.Call(sceneIndex, OnUnloadComplete);
        }
        static ::BNM::Coroutine::IEnumerator* UnloadScenesCoroutine(::BNM::Structures::Mono::Array<int>* sceneIndexes) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("UnloadScenesCoroutine"), {"sceneIndexes"});
            return _m.Call(sceneIndexes);
        }
        static bool ValidateStorePlaceholderPosition(::GameObject* storePlaceholder) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateStorePlaceholderPosition"), {"storePlaceholder"});
            return _m.Call(storePlaceholder);
        }
        static bool ValidateTeleporterDestination(::Transform* teleportTarget) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateTeleporterDestination"), {"teleportTarget"});
            return _m.Call(teleportTarget);
        }
    };
}
