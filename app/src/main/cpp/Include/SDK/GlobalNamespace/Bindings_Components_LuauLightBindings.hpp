#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings_Components_LuauLightBindings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("Components").GetInnerClass("LuauLightBindings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void Builder(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Builder"), {"L"});
            _m.Call(L);
        }
        static ::Light* GetLight(::GlobalNamespace::lua_State* L) {
            static BNM::Method<::Light*> _m = GetClass().GetMethod(O("GetLight"), {"L"});
            return _m.Call(L);
        }
        static int setColor(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("setColor"), {"L"});
            return _m.Call(L);
        }
        static int setIntensity(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("setIntensity"), {"L"});
            return _m.Call(L);
        }
        static int setRange(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("setRange"), {"L"});
            return _m.Call(L);
        }
    };
}
