#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SRand.hpp"

namespace GlobalNamespace {
    struct LightningStrike : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LightningStrike");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetPs() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("ps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPsMain() {
            static BNM::Field<void*> _field = GetClass().GetField(O("psMain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPsShape() {
            static BNM::Field<void*> _field = GetClass().GetField(O("psShape"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPsTrails() {
            static BNM::Field<void*> _field = GetClass().GetField(O("psTrails"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::SRand GetRand() {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("rand"));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPs(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("ps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPsMain(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("psMain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPsShape(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("psShape"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPsTrails(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("psTrails"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRand(::GlobalNamespace::SRand value) {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("rand"));
            _field.Set(value);
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Play(::BNM::Structures::Unity::Vector3 p1, ::BNM::Structures::Unity::Vector3 p2, float beamWidthMultiplier, float audioVolume, float duration, ::Gradient* colorOverLifetime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Play"), {"p1", "p2", "beamWidthMultiplier", "audioVolume", "duration", "colorOverLifetime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(p1, p2, beamWidthMultiplier, audioVolume, duration, colorOverLifetime);
        }
    };
}
