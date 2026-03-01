#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings_PlayerUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("PlayerUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int SetVelocity(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetVelocity"), {"L"});
            return _m.Call(L);
        }
        static int TeleportPlayer(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("TeleportPlayer"), {"L"});
            return _m.Call(L);
        }
    };
}
