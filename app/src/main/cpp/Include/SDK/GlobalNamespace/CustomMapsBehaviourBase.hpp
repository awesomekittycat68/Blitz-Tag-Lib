#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CustomMapsBehaviourBase : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsBehaviourBase");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool CanContinueExecuting() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanContinueExecuting"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanExecute() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanExecute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Execute() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void NetExecute() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetExecute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* otherCollider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"otherCollider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherCollider);
        }
        void ResetBehavior() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetBehavior"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
