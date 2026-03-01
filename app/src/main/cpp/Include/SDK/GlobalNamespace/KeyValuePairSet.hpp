#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "KeyValueStringPair.hpp"

namespace GlobalNamespace {
    struct KeyValuePairSet : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KeyValuePairSet");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>* GetEntries() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>*> _method = GetClass().GetMethod(O("get_Entries"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>* GetMEntries() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>*> _field = GetClass().GetField(O("m_entries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMEntries(::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>*> _field = GetClass().GetField(O("m_entries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>* get_Entries() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::KeyValueStringPair>*> _m = GetClass().GetMethod(O("get_Entries"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
