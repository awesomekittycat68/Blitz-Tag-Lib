#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Flocking_FishState.hpp"

namespace GlobalNamespace {
    struct Flocking : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Flocking");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::FlockingManager_FishArea* GetFishArea() {
            static BNM::Method<::GlobalNamespace::FlockingManager_FishArea*> _method = GetClass().GetMethod(O("get_FishArea"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFishArea(::GlobalNamespace::FlockingManager_FishArea* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FishArea"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaTagScripts::GameObjectManagerWithId* GetFishSceneGameObjectsManager() {
            static BNM::Field<::GorillaTagScripts::GameObjectManagerWithId*> _field = GetClass().GetField(O("_fishSceneGameObjectsManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetAverageHeading() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("averageHeading"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetAveragePosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("averagePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAvoidHandSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("avoidHandSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAvointPointRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("avointPointRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCacheSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("cacheSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEatFoodDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("eatFoodDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFeedingTimeStarted() {
            static BNM::Field<float> _field = GetClass().GetField(O("feedingTimeStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::Flocking_FishState GetFishState() {
            static BNM::Field<::GlobalNamespace::Flocking_FishState> _field = GetClass().GetField(O("fishState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFlockingAvoidanceDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("flockingAvoidanceDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFollowFakeFoodStopDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("FollowFakeFoodStopDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFollowFoodSpeedMult() {
            static BNM::Field<float> _field = GetClass().GetField(O("followFoodSpeedMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetFollowFoodStopDistance() {
            static BNM::Field<double> _field = GetClass().GetField(O("FollowFoodStopDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFollowingFood() {
            static BNM::Field<bool> _field = GetClass().GetField(O("followingFood"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRealFood() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRealFood"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsTurning() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTurning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FlockingManager* GetManager() {
            static BNM::Field<::GlobalNamespace::FlockingManager*> _field = GetClass().GetField(O("manager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxNeighbourDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxNeighbourDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("minSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("pos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetProjectileGameObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectileGameObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetRot() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("rot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotationSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSendIdEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("sendIdEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("speed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFishSceneGameObjectsManager(::GorillaTagScripts::GameObjectManagerWithId* value) {
            static BNM::Field<::GorillaTagScripts::GameObjectManagerWithId*> _field = GetClass().GetField(O("_fishSceneGameObjectsManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAverageHeading(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("averageHeading"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAveragePosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("averagePosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAvoidHandSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("avoidHandSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAvointPointRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("avointPointRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCacheSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cacheSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEatFoodDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("eatFoodDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeedingTimeStarted(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("feedingTimeStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFishState(::GlobalNamespace::Flocking_FishState value) {
            static BNM::Field<::GlobalNamespace::Flocking_FishState> _field = GetClass().GetField(O("fishState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlockingAvoidanceDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("flockingAvoidanceDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFollowFakeFoodStopDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("FollowFakeFoodStopDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFollowFoodSpeedMult(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("followFoodSpeedMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFollowFoodStopDistance(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("FollowFoodStopDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFollowingFood(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("followingFood"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRealFood(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRealFood"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsTurning(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTurning"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetManager(::GlobalNamespace::FlockingManager* value) {
            static BNM::Field<::GlobalNamespace::FlockingManager*> _field = GetClass().GetField(O("manager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxNeighbourDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxNeighbourDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("pos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileGameObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectileGameObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRot(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("rot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendIdEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("sendIdEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("speed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AvoidPlayerHands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AvoidPlayerHands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Flock(::BNM::Structures::Unity::Vector3 nextGoal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Flock"), {"nextGoal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nextGoal);
        }
        void FollowFood() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FollowFood"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::FlockingManager_FishArea* get_FishArea() {
            static BNM::Method<::GlobalNamespace::FlockingManager_FishArea*> _m = GetClass().GetMethod(O("get_FishArea"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleOnFoodDestroyed(::BoxCollider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnFoodDestroyed"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
        }
        void HandleOnFoodDetected(::GlobalNamespace::FlockingManager_FishFood* fishFood) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnFoodDetected"), {"fishFood"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fishFood);
        }
        void InvokeUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InvokeUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MaybeTurn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MaybeTurn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void set_FishArea(::GlobalNamespace::FlockingManager_FishArea* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FishArea"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetSyncPosRot(::BNM::Structures::Unity::Vector3 syncPos, ::BNM::Structures::Unity::Quaternion syncRot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSyncPosRot"), {"syncPos", "syncRot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(syncPos, syncRot);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SwitchState(::GlobalNamespace::Flocking_FishState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwitchState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void Turn(::BNM::Structures::Unity::Vector3 towardPoint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Turn"), {"towardPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(towardPoint);
        }
    };
}
