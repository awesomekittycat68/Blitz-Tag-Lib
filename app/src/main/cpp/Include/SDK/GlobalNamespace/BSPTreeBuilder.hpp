#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoundsInt.hpp"
#include "MatrixBSPNode.hpp"
#include "MatrixZonePair.hpp"
#include "SerializableBSPNode.hpp"
#include "SerializableBSPNode_Axis.hpp"

namespace GlobalNamespace {
    struct BSPTreeBuilder : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BSPTreeBuilder");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MAX_ZONES_PER_LEAF = 10;
        static constexpr int MAX_DEPTH = 15;
        static constexpr int MAX_NODES = 650;
        static ::BNM::Structures::Unity::Vector3 GetTestPoint() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("testPoint"));
            return _field.Get();
        }
        static void SetTestPoint(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("testPoint"));
            _field.Set(value);
        }
        static int AddMatrixNodeWithCache(::GlobalNamespace::MatrixBSPNode matrixNode, ::BNM::Structures::Mono::List<::GlobalNamespace::MatrixBSPNode>* matrixNodeList, ::BNM::Structures::Mono::Dictionary<void*, int>* matrixNodeCache, int& matrixNodeCacheHits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AddMatrixNodeWithCache"), {"matrixNode", "matrixNodeList", "matrixNodeCache", "matrixNodeCacheHits"});
            return _m.Call(matrixNode, matrixNodeList, matrixNodeCache, &matrixNodeCacheHits);
        }
        static ::GlobalNamespace::SerializableBSPTree* BuildTree(::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneDef*>* zones) {
            static BNM::Method<::GlobalNamespace::SerializableBSPTree*> _m = GetClass().GetMethod(O("BuildTree"), {"zones"});
            return _m.Call(zones);
        }
        static int BuildTreeRecursive(::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneDef*>* zones, ::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* boxes, ::GlobalNamespace::BoundsInt bounds, int depth, ::GlobalNamespace::SerializableBSPNode_Axis axis, ::BNM::Structures::Mono::List<::GlobalNamespace::SerializableBSPNode>* nodeList, ::BNM::Structures::Mono::List<::GlobalNamespace::MatrixBSPNode>* matrixNodeList, ::BNM::Structures::Mono::Dictionary<void*, int>* matrixNodeCache, int& matrixNodeCacheHits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("BuildTreeRecursive"), {"zones", "boxes", "bounds", "depth", "axis", "nodeList", "matrixNodeList", "matrixNodeCache", "matrixNodeCacheHits"});
            return _m.Call(zones, boxes, bounds, depth, axis, nodeList, matrixNodeList, matrixNodeCache, &matrixNodeCacheHits);
        }
        static float CalculateIntersectionVolume(::GlobalNamespace::BoundsInt box, ::GlobalNamespace::BoundsInt region) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("CalculateIntersectionVolume"), {"box", "region"});
            return _m.Call(box, region);
        }
        static ::GlobalNamespace::BoundsInt CalculateWorldBounds(::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* boxes) {
            static BNM::Method<::GlobalNamespace::BoundsInt> _m = GetClass().GetMethod(O("CalculateWorldBounds"), {"boxes"});
            return _m.Call(boxes);
        }
        static void CleanupUnreferencedMatrices(::BNM::Structures::Mono::List<::GlobalNamespace::MatrixBSPNode>* matrixNodeList, ::BNM::Structures::Mono::List<::GlobalNamespace::MatrixZonePair>* matricesList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CleanupUnreferencedMatrices"), {"matrixNodeList", "matricesList"});
            _m.Call(matrixNodeList, matricesList);
        }
        static int CreateMatrixNodeTree(::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneDef*>* zones, ::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* boxes, ::BNM::Structures::Mono::List<::GlobalNamespace::MatrixBSPNode>* matrixNodeList, ::GlobalNamespace::BoundsInt bounds, ::BNM::Structures::Mono::Dictionary<void*, int>* matrixNodeCache, int& matrixNodeCacheHits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CreateMatrixNodeTree"), {"zones", "boxes", "matrixNodeList", "bounds", "matrixNodeCache", "matrixNodeCacheHits"});
            return _m.Call(zones, boxes, matrixNodeList, bounds, matrixNodeCache, &matrixNodeCacheHits);
        }
        static int CreateSequentialMatrixNodes(::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneDef*>* zones, ::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* boxes, ::BNM::Structures::Mono::List<::GlobalNamespace::MatrixBSPNode>* matrixNodeList, int boxIndex, ::BNM::Structures::Mono::Array<::GlobalNamespace::ZoneDef*>* allZones, ::BNM::Structures::Mono::Dictionary<void*, int>* matrixNodeCache, int& matrixNodeCacheHits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CreateSequentialMatrixNodes"), {"zones", "boxes", "matrixNodeList", "boxIndex", "allZones", "matrixNodeCache", "matrixNodeCacheHits"});
            return _m.Call(zones, boxes, matrixNodeList, boxIndex, allZones, matrixNodeCache, &matrixNodeCacheHits);
        }
        static int EvaluateBestSplit(::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* boxes, ::GlobalNamespace::BoundsInt bounds, ::GlobalNamespace::SerializableBSPNode_Axis axis, int splitValue) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("EvaluateBestSplit"), {"boxes", "bounds", "axis", "splitValue"});
            return _m.Call(boxes, bounds, axis, splitValue);
        }
        static int EvaluateSplit(::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* boxes, int splitValue, ::GlobalNamespace::SerializableBSPNode_Axis axis, ::GlobalNamespace::BoundsInt bounds) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("EvaluateSplit"), {"boxes", "splitValue", "axis", "bounds"});
            return _m.Call(boxes, splitValue, axis, bounds);
        }
        static ::GlobalNamespace::SerializableBSPNode_Axis FindBestAxis(::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* boxes, ::GlobalNamespace::BoundsInt bounds, ::GlobalNamespace::SerializableBSPNode_Axis preferredAxis, int& bestSplitValue) {
            static BNM::Method<::GlobalNamespace::SerializableBSPNode_Axis> _m = GetClass().GetMethod(O("FindBestAxis"), {"boxes", "bounds", "preferredAxis", "bestSplitValue"});
            return _m.Call(boxes, bounds, preferredAxis, &bestSplitValue);
        }
        static int FindOptimalSplit(::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* boxes, ::GlobalNamespace::BoundsInt bounds, ::GlobalNamespace::SerializableBSPNode_Axis axis, int& bestScore) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FindOptimalSplit"), {"boxes", "bounds", "axis", "bestScore"});
            return _m.Call(boxes, bounds, axis, &bestScore);
        }
        template <typename TP0 = void*>
        static int GetAxisValue(TP0 point, ::GlobalNamespace::SerializableBSPNode_Axis axis) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetAxisValue"), {"point", "axis"});
            return _m.Call(point, axis);
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* GetEffectiveBoxes(::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* boxes, ::GlobalNamespace::BoundsInt region) {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*> _m = GetClass().GetMethod(O("GetEffectiveBoxes"), {"boxes", "region"});
            return _m.Call(boxes, region);
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* GetEffectiveSpanningBoxes(::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* boxes, ::GlobalNamespace::BoundsInt leftBounds, ::GlobalNamespace::BoundsInt rightBounds) {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*> _m = GetClass().GetMethod(O("GetEffectiveSpanningBoxes"), {"boxes", "leftBounds", "rightBounds"});
            return _m.Call(boxes, leftBounds, rightBounds);
        }
        static int GetFallbackSplit(::GlobalNamespace::BoundsInt bounds, ::GlobalNamespace::SerializableBSPNode_Axis axis) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetFallbackSplit"), {"bounds", "axis"});
            return _m.Call(bounds, axis);
        }
        static ::GlobalNamespace::SerializableBSPNode_Axis GetNextAxis(::GlobalNamespace::SerializableBSPNode_Axis currentAxis) {
            static BNM::Method<::GlobalNamespace::SerializableBSPNode_Axis> _m = GetClass().GetMethod(O("GetNextAxis"), {"currentAxis"});
            return _m.Call(currentAxis);
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* SortBoxesByPriority(::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>* boxes) {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::BSPTreeBuilder_BoxMetadata*>*> _m = GetClass().GetMethod(O("SortBoxesByPriority"), {"boxes"});
            return _m.Call(boxes);
        }
    };
}
