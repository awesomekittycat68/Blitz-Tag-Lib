#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct BurstClassInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BurstClassInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* GetKMetatableLookup() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_k_metatableLookup"));
            return _field.Get();
        }
        static int Index(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Index"), {"L"});
            return _m.Call(L);
        }
        static int Index$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Index$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        static int NameCall(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("NameCall"), {"L"});
            return _m.Call(L);
        }
        static int NameCall$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("NameCall$BurstManaged"), {"L"});
            return _m.Call(L);
        }
        template <typename T>
        static void NewClass(::BNM::Structures::Mono::String* className, ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* fieldList, ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::lua_CFunction*>* functionList, ::BNM::Structures::Mono::Dictionary<int, void*>* functionPtrList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NewClass"), {"className", "fieldList", "functionList", "functionPtrList"});
            _m.Call(className, fieldList, functionList, functionPtrList);
        }
        static int NewIndex(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("NewIndex"), {"L"});
            return _m.Call(L);
        }
        static int NewIndex$BurstManaged(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("NewIndex$BurstManaged"), {"L"});
            return _m.Call(L);
        }
    };
}
