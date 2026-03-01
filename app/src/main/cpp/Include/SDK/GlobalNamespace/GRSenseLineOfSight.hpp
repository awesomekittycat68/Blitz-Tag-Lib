#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRSenseLineOfSight_RaycastMode.hpp"

namespace GlobalNamespace {
    struct GRSenseLineOfSight : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRSenseLineOfSight");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GRSenseLineOfSight_RaycastMode GetRayCastMode() {
            static BNM::Field<::GlobalNamespace::GRSenseLineOfSight_RaycastMode> _field = GetClass().GetField(O("rayCastMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSightDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("sightDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetVisibilityHits() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("visibilityHits"));
            return _field.Get();
        }
        void* GetVisibilityMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("visibilityMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRayCastMode(::GlobalNamespace::GRSenseLineOfSight_RaycastMode value) {
            static BNM::Field<::GlobalNamespace::GRSenseLineOfSight_RaycastMode> _field = GetClass().GetField(O("rayCastMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSightDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sightDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetVisibilityHits(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("visibilityHits"));
            _field.Set(value);
        }
        void SetVisibilityMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("visibilityMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static bool HasGeoLineOfSight(::BNM::Structures::Unity::Vector3 headPos, ::BNM::Structures::Unity::Vector3 targetPos, float sightDist, int layerMask) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasGeoLineOfSight"), {"headPos", "targetPos", "sightDist", "layerMask"});
            return _m.Call(headPos, targetPos, sightDist, layerMask);
        }
        bool HasLineOfSight(::BNM::Structures::Unity::Vector3 headPos, ::BNM::Structures::Unity::Vector3 targetPos) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasLineOfSight"), {"headPos", "targetPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(headPos, targetPos);
        }
        static bool HasLineOfSight(::BNM::Structures::Unity::Vector3 headPos, ::BNM::Structures::Unity::Vector3 targetPos, float sightDist, int layerMask, ::GlobalNamespace::GRSenseLineOfSight_RaycastMode rayCastMode) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasLineOfSight"), {"headPos", "targetPos", "sightDist", "layerMask", "rayCastMode"});
            return _m.Call(headPos, targetPos, sightDist, layerMask, rayCastMode);
        }
        static bool HasNavmeshLineOfSight(::BNM::Structures::Unity::Vector3 headPos, ::BNM::Structures::Unity::Vector3 targetPos, float sightDist) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasNavmeshLineOfSight"), {"headPos", "targetPos", "sightDist"});
            return _m.Call(headPos, targetPos, sightDist);
        }
    };
}
