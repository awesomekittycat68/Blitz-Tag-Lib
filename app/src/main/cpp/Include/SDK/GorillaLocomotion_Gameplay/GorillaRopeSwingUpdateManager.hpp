#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Gameplay {
    struct GorillaRopeSwingUpdateManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Gameplay", "GorillaRopeSwingUpdateManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaLocomotion_Gameplay::GorillaRopeSwingUpdateManager* GetInstance() {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaRopeSwingUpdateManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>* GetAllGorillaRopeSwings() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>*> _field = GetClass().GetField(O("allGorillaRopeSwings"));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GorillaLocomotion_Gameplay::GorillaRopeSwingUpdateManager* GetInstance_f() {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaRopeSwingUpdateManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetAllGorillaRopeSwings(::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion_Gameplay::GorillaRopeSwing*>*> _field = GetClass().GetField(O("allGorillaRopeSwings"));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GorillaLocomotion_Gameplay::GorillaRopeSwingUpdateManager* value) {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaRopeSwingUpdateManager*> _field = GetClass().GetField(O("instance"));
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
        static void RegisterRopeSwing(::GorillaLocomotion_Gameplay::GorillaRopeSwing* ropeSwing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterRopeSwing"), {"ropeSwing"});
            _m.Call(ropeSwing);
        }
        static void SetInstance_1(::GorillaLocomotion_Gameplay::GorillaRopeSwingUpdateManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        static void UnregisterRopeSwing(::GorillaLocomotion_Gameplay::GorillaRopeSwing* ropeSwing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterRopeSwing"), {"ropeSwing"});
            _m.Call(ropeSwing);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
