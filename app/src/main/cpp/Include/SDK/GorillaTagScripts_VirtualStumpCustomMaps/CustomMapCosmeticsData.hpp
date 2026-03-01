#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CustomMapCosmeticItem.hpp"

namespace GorillaTagScripts_VirtualStumpCustomMaps {
    struct CustomMapCosmeticsData : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapCosmeticsData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticItem>* GetCustomMapCosmeticItemList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticItem>*> _field = GetClass().GetField(O("customMapCosmeticItemList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticItem>* GetFallbackItems() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticItem>*> _field = GetClass().GetField(O("fallbackItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitializedFromTitleData() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initializedFromTitleData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTitleDataKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCustomMapCosmeticItemList(::BNM::Structures::Mono::List<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticItem>*> _field = GetClass().GetField(O("customMapCosmeticItemList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFallbackItems(::BNM::Structures::Mono::List<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticItem>*> _field = GetClass().GetField(O("fallbackItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitializedFromTitleData(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initializedFromTitleData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleDataKey(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("titleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGetCosmeticsDataFromTitleData(::BNM::Structures::Mono::String* cosmeticsData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetCosmeticsDataFromTitleData"), {"cosmeticsData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cosmeticsData);
        }
        void OnPlayFabError(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayFabError"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void OnTitleDataUpdated(::BNM::Structures::Mono::String* updatedKey) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTitleDataUpdated"), {"updatedKey"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(updatedKey);
        }
        template <typename TP0 = void*>
        bool TryGetItem(TP0 customMapItemSlot, ::GorillaTagScripts_VirtualStumpCustomMaps::CustomMapCosmeticItem& foundItem) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetItem"), {"customMapItemSlot", "foundItem"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(customMapItemSlot, &foundItem);
        }
        void UpdateFromTitleData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFromTitleData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
