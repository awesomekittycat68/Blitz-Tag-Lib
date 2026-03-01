#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersToolThrowable.hpp"

namespace GlobalNamespace {
    struct CrittersNoiseMaker : ::GlobalNamespace::CrittersToolThrowable {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersNoiseMaker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetDestroyAfterPlayingRepeatNoise() {
            static BNM::Field<bool> _field = GetClass().GetField(O("destroyAfterPlayingRepeatNoise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayOnce() {
            static BNM::Field<bool> _field = GetClass().GetField(O("playOnce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRepeatNoiseDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("repeatNoiseDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRepeatNoiseRate() {
            static BNM::Field<float> _field = GetClass().GetField(O("repeatNoiseRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetRepeatPlayNoise() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("repeatPlayNoise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSoundSubIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("soundSubIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDestroyAfterPlayingRepeatNoise(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("destroyAfterPlayingRepeatNoise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayOnce(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("playOnce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRepeatNoiseDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("repeatNoiseDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRepeatNoiseRate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("repeatNoiseRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRepeatPlayNoise(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("repeatPlayNoise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundSubIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("soundSubIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnImpact(::BNM::Structures::Unity::Vector3 hitPosition, ::BNM::Structures::Unity::Vector3 hitNormal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnImpact"), {"hitPosition", "hitNormal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitPosition, hitNormal);
        }
        void OnImpactCritter(::GlobalNamespace::CrittersPawn* impactedCritter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnImpactCritter"), {"impactedCritter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(impactedCritter);
        }
        void OnPickedUp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPickedUp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* PlayRepeatNoise() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("PlayRepeatNoise"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PlaySingleNoise() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySingleNoise"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartPlayingRepeatNoise() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPlayingRepeatNoise"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopPlayRepeatNoise() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopPlayRepeatNoise"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
