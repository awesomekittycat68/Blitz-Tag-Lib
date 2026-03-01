#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    struct AudioOutDelayControl_PlayDelayConfig : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "AudioOutDelayControl").GetInnerClass("PlayDelayConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetHigh() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_High"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHigh(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_High"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetLow() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Low"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLow(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Low"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetMax() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Max"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMax(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Max"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetSpeedUpPerc() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SpeedUpPerc"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSpeedUpPerc(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SpeedUpPerc"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice::AudioOutDelayControl_PlayDelayConfig* Clone() {
            static BNM::Method<::Photon_Voice::AudioOutDelayControl_PlayDelayConfig*> _m = GetClass().GetMethod(O("Clone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_High() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_High"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Low() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Low"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Max() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Max"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SpeedUpPerc() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SpeedUpPerc"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_High(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_High"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Low(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Low"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Max(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Max"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SpeedUpPerc(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SpeedUpPerc"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
