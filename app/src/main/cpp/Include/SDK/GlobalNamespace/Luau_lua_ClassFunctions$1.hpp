#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct Luau_lua_ClassFunctions$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Luau").GetInnerClass("lua_ClassFunctions`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::lua_CFunction*>*>* GetClassProperties() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::lua_CFunction*>*>*> _field = GetClass().GetField(O("classProperties"));
            return _field.Get();
        }
        static void SetClassProperties(::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::lua_CFunction*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::lua_CFunction*>*>*> _field = GetClass().GetField(O("classProperties"));
            _field.Set(value);
        }
        static void Add(::BNM::Structures::Mono::String* name, ::GlobalNamespace::lua_CFunction* field) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"name", "field"});
            _m.Call(name, field);
        }
        static ::GlobalNamespace::lua_CFunction* Get(::BNM::Structures::Mono::String* name) {
            static BNM::Method<::GlobalNamespace::lua_CFunction*> _m = GetClass().GetMethod(O("Get"), {"name"});
            return _m.Call(name);
        }
    };
}
