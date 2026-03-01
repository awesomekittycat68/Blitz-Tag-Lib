#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TransferrableObjectHoldablePart.hpp"

namespace GlobalNamespace {
    struct TransferrableObjectHoldablePart_Slide : ::GlobalNamespace::TransferrableObjectHoldablePart {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TransferrableObjectHoldablePart_Slide");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int LEFT = 0;
        static constexpr int RIGHT = 1;
        float GetMaxHandSnapDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxHandSnapDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SnapXformToLine* GetSnapToLine() {
            static BNM::Field<::GlobalNamespace::SnapXformToLine*> _field = GetClass().GetField(O("_snapToLine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMaxHandSnapDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxHandSnapDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapToLine(::GlobalNamespace::SnapXformToLine* value) {
            static BNM::Field<::GlobalNamespace::SnapXformToLine*> _field = GetClass().GetField(O("_snapToLine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void UpdateHeld(::GlobalNamespace::VRRig* rig, bool isHeldLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHeld"), {"rig", "isHeldLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, isHeldLeftHand);
        }
    };
}
