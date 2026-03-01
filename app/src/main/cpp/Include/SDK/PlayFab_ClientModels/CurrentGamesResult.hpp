#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct CurrentGamesResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "CurrentGamesResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetGameCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("GameCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::GameInfo*>* GetGames() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::GameInfo*>*> _field = GetClass().GetField(O("Games"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayerCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("PlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("GameCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGames(::BNM::Structures::Mono::List<::PlayFab_ClientModels::GameInfo*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::GameInfo*>*> _field = GetClass().GetField(O("Games"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("PlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
