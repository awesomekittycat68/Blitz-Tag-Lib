#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    template <typename T>
    struct AudioUtil_LevelMeter$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "AudioUtil").GetInnerClass("LevelMeter`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAccumAvgPeakAmp() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_AccumAvgPeakAmp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetCurrentAvgAmp() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_CurrentAvgAmp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetCurrentPeakAmp() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_CurrentPeakAmp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentPeakAmp(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentPeakAmp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetAccumAvgPeakAmpCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("accumAvgPeakAmpCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAccumAvgPeakAmpSum() {
            static BNM::Field<float> _field = GetClass().GetField(O("accumAvgPeakAmpSum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAmpPeak() {
            static BNM::Field<float> _field = GetClass().GetField(O("ampPeak"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAmpSum() {
            static BNM::Field<float> _field = GetClass().GetField(O("ampSum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBufferSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("bufferSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentPeakAmp_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentPeakAmp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNorm() {
            static BNM::Field<float> _field = GetClass().GetField(O("norm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetPrevValues() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("prevValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPrevValuesHead() {
            static BNM::Field<int> _field = GetClass().GetField(O("prevValuesHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAccumAvgPeakAmpCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("accumAvgPeakAmpCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAccumAvgPeakAmpSum(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("accumAvgPeakAmpSum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAmpPeak(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ampPeak"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAmpSum(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ampSum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBufferSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bufferSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentPeakAmp_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentPeakAmp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNorm(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("norm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevValues(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("prevValues"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevValuesHead(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("prevValuesHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float get_AccumAvgPeakAmp() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_AccumAvgPeakAmp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_CurrentAvgAmp() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_CurrentAvgAmp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_CurrentPeakAmp() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_CurrentPeakAmp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<T>* Process(::BNM::Structures::Mono::Array<T>* buf) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("Process"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buf);
        }
        void ResetAccumAvgPeakAmp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetAccumAvgPeakAmp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_CurrentPeakAmp(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentPeakAmp"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
