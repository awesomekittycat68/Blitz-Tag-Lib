#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct GetPlayerTradesResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GetPlayerTradesResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::TradeInfo*>* GetAcceptedTrades() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::TradeInfo*>*> _field = GetClass().GetField(O("AcceptedTrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::TradeInfo*>* GetOpenedTrades() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::TradeInfo*>*> _field = GetClass().GetField(O("OpenedTrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAcceptedTrades(::BNM::Structures::Mono::List<::PlayFab_ClientModels::TradeInfo*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::TradeInfo*>*> _field = GetClass().GetField(O("AcceptedTrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpenedTrades(::BNM::Structures::Mono::List<::PlayFab_ClientModels::TradeInfo*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::TradeInfo*>*> _field = GetClass().GetField(O("OpenedTrades"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
