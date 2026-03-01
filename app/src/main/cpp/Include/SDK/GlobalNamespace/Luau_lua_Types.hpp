#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    enum class Luau_lua_Types : int {
        LUA_TNIL = 0,
        LUA_TBOOLEAN = 1,
        LUA_TLIGHTUSERDATA = 2,
        LUA_TNUMBER = 3,
        LUA_TVECTOR = 4,
        LUA_TSTRING = 5,
        LUA_TTABLE = 6,
        LUA_TFUNCTION = 7,
        LUA_TUSERDATA = 8,
        LUA_TTHREAD = 9,
        LUA_TBUFFER = 10,
        LUA_TPROTO = 11,
        LUA_TUPVAL = 12,
        LUA_TDEADKEY = 13,
        LUA_T_COUNT = 11,
    };
}
