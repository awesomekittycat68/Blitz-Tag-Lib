#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameNoiseEvent.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct GRNoiseEventManager : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRNoiseEventManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GRNoiseEventManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::GRNoiseEventManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        float GetDebugMeshScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("debugMeshScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GRNoiseEventManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GRNoiseEventManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameNoiseEvent>* GetNoiseEvents() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameNoiseEvent>*> _field = GetClass().GetField(O("noiseEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDebugMeshScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("debugMeshScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GRNoiseEventManager* value) {
            static BNM::Field<::GlobalNamespace::GRNoiseEventManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetNoiseEvents(::BNM::Structures::Mono::List<::GlobalNamespace::GameNoiseEvent>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameNoiseEvent>*> _field = GetClass().GetField(O("noiseEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddNoiseEvent(::BNM::Structures::Unity::Vector3 position, float magnitude, float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddNoiseEvent"), {"position", "magnitude", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position, magnitude, duration);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int FindUnusedEventEntry() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FindUnusedEventEntry"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool GetMostRecentNoiseEventInRadius(::BNM::Structures::Unity::Vector3 origin, float radius, ::GlobalNamespace::GameNoiseEvent& outEvent) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetMostRecentNoiseEventInRadius"), {"origin", "radius", "outEvent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(origin, radius, &outEvent);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameNoiseEvent>* GetNoiseEventsInRadius(::BNM::Structures::Unity::Vector3 origin, float radius) {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::GameNoiseEvent>*> _m = GetClass().GetMethod(O("GetNoiseEventsInRadius"), {"origin", "radius"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(origin, radius);
        }
        void RemoveExpiredEvents() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveExpiredEvents"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RenderDebug() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderDebug"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
