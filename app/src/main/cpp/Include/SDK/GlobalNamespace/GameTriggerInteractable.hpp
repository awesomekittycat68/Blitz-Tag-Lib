#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GameTriggerInteractable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameTriggerInteractable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHandIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("handIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetInteractableCenter() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("interactableCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInteractableOnOthers() {
            static BNM::Field<bool> _field = GetClass().GetField(O("interactableOnOthers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInteractablePermanently() {
            static BNM::Field<bool> _field = GetClass().GetField(O("interactablePermanently"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInteractableRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("interactableRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInteractableWhileGrabbed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("interactableWhileGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInteractableWhileSnapped() {
            static BNM::Field<bool> _field = GetClass().GetField(O("interactableWhileSnapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GameTriggerInteractable*>* GetLocalInteractableTriggers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameTriggerInteractable*>*> _field = GetClass().GetField(O("LocalInteractableTriggers"));
            return _field.Get();
        }
        bool GetTriggerInteractionActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerInteractionActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("handIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractableCenter(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("interactableCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractableOnOthers(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("interactableOnOthers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractablePermanently(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("interactablePermanently"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractableRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("interactableRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractableWhileGrabbed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("interactableWhileGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractableWhileSnapped(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("interactableWhileSnapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetLocalInteractableTriggers(::BNM::Structures::Mono::List<::GlobalNamespace::GameTriggerInteractable*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameTriggerInteractable*>*> _field = GetClass().GetField(O("LocalInteractableTriggers"));
            _field.Set(value);
        }
        void SetTriggerInteractionActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("triggerInteractionActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void BeginTriggerInteraction(int _handIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BeginTriggerInteraction"), {"_handIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_handIndex);
        }
        void EndTriggerInteraction() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndTriggerInteraction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool PointWithinInteractableArea(::BNM::Structures::Unity::Vector3 point) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PointWithinInteractableArea"), {"point"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(point);
        }
        void StartHolding() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartHolding"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopHolding() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopHolding"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
