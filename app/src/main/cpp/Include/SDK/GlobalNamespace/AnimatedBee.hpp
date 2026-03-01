#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AnimatedBee_TimedDestination.hpp"

namespace GlobalNamespace {
    struct AnimatedBee : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AnimatedBee");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::AnimatedBee_TimedDestination GetDestinationA() {
            static BNM::Field<::GlobalNamespace::AnimatedBee_TimedDestination> _field = GetClass().GetField(O("destinationA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AnimatedBee_TimedDestination GetDestinationB() {
            static BNM::Field<::GlobalNamespace::AnimatedBee_TimedDestination> _field = GetClass().GetField(O("destinationB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedBee_TimedDestination>* GetDestinationCache() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedBee_TimedDestination>*> _field = GetClass().GetField(O("destinationCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<float>* GetHoldTimes() {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("holdTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLoopDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("loopDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxTravelTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTravelTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetOldPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("oldPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOldSyncTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("oldSyncTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BeePerchPoint*>* GetRoute() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BeePerchPoint*>*> _field = GetClass().GetField(O("route"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("speed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetVisual() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("visual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDestinationA(::GlobalNamespace::AnimatedBee_TimedDestination value) {
            static BNM::Field<::GlobalNamespace::AnimatedBee_TimedDestination> _field = GetClass().GetField(O("destinationA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestinationB(::GlobalNamespace::AnimatedBee_TimedDestination value) {
            static BNM::Field<::GlobalNamespace::AnimatedBee_TimedDestination> _field = GetClass().GetField(O("destinationB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestinationCache(::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedBee_TimedDestination>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedBee_TimedDestination>*> _field = GetClass().GetField(O("destinationCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoldTimes(::BNM::Structures::Mono::List<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<float>*> _field = GetClass().GetField(O("holdTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoopDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("loopDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxTravelTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTravelTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOldPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("oldPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOldSyncTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("oldSyncTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoute(::BNM::Structures::Mono::List<::GlobalNamespace::BeePerchPoint*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BeePerchPoint*>*> _field = GetClass().GetField(O("route"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("speed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisual(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("visual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void GetPositionAndDestinationAtTime(float syncTime, ::BNM::Structures::Unity::Vector3& idealPosition, ::BNM::Structures::Unity::Vector3& destination) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPositionAndDestinationAtTime"), {"syncTime", "idealPosition", "destination"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(syncTime, &idealPosition, &destination);
        }
        void InitRoute(::BNM::Structures::Mono::List<::GlobalNamespace::BeePerchPoint*>* route, ::BNM::Structures::Mono::List<float>* holdTimes, ::GlobalNamespace::BeeSwarmManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitRoute"), {"route", "holdTimes", "manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(route, holdTimes, manager);
        }
        void InitRouteTimestamps() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitRouteTimestamps"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitVisual(::MeshRenderer* prefab, ::GlobalNamespace::BeeSwarmManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitVisual"), {"prefab", "manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prefab, manager);
        }
        void UpdateVisual(float syncTime, ::GlobalNamespace::BeeSwarmManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateVisual"), {"syncTime", "manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(syncTime, manager);
        }
    };
}
