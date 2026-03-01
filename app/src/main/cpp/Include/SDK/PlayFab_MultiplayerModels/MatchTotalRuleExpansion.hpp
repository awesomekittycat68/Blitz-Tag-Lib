#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct MatchTotalRuleExpansion : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "MatchTotalRuleExpansion");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::OverrideDouble*>* GetMaxOverrides() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::OverrideDouble*>*> _field = GetClass().GetField(O("MaxOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::OverrideDouble*>* GetMinOverrides() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::OverrideDouble*>*> _field = GetClass().GetField(O("MinOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetSecondsBetweenExpansions() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("SecondsBetweenExpansions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMaxOverrides(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::OverrideDouble*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::OverrideDouble*>*> _field = GetClass().GetField(O("MaxOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinOverrides(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::OverrideDouble*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::OverrideDouble*>*> _field = GetClass().GetField(O("MinOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondsBetweenExpansions(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("SecondsBetweenExpansions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
