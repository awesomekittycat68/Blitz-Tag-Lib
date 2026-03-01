#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LocalVoice.hpp"

namespace Photon_Voice {
    struct LocalVoiceAudioDummy : ::Photon_Voice::LocalVoice {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "LocalVoiceAudioDummy");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetVoiceDetectorCalibrating() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_VoiceDetectorCalibrating"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::Photon_Voice::LocalVoiceAudioDummy* GetDummy() {
            static BNM::Field<::Photon_Voice::LocalVoiceAudioDummy*> _field = GetClass().GetField(O("Dummy"));
            return _field.Get();
        }
        ::Photon_Voice::AudioUtil_LevelMeterDummy* GetLevelMeter() {
            static BNM::Field<::Photon_Voice::AudioUtil_LevelMeterDummy*> _field = GetClass().GetField(O("levelMeter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::AudioUtil_VoiceDetectorDummy* GetVoiceDetector() {
            static BNM::Field<::Photon_Voice::AudioUtil_VoiceDetectorDummy*> _field = GetClass().GetField(O("voiceDetector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetDummy(::Photon_Voice::LocalVoiceAudioDummy* value) {
            static BNM::Field<::Photon_Voice::LocalVoiceAudioDummy*> _field = GetClass().GetField(O("Dummy"));
            _field.Set(value);
        }
        void SetLevelMeter(::Photon_Voice::AudioUtil_LevelMeterDummy* value) {
            static BNM::Field<::Photon_Voice::AudioUtil_LevelMeterDummy*> _field = GetClass().GetField(O("levelMeter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceDetector(::Photon_Voice::AudioUtil_VoiceDetectorDummy* value) {
            static BNM::Field<::Photon_Voice::AudioUtil_VoiceDetectorDummy*> _field = GetClass().GetField(O("voiceDetector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* get_LevelMeter() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_LevelMeter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_VoiceDetector() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_VoiceDetector"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_VoiceDetectorCalibrating() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_VoiceDetectorCalibrating"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void VoiceDetectorCalibrate(int durationMs, ::BNM::Structures::Mono::Action<float>* onCalibrated) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VoiceDetectorCalibrate"), {"durationMs", "onCalibrated"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(durationMs, onCalibrated);
        }
    };
}
