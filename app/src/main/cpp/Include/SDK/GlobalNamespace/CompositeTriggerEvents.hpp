#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CompositeTriggerEvents : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CompositeTriggerEvents");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<::Collider*, int>* GetCollderMasks() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<::Collider*, int>*> _method = GetClass().GetMethod(O("get_CollderMasks"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_CompositeTriggerEnter(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_CompositeTriggerEnter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_CompositeTriggerEnter(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_CompositeTriggerEnter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_CompositeTriggerExit(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_CompositeTriggerExit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_CompositeTriggerExit(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_CompositeTriggerExit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::GlobalNamespace::CompositeTriggerEvents_TriggerEvent* GetCompositeTriggerEnter() {
            static BNM::Field<::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*> _field = GetClass().GetField(O("CompositeTriggerEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CompositeTriggerEvents_TriggerEvent* GetCompositeTriggerExit() {
            static BNM::Field<::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*> _field = GetClass().GetField(O("CompositeTriggerExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetIndividualTriggerColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("individualTriggerColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::Collider*, int>* GetOverlapMask() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Collider*, int>*> _field = GetClass().GetField(O("overlapMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::TriggerEventNotifier*>* GetTriggerEventNotifiers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::TriggerEventNotifier*>*> _field = GetClass().GetField(O("triggerEventNotifiers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCompositeTriggerEnter(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent* value) {
            static BNM::Field<::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*> _field = GetClass().GetField(O("CompositeTriggerEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompositeTriggerExit(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent* value) {
            static BNM::Field<::GlobalNamespace::CompositeTriggerEvents_TriggerEvent*> _field = GetClass().GetField(O("CompositeTriggerExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIndividualTriggerColliders(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("individualTriggerColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverlapMask(::BNM::Structures::Mono::Dictionary<::Collider*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Collider*, int>*> _field = GetClass().GetField(O("overlapMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerEventNotifiers(::BNM::Structures::Mono::List<::GlobalNamespace::TriggerEventNotifier*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::TriggerEventNotifier*>*> _field = GetClass().GetField(O("triggerEventNotifiers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_CompositeTriggerEnter_1(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_CompositeTriggerEnter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_CompositeTriggerExit_1(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_CompositeTriggerExit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void AddCollider(::Collider* colliderToAdd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddCollider"), {"colliderToAdd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(colliderToAdd);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CompositeTriggerEnterReceiver(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CompositeTriggerEnterReceiver"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void CompositeTriggerExitReceiver(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CompositeTriggerExitReceiver"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        ::BNM::Structures::Mono::Dictionary<::Collider*, int>* get_CollderMasks() {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<::Collider*, int>*> _m = GetClass().GetMethod(O("get_CollderMasks"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetNextMaskIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNextMaskIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetNumColliders() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNumColliders"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* MaskToString(int mask) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("MaskToString"), {"mask"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(mask);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_CompositeTriggerEnter_1(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_CompositeTriggerEnter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_CompositeTriggerExit_1(::GlobalNamespace::CompositeTriggerEvents_TriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_CompositeTriggerExit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void RemoveCollider(::Collider* colliderToRemove) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveCollider"), {"colliderToRemove"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(colliderToRemove);
        }
        void ResetColliderMask(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetColliderMask"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void ResetColliders(bool sendExitEvent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetColliders"), {"sendExitEvent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sendExitEvent);
        }
        int SetMaskIndexFalse(int mask, int index) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetMaskIndexFalse"), {"mask", "index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(mask, index);
        }
        int SetMaskIndexTrue(int mask, int index) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetMaskIndexTrue"), {"mask", "index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(mask, index);
        }
        bool TestMaskIndex(int mask, int index) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TestMaskIndex"), {"mask", "index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(mask, index);
        }
        void TriggerEnterReceiver(::GlobalNamespace::TriggerEventNotifier* notifier, ::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerEnterReceiver"), {"notifier", "other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(notifier, other);
        }
        void TriggerExitReceiver(::GlobalNamespace::TriggerEventNotifier* notifier, ::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerExitReceiver"), {"notifier", "other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(notifier, other);
        }
    };
}
