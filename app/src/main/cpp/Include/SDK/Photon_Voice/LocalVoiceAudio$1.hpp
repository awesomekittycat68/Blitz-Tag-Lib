#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LocalVoiceFramed$1.hpp"
#include "VoiceInfo.hpp"

namespace Photon_Voice {
    template <typename T>
    struct LocalVoiceAudio$1 : ::Photon_Voice::LocalVoiceFramed$1<T> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "LocalVoiceAudio`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetVoiceDetectorCalibrating() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_VoiceDetectorCalibrating"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetChannels() {
            static BNM::Field<int> _field = GetClass().GetField(O("channels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetResampleSource() {
            static BNM::Field<bool> _field = GetClass().GetField(O("resampleSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetChannels(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("channels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResampleSource(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("resampleSource"));
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
        void initBuiltinProcessors() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("initBuiltinProcessors"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void VoiceDetectorCalibrate(int durationMs, ::BNM::Structures::Mono::Action<float>* onCalibrated) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VoiceDetectorCalibrate"), {"durationMs", "onCalibrated"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(durationMs, onCalibrated);
        }
    };
}
