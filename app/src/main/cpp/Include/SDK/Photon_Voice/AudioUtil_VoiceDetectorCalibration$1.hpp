#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    template <typename T>
    struct AudioUtil_VoiceDetectorCalibration$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "AudioUtil").GetInnerClass("VoiceDetectorCalibration`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsCalibrating() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsCalibrating"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCalibrateCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("calibrateCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLevelMeter() {
            static BNM::Field<void*> _field = GetClass().GetField(O("levelMeter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<float>* GetOnCalibrated() {
            static BNM::Field<::BNM::Structures::Mono::Action<float>*> _field = GetClass().GetField(O("onCalibrated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetValuesPerSec() {
            static BNM::Field<int> _field = GetClass().GetField(O("valuesPerSec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetVoiceDetector() {
            static BNM::Field<void*> _field = GetClass().GetField(O("voiceDetector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCalibrateCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("calibrateCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelMeter(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("levelMeter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCalibrated(::BNM::Structures::Mono::Action<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<float>*> _field = GetClass().GetField(O("onCalibrated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValuesPerSec(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("valuesPerSec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceDetector(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("voiceDetector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Calibrate(int durationMs, ::BNM::Structures::Mono::Action<float>* onCalibrated) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Calibrate"), {"durationMs", "onCalibrated"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(durationMs, onCalibrated);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_IsCalibrating() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsCalibrating"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<T>* Process(::BNM::Structures::Mono::Array<T>* buf) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("Process"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buf);
        }
    };
}
