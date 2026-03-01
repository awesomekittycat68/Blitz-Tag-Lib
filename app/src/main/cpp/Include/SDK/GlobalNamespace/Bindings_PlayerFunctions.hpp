#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Bindings_LuauPlayer.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings_PlayerFunctions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("PlayerFunctions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GetPlayerByID(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPlayerByID"), {"L"});
            return _m.Call(L);
        }
        static void UpdatePlayer(::GlobalNamespace::lua_State* L, ::GlobalNamespace::VRRig* p, ::GlobalNamespace::Bindings_LuauPlayer* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayer"), {"L", "p", "data"});
            _m.Call(L, p, data);
        }
    };
}
