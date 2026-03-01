#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class Luau_gc_status : int {
        LUA_GCSTOP = 0,
        LUA_GCRESTART = 1,
        LUA_GCCOLLECT = 2,
        LUA_GCCOUNT = 3,
        LUA_GCISRUNNING = 4,
        LUA_GCSTEP = 5,
        LUA_GCSETGOAL = 6,
        LUA_GCSETSTEPMUL = 7,
        LUA_GCSETSTEPSIZE = 8,
    };
}
