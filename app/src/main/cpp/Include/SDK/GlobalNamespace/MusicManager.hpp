#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MusicManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MusicManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetActiveSources() {
            static BNM::Field<void*> _field = GetClass().GetField(O("activeSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::MusicManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::MusicManager*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        void SetActiveSources(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("activeSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::MusicManager* value) {
            static BNM::Field<::GlobalNamespace::MusicManager*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FadeInMusic(float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FadeInMusic"), {"duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(duration);
        }
        ::BNM::Coroutine::IEnumerator* FadeInVolumeCoroutine(float duration) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("FadeInVolumeCoroutine"), {"duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(duration);
        }
        void FadeOutMusic(float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FadeOutMusic"), {"duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(duration);
        }
        ::BNM::Coroutine::IEnumerator* FadeOutVolumeCoroutine(float duration) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("FadeOutVolumeCoroutine"), {"duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(duration);
        }
        void RegisterMusicSource(::GlobalNamespace::MusicSource* musicSource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterMusicSource"), {"musicSource"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(musicSource);
        }
        void UnregisterMusicSource(::GlobalNamespace::MusicSource* musicSource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterMusicSource"), {"musicSource"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(musicSource);
        }
    };
}
