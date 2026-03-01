#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RPCNetworkBase : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RPCNetworkBase");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*>
        void SetClassTarget(TP0 target, ::GlobalNamespace::GorillaWrappedSerializer* netHandler) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetClassTarget"), {"target", "netHandler"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target, netHandler);
        }
    };
}
