#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct VoiceLoudnessReactor : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VoiceLoudnessReactor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*>* GetAnimatorTargets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*>*> _field = GetClass().GetField(O("animatorTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAttack() {
            static BNM::Field<float> _field = GetClass().GetField(O("attack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*>* GetBlendShapeTargets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*>*> _field = GetClass().GetField(O("blendShapeTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousPropertyArray* GetContinuousProperties() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDecay() {
            static BNM::Field<float> _field = GetClass().GetField(O("decay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrameLoudness() {
            static BNM::Field<float> _field = GetClass().GetField(O("frameLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFrameSmoothedLoudness() {
            static BNM::Field<float> _field = GetClass().GetField(O("frameSmoothedLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*>* GetGameObjectEnableTargets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*>*> _field = GetClass().GetField(O("gameObjectEnableTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasContinuousProperties() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasContinuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaSpeakerLoudness* GetLoudness() {
            static BNM::Field<::GlobalNamespace::GorillaSpeakerLoudness*> _field = GetClass().GetField(O("loudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget*>* GetParticleTargets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget*>*> _field = GetClass().GetField(O("particleTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>* GetRendererColorTargets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>*> _field = GetClass().GetField(O("rendererColorTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSmoothLoudnessForContinuousProperties() {
            static BNM::Field<bool> _field = GetClass().GetField(O("smoothLoudnessForContinuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>* GetTransformPositionTargets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>*> _field = GetClass().GetField(O("transformPositionTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>* GetTransformRotationTargets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>*> _field = GetClass().GetField(O("transformRotationTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>* GetTransformScaleTargets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>*> _field = GetClass().GetField(O("transformScaleTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimatorTargets(::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*>*> _field = GetClass().GetField(O("animatorTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttack(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("attack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlendShapeTargets(::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorBlendShapeTarget*>*> _field = GetClass().GetField(O("blendShapeTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetContinuousProperties(::GorillaTag_Cosmetics::ContinuousPropertyArray* value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDecay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("decay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameLoudness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frameLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameSmoothedLoudness(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("frameSmoothedLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameObjectEnableTargets(::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*>*> _field = GetClass().GetField(O("gameObjectEnableTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasContinuousProperties(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasContinuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoudness(::GlobalNamespace::GorillaSpeakerLoudness* value) {
            static BNM::Field<::GlobalNamespace::GorillaSpeakerLoudness*> _field = GetClass().GetField(O("loudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParticleTargets(::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorParticleSystemTarget*>*> _field = GetClass().GetField(O("particleTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRendererColorTargets(::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorRendererColorTarget*>*> _field = GetClass().GetField(O("rendererColorTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSmoothLoudnessForContinuousProperties(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("smoothLoudnessForContinuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransformPositionTargets(::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>*> _field = GetClass().GetField(O("transformPositionTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransformRotationTargets(::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>*> _field = GetClass().GetField(O("transformRotationTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransformScaleTargets(::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>*> _field = GetClass().GetField(O("transformScaleTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
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
