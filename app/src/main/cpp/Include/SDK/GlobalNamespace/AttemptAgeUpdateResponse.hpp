#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SessionStatus.hpp"

namespace GlobalNamespace {
    struct AttemptAgeUpdateResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AttemptAgeUpdateResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

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
        ::GlobalNamespace::SessionStatus get_Status() {
            static BNM::Method<::GlobalNamespace::SessionStatus> _m = GetClass().GetMethod(O("get_Status"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Status(::GlobalNamespace::SessionStatus value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Status"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
