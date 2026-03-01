#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct StaticRPCLookup : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "StaticRPCLookup");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::StaticRPCEntry*>* GetEntries() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::StaticRPCEntry*>*> _field = GetClass().GetField(O("entries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<uint8_t, int>* GetEventCodeEntryLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, int>*> _field = GetClass().GetField(O("eventCodeEntryLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*, int>* GetPlaceholderEntryLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*, int>*> _field = GetClass().GetField(O("placeholderEntryLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntries(::BNM::Structures::Mono::List<::GlobalNamespace::StaticRPCEntry*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::StaticRPCEntry*>*> _field = GetClass().GetField(O("entries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventCodeEntryLookup(::BNM::Structures::Mono::Dictionary<uint8_t, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, int>*> _field = GetClass().GetField(O("eventCodeEntryLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlaceholderEntryLookup(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*, int>*> _field = GetClass().GetField(O("placeholderEntryLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Add(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder* placeholder, uint8_t code, ::GlobalNamespace::NetworkSystem_StaticRPC* lookupMethod) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"placeholder", "code", "lookupMethod"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(placeholder, code, lookupMethod);
        }
        ::GlobalNamespace::NetworkSystem_StaticRPC* CodeToMethod(uint8_t code) {
            static BNM::Method<::GlobalNamespace::NetworkSystem_StaticRPC*> _m = GetClass().GetMethod(O("CodeToMethod"), {"code"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(code);
        }
        uint8_t PlaceholderToCode(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder* placeholder) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("PlaceholderToCode"), {"placeholder"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(placeholder);
        }
    };
}
