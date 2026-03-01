#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct VODTarget_VODTargetAudioSettings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VODTarget").GetInnerClass("VODTargetAudioSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDopplerLevel() {
            static BNM::Field<float> _field = GetClass().GetField(O("dopplerLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("minDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRolloffMode() {
            static BNM::Field<void*> _field = GetClass().GetField(O("rolloffMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpread() {
            static BNM::Field<float> _field = GetClass().GetField(O("spread"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("volume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDopplerLevel(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dopplerLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRolloffMode(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("rolloffMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpread(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spread"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("volume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
