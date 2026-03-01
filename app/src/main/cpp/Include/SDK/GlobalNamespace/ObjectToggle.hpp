#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ObjectToggle : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ObjectToggle");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIgnoreHierarchyState() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ignoreHierarchyState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetToggled() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_toggled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetObjectsToToggle() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("objectsToToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIgnoreHierarchyState(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_ignoreHierarchyState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggled(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_toggled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectsToToggle(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("objectsToToggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Disable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Disable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Enable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Enable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Toggle(bool initialState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Toggle"), {"initialState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(initialState);
        }
    };
}
