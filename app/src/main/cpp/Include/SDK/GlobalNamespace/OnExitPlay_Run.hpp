#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "OnExitPlay_Attribute.hpp"

namespace GlobalNamespace {
    struct OnExitPlay_Run : ::GlobalNamespace::OnExitPlay_Attribute {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "OnExitPlay_Run");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void OnEnterPlay(::BNM::IL2CPP::Il2CppObject* method) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnterPlay"), {"method"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(method);
        }
    };
}
