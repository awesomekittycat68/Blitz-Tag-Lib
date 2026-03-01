#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/PhotonMessageInfoWrapped.hpp"

namespace Cosmetics {
    struct CountDrivenEvents : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Cosmetics", "CountDrivenEvents");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCurrentCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurrentCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::RubberDuckEvents* GetEvents() {
            static BNM::Field<::GlobalNamespace::RubberDuckEvents*> _field = GetClass().GetField(O("_events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetCallLimiter() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("callLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentCount_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEvaluateOnEnable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("evaluateOnEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetMyRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnCountChanged() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCountChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnCountChangedShared() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCountChangedShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnCountDecreased() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCountDecreased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnCountDecreasedShared() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCountDecreasedShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnCountIncreased() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCountIncreased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnCountIncreasedShared() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCountIncreasedShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnCountResetToZero() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onCountResetToZero"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnCountResetToZeroShared() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onCountResetToZeroShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnReachedMaxTrigger() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onReachedMaxTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnReachedMaxTriggerShared() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onReachedMaxTriggerShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSyncAllEvents() {
            static BNM::Field<bool> _field = GetClass().GetField(O("syncAllEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Cosmetics::CountDrivenEvents_CountTrigger*>* GetTriggers() {
            static BNM::Field<::BNM::Structures::Mono::List<::Cosmetics::CountDrivenEvents_CountTrigger*>*> _field = GetClass().GetField(O("triggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWrapCount() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wrapCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEvents(::GlobalNamespace::RubberDuckEvents* value) {
            static BNM::Field<::GlobalNamespace::RubberDuckEvents*> _field = GetClass().GetField(O("_events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCallLimiter(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("callLimiter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEvaluateOnEnable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("evaluateOnEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCountChanged(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCountChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCountChangedShared(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCountChangedShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCountDecreased(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCountDecreased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCountDecreasedShared(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCountDecreasedShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCountIncreased(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCountIncreased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCountIncreasedShared(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCountIncreasedShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCountResetToZero(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onCountResetToZero"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCountResetToZeroShared(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onCountResetToZeroShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnReachedMaxTrigger(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onReachedMaxTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnReachedMaxTriggerShared(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onReachedMaxTriggerShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSyncAllEvents(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("syncAllEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggers(::BNM::Structures::Mono::List<::Cosmetics::CountDrivenEvents_CountTrigger*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Cosmetics::CountDrivenEvents_CountTrigger*>*> _field = GetClass().GetField(O("triggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWrapCount(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wrapCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CheckTriggers(int oldCount, int newCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckTriggers"), {"oldCount", "newCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(oldCount, newCount);
        }
        void Decrement() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Decrement"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_CurrentCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurrentCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetHighestTriggerCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHighestTriggerCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Increment() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Increment"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCountChanged_SharedEvent(int sender, int target, ::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCountChanged_SharedEvent"), {"sender", "target", "args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sender, target, args, info);
        }
        void OnCountReached_SharedEvent(int sender, int target, ::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCountReached_SharedEvent"), {"sender", "target", "args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sender, target, args, info);
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
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetTriggers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetTriggers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetCount(int newCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCount"), {"newCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newCount);
        }
    };
}
