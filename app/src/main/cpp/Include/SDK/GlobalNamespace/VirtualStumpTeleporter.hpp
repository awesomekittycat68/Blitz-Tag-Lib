#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"
#include "../GorillaGameModes/GameModeType.hpp"

namespace GlobalNamespace {
    struct VirtualStumpTeleporter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VirtualStumpTeleporter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAccessDenied() {
            static BNM::Field<bool> _field = GetClass().GetField(O("accessDenied"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetAccessDeniedDisabledObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("accessDeniedDisabledObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetAccessDeniedEnabledObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("accessDeniedEnabledObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaGameModes::GameModeType GetAutoLoadGamemode() {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("autoLoadGamemode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetAutoLoadMapModId() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("autoLoadMapModId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::TMP_Text*>* GetCountdownTexts() {
            static BNM::Field<::BNM::Structures::Mono::Array<::TMP_Text*>*> _field = GetClass().GetField(O("countdownTexts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetEntranceZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("entranceZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaNetworkJoinTrigger* GetExitVStumpJoinTrigger() {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("exitVStumpJoinTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaGameModes::GameModeType GetForcedGamemodeUponReturn() {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("forcedGamemodeUponReturn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetHandHoldObjects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("handHoldObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static uint16_t GetLastLoggingHandsMsgId() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("lastLoggingHandsMsgId"));
            return _field.Get();
        }
        ::GlobalNamespace::VirtualStumpTeleporterSerializer* GetMySerializer() {
            static BNM::Field<::GlobalNamespace::VirtualStumpTeleporterSerializer*> _field = GetClass().GetField(O("mySerializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VirtualStumpTeleporterSerializer* GetNetSerializer() {
            static BNM::Field<::GlobalNamespace::VirtualStumpTeleporterSerializer*> _field = GetClass().GetField(O("netSerializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::AudioClip*>* GetObserverSoundClips() {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("observerSoundClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetReturnFromVStumpVFX() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("returnFromVStumpVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetReturnLocation() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("returnLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStayInTriggerDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("stayInTriggerDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetTeleporterSFXAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("teleporterSFXAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTeleporting() {
            static BNM::Field<bool> _field = GetClass().GetField(O("teleporting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::AudioClip*>* GetTeleportingPlayerSoundClips() {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("teleportingPlayerSoundClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetTeleportToVStumpVFX() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("teleportToVStumpVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTriggerEntryTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerEntryTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAccessDenied(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("accessDenied"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAccessDeniedDisabledObjects(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("accessDeniedDisabledObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAccessDeniedEnabledObjects(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("accessDeniedEnabledObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoLoadGamemode(::GorillaGameModes::GameModeType value) {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("autoLoadGamemode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoLoadMapModId(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("autoLoadMapModId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCountdownTexts(::BNM::Structures::Mono::Array<::TMP_Text*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::TMP_Text*>*> _field = GetClass().GetField(O("countdownTexts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntranceZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("entranceZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExitVStumpJoinTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger* value) {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("exitVStumpJoinTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForcedGamemodeUponReturn(::GorillaGameModes::GameModeType value) {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("forcedGamemodeUponReturn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandHoldObjects(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("handHoldObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLastLoggingHandsMsgId(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("lastLoggingHandsMsgId"));
            _field.Set(value);
        }
        void SetMySerializer(::GlobalNamespace::VirtualStumpTeleporterSerializer* value) {
            static BNM::Field<::GlobalNamespace::VirtualStumpTeleporterSerializer*> _field = GetClass().GetField(O("mySerializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetSerializer(::GlobalNamespace::VirtualStumpTeleporterSerializer* value) {
            static BNM::Field<::GlobalNamespace::VirtualStumpTeleporterSerializer*> _field = GetClass().GetField(O("netSerializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObserverSoundClips(::BNM::Structures::Mono::List<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("observerSoundClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReturnFromVStumpVFX(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("returnFromVStumpVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReturnLocation(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("returnLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStayInTriggerDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stayInTriggerDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleporterSFXAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("teleporterSFXAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleporting(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("teleporting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportingPlayerSoundClips(::BNM::Structures::Mono::List<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("teleportingPlayerSoundClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportToVStumpVFX(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("teleportToVStumpVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerEntryTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerEntryTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AllowAccess() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AllowAccess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool BuildValidationCheck() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BuildValidationCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void DenyAccess() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DenyAccess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FinishTeleport(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FinishTeleport"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
        }
        ::GorillaGameModes::GameModeType GetAutoLoadGamemode_1() {
            static BNM::Method<::GorillaGameModes::GameModeType> _m = GetClass().GetMethod(O("GetAutoLoadGamemode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t GetAutoLoadMapModId_1() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetAutoLoadMapModId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaNetworking::GorillaNetworkJoinTrigger* GetExitVStumpJoinTrigger_1() {
            static BNM::Method<::GorillaNetworking::GorillaNetworkJoinTrigger*> _m = GetClass().GetMethod(O("GetExitVStumpJoinTrigger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int16_t GetIndex() {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("GetIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaGameModes::GameModeType GetReturnGamemode() {
            static BNM::Method<::GorillaGameModes::GameModeType> _m = GetClass().GetMethod(O("GetReturnGamemode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* GetReturnTransform() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetReturnTransform"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GTZone GetZone() {
            static BNM::Method<::GlobalNamespace::GTZone> _m = GetClass().GetMethod(O("GetZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HideCountdownText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HideCountdownText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerStay(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerStay"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
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
        void PlayTeleportEffects(bool forLocalPlayer, bool toVStump, ::AudioSource* vStumpSFXAudioSource, bool sendRPC) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayTeleportEffects"), {"forLocalPlayer", "toVStump", "vStumpSFXAudioSource", "sendRPC"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(forLocalPlayer, toVStump, vStumpSFXAudioSource, sendRPC);
        }
        void ShowCountdownText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowCountdownText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TeleportPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TeleportPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateCountdownText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCountdownText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
