#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SIGadgetDashYoyo_TargetRB : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetDashYoyo_TargetRB");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SIGadgetDashYoyo* GetGadget() {
            static BNM::Field<::GlobalNamespace::SIGadgetDashYoyo*> _field = GetClass().GetField(O("gadget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGadget(::GlobalNamespace::SIGadgetDashYoyo* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetDashYoyo*> _field = GetClass().GetField(O("gadget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* otherCollider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"otherCollider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherCollider);
        }
    };
}
