#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LimitAxis.hpp"

namespace GlobalNamespace {
    struct SubGrabPoint : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SubGrabPoint");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Quaternion GetAdvAnchorParentAnchorLocal() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("advAnchor_ParentAnchorLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAllowReverseGrip() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowReverseGrip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGripPoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gripPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetGripPointAdvOriginLocal() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("gripPoint_AdvOriginLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Matrix4x4 GetGripPointLocalToAdvOriginLocal() {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("gripPointLocalToAdvOriginLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetGripPointOffsetAdvOriginLocal() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("gripPointOffset_AdvOriginLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetGripRotationAdvOriginLocal() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("gripRotation_AdvOriginLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetGripRotationParentAnchorLocal() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("gripRotation_ParentAnchorLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LimitAxis GetLimitAxis() {
            static BNM::Field<::GlobalNamespace::LimitAxis> _field = GetClass().GetField(O("limitAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAdvAnchorParentAnchorLocal(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("advAnchor_ParentAnchorLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllowReverseGrip(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowReverseGrip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGripPoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gripPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGripPointAdvOriginLocal(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("gripPoint_AdvOriginLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGripPointLocalToAdvOriginLocal(::BNM::Structures::Unity::Matrix4x4 value) {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("gripPointLocalToAdvOriginLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGripPointOffsetAdvOriginLocal(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("gripPointOffset_AdvOriginLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGripRotationAdvOriginLocal(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("gripRotation_AdvOriginLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGripRotationParentAnchorLocal(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("gripRotation_ParentAnchorLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLimitAxis(::GlobalNamespace::LimitAxis value) {
            static BNM::Field<::GlobalNamespace::LimitAxis> _field = GetClass().GetField(O("limitAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float EvaluateScore(::Transform* objectTransform, ::Transform* handTransform, ::Transform* targetDock) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("EvaluateScore"), {"objectTransform", "handTransform", "targetDock"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(objectTransform, handTransform, targetDock);
        }
        ::GlobalNamespace::AdvancedItemState* GetAdvancedItemStateFromHand(::Transform* objectTransform, ::Transform* handTransform, ::Transform* targetDock, ::GlobalNamespace::SlotTransformOverride* slotTransformOverride) {
            static BNM::Method<::GlobalNamespace::AdvancedItemState*> _m = GetClass().GetMethod(O("GetAdvancedItemStateFromHand"), {"objectTransform", "handTransform", "targetDock", "slotTransformOverride"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(objectTransform, handTransform, targetDock, slotTransformOverride);
        }
        ::BNM::Structures::Unity::Vector3 GetGrabPositionRelativeToGrabPointOrigin(::GlobalNamespace::AdvancedItemState* advancedItemState, ::GlobalNamespace::SlotTransformOverride* slotTransformOverride) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetGrabPositionRelativeToGrabPointOrigin"), {"advancedItemState", "slotTransformOverride"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(advancedItemState, slotTransformOverride);
        }
        ::BNM::Structures::Unity::Vector3 GetPositionOnObject(::Transform* transferableObject, ::GlobalNamespace::SlotTransformOverride* slotTransformOverride) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetPositionOnObject"), {"transferableObject", "slotTransformOverride"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(transferableObject, slotTransformOverride);
        }
        ::GlobalNamespace::AdvancedItemState_PreData* GetPreData(::Transform* objectTransform, ::Transform* handTransform, ::Transform* targetDock, ::GlobalNamespace::SlotTransformOverride* slotTransformOverride) {
            static BNM::Method<::GlobalNamespace::AdvancedItemState_PreData*> _m = GetClass().GetMethod(O("GetPreData"), {"objectTransform", "handTransform", "targetDock", "slotTransformOverride"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(objectTransform, handTransform, targetDock, slotTransformOverride);
        }
        ::BNM::Structures::Unity::Quaternion GetRotationRelativeToObjectAnchor(::GlobalNamespace::AdvancedItemState* advancedItemState, ::GlobalNamespace::SlotTransformOverride* slotTransformOverride) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("GetRotationRelativeToObjectAnchor"), {"advancedItemState", "slotTransformOverride"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(advancedItemState, slotTransformOverride);
        }
        ::BNM::Structures::Unity::Matrix4x4 GetTransformation_GripPointLocalToAdvOriginLocal(::GlobalNamespace::AdvancedItemState_PreData* advancedItemState, ::GlobalNamespace::SlotTransformOverride* slotTransformOverride) {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("GetTransformation_GripPointLocalToAdvOriginLocal"), {"advancedItemState", "slotTransformOverride"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(advancedItemState, slotTransformOverride);
        }
        ::BNM::Structures::Unity::Matrix4x4 GetTransformFromPositionState(::GlobalNamespace::AdvancedItemState* advancedItemState, ::GlobalNamespace::SlotTransformOverride* slotTransformOverride, ::Transform* targetDockXf) {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("GetTransformFromPositionState"), {"advancedItemState", "slotTransformOverride", "targetDockXf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(advancedItemState, slotTransformOverride, targetDockXf);
        }
        void InitializePoints(::Transform* anchor, ::Transform* grabPointAnchor, ::Transform* advancedGrabPointOrigin) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializePoints"), {"anchor", "grabPointAnchor", "advancedGrabPointOrigin"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(anchor, grabPointAnchor, advancedGrabPointOrigin);
        }
    };
}
