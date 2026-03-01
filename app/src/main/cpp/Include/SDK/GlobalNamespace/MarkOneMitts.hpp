#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HandTapBehaviour.hpp"

namespace GlobalNamespace {
    struct MarkOneMitts : ::GlobalNamespace::HandTapBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MarkOneMitts");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void* GetEmptyParticleCurve() {
            static BNM::Field<void*> _field = GetClass().GetField(O("emptyParticleCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlameScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("flameScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlameSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("flameSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlameTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("flameTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetHandSpeedToEffectStrength() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("handSpeedToEffectStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHeatMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("heatMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MarkOneMitts_Mitt* GetLeftMitt() {
            static BNM::Field<::GlobalNamespace::MarkOneMitts_Mitt*> _field = GetClass().GetField(O("leftMitt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinEffectStrength() {
            static BNM::Field<float> _field = GetClass().GetField(O("minEffectStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetProximityAudioPitch() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("proximityAudioPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProximityAudioReactionSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("proximityAudioReactionSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetProximityAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("proximityAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetProximityAudioVolume() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("proximityAudioVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ProximityEffect* GetProximityEffect() {
            static BNM::Field<::GlobalNamespace::ProximityEffect*> _field = GetClass().GetField(O("proximityEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetProximitySpeedCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("proximitySpeedCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetProximitySpreadCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("proximitySpreadCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetProximityStartAudioClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("proximityStartAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProximityStartAudioVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("proximityStartAudioVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetProximityStartStopAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("proximityStartStopAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetProximityStopAudioClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("proximityStopAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProximityStopAudioVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("proximityStopAudioVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MarkOneMitts_Mitt* GetRightMitt() {
            static BNM::Field<::GlobalNamespace::MarkOneMitts_Mitt*> _field = GetClass().GetField(O("rightMitt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetVibrateController() {
            static BNM::Field<bool> _field = GetClass().GetField(O("vibrateController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVibrationStrengthMult() {
            static BNM::Field<float> _field = GetClass().GetField(O("vibrationStrengthMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEmptyParticleCurve(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("emptyParticleCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlameScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flameScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlameSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flameSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlameTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flameTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandSpeedToEffectStrength(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("handSpeedToEffectStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeatMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("heatMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftMitt(::GlobalNamespace::MarkOneMitts_Mitt* value) {
            static BNM::Field<::GlobalNamespace::MarkOneMitts_Mitt*> _field = GetClass().GetField(O("leftMitt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinEffectStrength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minEffectStrength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximityAudioPitch(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("proximityAudioPitch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximityAudioReactionSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("proximityAudioReactionSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximityAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("proximityAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximityAudioVolume(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("proximityAudioVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximityEffect(::GlobalNamespace::ProximityEffect* value) {
            static BNM::Field<::GlobalNamespace::ProximityEffect*> _field = GetClass().GetField(O("proximityEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximitySpeedCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("proximitySpeedCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximitySpreadCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("proximitySpreadCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximityStartAudioClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("proximityStartAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximityStartAudioVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("proximityStartAudioVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximityStartStopAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("proximityStartStopAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximityStopAudioClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("proximityStopAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximityStopAudioVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("proximityStopAudioVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightMitt(::GlobalNamespace::MarkOneMitts_Mitt* value) {
            static BNM::Field<::GlobalNamespace::MarkOneMitts_Mitt*> _field = GetClass().GetField(O("rightMitt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVibrateController(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("vibrateController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVibrationStrengthMult(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("vibrationStrengthMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void OnProximityCalculated(float distance, float alignment, float parallel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnProximityCalculated"), {"distance", "alignment", "parallel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(distance, alignment, parallel);
        }
        void OnTap(::GlobalNamespace::HandEffectContext* handContext) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTap"), {"handContext"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handContext);
        }
        void RunTimer(::GlobalNamespace::MarkOneMitts_Mitt* mitt, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RunTimer"), {"mitt", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mitt, isLeftHand);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetInterferenceAudio(bool active) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInterferenceAudio"), {"active"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(active);
        }
        template <typename TP3 = void*>
        void StartFlame(::GlobalNamespace::MarkOneMitts_Mitt* mitt, float scale, float speed, TP3 xy) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartFlame"), {"mitt", "scale", "speed", "xy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mitt, scale, speed, xy);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryPlayProximityStartStopAudio(::AudioClip* clip, float volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryPlayProximityStartStopAudio"), {"clip", "volume"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clip, volume);
        }
    };
}
