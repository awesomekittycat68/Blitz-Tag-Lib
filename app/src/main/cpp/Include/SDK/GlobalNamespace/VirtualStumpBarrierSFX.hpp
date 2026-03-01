#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct VirtualStumpBarrierSFX : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VirtualStumpBarrierSFX");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetBarrierAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("barrierAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::AudioClip*>* GetPassThroughBarrierSoundClips() {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("PassThroughBarrierSoundClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GameObject*, bool>* GetTrackedGameObjects() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, bool>*> _field = GetClass().GetField(O("trackedGameObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBarrierAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("barrierAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPassThroughBarrierSoundClips(::BNM::Structures::Mono::List<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::AudioClip*>*> _field = GetClass().GetField(O("PassThroughBarrierSoundClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackedGameObjects(::BNM::Structures::Mono::Dictionary<::GameObject*, bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, bool>*> _field = GetClass().GetField(O("trackedGameObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        void PlaySFX() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySFX"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
