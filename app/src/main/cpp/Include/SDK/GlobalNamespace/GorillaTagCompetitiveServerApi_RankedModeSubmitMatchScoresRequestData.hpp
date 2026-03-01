#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTagCompetitiveServerApi_RankedModeRequestDataBase.hpp"

namespace GlobalNamespace {
    struct GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData : ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagCompetitiveServerApi").GetInnerClass("RankedModeSubmitMatchScoresRequestData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetMatchId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("matchId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>* GetPlayerScores() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>*> _field = GetClass().GetField(O("playerScores"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayfabId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playfabId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMatchId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("matchId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerScores(::BNM::Structures::Mono::List<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerScore*>*> _field = GetClass().GetField(O("playerScores"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayfabId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playfabId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
