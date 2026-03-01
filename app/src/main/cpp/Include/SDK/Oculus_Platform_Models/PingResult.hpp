#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform_Models {
    struct PingResult : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "PingResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint64_t GetID() {
            static BNM::Method<uint64_t> _method = GetClass().GetMethod(O("get_ID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetID(uint64_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsTimeout() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsTimeout"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        uint64_t GetPingTimeUsec() {
            static BNM::Method<uint64_t> _method = GetClass().GetMethod(O("get_PingTimeUsec"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void* GetPingTimeUsec_f() {
            static BNM::Field<void*> _field = GetClass().GetField(O("pingTimeUsec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPingTimeUsec(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("pingTimeUsec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        uint64_t get_ID() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("get_ID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsTimeout() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsTimeout"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint64_t get_PingTimeUsec() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("get_PingTimeUsec"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_ID(uint64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ID"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
