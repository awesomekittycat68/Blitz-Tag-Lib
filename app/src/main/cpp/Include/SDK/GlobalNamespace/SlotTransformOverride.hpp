#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TransferrableObject_PositionState.hpp"
#include "../GorillaTag/XformOffset.hpp"

namespace GlobalNamespace {
    struct SlotTransformOverride : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SlotTransformOverride");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag::XformOffset GetEdXformOffsetRepresenationOfOverrideTransformMatrix() {
            static BNM::Method<::GorillaTag::XformOffset> _method = GetClass().GetMethod(O("get__EdXformOffsetRepresenationOf_overrideTransformMatrix"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEdXformOffsetRepresenationOfOverrideTransformMatrix(::GorillaTag::XformOffset value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set__EdXformOffsetRepresenationOf_overrideTransformMatrix"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Transform* GetAdvancedGrabPointAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("advancedGrabPointAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetAdvancedGrabPointOrigin() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("advancedGrabPointOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Matrix4x4 GetAdvAnchorLocalToAdvOriginLocal() {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("AdvAnchorLocalToAdvOriginLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Matrix4x4 GetAdvOriginLocalToParentAnchorLocal() {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("AdvOriginLocalToParentAnchorLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SubGrabPoint*>* GetMultiPoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SubGrabPoint*>*> _field = GetClass().GetField(O("multiPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetOverrideTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("overrideTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOverrideTransformPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("overrideTransform_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Matrix4x4 GetOverrideTransformMatrix() {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("overrideTransformMatrix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObject_PositionState GetPositionState() {
            static BNM::Field<::GlobalNamespace::TransferrableObject_PositionState> _field = GetClass().GetField(O("positionState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseAdvancedGrab() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useAdvancedGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAdvancedGrabPointAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("advancedGrabPointAnchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAdvancedGrabPointOrigin(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("advancedGrabPointOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAdvAnchorLocalToAdvOriginLocal(::BNM::Structures::Unity::Matrix4x4 value) {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("AdvAnchorLocalToAdvOriginLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAdvOriginLocalToParentAnchorLocal(::BNM::Structures::Unity::Matrix4x4 value) {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("AdvOriginLocalToParentAnchorLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMultiPoints(::BNM::Structures::Mono::List<::GlobalNamespace::SubGrabPoint*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SubGrabPoint*>*> _field = GetClass().GetField(O("multiPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("overrideTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideTransformPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("overrideTransform_path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideTransformMatrix(::BNM::Structures::Unity::Matrix4x4 value) {
            static BNM::Field<::BNM::Structures::Unity::Matrix4x4> _field = GetClass().GetField(O("overrideTransformMatrix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionState(::GlobalNamespace::TransferrableObject_PositionState value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject_PositionState> _field = GetClass().GetField(O("positionState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseAdvancedGrab(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useAdvancedGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddLineButton() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddLineButton"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AddSubGrabPoint(::GlobalNamespace::TransferrableObjectGripPosition* togp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSubGrabPoint"), {"togp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(togp);
        }
        ::GorillaTag::XformOffset get__EdXformOffsetRepresenationOf_overrideTransformMatrix() {
            static BNM::Method<::GorillaTag::XformOffset> _m = GetClass().GetMethod(O("get__EdXformOffsetRepresenationOf_overrideTransformMatrix"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Initialize(::Component* component, ::Transform* anchor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"), {"component", "anchor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(component, anchor);
        }
        void set__EdXformOffsetRepresenationOf_overrideTransformMatrix(::GorillaTag::XformOffset value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set__EdXformOffsetRepresenationOf_overrideTransformMatrix"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
