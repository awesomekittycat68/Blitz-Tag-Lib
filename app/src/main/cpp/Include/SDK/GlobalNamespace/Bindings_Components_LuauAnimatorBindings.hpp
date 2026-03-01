#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings_Components_LuauAnimatorBindings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("Components").GetInnerClass("LuauAnimatorBindings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void Builder(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Builder"), {"L"});
            _m.Call(L);
        }
        static ::Animator* GetAnimator(::GlobalNamespace::lua_State* L) {
            static BNM::Method<::Animator*> _m = GetClass().GetMethod(O("GetAnimator"), {"L"});
            return _m.Call(L);
        }
        static int reset(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("reset"), {"L"});
            return _m.Call(L);
        }
        static int setSpeed(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("setSpeed"), {"L"});
            return _m.Call(L);
        }
        static int startPlayback(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("startPlayback"), {"L"});
            return _m.Call(L);
        }
        static int stopPlayback(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("stopPlayback"), {"L"});
            return _m.Call(L);
        }
    };
}
