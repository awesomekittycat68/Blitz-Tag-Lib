#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    template <typename T>
    struct AudioUtil_VoiceLevelDetectCalibrate$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "AudioUtil").GetInnerClass("VoiceLevelDetectCalibrate`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsCalibrating() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsCalibrating"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
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
        ::BNM::Structures::Mono::Array<T>* Process(::BNM::Structures::Mono::Array<T>* buf) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("Process"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buf);
        }
        template <typename TP0 = void*>
        void set_LevelMeter(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LevelMeter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_VoiceDetector(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_VoiceDetector"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
