#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ExperimentationModels {
    struct GetLatestScorecardResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ExperimentationModels", "GetLatestScorecardResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_ExperimentationModels::Scorecard* GetScorecard() {
            static BNM::Field<::PlayFab_ExperimentationModels::Scorecard*> _field = GetClass().GetField(O("Scorecard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetScorecard(::PlayFab_ExperimentationModels::Scorecard* value) {
            static BNM::Field<::PlayFab_ExperimentationModels::Scorecard*> _field = GetClass().GetField(O("Scorecard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
