#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    struct CosmeticsController_$$c__DisplayClass233_1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "CosmeticsController").GetInnerClass("<>c__DisplayClass233_1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_ClientModels::CatalogItem* GetCatalogItem() {
            static BNM::Field<::PlayFab_ClientModels::CatalogItem*> _field = GetClass().GetField(O("catalogItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCatalogItem(::PlayFab_ClientModels::CatalogItem* value) {
            static BNM::Field<::PlayFab_ClientModels::CatalogItem*> _field = GetClass().GetField(O("catalogItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
