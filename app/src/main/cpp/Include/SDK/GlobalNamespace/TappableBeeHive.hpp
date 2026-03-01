#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "Tappable.hpp"
#include "TimeSince.hpp"

namespace GlobalNamespace {
    struct TappableBeeHive : ::GlobalNamespace::Tappable {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TappableBeeHive");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::TimeSince GetTimeSinceLastTap() {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_timeSinceLastTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHoneycombDisableDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("honeycombDisableDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetHoneycombSurface() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("honeycombSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReenableHoneycombAtTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("reenableHoneycombAtTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetReenableHoneycombCoroutine() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("reenableHoneycombCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSwarmEmergeFromPoint() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("swarmEmergeFromPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSwarmEmergeToPoint() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("swarmEmergeToPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTimeSinceLastTap(::GlobalNamespace::TimeSince value) {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_timeSinceLastTap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoneycombDisableDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("honeycombDisableDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoneycombSurface(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("honeycombSurface"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReenableHoneycombAtTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("reenableHoneycombAtTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReenableHoneycombCoroutine(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("reenableHoneycombCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwarmEmergeFromPoint(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("swarmEmergeFromPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwarmEmergeToPoint(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("swarmEmergeToPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSlingshotHit(::GlobalNamespace::SlingshotProjectile* projectile, ::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSlingshotHit"), {"projectile", "collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collision);
        }
        void OnTapLocal(float tapStrength, float tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTapLocal"), {"tapStrength", "tapTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tapStrength, tapTime, info);
        }
    };
}
