#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SnapXformToLine : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SnapXformToLine");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetLinearDistance() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_linearDistance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetLinePoint() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_linePoint"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetClosest() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_closest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLinear() {
            static BNM::Field<float> _field = GetClass().GetField(O("_linear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetApply() {
            static BNM::Field<bool> _field = GetClass().GetField(O("apply"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFrom() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("from"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnLinearDistanceChanged() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onLinearDistanceChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnPositionChanged() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onPositionChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetResetOnDisable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("resetOnDisable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSnapOrientation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("snapOrientation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTarget() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTo() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("to"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetClosest(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_closest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinear(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_linear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApply(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("apply"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrom(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("from"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLinearDistanceChanged(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onLinearDistanceChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPositionChanged(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onPositionChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetOnDisable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("resetOnDisable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapOrientation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("snapOrientation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTo(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("to"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float get_linearDistance() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_linearDistance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_linePoint() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_linePoint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Unity::Vector3 GetClosestPointOnLine(::BNM::Structures::Unity::Vector3 p, ::BNM::Structures::Unity::Vector3 a, ::BNM::Structures::Unity::Vector3 b) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetClosestPointOnLine"), {"p", "a", "b"});
            return _m.Call(p, a, b);
        }
        ::BNM::Structures::Unity::Vector3 GetSnappedPoint(::Transform* t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetSnappedPoint"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(t);
        }
        ::BNM::Structures::Unity::Vector3 GetSnappedPoint(::BNM::Structures::Unity::Vector3 point) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetSnappedPoint"), {"point"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(point);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Snap(::Transform* xform, bool applyToXform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Snap"), {"xform", "applyToXform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(xform, applyToXform);
        }
        void SnapTarget(bool applyToXform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SnapTarget"), {"applyToXform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(applyToXform);
        }
        void SnapTarget(::BNM::Structures::Unity::Vector3 point) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SnapTarget"), {"point"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(point);
        }
        void SnapTargetLinear(float t) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SnapTargetLinear"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(t);
        }
    };
}
