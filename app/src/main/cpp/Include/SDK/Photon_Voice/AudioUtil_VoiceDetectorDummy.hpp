#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    struct AudioUtil_VoiceDetectorDummy : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "AudioUtil").GetInnerClass("VoiceDetectorDummy");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetActivityDelayMs() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ActivityDelayMs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetActivityDelayMs(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ActivityDelayMs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetDetected() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Detected"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetOn() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_On"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOn(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_On"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetThreshold() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Threshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetThreshold(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Threshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_OnDetected(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDetected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnDetected(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDetected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnDetected_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnDetected"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        int get_ActivityDelayMs() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ActivityDelayMs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_Detected() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Detected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_DetectedTime() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_DetectedTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_On() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_On"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_Threshold() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Threshold"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void remove_OnDetected_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnDetected"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ActivityDelayMs(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ActivityDelayMs"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_DetectedTime(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DetectedTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_On(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_On"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Threshold(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Threshold"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
