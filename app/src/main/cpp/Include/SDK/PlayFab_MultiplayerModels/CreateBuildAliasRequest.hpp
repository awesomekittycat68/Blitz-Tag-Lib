#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_MultiplayerModels {
    struct CreateBuildAliasRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "CreateBuildAliasRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetAliasName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AliasName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::BuildSelectionCriterion*>* GetBuildSelectionCriteria() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::BuildSelectionCriterion*>*> _field = GetClass().GetField(O("BuildSelectionCriteria"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAliasName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AliasName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuildSelectionCriteria(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::BuildSelectionCriterion*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::BuildSelectionCriterion*>*> _field = GetClass().GetField(O("BuildSelectionCriteria"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
