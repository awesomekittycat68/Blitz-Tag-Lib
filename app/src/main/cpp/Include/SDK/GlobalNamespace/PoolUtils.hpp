#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PoolUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PoolUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GameObjHashCode(::GameObject* obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GameObjHashCode"), {"obj"});
            return _m.Call(obj);
        }
    };
}
