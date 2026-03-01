#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VODPlayer_State.hpp"
#include "VODPlayer_VODStream.hpp"
#include "VODPlayer_VODStreamSchedule.hpp"

namespace GlobalNamespace {
    struct VODPlayer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VODPlayer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* PlayerPrefKey_Cache = "_VODCache_";
        ::BNM::IL2CPP::Il2CppObject* GetCrCacheVOD() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_cr_cacheVOD"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetBusyMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("busyMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetCache() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("cache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetDisconnectedMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("disconnectedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetImageClearTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("imageClearTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetImageMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("imageMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastCheck() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VODPlayer_VODNextStream* GetNextStream() {
            static BNM::Field<::GlobalNamespace::VODPlayer_VODNextStream*> _field = GetClass().GetField(O("nextStream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnCrash() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnCrash"));
            return _field.Get();
        }
        ::Material* GetPlayBackMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("playBackMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPlayer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("player"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayerBusy() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerBusy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VODPlayer_VODStreamSchedule GetSchedule() {
            static BNM::Field<::GlobalNamespace::VODPlayer_VODStreamSchedule> _field = GetClass().GetField(O("schedule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetStandbyMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("standbyMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::VODPlayer_State GetState() {
            static BNM::Field<::GlobalNamespace::VODPlayer_State> _field = GetClass().GetField(O("state"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::VODTarget*>* GetTargets() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VODTarget*>*> _field = GetClass().GetField(O("targets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTitleDataKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCrCacheVOD(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_cr_cacheVOD"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBusyMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("busyMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCache(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("cache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisconnectedMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("disconnectedMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImageClearTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("imageClearTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImageMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("imageMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastCheck(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextStream(::GlobalNamespace::VODPlayer_VODNextStream* value) {
            static BNM::Field<::GlobalNamespace::VODPlayer_VODNextStream*> _field = GetClass().GetField(O("nextStream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOnCrash(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnCrash"));
            _field.Set(value);
        }
        void SetPlayBackMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("playBackMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("player"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerBusy(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playerBusy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSchedule(::GlobalNamespace::VODPlayer_VODStreamSchedule value) {
            static BNM::Field<::GlobalNamespace::VODPlayer_VODStreamSchedule> _field = GetClass().GetField(O("schedule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandbyMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("standbyMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetState(::GlobalNamespace::VODPlayer_State value) {
            static BNM::Field<::GlobalNamespace::VODPlayer_State> _field = GetClass().GetField(O("state"));
            _field.Set(value);
        }
        void SetTargets(::BNM::Structures::Mono::List<::GlobalNamespace::VODTarget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VODTarget*>*> _field = GetClass().GetField(O("targets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleDataKey(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void cacheVOD(::BNM::Structures::Mono::String* url) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("cacheVOD"), {"url"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(url);
        }
        ::BNM::Coroutine::IEnumerator* cr_cacheVOD(::BNM::Structures::Mono::String* file, ::BNM::Structures::Mono::String* url) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("cr_cacheVOD"), {"file", "url"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(file, url);
        }
        void Crash(::BNM::Structures::Mono::String* msg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Crash"), {"msg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(msg);
        }
        ::GlobalNamespace::VODPlayer_VODNextStream* NextStream() {
            static BNM::Method<::GlobalNamespace::VODPlayer_VODNextStream*> _m = GetClass().GetMethod(O("NextStream"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void onTD(::BNM::Structures::Mono::String* s) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onTD"), {"s"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(s);
        }
        void onTDError(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("onTDError"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void Player_loopPointReached(::BNM::IL2CPP::Il2CppObject* source) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Player_loopPointReached"), {"source"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(source);
        }
        void PlayPreviouStream() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayPreviouStream"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PositionAudio() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PositionAudio"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartImagePlayback(::BNM::Structures::Mono::String* url, int duration, double time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartImagePlayback"), {"url", "duration", "time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(url, duration, time);
        }
        void StartPlayback(::GlobalNamespace::VODPlayer_VODStream str, double time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPlayback"), {"str", "time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(str, time);
        }
        void StartVideoPlayback(::BNM::Structures::Mono::String* url, double time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartVideoPlayback"), {"url", "time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(url, time);
        }
        ::BNM::Structures::Mono::String* UrlToCachePath(::BNM::Structures::Mono::String* url, ::BNM::Structures::Mono::String* extension) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("UrlToCachePath"), {"url", "extension"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(url, extension);
        }
        void VODTarget_AlertDisabled(::GlobalNamespace::VODTarget* o) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VODTarget_AlertDisabled"), {"o"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(o);
        }
        void VODTarget_AlertEnabled(::GlobalNamespace::VODTarget* o) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VODTarget_AlertEnabled"), {"o"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(o);
        }
        void waitOnServerTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("waitOnServerTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
