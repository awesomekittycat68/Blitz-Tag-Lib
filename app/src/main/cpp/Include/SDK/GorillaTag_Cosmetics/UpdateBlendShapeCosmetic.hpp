#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    struct UpdateBlendShapeCosmetic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "UpdateBlendShapeCosmetic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetBlendShapeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("blendShapeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBlendSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("blendSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBlendStartWeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("blendStartWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentWeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInvertPassedBlend() {
            static BNM::Field<bool> _field = GetClass().GetField(O("invertPassedBlend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxBlendShapeWeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxBlendShapeWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SkinnedMeshRenderer* GetSkinnedMeshRenderer() {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("skinnedMeshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTargetWeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("targetWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlendShapeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("blendShapeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlendSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("blendSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlendStartWeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("blendStartWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentWeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInvertPassedBlend(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("invertPassedBlend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxBlendShapeWeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxBlendShapeWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkinnedMeshRenderer(::SkinnedMeshRenderer* value) {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("skinnedMeshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetWeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("targetWeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FullyBlend() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FullyBlend"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float GetBlendValue() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetBlendValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ResetBlend() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetBlend"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetBlendValue(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBlendValue"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetBlendValue(bool leftHand, float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBlendValue"), {"leftHand", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(leftHand, value);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
