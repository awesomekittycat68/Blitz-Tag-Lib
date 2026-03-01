#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings_QuatFunctions_Eq_00004908$BurstDirectCall : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("QuatFunctions").GetInnerClass("Eq_00004908$BurstDirectCall");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Types::nint GetPointer() {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("Pointer"));
            return _field.Get();
        }
        static void SetPointer(::BNM::Types::nint value) {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("Pointer"));
            _field.Set(value);
        }
        static ::BNM::Types::nint GetFunctionPointer() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("GetFunctionPointer"));
            return _m.Call();
        }
        static void GetFunctionPointerDiscard(::BNM::Types::nint& ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetFunctionPointerDiscard"), {""});
            _m.Call(&);
        }
        static int Invoke(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Invoke"), {"L"});
            return _m.Call(L);
        }
    };
}
