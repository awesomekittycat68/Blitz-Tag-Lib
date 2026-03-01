#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings_GameObjectFunctions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("GameObjectFunctions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int CloneGameObject(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CloneGameObject"), {"L"});
            return _m.Call(L);
        }
        static int DestroyGameObject(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("DestroyGameObject"), {"L"});
            return _m.Call(L);
        }
        static int Equals_1(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Equals"), {"L"});
            return _m.Call(L);
        }
        static ::Transform* FindChild(::Transform* parent, ::BNM::Structures::Mono::String* name) {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("FindChild"), {"parent", "name"});
            return _m.Call(parent, name);
        }
        static int FindChildGameObject(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FindChildGameObject"), {"L"});
            return _m.Call(L);
        }
        static int FindComponent(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FindComponent"), {"L"});
            return _m.Call(L);
        }
        static int FindGameObject(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FindGameObject"), {"L"});
            return _m.Call(L);
        }
        static int GetDepth(::GameObject* gameObject) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetDepth"), {"gameObject"});
            return _m.Call(gameObject);
        }
        static int GetVelocity(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetVelocity"), {"L"});
            return _m.Call(L);
        }
        static int New(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("New"), {"L"});
            return _m.Call(L);
        }
        static int OnTouched(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("OnTouched"), {"L"});
            return _m.Call(L);
        }
        static int SetActive(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetActive"), {"L"});
            return _m.Call(L);
        }
        static int SetCollision(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetCollision"), {"L"});
            return _m.Call(L);
        }
        static int SetColor(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetColor"), {"L"});
            return _m.Call(L);
        }
        static int SetText(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetText"), {"L"});
            return _m.Call(L);
        }
        static int SetVelocity(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetVelocity"), {"L"});
            return _m.Call(L);
        }
        static int SetVisibility(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetVisibility"), {"L"});
            return _m.Call(L);
        }
        static void UpdateDepthList() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDepthList"));
            _m.Call();
        }
    };
}
