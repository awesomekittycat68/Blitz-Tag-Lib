#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AuthRefreshRequiredDelegateWrapper.hpp"

namespace GlobalNamespace {
    struct MothershipAuthRefreshRequiredCallback : ::GlobalNamespace::AuthRefreshRequiredDelegateWrapper {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipAuthRefreshRequiredCallback");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetAuthRefreshFunction() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_authRefreshFunction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAuthRefreshFunction(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_authRefreshFunction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AuthRefreshRequired(::BNM::Structures::Mono::String* arg0) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthRefreshRequired"), {"arg0"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(arg0);
        }
    };
}
