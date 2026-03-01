#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ExperimentationModels {
    struct GetExperimentsResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ExperimentationModels", "GetExperimentsResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ExperimentationModels::Experiment*>* GetExperiments() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ExperimentationModels::Experiment*>*> _field = GetClass().GetField(O("Experiments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetExperiments(::BNM::Structures::Mono::List<::PlayFab_ExperimentationModels::Experiment*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ExperimentationModels::Experiment*>*> _field = GetClass().GetField(O("Experiments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
