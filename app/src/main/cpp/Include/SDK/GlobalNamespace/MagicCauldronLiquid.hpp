#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MagicCauldronLiquid_WaveParams.hpp"

namespace GlobalNamespace {
    struct MagicCauldronLiquid : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MagicCauldronLiquid");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAnimating() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_animating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetAnimationCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_animationCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAnimProgress() {
            static BNM::Field<float> _field = GetClass().GetField(O("_animProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ApplyMaterialProperty* GetApplyMaterial() {
            static BNM::Field<::GlobalNamespace::ApplyMaterialProperty*> _field = GetClass().GetField(O("_applyMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorEnd() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_colorEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetColorStart() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_colorStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetWaveCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_waveCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAnimLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("animLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MagicCauldronLiquid_WaveParams GetWaveAnimating() {
            static BNM::Field<::GlobalNamespace::MagicCauldronLiquid_WaveParams> _field = GetClass().GetField(O("waveAnimating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MagicCauldronLiquid_WaveParams GetWaveNormal() {
            static BNM::Field<::GlobalNamespace::MagicCauldronLiquid_WaveParams> _field = GetClass().GetField(O("waveNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimating(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_animating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimationCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_animationCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_animProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetApplyMaterial(::GlobalNamespace::ApplyMaterialProperty* value) {
            static BNM::Field<::GlobalNamespace::ApplyMaterialProperty*> _field = GetClass().GetField(O("_applyMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorEnd(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_colorEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorStart(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_colorStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaveCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_waveCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("animLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaveAnimating(::GlobalNamespace::MagicCauldronLiquid_WaveParams value) {
            static BNM::Field<::GlobalNamespace::MagicCauldronLiquid_WaveParams> _field = GetClass().GetField(O("waveAnimating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaveNormal(::GlobalNamespace::MagicCauldronLiquid_WaveParams value) {
            static BNM::Field<::GlobalNamespace::MagicCauldronLiquid_WaveParams> _field = GetClass().GetField(O("waveNormal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AnimateColorFromTo(::BNM::Structures::Unity::Color a, ::BNM::Structures::Unity::Color b, float length) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AnimateColorFromTo"), {"a", "b", "length"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(a, b, length);
        }
        void ApplyColor(::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyColor"), {"color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(color);
        }
        void ApplyWaveParams(float amplitude, float frequency, float scale, float rotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyWaveParams"), {"amplitude", "frequency", "scale", "rotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(amplitude, frequency, scale, rotation);
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
        void Test() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Test"));
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
