#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "UnityLayer.hpp"

namespace GlobalNamespace {
    struct UnityLayerExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UnityLayerExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static bool IsOnLayer(::GameObject* obj, ::GlobalNamespace::UnityLayer layer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsOnLayer"), {"obj", "layer"});
            return _m.Call(obj, layer);
        }
        static void SetLayer(::GameObject* obj, ::GlobalNamespace::UnityLayer layer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLayer"), {"obj", "layer"});
            _m.Call(obj, layer);
        }
        static void SetLayerRecursively(::GameObject* obj, ::GlobalNamespace::UnityLayer layer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLayerRecursively"), {"obj", "layer"});
            _m.Call(obj, layer);
        }
        static int ToLayerIndex(::GlobalNamespace::UnityLayer self) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ToLayerIndex"), {"self"});
            return _m.Call(self);
        }
        static int ToLayerMask(::GlobalNamespace::UnityLayer self) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ToLayerMask"), {"self"});
            return _m.Call(self);
        }
    };
}
