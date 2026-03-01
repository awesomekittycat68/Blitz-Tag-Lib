#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct StringEqualityRuleExpansion : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "StringEqualityRuleExpansion");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<bool>* GetEnabledOverrides() {
            static BNM::Field<::BNM::Structures::Mono::List<bool>*> _field = GetClass().GetField(O("EnabledOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetSecondsBetweenExpansions() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("SecondsBetweenExpansions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnabledOverrides(::BNM::Structures::Mono::List<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<bool>*> _field = GetClass().GetField(O("EnabledOverrides"));
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
