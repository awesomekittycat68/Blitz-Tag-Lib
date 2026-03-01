#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SubscriptionManager_SubscriptionDetails.hpp"
#include "SubscriptionManager_SubscriptionStatus.hpp"

namespace GorillaTagScripts {
    struct SubscriptionManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "SubscriptionManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* FAN_CLUB_BASE_SKU = "fan_club";
        static constexpr const char* SUBSCRIBER_NAME_COLOR_HEX = "#ffc600";
        static constexpr int PERF_SEND_RATE = 20;
        static constexpr const char* SUB_PREFIX = "SMKEYPREFIX";
        static constexpr const char* GOLDEN_NAME_KEY = "SMKEYPREFIXGOLDEN_NAME_KEY";
        static constexpr const char* IOBT_ENABLE_KEY = "SMKEYPREFIXIOBT_ENABLE_KEY";
        bool GetSubsOnlyMatchmaking() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_SubsOnlyMatchmaking"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSubsOnlyMatchmaking(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SubsOnlyMatchmaking"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("attempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetDEFAULTSENDRATE() {
            static BNM::Field<int> _field = GetClass().GetField(O("DEFAULT_SEND_RATE"));
            return _field.Get();
        }
        static ::GorillaTagScripts::SubscriptionManager* GetInstance() {
            static BNM::Field<::GorillaTagScripts::SubscriptionManager*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        static ::GorillaTagScripts::SubscriptionManager_SubscriptionDetails GetLocalSubscriptionDetails() {
            static BNM::Field<::GorillaTagScripts::SubscriptionManager_SubscriptionDetails> _field = GetClass().GetField(O("localSubscriptionDetails"));
            return _field.Get();
        }
        static int GetMaxRetries() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRetries"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnLocalSubscriptionData() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnLocalSubscriptionData"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnSubscriptionData() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnSubscriptionData"));
            return _field.Get();
        }
        static int GetPERFCHANGEROOMSIZE() {
            static BNM::Field<int> _field = GetClass().GetField(O("PERF_CHANGE_ROOMSIZE"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::VRRig*, ::GlobalNamespace::NetPlayer*>* GetRigs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::VRRig*, ::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("rigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GorillaTagScripts::SubscriptionManager_SubscriptionDetails>* GetSubData() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GorillaTagScripts::SubscriptionManager_SubscriptionDetails>*> _field = GetClass().GetField(O("subData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Color GetSUBSCRIBERNAMECOLOR() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("SUBSCRIBER_NAME_COLOR"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* GetSubSettings() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("subSettings"));
            return _field.Get();
        }
        void SetAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("attempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetDEFAULTSENDRATE(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("DEFAULT_SEND_RATE"));
            _field.Set(value);
        }
        static void SetInstance(::GorillaTagScripts::SubscriptionManager* value) {
            static BNM::Field<::GorillaTagScripts::SubscriptionManager*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        static void SetLocalSubscriptionDetails(::GorillaTagScripts::SubscriptionManager_SubscriptionDetails value) {
            static BNM::Field<::GorillaTagScripts::SubscriptionManager_SubscriptionDetails> _field = GetClass().GetField(O("localSubscriptionDetails"));
            _field.Set(value);
        }
        static void SetMaxRetries(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRetries"));
            _field.Set(value);
        }
        static void SetOnLocalSubscriptionData(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnLocalSubscriptionData"));
            _field.Set(value);
        }
        static void SetOnSubscriptionData(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnSubscriptionData"));
            _field.Set(value);
        }
        static void SetPERFCHANGEROOMSIZE(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("PERF_CHANGE_ROOMSIZE"));
            _field.Set(value);
        }
        void SetRigs(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::VRRig*, ::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::VRRig*, ::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("rigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubData(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GorillaTagScripts::SubscriptionManager_SubscriptionDetails>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GorillaTagScripts::SubscriptionManager_SubscriptionDetails>*> _field = GetClass().GetField(O("subData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSUBSCRIBERNAMECOLOR(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("SUBSCRIBER_NAME_COLOR"));
            _field.Set(value);
        }
        static void SetSubSettings(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, int>*> _field = GetClass().GetField(O("subSettings"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void ForceRecheck() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceRecheck"));
            _m.Call();
        }
        static bool get_SubsOnlyMatchmaking() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_SubsOnlyMatchmaking"));
            return _m.Call();
        }
        ::GlobalNamespace::NetPlayer* GetLowestNetPlayer(::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* players) {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("GetLowestNetPlayer"), {"players"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(players);
        }
        static ::GorillaTagScripts::SubscriptionManager_SubscriptionDetails GetSubscriptionDetails() {
            static BNM::Method<::GorillaTagScripts::SubscriptionManager_SubscriptionDetails> _m = GetClass().GetMethod(O("GetSubscriptionDetails"));
            return _m.Call();
        }
        static ::GorillaTagScripts::SubscriptionManager_SubscriptionDetails GetSubscriptionDetails(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<::GorillaTagScripts::SubscriptionManager_SubscriptionDetails> _m = GetClass().GetMethod(O("GetSubscriptionDetails"), {"rig"});
            return _m.Call(rig);
        }
        static ::GorillaTagScripts::SubscriptionManager_SubscriptionDetails GetSubscriptionDetails(::GlobalNamespace::NetPlayer* np) {
            static BNM::Method<::GorillaTagScripts::SubscriptionManager_SubscriptionDetails> _m = GetClass().GetMethod(O("GetSubscriptionDetails"), {"np"});
            return _m.Call(np);
        }
        static int GetSubscriptionSettingValue(::BNM::Structures::Mono::String* settingKey) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetSubscriptionSettingValue"), {"settingKey"});
            return _m.Call(settingKey);
        }
        static void InitializePersonalSubscriptionData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializePersonalSubscriptionData"));
            _m.Call();
        }
        static bool IsLocalSubscribed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLocalSubscribed"));
            return _m.Call();
        }
        static ::GorillaTagScripts::SubscriptionManager_SubscriptionDetails LocalSubscriptionDetails() {
            static BNM::Method<::GorillaTagScripts::SubscriptionManager_SubscriptionDetails> _m = GetClass().GetMethod(O("LocalSubscriptionDetails"));
            return _m.Call();
        }
        static ::GorillaTagScripts::SubscriptionManager_SubscriptionStatus LocalSubscriptionStatus() {
            static BNM::Method<::GorillaTagScripts::SubscriptionManager_SubscriptionStatus> _m = GetClass().GetMethod(O("LocalSubscriptionStatus"));
            return _m.Call();
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
        void OnGetViewerPurchasesStartup(::Oculus_Platform::Message* msg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetViewerPurchasesStartup"), {"msg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(msg);
        }
        static void OnLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLoad"));
            _m.Call();
        }
        void OnPlayerJoinedRoom(::GlobalNamespace::NetPlayer* npl) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerJoinedRoom"), {"npl"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(npl);
        }
        void OnPlayerLeft(::GlobalNamespace::NetPlayer* pl) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeft"), {"pl"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pl);
        }
        static void set_SubsOnlyMatchmaking(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SubsOnlyMatchmaking"), {"value"});
            _m.Call(value);
        }
        static void SetSubscriptionSettingValue(::BNM::Structures::Mono::String* settingKey, int settingValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSubscriptionSettingValue"), {"settingKey", "settingValue"});
            _m.Call(settingKey, settingValue);
        }
        static void UpdatePlayerSubscriptionData(::GlobalNamespace::NetPlayer* player, bool isSubscribed, int daysAccrued) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerSubscriptionData"), {"player", "isSubscribed", "daysAccrued"});
            _m.Call(player, isSubscribed, daysAccrued);
        }
        template <typename TP1 = void*, typename TP2 = void*>
        void UpdatePlayerSubsDetails(::GlobalNamespace::NetPlayer* player, TP1 isSubscribed, TP2 daysAccrued) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerSubsDetails"), {"player", "isSubscribed", "daysAccrued"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, isSubscribed, daysAccrued);
        }
    };
}
