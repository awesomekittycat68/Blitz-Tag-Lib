#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Gameplay {
    struct GorillaRopeSwingSettings : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Gameplay", "GorillaRopeSwingSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetFrictionWhenNotHeld() {
            static BNM::Field<float> _field = GetClass().GetField(O("frictionWhenNotHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInheritVelocityMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("inheritVelocityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFrictionWhenNotHeld(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frictionWhenNotHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInheritVelocityMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("inheritVelocityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
