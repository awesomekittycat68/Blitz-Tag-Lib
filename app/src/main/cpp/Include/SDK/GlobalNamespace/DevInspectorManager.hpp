#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DevInspectorManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DevInspectorManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::DevInspectorManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::DevInspectorManager*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        ::GlobalNamespace::DevInspectorManager* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::DevInspectorManager*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::DevInspectorManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::DevInspectorManager*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::DevInspectorManager* value) {
            static BNM::Field<::GlobalNamespace::DevInspectorManager*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        static ::GlobalNamespace::DevInspectorManager* get_instance() {
            static BNM::Method<::GlobalNamespace::DevInspectorManager*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
    };
}
