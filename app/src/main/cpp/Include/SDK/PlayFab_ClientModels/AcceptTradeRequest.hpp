#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_ClientModels {
    struct AcceptTradeRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "AcceptTradeRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetAcceptedInventoryInstanceIds() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("AcceptedInventoryInstanceIds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOfferingPlayerId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("OfferingPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTradeId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TradeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAcceptedInventoryInstanceIds(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("AcceptedInventoryInstanceIds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOfferingPlayerId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("OfferingPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTradeId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TradeId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
