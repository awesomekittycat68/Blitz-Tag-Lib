#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ExperimentationModels {
    struct GetTreatmentAssignmentResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ExperimentationModels", "GetTreatmentAssignmentResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_ExperimentationModels::TreatmentAssignment* GetTreatmentAssignment() {
            static BNM::Field<::PlayFab_ExperimentationModels::TreatmentAssignment*> _field = GetClass().GetField(O("TreatmentAssignment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTreatmentAssignment(::PlayFab_ExperimentationModels::TreatmentAssignment* value) {
            static BNM::Field<::PlayFab_ExperimentationModels::TreatmentAssignment*> _field = GetClass().GetField(O("TreatmentAssignment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
