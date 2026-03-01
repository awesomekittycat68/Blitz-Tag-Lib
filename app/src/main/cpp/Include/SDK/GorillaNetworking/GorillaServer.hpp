#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    struct GorillaServer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "GorillaServer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetFeatureFlagsReady() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_FeatureFlagsReady"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::PlayFab_CloudScriptModels::EntityKey* GetPlayerEntity() {
            static BNM::Method<::PlayFab_CloudScriptModels::EntityKey*> _method = GetClass().GetMethod(O("get_playerEntity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetDebug() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debug"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetDefaultDeployFeatureFlagsEnabled() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("DefaultDeployFeatureFlagsEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::TitleDataFeatureFlags* GetFeatureFlags() {
            static BNM::Field<::GorillaNetworking::TitleDataFeatureFlags*> _field = GetClass().GetField(O("featureFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFeatureFlagsTitleDataKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FeatureFlagsTitleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaNetworking::GorillaServer* GetInstance() {
            static BNM::Field<::GorillaNetworking::GorillaServer*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSerializationSettings() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("serializationSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDebug(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debug"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultDeployFeatureFlagsEnabled(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("DefaultDeployFeatureFlagsEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeatureFlags(::GorillaNetworking::TitleDataFeatureFlags* value) {
            static BNM::Field<::GorillaNetworking::TitleDataFeatureFlags*> _field = GetClass().GetField(O("featureFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeatureFlagsTitleDataKey(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("FeatureFlagsTitleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaNetworking::GorillaServer* value) {
            static BNM::Field<::GorillaNetworking::GorillaServer*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetSerializationSettings(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("serializationSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddOrRemoveDLCOwnership(::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::ExecuteFunctionResult*>* successCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddOrRemoveDLCOwnership"), {"successCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(successCallback, errorCallback);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BroadcastMyRoom(::GorillaNetworking::BroadcastMyRoomRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::ExecuteFunctionResult*>* successCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BroadcastMyRoom"), {"request", "successCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, successCallback, errorCallback);
        }
        void CheckForBadName(::GorillaNetworking::CheckForBadNameRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::ExecuteFunctionResult*>* successCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckForBadName"), {"request", "successCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, successCallback, errorCallback);
        }
        bool CheckIsInKIDOptInCohort() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIsInKIDOptInCohort"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CheckIsInKIDRequiredCohort() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIsInKIDRequiredCohort"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CheckIsMothershipTelemetryEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIsMothershipTelemetryEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CheckIsPlayFabTelemetryEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIsPlayFabTelemetryEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CheckIsTZE_Enabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIsTZE_Enabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CheckOptedInKID() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckOptedInKID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename T>
        ::BNM::Structures::Mono::Action<T>* DebugWrapCb(::BNM::Structures::Mono::Action<T>* cb, ::BNM::Structures::Mono::String* label) {
            static BNM::Method<::BNM::Structures::Mono::Action<T>*> _m = GetClass().GetMethod(O("DebugWrapCb"), {"cb", "label"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cb, label);
        }
        bool get_FeatureFlagsReady() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_FeatureFlagsReady"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::PlayFab_CloudScriptModels::EntityKey* get_playerEntity() {
            static BNM::Method<::PlayFab_CloudScriptModels::EntityKey*> _m = GetClass().GetMethod(O("get_playerEntity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetAcceptedAgreements(::GorillaNetworking::GetAcceptedAgreementsRequest* request, ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*>* successCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetAcceptedAgreements"), {"request", "successCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, successCallback, errorCallback);
        }
        void GetRandomName(::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::ExecuteFunctionResult*>* successCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetRandomName"), {"successCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(successCallback, errorCallback);
        }
        bool NewCosmeticsPath() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("NewCosmeticsPath"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool NewCosmeticsPathShouldReadSharedGroupData() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("NewCosmeticsPathShouldReadSharedGroupData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool NewCosmeticsPathShouldSetRoomData() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("NewCosmeticsPathShouldSetRoomData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool NewCosmeticsPathShouldSetSharedGroupData() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("NewCosmeticsPathShouldSetSharedGroupData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnAfterDeserialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAfterDeserialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnBeforeSerialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBeforeSerialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReturnCurrentVersion(::GorillaNetworking::ReturnCurrentVersionRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::ExecuteFunctionResult*>* successCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnCurrentVersion"), {"request", "successCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, successCallback, errorCallback);
        }
        void ReturnMyOculusHash(::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::ExecuteFunctionResult*>* successCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnMyOculusHash"), {"successCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(successCallback, errorCallback);
        }
        void ReturnQueueStats(::GorillaNetworking::ReturnQueueStatsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::ExecuteFunctionResult*>* successCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnQueueStats"), {"request", "successCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, successCallback, errorCallback);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SubmitAcceptedAgreements(::GorillaNetworking::SubmitAcceptedAgreementsRequest* request, ::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::ExecuteFunctionResult*>* successCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SubmitAcceptedAgreements"), {"request", "successCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(request, successCallback, errorCallback);
        }
        ::PlayFab_CloudScriptModels::ExecuteFunctionResult* toFunctionResult(::PlayFab_ClientModels::ExecuteCloudScriptResult* csResult) {
            static BNM::Method<::PlayFab_CloudScriptModels::ExecuteFunctionResult*> _m = GetClass().GetMethod(O("toFunctionResult"), {"csResult"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(csResult);
        }
        void TryDistributeCurrency(::BNM::Structures::Mono::Action<::PlayFab_CloudScriptModels::ExecuteFunctionResult*>* successCallback, ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* errorCallback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryDistributeCurrency"), {"successCallback", "errorCallback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(successCallback, errorCallback);
        }
        void UpdateUserCosmetics() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateUserCosmetics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void UploadGorillanalytics(TP0 uploadData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UploadGorillanalytics"), {"uploadData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(uploadData);
        }
    };
}
