#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct StopwatchFace : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "StopwatchFace");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetMillisElapsed() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_millisElapsed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetWatchActive() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_watchActive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::AudioClip* GetAudioClick() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_audioClick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetAudioReset() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_audioReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetAudioTick() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_audioTick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::StopwatchCosmetic* GetCosmetic() {
            static BNM::Field<::GlobalNamespace::StopwatchCosmetic*> _field = GetClass().GetField(O("_cosmetic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHand() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_hand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMillisElapsed_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_millisElapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("_text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWatchActive_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_watchActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioClick(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_audioClick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioReset(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_audioReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioTick(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("_audioTick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmetic(::GlobalNamespace::StopwatchCosmetic* value) {
            static BNM::Field<::GlobalNamespace::StopwatchCosmetic*> _field = GetClass().GetField(O("_cosmetic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHand(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_hand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMillisElapsed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_millisElapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("_text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWatchActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_watchActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* get_digitsMmSsMs() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_digitsMmSsMs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_millisElapsed() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_millisElapsed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_watchActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_watchActive"));
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
        void OnLerpEnd() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLerpEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLerpToZero(int a, int b, float t) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLerpToZero"), {"a", "b", "t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(a, b, t);
        }
        template <typename TP0 = void*>
        static void* ParseDigits(TP0 time) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ParseDigits"), {"time"});
            return _m.Call(time);
        }
        void SetMillisElapsed_1(int millis, bool updateFace) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMillisElapsed"), {"millis", "updateFace"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(millis, updateFace);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateHand() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WatchReset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WatchReset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WatchReset(bool doLerp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WatchReset"), {"doLerp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(doLerp);
        }
        void WatchStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WatchStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WatchStop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WatchStop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WatchToggle() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WatchToggle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
