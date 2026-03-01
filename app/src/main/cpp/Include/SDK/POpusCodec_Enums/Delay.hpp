#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace POpusCodec_Enums {
    enum class Delay : int {
        Delay2dot5ms = 5,
        Delay5ms = 10,
        Delay10ms = 20,
        Delay20ms = 40,
        Delay40ms = 80,
        Delay60ms = 120,
    };
}
