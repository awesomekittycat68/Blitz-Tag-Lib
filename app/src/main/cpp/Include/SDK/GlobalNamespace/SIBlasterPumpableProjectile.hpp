#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SIBlasterPumpableProjectile : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIBlasterPumpableProjectile");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetMaxPump() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxPump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPumpChargedAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("pumpChargedAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStrengthPerPumpCharge() {
            static BNM::Field<float> _field = GetClass().GetField(O("strengthPerPumpCharge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVelocityPerPumpCharge() {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityPerPumpCharge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMaxPump(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxPump"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPumpChargedAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pumpChargedAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStrengthPerPumpCharge(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("strengthPerPumpCharge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocityPerPumpCharge(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("velocityPerPumpCharge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ModifyProjectile(::GlobalNamespace::SIGadgetBlasterProjectile* projectile) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ModifyProjectile"), {"projectile"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile);
        }
    };
}
