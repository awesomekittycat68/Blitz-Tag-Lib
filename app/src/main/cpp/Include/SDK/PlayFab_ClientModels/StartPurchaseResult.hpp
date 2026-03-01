#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct StartPurchaseResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "StartPurchaseResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::CartItem*>* GetContents() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::CartItem*>*> _field = GetClass().GetField(O("Contents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOrderId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("OrderId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::PaymentOption*>* GetPaymentOptions() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::PaymentOption*>*> _field = GetClass().GetField(O("PaymentOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* GetVirtualCurrencyBalances() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("VirtualCurrencyBalances"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetContents(::BNM::Structures::Mono::List<::PlayFab_ClientModels::CartItem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::CartItem*>*> _field = GetClass().GetField(O("Contents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOrderId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("OrderId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPaymentOptions(::BNM::Structures::Mono::List<::PlayFab_ClientModels::PaymentOption*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::PaymentOption*>*> _field = GetClass().GetField(O("PaymentOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVirtualCurrencyBalances(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("VirtualCurrencyBalances"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
