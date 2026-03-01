#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct MatchmakingPlayer : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "MatchmakingPlayer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_MultiplayerModels::MatchmakingPlayerAttributes* GetAttributes() {
            static BNM::Field<::PlayFab_MultiplayerModels::MatchmakingPlayerAttributes*> _field = GetClass().GetField(O("Attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::EntityKey* GetEntity() {
            static BNM::Field<::PlayFab_MultiplayerModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttributes(::PlayFab_MultiplayerModels::MatchmakingPlayerAttributes* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::MatchmakingPlayerAttributes*> _field = GetClass().GetField(O("Attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntity(::PlayFab_MultiplayerModels::EntityKey* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
