#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GorillaTagManager.hpp"
#include "../GlobalNamespace/XSceneRef.hpp"
#include "../GorillaGameModes/GameModeType.hpp"

namespace GorillaTagScripts {
    struct GorillaAmbushManager : ::GlobalNamespace::GorillaTagManager {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "GorillaAmbushManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int STEALTH_MATERIAL_INDEX = 13;
        int GetHandEffectHash() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_HandEffectHash"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetHandFXScaleModifier() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_HandFXScaleModifier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHandFXScaleModifier(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_HandFXScaleModifier"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsGhostTag() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isGhostTag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsGhostTag(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_isGhostTag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GorillaSkin* GetAmbushSkin() {
            static BNM::Field<::GlobalNamespace::GorillaSkin*> _field = GetClass().GetField(O("ambushSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCrawlingSpeedForMaxVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("crawlingSpeedForMaxVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioClip*>* GetFirstPersonTaggedSounds() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("firstPersonTaggedSounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFirstPersonTaggedSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("firstPersonTaggedSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetHandTapFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("handTapFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetHandTapHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("handTapHash"));
            return _field.Get();
        }
        float GetHandTapScaleFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("handTapScaleFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasScryingPlane() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasScryingPlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasScryingPlane3p() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasScryingPlane3p"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetScryingPlane() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("scryingPlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetScryingPlane3p() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("scryingPlane3p"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::XSceneRef GetScryingPlane3pRef() {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("scryingPlane3pRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::XSceneRef GetScryingPlaneRef() {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("scryingPlaneRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAmbushSkin(::GlobalNamespace::GorillaSkin* value) {
            static BNM::Field<::GlobalNamespace::GorillaSkin*> _field = GetClass().GetField(O("ambushSkin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrawlingSpeedForMaxVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("crawlingSpeedForMaxVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstPersonTaggedSounds(::BNM::Structures::Mono::Array<::AudioClip*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioClip*>*> _field = GetClass().GetField(O("firstPersonTaggedSounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstPersonTaggedSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("firstPersonTaggedSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandTapFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("handTapFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHandTapHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("handTapHash"));
            _field.Set(value);
        }
        void SetHandTapScaleFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("handTapScaleFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasScryingPlane(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasScryingPlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasScryingPlane3p(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasScryingPlane3p"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScryingPlane(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("scryingPlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScryingPlane3p(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("scryingPlane3p"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScryingPlane3pRef(::GlobalNamespace::XSceneRef value) {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("scryingPlane3pRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScryingPlaneRef(::GlobalNamespace::XSceneRef value) {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("scryingPlaneRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* GameModeName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GameModeName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GameModeNameRoomLabel() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GameModeNameRoomLabel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaGameModes::GameModeType GameType() {
            static BNM::Method<::GorillaGameModes::GameModeType> _m = GetClass().GetMethod(O("GameType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static int get_HandEffectHash() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_HandEffectHash"));
            return _m.Call();
        }
        static float get_HandFXScaleModifier() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_HandFXScaleModifier"));
            return _m.Call();
        }
        bool get_isGhostTag() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isGhostTag"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int MyMatIndex(::GlobalNamespace::NetPlayer* forPlayer) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("MyMatIndex"), {"forPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(forPlayer);
        }
        static void set_HandFXScaleModifier(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_HandFXScaleModifier"), {"value"});
            _m.Call(value);
        }
        void set_isGhostTag(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_isGhostTag"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopPlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePlayerAppearance(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerAppearance"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
    };
}
