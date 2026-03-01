#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct UnityWebRequestExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UnityWebRequestExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* GetAwaiter(::BNM::IL2CPP::Il2CppObject* asyncOp) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetAwaiter"), {"asyncOp"});
            return _m.Call(asyncOp);
        }
    };
}
