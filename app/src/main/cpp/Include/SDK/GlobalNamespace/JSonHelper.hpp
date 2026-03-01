#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct JSonHelper : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "JSonHelper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename T>
        static ::BNM::Structures::Mono::Array<T>* FromJson(::BNM::Structures::Mono::String* json) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("FromJson"), {"json"});
            return _m.Call(json);
        }
        template <typename T>
        static ::BNM::Structures::Mono::String* ToJson(::BNM::Structures::Mono::Array<T>* array) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToJson"), {"array"});
            return _m.Call(array);
        }
        template <typename T>
        static ::BNM::Structures::Mono::String* ToJson(::BNM::Structures::Mono::Array<T>* array, bool prettyPrint) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToJson"), {"array", "prettyPrint"});
            return _m.Call(array, prettyPrint);
        }
    };
}
