#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking_Store {
    struct StoreDisplay : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "StoreDisplay");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetDisplayName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("displayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaNetworking_Store::DynamicCosmeticStand*>* GetStands() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking_Store::DynamicCosmeticStand*>*> _field = GetClass().GetField(O("Stands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDisplayName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("displayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStands(::BNM::Structures::Mono::Array<::GorillaNetworking_Store::DynamicCosmeticStand*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking_Store::DynamicCosmeticStand*>*> _field = GetClass().GetField(O("Stands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void GetAllDynamicCosmeticStands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetAllDynamicCosmeticStands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetDisplayNameForAllStands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDisplayNameForAllStands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
