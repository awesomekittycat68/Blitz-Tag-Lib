#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct GetLeaderboardResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GetLeaderboardResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::PlayerLeaderboardEntry*>* GetLeaderboard() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::PlayerLeaderboardEntry*>*> _field = GetClass().GetField(O("Leaderboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNextReset() {
            static BNM::Field<void*> _field = GetClass().GetField(O("NextReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVersion() {
            static BNM::Field<int> _field = GetClass().GetField(O("Version"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLeaderboard(::BNM::Structures::Mono::List<::PlayFab_ClientModels::PlayerLeaderboardEntry*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::PlayerLeaderboardEntry*>*> _field = GetClass().GetField(O("Leaderboard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextReset(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("NextReset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVersion(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Version"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
