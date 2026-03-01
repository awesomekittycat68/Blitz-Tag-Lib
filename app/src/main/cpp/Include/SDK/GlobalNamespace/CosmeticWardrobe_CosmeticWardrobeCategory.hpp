#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticCategory.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticItem.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticSlots.hpp"

namespace GlobalNamespace {
    struct CosmeticWardrobe_CosmeticWardrobeCategory : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticWardrobe").GetInnerClass("CosmeticWardrobeCategory");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::CosmeticCategoryButton* GetButton() {
            static BNM::Field<::GlobalNamespace::CosmeticCategoryButton*> _field = GetClass().GetField(O("button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticCategory GetCategory() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticCategory> _field = GetClass().GetField(O("category"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSlots GetSlot1() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSlots> _field = GetClass().GetField(O("slot1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticItem GetSlot1RemovedItem() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("slot1RemovedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticSlots GetSlot2() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSlots> _field = GetClass().GetField(O("slot2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::CosmeticsController_CosmeticItem GetSlot2RemovedItem() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("slot2RemovedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButton(::GlobalNamespace::CosmeticCategoryButton* value) {
            static BNM::Field<::GlobalNamespace::CosmeticCategoryButton*> _field = GetClass().GetField(O("button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCategory(::GorillaNetworking::CosmeticsController_CosmeticCategory value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticCategory> _field = GetClass().GetField(O("category"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlot1(::GorillaNetworking::CosmeticsController_CosmeticSlots value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSlots> _field = GetClass().GetField(O("slot1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlot1RemovedItem(::GorillaNetworking::CosmeticsController_CosmeticItem value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("slot1RemovedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlot2(::GorillaNetworking::CosmeticsController_CosmeticSlots value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticSlots> _field = GetClass().GetField(O("slot2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSlot2RemovedItem(::GorillaNetworking::CosmeticsController_CosmeticItem value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("slot2RemovedItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
