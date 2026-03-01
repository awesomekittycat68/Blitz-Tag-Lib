#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MouthFlapLevel.hpp"
#include "ShaderHashId.hpp"

namespace GlobalNamespace {
    struct GorillaMouthFlap : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaMouthFlap");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ShaderHashId GetBaseMap() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_BaseMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetMouthMap() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_MouthMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetActiveFlipbookIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("activeFlipbookIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActiveFlipbookPlayTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("activeFlipbookPlayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetDefaultFaceMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultFaceMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDefaultMouthAtlas() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("defaultMouthAtlas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDeltaTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("deltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetFacePropBlock() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("facePropBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasDefaultFaceMaterial() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasDefaultFaceMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasDefaultMouthAtlas() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasDefaultMouthAtlas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastTimeUpdated() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTimeUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLeafBlowerActiveUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("leafBlowerActiveUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MouthFlapLevel GetLeafBlowerFace() {
            static BNM::Field<::GlobalNamespace::MouthFlapLevel> _field = GetClass().GetField(O("leafBlowerFace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::MouthFlapLevel>* GetMouthFlapLevels() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MouthFlapLevel>*> _field = GetClass().GetField(O("mouthFlapLevels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MouthFlapLevel GetNoMicFace() {
            static BNM::Field<::GlobalNamespace::MouthFlapLevel> _field = GetClass().GetField(O("noMicFace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaSpeakerLoudness* GetSpeaker() {
            static BNM::Field<::GlobalNamespace::GorillaSpeakerLoudness*> _field = GetClass().GetField(O("speaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTargetFace() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("targetFace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetTargetFaceRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("targetFaceRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseMicEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useMicEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBaseMap(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_BaseMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMouthMap(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_MouthMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveFlipbookIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("activeFlipbookIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveFlipbookPlayTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("activeFlipbookPlayTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultFaceMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("defaultFaceMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultMouthAtlas(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("defaultMouthAtlas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeltaTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("deltaTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFacePropBlock(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("facePropBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasDefaultFaceMaterial(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasDefaultFaceMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasDefaultMouthAtlas(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasDefaultMouthAtlas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTimeUpdated(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTimeUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeafBlowerActiveUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("leafBlowerActiveUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeafBlowerFace(::GlobalNamespace::MouthFlapLevel value) {
            static BNM::Field<::GlobalNamespace::MouthFlapLevel> _field = GetClass().GetField(O("leafBlowerFace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMouthFlapLevels(::BNM::Structures::Mono::Array<::GlobalNamespace::MouthFlapLevel>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::MouthFlapLevel>*> _field = GetClass().GetField(O("mouthFlapLevels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoMicFace(::GlobalNamespace::MouthFlapLevel value) {
            static BNM::Field<::GlobalNamespace::MouthFlapLevel> _field = GetClass().GetField(O("noMicFace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeaker(::GlobalNamespace::GorillaSpeakerLoudness* value) {
            static BNM::Field<::GlobalNamespace::GorillaSpeakerLoudness*> _field = GetClass().GetField(O("speaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetFace(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("targetFace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetFaceRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("targetFaceRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseMicEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useMicEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CheckMouthflapChange(bool isMicEnabled, float currentLoudness) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckMouthflapChange"), {"isMicEnabled", "currentLoudness"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isMicEnabled, currentLoudness);
        }
        void ClearFaceMaterialReplacement() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearFaceMaterialReplacement"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearMouthTextureReplacement() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearMouthTextureReplacement"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnableLeafBlower() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableLeafBlower"));
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
        void SetDefaultMouthAtlas_1(::Material* face) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDefaultMouthAtlas"), {"face"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(face);
        }
        ::Material* SetFaceMaterialReplacement(::Material* replacementFaceMaterial) {
            static BNM::Method<::Material*> _m = GetClass().GetMethod(O("SetFaceMaterialReplacement"), {"replacementFaceMaterial"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(replacementFaceMaterial);
        }
        void SetMouthTextureReplacement(::Texture2D* replacementMouthAtlas) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMouthTextureReplacement"), {"replacementMouthAtlas"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(replacementMouthAtlas);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateMouthFlapFlipbook(::GlobalNamespace::MouthFlapLevel mouthFlap) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMouthFlapFlipbook"), {"mouthFlap"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mouthFlap);
        }
    };
}
