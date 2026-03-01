#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct GetLeaderboardAroundCharacterResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GetLeaderboardAroundCharacterResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterLeaderboardEntry*>* GetLeaderboard() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterLeaderboardEntry*>*> _field = GetClass().GetField(O("Leaderboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLeaderboard(::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterLeaderboardEntry*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterLeaderboardEntry*>*> _field = GetClass().GetField(O("Leaderboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
