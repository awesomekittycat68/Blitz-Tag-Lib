#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class GorillaReportButton_MetaReportReason : int {
        HateSpeech = 0,
        Cheating = 1,
        Toxicity = 2,
        Bullying = 3,
        Doxing = 4,
        Impersonation = 5,
        Submit = 6,
        Cancel = 7,
    };
}
