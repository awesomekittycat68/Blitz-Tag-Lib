#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaVelocityEstimatorManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaVelocityEstimatorManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GorillaVelocityEstimatorManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimatorManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaVelocityEstimator*>* GetEstimators() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaVelocityEstimator*>*> _field = GetClass().GetField(O("estimators"));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GlobalNamespace::GorillaVelocityEstimatorManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimatorManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GorillaVelocityEstimatorManager* value) {
            static BNM::Field<::GlobalNamespace::GorillaVelocityEstimatorManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CreateManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateManager"));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Register(::GlobalNamespace::GorillaVelocityEstimator* velEstimator) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"velEstimator"});
            _m.Call(velEstimator);
        }
        static void SetInstance_1(::GlobalNamespace::GorillaVelocityEstimatorManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        static void Unregister(::GlobalNamespace::GorillaVelocityEstimator* velEstimator) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"velEstimator"});
            _m.Call(velEstimator);
        }
    };
}
