#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HoldableObject.hpp"

namespace GlobalNamespace {
    struct MenagerieHoldable : ::GlobalNamespace::HoldableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MenagerieHoldable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void DropItemCleanup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DropItemCleanup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGrab(::GlobalNamespace::InteractionPoint* pointGrabbed, ::GameObject* grabbingHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrab"), {"pointGrabbed", "grabbingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pointGrabbed, grabbingHand);
        }
        void OnHover(::GlobalNamespace::InteractionPoint* pointHovered, ::GameObject* hoveringHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHover"), {"pointHovered", "hoveringHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pointHovered, hoveringHand);
        }
    };
}
