#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct ValidateIOSReceiptResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "ValidateIOSReceiptResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::PurchaseReceiptFulfillment*>* GetFulfillments() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::PurchaseReceiptFulfillment*>*> _field = GetClass().GetField(O("Fulfillments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFulfillments(::BNM::Structures::Mono::List<::PlayFab_ClientModels::PurchaseReceiptFulfillment*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::PurchaseReceiptFulfillment*>*> _field = GetClass().GetField(O("Fulfillments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
