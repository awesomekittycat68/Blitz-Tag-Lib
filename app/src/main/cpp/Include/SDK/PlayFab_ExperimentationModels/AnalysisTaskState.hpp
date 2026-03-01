#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_ExperimentationModels {
    enum class AnalysisTaskState : int {
        Waiting = 0,
        ReadyForSubmission = 1,
        SubmittingToPipeline = 2,
        Running = 3,
        Completed = 4,
        Failed = 5,
        Canceled = 6,
    };
}
