#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActor_CrittersActorType.hpp"

namespace GlobalNamespace {
    struct CrittersActor : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersActor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetGetAverageSpeed() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_GetAverageSpeed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnGrabbedChild(::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGrabbedChild"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnGrabbedChild(::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGrabbedChild"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        bool GetIsOnPlayerDefault() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isOnPlayerDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetActorId() {
            static BNM::Field<int> _field = GetClass().GetField(O("actorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetAngularDrive() {
            static BNM::Field<void*> _field = GetClass().GetField(O("angularDrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAttractionAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("AttractionAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetAttractionCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("AttractionCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetAverageSpeed() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("averageSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAverageSpeedIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("averageSpeedIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersActor_CrittersActorType GetCrittersActorType() {
            static BNM::Field<::GlobalNamespace::CrittersActor_CrittersActorType> _field = GetClass().GetField(O("crittersActorType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDefaultParentTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("defaultParentTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDespawnDelay() {
            static BNM::Field<int> _field = GetClass().GetField(O("despawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetDespawnTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("despawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDespawnWhenIdle() {
            static BNM::Field<bool> _field = GetClass().GetField(O("despawnWhenIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisconnectJointFlag() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disconnectJointFlag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDrive() {
            static BNM::Field<void*> _field = GetClass().GetField(O("drive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEquipmentStorable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("equipmentStorable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetEquipmentStoreTriggerCollider() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("equipmentStoreTriggerCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFearAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("FearAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetFearCurve() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("FearCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForceUpdate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGrabbable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabbable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsDespawnBlocked() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDespawnBlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsGrabDisabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGrabDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsOnPlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOnPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSceneActor() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSceneActor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetJoint() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("joint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastGrabbedPlayer() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastGrabbedPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastImpulseAngularVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastImpulseAngularVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastImpulsePosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastImpulsePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetLastImpulseQuaternion() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("lastImpulseQuaternion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastImpulseTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastImpulseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastImpulseVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastImpulseVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastParentActorId() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastParentActorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersActor* GetLastStoredObject() {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("lastStoredObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLinearLimitDrive() {
            static BNM::Field<void*> _field = GetClass().GetField(O("linearLimitDrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLinearLimitSpringDrive() {
            static BNM::Field<void*> _field = GetClass().GetField(O("linearLimitSpringDrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalCanStore() {
            static BNM::Field<bool> _field = GetClass().GetField(O("localCanStore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLocalLastImpulse() {
            static BNM::Field<double> _field = GetClass().GetField(O("localLastImpulse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxRangeOfFearAttraction() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRangeOfFearAttraction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>* GetOnGrabbedChild() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("OnGrabbedChild"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetParentActor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("parentActor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetParentActorId() {
            static BNM::Field<int> _field = GetClass().GetField(O("parentActorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPreventDespawnUntilGrabbed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("preventDespawnUntilGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRb() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetReleasedEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ReleasedEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetResetPhysicsOnSpawn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("resetPhysicsOnSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRigIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("rigIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRigPlayerId() {
            static BNM::Field<int> _field = GetClass().GetField(O("rigPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetStoreCollider() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("storeCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSubObjectIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("subObjectIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetSubObjects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("subObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeLastTouched() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastTouched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUpdatedSinceLastFrame() {
            static BNM::Field<bool> _field = GetClass().GetField(O("updatedSinceLastFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUsesRB() {
            static BNM::Field<bool> _field = GetClass().GetField(O("usesRB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsOnPlayerDefault(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isOnPlayerDefault"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActorId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("actorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAngularDrive(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("angularDrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttractionAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("AttractionAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttractionCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("AttractionCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAverageSpeed(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("averageSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAverageSpeedIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("averageSpeedIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliders(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrittersActorType(::GlobalNamespace::CrittersActor_CrittersActorType value) {
            static BNM::Field<::GlobalNamespace::CrittersActor_CrittersActorType> _field = GetClass().GetField(O("crittersActorType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultParentTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("defaultParentTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDespawnDelay(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("despawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDespawnTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("despawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDespawnWhenIdle(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("despawnWhenIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisconnectJointFlag(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disconnectJointFlag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDrive(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("drive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEquipmentStorable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("equipmentStorable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEquipmentStoreTriggerCollider(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("equipmentStoreTriggerCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFearAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("FearAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFearCurve(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("FearCurve"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceUpdate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("grabbable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsDespawnBlocked(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDespawnBlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsGrabDisabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isGrabDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsOnPlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isOnPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSceneActor(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSceneActor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJoint(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("joint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastGrabbedPlayer(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastGrabbedPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastImpulseAngularVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastImpulseAngularVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastImpulsePosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastImpulsePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastImpulseQuaternion(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("lastImpulseQuaternion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastImpulseTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastImpulseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastImpulseVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastImpulseVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastParentActorId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastParentActorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("lastPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastStoredObject(::GlobalNamespace::CrittersActor* value) {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("lastStoredObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinearLimitDrive(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("linearLimitDrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinearLimitSpringDrive(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("linearLimitSpringDrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalCanStore(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("localCanStore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalLastImpulse(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("localLastImpulse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxRangeOfFearAttraction(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRangeOfFearAttraction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGrabbedChild(::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("OnGrabbedChild"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentActor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("parentActor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentActorId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("parentActorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreventDespawnUntilGrabbed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("preventDespawnUntilGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRb(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReleasedEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ReleasedEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResetPhysicsOnSpawn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("resetPhysicsOnSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rigIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigPlayerId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rigPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStoreCollider(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("storeCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubObjectIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("subObjectIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubObjects(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("subObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeLastTouched(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeLastTouched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdatedSinceLastFrame(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("updatedSinceLastFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsesRB(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("usesRB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnGrabbedChild_1(::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGrabbedChild"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        int AddActorDataToList(::BNM::IL2CPP::Il2CppObject*& objList) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AddActorDataToList"), {"objList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&objList);
        }
        void AddPlayerCrittersActorDataToList(::BNM::IL2CPP::Il2CppObject*& objList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPlayerCrittersActorDataToList"), {"objList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&objList);
        }
        bool AllowGrabbingActor(::GlobalNamespace::CrittersActor* grabbedBy) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AllowGrabbingActor"), {"grabbedBy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(grabbedBy);
        }
        void AttemptAddStoredObjectCollider(::GlobalNamespace::CrittersActor* actor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptAddStoredObjectCollider"), {"actor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actor);
        }
        void AttemptRemoveStoredObjectCollider(int oldParentId, bool playSound) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptRemoveStoredObjectCollider"), {"oldParentId", "playSound"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(oldParentId, playSound);
        }
        bool AttemptSetEquipmentStorable() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AttemptSetEquipmentStorable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int BaseActorDataLength() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("BaseActorDataLength"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CalculateAttraction(::GlobalNamespace::CrittersPawn* critter, float multiplier) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculateAttraction"), {"critter", "multiplier"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter, multiplier);
        }
        void CalculateFear(::GlobalNamespace::CrittersPawn* critter, float multiplier) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalculateFear"), {"critter", "multiplier"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(critter, multiplier);
        }
        bool CanBeGrabbed(::GlobalNamespace::CrittersActor* grabbedBy) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanBeGrabbed"), {"grabbedBy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(grabbedBy);
        }
        bool CheckStorable() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckStorable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CleanupActor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CleanupActor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreateJoint(::Rigidbody* rbToConnect, bool setParentNull) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateJoint"), {"rbToConnect", "setParentNull"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rbToConnect, setParentNull);
        }
        void DisconnectJoint() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisconnectJoint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float get_GetAverageSpeed() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_GetAverageSpeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetActorSubtype() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetActorSubtype"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::CrittersActor* GetParentActor_1(int actorId) {
            static BNM::Method<::GlobalNamespace::CrittersActor*> _m = GetClass().GetMethod(O("GetParentActor"), {"actorId"});
            return _m.Call(actorId);
        }
        static ::GlobalNamespace::CrittersActor* GetRootActor(int actorId) {
            static BNM::Method<::GlobalNamespace::CrittersActor*> _m = GetClass().GetMethod(O("GetRootActor"), {"actorId"});
            return _m.Call(actorId);
        }
        void GlobalGrabbedBy(::GlobalNamespace::CrittersActor* grabbingActor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GlobalGrabbedBy"), {"grabbingActor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbingActor);
        }
        void GrabbedBy(::GlobalNamespace::CrittersActor* grabbingActor, bool positionOverride, ::BNM::Structures::Unity::Quaternion localRotation, ::BNM::Structures::Unity::Vector3 localOffset, bool disableGrabbing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabbedBy"), {"grabbingActor", "positionOverride", "localRotation", "localOffset", "disableGrabbing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbingActor, positionOverride, localRotation, localOffset, disableGrabbing);
        }
        void HandleRemoteReleased() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleRemoteReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsCurrentlyAttachedToBag() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCurrentlyAttachedToBag"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void MoveActor(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, bool local, bool updateImpulses, bool updateImpulseTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveActor"), {"position", "rotation", "local", "updateImpulses", "updateImpulseTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position, rotation, local, updateImpulses, updateImpulseTime);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnHover(bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHover"), {"isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeft);
        }
        void PlacePlayerCrittersActor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlacePlayerCrittersActor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ProcessLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ProcessLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ProcessRemote() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessRemote"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Released(bool keepWorldPosition, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 impulseVelocity, ::BNM::Structures::Unity::Vector3 impulseAngularVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Released"), {"keepWorldPosition", "rotation", "position", "impulseVelocity", "impulseAngularVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(keepWorldPosition, rotation, position, impulseVelocity, impulseAngularVelocity);
        }
        void RemoteGrabbed(::GlobalNamespace::CrittersActor* actor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteGrabbed"), {"actor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actor);
        }
        void RemoteGrabbedBy(::GlobalNamespace::CrittersActor* grabbingActor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteGrabbedBy"), {"grabbingActor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbingActor);
        }
        void remove_OnGrabbedChild_1(::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGrabbedChild"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void RemoveDespawnBlock() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveDespawnBlock"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendDataByCrittersActorType(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendDataByCrittersActorType"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream);
        }
        void SetDefaultParent(::Transform* newDefaultParent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDefaultParent"), {"newDefaultParent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newDefaultParent);
        }
        void SetImpulse() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetImpulse"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetImpulseTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetImpulseTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetImpulseVelocity(::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angularVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetImpulseVelocity"), {"velocity", "angularVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(velocity, angularVelocity);
        }
        void SetJointRigid(::Rigidbody* rbToConnect) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetJointRigid"), {"rbToConnect"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rbToConnect);
        }
        void SetJointSoft(::Rigidbody* rbToConnect) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetJointSoft"), {"rbToConnect"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rbToConnect);
        }
        void SetTransformToDefaultParent(bool resetOrigin) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTransformToDefaultParent"), {"resetOrigin"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(resetOrigin);
        }
        bool ShouldDespawn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldDespawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void TogglePhysics(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TogglePhysics"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        int TotalActorDataLength() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("TotalActorDataLength"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UpdateAverageSpeed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAverageSpeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int UpdateFromRPC(::BNM::Structures::Mono::Array<void*>* data, int startingIndex) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UpdateFromRPC"), {"data", "startingIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, startingIndex);
        }
        void UpdateImpulses(bool local, bool updateTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateImpulses"), {"local", "updateTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(local, updateTime);
        }
        void UpdateImpulseVelocity() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateImpulseVelocity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int UpdatePlayerCrittersActorFromRPC(::BNM::Structures::Mono::Array<void*>* data, int startingIndex) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UpdatePlayerCrittersActorFromRPC"), {"data", "startingIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, startingIndex);
        }
        bool UpdateSpecificActor(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateSpecificActor"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
    };
}
