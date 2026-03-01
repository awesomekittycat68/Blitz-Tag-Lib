#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    struct ParticleModifierCosmetic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "ParticleModifierCosmetic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCurrentIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetOriginalStartColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("originalStartColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOriginalStartSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("originalStartSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::ParticleSettingsSO*>* GetParticleSettings() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::ParticleSettingsSO*>*> _field = GetClass().GetField(O("particleSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetPs() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("ps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTargetColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("targetColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTargetSize() {
            static BNM::Field<void*> _field = GetClass().GetField(O("targetSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTransitionSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("transitionSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalStartColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("originalStartColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalStartSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("originalStartSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticleSettings(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::ParticleSettingsSO*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::ParticleSettingsSO*>*> _field = GetClass().GetField(O("particleSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPs(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("ps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("targetColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetSize(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("targetSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransitionSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("transitionSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplySetting(::GorillaTag_Cosmetics::ParticleSettingsSO* setting) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplySetting"), {"setting"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(setting);
        }
        void ApplySettingLerp(::GorillaTag_Cosmetics::ParticleSettingsSO* setting) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplySettingLerp"), {"setting"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(setting);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void IncreaseStartSize(float delta) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IncreaseStartSize"), {"delta"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(delta);
        }
        bool IsColorApproximatelyEqual(::BNM::Structures::Unity::Color a, ::BNM::Structures::Unity::Color b, float threshold) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsColorApproximatelyEqual"), {"a", "b", "threshold"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(a, b, threshold);
        }
        void LerpStartColor(::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LerpStartColor"), {"color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(color);
        }
        void LerpStartSize(float size) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LerpStartSize"), {"size"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(size);
        }
        void LerpStartValues(float size, ::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LerpStartValues"), {"size", "color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(size, color);
        }
        void MoveToNextSetting() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveToNextSetting"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MoveToNextSettingLerp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveToNextSettingLerp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MoveToSettingIndex(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveToSettingIndex"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void MoveToSettingIndexLerp(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveToSettingIndexLerp"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetSettings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetSettings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetToOriginal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetToOriginal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetStartColor(::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStartColor"), {"color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(color);
        }
        void SetStartSize(float size) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStartSize"), {"size"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(size);
        }
        void SetStartValues(float size, ::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStartValues"), {"size", "color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(size, color);
        }
        void StoreOriginalValues() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StoreOriginalValues"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
