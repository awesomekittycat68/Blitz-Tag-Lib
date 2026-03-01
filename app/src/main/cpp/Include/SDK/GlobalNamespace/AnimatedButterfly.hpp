#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AnimatedButterfly_TimedDestination.hpp"

namespace GlobalNamespace {
    struct AnimatedButterfly : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AnimatedButterfly");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetBaseFlapSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("baseFlapSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AnimatedButterfly_TimedDestination GetDestinationA() {
            static BNM::Field<::GlobalNamespace::AnimatedButterfly_TimedDestination> _field = GetClass().GetField(O("destinationA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AnimatedButterfly_TimedDestination GetDestinationB() {
            static BNM::Field<::GlobalNamespace::AnimatedButterfly_TimedDestination> _field = GetClass().GetField(O("destinationB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedButterfly_TimedDestination>* GetDestinationCache() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedButterfly_TimedDestination>*> _field = GetClass().GetField(O("destinationCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLoopDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("loopDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("material"));
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
        float GetSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("speed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetTravellingLocalRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("travellingLocalRotation"));
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
        bool GetWasPerched() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasPerched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBaseFlapSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("baseFlapSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestinationA(::GlobalNamespace::AnimatedButterfly_TimedDestination value) {
            static BNM::Field<::GlobalNamespace::AnimatedButterfly_TimedDestination> _field = GetClass().GetField(O("destinationA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestinationB(::GlobalNamespace::AnimatedButterfly_TimedDestination value) {
            static BNM::Field<::GlobalNamespace::AnimatedButterfly_TimedDestination> _field = GetClass().GetField(O("destinationB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestinationCache(::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedButterfly_TimedDestination>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimatedButterfly_TimedDestination>*> _field = GetClass().GetField(O("destinationCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoopDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("loopDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("material"));
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
        void SetSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("speed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTravellingLocalRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("travellingLocalRotation"));
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
        void SetWasPerched(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasPerched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void GetPositionAndDestinationAtTime(float syncTime, ::BNM::Structures::Unity::Vector3& idealPosition, ::BNM::Structures::Unity::Vector3& destination) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPositionAndDestinationAtTime"), {"syncTime", "idealPosition", "destination"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(syncTime, &idealPosition, &destination);
        }
        void InitRoute(::BNM::Structures::Mono::List<::GameObject*>* route, ::BNM::Structures::Mono::List<float>* holdTimes, ::GlobalNamespace::ButterflySwarmManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitRoute"), {"route", "holdTimes", "manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(route, holdTimes, manager);
        }
        void InitVisual(::MeshRenderer* prefab, ::GlobalNamespace::ButterflySwarmManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitVisual"), {"prefab", "manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prefab, manager);
        }
        void SetColor(::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetColor"), {"color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(color);
        }
        void SetFlapSpeed(float flapSpeed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFlapSpeed"), {"flapSpeed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(flapSpeed);
        }
        void UpdateVisual(float syncTime, ::GlobalNamespace::ButterflySwarmManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateVisual"), {"syncTime", "manager"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(syncTime, manager);
        }
    };
}
