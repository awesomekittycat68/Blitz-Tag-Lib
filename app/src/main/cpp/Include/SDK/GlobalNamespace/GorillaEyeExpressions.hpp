#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ShaderHashId.hpp"

namespace GlobalNamespace {
    struct GorillaEyeExpressions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaEyeExpressions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ShaderHashId GetBaseMapST() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_BaseMap_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetBaseUV() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("BaseUV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDeltaTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("deltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaSpeakerLoudness* GetLoudness() {
            static BNM::Field<::GlobalNamespace::GorillaSpeakerLoudness*> _field = GetClass().GetField(O("loudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOverrideDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("overrideDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetOverrideUV() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("overrideUV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScreamDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("screamDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetScreamUV() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("ScreamUV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScreamVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("screamVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTargetFace() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("targetFace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeLastUpdated() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBaseMapST(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_BaseMap_ST"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseUV(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("BaseUV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeltaTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("deltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoudness(::GlobalNamespace::GorillaSpeakerLoudness* value) {
            static BNM::Field<::GlobalNamespace::GorillaSpeakerLoudness*> _field = GetClass().GetField(O("loudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overrideDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideUV(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("overrideUV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreamDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("screamDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreamUV(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("ScreamUV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreamVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("screamVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetFace(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("targetFace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeLastUpdated(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckEyeEffects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckEyeEffects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateEyeExpression() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateEyeExpression"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
