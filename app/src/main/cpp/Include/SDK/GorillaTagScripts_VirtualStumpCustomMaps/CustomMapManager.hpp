#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/NetJoinResult.hpp"
#include "MapLoadStatus.hpp"

namespace GorillaTagScripts_VirtualStumpCustomMaps {
    struct CustomMapManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapManager* GetInstance() {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        int64_t GetLoadingMapId() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_LoadingMapId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int64_t GetUnloadingMapId() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_UnloadingMapId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetWaitingForDisconnect() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_WaitingForDisconnect"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetWaitingForRoomJoin() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_WaitingForRoomJoin"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::Structures::Mono::List<void*>* GetAbortModLoadIds() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("abortModLoadIds"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaTag_Rendering::ZoneShaderSettings*>* GetAllCustomMapZoneShaderSettings() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Rendering::ZoneShaderSettings*>*> _field = GetClass().GetField(O("allCustomMapZoneShaderSettings"));
            return _field.Get();
        }
        static bool GetCurrentRoomMapApproved() {
            static BNM::Field<bool> _field = GetClass().GetField(O("currentRoomMapApproved"));
            return _field.Get();
        }
        static void* GetCurrentRoomMapModId() {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentRoomMapModId"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<bool>* GetCurrentTeleportCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("currentTeleportCallback"));
            return _field.Get();
        }
        static void* GetCustomMapDefaultZoneShaderProperties() {
            static BNM::Field<void*> _field = GetClass().GetField(O("customMapDefaultZoneShaderProperties"));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings* GetCustomMapDefaultZoneShaderSettings() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings*> _field = GetClass().GetField(O("customMapDefaultZoneShaderSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetCustomMapDefaultZoneShaderSettingsInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("customMapDefaultZoneShaderSettingsInitialized"));
            return _field.Get();
        }
        ::GlobalNamespace::BetterDayNightManager* GetDayNightManager() {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager*> _field = GetClass().GetField(O("dayNightManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRReviveStation* GetDefaultReviveStation() {
            static BNM::Field<::GlobalNamespace::GRReviveStation*> _field = GetClass().GetField(O("defaultReviveStation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VirtualStumpTeleporter* GetDefaultTeleporter() {
            static BNM::Field<::GlobalNamespace::VirtualStumpTeleporter*> _field = GetClass().GetField(O("defaultTeleporter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetDelayedEndTeleportCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("delayedEndTeleportCoroutine"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetDelayedJoinCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("delayedJoinCoroutine"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetDelayedTryAutoLoadCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("delayedTryAutoLoadCoroutine"));
            return _field.Get();
        }
        static bool GetExitVirtualStumpPending() {
            static BNM::Field<bool> _field = GetClass().GetField(O("exitVirtualStumpPending"));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactorManager* GetGhostReactorManager() {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("ghostReactorManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapManager* GetInstance_f() {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static ::GlobalNamespace::VirtualStumpTeleporter* GetLastUsedTeleporter() {
            static BNM::Field<::GlobalNamespace::VirtualStumpTeleporter*> _field = GetClass().GetField(O("lastUsedTeleporter"));
            return _field.Get();
        }
        static ::GorillaTag_Rendering::ZoneShaderSettings* GetLoadedCustomMapDefaultZoneShaderSettings() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings*> _field = GetClass().GetField(O("loadedCustomMapDefaultZoneShaderSettings"));
            return _field.Get();
        }
        static void* GetLoadingMapId_f() {
            static BNM::Field<void*> _field = GetClass().GetField(O("loadingMapId"));
            return _field.Get();
        }
        static bool GetLoadInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadInProgress"));
            return _field.Get();
        }
        ::AudioSource* GetLocalTeleportSFXSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("localTeleportSFXSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxPostTeleportRoomProcessingTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxPostTeleportRoomProcessingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetOnMapLoadComplete() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnMapLoadComplete"));
            return _field.Get();
        }
        static void* GetOnMapLoadStatusChanged() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnMapLoadStatusChanged"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetOnMapUnloadComplete() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnMapUnloadComplete"));
            return _field.Get();
        }
        static void* GetOnRoomMapChanged() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnRoomMapChanged"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetPendingNewPrivateRoomName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("pendingNewPrivateRoomName"));
            return _field.Get();
        }
        static int16_t GetPendingTeleportVFXIdx() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("pendingTeleportVFXIdx"));
            return _field.Get();
        }
        static bool GetPreTeleportInPrivateRoom() {
            static BNM::Field<bool> _field = GetClass().GetField(O("preTeleportInPrivateRoom"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetPreVStumpGamemode() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("preVStumpGamemode"));
            return _field.Get();
        }
        ::Transform* GetReturnToVirtualStumpTeleportLocation() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("returnToVirtualStumpTeleportLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetRootObjectsToDeactivateAfterTeleport() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("rootObjectsToDeactivateAfterTeleport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetShouldRetryJoin() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldRetryJoin"));
            return _field.Get();
        }
        static ::GorillaTagScripts_UI_ModIO::VirtualStumpTeleportingHUD* GetTeleportingHUD() {
            static BNM::Field<::GorillaTagScripts_UI_ModIO::VirtualStumpTeleportingHUD*> _field = GetClass().GetField(O("teleportingHUD"));
            return _field.Get();
        }
        ::GameObject* GetTeleportingHUDPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("teleportingHUDPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetUnloadingMapId_f() {
            static BNM::Field<void*> _field = GetClass().GetField(O("unloadingMapId"));
            return _field.Get();
        }
        static bool GetUnloadInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("unloadInProgress"));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaFriendCollider* GetVirtualStumpPlayerDetector() {
            static BNM::Field<::GlobalNamespace::GorillaFriendCollider*> _field = GetClass().GetField(O("virtualStumpPlayerDetector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetVirtualStumpTeleportLocations() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("virtualStumpTeleportLocations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetVirtualStumpToggleableRoot() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("virtualStumpToggleableRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Rendering::ZoneShaderSettings* GetVirtualStumpZoneShaderSettings() {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings*> _field = GetClass().GetField(O("virtualStumpZoneShaderSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetWaitingForDisconnect_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForDisconnect"));
            return _field.Get();
        }
        static bool GetWaitingForLoginDisconnect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForLoginDisconnect"));
            return _field.Get();
        }
        static bool GetWaitingForModDownload() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForModDownload"));
            return _field.Get();
        }
        static bool GetWaitingForModInstall() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForModInstall"));
            return _field.Get();
        }
        static void* GetWaitingForModInstallId() {
            static BNM::Field<void*> _field = GetClass().GetField(O("waitingForModInstallId"));
            return _field.Get();
        }
        static bool GetWaitingForRoomJoin_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForRoomJoin"));
            return _field.Get();
        }
        static void SetAbortModLoadIds(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("abortModLoadIds"));
            _field.Set(value);
        }
        static void SetCurrentRoomMapApproved(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("currentRoomMapApproved"));
            _field.Set(value);
        }
        static void SetCurrentRoomMapModId(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentRoomMapModId"));
            _field.Set(value);
        }
        static void SetCurrentTeleportCallback(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("currentTeleportCallback"));
            _field.Set(value);
        }
        static void SetCustomMapDefaultZoneShaderProperties(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("customMapDefaultZoneShaderProperties"));
            _field.Set(value);
        }
        void SetCustomMapDefaultZoneShaderSettings(::GorillaTag_Rendering::ZoneShaderSettings* value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings*> _field = GetClass().GetField(O("customMapDefaultZoneShaderSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetCustomMapDefaultZoneShaderSettingsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("customMapDefaultZoneShaderSettingsInitialized"));
            _field.Set(value);
        }
        void SetDayNightManager(::GlobalNamespace::BetterDayNightManager* value) {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager*> _field = GetClass().GetField(O("dayNightManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultReviveStation(::GlobalNamespace::GRReviveStation* value) {
            static BNM::Field<::GlobalNamespace::GRReviveStation*> _field = GetClass().GetField(O("defaultReviveStation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultTeleporter(::GlobalNamespace::VirtualStumpTeleporter* value) {
            static BNM::Field<::GlobalNamespace::VirtualStumpTeleporter*> _field = GetClass().GetField(O("defaultTeleporter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetDelayedEndTeleportCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("delayedEndTeleportCoroutine"));
            _field.Set(value);
        }
        static void SetDelayedJoinCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("delayedJoinCoroutine"));
            _field.Set(value);
        }
        static void SetDelayedTryAutoLoadCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("delayedTryAutoLoadCoroutine"));
            _field.Set(value);
        }
        static void SetExitVirtualStumpPending(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("exitVirtualStumpPending"));
            _field.Set(value);
        }
        void SetGhostReactorManager(::GlobalNamespace::GhostReactorManager* value) {
            static BNM::Field<::GlobalNamespace::GhostReactorManager*> _field = GetClass().GetField(O("ghostReactorManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapManager* value) {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        static void SetLastUsedTeleporter(::GlobalNamespace::VirtualStumpTeleporter* value) {
            static BNM::Field<::GlobalNamespace::VirtualStumpTeleporter*> _field = GetClass().GetField(O("lastUsedTeleporter"));
            _field.Set(value);
        }
        static void SetLoadedCustomMapDefaultZoneShaderSettings(::GorillaTag_Rendering::ZoneShaderSettings* value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings*> _field = GetClass().GetField(O("loadedCustomMapDefaultZoneShaderSettings"));
            _field.Set(value);
        }
        static void SetLoadingMapId(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("loadingMapId"));
            _field.Set(value);
        }
        static void SetLoadInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadInProgress"));
            _field.Set(value);
        }
        void SetLocalTeleportSFXSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("localTeleportSFXSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxPostTeleportRoomProcessingTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxPostTeleportRoomProcessingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnMapLoadComplete(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnMapLoadComplete"));
            _field.Set(value);
        }
        static void SetOnMapLoadStatusChanged(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnMapLoadStatusChanged"));
            _field.Set(value);
        }
        static void SetOnMapUnloadComplete(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnMapUnloadComplete"));
            _field.Set(value);
        }
        static void SetOnRoomMapChanged(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnRoomMapChanged"));
            _field.Set(value);
        }
        static void SetPendingNewPrivateRoomName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("pendingNewPrivateRoomName"));
            _field.Set(value);
        }
        static void SetPendingTeleportVFXIdx(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("pendingTeleportVFXIdx"));
            _field.Set(value);
        }
        static void SetPreTeleportInPrivateRoom(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("preTeleportInPrivateRoom"));
            _field.Set(value);
        }
        static void SetPreVStumpGamemode(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("preVStumpGamemode"));
            _field.Set(value);
        }
        void SetReturnToVirtualStumpTeleportLocation(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("returnToVirtualStumpTeleportLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRootObjectsToDeactivateAfterTeleport(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("rootObjectsToDeactivateAfterTeleport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetShouldRetryJoin(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldRetryJoin"));
            _field.Set(value);
        }
        static void SetTeleportingHUD(::GorillaTagScripts_UI_ModIO::VirtualStumpTeleportingHUD* value) {
            static BNM::Field<::GorillaTagScripts_UI_ModIO::VirtualStumpTeleportingHUD*> _field = GetClass().GetField(O("teleportingHUD"));
            _field.Set(value);
        }
        void SetTeleportingHUDPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("teleportingHUDPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetUnloadingMapId(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("unloadingMapId"));
            _field.Set(value);
        }
        static void SetUnloadInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("unloadInProgress"));
            _field.Set(value);
        }
        void SetVirtualStumpPlayerDetector(::GlobalNamespace::GorillaFriendCollider* value) {
            static BNM::Field<::GlobalNamespace::GorillaFriendCollider*> _field = GetClass().GetField(O("virtualStumpPlayerDetector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVirtualStumpTeleportLocations(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("virtualStumpTeleportLocations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVirtualStumpToggleableRoot(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("virtualStumpToggleableRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVirtualStumpZoneShaderSettings(::GorillaTag_Rendering::ZoneShaderSettings* value) {
            static BNM::Field<::GorillaTag_Rendering::ZoneShaderSettings*> _field = GetClass().GetField(O("virtualStumpZoneShaderSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetWaitingForDisconnect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForDisconnect"));
            _field.Set(value);
        }
        static void SetWaitingForLoginDisconnect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForLoginDisconnect"));
            _field.Set(value);
        }
        static void SetWaitingForModDownload(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForModDownload"));
            _field.Set(value);
        }
        static void SetWaitingForModInstall(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForModInstall"));
            _field.Set(value);
        }
        static void SetWaitingForModInstallId(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("waitingForModInstallId"));
            _field.Set(value);
        }
        static void SetWaitingForRoomJoin(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForRoomJoin"));
            _field.Set(value);
        }
        static void ActivateDefaultZoneShaderSettings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateDefaultZoneShaderSettings"));
            _m.Call();
        }
        static void AddZoneShaderSettings(::GorillaTag_Rendering::ZoneShaderSettings* zoneShaderSettings) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddZoneShaderSettings"), {"zoneShaderSettings"});
            _m.Call(zoneShaderSettings);
        }
        static void ApproveAndLoadRoomMap() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApproveAndLoadRoomMap"));
            _m.Call();
        }
        static bool AreAllPlayersInVirtualStump() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AreAllPlayersInVirtualStump"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* AttemptAutoLogin() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("AttemptAutoLogin"));
            return _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool BuildValidationCheck() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BuildValidationCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool CanLoadRoomMap() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanLoadRoomMap"));
            return _m.Call();
        }
        static void ClearRoomMap() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearRoomMap"));
            _m.Call();
        }
        static ::BNM::Coroutine::IEnumerator* DelayedEndTeleport() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DelayedEndTeleport"));
            return _m.Call();
        }
        static ::BNM::Coroutine::IEnumerator* DelayedJoinVStumpPrivateRoom() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DelayedJoinVStumpPrivateRoom"));
            return _m.Call();
        }
        static ::BNM::Coroutine::IEnumerator* DelayedTryAutoLoad() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DelayedTryAutoLoad"));
            return _m.Call();
        }
        static void DisableTeleportHUD() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableTeleportHUD"));
            _m.Call();
        }
        void EnableTeleportHUD(bool enteringVirtualStump) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableTeleportHUD"), {"enteringVirtualStump"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enteringVirtualStump);
        }
        static void EndTeleport(bool teleportSuccessful) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndTeleport"), {"teleportSuccessful"});
            _m.Call(teleportSuccessful);
        }
        static void ExitVirtualStump(::BNM::Structures::Mono::Action<bool>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExitVirtualStump"), {"callback"});
            _m.Call(callback);
        }
        static void FinalizeExitVirtualStump() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FinalizeExitVirtualStump"));
            _m.Call();
        }
        static int64_t get_LoadingMapId() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_LoadingMapId"));
            return _m.Call();
        }
        static int64_t get_UnloadingMapId() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_UnloadingMapId"));
            return _m.Call();
        }
        static bool get_WaitingForDisconnect() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_WaitingForDisconnect"));
            return _m.Call();
        }
        static bool get_WaitingForRoomJoin() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_WaitingForRoomJoin"));
            return _m.Call();
        }
        static void* GetRoomMapId() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetRoomMapId"));
            return _m.Call();
        }
        static void HandleMapLoadFailed(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleMapLoadFailed"), {"message"});
            _m.Call(message);
        }
        template <typename TP2 = void*, typename TP3 = void*>
        void HandleModManagementEvent(::BNM::IL2CPP::Il2CppObject* mod, ::BNM::IL2CPP::Il2CppObject* modfile, TP2 jobType, TP3 jobPhase) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleModManagementEvent"), {"mod", "modfile", "jobType", "jobPhase"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mod, modfile, jobType, jobPhase);
        }
        static ::BNM::Coroutine::IEnumerator* Internal_TeleportToVirtualStump(::GlobalNamespace::VirtualStumpTeleporter* fromTeleporter, ::BNM::Structures::Mono::Action<bool>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("Internal_TeleportToVirtualStump"), {"fromTeleporter", "callback"});
            return _m.Call(fromTeleporter, callback);
        }
        static bool IsLoading() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLoading"));
            return _m.Call();
        }
        template <typename TP0 = void*>
        static bool IsLoading(TP0 modId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLoading"), {"modId"});
            return _m.Call(modId);
        }
        static bool IsLocalPlayerInVirtualStump() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLocalPlayerInVirtualStump"));
            return _m.Call();
        }
        static bool IsRemotePlayerInVirtualStump(::BNM::Structures::Mono::String* playerID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsRemotePlayerInVirtualStump"), {"playerID"});
            return _m.Call(playerID);
        }
        static bool IsUnloading() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsUnloading"));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* LoadInstalledMap(::BNM::IL2CPP::Il2CppObject* installedMod) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("LoadInstalledMap"), {"installedMod"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(installedMod);
        }
        template <typename TP0 = void*>
        static ::BNM::IL2CPP::Il2CppObject* LoadMap(TP0 modId) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("LoadMap"), {"modId"});
            return _m.Call(modId);
        }
        static void LoadZoneTriggered(::BNM::Structures::Mono::Array<int>* scenesToLoad, ::BNM::Structures::Mono::Array<int>* scenesToUnload) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadZoneTriggered"), {"scenesToLoad", "scenesToUnload"});
            _m.Call(scenesToLoad, scenesToUnload);
        }
        static void OnAutoLoginComplete(::BNM::IL2CPP::Il2CppObject* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAutoLoginComplete"), {"error"});
            _m.Call(error);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisconnected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinRoomFailed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinRoomFailed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void OnJoinSpecificRoomResult(::GlobalNamespace::NetJoinResult result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinSpecificRoomResult"), {"result"});
            _m.Call(result);
        }
        static void OnJoinSpecificRoomResultFailureAllowed(::GlobalNamespace::NetJoinResult result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinSpecificRoomResultFailureAllowed"), {"result"});
            _m.Call(result);
        }
        static void OnMapLoadFinished(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMapLoadFinished"), {"success"});
            _m.Call(success);
        }
        static void OnMapLoadProgress(::GorillaTagScripts_VirtualStumpCustomMaps::MapLoadStatus loadStatus, int progress, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMapLoadProgress"), {"loadStatus", "progress", "message"});
            _m.Call(loadStatus, progress, message);
        }
        static void OnMapUnloadCompleted() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMapUnloadCompleted"));
            _m.Call();
        }
        static void OnSceneLoaded(::BNM::Structures::Mono::String* sceneName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSceneLoaded"), {"sceneName"});
            _m.Call(sceneName);
        }
        static void OnSceneTriggerHistoryProcessed(::BNM::Structures::Mono::String* sceneName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSceneTriggerHistoryProcessed"), {"sceneName"});
            _m.Call(sceneName);
        }
        static void OnSceneUnloaded(::BNM::Structures::Mono::String* sceneName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSceneUnloaded"), {"sceneName"});
            _m.Call(sceneName);
        }
        void OnUGCDisabled() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUGCDisabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUGCEnabled() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUGCEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void ProcessZoneShaderSettings(::BNM::Structures::Mono::String* loadedSceneName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessZoneShaderSettings"), {"loadedSceneName"});
            _m.Call(loadedSceneName);
        }
        static void RequestEnableTeleportHUD(bool enteringVirtualStump) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestEnableTeleportHUD"), {"enteringVirtualStump"});
            _m.Call(enteringVirtualStump);
        }
        static void ReturnToVirtualStump() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnToVirtualStump"));
            _m.Call();
        }
        template <typename TP1 = void*>
        static void SetDefaultZoneShaderSettings(::GorillaTag_Rendering::ZoneShaderSettings* defaultCustomMapShaderSettings, TP1 defaultZoneShaderProperties) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDefaultZoneShaderSettings"), {"defaultCustomMapShaderSettings", "defaultZoneShaderProperties"});
            _m.Call(defaultCustomMapShaderSettings, defaultZoneShaderProperties);
        }
        static void SetRoomMap(int64_t modId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRoomMap"), {"modId"});
            _m.Call(modId);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void TeleportToVirtualStump(::GlobalNamespace::VirtualStumpTeleporter* fromTeleporter, ::BNM::Structures::Mono::Action<bool>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TeleportToVirtualStump"), {"fromTeleporter", "callback"});
            _m.Call(fromTeleporter, callback);
        }
        static bool UnloadMap(bool returnToSinglePlayerIfInPublic) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UnloadMap"), {"returnToSinglePlayerIfInPublic"});
            return _m.Call(returnToSinglePlayerIfInPublic);
        }
        static bool WantsHoldingHandsDisabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("WantsHoldingHandsDisabled"));
            return _m.Call();
        }
    };
}
