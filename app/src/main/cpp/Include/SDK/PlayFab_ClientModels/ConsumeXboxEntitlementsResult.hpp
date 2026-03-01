#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct ConsumeXboxEntitlementsResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "ConsumeXboxEntitlementsResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::ItemInstance*>* GetItems() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::ItemInstance*>*> _field = GetClass().GetField(O("Items"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetItems(::BNM::Structures::Mono::List<::PlayFab_ClientModels::ItemInstance*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::ItemInstance*>*> _field = GetClass().GetField(O("Items"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
