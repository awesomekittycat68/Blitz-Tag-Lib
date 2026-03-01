#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport_Internal {
    struct Token : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport.Internal", "Token");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GetSessionToken(::Viveport_Internal::StatusCallback2* GetSessionTokenCallback) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetSessionToken"), {"GetSessionTokenCallback"});
            return _m.Call(GetSessionTokenCallback);
        }
        static int IsReady(::Viveport_Internal::StatusCallback* IsReadyCallback) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("IsReady"), {"IsReadyCallback"});
            return _m.Call(IsReadyCallback);
        }
    };
}
