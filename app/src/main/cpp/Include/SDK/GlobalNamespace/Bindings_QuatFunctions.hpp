#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings_QuatFunctions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("QuatFunctions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int Eq(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Eq"), {"L"});
            return _m.Call(L);
        }
        static int Eq$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Eq$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int Euler(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Euler"), {"L"});
            return _m.Call(L);
        }
        static int Euler$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Euler$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int FromDirection(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FromDirection"), {"L"});
            return _m.Call(L);
        }
        static int FromDirection$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FromDirection$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int FromEuler(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FromEuler"), {"L"});
            return _m.Call(L);
        }
        static int FromEuler$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FromEuler$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int GetUpVector(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetUpVector"), {"L"});
            return _m.Call(L);
        }
        static int GetUpVector$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetUpVector$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int Mul(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Mul"), {"L"});
            return _m.Call(L);
        }
        static int Mul$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Mul$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int New(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("New"), {"L"});
            return _m.Call(L);
        }
        static int New$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("New$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int ToString_1(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ToString"), {"L"});
            return _m.Call(L);
        }
    };
}
