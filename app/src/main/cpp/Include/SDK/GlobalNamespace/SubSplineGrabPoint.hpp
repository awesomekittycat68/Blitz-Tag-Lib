#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SubLineGrabPoint.hpp"

namespace GlobalNamespace {
    struct SubSplineGrabPoint : ::GlobalNamespace::SubLineGrabPoint {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SubSplineGrabPoint");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* GetControlPointsRelativeToGrabOrigin() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("controlPointsRelativeToGrabOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Unity::Matrix4x4>* GetControlPointsTransformsRelativeToGrabOrigin() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("controlPointsTransformsRelativeToGrabOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CatmullRomSpline* GetSpline() {
            static BNM::Field<::GlobalNamespace::CatmullRomSpline*> _field = GetClass().GetField(O("spline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetControlPointsRelativeToGrabOrigin(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Vector3>*> _field = GetClass().GetField(O("controlPointsRelativeToGrabOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetControlPointsTransformsRelativeToGrabOrigin(::BNM::Structures::Mono::List<::BNM::Structures::Unity::Matrix4x4>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("controlPointsTransformsRelativeToGrabOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpline(::GlobalNamespace::CatmullRomSpline* value) {
            static BNM::Field<::GlobalNamespace::CatmullRomSpline*> _field = GetClass().GetField(O("spline"));
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
