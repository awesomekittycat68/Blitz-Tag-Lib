#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Luau_lua_TypeID : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Luau").GetInnerClass("lua_TypeID");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::String*>* GetNames() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("names"));
            return _field.Get();
        }
        static void SetNames(::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("names"));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::String* get(::BNM::MonoType* t) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get"), {"t"});
            return _m.Call(t);
        }
        static void push(::BNM::MonoType* t, ::BNM::Structures::Mono::String* name) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("push"), {"t", "name"});
            _m.Call(t, name);
        }
    };
}
