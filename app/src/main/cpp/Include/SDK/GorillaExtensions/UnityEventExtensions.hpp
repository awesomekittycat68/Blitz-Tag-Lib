#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaExtensions {
    struct UnityEventExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaExtensions", "UnityEventExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*>
        static void InvokeAll(TP0 events) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeAll"), {"events"});
            _m.Call(events);
        }
        template <typename TArg, typename TP0 = void*>
        static void InvokeAll(TP0 events, TArg arg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeAll"), {"events", "arg"});
            _m.Call(events, arg);
        }
    };
}
