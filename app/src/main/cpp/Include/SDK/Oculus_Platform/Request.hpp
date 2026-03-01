#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct Request : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "Request");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint64_t GetRequestID() {
            static BNM::Method<uint64_t> _method = GetClass().GetMethod(O("get_RequestID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRequestID(uint64_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RequestID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Oculus_Platform::Message_Callback* GetCallback() {
            static BNM::Field<::Oculus_Platform::Message_Callback*> _field = GetClass().GetField(O("callback_"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallback(::Oculus_Platform::Message_Callback* value) {
            static BNM::Field<::Oculus_Platform::Message_Callback*> _field = GetClass().GetField(O("callback_"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        uint64_t get_RequestID() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("get_RequestID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleMessage(::Oculus_Platform::Message* msg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleMessage"), {"msg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(msg);
        }
        ::Oculus_Platform::Request* OnComplete(::Oculus_Platform::Message_Callback* callback) {
            static BNM::Method<::Oculus_Platform::Request*> _m = GetClass().GetMethod(O("OnComplete"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callback);
        }
        static void RunCallbacks(uint32_t limit) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RunCallbacks"), {"limit"});
            _m.Call(limit);
        }
        void set_RequestID(uint64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RequestID"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
