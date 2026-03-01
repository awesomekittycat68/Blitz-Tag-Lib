#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_MultiplayerModels {
    struct CreateMatchmakingTicketRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "CreateMatchmakingTicketRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_MultiplayerModels::MatchmakingPlayer* GetCreator() {
            static BNM::Field<::PlayFab_MultiplayerModels::MatchmakingPlayer*> _field = GetClass().GetField(O("Creator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGiveUpAfterSeconds() {
            static BNM::Field<int> _field = GetClass().GetField(O("GiveUpAfterSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::EntityKey*>* GetMembersToMatchWith() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::EntityKey*>*> _field = GetClass().GetField(O("MembersToMatchWith"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetQueueName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("QueueName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCreator(::PlayFab_MultiplayerModels::MatchmakingPlayer* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::MatchmakingPlayer*> _field = GetClass().GetField(O("Creator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGiveUpAfterSeconds(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("GiveUpAfterSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMembersToMatchWith(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::EntityKey*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::EntityKey*>*> _field = GetClass().GetField(O("MembersToMatchWith"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueueName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("QueueName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
