#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct HitChecker : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HitChecker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP1 = void*>
        static void CheckHandHit(int& collidersHitCount, TP1 layerMask, float sphereRadius, ::BNM::Structures::Unity::RaycastHit& nullHit, ::BNM::Structures::Unity::RaycastHit& raycastHits, ::BNM::IL2CPP::Il2CppObject*& raycastHitList, ::BNM::Structures::Unity::Vector3& spherecastSweep, ::GlobalNamespace::GorillaTriggerColliderHandIndicator*& handIndicator) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckHandHit"), {"collidersHitCount", "layerMask", "sphereRadius", "nullHit", "raycastHits", "raycastHitList", "spherecastSweep", "handIndicator"});
            _m.Call(&collidersHitCount, layerMask, sphereRadius, &nullHit, &raycastHits, &raycastHitList, &spherecastSweep, &handIndicator);
        }
        static bool CheckHandIn(bool& anyHit, ::Collider*& colliderHit, float sphereRadius, int layerMask, ::GlobalNamespace::GorillaTriggerColliderHandIndicator*& handIndicator, ::BNM::IL2CPP::Il2CppObject*& collidersToBeIn) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckHandIn"), {"anyHit", "colliderHit", "sphereRadius", "layerMask", "handIndicator", "collidersToBeIn"});
            return _m.Call(&anyHit, &colliderHit, sphereRadius, layerMask, &handIndicator, &collidersToBeIn);
        }
        static int RayCastHitCompare(::BNM::Structures::Unity::RaycastHit a, ::BNM::Structures::Unity::RaycastHit b) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("RayCastHitCompare"), {"a", "b"});
            return _m.Call(a, b);
        }
    };
}
