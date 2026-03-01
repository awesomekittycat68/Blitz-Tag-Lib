#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Subscription {
    struct SubscriberExclusiveZone : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Subscription", "SubscriberExclusiveZone");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetBodyColliderWasDisabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bodyColliderWasDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDriftSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("driftSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetEjectionPoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ejectionPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetInfluenceZoneCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("influenceZoneCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInsideInfluence() {
            static BNM::Field<bool> _field = GetClass().GetField(O("insideInfluence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInsideRestricted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("insideRestricted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastShoveTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastShoveTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNonSubscribeDoorObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nonSubscribeDoorObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetObstacleLayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("obstacleLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnEnterRestrictedZone() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnEnterRestrictedZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnWarning() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnWarning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRestrictedZone() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("restrictedZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetRestrictedZoneCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("restrictedZoneCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("rigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSafetyCheckRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("safetyCheckRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShoveCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("shoveCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowDebugInfo() {
            static BNM::Field<bool> _field = GetClass().GetField(O("showDebugInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSubscriberDoorObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("subscriberDoorObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTempEjectionObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("tempEjectionObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWarningZone() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("warningZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBodyColliderWasDisabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bodyColliderWasDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDriftSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("driftSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEjectionPoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ejectionPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInfluenceZoneCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("influenceZoneCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInsideInfluence(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("insideInfluence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInsideRestricted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("insideRestricted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastShoveTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastShoveTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNonSubscribeDoorObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("nonSubscribeDoorObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObstacleLayers(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("obstacleLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnEnterRestrictedZone(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnEnterRestrictedZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnWarning(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnWarning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestrictedZone(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("restrictedZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestrictedZoneCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("restrictedZoneCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("rigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSafetyCheckRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("safetyCheckRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShoveCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shoveCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowDebugInfo(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("showDebugInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubscriberDoorObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("subscriberDoorObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempEjectionObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("tempEjectionObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWarningZone(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("warningZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearAllRigOverrides() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearAllRigOverrides"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DisplaceToward(::GorillaLocomotion::GTPlayer* player, ::Transform* target, float speed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisplaceToward"), {"player", "target", "speed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, target, speed);
        }
        ::BNM::Structures::Unity::Vector3 FindSafeEjectionPosition(::BNM::Structures::Unity::Vector3 playerPos) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("FindSafeEjectionPosition"), {"playerPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerPos);
        }
        void HandleZoneBehavior() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleZoneBehavior"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDrawGizmos() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmos"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnZoneEnter(bool isRestricted) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneEnter"), {"isRestricted"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isRestricted);
        }
        void OnZoneExit(bool isRestricted) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneExit"), {"isRestricted"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isRestricted);
        }
        void SetBodyCollider(::GorillaLocomotion::GTPlayer* player, bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBodyCollider"), {"player", "enabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, enabled);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateDoor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDoor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
