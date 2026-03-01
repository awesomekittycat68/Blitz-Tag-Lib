#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Bindings_LuauGrabbableEntity.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings_GrabbableEntityFunctions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("GrabbableEntityFunctions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int DestroyEntity(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("DestroyEntity"), {"L"});
            return _m.Call(L);
        }
        static int FindPrePlacedGrabbableEntityByID(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FindPrePlacedGrabbableEntityByID"), {"L"});
            return _m.Call(L);
        }
        static int GetGrabbableEntityByEntityID(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetGrabbableEntityByEntityID"), {"L"});
            return _m.Call(L);
        }
        static int GetHoldingActorNumberByEntityID(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHoldingActorNumberByEntityID"), {"L"});
            return _m.Call(L);
        }
        static int GetHoldingActorNumberByLuauID(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHoldingActorNumberByLuauID"), {"L"});
            return _m.Call(L);
        }
        static int SpawnGrabbableEntity(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SpawnGrabbableEntity"), {"L"});
            return _m.Call(L);
        }
        static int ToString_1(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ToString"), {"L"});
            return _m.Call(L);
        }
        static void UpdateEntity(::GlobalNamespace::GameEntity* entity, ::GlobalNamespace::Bindings_LuauGrabbableEntity* luaAgent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateEntity"), {"entity", "luaAgent"});
            _m.Call(entity, luaAgent);
        }
    };
}
