#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SIGadgetTentacleArm_HeldPlayerCallback : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetTentacleArm").GetInnerClass("HeldPlayerCallback");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::TakeMyHand_HandLink* GetHeldHandLink() {
            static BNM::Field<::GlobalNamespace::TakeMyHand_HandLink*> _field = GetClass().GetField(O("heldHandLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetHeldRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("heldRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetTentacleArm* GetParent() {
            static BNM::Field<::GlobalNamespace::SIGadgetTentacleArm*> _field = GetClass().GetField(O("parent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHeldHandLink(::GlobalNamespace::TakeMyHand_HandLink* value) {
            static BNM::Field<::GlobalNamespace::TakeMyHand_HandLink*> _field = GetClass().GetField(O("heldHandLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("heldRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParent(::GlobalNamespace::SIGadgetTentacleArm* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetTentacleArm*> _field = GetClass().GetField(O("parent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CallBack() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallBack"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Register(::GlobalNamespace::VRRig* heldPlayer, ::GlobalNamespace::TakeMyHand_HandLink* heldHandLink) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"heldPlayer", "heldHandLink"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(heldPlayer, heldHandLink);
        }
        void Unregister() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
