#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings_LuaEmit : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("LuaEmit");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static float GetCallCount() {
            static BNM::Field<float> _field = GetClass().GetField(O("callCount"));
            return _field.Get();
        }
        static float GetCallTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("callTime"));
            return _field.Get();
        }
        static void SetCallCount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("callCount"));
            _field.Set(value);
        }
        static void SetCallTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("callTime"));
            _field.Set(value);
        }
        static int Emit(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Emit"), {"L"});
            return _m.Call(L);
        }
    };
}
