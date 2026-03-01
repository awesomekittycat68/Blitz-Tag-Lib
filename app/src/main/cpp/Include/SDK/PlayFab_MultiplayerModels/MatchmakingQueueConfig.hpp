#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct MatchmakingQueueConfig : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "MatchmakingQueueConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetBuildId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("BuildId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::DifferenceRule*>* GetDifferenceRules() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::DifferenceRule*>*> _field = GetClass().GetField(O("DifferenceRules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchTotalRule*>* GetMatchTotalRules() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchTotalRule*>*> _field = GetClass().GetField(O("MatchTotalRules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetMaxMatchSize() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("MaxMatchSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMaxTicketSize() {
            static BNM::Field<void*> _field = GetClass().GetField(O("MaxTicketSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetMinMatchSize() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("MinMatchSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::RegionSelectionRule* GetRegionSelectionRule() {
            static BNM::Field<::PlayFab_MultiplayerModels::RegionSelectionRule*> _field = GetClass().GetField(O("RegionSelectionRule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetServerAllocationEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ServerAllocationEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::SetIntersectionRule*>* GetSetIntersectionRules() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::SetIntersectionRule*>*> _field = GetClass().GetField(O("SetIntersectionRules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::StatisticsVisibilityToPlayers* GetStatisticsVisibilityToPlayers() {
            static BNM::Field<::PlayFab_MultiplayerModels::StatisticsVisibilityToPlayers*> _field = GetClass().GetField(O("StatisticsVisibilityToPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::StringEqualityRule*>* GetStringEqualityRules() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::StringEqualityRule*>*> _field = GetClass().GetField(O("StringEqualityRules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::TeamDifferenceRule*>* GetTeamDifferenceRules() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::TeamDifferenceRule*>*> _field = GetClass().GetField(O("TeamDifferenceRules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchmakingQueueTeam*>* GetTeams() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchmakingQueueTeam*>*> _field = GetClass().GetField(O("Teams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::TeamSizeBalanceRule* GetTeamSizeBalanceRule() {
            static BNM::Field<::PlayFab_MultiplayerModels::TeamSizeBalanceRule*> _field = GetClass().GetField(O("TeamSizeBalanceRule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::TeamTicketSizeSimilarityRule* GetTeamTicketSizeSimilarityRule() {
            static BNM::Field<::PlayFab_MultiplayerModels::TeamTicketSizeSimilarityRule*> _field = GetClass().GetField(O("TeamTicketSizeSimilarityRule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuildId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("BuildId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDifferenceRules(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::DifferenceRule*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::DifferenceRule*>*> _field = GetClass().GetField(O("DifferenceRules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatchTotalRules(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchTotalRule*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchTotalRule*>*> _field = GetClass().GetField(O("MatchTotalRules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxMatchSize(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("MaxMatchSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxTicketSize(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("MaxTicketSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinMatchSize(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("MinMatchSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRegionSelectionRule(::PlayFab_MultiplayerModels::RegionSelectionRule* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::RegionSelectionRule*> _field = GetClass().GetField(O("RegionSelectionRule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetServerAllocationEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ServerAllocationEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetIntersectionRules(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::SetIntersectionRule*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::SetIntersectionRule*>*> _field = GetClass().GetField(O("SetIntersectionRules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatisticsVisibilityToPlayers(::PlayFab_MultiplayerModels::StatisticsVisibilityToPlayers* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::StatisticsVisibilityToPlayers*> _field = GetClass().GetField(O("StatisticsVisibilityToPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStringEqualityRules(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::StringEqualityRule*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::StringEqualityRule*>*> _field = GetClass().GetField(O("StringEqualityRules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamDifferenceRules(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::TeamDifferenceRule*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::TeamDifferenceRule*>*> _field = GetClass().GetField(O("TeamDifferenceRules"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeams(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchmakingQueueTeam*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::MatchmakingQueueTeam*>*> _field = GetClass().GetField(O("Teams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamSizeBalanceRule(::PlayFab_MultiplayerModels::TeamSizeBalanceRule* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::TeamSizeBalanceRule*> _field = GetClass().GetField(O("TeamSizeBalanceRule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamTicketSizeSimilarityRule(::PlayFab_MultiplayerModels::TeamTicketSizeSimilarityRule* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::TeamTicketSizeSimilarityRule*> _field = GetClass().GetField(O("TeamTicketSizeSimilarityRule"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
