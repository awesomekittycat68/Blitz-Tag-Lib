#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct OnPlayChange_BaseAttribute : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "OnPlayChange_BaseAttribute");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void OnEnterPlay(::BNM::IL2CPP::Il2CppObject* field) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnterPlay"), {"field"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(field);
        }
        void OnEnterPlay_1(::BNM::IL2CPP::Il2CppObject* method) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnterPlay"), {"method"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(method);
        }
    };
}
