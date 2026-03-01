#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    struct BuilderScaleAudioRadius : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "BuilderScaleAudioRadius");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAutoPlay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetAutoPlaySoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("autoPlaySoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCustomCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("customCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEnableFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("enableFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("minDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetScaledCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("scaledCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSetScaleNextFrame() {
            static BNM::Field<bool> _field = GetClass().GetField(O("setScaleNextFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldRevert() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldRevert"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseLossyScaleOnEnable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useLossyScaleOnEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoPlay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoPlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoPlaySoundBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("autoPlaySoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("customCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("enableFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaledCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("scaledCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetScaleNextFrame(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("setScaleNextFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldRevert(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldRevert"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseLossyScaleOnEnable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useLossyScaleOnEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
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
        void PlaySound() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySound"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RevertScale() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RevertScale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetScale_1(float inScale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScale"), {"inScale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inScale);
        }
    };
}
