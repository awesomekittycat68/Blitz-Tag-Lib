#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIResource_ResourceCategoryCost.hpp"
#include "SIResource_ResourceCost.hpp"
#include "SIResource_ResourceType.hpp"

namespace GlobalNamespace {
    struct SIResourceHelper : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIResourceHelper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void AddResourceCost(::BNM::Structures::Mono::List<::GlobalNamespace::SIResource_ResourceCost>* baseCost, ::GlobalNamespace::SIResource_ResourceCost additiveCost) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddResourceCost"), {"baseCost", "additiveCost"});
            _m.Call(baseCost, additiveCost);
        }
        template <typename TP1 = void*>
        static void AddResourceCost(::BNM::Structures::Mono::List<::GlobalNamespace::SIResource_ResourceCost>* baseCost, TP1 additiveCost) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddResourceCost"), {"baseCost", "additiveCost"});
            _m.Call(baseCost, additiveCost);
        }
        template <typename TP0 = void*>
        static void AddResourceCost(TP0 baseCost, ::GlobalNamespace::SIResource_ResourceCategoryCost additiveCost) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddResourceCost"), {"baseCost", "additiveCost"});
            _m.Call(baseCost, additiveCost);
        }
        template <typename TP0 = void*>
        static int GetAmount(TP0 costs, ::GlobalNamespace::SIResource_ResourceType resourceType) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetAmount"), {"costs", "resourceType"});
            return _m.Call(costs, resourceType);
        }
        template <typename TP0 = void*>
        static ::GlobalNamespace::SIResource_ResourceCategoryCost GetCategoryCosts(TP0 costs) {
            static BNM::Method<::GlobalNamespace::SIResource_ResourceCategoryCost> _m = GetClass().GetMethod(O("GetCategoryCosts"), {"costs"});
            return _m.Call(costs);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        static ::BNM::Structures::Mono::List<::GlobalNamespace::SIResource_ResourceCost>* GetMax(TP0 baseCost, TP1 additiveCosts) {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::SIResource_ResourceCost>*> _m = GetClass().GetMethod(O("GetMax"), {"baseCost", "additiveCosts"});
            return _m.Call(baseCost, additiveCosts);
        }
        template <typename TP0 = void*>
        static int GetMiscCost(TP0 costs) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetMiscCost"), {"costs"});
            return _m.Call(costs);
        }
        template <typename TP0 = void*>
        static int GetTechPointCost(TP0 costs) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTechPointCost"), {"costs"});
            return _m.Call(costs);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        static ::BNM::Structures::Mono::List<::GlobalNamespace::SIResource_ResourceCost>* GetTotalResourceCost(TP0 baseCost, TP1 additiveCosts) {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::SIResource_ResourceCost>*> _m = GetClass().GetMethod(O("GetTotalResourceCost"), {"baseCost", "additiveCosts"});
            return _m.Call(baseCost, additiveCosts);
        }
        template <typename TP0 = void*>
        static bool IsInOrder(TP0 cost) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInOrder"), {"cost"});
            return _m.Call(cost);
        }
        template <typename TP0 = void*>
        static bool IsValid(TP0 cost) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValid"), {"cost"});
            return _m.Call(cost);
        }
        template <typename TP0 = void*>
        static bool IsValid_AllowZero(TP0 cost) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValid_AllowZero"), {"cost"});
            return _m.Call(cost);
        }
        static void SetAmount(::BNM::Structures::Mono::List<::GlobalNamespace::SIResource_ResourceCost>* costs, ::GlobalNamespace::SIResource_ResourceType resourceType, int amount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAmount"), {"costs", "resourceType", "amount"});
            _m.Call(costs, resourceType, amount);
        }
        template <typename TP0 = void*>
        static void SetMiscCost(TP0 baseCost, int desiredCost) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMiscCost"), {"baseCost", "desiredCost"});
            _m.Call(baseCost, desiredCost);
        }
        template <typename TP0 = void*>
        static void SetResourceCost(TP0 costs, ::GlobalNamespace::SIResource_ResourceCategoryCost desiredCosts) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetResourceCost"), {"costs", "desiredCosts"});
            _m.Call(costs, desiredCosts);
        }
        template <typename TP0 = void*>
        static void SetTechPointCost(TP0 baseCost, int desiredCost) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTechPointCost"), {"baseCost", "desiredCost"});
            _m.Call(baseCost, desiredCost);
        }
    };
}
