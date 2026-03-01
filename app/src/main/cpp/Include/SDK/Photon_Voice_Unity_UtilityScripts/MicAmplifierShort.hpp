#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity_UtilityScripts {
    struct MicAmplifierShort : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity.UtilityScripts", "MicAmplifierShort");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int16_t GetAmplificationFactor() {
            static BNM::Method<int16_t> _method = GetClass().GetMethod(O("get_AmplificationFactor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAmplificationFactor(int16_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AmplificationFactor"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int16_t GetBoostValue() {
            static BNM::Method<int16_t> _method = GetClass().GetMethod(O("get_BoostValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBoostValue(int16_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BoostValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetDisabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Disabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDisabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Disabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int16_t GetMaxAfter() {
            static BNM::Method<int16_t> _method = GetClass().GetMethod(O("get_MaxAfter"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMaxAfter(int16_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MaxAfter"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int16_t GetMaxBefore() {
            static BNM::Method<int16_t> _method = GetClass().GetMethod(O("get_MaxBefore"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMaxBefore(int16_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MaxBefore"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int16_t get_AmplificationFactor() {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("get_AmplificationFactor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int16_t get_BoostValue() {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("get_BoostValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_Disabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Disabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int16_t get_MaxAfter() {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("get_MaxAfter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int16_t get_MaxBefore() {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("get_MaxBefore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<int16_t>* Process(::BNM::Structures::Mono::Array<int16_t>* buf) {
            static BNM::Method<::BNM::Structures::Mono::Array<int16_t>*> _m = GetClass().GetMethod(O("Process"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buf);
        }
        void set_AmplificationFactor(int16_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AmplificationFactor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_BoostValue(int16_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BoostValue"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Disabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Disabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MaxAfter(int16_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MaxAfter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MaxBefore(int16_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MaxBefore"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
