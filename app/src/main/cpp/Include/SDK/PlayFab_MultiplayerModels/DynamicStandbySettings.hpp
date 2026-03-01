#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct DynamicStandbySettings : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "DynamicStandbySettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::DynamicStandbyThreshold*>* GetDynamicFloorMultiplierThresholds() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::DynamicStandbyThreshold*>*> _field = GetClass().GetField(O("DynamicFloorMultiplierThresholds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRampDownSeconds() {
            static BNM::Field<void*> _field = GetClass().GetField(O("RampDownSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDynamicFloorMultiplierThresholds(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::DynamicStandbyThreshold*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::DynamicStandbyThreshold*>*> _field = GetClass().GetField(O("DynamicFloorMultiplierThresholds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRampDownSeconds(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("RampDownSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
