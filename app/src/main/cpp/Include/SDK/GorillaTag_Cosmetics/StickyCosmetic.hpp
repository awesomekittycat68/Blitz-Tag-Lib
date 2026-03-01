#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "StickyCosmetic_ObjectState.hpp"

namespace GorillaTag_Cosmetics {
    struct StickyCosmetic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "StickyCosmetic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAutoRetractThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("autoRetractThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::UpdateBlendShapeCosmetic* GetBlendShapeCosmetic() {
            static BNM::Field<::GorillaTag_Cosmetics::UpdateBlendShapeCosmetic*> _field = GetClass().GetField(O("blendShapeCosmetic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCollisionLayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("collisionLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::StickyCosmetic_ObjectState GetCurrentState() {
            static BNM::Field<::GorillaTag_Cosmetics::StickyCosmetic_ObjectState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetEndPositionParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endPositionParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetEndRigidbody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("endRigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExtendingStartedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("extendingStartedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::StickyCosmetic_ObjectState GetLastState() {
            static BNM::Field<::GorillaTag_Cosmetics::StickyCosmetic_ObjectState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxObjectLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxObjectLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnStick() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onStick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnUnstick() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onUnstick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRayLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("rayLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRayOrigin() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rayOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRetractAfterSecond() {
            static BNM::Field<float> _field = GetClass().GetField(O("retractAfterSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRetractSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("retractSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetStartPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("startPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStick() {
            static BNM::Field<bool> _field = GetClass().GetField(O("stick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAutoRetractThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("autoRetractThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlendShapeCosmetic(::GorillaTag_Cosmetics::UpdateBlendShapeCosmetic* value) {
            static BNM::Field<::GorillaTag_Cosmetics::UpdateBlendShapeCosmetic*> _field = GetClass().GetField(O("blendShapeCosmetic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionLayers(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("collisionLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GorillaTag_Cosmetics::StickyCosmetic_ObjectState value) {
            static BNM::Field<::GorillaTag_Cosmetics::StickyCosmetic_ObjectState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndPositionParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endPositionParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndRigidbody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("endRigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtendingStartedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("extendingStartedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastState(::GorillaTag_Cosmetics::StickyCosmetic_ObjectState value) {
            static BNM::Field<::GorillaTag_Cosmetics::StickyCosmetic_ObjectState> _field = GetClass().GetField(O("lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxObjectLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxObjectLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnStick(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onStick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnUnstick(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onUnstick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRayLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rayLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRayOrigin(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rayOrigin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetractAfterSecond(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("retractAfterSecond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetractSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("retractSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("startPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStick(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("stick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Extend() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Extend"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Extend_Internal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Extend_Internal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Retract() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Retract"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Retract_Internal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Retract_Internal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateState(::GorillaTag_Cosmetics::StickyCosmetic_ObjectState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
    };
}
