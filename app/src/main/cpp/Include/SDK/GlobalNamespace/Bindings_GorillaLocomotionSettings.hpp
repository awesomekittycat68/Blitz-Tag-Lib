#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Bindings_GorillaLocomotionSettings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("GorillaLocomotionSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetJumpMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("jumpMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxJumpSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxJumpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSlideVelocityLimit() {
            static BNM::Field<float> _field = GetClass().GetField(O("slideVelocityLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVelocityLimit() {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetJumpMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("jumpMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxJumpSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxJumpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlideVelocityLimit(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slideVelocityLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityLimit(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
