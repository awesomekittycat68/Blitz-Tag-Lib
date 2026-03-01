#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct HorseStickNoiseMaker : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HorseStickNoiseMaker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDistElapsed() {
            static BNM::Field<float> _field = GetClass().GetField(O("distElapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGorillaPlayerXform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gorillaPlayerXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetGorillaPlayerXformPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("gorillaPlayerXform_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMetersPerClip() {
            static BNM::Field<float> _field = GetClass().GetField(O("metersPerClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinSecBetweenClips() {
            static BNM::Field<float> _field = GetClass().GetField(O("minSecBetweenClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetOldPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("oldPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetParticleFX() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("particleFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetSoundBankPlayer() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("soundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeSincePlay() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeSincePlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDistElapsed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distElapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGorillaPlayerXform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gorillaPlayerXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGorillaPlayerXformPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("gorillaPlayerXform_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMetersPerClip(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("metersPerClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinSecBetweenClips(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minSecBetweenClips"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOldPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("oldPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticleFX(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("particleFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundBankPlayer(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("soundBankPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSincePlay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeSincePlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
