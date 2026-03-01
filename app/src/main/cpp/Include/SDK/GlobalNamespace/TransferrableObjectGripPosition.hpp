#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TransferrableObject_PositionState.hpp"

namespace GlobalNamespace {
    struct TransferrableObjectGripPosition : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TransferrableObjectGripPosition");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::TransferrableObject_PositionState GetAttachmentType() {
            static BNM::Field<::GlobalNamespace::TransferrableObject_PositionState> _field = GetClass().GetField(O("attachmentType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableItemSlotTransformOverride* GetParentObject() {
            static BNM::Field<::GlobalNamespace::TransferrableItemSlotTransformOverride*> _field = GetClass().GetField(O("parentObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttachmentType(::GlobalNamespace::TransferrableObject_PositionState value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject_PositionState> _field = GetClass().GetField(O("attachmentType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentObject(::GlobalNamespace::TransferrableItemSlotTransformOverride* value) {
            static BNM::Field<::GlobalNamespace::TransferrableItemSlotTransformOverride*> _field = GetClass().GetField(O("parentObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::SubGrabPoint* CreateSubGrabPoint(::GlobalNamespace::SlotTransformOverride* overrideContainer) {
            static BNM::Method<::GlobalNamespace::SubGrabPoint*> _m = GetClass().GetMethod(O("CreateSubGrabPoint"), {"overrideContainer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(overrideContainer);
        }
    };
}
