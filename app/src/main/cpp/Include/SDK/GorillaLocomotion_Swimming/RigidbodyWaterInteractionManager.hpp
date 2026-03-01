#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Swimming {
    struct RigidbodyWaterInteractionManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Swimming", "RigidbodyWaterInteractionManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaLocomotion_Swimming::RigidbodyWaterInteractionManager* GetInstance() {
            static BNM::Field<::GorillaLocomotion_Swimming::RigidbodyWaterInteractionManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::RigidbodyWaterInteraction*>* GetAllrBWI() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::RigidbodyWaterInteraction*>*> _field = GetClass().GetField(O("allrBWI"));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GorillaLocomotion_Swimming::RigidbodyWaterInteractionManager* GetInstance_f() {
            static BNM::Field<::GorillaLocomotion_Swimming::RigidbodyWaterInteractionManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetAllrBWI(::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::RigidbodyWaterInteraction*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Swimming::RigidbodyWaterInteraction*>*> _field = GetClass().GetField(O("allrBWI"));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GorillaLocomotion_Swimming::RigidbodyWaterInteractionManager* value) {
            static BNM::Field<::GorillaLocomotion_Swimming::RigidbodyWaterInteractionManager*> _field = GetClass().GetField(O("instance"));
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
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void RegisterRBWI(::GorillaLocomotion_Swimming::RigidbodyWaterInteraction* rbWI) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterRBWI"), {"rbWI"});
            _m.Call(rbWI);
        }
        static void SetInstance_1(::GorillaLocomotion_Swimming::RigidbodyWaterInteractionManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        static void UnregisterRBWI(::GorillaLocomotion_Swimming::RigidbodyWaterInteraction* rbWI) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterRBWI"), {"rbWI"});
            _m.Call(rbWI);
        }
    };
}
