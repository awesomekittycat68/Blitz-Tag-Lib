#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TransferrableObjectHoldablePart.hpp"
#include "TransferrableObjectHoldablePart_Crank_CrankThreshold.hpp"

namespace GlobalNamespace {
    struct TransferrableObjectHoldablePart_Crank : ::GlobalNamespace::TransferrableObjectHoldablePart {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TransferrableObjectHoldablePart_Crank");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Quaternion GetBaseLocalAngle() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("baseLocalAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetBaseLocalAngleInverse() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("baseLocalAngleInverse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrankAngleOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("crankAngleOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrankHandleMaxZ() {
            static BNM::Field<float> _field = GetClass().GetField(O("crankHandleMaxZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrankHandleMinZ() {
            static BNM::Field<float> _field = GetClass().GetField(O("crankHandleMinZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrankHandleX() {
            static BNM::Field<float> _field = GetClass().GetField(O("crankHandleX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrankHandleY() {
            static BNM::Field<float> _field = GetClass().GetField(O("crankHandleY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrankRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("crankRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxHandSnapDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHandSnapDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<float>* GetOnCrankedCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<float>*> _field = GetClass().GetField(O("onCrankedCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRotatingPart() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rotatingPart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold>* GetThresholds() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold>*> _field = GetClass().GetField(O("thresholds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBaseLocalAngle(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("baseLocalAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseLocalAngleInverse(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("baseLocalAngleInverse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrankAngleOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crankAngleOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrankHandleMaxZ(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crankHandleMaxZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrankHandleMinZ(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crankHandleMinZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrankHandleX(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crankHandleX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrankHandleY(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crankHandleY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrankRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crankRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxHandSnapDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHandSnapDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCrankedCallback(::BNM::Structures::Mono::Action<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<float>*> _field = GetClass().GetField(O("onCrankedCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotatingPart(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rotatingPart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThresholds(::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TransferrableObjectHoldablePart_Crank_CrankThreshold>*> _field = GetClass().GetField(O("thresholds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDrawGizmosSelected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmosSelected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetOnCrankedCallback_1(::BNM::Structures::Mono::Action<float>* onCrankedCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetOnCrankedCallback"), {"onCrankedCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(onCrankedCallback);
        }
        void UpdateHeld(::GlobalNamespace::VRRig* rig, bool isHeldLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHeld"), {"rig", "isHeldLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, isHeldLeftHand);
        }
    };
}
