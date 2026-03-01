#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$1.hpp"
#include "BarrelCannon_BarrelCannonState.hpp"

namespace GlobalNamespace {
    struct BarrelCannon_BarrelCannonSyncedStateData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BarrelCannon").GetInnerClass("BarrelCannonSyncedStateData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::BarrelCannon_BarrelCannonState GetCurrentState() {
            static BNM::Method<::GlobalNamespace::BarrelCannon_BarrelCannonState> _method = GetClass().GetMethod(O("get_CurrentState"));
            return _method.Call();
        }
        void SetCurrentState(::GlobalNamespace::BarrelCannon_BarrelCannonState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentState"));
            _method.Call(value);
        }
        float GetFiringPositionLerpValue() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_FiringPositionLerpValue"));
            return _method.Call();
        }
        void SetFiringPositionLerpValue(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FiringPositionLerpValue"));
            _method.Call(value);
        }
        ::GlobalNamespace::BarrelCannon_BarrelCannonState get_CurrentState() {
            static BNM::Method<::GlobalNamespace::BarrelCannon_BarrelCannonState> _m = GetClass().GetMethod(O("get_CurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_FiringPositionLerpValue() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_FiringPositionLerpValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_HasAuthorityPassenger() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_HasAuthorityPassenger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_CurrentState(::GlobalNamespace::BarrelCannon_BarrelCannonState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_FiringPositionLerpValue(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FiringPositionLerpValue"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_HasAuthorityPassenger(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_HasAuthorityPassenger"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
