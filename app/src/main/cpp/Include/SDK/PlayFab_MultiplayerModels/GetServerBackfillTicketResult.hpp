#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_MultiplayerModels {
    struct GetServerBackfillTicketResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "GetServerBackfillTicketResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetCancellationReasonString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("CancellationReasonString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCreated() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Created"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGiveUpAfterSeconds() {
            static BNM::Field<int> _field = GetClass().GetField(O("GiveUpAfterSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMatchId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MatchId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>* GetMembers() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*> _field = GetClass().GetField(O("Members"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetQueueName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("QueueName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::ServerDetails* GetServerDetails() {
            static BNM::Field<::PlayFab_MultiplayerModels::ServerDetails*> _field = GetClass().GetField(O("ServerDetails"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetStatus() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Status"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTicketId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TicketId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCancellationReasonString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("CancellationReasonString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreated(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Created"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGiveUpAfterSeconds(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("GiveUpAfterSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatchId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MatchId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMembers(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*> _field = GetClass().GetField(O("Members"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueueName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("QueueName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetServerDetails(::PlayFab_MultiplayerModels::ServerDetails* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::ServerDetails*> _field = GetClass().GetField(O("ServerDetails"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatus(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Status"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTicketId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TicketId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
