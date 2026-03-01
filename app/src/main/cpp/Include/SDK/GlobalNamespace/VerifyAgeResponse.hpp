#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SessionStatus.hpp"

namespace GlobalNamespace {
    struct VerifyAgeResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VerifyAgeResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::KIDDefaultSession* GetDefaultSession() {
            static BNM::Method<::GlobalNamespace::KIDDefaultSession*> _method = GetClass().GetMethod(O("get_DefaultSession"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDefaultSession(::GlobalNamespace::KIDDefaultSession* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DefaultSession"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::IL2CPP::Il2CppObject* GetSession() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_Session"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSession(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Session"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::SessionStatus GetStatus() {
            static BNM::Method<::GlobalNamespace::SessionStatus> _method = GetClass().GetMethod(O("get_Status"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetStatus(::GlobalNamespace::SessionStatus value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Status"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::KIDDefaultSession* get_DefaultSession() {
            static BNM::Method<::GlobalNamespace::KIDDefaultSession*> _m = GetClass().GetMethod(O("get_DefaultSession"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* get_Session() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_Session"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SessionStatus get_Status() {
            static BNM::Method<::GlobalNamespace::SessionStatus> _m = GetClass().GetMethod(O("get_Status"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_DefaultSession(::GlobalNamespace::KIDDefaultSession* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DefaultSession"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Session(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Session"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Status(::GlobalNamespace::SessionStatus value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Status"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
