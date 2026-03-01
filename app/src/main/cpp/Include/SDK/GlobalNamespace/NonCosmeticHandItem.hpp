#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticSlots.hpp"

namespace GlobalNamespace {
    struct NonCosmeticHandItem : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NonCosmeticHandItem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSlots GetCosmeticSlots() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSlots> _field = GetClass().GetField(O("cosmeticSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetItemPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("itemPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCosmeticSlots(::GorillaNetworking::CosmeticsController_CosmeticSlots value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSlots> _field = GetClass().GetField(O("cosmeticSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("itemPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void EnableItem(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableItem"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        bool get_IsEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
