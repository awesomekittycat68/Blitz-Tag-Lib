#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace MTAssets_EasyMeshCombiner {
    struct MTAssetsMathematics : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("MTAssets.EasyMeshCombiner", "MTAssetsMathematics");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Unity::Vector3 GetHalfPositionBetweenTwoPoints(::BNM::Structures::Unity::Vector3 pointA, ::BNM::Structures::Unity::Vector3 pointB) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetHalfPositionBetweenTwoPoints"), {"pointA", "pointB"});
            return _m.Call(pointA, pointB);
        }
        template <typename T>
        static ::BNM::Structures::Mono::List<T>* RandomizeThisList(::BNM::Structures::Mono::List<T>* list) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("RandomizeThisList"), {"list"});
            return _m.Call(list);
        }
    };
}
