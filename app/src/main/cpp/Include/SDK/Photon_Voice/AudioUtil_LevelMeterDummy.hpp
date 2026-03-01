#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    struct AudioUtil_LevelMeterDummy : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "AudioUtil").GetInnerClass("LevelMeterDummy");
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
        void ResetAccumAvgPeakAmp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetAccumAvgPeakAmp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
