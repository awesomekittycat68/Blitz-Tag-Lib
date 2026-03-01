#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActorSettings.hpp"

namespace GlobalNamespace {
    struct CrittersLoudNoiseSettings : ::GlobalNamespace::CrittersActorSettings {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersLoudNoiseSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetDisableWhenSoundDisabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_disableWhenSoundDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSoundDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("_soundDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSoundEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_soundEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("_soundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVolumeFearAttractionMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("_volumeFearAttractionMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDisableWhenSoundDisabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_disableWhenSoundDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_soundDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_soundEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_soundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolumeFearAttractionMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_volumeFearAttractionMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void UpdateActorSettings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateActorSettings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
