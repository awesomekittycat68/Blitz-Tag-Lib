#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct Luau_lua_ClassFields$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Luau").GetInnerClass("lua_ClassFields`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*>* GetClassDictionarys() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*>*> _field = GetClass().GetField(O("classDictionarys"));
            return _field.Get();
        }
        static void SetClassDictionarys(::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*>*> _field = GetClass().GetField(O("classDictionarys"));
            _field.Set(value);
        }
        static void Add(::BNM::Structures::Mono::String* name, ::BNM::IL2CPP::Il2CppObject* field) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"name", "field"});
            _m.Call(name, field);
        }
        static ::BNM::IL2CPP::Il2CppObject* Get(::BNM::Structures::Mono::String* name) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("Get"), {"name"});
            return _m.Call(name);
        }
    };
}
