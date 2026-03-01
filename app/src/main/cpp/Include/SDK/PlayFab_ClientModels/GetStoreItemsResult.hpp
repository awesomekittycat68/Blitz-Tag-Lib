#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SourceType.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct GetStoreItemsResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GetStoreItemsResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetCatalogVersion() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("CatalogVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::StoreMarketingModel* GetMarketingData() {
            static BNM::Field<::PlayFab_ClientModels::StoreMarketingModel*> _field = GetClass().GetField(O("MarketingData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSource() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Source"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::StoreItem*>* GetStore() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::StoreItem*>*> _field = GetClass().GetField(O("Store"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetStoreId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("StoreId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCatalogVersion(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("CatalogVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMarketingData(::PlayFab_ClientModels::StoreMarketingModel* value) {
            static BNM::Field<::PlayFab_ClientModels::StoreMarketingModel*> _field = GetClass().GetField(O("MarketingData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSource(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Source"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStore(::BNM::Structures::Mono::List<::PlayFab_ClientModels::StoreItem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::StoreItem*>*> _field = GetClass().GetField(O("Store"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStoreId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("StoreId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
