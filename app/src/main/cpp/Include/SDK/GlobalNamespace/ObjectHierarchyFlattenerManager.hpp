#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourPostTick.hpp"

namespace GlobalNamespace {
    struct ObjectHierarchyFlattenerManager : ::GlobalNamespace::MonoBehaviourPostTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ObjectHierarchyFlattenerManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ObjectHierarchyFlattenerManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattenerManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::ObjectHierarchyFlattener*>* GetAlloHF() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ObjectHierarchyFlattener*>*> _field = GetClass().GetField(O("alloHF"));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GlobalNamespace::ObjectHierarchyFlattenerManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattenerManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetAlloHF(::BNM::Structures::Mono::List<::GlobalNamespace::ObjectHierarchyFlattener*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ObjectHierarchyFlattener*>*> _field = GetClass().GetField(O("alloHF"));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::ObjectHierarchyFlattenerManager* value) {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattenerManager*> _field = GetClass().GetField(O("instance"));
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
        void PostTick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostTick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void RegisterOHF(::GlobalNamespace::ObjectHierarchyFlattener* rbWI) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterOHF"), {"rbWI"});
            _m.Call(rbWI);
        }
        static void SetInstance_1(::GlobalNamespace::ObjectHierarchyFlattenerManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        static void UnregisterOHF(::GlobalNamespace::ObjectHierarchyFlattener* rbWI) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterOHF"), {"rbWI"});
            _m.Call(rbWI);
        }
    };
}
