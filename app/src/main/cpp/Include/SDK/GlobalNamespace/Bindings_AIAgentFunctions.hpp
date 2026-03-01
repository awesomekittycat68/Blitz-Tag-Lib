#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Bindings_LuauAIAgent.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings_AIAgentFunctions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("AIAgentFunctions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int DestroyEntity(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("DestroyEntity"), {"L"});
            return _m.Call(L);
        }
        static int FindPrePlacedAIAgentByID(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FindPrePlacedAIAgentByID"), {"L"});
            return _m.Call(L);
        }
        static int GetAIAgentByEntityID(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetAIAgentByEntityID"), {"L"});
            return _m.Call(L);
        }
        static int GetTarget(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTarget"), {"L"});
            return _m.Call(L);
        }
        static int PlayAgentAnimation(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("PlayAgentAnimation"), {"L"});
            return _m.Call(L);
        }
        static int SetDestination(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetDestination"), {"L"});
            return _m.Call(L);
        }
        static int SetTarget(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetTarget"), {"L"});
            return _m.Call(L);
        }
        static int SpawnAIAgent(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SpawnAIAgent"), {"L"});
            return _m.Call(L);
        }
        static int ToString_1(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ToString"), {"L"});
            return _m.Call(L);
        }
        static void UpdateEntity(::GlobalNamespace::GameEntity* entity, ::GlobalNamespace::Bindings_LuauAIAgent* luaAgent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateEntity"), {"entity", "luaAgent"});
            _m.Call(entity, luaAgent);
        }
    };
}
