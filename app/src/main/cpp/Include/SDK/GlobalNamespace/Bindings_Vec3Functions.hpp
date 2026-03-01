#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings_Vec3Functions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("Vec3Functions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int Add(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Add"), {"L"});
            return _m.Call(L);
        }
        static int Add$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Add$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int Cross(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Cross"), {"L"});
            return _m.Call(L);
        }
        static int Cross$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Cross$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int Distance(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Distance"), {"L"});
            return _m.Call(L);
        }
        static int Distance$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Distance$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int Div(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Div"), {"L"});
            return _m.Call(L);
        }
        static int Div$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Div$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int Dot(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Dot"), {"L"});
            return _m.Call(L);
        }
        static int Dot$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Dot$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int Eq(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Eq"), {"L"});
            return _m.Call(L);
        }
        static int Eq$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Eq$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int Length(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Length"), {"L"});
            return _m.Call(L);
        }
        static int Length$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Length$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int Lerp(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Lerp"), {"L"});
            return _m.Call(L);
        }
        static int Lerp$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Lerp$BurstManaged"), {"L"});
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
        static int NearlyEqual(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("NearlyEqual"), {"L"});
            return _m.Call(L);
        }
        static int NearlyEqual$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("NearlyEqual$BurstManaged"), {"L"});
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
        static int Normalize(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Normalize"), {"L"});
            return _m.Call(L);
        }
        static int Normalize$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Normalize$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int OneVector(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("OneVector"), {"L"});
            return _m.Call(L);
        }
        static int OneVector$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("OneVector$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int Project(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Project"), {"L"});
            return _m.Call(L);
        }
        static int Project$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Project$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int Rotate(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Rotate"), {"L"});
            return _m.Call(L);
        }
        static int Rotate$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Rotate$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int SafeNormal(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SafeNormal"), {"L"});
            return _m.Call(L);
        }
        static int SafeNormal$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SafeNormal$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int Sub(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Sub"), {"L"});
            return _m.Call(L);
        }
        static int Sub$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Sub$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int ToString_1(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ToString"), {"L"});
            return _m.Call(L);
        }
        static int Unm(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Unm"), {"L"});
            return _m.Call(L);
        }
        static int Unm$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Unm$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int ZeroVector(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ZeroVector"), {"L"});
            return _m.Call(L);
        }
        static int ZeroVector$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ZeroVector$BurstManaged"), {"L"});
            return _m.Call(L);
        }
    };
}
