#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoundsInt.hpp"

namespace GlobalNamespace {
    struct BoxColliderUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BoxColliderUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static bool DoesBoxContainBox(::BoxCollider* containerBox, ::BoxCollider* containedBox) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesBoxContainBox"), {"containerBox", "containedBox"});
            return _m.Call(containerBox, containedBox);
        }
        static bool DoesBoxContainPoint(::BoxCollider* boxCollider, ::BNM::Structures::Unity::Vector3 worldPoint) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesBoxContainPoint"), {"boxCollider", "worldPoint"});
            return _m.Call(boxCollider, worldPoint);
        }
        static bool DoesBoxContainRegion(::BoxCollider* box, ::GlobalNamespace::BoundsInt regionBounds) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesBoxContainRegion"), {"box", "regionBounds"});
            return _m.Call(box, regionBounds);
        }
        static ::BNM::Structures::Unity::Matrix4x4 GetWorldToNormalizedBoxMatrix(::BoxCollider* boxCollider) {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("GetWorldToNormalizedBoxMatrix"), {"boxCollider"});
            return _m.Call(boxCollider);
        }
    };
}
