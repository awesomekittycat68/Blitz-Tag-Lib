#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings_Components : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("Components");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Dictionary<::BNM::Types::nint, void*>* GetComponentList() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Types::nint, void*>*> _field = GetClass().GetField(O("ComponentList"));
            return _field.Get();
        }
        static void SetComponentList(::BNM::Structures::Mono::Dictionary<::BNM::Types::nint, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Types::nint, void*>*> _field = GetClass().GetField(O("ComponentList"));
            _field.Set(value);
        }
        static void Build(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Build"), {"L"});
            _m.Call(L);
        }
    };
}
