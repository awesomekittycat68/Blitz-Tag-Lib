#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct FlattenerCrumb : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FlattenerCrumb");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::ObjectHierarchyFlattener*>* GetFlattenerList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ObjectHierarchyFlattener*>*> _field = GetClass().GetField(O("flattenerList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFlattenerList(::BNM::Structures::Mono::List<::GlobalNamespace::ObjectHierarchyFlattener*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ObjectHierarchyFlattener*>*> _field = GetClass().GetField(O("flattenerList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddFlattenerReference(::GlobalNamespace::ObjectHierarchyFlattener* flattener) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddFlattenerReference"), {"flattener"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(flattener);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
