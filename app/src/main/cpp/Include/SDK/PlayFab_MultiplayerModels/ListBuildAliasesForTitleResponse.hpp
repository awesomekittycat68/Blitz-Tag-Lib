#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_MultiplayerModels {
    struct ListBuildAliasesForTitleResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "ListBuildAliasesForTitleResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::BuildAliasDetailsResponse*>* GetBuildAliases() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::BuildAliasDetailsResponse*>*> _field = GetClass().GetField(O("BuildAliases"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuildAliases(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::BuildAliasDetailsResponse*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::BuildAliasDetailsResponse*>*> _field = GetClass().GetField(O("BuildAliases"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
