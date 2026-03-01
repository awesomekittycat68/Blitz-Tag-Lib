#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Dev_Benchmarks {
    enum class VisualBenchmark_EState : int {
        Setup = 0,
        WaitingBeforeCollectingGarbage = 1,
        WaitingBeforeRecordingStats = 2,
        TearDown = 3,
    };
}
