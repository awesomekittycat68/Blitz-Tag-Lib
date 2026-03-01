#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaExtensions {
    struct GameObjectExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaExtensions", "GameObjectExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename T>
        static bool TryGetComponentInParent(::GameObject* obj, T& component) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetComponentInParent"), {"obj", "component"});
            return _m.Call(obj, &component);
        }
    };
}
