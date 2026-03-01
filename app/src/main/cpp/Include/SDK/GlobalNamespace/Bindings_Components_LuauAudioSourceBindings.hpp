#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings_Components_LuauAudioSourceBindings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("Components").GetInnerClass("LuauAudioSourceBindings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void Builder(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Builder"), {"L"});
            _m.Call(L);
        }
        static ::AudioSource* GetAudioSource(::GlobalNamespace::lua_State* L) {
            static BNM::Method<::AudioSource*> _m = GetClass().GetMethod(O("GetAudioSource"), {"L"});
            return _m.Call(L);
        }
        static int play(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("play"), {"L"});
            return _m.Call(L);
        }
        static int setLoop(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("setLoop"), {"L"});
            return _m.Call(L);
        }
        static int setMaxDistance(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("setMaxDistance"), {"L"});
            return _m.Call(L);
        }
        static int setMinDistance(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("setMinDistance"), {"L"});
            return _m.Call(L);
        }
        static int setPitch(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("setPitch"), {"L"});
            return _m.Call(L);
        }
        static int setVolume(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("setVolume"), {"L"});
            return _m.Call(L);
        }
    };
}
