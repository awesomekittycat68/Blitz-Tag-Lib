#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun {
    struct NestedComponentUtilities : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "NestedComponentUtilities");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* GetNodesQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("nodesQueue"));
            return _field.Get();
        }
        static void* GetNodeStack() {
            static BNM::Field<void*> _field = GetClass().GetField(O("nodeStack"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::IL2CPP::Il2CppObject*>* GetSearchLists() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("searchLists"));
            return _field.Get();
        }
        static void SetNodesQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("nodesQueue"));
            _field.Set(value);
        }
        static void SetNodeStack(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("nodeStack"));
            _field.Set(value);
        }
        static void SetSearchLists(::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("searchLists"));
            _field.Set(value);
        }
        template <typename T, typename NestedT>
        static T EnsureRootComponentExists(::Transform* transform) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("EnsureRootComponentExists"), {"transform"});
            return _m.Call(transform);
        }
        template <typename T, typename NestedT>
        static T GetNestedComponentInChildren(::Transform* t, bool includeInactive) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetNestedComponentInChildren"), {"t", "includeInactive"});
            return _m.Call(t, includeInactive);
        }
        template <typename T, typename NestedT>
        static T GetNestedComponentInParent(::Transform* t) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetNestedComponentInParent"), {"t"});
            return _m.Call(t);
        }
        template <typename T, typename NestedT>
        static T GetNestedComponentInParents(::Transform* t) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetNestedComponentInParents"), {"t"});
            return _m.Call(t);
        }
        template <typename T, typename NestedT>
        static ::BNM::Structures::Mono::List<T>* GetNestedComponentsInChildren(::Transform* t, ::BNM::Structures::Mono::List<T>* list, bool includeInactive) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("GetNestedComponentsInChildren"), {"t", "list", "includeInactive"});
            return _m.Call(t, list, includeInactive);
        }
        template <typename T, typename SearchT, typename NestedT>
        static void GetNestedComponentsInChildren(::Transform* t, bool includeInactive, ::BNM::Structures::Mono::List<T>* list) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetNestedComponentsInChildren"), {"t", "includeInactive", "list"});
            _m.Call(t, includeInactive, list);
        }
        template <typename T>
        static ::BNM::Structures::Mono::List<T>* GetNestedComponentsInChildren(::Transform* t, ::BNM::Structures::Mono::List<T>* list, bool includeInactive, ::BNM::Structures::Mono::Array<::BNM::MonoType*>* stopOn) {
            static BNM::Method<::BNM::Structures::Mono::List<T>*> _m = GetClass().GetMethod(O("GetNestedComponentsInChildren"), {"t", "list", "includeInactive", "stopOn"});
            return _m.Call(t, list, includeInactive, stopOn);
        }
        template <typename T>
        static void GetNestedComponentsInParents(::Transform* t, ::BNM::Structures::Mono::List<T>* list) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetNestedComponentsInParents"), {"t", "list"});
            _m.Call(t, list);
        }
        template <typename T, typename NestedT>
        static void GetNestedComponentsInParents_1(::Transform* t, ::BNM::Structures::Mono::List<T>* list) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetNestedComponentsInParents"), {"t", "list"});
            _m.Call(t, list);
        }
        template <typename T>
        static T GetParentComponent(::Transform* t) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetParentComponent"), {"t"});
            return _m.Call(t);
        }
    };
}
