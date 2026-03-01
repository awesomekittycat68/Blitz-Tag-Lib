#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SubGrabPoint.hpp"

namespace GlobalNamespace {
    struct SubLineGrabPoint : ::GlobalNamespace::SubGrabPoint {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SubLineGrabPoint");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetEndPoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetEndPointRelativeToGrabPointOrigin() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("endPointRelativeToGrabPointOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Matrix4x4 GetEndPointRelativeTransformToGrabPointOrigin() {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("endPointRelativeTransformToGrabPointOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetStartPoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("startPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetStartPointRelativeToGrabPointOrigin() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startPointRelativeToGrabPointOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Matrix4x4 GetStartPointRelativeTransformToGrabPointOrigin() {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("startPointRelativeTransformToGrabPointOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEndPoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndPointRelativeToGrabPointOrigin(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("endPointRelativeToGrabPointOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndPointRelativeTransformToGrabPointOrigin(::BNM::Structures::Unity::Matrix4x4 value) {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("endPointRelativeTransformToGrabPointOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("startPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPointRelativeToGrabPointOrigin(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("startPointRelativeToGrabPointOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPointRelativeTransformToGrabPointOrigin(::BNM::Structures::Unity::Matrix4x4 value) {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("startPointRelativeTransformToGrabPointOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float EvaluateScore(::Transform* objectTransform, ::Transform* handTransform, ::Transform* targetDock) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("EvaluateScore"), {"objectTransform", "handTransform", "targetDock"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(objectTransform, handTransform, targetDock);
        }
        ::GlobalNamespace::AdvancedItemState_PreData* GetPreData(::Transform* objectTransform, ::Transform* handTransform, ::Transform* targetDock, ::GlobalNamespace::SlotTransformOverride* slotTransformOverride) {
            static BNM::Method<::GlobalNamespace::AdvancedItemState_PreData*> _m = GetClass().GetMethod(O("GetPreData"), {"objectTransform", "handTransform", "targetDock", "slotTransformOverride"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(objectTransform, handTransform, targetDock, slotTransformOverride);
        }
        ::BNM::Structures::Unity::Matrix4x4 GetTransformation_GripPointLocalToAdvOriginLocal(::GlobalNamespace::AdvancedItemState_PreData* advancedItemState, ::GlobalNamespace::SlotTransformOverride* slotTransformOverride) {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("GetTransformation_GripPointLocalToAdvOriginLocal"), {"advancedItemState", "slotTransformOverride"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(advancedItemState, slotTransformOverride);
        }
        void InitializePoints(::Transform* anchor, ::Transform* grabPointAnchor, ::Transform* advancedGrabPointOrigin) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializePoints"), {"anchor", "grabPointAnchor", "advancedGrabPointOrigin"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(anchor, grabPointAnchor, advancedGrabPointOrigin);
        }
    };
}
