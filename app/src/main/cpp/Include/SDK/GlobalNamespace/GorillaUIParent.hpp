#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaUIParent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaUIParent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GorillaUIParent* GetInstance() {
            static BNM::Field<::GlobalNamespace::GorillaUIParent*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::GlobalNamespace::GorillaUIParent* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GorillaUIParent*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::GorillaUIParent* value) {
            static BNM::Field<::GlobalNamespace::GorillaUIParent*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
