#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct StaticRPCEntry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "StaticRPCEntry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint8_t GetCode() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("code"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetworkSystem_StaticRPC* GetLookupMethod() {
            static BNM::Field<::GlobalNamespace::NetworkSystem_StaticRPC*> _field = GetClass().GetField(O("lookupMethod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder* GetPlaceholder() {
            static BNM::Field<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*> _field = GetClass().GetField(O("placeholder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCode(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("code"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookupMethod(::GlobalNamespace::NetworkSystem_StaticRPC* value) {
            static BNM::Field<::GlobalNamespace::NetworkSystem_StaticRPC*> _field = GetClass().GetField(O("lookupMethod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlaceholder(::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder* value) {
            static BNM::Field<::GlobalNamespace::NetworkSystem_StaticRPCPlaceholder*> _field = GetClass().GetField(O("placeholder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
