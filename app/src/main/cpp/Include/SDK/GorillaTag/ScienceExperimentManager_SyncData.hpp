#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ScienceExperimentManager_RisingLiquidState.hpp"

namespace GorillaTag {
    struct ScienceExperimentManager_SyncData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "ScienceExperimentManager").GetInnerClass("SyncData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        double GetActivationProgress() {
            static BNM::Field<double> _field = GetClass().GetField(O("activationProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::ScienceExperimentManager_RisingLiquidState GetState() {
            static BNM::Field<::GorillaTag::ScienceExperimentManager_RisingLiquidState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStateStartLiquidProgressLinear() {
            static BNM::Field<float> _field = GetClass().GetField(O("stateStartLiquidProgressLinear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetStateStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivationProgress(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("activationProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GorillaTag::ScienceExperimentManager_RisingLiquidState value) {
            static BNM::Field<::GorillaTag::ScienceExperimentManager_RisingLiquidState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateStartLiquidProgressLinear(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("stateStartLiquidProgressLinear"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
