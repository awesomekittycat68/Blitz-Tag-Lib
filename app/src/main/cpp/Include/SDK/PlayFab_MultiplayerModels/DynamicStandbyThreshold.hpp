#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct DynamicStandbyThreshold : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "DynamicStandbyThreshold");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        double GetMultiplier() {
            static BNM::Field<double> _field = GetClass().GetField(O("Multiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTriggerThresholdPercentage() {
            static BNM::Field<double> _field = GetClass().GetField(O("TriggerThresholdPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMultiplier(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("Multiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerThresholdPercentage(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("TriggerThresholdPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
