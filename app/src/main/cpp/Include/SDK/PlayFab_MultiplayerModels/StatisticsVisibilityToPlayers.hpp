#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct StatisticsVisibilityToPlayers : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "StatisticsVisibilityToPlayers");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetShowNumberOfPlayersMatching() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowNumberOfPlayersMatching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowTimeToMatch() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowTimeToMatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetShowNumberOfPlayersMatching(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowNumberOfPlayersMatching"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowTimeToMatch(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ShowTimeToMatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
