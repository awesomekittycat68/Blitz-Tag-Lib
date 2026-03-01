#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct AbilityHelperFunctions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AbilityHelperFunctions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GetNavMeshWalkableArea() {
            static BNM::Field<int> _field = GetClass().GetField(O("navMeshWalkableArea"));
            return _field.Get();
        }
        static void SetNavMeshWalkableArea(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("navMeshWalkableArea"));
            _field.Set(value);
        }
        static float EaseOutPower(float t, float power) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("EaseOutPower"), {"t", "power"});
            return _m.Call(t, power);
        }
        template <typename TP2 = void*>
        static void* GetLocationToInvestigate(::BNM::Structures::Unity::Vector3 listenerLocation, float hearingRadius, TP2 currentInvestigationLocation) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetLocationToInvestigate"), {"listenerLocation", "hearingRadius", "currentInvestigationLocation"});
            return _m.Call(listenerLocation, hearingRadius, currentInvestigationLocation);
        }
        static int GetNavMeshWalkableArea_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNavMeshWalkableArea"));
            return _m.Call();
        }
        static int RandomRangeUnique(int minInclusive, int maxExclusive, int lastValue) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("RandomRangeUnique"), {"minInclusive", "maxExclusive", "lastValue"});
            return _m.Call(minInclusive, maxExclusive, lastValue);
        }
    };
}
