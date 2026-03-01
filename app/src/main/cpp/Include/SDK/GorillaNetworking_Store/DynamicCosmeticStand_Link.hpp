#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HeadModel_CosmeticStand_BustType.hpp"

namespace GorillaNetworking_Store {
    struct DynamicCosmeticStand_Link : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "DynamicCosmeticStand_Link");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaNetworking_Store::DynamicCosmeticStand* GetStand() {
            static BNM::Field<::GorillaNetworking_Store::DynamicCosmeticStand*> _field = GetClass().GetField(O("stand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetStand(::GorillaNetworking_Store::DynamicCosmeticStand* value) {
            static BNM::Field<::GorillaNetworking_Store::DynamicCosmeticStand*> _field = GetClass().GetField(O("stand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ClearCosmeticItems() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCosmeticItems"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SaveCosmeticMountPosition() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveCosmeticMountPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetStandType(::GorillaNetworking_Store::HeadModel_CosmeticStand_BustType type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStandType"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type);
        }
        void SpawnItemOntoStand(::BNM::Structures::Mono::String* PlayFabID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnItemOntoStand"), {"PlayFabID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(PlayFabID);
        }
    };
}
