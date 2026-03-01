#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "OnEnterPlay_Attribute.hpp"

namespace GlobalNamespace {
    struct OnEnterPlay_Clear : ::GlobalNamespace::OnEnterPlay_Attribute {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "OnEnterPlay_Clear");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void OnEnterPlay(::BNM::IL2CPP::Il2CppObject* field) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnterPlay"), {"field"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(field);
        }
    };
}
