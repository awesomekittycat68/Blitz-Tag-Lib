#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct HandEffectContext : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HandEffectContext");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Color GetColor() {
            static BNM::Method<::BNM::Structures::Unity::Color> _method = GetClass().GetMethod(O("get_Color"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::HandTapOverrides* GetDownTapOverrides() {
            static BNM::Method<::GlobalNamespace::HandTapOverrides*> _method = GetClass().GetMethod(O("get_DownTapOverrides"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDownTapOverrides(::GlobalNamespace::HandTapOverrides* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DownTapOverrides"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetPitch() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Pitch"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetPosition() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_Position"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<int>* GetPrefabPoolIds() {
            static BNM::Method<::BNM::Structures::Mono::List<int>*> _method = GetClass().GetMethod(O("get_PrefabPoolIds"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Quaternion GetRotation() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _method = GetClass().GetMethod(O("get_Rotation"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetSeparateUpTapCooldown() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_SeparateUpTapCooldown"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSeparateUpTapCooldown(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SeparateUpTapCooldown"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::AudioClip* GetSound() {
            static BNM::Method<::AudioClip*> _method = GetClass().GetMethod(O("get_Sound"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::AudioSource* GetSoundSource() {
            static BNM::Method<::AudioSource*> _method = GetClass().GetMethod(O("get_SoundSource"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetSpeed() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Speed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::HandTapOverrides* GetUpTapOverrides() {
            static BNM::Method<::GlobalNamespace::HandTapOverrides*> _method = GetClass().GetMethod(O("get_UpTapOverrides"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUpTapOverrides(::GlobalNamespace::HandTapOverrides* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UpTapOverrides"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetVolume() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Volume"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_handTapDown(::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_handTapDown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_handTapDown(::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_handTapDown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_handTapUp(::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_handTapUp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_handTapUp(::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_handTapUp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Unity::Color GetColor_f() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("color"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandTapOverrides* GetDefaultDownTapOverrides() {
            static BNM::Field<::GlobalNamespace::HandTapOverrides*> _field = GetClass().GetField(O("defaultDownTapOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandTapOverrides* GetDefaultUpTapOverrides() {
            static BNM::Field<::GlobalNamespace::HandTapOverrides*> _field = GetClass().GetField(O("defaultUpTapOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandTapOverrides* GetDownTapOverrides_f() {
            static BNM::Field<::GlobalNamespace::HandTapOverrides*> _field = GetClass().GetField(O("downTapOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetHandSoundSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("handSoundSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>* GetHandTapDown() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>*> _field = GetClass().GetField(O("handTapDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>* GetHandTapUp() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>*> _field = GetClass().GetField(O("handTapUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsDownTap() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDownTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeftHand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPosition_f() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("position"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetPrefabHashes() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("prefabHashes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetRotation_f() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("rotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSeparateUpTapCooldownCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("separateUpTapCooldownCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSoundFX() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("soundFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSoundPitch() {
            static BNM::Field<float> _field = GetClass().GetField(O("soundPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("soundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpeed_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("speed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandTapOverrides* GetUpTapOverrides_f() {
            static BNM::Field<::GlobalNamespace::HandTapOverrides*> _field = GetClass().GetField(O("upTapOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("color"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultDownTapOverrides(::GlobalNamespace::HandTapOverrides* value) {
            static BNM::Field<::GlobalNamespace::HandTapOverrides*> _field = GetClass().GetField(O("defaultDownTapOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultUpTapOverrides(::GlobalNamespace::HandTapOverrides* value) {
            static BNM::Field<::GlobalNamespace::HandTapOverrides*> _field = GetClass().GetField(O("defaultUpTapOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDownTapOverrides_fs(::GlobalNamespace::HandTapOverrides* value) {
            static BNM::Field<::GlobalNamespace::HandTapOverrides*> _field = GetClass().GetField(O("downTapOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandSoundSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("handSoundSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandTapDown(::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>*> _field = GetClass().GetField(O("handTapDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandTapUp(::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>*> _field = GetClass().GetField(O("handTapUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsDownTap(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDownTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeftHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("position"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrefabHashes(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("prefabHashes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("rotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeparateUpTapCooldownCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("separateUpTapCooldownCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundFX(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("soundFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundPitch(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("soundPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("soundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("speed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpTapOverrides_fs(::GlobalNamespace::HandTapOverrides* value) {
            static BNM::Field<::GlobalNamespace::HandTapOverrides*> _field = GetClass().GetField(O("upTapOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_handTapDown_1(::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_handTapDown"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_handTapUp_1(::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_handTapUp"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void AddFXPrefab(int hash) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddFXPrefab"), {"hash"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hash);
        }
        ::BNM::Structures::Unity::Color get_Color() {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("get_Color"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::HandTapOverrides* get_DownTapOverrides() {
            static BNM::Method<::GlobalNamespace::HandTapOverrides*> _m = GetClass().GetMethod(O("get_DownTapOverrides"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_Pitch() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Pitch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_Position() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_Position"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<int>* get_PrefabPoolIds() {
            static BNM::Method<::BNM::Structures::Mono::List<int>*> _m = GetClass().GetMethod(O("get_PrefabPoolIds"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Quaternion get_Rotation() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("get_Rotation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_SeparateUpTapCooldown() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_SeparateUpTapCooldown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::AudioClip* get_Sound() {
            static BNM::Method<::AudioClip*> _m = GetClass().GetMethod(O("get_Sound"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::AudioSource* get_SoundSource() {
            static BNM::Method<::AudioSource*> _m = GetClass().GetMethod(O("get_SoundSource"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_Speed() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Speed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::HandTapOverrides* get_UpTapOverrides() {
            static BNM::Method<::GlobalNamespace::HandTapOverrides*> _m = GetClass().GetMethod(O("get_UpTapOverrides"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_Volume() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Volume"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnPlaySoundFX(::AudioSource* audioSource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlaySoundFX"), {"audioSource"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(audioSource);
        }
        void OnPlayVisualFX(int fxID, ::GameObject* fx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayVisualFX"), {"fxID", "fx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fxID, fx);
        }
        void OnTriggerActions() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerActions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_handTapDown_1(::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_handTapDown"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_handTapUp_1(::BNM::Structures::Mono::Action<::GlobalNamespace::HandEffectContext*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_handTapUp"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void RemoveFXPrefab(int hash) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveFXPrefab"), {"hash"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hash);
        }
        void set_DownTapOverrides(::GlobalNamespace::HandTapOverrides* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DownTapOverrides"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SeparateUpTapCooldown(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SeparateUpTapCooldown"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UpTapOverrides(::GlobalNamespace::HandTapOverrides* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UpTapOverrides"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
