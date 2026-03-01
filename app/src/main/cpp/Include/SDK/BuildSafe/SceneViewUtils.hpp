#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BuildSafe {
    struct SceneViewUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BuildSafe", "SceneViewUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BuildSafe::SceneViewUtils_FuncRaycastWorld* GetRaycastWorld() {
            static BNM::Field<::BuildSafe::SceneViewUtils_FuncRaycastWorld*> _field = GetClass().GetField(O("RaycastWorld"));
            return _field.Get();
        }
        static bool RaycastWorldSafe(::BNM::Structures::Unity::Vector2 screenPos, ::BNM::Structures::Unity::RaycastHit& hit) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RaycastWorldSafe"), {"screenPos", "hit"});
            return _m.Call(screenPos, &hit);
        }
    };
}
