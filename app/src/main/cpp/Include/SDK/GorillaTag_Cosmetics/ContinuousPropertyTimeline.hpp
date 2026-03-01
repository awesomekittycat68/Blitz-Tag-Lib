#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ContinuousPropertyTimeline_TimelineEndBehavior.hpp"
#include "ContinuousPropertyTimeline_TimelineEvent.hpp"
#include "../GorillaTag_CosmeticSystem/ECosmeticSelectSide.hpp"

namespace GorillaTag_Cosmetics {
    struct ContinuousPropertyTimeline : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "ContinuousPropertyTimeline");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_CosmeticSystem::ECosmeticSelectSide GetCosmeticSelectedSide() {
            static BNM::Method<::GorillaTag_CosmeticSystem::ECosmeticSelectSide> _method = GetClass().GetMethod(O("get_CosmeticSelectedSide"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCosmeticSelectedSide(::GorillaTag_CosmeticSystem::ECosmeticSelectSide value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CosmeticSelectedSide"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsBackward() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsBackward"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsBackward(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsBackward"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsPaused() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsPaused"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsPaused(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsPaused"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsSpawned() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsSpawned"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsSpawned(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsSpawned"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetBackwardDeltaMult() {
            static BNM::Field<float> _field = GetClass().GetField(O("backwardDeltaMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBackwardDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("backwardDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousPropertyArray* GetContinuousProperties() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDurationSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("durationSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousPropertyTimeline_TimelineEndBehavior GetEndBehavior() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyTimeline_TimelineEndBehavior> _field = GetClass().GetField(O("endBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInverseDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("inverseDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsForward() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPlaying() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetMyRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSeparateBackwardDuration() {
            static BNM::Field<bool> _field = GetClass().GetField(O("separateBackwardDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStartPlaying() {
            static BNM::Field<bool> _field = GetClass().GetField(O("startPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("time"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBackwardDeltaMult(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("backwardDeltaMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBackwardDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("backwardDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetContinuousProperties(::GorillaTag_Cosmetics::ContinuousPropertyArray* value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDurationSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("durationSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndBehavior(::GorillaTag_Cosmetics::ContinuousPropertyTimeline_TimelineEndBehavior value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyTimeline_TimelineEndBehavior> _field = GetClass().GetField(O("endBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInverseDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("inverseDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsForward(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPlaying(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IsPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeparateBackwardDuration(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("separateBackwardDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPlaying(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("startPlaying"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("time"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GorillaTag_CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() {
            static BNM::Method<::GorillaTag_CosmeticSystem::ECosmeticSelectSide> _m = GetClass().GetMethod(O("get_CosmeticSelectedSide"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsBackward() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsBackward"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsPaused() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsPaused"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSpawned() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSpawned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InBetween() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InBetween"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDespawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDespawn"));
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
        void OnReachedBeginning() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReachedBeginning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnReachedEnd() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReachedEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSpawn(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawn"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        void set_CosmeticSelectedSide(::GorillaTag_CosmeticSystem::ECosmeticSelectSide value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CosmeticSelectedSide"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsBackward(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsBackward"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsPaused(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsPaused"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsSpawned(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsSpawned"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TimelinePause() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimelinePause"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TimelinePlay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimelinePlay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TimelinePlayBackward() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimelinePlayBackward"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TimelinePlayForward() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimelinePlayForward"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TimelinePlayFromBeginning() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimelinePlayFromBeginning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TimelinePlayFromEnd() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimelinePlayFromEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TimelineScrubToFraction(float f) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimelineScrubToFraction"), {"f"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(f);
        }
        void TimelineScrubToTime(float t) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimelineScrubToTime"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(t);
        }
        void TimelineSetBackwardDuration(float d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimelineSetBackwardDuration"), {"d"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void TimelineSetDuration(float d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimelineSetDuration"), {"d"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void TimelineToggleDirection() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimelineToggleDirection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TimelineTogglePlay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimelineTogglePlay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
