#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaSurfaceOverride : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaSurfaceOverride");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetDisablePushBackEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disablePushBackEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExtraVelMaxMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("extraVelMaxMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExtraVelMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("extraVelMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOverrideIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("overrideIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSendOnTapEvent() {
            static BNM::Field<bool> _field = GetClass().GetField(O("sendOnTapEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlidePercentageOverride() {
            static BNM::Field<float> _field = GetClass().GetField(O("slidePercentageOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDisablePushBackEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disablePushBackEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtraVelMaxMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("extraVelMaxMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtraVelMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("extraVelMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("overrideIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendOnTapEvent(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("sendOnTapEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlidePercentageOverride(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slidePercentageOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
