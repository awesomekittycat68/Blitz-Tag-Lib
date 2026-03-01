#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DJScratchtable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DJScratchtable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCantBackScratchUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("cantBackScratchUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCantForwardScratchUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("cantForwardScratchUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetFirstTouchRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("firstTouchRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
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
        bool GetIsLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPlaying() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsTouching() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTouching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastScratchSoundAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastScratchSoundAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastSelectedTrack() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastSelectedTrack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPausedUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("pausedUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScratchCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("scratchCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScratchMinAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("scratchMinAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::DJScratchSoundPlayer* GetScratchPlayer() {
            static BNM::Field<::GlobalNamespace::DJScratchSoundPlayer*> _field = GetClass().GetField(O("scratchPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTrackDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("trackDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioSource*>* GetTracks() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioSource*>*> _field = GetClass().GetField(O("tracks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CosmeticFan* GetTurntableVisual() {
            static BNM::Field<::GlobalNamespace::CosmeticFan*> _field = GetClass().GetField(O("turntableVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCantBackScratchUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cantBackScratchUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCantForwardScratchUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cantForwardScratchUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstTouchRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("firstTouchRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        void SetIsLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPlaying(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsTouching(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTouching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastScratchSoundAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastScratchSoundAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastSelectedTrack(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastSelectedTrack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPausedUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pausedUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScratchCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scratchCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScratchMinAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scratchMinAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScratchPlayer(::GlobalNamespace::DJScratchSoundPlayer* value) {
            static BNM::Field<::GlobalNamespace::DJScratchSoundPlayer*> _field = GetClass().GetField(O("scratchPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrackDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("trackDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTracks(::BNM::Structures::Mono::Array<::AudioSource*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioSource*>*> _field = GetClass().GetField(O("tracks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTurntableVisual(::GlobalNamespace::CosmeticFan* value) {
            static BNM::Field<::GlobalNamespace::CosmeticFan*> _field = GetClass().GetField(O("turntableVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnTriggerExit(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
        }
        void OnTriggerStay(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerStay"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
        }
        void PauseTrack() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PauseTrack"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResumeTrack() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResumeTrack"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SelectTrack(int track) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectTrack"), {"track"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(track);
        }
        void SetPlaying(bool playing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPlaying"), {"playing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playing);
        }
    };
}
