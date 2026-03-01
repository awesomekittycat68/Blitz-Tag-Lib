#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTExt_ParityOptions.hpp"

namespace GorillaExtensions {
    struct GTExt : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaExtensions", "GTExt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* GetAllStringsUsed() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("allStringsUsed"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::Transform*>*>* GetCaseInsenseInner() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::Transform*>*>*> _field = GetClass().GetField(O("caseInsenseInner"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::Transform*>*>* GetCaseSenseInner() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::Transform*>*>*> _field = GetClass().GetField(O("caseSenseInner"));
            return _field.Get();
        }
        static void SetAllStringsUsed(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("allStringsUsed"));
            _field.Set(value);
        }
        static void SetCaseInsenseInner(::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::Transform*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::Transform*>*>*> _field = GetClass().GetField(O("caseInsenseInner"));
            _field.Set(value);
        }
        static void SetCaseSenseInner(::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::Transform*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::Transform*>*>*> _field = GetClass().GetField(O("caseSenseInner"));
            _field.Set(value);
        }
        template <typename T>
        static void _FindComponentsByExactPath(::Transform* current, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* splitPath, int index, ::BNM::Structures::Mono::List<T>* components) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_FindComponentsByExactPath"), {"current", "splitPath", "index", "components"});
            _m.Call(current, splitPath, index, components);
        }
        template <typename T>
        static void _FindComponentsByPath(::Transform* current, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* pathPartsRegex, ::BNM::Structures::Mono::List<T>* components, bool caseSensitive) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_FindComponentsByPath"), {"current", "pathPartsRegex", "components", "caseSensitive"});
            _m.Call(current, pathPartsRegex, components, caseSensitive);
        }
        template <typename T, typename TStop1, typename TStop2, typename TStop3>
        static void _GetComponentsInChildrenUntil_OutExclusions_GetRecursive(::Transform* currentTransform, ::BNM::Structures::Mono::List<T>* included, ::BNM::Structures::Mono::List<::Component*>* excluded, bool includeInactive) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_GetComponentsInChildrenUntil_OutExclusions_GetRecursive"), {"currentTransform", "included", "excluded", "includeInactive"});
            _m.Call(currentTransform, included, excluded, includeInactive);
        }
        static ::BNM::Structures::Mono::String* _GlobPathPartToRegex(::BNM::Structures::Mono::String* pattern) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("_GlobPathPartToRegex"), {"pattern"});
            return _m.Call(pattern);
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* _GlobPathToPathPartsRegex(::BNM::Structures::Mono::String* path) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("_GlobPathToPathPartsRegex"), {"path"});
            return _m.Call(path);
        }
        template <typename TStop1, typename TStop2, typename TStop3>
        static bool _HasAnyComponents(::Component* component, ::Component*& stopComponent) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_HasAnyComponents"), {"component", "stopComponent"});
            return _m.Call(component, &stopComponent);
        }
        static bool _TryBreadthFirstSearchNames(::Transform* root, ::BNM::Structures::Mono::String* regexPattern, ::Transform*& result, bool caseSensitive) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_TryBreadthFirstSearchNames"), {"root", "regexPattern", "result", "caseSensitive"});
            return _m.Call(root, regexPattern, &result, caseSensitive);
        }
        template <typename TP1 = void*>
        static bool _TryFindAllByPath(::Transform* current, TP1 pathPartsRegex, int index, ::BNM::Structures::Mono::List<::Transform*>* results, bool caseSensitive, bool isAtSceneLevel) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_TryFindAllByPath"), {"current", "pathPartsRegex", "index", "results", "caseSensitive", "isAtSceneLevel"});
            return _m.Call(current, pathPartsRegex, index, results, caseSensitive, isAtSceneLevel);
        }
        template <typename TP1 = void*>
        static bool _TryFindByPath(::Transform* current, TP1 pathPartsRegex, int index, ::Transform*& result, bool caseSensitive, bool isAtSceneLevel, ::BNM::Structures::Mono::String* joinedPath) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_TryFindByPath"), {"current", "pathPartsRegex", "index", "result", "caseSensitive", "isAtSceneLevel", "joinedPath"});
            return _m.Call(current, pathPartsRegex, index, &result, caseSensitive, isAtSceneLevel, joinedPath);
        }
        static void AddDictValue(::Transform* xForm, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::Transform*>* dict) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddDictValue"), {"xForm", "dict"});
            _m.Call(xForm, dict);
        }
        template <typename T>
        static void AddSortedUnique(::BNM::Structures::Mono::List<T>* list, T item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSortedUnique"), {"list", "item"});
            _m.Call(list, item);
        }
        static ::BNM::Structures::Unity::Vector2 ClampMagnitudeSafe(::BNM::Structures::Unity::Vector2 v2, float magnitude) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("ClampMagnitudeSafe"), {"v2", "magnitude"});
            return _m.Call(v2, magnitude);
        }
        static ::BNM::Structures::Unity::Vector3 ClampMagnitudeSafe(::BNM::Structures::Unity::Vector3 v3, float magnitude) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ClampMagnitudeSafe"), {"v3", "magnitude"});
            return _m.Call(v3, magnitude);
        }
        static float ClampSafe(float value, float min, float max) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ClampSafe"), {"value", "min", "max"});
            return _m.Call(value, min, max);
        }
        static double ClampSafe(double value, double min, double max) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("ClampSafe"), {"value", "min", "max"});
            return _m.Call(value, min, max);
        }
        static void ClampThisMagnitudeSafe(::BNM::Structures::Unity::Vector2& v2, float magnitude) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClampThisMagnitudeSafe"), {"v2", "magnitude"});
            _m.Call(&v2, magnitude);
        }
        static void ClampThisMagnitudeSafe(::BNM::Structures::Unity::Vector3& v3, float magnitude) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClampThisMagnitudeSafe"), {"v3", "magnitude"});
            _m.Call(&v3, magnitude);
        }
        static void ClearDicts() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearDicts"));
            _m.Call();
        }
        static bool CompareAs255Unclamped(::BNM::Structures::Unity::Color a, ::BNM::Structures::Unity::Color b) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CompareAs255Unclamped"), {"a", "b"});
            return _m.Call(a, b);
        }
        template <typename T>
        static bool ContainsSorted(::BNM::Structures::Mono::List<T>* list, T item) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsSorted"), {"list", "item"});
            return _m.Call(list, item);
        }
        static void DecomposeWithXFlip(::BNM::Structures::Unity::Matrix4x4& matrix, ::BNM::Structures::Unity::Vector3& transformation, ::BNM::Structures::Unity::Quaternion& rotation, ::BNM::Structures::Unity::Vector3& scale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DecomposeWithXFlip"), {"matrix", "transformation", "rotation", "scale"});
            _m.Call(&matrix, &transformation, &rotation, &scale);
        }
        template <typename T>
        static ::BNM::Structures::Mono::Array<T>* Filled(::BNM::Structures::Mono::Array<T>* array, T value) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("Filled"), {"array", "value"});
            return _m.Call(array, value);
        }
        template <typename T>
        static ::BNM::Structures::Mono::Array<T>* FindComponentsByExactPath(::BNM::Structures::Mono::String* path) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("FindComponentsByExactPath"), {"path"});
            return _m.Call(path);
        }
        template <typename T, typename TP0 = void*>
        static ::BNM::Structures::Mono::Array<T>* FindComponentsByExactPath(TP0 scene, ::BNM::Structures::Mono::String* path) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("FindComponentsByExactPath"), {"scene", "path"});
            return _m.Call(scene, path);
        }
        template <typename T, typename TP0 = void*>
        static ::BNM::Structures::Mono::Array<T>* FindComponentsByExactPath(TP0 scene, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* splitPath) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("FindComponentsByExactPath"), {"scene", "splitPath"});
            return _m.Call(scene, splitPath);
        }
        template <typename T>
        static ::BNM::Structures::Mono::Array<T>* FindComponentsByExactPath(::Transform* rootXform, ::BNM::Structures::Mono::String* path) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("FindComponentsByExactPath"), {"rootXform", "path"});
            return _m.Call(rootXform, path);
        }
        template <typename T>
        static ::BNM::Structures::Mono::Array<T>* FindComponentsByExactPath(::Transform* rootXform, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* splitPath) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("FindComponentsByExactPath"), {"rootXform", "splitPath"});
            return _m.Call(rootXform, splitPath);
        }
        template <typename T, typename TP0 = void*>
        static ::BNM::Structures::Mono::Array<T>* FindComponentsByPath(TP0 scene, ::BNM::Structures::Mono::String* globPath, bool caseSensitive) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("FindComponentsByPath"), {"scene", "globPath", "caseSensitive"});
            return _m.Call(scene, globPath, caseSensitive);
        }
        template <typename T, typename TP0 = void*>
        static ::BNM::Structures::Mono::Array<T>* FindComponentsByPath(TP0 scene, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* pathPartsRegex, bool caseSensitive) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("FindComponentsByPath"), {"scene", "pathPartsRegex", "caseSensitive"});
            return _m.Call(scene, pathPartsRegex, caseSensitive);
        }
        template <typename T>
        static ::BNM::Structures::Mono::Array<T>* FindComponentsByPath(::Transform* rootXform, ::BNM::Structures::Mono::String* globPath, bool caseSensitive) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("FindComponentsByPath"), {"rootXform", "globPath", "caseSensitive"});
            return _m.Call(rootXform, globPath, caseSensitive);
        }
        template <typename T>
        static ::BNM::Structures::Mono::Array<T>* FindComponentsByPath(::Transform* rootXform, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* pathPartsRegex, bool caseSensitive) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("FindComponentsByPath"), {"rootXform", "pathPartsRegex", "caseSensitive"});
            return _m.Call(rootXform, pathPartsRegex, caseSensitive);
        }
        template <typename T>
        static ::BNM::Structures::Mono::Array<T>* FindComponentsByPathInLoadedScenes(::BNM::Structures::Mono::String* wildcardPath, bool caseSensitive) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("FindComponentsByPathInLoadedScenes"), {"wildcardPath", "caseSensitive"});
            return _m.Call(wildcardPath, caseSensitive);
        }
        template <typename T>
        static void ForEachBackwards(::BNM::Structures::Mono::List<T>* list, ::BNM::Structures::Mono::Action<T>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForEachBackwards"), {"list", "action"});
            _m.Call(list, action);
        }
        static float GetClosestDistance(::BNM::Structures::Unity::Ray ray, ::BNM::Structures::Unity::Vector3 target) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetClosestDistance"), {"ray", "target"});
            return _m.Call(ray, target);
        }
        static float GetClosestDistSqr(::BNM::Structures::Unity::Ray ray, ::BNM::Structures::Unity::Vector3 target) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetClosestDistSqr"), {"ray", "target"});
            return _m.Call(ray, target);
        }
        static ::BNM::Structures::Unity::Vector3 GetClosestPoint(::BNM::Structures::Unity::Ray ray, ::BNM::Structures::Unity::Vector3 target) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetClosestPoint"), {"ray", "target"});
            return _m.Call(ray, target);
        }
        static ::BNM::Structures::Unity::Vector4 GetColumnNoCopy(::BNM::Structures::Unity::Matrix4x4& matrix, int& index) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("GetColumnNoCopy"), {"matrix", "index"});
            return _m.Call(&matrix, &index);
        }
        template <typename T>
        static T GetComponentByName(::Transform* xform, ::BNM::Structures::Mono::String* name, bool includeInactive) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetComponentByName"), {"xform", "name", "includeInactive"});
            return _m.Call(xform, name, includeInactive);
        }
        template <typename T>
        static T GetComponentByPath(::GameObject* root, ::BNM::Structures::Mono::String* path) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetComponentByPath"), {"root", "path"});
            return _m.Call(root, path);
        }
        template <typename T, typename TP0 = void*>
        static T GetComponentInHierarchy(TP0 scene, bool includeInactive) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetComponentInHierarchy"), {"scene", "includeInactive"});
            return _m.Call(scene, includeInactive);
        }
        static ::BNM::Structures::Mono::String* GetComponentPath(::Component* component, int maxDepth) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetComponentPath"), {"component", "maxDepth"});
            return _m.Call(component, maxDepth);
        }
        template <typename T>
        static ::BNM::Structures::Mono::String* GetComponentPath(T component, int maxDepth) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetComponentPath"), {"component", "maxDepth"});
            return _m.Call(component, maxDepth);
        }
        template <typename T>
        static void GetComponentPath(T component, void*& strBuilder, int maxDepth) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetComponentPath"), {"component", "strBuilder", "maxDepth"});
            _m.Call(component, &strBuilder, maxDepth);
        }
        template <typename T>
        static ::BNM::Structures::Mono::String* GetComponentPathWithSiblingIndexes(T component) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetComponentPathWithSiblingIndexes"), {"component"});
            return _m.Call(component);
        }
        template <typename T>
        static void GetComponentPathWithSiblingIndexes(T component, void*& strBuilder) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetComponentPathWithSiblingIndexes"), {"component", "strBuilder"});
            _m.Call(component, &strBuilder);
        }
        template <typename T>
        static ::BNM::Structures::Mono::List<T>* GetComponentsByName(::Transform* xform, ::BNM::Structures::Mono::String* name, bool includeInactive) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("GetComponentsByName"), {"xform", "name", "includeInactive"});
            return _m.Call(xform, name, includeInactive);
        }
        template <typename T, typename TStop1>
        static ::BNM::Structures::Mono::List<T>* GetComponentsInChildrenUntil(::Component* root, bool includeInactive, bool stopAtRoot, int capacity) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("GetComponentsInChildrenUntil"), {"root", "includeInactive", "stopAtRoot", "capacity"});
            return _m.Call(root, includeInactive, stopAtRoot, capacity);
        }
        template <typename T, typename TStop1, typename TStop2>
        static ::BNM::Structures::Mono::List<T>* GetComponentsInChildrenUntil_1(::Component* root, bool includeInactive, bool stopAtRoot, int capacity) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("GetComponentsInChildrenUntil"), {"root", "includeInactive", "stopAtRoot", "capacity"});
            return _m.Call(root, includeInactive, stopAtRoot, capacity);
        }
        template <typename T, typename TStop1, typename TStop2, typename TStop3>
        static ::BNM::Structures::Mono::List<T>* GetComponentsInChildrenUntil_1(::Component* root, bool includeInactive, bool stopAtRoot, int capacity) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("GetComponentsInChildrenUntil"), {"root", "includeInactive", "stopAtRoot", "capacity"});
            return _m.Call(root, includeInactive, stopAtRoot, capacity);
        }
        template <typename T, typename TStop1, typename TStop2, typename TStop3>
        static void GetComponentsInChildrenUntil(::Component* root, ::BNM::IL2CPP::Il2CppObject*& out_included, ::BNM::IL2CPP::Il2CppObject*& out_excluded, bool includeInactive, bool stopAtRoot, int capacity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetComponentsInChildrenUntil"), {"root", "out_included", "out_excluded", "includeInactive", "stopAtRoot", "capacity"});
            _m.Call(root, &out_included, &out_excluded, includeInactive, stopAtRoot, capacity);
        }
        template <typename T, typename TP0 = void*>
        static ::BNM::Structures::Mono::List<T>* GetComponentsInHierarchy(TP0 scene, bool includeInactive, int capacity) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("GetComponentsInHierarchy"), {"scene", "includeInactive", "capacity"});
            return _m.Call(scene, includeInactive, capacity);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetComponentsInHierarchy(TP0 scene, ::BNM::MonoType* type, bool includeInactive, int capacity) {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("GetComponentsInHierarchy"), {"scene", "type", "includeInactive", "capacity"});
            return _m.Call(scene, type, includeInactive, capacity);
        }
        template <typename T, typename TStop1, typename TP0 = void*>
        static ::BNM::Structures::Mono::List<T>* GetComponentsInHierarchyUntil(TP0 scene, bool includeInactive, bool stopAtRoot, int capacity) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("GetComponentsInHierarchyUntil"), {"scene", "includeInactive", "stopAtRoot", "capacity"});
            return _m.Call(scene, includeInactive, stopAtRoot, capacity);
        }
        template <typename T, typename TStop1, typename TStop2, typename TP0 = void*>
        static ::BNM::Structures::Mono::List<T>* GetComponentsInHierarchyUntil_1(TP0 scene, bool includeInactive, bool stopAtRoot, int capacity) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("GetComponentsInHierarchyUntil"), {"scene", "includeInactive", "stopAtRoot", "capacity"});
            return _m.Call(scene, includeInactive, stopAtRoot, capacity);
        }
        template <typename T, typename TStop1, typename TStop2, typename TStop3, typename TP0 = void*>
        static ::BNM::Structures::Mono::List<T>* GetComponentsInHierarchyUntil_1(TP0 scene, bool includeInactive, bool stopAtRoot, int capacity) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("GetComponentsInHierarchyUntil"), {"scene", "includeInactive", "stopAtRoot", "capacity"});
            return _m.Call(scene, includeInactive, stopAtRoot, capacity);
        }
        template <typename T, typename TP0 = void*>
        static ::BNM::Structures::Mono::List<T>* GetComponentsWithRegex(TP0 scene, ::BNM::Structures::Mono::String* regexString, bool includeInactive, int capacity) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("GetComponentsWithRegex"), {"scene", "regexString", "includeInactive", "capacity"});
            return _m.Call(scene, regexString, includeInactive, capacity);
        }
        template <typename T>
        static ::BNM::Structures::Mono::List<T>* GetComponentsWithRegex(::Component* root, ::BNM::Structures::Mono::String* regexString, bool includeInactive, int capacity) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("GetComponentsWithRegex"), {"root", "regexString", "includeInactive", "capacity"});
            return _m.Call(root, regexString, includeInactive, capacity);
        }
        template <typename T, typename TP0 = void*>
        static ::BNM::Structures::Mono::List<T>* GetComponentsWithRegex(TP0 scene, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* regexStrings, bool includeInactive, int maxCount, int capacity) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("GetComponentsWithRegex"), {"scene", "regexStrings", "includeInactive", "maxCount", "capacity"});
            return _m.Call(scene, regexStrings, includeInactive, maxCount, capacity);
        }
        template <typename T, typename TP0 = void*>
        static ::BNM::Structures::Mono::List<T>* GetComponentsWithRegex(TP0 scene, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* regexStrings, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* excludeRegexStrings, bool includeInactive, int maxCount) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("GetComponentsWithRegex"), {"scene", "regexStrings", "excludeRegexStrings", "includeInactive", "maxCount"});
            return _m.Call(scene, regexStrings, excludeRegexStrings, includeInactive, maxCount);
        }
        template <typename T, typename TP0 = void*>
        static void GetComponentsWithRegex_Internal(TP0 allComponents, ::BNM::IL2CPP::Il2CppObject* regex, ::BNM::IL2CPP::Il2CppObject*& foundComponents) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetComponentsWithRegex_Internal"), {"allComponents", "regex", "foundComponents"});
            _m.Call(allComponents, regex, &foundComponents);
        }
        template <typename T, typename TP0 = void*>
        static ::BNM::Structures::Mono::List<T>* GetComponentsWithRegex_Internal(TP0 allComponents, ::BNM::Structures::Mono::String* regexString, bool includeInactive, int capacity) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("GetComponentsWithRegex_Internal"), {"allComponents", "regexString", "includeInactive", "capacity"});
            return _m.Call(allComponents, regexString, includeInactive, capacity);
        }
        template <typename T>
        static void GetComponentsWithRegex_Internal(::BNM::Structures::Mono::List<T>* allComponents, ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* regexes, int maxCount, ::BNM::IL2CPP::Il2CppObject*& foundComponents) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetComponentsWithRegex_Internal"), {"allComponents", "regexes", "maxCount", "foundComponents"});
            _m.Call(allComponents, regexes, maxCount, &foundComponents);
        }
        template <typename T>
        static T GetComponentWithRegex(::Component* root, ::BNM::Structures::Mono::String* regexString) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetComponentWithRegex"), {"root", "regexString"});
            return _m.Call(root, regexString);
        }
        static int GetDepth(::Transform* xform) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetDepth"), {"xform"});
            return _m.Call(xform);
        }
        static float GetFinite(float value) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetFinite"), {"value"});
            return _m.Call(value);
        }
        static double GetFinite(double value) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("GetFinite"), {"value"});
            return _m.Call(value);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::List<::GameObject*>* GetGameObjectsInHierarchy(TP0 scene, bool includeInactive, int capacity) {
            static BNM::Method<::BNM::Structures::Mono::List<::GameObject*>*> _m = GetClass().GetMethod(O("GetGameObjectsInHierarchy"), {"scene", "includeInactive", "capacity"});
            return _m.Call(scene, includeInactive, capacity);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::List<::GameObject*>* GetGameObjectsInHierarchy(TP0 scene, ::BNM::Structures::Mono::String* name, bool includeInactive) {
            static BNM::Method<::BNM::Structures::Mono::List<::GameObject*>*> _m = GetClass().GetMethod(O("GetGameObjectsInHierarchy"), {"scene", "name", "includeInactive"});
            return _m.Call(scene, name, includeInactive);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::List<::GameObject*>* GetGameObjectsWithRegex(TP0 scene, ::BNM::Structures::Mono::String* regexString, bool includeInactive, int capacity) {
            static BNM::Method<::BNM::Structures::Mono::List<::GameObject*>*> _m = GetClass().GetMethod(O("GetGameObjectsWithRegex"), {"scene", "regexString", "includeInactive", "capacity"});
            return _m.Call(scene, regexString, includeInactive, capacity);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::List<::GameObject*>* GetGameObjectsWithRegex(TP0 scene, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* regexStrings, bool includeInactive, int maxCount) {
            static BNM::Method<::BNM::Structures::Mono::List<::GameObject*>*> _m = GetClass().GetMethod(O("GetGameObjectsWithRegex"), {"scene", "regexStrings", "includeInactive", "maxCount"});
            return _m.Call(scene, regexStrings, includeInactive, maxCount);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::List<::GameObject*>* GetGameObjectsWithRegex(TP0 scene, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* regexStrings, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* excludeRegexStrings, bool includeInactive, int maxCount) {
            static BNM::Method<::BNM::Structures::Mono::List<::GameObject*>*> _m = GetClass().GetMethod(O("GetGameObjectsWithRegex"), {"scene", "regexStrings", "excludeRegexStrings", "includeInactive", "maxCount"});
            return _m.Call(scene, regexStrings, excludeRegexStrings, includeInactive, maxCount);
        }
        template <typename T>
        static T GetOrAddComponent(::GameObject* gameObject) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetOrAddComponent"), {"gameObject"});
            return _m.Call(gameObject);
        }
        template <typename T>
        static T GetOrAddComponent(::GameObject* gameObject, T& component) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetOrAddComponent"), {"gameObject", "component"});
            return _m.Call(gameObject, &component);
        }
        static ::BNM::Structures::Mono::String* GetPath(::Transform* transform) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPath"), {"transform"});
            return _m.Call(transform);
        }
        static ::BNM::Structures::Mono::String* GetPath(::GameObject* gameObject) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPath"), {"gameObject"});
            return _m.Call(gameObject);
        }
        static ::BNM::Structures::Mono::String* GetPath(::Transform* transform, int maxDepth) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPath"), {"transform", "maxDepth"});
            return _m.Call(transform, maxDepth);
        }
        static ::BNM::Structures::Mono::String* GetPath(::Transform* transform, ::Transform* stopper) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPath"), {"transform", "stopper"});
            return _m.Call(transform, stopper);
        }
        static void GetPath(::GameObject* gameObject, void*& sb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPath"), {"gameObject", "sb"});
            _m.Call(gameObject, &sb);
        }
        static ::BNM::Structures::Mono::String* GetPath(::GameObject* gameObject, int limit) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPath"), {"gameObject", "limit"});
            return _m.Call(gameObject, limit);
        }
        static ::BNM::Structures::Mono::String* GetPathQ(::Transform* transform) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPathQ"), {"transform"});
            return _m.Call(transform);
        }
        static void GetPathQ(::Transform* transform, void*& sb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPathQ"), {"transform", "sb"});
            _m.Call(transform, &sb);
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetPaths(::BNM::Structures::Mono::Array<::GameObject*>* gobj) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("GetPaths"), {"gobj"});
            return _m.Call(gobj);
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetPaths(::BNM::Structures::Mono::Array<::Transform*>* xform) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("GetPaths"), {"xform"});
            return _m.Call(xform);
        }
        static ::BNM::Structures::Mono::String* GetPathWithSiblingIndexes(::Transform* transform) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPathWithSiblingIndexes"), {"transform"});
            return _m.Call(transform);
        }
        static ::BNM::Structures::Mono::String* GetPathWithSiblingIndexes(::GameObject* gameObject) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPathWithSiblingIndexes"), {"gameObject"});
            return _m.Call(gameObject);
        }
        static void GetPathWithSiblingIndexes(::Transform* transform, void*& strBuilder) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPathWithSiblingIndexes"), {"transform", "strBuilder"});
            _m.Call(transform, &strBuilder);
        }
        static void GetPathWithSiblingIndexes(::GameObject* gameObject, void*& stringBuilder) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPathWithSiblingIndexes"), {"gameObject", "stringBuilder"});
            _m.Call(gameObject, &stringBuilder);
        }
        template <typename T, typename TP0 = void*>
        static int GetRandomIndex(TP0 self) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetRandomIndex"), {"self"});
            return _m.Call(self);
        }
        template <typename T, typename TP0 = void*>
        static T GetRandomItem(TP0 self) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetRandomItem"), {"self"});
            return _m.Call(self);
        }
        static ::BNM::Structures::Mono::String* GetRelativePath(::BNM::Structures::Mono::String* fromPath, ::BNM::Structures::Mono::String* toPath) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetRelativePath"), {"fromPath", "toPath"});
            return _m.Call(fromPath, toPath);
        }
        static ::BNM::Structures::Mono::String* GetRelativePath(::Transform* fromXform, ::Transform* toXform) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetRelativePath"), {"fromXform", "toXform"});
            return _m.Call(fromXform, toXform);
        }
        static void GetRelativePath(::BNM::Structures::Mono::String* fromPath, ::BNM::Structures::Mono::String* toPath, void*& ZStringBuilder) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetRelativePath"), {"fromPath", "toPath", "ZStringBuilder"});
            _m.Call(fromPath, toPath, &ZStringBuilder);
        }
        static void GetRelativePath(::Transform* fromXform, ::Transform* toXform, void*& ZStringBuilder) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetRelativePath"), {"fromXform", "toXform", "ZStringBuilder"});
            _m.Call(fromXform, toXform, &ZStringBuilder);
        }
        static ::BNM::Structures::Unity::Vector3 GetValidWithFallback(::BNM::Structures::Unity::Vector3& v, ::BNM::Structures::Unity::Vector3& safeVal) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetValidWithFallback"), {"v", "safeVal"});
            return _m.Call(&v, &safeVal);
        }
        static ::BNM::Structures::Unity::Quaternion GetValidWithFallback(::BNM::Structures::Unity::Quaternion& q, ::BNM::Structures::Unity::Quaternion& safeVal) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("GetValidWithFallback"), {"q", "safeVal"});
            return _m.Call(&q, &safeVal);
        }
        template <typename T>
        static void* GTGetComponentsListPool(::Component* root, ::BNM::IL2CPP::Il2CppObject*& pooledList) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GTGetComponentsListPool"), {"root", "pooledList"});
            return _m.Call(root, &pooledList);
        }
        template <typename T>
        static void* GTGetComponentsListPool(::Component* root, bool includeInactive, ::BNM::IL2CPP::Il2CppObject*& pooledList) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GTGetComponentsListPool"), {"root", "includeInactive", "pooledList"});
            return _m.Call(root, includeInactive, &pooledList);
        }
        static ::BNM::Structures::Unity::Quaternion InverseTransformRotation(::Transform* transform, ::BNM::Structures::Unity::Quaternion localRotation) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("InverseTransformRotation"), {"transform", "localRotation"});
            return _m.Call(transform, localRotation);
        }
        static bool IsInfinity(::BNM::Structures::Unity::Vector3& v) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInfinity"), {"v"});
            return _m.Call(&v);
        }
        static bool IsInfinity(::BNM::Structures::Unity::Quaternion& q) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInfinity"), {"q"});
            return _m.Call(&q);
        }
        static bool IsLongerThan(::BNM::Structures::Unity::Vector2 v, float len) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLongerThan"), {"v", "len"});
            return _m.Call(v, len);
        }
        static bool IsLongerThan(::BNM::Structures::Unity::Vector2 v, ::BNM::Structures::Unity::Vector2 v2) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLongerThan"), {"v", "v2"});
            return _m.Call(v, v2);
        }
        static bool IsLongerThan(::BNM::Structures::Unity::Vector3 v, float len) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLongerThan"), {"v", "len"});
            return _m.Call(v, len);
        }
        static bool IsLongerThan(::BNM::Structures::Unity::Vector3 v, ::BNM::Structures::Unity::Vector3 v2) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLongerThan"), {"v", "v2"});
            return _m.Call(v, v2);
        }
        static bool IsNan(::BNM::Structures::Unity::Quaternion& q) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsNan"), {"q"});
            return _m.Call(&q);
        }
        static bool IsNaN(::BNM::Structures::Unity::Vector3& v) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsNaN"), {"v"});
            return _m.Call(&v);
        }
        static bool IsNotNull(::BNM::IL2CPP::Il2CppObject* mono) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsNotNull"), {"mono"});
            return _m.Call(mono);
        }
        static bool IsNull(::BNM::IL2CPP::Il2CppObject* mono) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsNull"), {"mono"});
            return _m.Call(mono);
        }
        static bool IsShorterThan(::BNM::Structures::Unity::Vector2 v, float len) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsShorterThan"), {"v", "len"});
            return _m.Call(v, len);
        }
        static bool IsShorterThan(::BNM::Structures::Unity::Vector2 v, ::BNM::Structures::Unity::Vector2 v2) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsShorterThan"), {"v", "v2"});
            return _m.Call(v, v2);
        }
        static bool IsShorterThan(::BNM::Structures::Unity::Vector3 v, float len) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsShorterThan"), {"v", "len"});
            return _m.Call(v, len);
        }
        static bool IsShorterThan(::BNM::Structures::Unity::Vector3 v, ::BNM::Structures::Unity::Vector3 v2) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsShorterThan"), {"v", "v2"});
            return _m.Call(v, v2);
        }
        static bool IsValid(::BNM::Structures::Unity::Quaternion& q) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValid"), {"q"});
            return _m.Call(&q);
        }
        static bool IsValid(::BNM::Structures::Unity::Vector3& v, float& maxVal) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValid"), {"v", "maxVal"});
            return _m.Call(&v, &maxVal);
        }
        static ::BNM::Structures::Unity::Matrix4x4 LerpTo(::BNM::Structures::Unity::Matrix4x4 a, ::BNM::Structures::Unity::Matrix4x4 b, float t) {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("LerpTo"), {"a", "b", "t"});
            return _m.Call(a, b, t);
        }
        static ::BNM::Structures::Unity::Matrix4x4 LerpTo_HandleNegativeScale(::BNM::Structures::Unity::Matrix4x4 a, ::BNM::Structures::Unity::Matrix4x4 b, float t) {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("LerpTo_HandleNegativeScale"), {"a", "b", "t"});
            return _m.Call(a, b, t);
        }
        static ::BNM::Structures::Unity::Vector3 LerpToUnclamped(::BNM::Structures::Unity::Vector3& a, ::BNM::Structures::Unity::Vector3& b, float t) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("LerpToUnclamped"), {"a", "b", "t"});
            return _m.Call(&a, &b, t);
        }
        static ::BNM::Structures::Unity::Matrix4x4 LocalMatrixRelativeToParentNoScale(::Transform* transform) {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("LocalMatrixRelativeToParentNoScale"), {"transform"});
            return _m.Call(transform);
        }
        static ::BNM::Structures::Unity::Matrix4x4 LocalMatrixRelativeToParentWithScale(::Transform* transform) {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("LocalMatrixRelativeToParentWithScale"), {"transform"});
            return _m.Call(transform);
        }
        static ::BNM::Structures::Unity::Matrix4x4 localToWorldNoScale(::Transform* transform) {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("localToWorldNoScale"), {"transform"});
            return _m.Call(transform);
        }
        static ::BNM::Structures::Unity::Matrix4x4 Matrix4X4LerpHandleNegativeScale(::BNM::Structures::Unity::Matrix4x4 a, ::BNM::Structures::Unity::Matrix4x4 b, float t) {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("Matrix4X4LerpHandleNegativeScale"), {"a", "b", "t"});
            return _m.Call(a, b, t);
        }
        static ::BNM::Structures::Unity::Matrix4x4 Matrix4X4LerpNoScale(::BNM::Structures::Unity::Matrix4x4 a, ::BNM::Structures::Unity::Matrix4x4 b, float t) {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("Matrix4X4LerpNoScale"), {"a", "b", "t"});
            return _m.Call(a, b, t);
        }
        static ::BNM::Structures::Unity::Matrix4x4 Matrix4x4Scale(::BNM::Structures::Unity::Vector3& vector) {
            static BNM::Method<::BNM::Structures::Unity::Matrix4x4> _m = GetClass().GetMethod(O("Matrix4x4Scale"), {"vector"});
            return _m.Call(&vector);
        }
        static float MaxSafe(float value, float max) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("MaxSafe"), {"value", "max"});
            return _m.Call(value, max);
        }
        static double MaxSafe(double value, float max) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("MaxSafe"), {"value", "max"});
            return _m.Call(value, max);
        }
        static float MinSafe(float value, float min) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("MinSafe"), {"value", "min"});
            return _m.Call(value, min);
        }
        static double MinSafe(double value, float min) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("MinSafe"), {"value", "min"});
            return _m.Call(value, min);
        }
        static void MultiplyInPlaceWith(::BNM::Structures::Unity::Vector3& a, ::BNM::Structures::Unity::Vector3& b) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MultiplyInPlaceWith"), {"a", "b"});
            _m.Call(&a, &b);
        }
        static ::BNM::Structures::Unity::Vector3 Normalize(::BNM::Structures::Unity::Vector3 value, float& existingMagnitude) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Normalize"), {"value", "existingMagnitude"});
            return _m.Call(value, &existingMagnitude);
        }
        static ::BNM::Structures::Unity::Vector3 Position(::BNM::Structures::Unity::Matrix4x4 matrix) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Position"), {"matrix"});
            return _m.Call(matrix);
        }
        static ::BNM::Structures::Unity::Vector3 ProjectOnPlane(::BNM::Structures::Unity::Vector3 point, ::BNM::Structures::Unity::Vector3 planeAnchorPosition, ::BNM::Structures::Unity::Vector3 planeNormal) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ProjectOnPlane"), {"point", "planeAnchorPosition", "planeNormal"});
            return _m.Call(point, planeAnchorPosition, planeNormal);
        }
        static ::BNM::Structures::Unity::Vector3 ProjectToLine(::BNM::Structures::Unity::Ray ray, ::BNM::Structures::Unity::Vector3 lineStart, ::BNM::Structures::Unity::Vector3 lineEnd) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ProjectToLine"), {"ray", "lineStart", "lineEnd"});
            return _m.Call(ray, lineStart, lineEnd);
        }
        static ::BNM::Structures::Unity::Vector3 ProjectToPlane(::BNM::Structures::Unity::Ray ray, ::BNM::Structures::Unity::Vector3 planeOrigin, ::BNM::Structures::Unity::Vector3 planeNormalMustBeLength1) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ProjectToPlane"), {"ray", "planeOrigin", "planeNormalMustBeLength1"});
            return _m.Call(ray, planeOrigin, planeNormalMustBeLength1);
        }
        static ::BNM::Structures::Unity::Quaternion QuaternionFromToVec(::BNM::Structures::Unity::Vector3 toVector, ::BNM::Structures::Unity::Vector3 fromVector) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("QuaternionFromToVec"), {"toVector", "fromVector"});
            return _m.Call(toVector, fromVector);
        }
        template <typename T>
        static void RemoveSorted(::BNM::Structures::Mono::List<T>* list, T item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveSorted"), {"list", "item"});
            _m.Call(list, item);
        }
        static ::BNM::Structures::Unity::Quaternion Rotation(::BNM::Structures::Unity::Matrix4x4& m) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("Rotation"), {"m"});
            return _m.Call(&m);
        }
        static ::BNM::Structures::Unity::Quaternion RotationWithScaleContext(::BNM::Structures::Unity::Matrix4x4& m, ::BNM::Structures::Unity::Vector3& scale) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("RotationWithScaleContext"), {"m", "scale"});
            return _m.Call(&m, &scale);
        }
        template <typename T>
        static void SafeForEachBackwards(::BNM::Structures::Mono::List<T>* list, ::BNM::Structures::Mono::Action<T>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SafeForEachBackwards"), {"list", "action"});
            _m.Call(list, action);
        }
        static ::BNM::Structures::Unity::Vector3 Scale(::BNM::Structures::Unity::Matrix4x4 m) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("Scale"), {"m"});
            return _m.Call(m);
        }
        static void SetFromMatrix(::Transform* transform, ::BNM::Structures::Unity::Matrix4x4 matrix, bool useLocal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFromMatrix"), {"transform", "matrix", "useLocal"});
            _m.Call(transform, matrix, useLocal);
        }
        static void SetLocalMatrixRelativeToParent(::Transform* transform, ::BNM::Structures::Unity::Matrix4x4 matrix) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLocalMatrixRelativeToParent"), {"transform", "matrix"});
            _m.Call(transform, matrix);
        }
        static void SetLocalMatrixRelativeToParentNoScale(::Transform* transform, ::BNM::Structures::Unity::Matrix4x4 matrix) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLocalMatrixRelativeToParentNoScale"), {"transform", "matrix"});
            _m.Call(transform, matrix);
        }
        static void SetLocalMatrixRelativeToParentWithXParity(::Transform* transform, ::BNM::Structures::Unity::Matrix4x4& matrix4X4) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLocalMatrixRelativeToParentWithXParity"), {"transform", "matrix4X4"});
            _m.Call(transform, &matrix4X4);
        }
        static void SetLocalRelativeToParentMatrixWithParityAxis(::BNM::Structures::Unity::Matrix4x4& matrix, ::GorillaExtensions::GTExt_ParityOptions parity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLocalRelativeToParentMatrixWithParityAxis"), {"matrix", "parity"});
            _m.Call(&matrix, parity);
        }
        static void SetLocalToWorldMatrixNoScale(::Transform* transform, ::BNM::Structures::Unity::Matrix4x4 matrix) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLocalToWorldMatrixNoScale"), {"transform", "matrix"});
            _m.Call(transform, matrix);
        }
        static void SetLocalToWorldMatrixWithScale(::Transform* transform, ::BNM::Structures::Unity::Matrix4x4 matrix) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLocalToWorldMatrixWithScale"), {"transform", "matrix"});
            _m.Call(transform, matrix);
        }
        static void SetLossyScale(::Transform* transform, ::BNM::Structures::Unity::Vector3 scale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLossyScale"), {"transform", "scale"});
            _m.Call(transform, scale);
        }
        static void SetScale(::Transform* transform, ::BNM::Structures::Unity::Vector3 scale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScale"), {"transform", "scale"});
            _m.Call(transform, scale);
        }
        static void SetScaleFromMatrix(::Transform* transform, ::BNM::Structures::Unity::Matrix4x4 matrix) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScaleFromMatrix"), {"transform", "matrix"});
            _m.Call(transform, matrix);
        }
        static void SetValueSafe(::BNM::Structures::Unity::Vector3& v, ::BNM::Structures::Unity::Vector3& newVal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetValueSafe"), {"v", "newVal"});
            _m.Call(&v, &newVal);
        }
        static void SetValueSafe(::BNM::Structures::Unity::Quaternion& q, ::BNM::Structures::Unity::Quaternion& newVal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetValueSafe"), {"q", "newVal"});
            _m.Call(&q, &newVal);
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* ShowAllStringsUsed() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("ShowAllStringsUsed"));
            return _m.Call();
        }
        static void ThisMaxSafe(float& value, float max) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ThisMaxSafe"), {"value", "max"});
            _m.Call(&value, max);
        }
        static void ThisMaxSafe(double& value, float max) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ThisMaxSafe"), {"value", "max"});
            _m.Call(&value, max);
        }
        static void ThisMinSafe(float& value, float min) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ThisMinSafe"), {"value", "min"});
            _m.Call(&value, min);
        }
        static void ThisMinSafe(double& value, float min) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ThisMinSafe"), {"value", "min"});
            _m.Call(&value, min);
        }
        static ::BNM::Structures::Mono::String* ToLongString(::BNM::Structures::Unity::Vector3 self) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToLongString"), {"self"});
            return _m.Call(self);
        }
        static ::BNM::Structures::Unity::Quaternion TransformRotation(::Transform* transform, ::BNM::Structures::Unity::Quaternion localRotation) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("TransformRotation"), {"transform", "localRotation"});
            return _m.Call(transform, localRotation);
        }
        template <typename TP2 = void*>
        static bool TryFindByExactPath(::BNM::Structures::Mono::String* path, ::Transform*& result, TP2 findObjectsInactive) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryFindByExactPath"), {"path", "result", "findObjectsInactive"});
            return _m.Call(path, &result, findObjectsInactive);
        }
        template <typename TP0 = void*>
        static bool TryFindByExactPath(TP0 scene, ::BNM::Structures::Mono::String* path, ::Transform*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryFindByExactPath"), {"scene", "path", "result"});
            return _m.Call(scene, path, &result);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        static bool TryFindByExactPath(TP0 scene, TP1 splitPath, ::Transform*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryFindByExactPath"), {"scene", "splitPath", "result"});
            return _m.Call(scene, splitPath, &result);
        }
        static bool TryFindByExactPath(::Transform* rootXform, ::BNM::Structures::Mono::String* path, ::Transform*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryFindByExactPath"), {"rootXform", "path", "result"});
            return _m.Call(rootXform, path, &result);
        }
        template <typename TP1 = void*>
        static bool TryFindByExactPath(::Transform* rootXform, TP1 splitPath, ::Transform*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryFindByExactPath"), {"rootXform", "splitPath", "result"});
            return _m.Call(rootXform, splitPath, &result);
        }
        template <typename TP1 = void*>
        static bool TryFindByExactPath_Internal(::Transform* current, TP1 splitPath, int index, ::Transform*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryFindByExactPath_Internal"), {"current", "splitPath", "index", "result"});
            return _m.Call(current, splitPath, index, &result);
        }
        static bool TryFindByPath(::BNM::Structures::Mono::String* globPath, ::Transform*& result, bool caseSensitive) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryFindByPath"), {"globPath", "result", "caseSensitive"});
            return _m.Call(globPath, &result, caseSensitive);
        }
        template <typename TP0 = void*>
        static bool TryFindByPath(TP0 scene, ::BNM::Structures::Mono::String* globPath, ::Transform*& result, bool caseSensitive) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryFindByPath"), {"scene", "globPath", "result", "caseSensitive"});
            return _m.Call(scene, globPath, &result, caseSensitive);
        }
        static bool TryFindByPath(::Transform* rootXform, ::BNM::Structures::Mono::String* globPath, ::Transform*& result, bool caseSensitive) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryFindByPath"), {"rootXform", "globPath", "result", "caseSensitive"});
            return _m.Call(rootXform, globPath, &result, caseSensitive);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        static bool TryFindByPath(TP0 scene, TP1 pathPartsRegex, ::Transform*& result, ::BNM::Structures::Mono::String* globPath, bool caseSensitive) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryFindByPath"), {"scene", "pathPartsRegex", "result", "globPath", "caseSensitive"});
            return _m.Call(scene, pathPartsRegex, &result, globPath, caseSensitive);
        }
        static bool ValuesInRange(::BNM::Structures::Unity::Vector3& v, float& maxVal) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValuesInRange"), {"v", "maxVal"});
            return _m.Call(&v, &maxVal);
        }
        static ::BNM::Structures::Unity::Vector4 WithW(::BNM::Structures::Unity::Vector4 v, float w) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("WithW"), {"v", "w"});
            return _m.Call(v, w);
        }
        static ::BNM::Structures::Unity::Vector4 WithW(::BNM::Structures::Unity::Vector3 v, float w) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("WithW"), {"v", "w"});
            return _m.Call(v, w);
        }
        static ::BNM::Structures::Unity::Vector4 WithX(::BNM::Structures::Unity::Vector4 v, float x) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("WithX"), {"v", "x"});
            return _m.Call(v, x);
        }
        static ::BNM::Structures::Unity::Vector3 WithX(::BNM::Structures::Unity::Vector3 v, float x) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("WithX"), {"v", "x"});
            return _m.Call(v, x);
        }
        static ::BNM::Structures::Unity::Vector2 WithX(::BNM::Structures::Unity::Vector2 v, float x) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("WithX"), {"v", "x"});
            return _m.Call(v, x);
        }
        static ::BNM::Structures::Unity::Vector4 WithY(::BNM::Structures::Unity::Vector4 v, float y) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("WithY"), {"v", "y"});
            return _m.Call(v, y);
        }
        static ::BNM::Structures::Unity::Vector3 WithY(::BNM::Structures::Unity::Vector3 v, float y) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("WithY"), {"v", "y"});
            return _m.Call(v, y);
        }
        static ::BNM::Structures::Unity::Vector2 WithY(::BNM::Structures::Unity::Vector2 v, float y) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("WithY"), {"v", "y"});
            return _m.Call(v, y);
        }
        static ::BNM::Structures::Unity::Vector4 WithZ(::BNM::Structures::Unity::Vector4 v, float z) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("WithZ"), {"v", "z"});
            return _m.Call(v, z);
        }
        static ::BNM::Structures::Unity::Vector3 WithZ(::BNM::Structures::Unity::Vector3 v, float z) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("WithZ"), {"v", "z"});
            return _m.Call(v, z);
        }
        static ::BNM::Structures::Unity::Vector3 WithZ(::BNM::Structures::Unity::Vector2 v, float z) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("WithZ"), {"v", "z"});
            return _m.Call(v, z);
        }
        static ::BNM::Structures::Unity::Vector2 ww(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("ww"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 www(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("www"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 wwww(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("wwww"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 x0y(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("x0y"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 x0y(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("x0y"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 x0z(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("x0z"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 xw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("xw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xww(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xww"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xwww(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xwww"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 xx(float v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("xx"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 xx(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("xx"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 xx(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("xx"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 xx(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("xx"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xxw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xxw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxww(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxww"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xxx(float v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xxx"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xxx(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xxx"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xxx(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xxx"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xxx(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xxx"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxxw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxxw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxxx(float v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxxx"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxxx(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxxx"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxxx(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxxx"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxxx(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxxx"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxxy(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxxy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxxy(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxxy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxxy(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxxy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxxz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxxz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxxz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxxz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xxy(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xxy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xxy(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xxy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xxy(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xxy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxyw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxyw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxyy(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxyy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxyy(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxyy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxyy(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxyy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxyz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxyz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxyz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxyz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xxz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xxz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xxz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xxz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxzw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxzw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxzz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xxzz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xxzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 xy(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("xy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 xy(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("xy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 xy(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("xy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xy0(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xy0"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xy0(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xy0"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xyw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xyw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xyww(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xyww"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xyy(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xyy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xyy(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xyy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xyy(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xyy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xyyw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xyyw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xyyy(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xyyy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xyyy(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xyyy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xyyy(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xyyy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xyyz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xyyz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xyyz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xyyz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xyz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xyz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xyz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xyz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xyzw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xyzw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xyzz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xyzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xyzz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xyzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 xz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("xz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 xz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("xz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xz0(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xz0"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xzw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xzw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xzww(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xzww"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xzz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 xzz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("xzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xzzw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xzzw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xzzz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xzzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 xzzz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("xzzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 yw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("yw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 yww(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("yww"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 ywww(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("ywww"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 yy(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("yy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 yy(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("yy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 yy(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("yy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 yyw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("yyw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 yyww(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("yyww"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 yyy(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("yyy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 yyy(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("yyy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 yyy(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("yyy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 yyyw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("yyyw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 yyyy(::BNM::Structures::Unity::Vector2 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("yyyy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 yyyy(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("yyyy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 yyyy(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("yyyy"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 yyyz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("yyyz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 yyyz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("yyyz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 yyz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("yyz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 yyz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("yyz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 yyzw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("yyzw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 yyzz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("yyzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 yyzz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("yyzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 yz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("yz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 yz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("yz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 yzw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("yzw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 yzww(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("yzww"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 yzz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("yzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 yzz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("yzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 yzzw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("yzzw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 yzzz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("yzzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 yzzz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("yzzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 zw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("zw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 zww(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("zww"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 zwww(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("zwww"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 zz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("zz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector2 zz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector2> _m = GetClass().GetMethod(O("zz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 zzw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("zzw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 zzww(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("zzww"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 zzz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("zzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector3 zzz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("zzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 zzzw(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("zzzw"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 zzzz(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("zzzz"), {"v"});
            return _m.Call(v);
        }
        static ::BNM::Structures::Unity::Vector4 zzzz(::BNM::Structures::Unity::Vector4 v) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("zzzz"), {"v"});
            return _m.Call(v);
        }
    };
}
