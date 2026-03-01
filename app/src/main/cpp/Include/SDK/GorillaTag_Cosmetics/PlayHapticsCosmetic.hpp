#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    struct PlayHapticsCosmetic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "PlayHapticsCosmetic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetHapticDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHapticStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeftHand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxHapticStrengthThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHapticStrengthThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinHapticStrengthThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("minHapticStrengthThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObject* GetParentTransferable() {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("parentTransferable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHapticDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHapticStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("hapticStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("leftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxHapticStrengthThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxHapticStrengthThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinHapticStrengthThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minHapticStrengthThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentTransferable(::GlobalNamespace::TransferrableObject* value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("parentTransferable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayHaptics() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHaptics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayHaptics(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHaptics"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
        void PlayHaptics(bool isLeftHand, float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHaptics"), {"isLeftHand", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, value);
        }
        void PlayHaptics(bool isLeftHand, ::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHaptics"), {"isLeftHand", "other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, other);
        }
        void PlayHaptics(bool isLeftHand, ::BNM::IL2CPP::Il2CppObject* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHaptics"), {"isLeftHand", "other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, other);
        }
        void PlayHapticsBothHands(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHapticsBothHands"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
        void PlayHapticsBothHands(bool isLeftHand, float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHapticsBothHands"), {"isLeftHand", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, value);
        }
        void PlayHapticsBothHands(bool isLeftHand, ::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHapticsBothHands"), {"isLeftHand", "other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, other);
        }
        void PlayHapticsBothHands(bool isLeftHand, ::BNM::IL2CPP::Il2CppObject* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHapticsBothHands"), {"isLeftHand", "other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, other);
        }
        void PlayHapticsByButtonValue(bool isLeftHand, float strength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHapticsByButtonValue"), {"isLeftHand", "strength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, strength);
        }
        void PlayHapticsByButtonValueBothHands(bool isLeftHand, float strength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHapticsByButtonValueBothHands"), {"isLeftHand", "strength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, strength);
        }
        void PlayHapticsByVelocity(bool isLeftHand, float velocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHapticsByVelocity"), {"isLeftHand", "velocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, velocity);
        }
        void PlayHapticsByVelocityBothHands(bool isLeftHand, float velocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHapticsByVelocityBothHands"), {"isLeftHand", "velocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, velocity);
        }
        void PlayHapticsTransferableObject() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayHapticsTransferableObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
