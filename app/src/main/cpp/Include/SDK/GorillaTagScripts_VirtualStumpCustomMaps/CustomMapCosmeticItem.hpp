#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaNetworking_Store/HeadModel_CosmeticStand_BustType.hpp"

namespace GorillaTagScripts_VirtualStumpCustomMaps {
    struct CustomMapCosmeticItem : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapCosmeticItem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaNetworking_Store::HeadModel_CosmeticStand_BustType GetBustType() {
            static BNM::Field<::GorillaNetworking_Store::HeadModel_CosmeticStand_BustType> _field = GetClass().GetField(O("bustType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCustomMapItemSlot() {
            static BNM::Field<void*> _field = GetClass().GetField(O("customMapItemSlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayFabID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playFabID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBustType(::GorillaNetworking_Store::HeadModel_CosmeticStand_BustType value) {
            static BNM::Field<::GorillaNetworking_Store::HeadModel_CosmeticStand_BustType> _field = GetClass().GetField(O("bustType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomMapItemSlot(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("customMapItemSlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayFabID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playFabID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
