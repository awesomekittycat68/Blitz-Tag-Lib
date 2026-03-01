#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BarrelCannon_BarrelCannonState.hpp"

namespace GlobalNamespace {
    struct BarrelCannon_BarrelCannonSyncedState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BarrelCannon").GetInnerClass("BarrelCannonSyncedState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::BarrelCannon_BarrelCannonState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::BarrelCannon_BarrelCannonState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFiringPositionLerpValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("firingPositionLerpValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasAuthorityPassenger() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasAuthorityPassenger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentState(::GlobalNamespace::BarrelCannon_BarrelCannonState value) {
            static BNM::Field<::GlobalNamespace::BarrelCannon_BarrelCannonState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFiringPositionLerpValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("firingPositionLerpValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasAuthorityPassenger(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasAuthorityPassenger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
