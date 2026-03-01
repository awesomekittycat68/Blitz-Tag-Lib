#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct FlockingUpdateManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FlockingUpdateManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::FlockingUpdateManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::FlockingUpdateManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::Flocking*>* GetAllFlockings() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::Flocking*>*> _field = GetClass().GetField(O("allFlockings"));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GlobalNamespace::FlockingUpdateManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::FlockingUpdateManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetAllFlockings(::BNM::Structures::Mono::List<::GlobalNamespace::Flocking*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::Flocking*>*> _field = GetClass().GetField(O("allFlockings"));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::FlockingUpdateManager* value) {
            static BNM::Field<::GlobalNamespace::FlockingUpdateManager*> _field = GetClass().GetField(O("instance"));
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
        static void RegisterFlocking(::GlobalNamespace::Flocking* flocking) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterFlocking"), {"flocking"});
            _m.Call(flocking);
        }
        static void SetInstance_1(::GlobalNamespace::FlockingUpdateManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        static void UnregisterFlocking(::GlobalNamespace::Flocking* flocking) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterFlocking"), {"flocking"});
            _m.Call(flocking);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
