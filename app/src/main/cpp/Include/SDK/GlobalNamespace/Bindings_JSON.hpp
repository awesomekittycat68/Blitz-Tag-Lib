#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings_JSON : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("JSON");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::String* GetModIODirectory() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ModIODirectory"));
            return _field.Get();
        }
        static void SetModIODirectory(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ModIODirectory"));
            _field.Set(value);
        }
        template <typename TP1 = void*>
        static bool CompareKeys(::BNM::IL2CPP::Il2CppObject* obj, TP1 set) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CompareKeys"), {"obj", "set"});
            return _m.Call(obj, set);
        }
        static ::BNM::Structures::Mono::Dictionary<void*, void*>* ConsumeTable(::GlobalNamespace::lua_State* L, int tableIndex) {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<void*, void*>*> _m = GetClass().GetMethod(O("ConsumeTable"), {"L", "tableIndex"});
            return _m.Call(L, tableIndex);
        }
        static int DataLoad(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("DataLoad"), {"L"});
            return _m.Call(L);
        }
        static int DataSave(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("DataSave"), {"L"});
            return _m.Call(L);
        }
        static int ParseStrictInt(::BNM::Structures::Mono::String* input) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ParseStrictInt"), {"input"});
            return _m.Call(input);
        }
        static bool PushTable(::GlobalNamespace::lua_State* L, ::BNM::IL2CPP::Il2CppObject* table) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PushTable"), {"L", "table"});
            return _m.Call(L, table);
        }
    };
}
