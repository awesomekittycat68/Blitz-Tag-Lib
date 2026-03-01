#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_ClientModels {
    struct AdRewardResults : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "AdRewardResults");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::AdRewardItemGranted*>* GetGrantedItems() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::AdRewardItemGranted*>*> _field = GetClass().GetField(O("GrantedItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* GetGrantedVirtualCurrencies() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("GrantedVirtualCurrencies"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* GetIncrementedStatistics() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("IncrementedStatistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGrantedItems(::BNM::Structures::Mono::List<::PlayFab_ClientModels::AdRewardItemGranted*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::AdRewardItemGranted*>*> _field = GetClass().GetField(O("GrantedItems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrantedVirtualCurrencies(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("GrantedVirtualCurrencies"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncrementedStatistics(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("IncrementedStatistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
