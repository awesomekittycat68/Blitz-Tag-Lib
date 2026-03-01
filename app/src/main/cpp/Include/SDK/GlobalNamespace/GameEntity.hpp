#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EHandedness.hpp"
#include "GameEntityId.hpp"
#include "SnapJointType.hpp"

namespace GlobalNamespace {
    struct GameEntity : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameEntity");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int Invalid = -1;
        ::GlobalNamespace::GameEntityId GetAttachedToEntityId() {
            static BNM::Method<::GlobalNamespace::GameEntityId> _method = GetClass().GetMethod(O("get_attachedToEntityId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAttachedToEntityId(::GlobalNamespace::GameEntityId value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_attachedToEntityId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int64_t GetCreateData() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_createData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCreateData(int64_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_createData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GameEntityId GetCreatedByEntityId() {
            static BNM::Method<::GlobalNamespace::GameEntityId> _method = GetClass().GetMethod(O("get_createdByEntityId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCreatedByEntityId(::GlobalNamespace::GameEntityId value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_createdByEntityId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::EHandedness GetEquippedHandedness() {
            static BNM::Method<::GlobalNamespace::EHandedness> _method = GetClass().GetMethod(O("get_EquippedHandedness"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetHeldByActorNumber() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_heldByActorNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHeldByActorNumber(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_heldByActorNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetHeldByHandIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_heldByHandIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHeldByHandIndex(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_heldByHandIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GameEntityId GetId() {
            static BNM::Method<::GlobalNamespace::GameEntityId> _method = GetClass().GetMethod(O("get_id"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetId(::GlobalNamespace::GameEntityId value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_id"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetLastHeldByActorNumber() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_lastHeldByActorNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLastHeldByActorNumber(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_lastHeldByActorNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetOnlyGrabActorNumber() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_onlyGrabActorNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOnlyGrabActorNumber(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_onlyGrabActorNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetSnappedByActorNumber() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_snappedByActorNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSnappedByActorNumber(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_snappedByActorNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::SnapJointType GetSnappedJoint() {
            static BNM::Method<::GlobalNamespace::SnapJointType> _method = GetClass().GetMethod(O("get_snappedJoint"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSnappedJoint(::GlobalNamespace::SnapJointType value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_snappedJoint"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetTypeId() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_typeId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTypeId(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_typeId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void add_onEntityDestroyed(::GlobalNamespace::GameEntity_EntityDestroyedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onEntityDestroyed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onEntityDestroyed(::GlobalNamespace::GameEntity_EntityDestroyedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onEntityDestroyed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnStateChanged(::GlobalNamespace::GameEntity_StateChangedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnStateChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnStateChanged(::GlobalNamespace::GameEntity_StateChangedEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnStateChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::GlobalNamespace::GameEntity_RendererSet* GetGrabbableRenderers() {
            static BNM::Field<::GlobalNamespace::GameEntity_RendererSet*> _field = GetClass().GetField(O("_grabbableRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetMeshFilters() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_meshFilters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* GetBuiltInEntities() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("builtInEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanHoldingPlayerUpdateState() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canHoldingPlayerUpdateState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanLastHoldingPlayerUpdateState() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canLastHoldingPlayerUpdateState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCanSnapPlayerUpdateState() {
            static BNM::Field<bool> _field = GetClass().GetField(O("canSnapPlayerUpdateState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetCatchSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("catchSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCatchSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("catchSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetEntityComponents() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("entityComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetEntitySerialize() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("entitySerialize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetIgnoreObjectGrabRenderers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("ignoreObjectGrabRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsBuiltIn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBuiltIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastTickTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("LastTickTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntityManager* GetManager() {
            static BNM::Field<::GlobalNamespace::GameEntityManager*> _field = GetClass().GetField(O("manager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinTimeBetweenTicks() {
            static BNM::Field<float> _field = GetClass().GetField(O("MinTimeBetweenTicks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnAttached() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnAttached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnDetached() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnDetached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity_EntityDestroyedEvent* GetOnEntityDestroyed() {
            static BNM::Field<::GlobalNamespace::GameEntity_EntityDestroyedEvent*> _field = GetClass().GetField(O("onEntityDestroyed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnGrabbed() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnReleased() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnSnapped() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnSnapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity_StateChangedEvent* GetOnStateChanged() {
            static BNM::Field<::GlobalNamespace::GameEntity_StateChangedEvent*> _field = GetClass().GetField(O("OnStateChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnTick() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnTick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnUnsnapped() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnUnsnapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPickupable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("pickupable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPickupRangeFromSurface() {
            static BNM::Field<float> _field = GetClass().GetField(O("pickupRangeFromSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRigidBody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSnapSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("snapSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSnapSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("snapSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetState() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetThrowSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("throwSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetThrowSoundVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("throwSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGrabbableRenderers(::GlobalNamespace::GameEntity_RendererSet* value) {
            static BNM::Field<::GlobalNamespace::GameEntity_RendererSet*> _field = GetClass().GetField(O("_grabbableRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshFilters(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_meshFilters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuiltInEntities(::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameEntity*>*> _field = GetClass().GetField(O("builtInEntities"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanHoldingPlayerUpdateState(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canHoldingPlayerUpdateState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanLastHoldingPlayerUpdateState(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canLastHoldingPlayerUpdateState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanSnapPlayerUpdateState(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("canSnapPlayerUpdateState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCatchSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("catchSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCatchSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("catchSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntityComponents(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("entityComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntitySerialize(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("entitySerialize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIgnoreObjectGrabRenderers(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("ignoreObjectGrabRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsBuiltIn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBuiltIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTickTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("LastTickTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetManager(::GlobalNamespace::GameEntityManager* value) {
            static BNM::Field<::GlobalNamespace::GameEntityManager*> _field = GetClass().GetField(O("manager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinTimeBetweenTicks(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MinTimeBetweenTicks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnAttached(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnAttached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnDetached(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnDetached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnEntityDestroyed(::GlobalNamespace::GameEntity_EntityDestroyedEvent* value) {
            static BNM::Field<::GlobalNamespace::GameEntity_EntityDestroyedEvent*> _field = GetClass().GetField(O("onEntityDestroyed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGrabbed(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnReleased(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSnapped(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnSnapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnStateChanged(::GlobalNamespace::GameEntity_StateChangedEvent* value) {
            static BNM::Field<::GlobalNamespace::GameEntity_StateChangedEvent*> _field = GetClass().GetField(O("OnStateChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTick(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnTick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnUnsnapped(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnUnsnapped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPickupable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("pickupable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPickupRangeFromSurface(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pickupRangeFromSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigidBody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("snapSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("snapSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("throwSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThrowSoundVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("throwSoundVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_onEntityDestroyed_1(::GlobalNamespace::GameEntity_EntityDestroyedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onEntityDestroyed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnStateChanged_1(::GlobalNamespace::GameEntity_StateChangedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnStateChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Create(::GlobalNamespace::GameEntityManager* manager, int netId, int typeId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Create"), {"manager", "netId", "typeId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(manager, netId, typeId);
        }
        static ::GlobalNamespace::GameEntity* Get(::Collider* collider) {
            static BNM::Method<::GlobalNamespace::GameEntity*> _m = GetClass().GetMethod(O("Get"), {"collider"});
            return _m.Call(collider);
        }
        ::GlobalNamespace::GameEntityId get_attachedToEntityId() {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("get_attachedToEntityId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t get_createData() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_createData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GameEntityId get_createdByEntityId() {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("get_createdByEntityId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::EHandedness get_EquippedHandedness() {
            static BNM::Method<::GlobalNamespace::EHandedness> _m = GetClass().GetMethod(O("get_EquippedHandedness"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_heldByActorNumber() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_heldByActorNumber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_heldByHandIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_heldByHandIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GameEntityId get_id() {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("get_id"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_lastHeldByActorNumber() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_lastHeldByActorNumber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_onlyGrabActorNumber() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_onlyGrabActorNumber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_snappedByActorNumber() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_snappedByActorNumber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SnapJointType get_snappedJoint() {
            static BNM::Method<::GlobalNamespace::SnapJointType> _m = GetClass().GetMethod(O("get_snappedJoint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_typeId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_typeId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GameEntity_RendererSet* GetGrabbableRenderers_1() {
            static BNM::Method<::GlobalNamespace::GameEntity_RendererSet*> _m = GetClass().GetMethod(O("GetGrabbableRenderers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetLastHeldByPlayerForEntityID(::GlobalNamespace::GameEntityId gameEntityId) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetLastHeldByPlayerForEntityID"), {"gameEntityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameEntityId);
        }
        int GetNetId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNetId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetNetId(::GlobalNamespace::GameEntityId gameEntityId) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNetId"), {"gameEntityId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameEntityId);
        }
        int64_t GetState_1() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetVelocity() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetVelocity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init(int64_t createData, int createdByEntityNetId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"createData", "createdByEntityNetId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(createData, createdByEntityNetId);
        }
        bool IsAttachedToPlayer(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAttachedToPlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool IsAuthority() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsGamePlayer(::Collider* collider) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsGamePlayer"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(collider);
        }
        bool IsHeld() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHeld"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsHeldByLocalPlayer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHeldByLocalPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsSnappedByLocalPlayer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSnappedByLocalPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsValidToMigrate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValidToMigrate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void MigrateHeldBy(int actorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MigrateHeldBy"), {"actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNumber);
        }
        void MigrateSnappedBy(int actorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MigrateSnappedBy"), {"actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNumber);
        }
        ::GlobalNamespace::GameEntityId MigrateToEntityManager(::GlobalNamespace::GameEntityManager* newManager) {
            static BNM::Method<::GlobalNamespace::GameEntityId> _m = GetClass().GetMethod(O("MigrateToEntityManager"), {"newManager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newManager);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayCatchFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayCatchFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlaySnapFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySnapFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayThrowFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayThrowFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_onEntityDestroyed_1(::GlobalNamespace::GameEntity_EntityDestroyedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onEntityDestroyed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnStateChanged_1(::GlobalNamespace::GameEntity_StateChangedEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnStateChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void RequestState(::GlobalNamespace::GameEntityId id, int64_t newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestState"), {"id", "newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id, newState);
        }
        void set_attachedToEntityId(::GlobalNamespace::GameEntityId value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_attachedToEntityId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_createData(int64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_createData"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_createdByEntityId(::GlobalNamespace::GameEntityId value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_createdByEntityId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_heldByActorNumber(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_heldByActorNumber"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_heldByHandIndex(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_heldByHandIndex"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_id(::GlobalNamespace::GameEntityId value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_id"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_lastHeldByActorNumber(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_lastHeldByActorNumber"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_onlyGrabActorNumber(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_onlyGrabActorNumber"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_snappedByActorNumber(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_snappedByActorNumber"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_snappedJoint(::GlobalNamespace::SnapJointType value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_snappedJoint"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_typeId(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_typeId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetState_1(int64_t newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        bool WasLastHeldByLocalPlayer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("WasLastHeldByLocalPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
