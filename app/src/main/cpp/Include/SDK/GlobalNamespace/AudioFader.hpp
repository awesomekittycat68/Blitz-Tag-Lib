#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct AudioFader : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AudioFader");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetAudioToFade() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioToFade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentFadeSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentFadeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFadeInDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeInDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFadeInSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeInSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFadeOutDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeOutDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFadeOutSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeOutSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetOutro() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("outro"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTargetVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("targetVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioToFade(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioToFade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentFadeSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentFadeSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFadeInDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeInDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFadeInSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeInSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFadeOutDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeOutDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFadeOutSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fadeOutSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutro(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("outro"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("targetVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void FadeIn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FadeIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FadeOut() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FadeOut"));
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
