#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DelegateExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DelegateExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* ToStringList(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* invocationList) {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("ToStringList"), {"invocationList"});
            return _m.Call(invocationList);
        }
        static ::BNM::Structures::Mono::String* ToText(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* invocationList) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToText"), {"invocationList"});
            return _m.Call(invocationList);
        }
    };
}
