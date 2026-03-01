#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticItem.hpp"

namespace GlobalNamespace {
    struct CosmeticWardrobe_CosmeticWardrobeSelection : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticWardrobe").GetInnerClass("CosmeticWardrobeSelection");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaNetworking::CosmeticsController_CosmeticItem GetCurrentCosmeticItem() {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("currentCosmeticItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HeadModel* GetDisplayHead() {
            static BNM::Field<::GlobalNamespace::HeadModel*> _field = GetClass().GetField(O("displayHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CosmeticButton* GetSelectButton() {
            static BNM::Field<::GlobalNamespace::CosmeticButton*> _field = GetClass().GetField(O("selectButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentCosmeticItem(::GorillaNetworking::CosmeticsController_CosmeticItem value) {
            static BNM::Field<::GorillaNetworking::CosmeticsController_CosmeticItem> _field = GetClass().GetField(O("currentCosmeticItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayHead(::GlobalNamespace::HeadModel* value) {
            static BNM::Field<::GlobalNamespace::HeadModel*> _field = GetClass().GetField(O("displayHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectButton(::GlobalNamespace::CosmeticButton* value) {
            static BNM::Field<::GlobalNamespace::CosmeticButton*> _field = GetClass().GetField(O("selectButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
