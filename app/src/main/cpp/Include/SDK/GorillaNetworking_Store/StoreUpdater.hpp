#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking_Store {
    struct StoreUpdater : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "StoreUpdater");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaNetworking_Store::StoreUpdater* GetInstance() {
            static BNM::Field<::GorillaNetworking_Store::StoreUpdater*> field = GetClass().GetField("instance");
            return field.Get();
        }
        bool GetBLoadFromJSON() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bLoadFromJSON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBUsePlaceHolderJSON() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bUsePlaceHolderJSON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::FXP::CosmeticItemPrefab*>* GetCosmeticItemPrefabsDictionary() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::FXP::CosmeticItemPrefab*>*> _field = GetClass().GetField(O("cosmeticItemPrefabsDictionary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaNetworking_Store::StoreUpdater* GetInstance_f() {
            static BNM::Field<::GorillaNetworking_Store::StoreUpdater*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>* GetPedestalClearCartCoroutines() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("pedestalClearCartCoroutines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>* GetPedestalUpdateCoroutines() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("pedestalUpdateCoroutines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreUpdateEvent*>*>* GetPedestalUpdateEvents() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreUpdateEvent*>*>*> _field = GetClass().GetField(O("pedestalUpdateEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStoreItemsChangeTimeUTC() {
            static BNM::Field<void*> _field = GetClass().GetField(O("StoreItemsChangeTimeUTC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTempJson() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tempJson"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBLoadFromJSON(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bLoadFromJSON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBUsePlaceHolderJSON(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bUsePlaceHolderJSON"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticItemPrefabsDictionary(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::FXP::CosmeticItemPrefab*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::FXP::CosmeticItemPrefab*>*> _field = GetClass().GetField(O("cosmeticItemPrefabsDictionary"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaNetworking_Store::StoreUpdater* value) {
            static BNM::Field<::GorillaNetworking_Store::StoreUpdater*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetPedestalClearCartCoroutines(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("pedestalClearCartCoroutines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPedestalUpdateCoroutines(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("pedestalUpdateCoroutines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPedestalUpdateEvents(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreUpdateEvent*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreUpdateEvent*>*>*> _field = GetClass().GetField(O("pedestalUpdateEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStoreItemsChangeTimeUTC(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("StoreItemsChangeTimeUTC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempJson(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("tempJson"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckEvents(::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreUpdateEvent*>* updateEvents) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckEvents"), {"updateEvents"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(updateEvents);
        }
        void CheckEventsOnResume(::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreUpdateEvent*>* updateEvents) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckEventsOnResume"), {"updateEvents"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(updateEvents);
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreUpdateEvent*>* CreateTempEvents(::BNM::Structures::Mono::String* PedestalID, int minuteDelay, int totalEvents) {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreUpdateEvent*>*> _m = GetClass().GetMethod(O("CreateTempEvents"), {"PedestalID", "minuteDelay", "totalEvents"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(PedestalID, minuteDelay, totalEvents);
        }
        template <typename TP3 = void*>
        ::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreUpdateEvent*>* CreateTempEvents(::BNM::Structures::Mono::String* PedestalID, int minuteDelay, int totalEvents, TP3 startTime) {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreUpdateEvent*>*> _m = GetClass().GetMethod(O("CreateTempEvents"), {"PedestalID", "minuteDelay", "totalEvents", "startTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(PedestalID, minuteDelay, totalEvents, startTime);
        }
        void FindAllCosmeticItemPrefabs() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindAllCosmeticItemPrefabs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* get_DateTimeNowServerAdjusted() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_DateTimeNowServerAdjusted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetEventsFromTitleData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetEventsFromTitleData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GetStoreUpdateEventsPlaceHolder(::BNM::Structures::Mono::String* PedestalID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetStoreUpdateEventsPlaceHolder"), {"PedestalID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(PedestalID);
        }
        ::BNM::Coroutine::IEnumerator* HandleClearCart(::GorillaNetworking_Store::StoreUpdateEvent* updateEvent) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("HandleClearCart"), {"updateEvent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(updateEvent);
        }
        void HandleHMDMounted() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleHMDMounted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HandleHMDUnmounted() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleHMDUnmounted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* HandlePedestalUpdate(::GorillaNetworking_Store::StoreUpdateEvent* updateEvent, bool playFX) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("HandlePedestalUpdate"), {"updateEvent", "playFX"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(updateEvent, playFX);
        }
        void HandleRecievingEventsFromTitleData(::BNM::Structures::Mono::List<::GorillaNetworking_Store::StoreUpdateEvent*>* updateEvents) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleRecievingEventsFromTitleData"), {"updateEvents"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(updateEvents);
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnApplicationFocus(bool hasFocus) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationFocus"), {"hasFocus"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hasFocus);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PedestalAsleep(::FXP::CosmeticItemPrefab* pedestal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PedestalAsleep"), {"pedestal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pedestal);
        }
        void PedestalAwakened(::FXP::CosmeticItemPrefab* pedestal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PedestalAwakened"), {"pedestal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pedestal);
        }
        void PrintJSONEvents() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PrintJSONEvents"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartNextEvent(::BNM::Structures::Mono::String* pedestalID, bool playFX) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartNextEvent"), {"pedestalID", "playFX"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pedestalID, playFX);
        }
    };
}
