#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion {
    struct GTPlayer_LiquidProperties : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion", "GTPlayer").GetInnerClass("LiquidProperties");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetBuoyancy() {
            static BNM::Field<float> _field = GetClass().GetField(O("buoyancy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDampingFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("dampingFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("resistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSurfaceJumpFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("surfaceJumpFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuoyancy(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("buoyancy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDampingFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dampingFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("resistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceJumpFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("surfaceJumpFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
