#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ContextLog : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ContextLog");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename T>
        static ::BNM::Structures::Mono::String* GetPrefix(T& ctx) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPrefix"), {"ctx"});
            return _m.Call(&ctx);
        }
        template <typename T0, typename T1>
        static void Log(T0 ctx, T1 arg1) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Log"), {"ctx", "arg1"});
            _m.Call(ctx, arg1);
        }
        template <typename T0, typename T1>
        static void LogCall(T0 ctx, T1 arg1, ::BNM::Structures::Mono::String* call) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogCall"), {"ctx", "arg1", "call"});
            _m.Call(ctx, arg1, call);
        }
    };
}
