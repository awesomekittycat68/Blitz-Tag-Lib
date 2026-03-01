#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings_Components_LuauParticleSystemBindings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("Components").GetInnerClass("LuauParticleSystemBindings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void Builder(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Builder"), {"L"});
            _m.Call(L);
        }
        static int clear(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("clear"), {"L"});
            return _m.Call(L);
        }
        static ::ParticleSystem* GetParticleSystem(::GlobalNamespace::lua_State* L) {
            static BNM::Method<::ParticleSystem*> _m = GetClass().GetMethod(O("GetParticleSystem"), {"L"});
            return _m.Call(L);
        }
        static int play(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("play"), {"L"});
            return _m.Call(L);
        }
        static int stop(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("stop"), {"L"});
            return _m.Call(L);
        }
    };
}
