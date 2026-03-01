#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_CompileOptions.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Luau : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Luau");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int LUA_GLOBALSINDEX = -10002;
        static constexpr int LUA_REGISTRYINDEX = -10000;
        static void lua_call(::GlobalNamespace::lua_State* L, int nargs, int nresults) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_call"), {"L", "nargs", "nresults"});
            _m.Call(L, nargs, nresults);
        }
        template <typename T>
        static bool lua_class_check(::GlobalNamespace::lua_State* L, int idx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("lua_class_check"), {"L", "idx"});
            return _m.Call(L, idx);
        }
        template <typename T>
        static T* lua_class_get(::GlobalNamespace::lua_State* L, int idx) {
            static BNM::Method<T*> _m = GetClass().GetMethod(O("lua_class_get"), {"L", "idx"});
            return _m.Call(L, idx);
        }
        template <typename T, typename TP2 = void*>
        static T* lua_class_get(::GlobalNamespace::lua_State* L, int idx, TP2 name) {
            static BNM::Method<T*> _m = GetClass().GetMethod(O("lua_class_get"), {"L", "idx", "name"});
            return _m.Call(L, idx, name);
        }
        template <typename TP2 = void*>
        static uint8_t* lua_class_get_1(::GlobalNamespace::lua_State* L, int idx, TP2 name) {
            static BNM::Method<uint8_t*> _m = GetClass().GetMethod(O("lua_class_get"), {"L", "idx", "name"});
            return _m.Call(L, idx, name);
        }
        template <typename T>
        static T* lua_class_push(::GlobalNamespace::lua_State* L) {
            static BNM::Method<T*> _m = GetClass().GetMethod(O("lua_class_push"), {"L"});
            return _m.Call(L);
        }
        template <typename T, typename TP1 = void*>
        static T* lua_class_push(::GlobalNamespace::lua_State* L, TP1 name) {
            static BNM::Method<T*> _m = GetClass().GetMethod(O("lua_class_push"), {"L", "name"});
            return _m.Call(L, name);
        }
        template <typename TP1 = void*>
        static void lua_class_push(::GlobalNamespace::lua_State* L, TP1 name, ::BNM::Types::nint ptr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_class_push"), {"L", "name", "ptr"});
            _m.Call(L, name, ptr);
        }
        static void lua_close(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_close"), {"L"});
            _m.Call(L);
        }
        static void lua_createtable(::GlobalNamespace::lua_State* L, int narr, int nrec) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_createtable"), {"L", "narr", "nrec"});
            _m.Call(L, narr, nrec);
        }
        static uint8_t* lua_debugtrace(::GlobalNamespace::lua_State* L) {
            static BNM::Method<uint8_t*> _m = GetClass().GetMethod(O("lua_debugtrace"), {"L"});
            return _m.Call(L);
        }
        static int lua_error(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_error"), {"L"});
            return _m.Call(L);
        }
        static int lua_gc(::GlobalNamespace::lua_State* L, int what, int data) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_gc"), {"L", "what", "data"});
            return _m.Call(L, what, data);
        }
        static int lua_getfield(::GlobalNamespace::lua_State* L, int idx, ::BNM::Structures::Mono::String* k) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_getfield"), {"L", "idx", "k"});
            return _m.Call(L, idx, k);
        }
        static int lua_getfield(::GlobalNamespace::lua_State* L, int idx, uint8_t* k) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_getfield"), {"L", "idx", "k"});
            return _m.Call(L, idx, k);
        }
        static void lua_getglobal(::GlobalNamespace::lua_State* L, ::BNM::Structures::Mono::String* n) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_getglobal"), {"L", "n"});
            _m.Call(L, n);
        }
        static int lua_getmetatable(::GlobalNamespace::lua_State* L, int objindex) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_getmetatable"), {"L", "objindex"});
            return _m.Call(L, objindex);
        }
        static void lua_getref(::GlobalNamespace::lua_State* L, int rid) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_getref"), {"L", "rid"});
            _m.Call(L, rid);
        }
        static int lua_gettop(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_gettop"), {"L"});
            return _m.Call(L);
        }
        static void lua_getuserdatametatable(::GlobalNamespace::lua_State* L, int tag) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_getuserdatametatable"), {"L", "tag"});
            _m.Call(L, tag);
        }
        static int lua_isstring(::GlobalNamespace::lua_State* L, int index) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_isstring"), {"L", "index"});
            return _m.Call(L, index);
        }
        static ::BNM::Types::nint lua_light_ptr(::GlobalNamespace::lua_State* L, int idx) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("lua_light_ptr"), {"L", "idx"});
            return _m.Call(L, idx);
        }
        static uint8_t* lua_namecallatom(::GlobalNamespace::lua_State* L, int* atom) {
            static BNM::Method<uint8_t*> _m = GetClass().GetMethod(O("lua_namecallatom"), {"L", "atom"});
            return _m.Call(L, atom);
        }
        static void* lua_newuserdata(::GlobalNamespace::lua_State* L, int size) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("lua_newuserdata"), {"L", "size"});
            return _m.Call(L, size);
        }
        static void* lua_newuserdatatagged(::GlobalNamespace::lua_State* L, int sz, int tag) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("lua_newuserdatatagged"), {"L", "sz", "tag"});
            return _m.Call(L, sz, tag);
        }
        static int lua_next(::GlobalNamespace::lua_State* L, int index) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_next"), {"L", "index"});
            return _m.Call(L, index);
        }
        static int lua_objlen(::GlobalNamespace::lua_State* L, int index) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_objlen"), {"L", "index"});
            return _m.Call(L, index);
        }
        static int lua_pcall(::GlobalNamespace::lua_State* L, int nargs, int nresults, int fn) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_pcall"), {"L", "nargs", "nresults", "fn"});
            return _m.Call(L, nargs, nresults, fn);
        }
        static void lua_pop(::GlobalNamespace::lua_State* L, int n) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_pop"), {"L", "n"});
            _m.Call(L, n);
        }
        static int lua_print(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_print"), {"L"});
            return _m.Call(L);
        }
        static void lua_pushboolean(::GlobalNamespace::lua_State* L, int b) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_pushboolean"), {"L", "b"});
            _m.Call(L, b);
        }
        static void lua_pushcclosurek(::GlobalNamespace::lua_State* L, ::GlobalNamespace::lua_CFunction* fn, ::BNM::Structures::Mono::String* debugname, int nup, ::GlobalNamespace::lua_Continuation* cont) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_pushcclosurek"), {"L", "fn", "debugname", "nup", "cont"});
            _m.Call(L, fn, debugname, nup, cont);
        }
        template <typename TP1 = void*>
        static void lua_pushcclosurek(::GlobalNamespace::lua_State* L, TP1 fn, ::BNM::Structures::Mono::String* debugname, int nup, ::GlobalNamespace::lua_Continuation* cont) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_pushcclosurek"), {"L", "fn", "debugname", "nup", "cont"});
            _m.Call(L, fn, debugname, nup, cont);
        }
        template <typename TP1 = void*>
        static void lua_pushcclosurek(::GlobalNamespace::lua_State* L, TP1 fn, uint8_t* debugname, int nup, int* cont) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_pushcclosurek"), {"L", "fn", "debugname", "nup", "cont"});
            _m.Call(L, fn, debugname, nup, cont);
        }
        template <typename TP1 = void*>
        static void lua_pushcfunction(::GlobalNamespace::lua_State* L, TP1 fn, ::BNM::Structures::Mono::String* debugname) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_pushcfunction"), {"L", "fn", "debugname"});
            _m.Call(L, fn, debugname);
        }
        static void lua_pushcfunction(::GlobalNamespace::lua_State* L, ::GlobalNamespace::lua_CFunction* fn, ::BNM::Structures::Mono::String* debugname) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_pushcfunction"), {"L", "fn", "debugname"});
            _m.Call(L, fn, debugname);
        }
        template <typename TP1 = void*>
        static void lua_pushlightuserdatatagged(::GlobalNamespace::lua_State* L, TP1 p, int tag) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_pushlightuserdatatagged"), {"L", "p", "tag"});
            _m.Call(L, p, tag);
        }
        static void lua_pushnil(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_pushnil"), {"L"});
            _m.Call(L);
        }
        static void lua_pushnumber(::GlobalNamespace::lua_State* L, double n) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_pushnumber"), {"L", "n"});
            _m.Call(L, n);
        }
        static int lua_pushstring(::GlobalNamespace::lua_State* L, ::BNM::Structures::Mono::String* s) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_pushstring"), {"L", "s"});
            return _m.Call(L, s);
        }
        static int lua_pushstring(::GlobalNamespace::lua_State* L, uint8_t* s) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_pushstring"), {"L", "s"});
            return _m.Call(L, s);
        }
        static void lua_pushvalue(::GlobalNamespace::lua_State* L, int idx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_pushvalue"), {"L", "idx"});
            _m.Call(L, idx);
        }
        static int lua_rawequal(::GlobalNamespace::lua_State* L, int a, int b) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_rawequal"), {"L", "a", "b"});
            return _m.Call(L, a, b);
        }
        static void lua_rawget(::GlobalNamespace::lua_State* L, int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_rawget"), {"L", "index"});
            _m.Call(L, index);
        }
        static void lua_rawgeti(::GlobalNamespace::lua_State* L, int index, int n) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_rawgeti"), {"L", "index", "n"});
            _m.Call(L, index, n);
        }
        static void lua_rawset(::GlobalNamespace::lua_State* L, int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_rawset"), {"L", "index"});
            _m.Call(L, index);
        }
        static void lua_rawseti(::GlobalNamespace::lua_State* L, int idx, int n) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_rawseti"), {"L", "idx", "n"});
            _m.Call(L, idx, n);
        }
        static int lua_ref(::GlobalNamespace::lua_State* L, int idx) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_ref"), {"L", "idx"});
            return _m.Call(L, idx);
        }
        static void lua_register(::GlobalNamespace::lua_State* L, ::GlobalNamespace::lua_CFunction* f, ::BNM::Structures::Mono::String* n) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_register"), {"L", "f", "n"});
            _m.Call(L, f, n);
        }
        static void lua_remove(::GlobalNamespace::lua_State* L, int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_remove"), {"L", "index"});
            _m.Call(L, index);
        }
        static int lua_resume(::GlobalNamespace::lua_State* L, ::GlobalNamespace::lua_State* from, int nargs) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_resume"), {"L", "from", "nargs"});
            return _m.Call(L, from, nargs);
        }
        static void lua_setfield(::GlobalNamespace::lua_State* L, int index, ::BNM::Structures::Mono::String* k) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_setfield"), {"L", "index", "k"});
            _m.Call(L, index, k);
        }
        static void lua_setfield(::GlobalNamespace::lua_State* L, int index, uint8_t* k) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_setfield"), {"L", "index", "k"});
            _m.Call(L, index, k);
        }
        static void lua_setglobal(::GlobalNamespace::lua_State* L, ::BNM::Structures::Mono::String* s) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_setglobal"), {"L", "s"});
            _m.Call(L, s);
        }
        static int lua_setmetatable(::GlobalNamespace::lua_State* L, int objindex) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_setmetatable"), {"L", "objindex"});
            return _m.Call(L, objindex);
        }
        static void lua_setreadonly(::GlobalNamespace::lua_State* L, int idx, int enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_setreadonly"), {"L", "idx", "enabled"});
            _m.Call(L, idx, enabled);
        }
        static void lua_settop(::GlobalNamespace::lua_State* L, int idx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_settop"), {"L", "idx"});
            _m.Call(L, idx);
        }
        static void lua_setuserdatametatable(::GlobalNamespace::lua_State* L, int tag, int idx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_setuserdatametatable"), {"L", "tag", "idx"});
            _m.Call(L, tag, idx);
        }
        static int lua_status(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_status"), {"L"});
            return _m.Call(L);
        }
        static int lua_toboolean(::GlobalNamespace::lua_State* L, int index) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_toboolean"), {"L", "index"});
            return _m.Call(L, index);
        }
        static int8_t* lua_tolstring(::GlobalNamespace::lua_State* L, int idx, int* len) {
            static BNM::Method<int8_t*> _m = GetClass().GetMethod(O("lua_tolstring"), {"L", "idx", "len"});
            return _m.Call(L, idx, len);
        }
        static double lua_tonumber(::GlobalNamespace::lua_State* L, int index) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("lua_tonumber"), {"L", "index"});
            return _m.Call(L, index);
        }
        static double lua_tonumberx(::GlobalNamespace::lua_State* L, int index, int* isnum) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("lua_tonumberx"), {"L", "index", "isnum"});
            return _m.Call(L, index, isnum);
        }
        static int8_t* lua_tostring(::GlobalNamespace::lua_State* L, int idx) {
            static BNM::Method<int8_t*> _m = GetClass().GetMethod(O("lua_tostring"), {"L", "idx"});
            return _m.Call(L, idx);
        }
        static void* lua_touserdata(::GlobalNamespace::lua_State* L, int index) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("lua_touserdata"), {"L", "index"});
            return _m.Call(L, index);
        }
        static void* lua_touserdatatagged(::GlobalNamespace::lua_State* L, int idx, int tag) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("lua_touserdatatagged"), {"L", "idx", "tag"});
            return _m.Call(L, idx, tag);
        }
        static int lua_type(::GlobalNamespace::lua_State* L, int index) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("lua_type"), {"L", "index"});
            return _m.Call(L, index);
        }
        static void lua_unref(::GlobalNamespace::lua_State* L, int rid) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("lua_unref"), {"L", "rid"});
            _m.Call(L, rid);
        }
        static uint8_t* luaL_checklstring(::GlobalNamespace::lua_State* L, int numArg, int* l) {
            static BNM::Method<uint8_t*> _m = GetClass().GetMethod(O("luaL_checklstring"), {"L", "numArg", "l"});
            return _m.Call(L, numArg, l);
        }
        static double luaL_checknumber(::GlobalNamespace::lua_State* L, int numArg) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("luaL_checknumber"), {"L", "numArg"});
            return _m.Call(L, numArg);
        }
        static uint8_t* luaL_checkstring(::GlobalNamespace::lua_State* L, int n) {
            static BNM::Method<uint8_t*> _m = GetClass().GetMethod(O("luaL_checkstring"), {"L", "n"});
            return _m.Call(L, n);
        }
        static void* luaL_checkudata(::GlobalNamespace::lua_State* L, int arg, ::BNM::Structures::Mono::String* tname) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("luaL_checkudata"), {"L", "arg", "tname"});
            return _m.Call(L, arg, tname);
        }
        static void* luaL_checkudata(::GlobalNamespace::lua_State* L, int arg, uint8_t* tname) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("luaL_checkudata"), {"L", "arg", "tname"});
            return _m.Call(L, arg, tname);
        }
        static void luaL_errorL(::GlobalNamespace::lua_State* L, int8_t* fmt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("luaL_errorL"), {"L", "fmt"});
            _m.Call(L, fmt);
        }
        static void luaL_errorL(::GlobalNamespace::lua_State* L, ::BNM::Structures::Mono::String* fmt, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* a) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("luaL_errorL"), {"L", "fmt", "a"});
            _m.Call(L, fmt, a);
        }
        static int luaL_getmetafield(::GlobalNamespace::lua_State* L, int idx, uint8_t* k) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("luaL_getmetafield"), {"L", "idx", "k"});
            return _m.Call(L, idx, k);
        }
        static int luaL_getmetafield(::GlobalNamespace::lua_State* L, int idx, ::BNM::Structures::Mono::String* k) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("luaL_getmetafield"), {"L", "idx", "k"});
            return _m.Call(L, idx, k);
        }
        static void luaL_getmetatable(::GlobalNamespace::lua_State* L, ::BNM::Structures::Mono::String* n) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("luaL_getmetatable"), {"L", "n"});
            _m.Call(L, n);
        }
        static void luaL_getmetatable(::GlobalNamespace::lua_State* L, uint8_t* n) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("luaL_getmetatable"), {"L", "n"});
            _m.Call(L, n);
        }
        static int luaL_newmetatable(::GlobalNamespace::lua_State* L, ::BNM::Structures::Mono::String* tname) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("luaL_newmetatable"), {"L", "tname"});
            return _m.Call(L, tname);
        }
        static ::GlobalNamespace::lua_State* luaL_newstate() {
            static BNM::Method<::GlobalNamespace::lua_State*> _m = GetClass().GetMethod(O("luaL_newstate"));
            return _m.Call();
        }
        static void luaL_openlibs(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("luaL_openlibs"), {"L"});
            _m.Call(L);
        }
        static double luaL_optnumber(::GlobalNamespace::lua_State* L, int narg, double d) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("luaL_optnumber"), {"L", "narg", "d"});
            return _m.Call(L, narg, d);
        }
        static int8_t* luau_compile(::BNM::Structures::Mono::String* source, ::BNM::Types::nuint size, ::GlobalNamespace::lua_CompileOptions* options, ::BNM::Types::nuint* outsize) {
            static BNM::Method<int8_t*> _m = GetClass().GetMethod(O("luau_compile"), {"source", "size", "options", "outsize"});
            return _m.Call(source, size, options, outsize);
        }
        static int luau_load(::GlobalNamespace::lua_State* L, ::BNM::Structures::Mono::String* chunkname, int8_t* data, ::BNM::Types::nuint size, int env) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("luau_load"), {"L", "chunkname", "data", "size", "env"});
            return _m.Call(L, chunkname, data, size, env);
        }
    };
}
