#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TimeSince.hpp"
#include "TriggerCondition.hpp"

namespace GlobalNamespace {
    struct ConditionalTrigger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ConditionalTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetIntValue() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_intValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("_distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetFrom() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_from"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInterval() {
            static BNM::Field<float> _field = GetClass().GetField(O("_interval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TimeSince GetTimeSince() {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_timeSince"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTo() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_to"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TriggerCondition GetTracking() {
            static BNM::Field<::GlobalNamespace::TriggerCondition> _field = GetClass().GetField(O("_tracking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnMaxDistance() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onMaxDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnTimeElapsed() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onTimeElapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrom(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_from"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInterval(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_interval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_maxDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeSince(::GlobalNamespace::TimeSince value) {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_timeSince"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTo(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_to"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTracking(::GlobalNamespace::TriggerCondition value) {
            static BNM::Field<::GlobalNamespace::TriggerCondition> _field = GetClass().GetField(O("_tracking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnMaxDistance(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onMaxDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTimeElapsed(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onTimeElapsed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void FindRig(::GlobalNamespace::VRRig*& rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindRig"), {"rig"});
            _m.Call(&rig);
        }
        int get_intValue() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_intValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsTracking(::GlobalNamespace::TriggerCondition condition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTracking"), {"condition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(condition);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetProximityFrom(::Transform* from) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetProximityFrom"), {"from"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(from);
        }
        void SetProximityFromRig() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetProximityFromRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetProximityToRig() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetProximityToRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetProxmityTo(::Transform* to) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetProxmityTo"), {"to"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(to);
        }
        void SetRig_1(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRig"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        void TrackedAdd(::GlobalNamespace::TriggerCondition conditions) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrackedAdd"), {"conditions"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(conditions);
        }
        void TrackedAdd(int conditions) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrackedAdd"), {"conditions"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(conditions);
        }
        void TrackedClear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrackedClear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TrackedRemove(::GlobalNamespace::TriggerCondition conditions) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrackedRemove"), {"conditions"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(conditions);
        }
        void TrackedRemove(int conditions) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrackedRemove"), {"conditions"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(conditions);
        }
        void TrackedSet(::GlobalNamespace::TriggerCondition conditions) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrackedSet"), {"conditions"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(conditions);
        }
        void TrackedSet(int conditions) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrackedSet"), {"conditions"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(conditions);
        }
        void TrackProximity() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrackProximity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TrackTimeElapsed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrackTimeElapsed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
