#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AbuseReportType.hpp"
#include "AbuseReportVideoMode.hpp"
#include "AccountAgeCategory.hpp"
#include "AchievementType.hpp"
#include "AppAgeCategory.hpp"
#include "AppInstallResult.hpp"
#include "AppStatus.hpp"
#include "CAPI_OculusInitParams.hpp"
#include "CAPI_ovrKeyValuePair.hpp"
#include "CAPI_ovrNetSyncVec3.hpp"
#include "ChallengeCreationType.hpp"
#include "ChallengeViewerFilter.hpp"
#include "ChallengeVisibility.hpp"
#include "InitConfigOptions.hpp"
#include "LaunchResult.hpp"
#include "LaunchType.hpp"
#include "LeaderboardFilterType.hpp"
#include "LeaderboardStartAt.hpp"
#include "LivestreamingAudience.hpp"
#include "LivestreamingMicrophoneStatus.hpp"
#include "LivestreamingStartStatus.hpp"
#include "LogEventName.hpp"
#include "MediaContentType.hpp"
#include "Message_MessageType.hpp"
#include "MultiplayerErrorErrorKey.hpp"
#include "NetSyncConnectionStatus.hpp"
#include "NetSyncDisconnectReason.hpp"
#include "NetSyncVoipMicSource.hpp"
#include "NetSyncVoipStreamMode.hpp"
#include "OfferTerm.hpp"
#include "OfferType.hpp"
#include "PartyUpdateAction.hpp"
#include "PlatformInitializeResult.hpp"
#include "ProductType.hpp"
#include "ReportRequestResponse.hpp"
#include "SdkAccountType.hpp"
#include "ServiceProvider.hpp"
#include "ShareMediaStatus.hpp"
#include "SystemVoipStatus.hpp"
#include "TimeWindow.hpp"
#include "UserPresenceStatus.hpp"
#include "VoipBitrate.hpp"
#include "VoipDtxState.hpp"
#include "VoipMuteState.hpp"
#include "VoipSampleRate.hpp"

namespace Oculus_Platform {
    struct CAPI : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "CAPI");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* DLL_NAME = "ovrplatformloader";
        static constexpr int VoipFilterBufferSize = 480;
        static ::BNM::IL2CPP::Il2CppObject* GetNativeStringEncoding() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nativeStringEncoding"));
            return _field.Get();
        }
        static void SetNativeStringEncoding(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("nativeStringEncoding"));
            _field.Set(value);
        }
        static ::BNM::Types::nint ArrayOfStructsToIntPtr(::BNM::IL2CPP::Il2CppObject* ar) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ArrayOfStructsToIntPtr"), {"ar"});
            return _m.Call(ar);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* BlobFromNative(uint32_t size, ::BNM::Types::nint pointer) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("BlobFromNative"), {"size", "pointer"});
            return _m.Call(size, pointer);
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* DataStoreFromNative(::BNM::Types::nint pointer) {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("DataStoreFromNative"), {"pointer"});
            return _m.Call(pointer);
        }
        static void* DateTimeFromNative(uint64_t seconds_since_the_one_true_epoch) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DateTimeFromNative"), {"seconds_since_the_one_true_epoch"});
            return _m.Call(seconds_since_the_one_true_epoch);
        }
        template <typename TP0 = void*>
        static uint64_t DateTimeToNative(TP0 dt) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("DateTimeToNative"), {"dt"});
            return _m.Call(dt);
        }
        static ::BNM::Structures::Mono::Array<::Oculus_Platform::CAPI_ovrKeyValuePair>* DictionaryToOVRKeyValuePairs(::BNM::Structures::Mono::Dictionary<::Oculus_Platform::InitConfigOptions, bool>* dict) {
            static BNM::Method<::BNM::Structures::Mono::Array<::Oculus_Platform::CAPI_ovrKeyValuePair>*> _m = GetClass().GetMethod(O("DictionaryToOVRKeyValuePairs"), {"dict"});
            return _m.Call(dict);
        }
        static ::BNM::Structures::Mono::Array<::Oculus_Platform::CAPI_ovrKeyValuePair>* DictionaryToOVRKeyValuePairs(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* dict) {
            static BNM::Method<::BNM::Structures::Mono::Array<::Oculus_Platform::CAPI_ovrKeyValuePair>*> _m = GetClass().GetMethod(O("DictionaryToOVRKeyValuePairs"), {"dict"});
            return _m.Call(dict);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* FiledataFromNative(uint32_t size, ::BNM::Types::nint pointer) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("FiledataFromNative"), {"size", "pointer"});
            return _m.Call(size, pointer);
        }
        static int GetNativeStringLengthNotIncludingNullTerminator(::BNM::Types::nint pointer) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNativeStringLengthNotIncludingNullTerminator"), {"pointer"});
            return _m.Call(pointer);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* IntPtrToByteArray(::BNM::Types::nint data, uint64_t size) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("IntPtrToByteArray"), {"data", "size"});
            return _m.Call(data, size);
        }
        static void LogNewEvent(::BNM::Structures::Mono::String* eventName, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* values) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogNewEvent"), {"eventName", "values"});
            _m.Call(eventName, values);
        }
        static void LogNewUnifiedEvent(::Oculus_Platform::LogEventName eventName, ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* values) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogNewUnifiedEvent"), {"eventName", "values"});
            _m.Call(eventName, values);
        }
        static uint64_t ovr_AbuseReport_LaunchAdvancedReportFlow(uint64_t content_id, ::BNM::Types::nint abuse_report_options) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AbuseReport_LaunchAdvancedReportFlow"), {"content_id", "abuse_report_options"});
            return _m.Call(content_id, abuse_report_options);
        }
        static uint64_t ovr_AbuseReport_ReportRequestHandled(::Oculus_Platform::ReportRequestResponse response) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AbuseReport_ReportRequestHandled"), {"response"});
            return _m.Call(response);
        }
        static ::BNM::Types::nint ovr_AbuseReportOptions_Create() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AbuseReportOptions_Create"));
            return _m.Call();
        }
        static void ovr_AbuseReportOptions_Destroy(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AbuseReportOptions_Destroy"), {"handle"});
            _m.Call(handle);
        }
        static void ovr_AbuseReportOptions_SetPreventPeopleChooser(::BNM::Types::nint handle, bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AbuseReportOptions_SetPreventPeopleChooser"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_AbuseReportOptions_SetReportType(::BNM::Types::nint handle, ::Oculus_Platform::AbuseReportType value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AbuseReportOptions_SetReportType"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static ::BNM::Structures::Mono::String* ovr_AbuseReportRecording_GetRecordingUuid(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_AbuseReportRecording_GetRecordingUuid"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AbuseReportRecording_GetRecordingUuid_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AbuseReportRecording_GetRecordingUuid_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint32_t ovr_AchievementDefinition_GetBitfieldLength(::BNM::Types::nint obj) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ovr_AchievementDefinition_GetBitfieldLength"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_AchievementDefinition_GetName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_AchievementDefinition_GetName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AchievementDefinition_GetName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AchievementDefinition_GetName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_AchievementDefinition_GetTarget(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AchievementDefinition_GetTarget"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::AchievementType ovr_AchievementDefinition_GetType(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::AchievementType> _m = GetClass().GetMethod(O("ovr_AchievementDefinition_GetType"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AchievementDefinitionArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AchievementDefinitionArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Structures::Mono::String* ovr_AchievementDefinitionArray_GetNextUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_AchievementDefinitionArray_GetNextUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AchievementDefinitionArray_GetNextUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AchievementDefinitionArray_GetNextUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_AchievementDefinitionArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_AchievementDefinitionArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_AchievementDefinitionArray_HasNextPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_AchievementDefinitionArray_HasNextPage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_AchievementProgress_GetBitfield(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_AchievementProgress_GetBitfield"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AchievementProgress_GetBitfield_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AchievementProgress_GetBitfield_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_AchievementProgress_GetCount(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AchievementProgress_GetCount"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_AchievementProgress_GetIsUnlocked(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_AchievementProgress_GetIsUnlocked"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_AchievementProgress_GetName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_AchievementProgress_GetName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AchievementProgress_GetName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AchievementProgress_GetName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static void* ovr_AchievementProgress_GetUnlockTime(::BNM::Types::nint obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ovr_AchievementProgress_GetUnlockTime"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_AchievementProgress_GetUnlockTime_Native(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AchievementProgress_GetUnlockTime_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AchievementProgressArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AchievementProgressArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Structures::Mono::String* ovr_AchievementProgressArray_GetNextUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_AchievementProgressArray_GetNextUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AchievementProgressArray_GetNextUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AchievementProgressArray_GetNextUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_AchievementProgressArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_AchievementProgressArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_AchievementProgressArray_HasNextPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_AchievementProgressArray_HasNextPage"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Achievements_AddCount(::BNM::Structures::Mono::String* name, uint64_t count) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Achievements_AddCount"), {"name", "count"});
            return _m.Call(name, count);
        }
        static uint64_t ovr_Achievements_AddCount_Native(::BNM::Types::nint name, uint64_t count) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Achievements_AddCount_Native"), {"name", "count"});
            return _m.Call(name, count);
        }
        static uint64_t ovr_Achievements_AddFields(::BNM::Structures::Mono::String* name, ::BNM::Structures::Mono::String* fields) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Achievements_AddFields"), {"name", "fields"});
            return _m.Call(name, fields);
        }
        static uint64_t ovr_Achievements_AddFields_Native(::BNM::Types::nint name, ::BNM::Types::nint fields) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Achievements_AddFields_Native"), {"name", "fields"});
            return _m.Call(name, fields);
        }
        static uint64_t ovr_Achievements_GetAllDefinitions() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Achievements_GetAllDefinitions"));
            return _m.Call();
        }
        static uint64_t ovr_Achievements_GetAllProgress() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Achievements_GetAllProgress"));
            return _m.Call();
        }
        static uint64_t ovr_Achievements_GetDefinitionsByName(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* names, int count) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Achievements_GetDefinitionsByName"), {"names", "count"});
            return _m.Call(names, count);
        }
        static uint64_t ovr_Achievements_GetProgressByName(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* names, int count) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Achievements_GetProgressByName"), {"names", "count"});
            return _m.Call(names, count);
        }
        static uint64_t ovr_Achievements_Unlock(::BNM::Structures::Mono::String* name) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Achievements_Unlock"), {"name"});
            return _m.Call(name);
        }
        static uint64_t ovr_Achievements_Unlock_Native(::BNM::Types::nint name) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Achievements_Unlock_Native"), {"name"});
            return _m.Call(name);
        }
        static bool ovr_AchievementUpdate_GetJustUnlocked(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_AchievementUpdate_GetJustUnlocked"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_AchievementUpdate_GetName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_AchievementUpdate_GetName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AchievementUpdate_GetName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AchievementUpdate_GetName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static void ovr_AdvancedAbuseReportOptions_AddSuggestedUser(::BNM::Types::nint handle, uint64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AdvancedAbuseReportOptions_AddSuggestedUser"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext"), {"handle"});
            _m.Call(handle);
        }
        static void ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers"), {"handle"});
            _m.Call(handle);
        }
        static ::BNM::Types::nint ovr_AdvancedAbuseReportOptions_Create() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AdvancedAbuseReportOptions_Create"));
            return _m.Call();
        }
        static void ovr_AdvancedAbuseReportOptions_Destroy(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AdvancedAbuseReportOptions_Destroy"), {"handle"});
            _m.Call(handle);
        }
        static void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString"), {"handle", "key", "value"});
            _m.Call(handle, key, value);
        }
        static void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native(::BNM::Types::nint handle, ::BNM::Types::nint key, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native"), {"handle", "key", "value"});
            _m.Call(handle, key, value);
        }
        static void ovr_AdvancedAbuseReportOptions_SetObjectType(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AdvancedAbuseReportOptions_SetObjectType"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_AdvancedAbuseReportOptions_SetObjectType_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AdvancedAbuseReportOptions_SetObjectType_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_AdvancedAbuseReportOptions_SetReportType(::BNM::Types::nint handle, ::Oculus_Platform::AbuseReportType value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AdvancedAbuseReportOptions_SetReportType"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_AdvancedAbuseReportOptions_SetVideoMode(::BNM::Types::nint handle, ::Oculus_Platform::AbuseReportVideoMode value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AdvancedAbuseReportOptions_SetVideoMode"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static int64_t ovr_AppDownloadProgressResult_GetDownloadBytes(::BNM::Types::nint obj) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ovr_AppDownloadProgressResult_GetDownloadBytes"), {"obj"});
            return _m.Call(obj);
        }
        static int64_t ovr_AppDownloadProgressResult_GetDownloadedBytes(::BNM::Types::nint obj) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ovr_AppDownloadProgressResult_GetDownloadedBytes"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::AppStatus ovr_AppDownloadProgressResult_GetStatusCode(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::AppStatus> _m = GetClass().GetMethod(O("ovr_AppDownloadProgressResult_GetStatusCode"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::AppInstallResult ovr_AppDownloadResult_GetAppInstallResult(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::AppInstallResult> _m = GetClass().GetMethod(O("ovr_AppDownloadResult_GetAppInstallResult"), {"obj"});
            return _m.Call(obj);
        }
        static int64_t ovr_AppDownloadResult_GetTimestamp(::BNM::Types::nint obj) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ovr_AppDownloadResult_GetTimestamp"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Application_CancelAppDownload() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Application_CancelAppDownload"));
            return _m.Call();
        }
        static uint64_t ovr_Application_CheckAppDownloadProgress() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Application_CheckAppDownloadProgress"));
            return _m.Call();
        }
        static uint64_t ovr_Application_GetID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Application_GetID"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Application_GetInstalledApplications() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Application_GetInstalledApplications"));
            return _m.Call();
        }
        static uint64_t ovr_Application_GetVersion() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Application_GetVersion"));
            return _m.Call();
        }
        static uint64_t ovr_Application_InstallAppUpdateAndRelaunch(::BNM::Types::nint deeplink_options) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Application_InstallAppUpdateAndRelaunch"), {"deeplink_options"});
            return _m.Call(deeplink_options);
        }
        static uint64_t ovr_Application_LaunchOtherApp(uint64_t appID, ::BNM::Types::nint deeplink_options) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Application_LaunchOtherApp"), {"appID", "deeplink_options"});
            return _m.Call(appID, deeplink_options);
        }
        static uint64_t ovr_Application_StartAppDownload() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Application_StartAppDownload"));
            return _m.Call();
        }
        static ::BNM::Types::nint ovr_ApplicationInvite_GetDestination(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ApplicationInvite_GetDestination"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_ApplicationInvite_GetID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_ApplicationInvite_GetID"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_ApplicationInvite_GetIsActive(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_ApplicationInvite_GetIsActive"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ApplicationInvite_GetLobbySessionId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ApplicationInvite_GetLobbySessionId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ApplicationInvite_GetLobbySessionId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ApplicationInvite_GetLobbySessionId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ApplicationInvite_GetMatchSessionId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ApplicationInvite_GetMatchSessionId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ApplicationInvite_GetMatchSessionId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ApplicationInvite_GetMatchSessionId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ApplicationInvite_GetRecipient(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ApplicationInvite_GetRecipient"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ApplicationInviteArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ApplicationInviteArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Structures::Mono::String* ovr_ApplicationInviteArray_GetNextUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ApplicationInviteArray_GetNextUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ApplicationInviteArray_GetNextUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ApplicationInviteArray_GetNextUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_ApplicationInviteArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_ApplicationInviteArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_ApplicationInviteArray_HasNextPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_ApplicationInviteArray_HasNextPage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ApplicationLifecycle_GetLaunchDetails() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ApplicationLifecycle_GetLaunchDetails"));
            return _m.Call();
        }
        static uint64_t ovr_ApplicationLifecycle_GetRegisteredPIDs() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_ApplicationLifecycle_GetRegisteredPIDs"));
            return _m.Call();
        }
        static uint64_t ovr_ApplicationLifecycle_GetSessionKey() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_ApplicationLifecycle_GetSessionKey"));
            return _m.Call();
        }
        static void ovr_ApplicationLifecycle_LogDeeplinkResult(::BNM::Structures::Mono::String* trackingID, ::Oculus_Platform::LaunchResult result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ApplicationLifecycle_LogDeeplinkResult"), {"trackingID", "result"});
            _m.Call(trackingID, result);
        }
        static void ovr_ApplicationLifecycle_LogDeeplinkResult_Native(::BNM::Types::nint trackingID, ::Oculus_Platform::LaunchResult result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ApplicationLifecycle_LogDeeplinkResult_Native"), {"trackingID", "result"});
            _m.Call(trackingID, result);
        }
        static uint64_t ovr_ApplicationLifecycle_RegisterSessionKey(::BNM::Structures::Mono::String* sessionKey) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_ApplicationLifecycle_RegisterSessionKey"), {"sessionKey"});
            return _m.Call(sessionKey);
        }
        static uint64_t ovr_ApplicationLifecycle_RegisterSessionKey_Native(::BNM::Types::nint sessionKey) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_ApplicationLifecycle_RegisterSessionKey_Native"), {"sessionKey"});
            return _m.Call(sessionKey);
        }
        static ::BNM::Types::nint ovr_ApplicationOptions_Create() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ApplicationOptions_Create"));
            return _m.Call();
        }
        static void ovr_ApplicationOptions_Destroy(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ApplicationOptions_Destroy"), {"handle"});
            _m.Call(handle);
        }
        static void ovr_ApplicationOptions_SetDeeplinkMessage(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ApplicationOptions_SetDeeplinkMessage"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ApplicationOptions_SetDeeplinkMessage_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ApplicationOptions_SetDeeplinkMessage_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ApplicationOptions_SetDestinationApiName(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ApplicationOptions_SetDestinationApiName"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ApplicationOptions_SetDestinationApiName_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ApplicationOptions_SetDestinationApiName_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ApplicationOptions_SetLobbySessionId(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ApplicationOptions_SetLobbySessionId"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ApplicationOptions_SetLobbySessionId_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ApplicationOptions_SetLobbySessionId_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ApplicationOptions_SetMatchSessionId(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ApplicationOptions_SetMatchSessionId"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ApplicationOptions_SetMatchSessionId_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ApplicationOptions_SetMatchSessionId_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ApplicationOptions_SetRoomId(::BNM::Types::nint handle, uint64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ApplicationOptions_SetRoomId"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static int ovr_ApplicationVersion_GetCurrentCode(::BNM::Types::nint obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ovr_ApplicationVersion_GetCurrentCode"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ApplicationVersion_GetCurrentName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ApplicationVersion_GetCurrentName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ApplicationVersion_GetCurrentName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ApplicationVersion_GetCurrentName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static int ovr_ApplicationVersion_GetLatestCode(::BNM::Types::nint obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ovr_ApplicationVersion_GetLatestCode"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ApplicationVersion_GetLatestName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ApplicationVersion_GetLatestName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ApplicationVersion_GetLatestName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ApplicationVersion_GetLatestName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static int64_t ovr_ApplicationVersion_GetReleaseDate(::BNM::Types::nint obj) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ovr_ApplicationVersion_GetReleaseDate"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ApplicationVersion_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ApplicationVersion_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ApplicationVersion_GetSize_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ApplicationVersion_GetSize_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_AssetDetails_GetAssetId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetDetails_GetAssetId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_AssetDetails_GetAssetType(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_AssetDetails_GetAssetType"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AssetDetails_GetAssetType_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AssetDetails_GetAssetType_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_AssetDetails_GetDownloadStatus(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_AssetDetails_GetDownloadStatus"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AssetDetails_GetDownloadStatus_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AssetDetails_GetDownloadStatus_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_AssetDetails_GetFilepath(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_AssetDetails_GetFilepath"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AssetDetails_GetFilepath_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AssetDetails_GetFilepath_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_AssetDetails_GetIapStatus(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_AssetDetails_GetIapStatus"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AssetDetails_GetIapStatus_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AssetDetails_GetIapStatus_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AssetDetails_GetLanguage(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AssetDetails_GetLanguage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_AssetDetails_GetMetadata(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_AssetDetails_GetMetadata"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AssetDetails_GetMetadata_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AssetDetails_GetMetadata_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AssetDetailsArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AssetDetailsArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Types::nuint ovr_AssetDetailsArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_AssetDetailsArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_AssetFile_Delete(uint64_t assetFileID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_Delete"), {"assetFileID"});
            return _m.Call(assetFileID);
        }
        static uint64_t ovr_AssetFile_DeleteById(uint64_t assetFileID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_DeleteById"), {"assetFileID"});
            return _m.Call(assetFileID);
        }
        static uint64_t ovr_AssetFile_DeleteByName(::BNM::Structures::Mono::String* assetFileName) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_DeleteByName"), {"assetFileName"});
            return _m.Call(assetFileName);
        }
        static uint64_t ovr_AssetFile_DeleteByName_Native(::BNM::Types::nint assetFileName) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_DeleteByName_Native"), {"assetFileName"});
            return _m.Call(assetFileName);
        }
        static uint64_t ovr_AssetFile_Download(uint64_t assetFileID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_Download"), {"assetFileID"});
            return _m.Call(assetFileID);
        }
        static uint64_t ovr_AssetFile_DownloadById(uint64_t assetFileID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_DownloadById"), {"assetFileID"});
            return _m.Call(assetFileID);
        }
        static uint64_t ovr_AssetFile_DownloadByName(::BNM::Structures::Mono::String* assetFileName) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_DownloadByName"), {"assetFileName"});
            return _m.Call(assetFileName);
        }
        static uint64_t ovr_AssetFile_DownloadByName_Native(::BNM::Types::nint assetFileName) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_DownloadByName_Native"), {"assetFileName"});
            return _m.Call(assetFileName);
        }
        static uint64_t ovr_AssetFile_DownloadCancel(uint64_t assetFileID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_DownloadCancel"), {"assetFileID"});
            return _m.Call(assetFileID);
        }
        static uint64_t ovr_AssetFile_DownloadCancelById(uint64_t assetFileID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_DownloadCancelById"), {"assetFileID"});
            return _m.Call(assetFileID);
        }
        static uint64_t ovr_AssetFile_DownloadCancelByName(::BNM::Structures::Mono::String* assetFileName) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_DownloadCancelByName"), {"assetFileName"});
            return _m.Call(assetFileName);
        }
        static uint64_t ovr_AssetFile_DownloadCancelByName_Native(::BNM::Types::nint assetFileName) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_DownloadCancelByName_Native"), {"assetFileName"});
            return _m.Call(assetFileName);
        }
        static uint64_t ovr_AssetFile_GetList() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_GetList"));
            return _m.Call();
        }
        static uint64_t ovr_AssetFile_Status(uint64_t assetFileID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_Status"), {"assetFileID"});
            return _m.Call(assetFileID);
        }
        static uint64_t ovr_AssetFile_StatusById(uint64_t assetFileID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_StatusById"), {"assetFileID"});
            return _m.Call(assetFileID);
        }
        static uint64_t ovr_AssetFile_StatusByName(::BNM::Structures::Mono::String* assetFileName) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_StatusByName"), {"assetFileName"});
            return _m.Call(assetFileName);
        }
        static uint64_t ovr_AssetFile_StatusByName_Native(::BNM::Types::nint assetFileName) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFile_StatusByName_Native"), {"assetFileName"});
            return _m.Call(assetFileName);
        }
        static uint64_t ovr_AssetFileDeleteResult_GetAssetFileId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFileDeleteResult_GetAssetFileId"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_AssetFileDeleteResult_GetAssetId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFileDeleteResult_GetAssetId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_AssetFileDeleteResult_GetFilepath(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_AssetFileDeleteResult_GetFilepath"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AssetFileDeleteResult_GetFilepath_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AssetFileDeleteResult_GetFilepath_Native"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_AssetFileDeleteResult_GetSuccess(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_AssetFileDeleteResult_GetSuccess"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_AssetFileDownloadCancelResult_GetAssetFileId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFileDownloadCancelResult_GetAssetFileId"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_AssetFileDownloadCancelResult_GetAssetId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFileDownloadCancelResult_GetAssetId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_AssetFileDownloadCancelResult_GetFilepath(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_AssetFileDownloadCancelResult_GetFilepath"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AssetFileDownloadCancelResult_GetFilepath_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AssetFileDownloadCancelResult_GetFilepath_Native"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_AssetFileDownloadCancelResult_GetSuccess(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_AssetFileDownloadCancelResult_GetSuccess"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_AssetFileDownloadResult_GetAssetId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFileDownloadResult_GetAssetId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_AssetFileDownloadResult_GetFilepath(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_AssetFileDownloadResult_GetFilepath"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_AssetFileDownloadResult_GetFilepath_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AssetFileDownloadResult_GetFilepath_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_AssetFileDownloadUpdate_GetAssetFileId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFileDownloadUpdate_GetAssetFileId"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_AssetFileDownloadUpdate_GetAssetId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFileDownloadUpdate_GetAssetId"), {"obj"});
            return _m.Call(obj);
        }
        static uint32_t ovr_AssetFileDownloadUpdate_GetBytesTotal(::BNM::Types::nint obj) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ovr_AssetFileDownloadUpdate_GetBytesTotal"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_AssetFileDownloadUpdate_GetBytesTotalLong(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_AssetFileDownloadUpdate_GetBytesTotalLong"), {"obj"});
            return _m.Call(obj);
        }
        static int ovr_AssetFileDownloadUpdate_GetBytesTransferred(::BNM::Types::nint obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ovr_AssetFileDownloadUpdate_GetBytesTransferred"), {"obj"});
            return _m.Call(obj);
        }
        static int64_t ovr_AssetFileDownloadUpdate_GetBytesTransferredLong(::BNM::Types::nint obj) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ovr_AssetFileDownloadUpdate_GetBytesTransferredLong"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_AssetFileDownloadUpdate_GetCompleted(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_AssetFileDownloadUpdate_GetCompleted"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Avatar_LaunchAvatarEditor(::BNM::Types::nint options) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Avatar_LaunchAvatarEditor"), {"options"});
            return _m.Call(options);
        }
        static uint64_t ovr_Avatar_UpdateMetaData(::BNM::Structures::Mono::String* avatarMetaData, ::BNM::Structures::Mono::String* imageFilePath) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Avatar_UpdateMetaData"), {"avatarMetaData", "imageFilePath"});
            return _m.Call(avatarMetaData, imageFilePath);
        }
        static uint64_t ovr_Avatar_UpdateMetaData_Native(::BNM::Types::nint avatarMetaData, ::BNM::Types::nint imageFilePath) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Avatar_UpdateMetaData_Native"), {"avatarMetaData", "imageFilePath"});
            return _m.Call(avatarMetaData, imageFilePath);
        }
        static ::BNM::Types::nint ovr_AvatarEditorOptions_Create() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_AvatarEditorOptions_Create"));
            return _m.Call();
        }
        static void ovr_AvatarEditorOptions_Destroy(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AvatarEditorOptions_Destroy"), {"handle"});
            _m.Call(handle);
        }
        static void ovr_AvatarEditorOptions_SetSourceOverride(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AvatarEditorOptions_SetSourceOverride"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_AvatarEditorOptions_SetSourceOverride_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_AvatarEditorOptions_SetSourceOverride_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static bool ovr_AvatarEditorResult_GetRequestSent(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_AvatarEditorResult_GetRequestSent"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_BillingPlan_GetPaidOffer(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_BillingPlan_GetPaidOffer"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_BillingPlan_GetTrialOffers(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_BillingPlan_GetTrialOffers"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_BillingPlanArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_BillingPlanArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Types::nuint ovr_BillingPlanArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_BillingPlanArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_BlockedUser_GetId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_BlockedUser_GetId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_BlockedUserArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_BlockedUserArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Structures::Mono::String* ovr_BlockedUserArray_GetNextUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_BlockedUserArray_GetNextUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_BlockedUserArray_GetNextUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_BlockedUserArray_GetNextUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_BlockedUserArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_BlockedUserArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_BlockedUserArray_HasNextPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_BlockedUserArray_HasNextPage"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::ChallengeCreationType ovr_Challenge_GetCreationType(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::ChallengeCreationType> _m = GetClass().GetMethod(O("ovr_Challenge_GetCreationType"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Challenge_GetDescription(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Challenge_GetDescription"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Challenge_GetDescription_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Challenge_GetDescription_Native"), {"obj"});
            return _m.Call(obj);
        }
        static void* ovr_Challenge_GetEndDate(::BNM::Types::nint obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ovr_Challenge_GetEndDate"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Challenge_GetEndDate_Native(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenge_GetEndDate_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Challenge_GetID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenge_GetID"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Challenge_GetInvitedUsers(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Challenge_GetInvitedUsers"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Challenge_GetLeaderboard(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Challenge_GetLeaderboard"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Challenge_GetParticipants(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Challenge_GetParticipants"), {"obj"});
            return _m.Call(obj);
        }
        static void* ovr_Challenge_GetStartDate(::BNM::Types::nint obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ovr_Challenge_GetStartDate"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Challenge_GetStartDate_Native(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenge_GetStartDate_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Challenge_GetTitle(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Challenge_GetTitle"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Challenge_GetTitle_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Challenge_GetTitle_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::ChallengeVisibility ovr_Challenge_GetVisibility(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::ChallengeVisibility> _m = GetClass().GetMethod(O("ovr_Challenge_GetVisibility"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ChallengeArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ChallengeArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Structures::Mono::String* ovr_ChallengeArray_GetNextUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ChallengeArray_GetNextUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ChallengeArray_GetNextUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ChallengeArray_GetNextUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ChallengeArray_GetPreviousUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ChallengeArray_GetPreviousUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ChallengeArray_GetPreviousUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ChallengeArray_GetPreviousUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_ChallengeArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_ChallengeArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_ChallengeArray_GetTotalCount(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_ChallengeArray_GetTotalCount"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_ChallengeArray_HasNextPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_ChallengeArray_HasNextPage"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_ChallengeArray_HasPreviousPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_ChallengeArray_HasPreviousPage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ChallengeEntry_GetDisplayScore(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ChallengeEntry_GetDisplayScore"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ChallengeEntry_GetDisplayScore_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ChallengeEntry_GetDisplayScore_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* ovr_ChallengeEntry_GetExtraData(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("ovr_ChallengeEntry_GetExtraData"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ChallengeEntry_GetExtraData_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ChallengeEntry_GetExtraData_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint32_t ovr_ChallengeEntry_GetExtraDataLength(::BNM::Types::nint obj) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ovr_ChallengeEntry_GetExtraDataLength"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_ChallengeEntry_GetID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_ChallengeEntry_GetID"), {"obj"});
            return _m.Call(obj);
        }
        static int ovr_ChallengeEntry_GetRank(::BNM::Types::nint obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ovr_ChallengeEntry_GetRank"), {"obj"});
            return _m.Call(obj);
        }
        static int64_t ovr_ChallengeEntry_GetScore(::BNM::Types::nint obj) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ovr_ChallengeEntry_GetScore"), {"obj"});
            return _m.Call(obj);
        }
        static void* ovr_ChallengeEntry_GetTimestamp(::BNM::Types::nint obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ovr_ChallengeEntry_GetTimestamp"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_ChallengeEntry_GetTimestamp_Native(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_ChallengeEntry_GetTimestamp_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ChallengeEntry_GetUser(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ChallengeEntry_GetUser"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ChallengeEntryArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ChallengeEntryArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Structures::Mono::String* ovr_ChallengeEntryArray_GetNextUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ChallengeEntryArray_GetNextUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ChallengeEntryArray_GetNextUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ChallengeEntryArray_GetNextUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ChallengeEntryArray_GetPreviousUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ChallengeEntryArray_GetPreviousUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ChallengeEntryArray_GetPreviousUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ChallengeEntryArray_GetPreviousUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_ChallengeEntryArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_ChallengeEntryArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_ChallengeEntryArray_GetTotalCount(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_ChallengeEntryArray_GetTotalCount"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_ChallengeEntryArray_HasNextPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_ChallengeEntryArray_HasNextPage"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_ChallengeEntryArray_HasPreviousPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_ChallengeEntryArray_HasPreviousPage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ChallengeOptions_Create() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_Create"));
            return _m.Call();
        }
        static void ovr_ChallengeOptions_Destroy(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_Destroy"), {"handle"});
            _m.Call(handle);
        }
        static void ovr_ChallengeOptions_SetDescription(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_SetDescription"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ChallengeOptions_SetDescription_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_SetDescription_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        template <typename TP1 = void*>
        static void ovr_ChallengeOptions_SetEndDate(::BNM::Types::nint handle, TP1 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_SetEndDate"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ChallengeOptions_SetEndDate_Native(::BNM::Types::nint handle, uint64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_SetEndDate_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ChallengeOptions_SetIncludeActiveChallenges(::BNM::Types::nint handle, bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_SetIncludeActiveChallenges"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ChallengeOptions_SetIncludeFutureChallenges(::BNM::Types::nint handle, bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_SetIncludeFutureChallenges"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ChallengeOptions_SetIncludePastChallenges(::BNM::Types::nint handle, bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_SetIncludePastChallenges"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ChallengeOptions_SetLeaderboardName(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_SetLeaderboardName"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ChallengeOptions_SetLeaderboardName_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_SetLeaderboardName_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        template <typename TP1 = void*>
        static void ovr_ChallengeOptions_SetStartDate(::BNM::Types::nint handle, TP1 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_SetStartDate"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ChallengeOptions_SetStartDate_Native(::BNM::Types::nint handle, uint64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_SetStartDate_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ChallengeOptions_SetTitle(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_SetTitle"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ChallengeOptions_SetTitle_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_SetTitle_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ChallengeOptions_SetViewerFilter(::BNM::Types::nint handle, ::Oculus_Platform::ChallengeViewerFilter value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_SetViewerFilter"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_ChallengeOptions_SetVisibility(::BNM::Types::nint handle, ::Oculus_Platform::ChallengeVisibility value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_ChallengeOptions_SetVisibility"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static uint64_t ovr_Challenges_Create(::BNM::Structures::Mono::String* leaderboardName, ::BNM::Types::nint challengeOptions) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_Create"), {"leaderboardName", "challengeOptions"});
            return _m.Call(leaderboardName, challengeOptions);
        }
        static uint64_t ovr_Challenges_Create_Native(::BNM::Types::nint leaderboardName, ::BNM::Types::nint challengeOptions) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_Create_Native"), {"leaderboardName", "challengeOptions"});
            return _m.Call(leaderboardName, challengeOptions);
        }
        static uint64_t ovr_Challenges_DeclineInvite(uint64_t challengeID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_DeclineInvite"), {"challengeID"});
            return _m.Call(challengeID);
        }
        static uint64_t ovr_Challenges_Delete(uint64_t challengeID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_Delete"), {"challengeID"});
            return _m.Call(challengeID);
        }
        static uint64_t ovr_Challenges_Get(uint64_t challengeID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_Get"), {"challengeID"});
            return _m.Call(challengeID);
        }
        static uint64_t ovr_Challenges_GetEntries(uint64_t challengeID, int limit, ::Oculus_Platform::LeaderboardFilterType filter, ::Oculus_Platform::LeaderboardStartAt startAt) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_GetEntries"), {"challengeID", "limit", "filter", "startAt"});
            return _m.Call(challengeID, limit, filter, startAt);
        }
        static uint64_t ovr_Challenges_GetEntriesAfterRank(uint64_t challengeID, int limit, uint64_t afterRank) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_GetEntriesAfterRank"), {"challengeID", "limit", "afterRank"});
            return _m.Call(challengeID, limit, afterRank);
        }
        static uint64_t ovr_Challenges_GetEntriesByIds(uint64_t challengeID, int limit, ::Oculus_Platform::LeaderboardStartAt startAt, ::BNM::Structures::Mono::Array<uint64_t>* userIDs, uint32_t userIDLength) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_GetEntriesByIds"), {"challengeID", "limit", "startAt", "userIDs", "userIDLength"});
            return _m.Call(challengeID, limit, startAt, userIDs, userIDLength);
        }
        static uint64_t ovr_Challenges_GetList(::BNM::Types::nint challengeOptions, int limit) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_GetList"), {"challengeOptions", "limit"});
            return _m.Call(challengeOptions, limit);
        }
        static uint64_t ovr_Challenges_GetNextChallenges(::BNM::Types::nint handle) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_GetNextChallenges"), {"handle"});
            return _m.Call(handle);
        }
        static uint64_t ovr_Challenges_GetNextEntries(::BNM::Types::nint handle) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_GetNextEntries"), {"handle"});
            return _m.Call(handle);
        }
        static uint64_t ovr_Challenges_GetPreviousChallenges(::BNM::Types::nint handle) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_GetPreviousChallenges"), {"handle"});
            return _m.Call(handle);
        }
        static uint64_t ovr_Challenges_GetPreviousEntries(::BNM::Types::nint handle) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_GetPreviousEntries"), {"handle"});
            return _m.Call(handle);
        }
        static uint64_t ovr_Challenges_Join(uint64_t challengeID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_Join"), {"challengeID"});
            return _m.Call(challengeID);
        }
        static uint64_t ovr_Challenges_Leave(uint64_t challengeID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_Leave"), {"challengeID"});
            return _m.Call(challengeID);
        }
        static uint64_t ovr_Challenges_UpdateInfo(uint64_t challengeID, ::BNM::Types::nint challengeOptions) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Challenges_UpdateInfo"), {"challengeID", "challengeOptions"});
            return _m.Call(challengeID, challengeOptions);
        }
        static uint64_t ovr_Colocation_GetCurrentMapUuid() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Colocation_GetCurrentMapUuid"));
            return _m.Call();
        }
        static uint64_t ovr_Colocation_RequestMap(::BNM::Structures::Mono::String* uuid) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Colocation_RequestMap"), {"uuid"});
            return _m.Call(uuid);
        }
        static uint64_t ovr_Colocation_RequestMap_Native(::BNM::Types::nint uuid) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Colocation_RequestMap_Native"), {"uuid"});
            return _m.Call(uuid);
        }
        static uint64_t ovr_Colocation_ShareMap(::BNM::Structures::Mono::String* uuid) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Colocation_ShareMap"), {"uuid"});
            return _m.Call(uuid);
        }
        static uint64_t ovr_Colocation_ShareMap_Native(::BNM::Types::nint uuid) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Colocation_ShareMap_Native"), {"uuid"});
            return _m.Call(uuid);
        }
        static ::BNM::Structures::Mono::String* ovr_ContentRating_GetAgeRatingImageUri(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ContentRating_GetAgeRatingImageUri"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ContentRating_GetAgeRatingImageUri_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ContentRating_GetAgeRatingImageUri_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ContentRating_GetAgeRatingText(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ContentRating_GetAgeRatingText"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ContentRating_GetAgeRatingText_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ContentRating_GetAgeRatingText_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ContentRating_GetDescriptor(::BNM::Types::nint obj, uint32_t index) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ContentRating_GetDescriptor"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Types::nint ovr_ContentRating_GetDescriptor_Native(::BNM::Types::nint obj, uint32_t index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ContentRating_GetDescriptor_Native"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static uint32_t ovr_ContentRating_GetDescriptorsSize(::BNM::Types::nint obj) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ovr_ContentRating_GetDescriptorsSize"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ContentRating_GetInteractiveElement(::BNM::Types::nint obj, uint32_t index) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ContentRating_GetInteractiveElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Types::nint ovr_ContentRating_GetInteractiveElement_Native(::BNM::Types::nint obj, uint32_t index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ContentRating_GetInteractiveElement_Native"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static uint32_t ovr_ContentRating_GetInteractiveElementsSize(::BNM::Types::nint obj) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ovr_ContentRating_GetInteractiveElementsSize"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ContentRating_GetRatingDefinitionUri(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ContentRating_GetRatingDefinitionUri"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ContentRating_GetRatingDefinitionUri_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ContentRating_GetRatingDefinitionUri_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Cowatching_GetPresenterData() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Cowatching_GetPresenterData"));
            return _m.Call();
        }
        static uint64_t ovr_Cowatching_GetViewersData() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Cowatching_GetViewersData"));
            return _m.Call();
        }
        static uint64_t ovr_Cowatching_IsInSession() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Cowatching_IsInSession"));
            return _m.Call();
        }
        static uint64_t ovr_Cowatching_JoinSession() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Cowatching_JoinSession"));
            return _m.Call();
        }
        static uint64_t ovr_Cowatching_LaunchInviteDialog() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Cowatching_LaunchInviteDialog"));
            return _m.Call();
        }
        static uint64_t ovr_Cowatching_LeaveSession() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Cowatching_LeaveSession"));
            return _m.Call();
        }
        static uint64_t ovr_Cowatching_RequestToPresent() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Cowatching_RequestToPresent"));
            return _m.Call();
        }
        static uint64_t ovr_Cowatching_ResignFromPresenting() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Cowatching_ResignFromPresenting"));
            return _m.Call();
        }
        static uint64_t ovr_Cowatching_SetPresenterData(::BNM::Structures::Mono::String* video_title, ::BNM::Structures::Mono::String* presenter_data) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Cowatching_SetPresenterData"), {"video_title", "presenter_data"});
            return _m.Call(video_title, presenter_data);
        }
        static uint64_t ovr_Cowatching_SetPresenterData_Native(::BNM::Types::nint video_title, ::BNM::Types::nint presenter_data) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Cowatching_SetPresenterData_Native"), {"video_title", "presenter_data"});
            return _m.Call(video_title, presenter_data);
        }
        static uint64_t ovr_Cowatching_SetViewerData(::BNM::Structures::Mono::String* viewer_data) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Cowatching_SetViewerData"), {"viewer_data"});
            return _m.Call(viewer_data);
        }
        static uint64_t ovr_Cowatching_SetViewerData_Native(::BNM::Types::nint viewer_data) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Cowatching_SetViewerData_Native"), {"viewer_data"});
            return _m.Call(viewer_data);
        }
        static bool ovr_CowatchingState_GetInSession(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_CowatchingState_GetInSession"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_CowatchViewer_GetData(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_CowatchViewer_GetData"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_CowatchViewer_GetData_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_CowatchViewer_GetData_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_CowatchViewer_GetId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_CowatchViewer_GetId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_CowatchViewerArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_CowatchViewerArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Structures::Mono::String* ovr_CowatchViewerArray_GetNextUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_CowatchViewerArray_GetNextUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_CowatchViewerArray_GetNextUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_CowatchViewerArray_GetNextUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_CowatchViewerArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_CowatchViewerArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_CowatchViewerArray_HasNextPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_CowatchViewerArray_HasNextPage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_CowatchViewerUpdate_GetDataList(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_CowatchViewerUpdate_GetDataList"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_CowatchViewerUpdate_GetId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_CowatchViewerUpdate_GetId"), {"obj"});
            return _m.Call(obj);
        }
        static void ovr_CrashApplication() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_CrashApplication"));
            _m.Call();
        }
        static uint32_t ovr_DataStore_Contains(::BNM::Types::nint obj, ::BNM::Structures::Mono::String* key) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ovr_DataStore_Contains"), {"obj", "key"});
            return _m.Call(obj, key);
        }
        static uint32_t ovr_DataStore_Contains_Native(::BNM::Types::nint obj, ::BNM::Types::nint key) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ovr_DataStore_Contains_Native"), {"obj", "key"});
            return _m.Call(obj, key);
        }
        static ::BNM::Structures::Mono::String* ovr_DataStore_GetKey(::BNM::Types::nint obj, int index) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_DataStore_GetKey"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Types::nint ovr_DataStore_GetKey_Native(::BNM::Types::nint obj, int index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_DataStore_GetKey_Native"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Types::nuint ovr_DataStore_GetNumKeys(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_DataStore_GetNumKeys"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_DataStore_GetValue(::BNM::Types::nint obj, ::BNM::Structures::Mono::String* key) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_DataStore_GetValue"), {"obj", "key"});
            return _m.Call(obj, key);
        }
        static ::BNM::Types::nint ovr_DataStore_GetValue_Native(::BNM::Types::nint obj, ::BNM::Types::nint key) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_DataStore_GetValue_Native"), {"obj", "key"});
            return _m.Call(obj, key);
        }
        static ::BNM::Structures::Mono::String* ovr_Destination_GetApiName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Destination_GetApiName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Destination_GetApiName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Destination_GetApiName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Destination_GetDeeplinkMessage(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Destination_GetDeeplinkMessage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Destination_GetDeeplinkMessage_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Destination_GetDeeplinkMessage_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Destination_GetDisplayName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Destination_GetDisplayName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Destination_GetDisplayName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Destination_GetDisplayName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Destination_GetShareableUri(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Destination_GetShareableUri"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Destination_GetShareableUri_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Destination_GetShareableUri_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_DestinationArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_DestinationArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Structures::Mono::String* ovr_DestinationArray_GetNextUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_DestinationArray_GetNextUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_DestinationArray_GetNextUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_DestinationArray_GetNextUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_DestinationArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_DestinationArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_DestinationArray_HasNextPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_DestinationArray_HasNextPage"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken(::BNM::Structures::Mono::String* challenge_nonce) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_DeviceApplicationIntegrity_GetAttestationToken"), {"challenge_nonce"});
            return _m.Call(challenge_nonce);
        }
        static uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken_Native(::BNM::Types::nint challenge_nonce) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_DeviceApplicationIntegrity_GetAttestationToken_Native"), {"challenge_nonce"});
            return _m.Call(challenge_nonce);
        }
        static uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken(::BNM::Structures::Mono::String* challenge_nonce) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_DeviceApplicationIntegrity_GetIntegrityToken"), {"challenge_nonce"});
            return _m.Call(challenge_nonce);
        }
        static uint64_t ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native(::BNM::Types::nint challenge_nonce) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_DeviceApplicationIntegrity_GetIntegrityToken_Native"), {"challenge_nonce"});
            return _m.Call(challenge_nonce);
        }
        static uint64_t ovr_Entitlement_GetIsViewerEntitled() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Entitlement_GetIsViewerEntitled"));
            return _m.Call();
        }
        static int ovr_Error_GetCode(::BNM::Types::nint obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ovr_Error_GetCode"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Error_GetDisplayableMessage(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Error_GetDisplayableMessage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Error_GetDisplayableMessage_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Error_GetDisplayableMessage_Native"), {"obj"});
            return _m.Call(obj);
        }
        static int ovr_Error_GetHttpCode(::BNM::Types::nint obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ovr_Error_GetHttpCode"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Error_GetMessage(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Error_GetMessage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Error_GetMessage_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Error_GetMessage_Native"), {"obj"});
            return _m.Call(obj);
        }
        static void ovr_FreeMessage(::BNM::Types::nint message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_FreeMessage"), {"message"});
            _m.Call(message);
        }
        static uint64_t ovr_GetLoggedInUserID() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GetLoggedInUserID"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* ovr_GetLoggedInUserLocale() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_GetLoggedInUserLocale"));
            return _m.Call();
        }
        static ::BNM::Types::nint ovr_GetLoggedInUserLocale_Native() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_GetLoggedInUserLocale_Native"));
            return _m.Call();
        }
        static uint64_t ovr_GraphAPI_Get(::BNM::Structures::Mono::String* url) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GraphAPI_Get"), {"url"});
            return _m.Call(url);
        }
        static uint64_t ovr_GraphAPI_Get_Native(::BNM::Types::nint url) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GraphAPI_Get_Native"), {"url"});
            return _m.Call(url);
        }
        static uint64_t ovr_GraphAPI_Post(::BNM::Structures::Mono::String* url) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GraphAPI_Post"), {"url"});
            return _m.Call(url);
        }
        static uint64_t ovr_GraphAPI_Post_Native(::BNM::Types::nint url) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GraphAPI_Post_Native"), {"url"});
            return _m.Call(url);
        }
        static uint64_t ovr_GroupPresence_Clear() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_Clear"));
            return _m.Call();
        }
        static uint64_t ovr_GroupPresence_GetInvitableUsers(::BNM::Types::nint options) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_GetInvitableUsers"), {"options"});
            return _m.Call(options);
        }
        static uint64_t ovr_GroupPresence_GetSentInvites() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_GetSentInvites"));
            return _m.Call();
        }
        static uint64_t ovr_GroupPresence_LaunchInvitePanel(::BNM::Types::nint options) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_LaunchInvitePanel"), {"options"});
            return _m.Call(options);
        }
        static uint64_t ovr_GroupPresence_LaunchMultiplayerErrorDialog(::BNM::Types::nint options) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_LaunchMultiplayerErrorDialog"), {"options"});
            return _m.Call(options);
        }
        static uint64_t ovr_GroupPresence_LaunchRejoinDialog(::BNM::Structures::Mono::String* lobby_session_id, ::BNM::Structures::Mono::String* match_session_id, ::BNM::Structures::Mono::String* destination_api_name) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_LaunchRejoinDialog"), {"lobby_session_id", "match_session_id", "destination_api_name"});
            return _m.Call(lobby_session_id, match_session_id, destination_api_name);
        }
        static uint64_t ovr_GroupPresence_LaunchRejoinDialog_Native(::BNM::Types::nint lobby_session_id, ::BNM::Types::nint match_session_id, ::BNM::Types::nint destination_api_name) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_LaunchRejoinDialog_Native"), {"lobby_session_id", "match_session_id", "destination_api_name"});
            return _m.Call(lobby_session_id, match_session_id, destination_api_name);
        }
        static uint64_t ovr_GroupPresence_LaunchRosterPanel(::BNM::Types::nint options) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_LaunchRosterPanel"), {"options"});
            return _m.Call(options);
        }
        static uint64_t ovr_GroupPresence_SendInvites(::BNM::Structures::Mono::Array<uint64_t>* userIDs, uint32_t userIDLength) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_SendInvites"), {"userIDs", "userIDLength"});
            return _m.Call(userIDs, userIDLength);
        }
        static uint64_t ovr_GroupPresence_Set(::BNM::Types::nint groupPresenceOptions) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_Set"), {"groupPresenceOptions"});
            return _m.Call(groupPresenceOptions);
        }
        static uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride(::BNM::Structures::Mono::String* deeplink_message) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_SetDeeplinkMessageOverride"), {"deeplink_message"});
            return _m.Call(deeplink_message);
        }
        static uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride_Native(::BNM::Types::nint deeplink_message) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_SetDeeplinkMessageOverride_Native"), {"deeplink_message"});
            return _m.Call(deeplink_message);
        }
        static uint64_t ovr_GroupPresence_SetDestination(::BNM::Structures::Mono::String* api_name) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_SetDestination"), {"api_name"});
            return _m.Call(api_name);
        }
        static uint64_t ovr_GroupPresence_SetDestination_Native(::BNM::Types::nint api_name) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_SetDestination_Native"), {"api_name"});
            return _m.Call(api_name);
        }
        static uint64_t ovr_GroupPresence_SetIsJoinable(bool is_joinable) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_SetIsJoinable"), {"is_joinable"});
            return _m.Call(is_joinable);
        }
        static uint64_t ovr_GroupPresence_SetLobbySession(::BNM::Structures::Mono::String* id) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_SetLobbySession"), {"id"});
            return _m.Call(id);
        }
        static uint64_t ovr_GroupPresence_SetLobbySession_Native(::BNM::Types::nint id) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_SetLobbySession_Native"), {"id"});
            return _m.Call(id);
        }
        static uint64_t ovr_GroupPresence_SetMatchSession(::BNM::Structures::Mono::String* id) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_SetMatchSession"), {"id"});
            return _m.Call(id);
        }
        static uint64_t ovr_GroupPresence_SetMatchSession_Native(::BNM::Types::nint id) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_GroupPresence_SetMatchSession_Native"), {"id"});
            return _m.Call(id);
        }
        static ::BNM::Structures::Mono::String* ovr_GroupPresenceJoinIntent_GetDeeplinkMessage(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_GroupPresenceJoinIntent_GetDeeplinkMessage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_GroupPresenceJoinIntent_GetDestinationApiName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_GroupPresenceJoinIntent_GetDestinationApiName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_GroupPresenceJoinIntent_GetLobbySessionId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_GroupPresenceJoinIntent_GetLobbySessionId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_GroupPresenceJoinIntent_GetMatchSessionId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_GroupPresenceJoinIntent_GetMatchSessionId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_GroupPresenceLeaveIntent_GetDestinationApiName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_GroupPresenceLeaveIntent_GetDestinationApiName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_GroupPresenceLeaveIntent_GetLobbySessionId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_GroupPresenceLeaveIntent_GetLobbySessionId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_GroupPresenceLeaveIntent_GetMatchSessionId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_GroupPresenceLeaveIntent_GetMatchSessionId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_GroupPresenceOptions_Create() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_GroupPresenceOptions_Create"));
            return _m.Call();
        }
        static void ovr_GroupPresenceOptions_Destroy(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_GroupPresenceOptions_Destroy"), {"handle"});
            _m.Call(handle);
        }
        static void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_GroupPresenceOptions_SetDeeplinkMessageOverride"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_GroupPresenceOptions_SetDestinationApiName(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_GroupPresenceOptions_SetDestinationApiName"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_GroupPresenceOptions_SetDestinationApiName_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_GroupPresenceOptions_SetDestinationApiName_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_GroupPresenceOptions_SetIsJoinable(::BNM::Types::nint handle, bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_GroupPresenceOptions_SetIsJoinable"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_GroupPresenceOptions_SetLobbySessionId(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_GroupPresenceOptions_SetLobbySessionId"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_GroupPresenceOptions_SetLobbySessionId_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_GroupPresenceOptions_SetLobbySessionId_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_GroupPresenceOptions_SetMatchSessionId(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_GroupPresenceOptions_SetMatchSessionId"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_GroupPresenceOptions_SetMatchSessionId_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_GroupPresenceOptions_SetMatchSessionId_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static uint64_t ovr_HTTP_Get(::BNM::Structures::Mono::String* url) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_HTTP_Get"), {"url"});
            return _m.Call(url);
        }
        static uint64_t ovr_HTTP_Get_Native(::BNM::Types::nint url) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_HTTP_Get_Native"), {"url"});
            return _m.Call(url);
        }
        static uint64_t ovr_HTTP_GetToFile(::BNM::Structures::Mono::String* url, ::BNM::Structures::Mono::String* diskFile) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_HTTP_GetToFile"), {"url", "diskFile"});
            return _m.Call(url, diskFile);
        }
        static uint64_t ovr_HTTP_GetToFile_Native(::BNM::Types::nint url, ::BNM::Types::nint diskFile) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_HTTP_GetToFile_Native"), {"url", "diskFile"});
            return _m.Call(url, diskFile);
        }
        static uint64_t ovr_HTTP_GetWithMessageType(::BNM::Structures::Mono::String* url, int messageType) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_HTTP_GetWithMessageType"), {"url", "messageType"});
            return _m.Call(url, messageType);
        }
        static uint64_t ovr_HTTP_MultiPartPost(::BNM::Structures::Mono::String* url, ::BNM::Structures::Mono::String* filepath_param_name, ::BNM::Structures::Mono::String* filepath, ::BNM::Structures::Mono::String* access_token, ::BNM::Structures::Mono::Array<::Oculus_Platform::CAPI_ovrKeyValuePair>* post_params) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_HTTP_MultiPartPost"), {"url", "filepath_param_name", "filepath", "access_token", "post_params"});
            return _m.Call(url, filepath_param_name, filepath, access_token, post_params);
        }
        static uint64_t ovr_HTTP_MultiPartPost_Native(::BNM::Types::nint url, ::BNM::Types::nint filepath_param_name, ::BNM::Types::nint filepath, ::BNM::Types::nint access_token, ::BNM::Structures::Mono::Array<::Oculus_Platform::CAPI_ovrKeyValuePair>* post_params, ::BNM::Types::nuint numItems) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_HTTP_MultiPartPost_Native"), {"url", "filepath_param_name", "filepath", "access_token", "post_params", "numItems"});
            return _m.Call(url, filepath_param_name, filepath, access_token, post_params, numItems);
        }
        static uint64_t ovr_HTTP_Post(::BNM::Structures::Mono::String* url) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_HTTP_Post"), {"url"});
            return _m.Call(url);
        }
        static uint64_t ovr_HTTP_Post_Native(::BNM::Types::nint url) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_HTTP_Post_Native"), {"url"});
            return _m.Call(url);
        }
        static uint64_t ovr_HTTP_StartTransfer(::BNM::Structures::Mono::String* url, ::BNM::Structures::Mono::Array<::Oculus_Platform::CAPI_ovrKeyValuePair>* headers) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_HTTP_StartTransfer"), {"url", "headers"});
            return _m.Call(url, headers);
        }
        static uint64_t ovr_HTTP_StartTransfer_Native(::BNM::Types::nint url, ::BNM::Structures::Mono::Array<::Oculus_Platform::CAPI_ovrKeyValuePair>* headers, ::BNM::Types::nuint numItems) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_HTTP_StartTransfer_Native"), {"url", "headers", "numItems"});
            return _m.Call(url, headers, numItems);
        }
        static bool ovr_HTTP_Write(uint64_t transferId, ::BNM::Structures::Mono::Array<uint8_t>* bytes, ::BNM::Types::nuint length) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_HTTP_Write"), {"transferId", "bytes", "length"});
            return _m.Call(transferId, bytes, length);
        }
        static void ovr_HTTP_WriteEOM(uint64_t transferId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_HTTP_WriteEOM"), {"transferId"});
            _m.Call(transferId);
        }
        static ::BNM::Types::nint ovr_HttpTransferUpdate_GetBytes(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_HttpTransferUpdate_GetBytes"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_HttpTransferUpdate_GetID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_HttpTransferUpdate_GetID"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_HttpTransferUpdate_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_HttpTransferUpdate_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_HttpTransferUpdate_IsCompleted(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_HttpTransferUpdate_IsCompleted"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_IAP_ConsumePurchase(::BNM::Structures::Mono::String* sku) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_IAP_ConsumePurchase"), {"sku"});
            return _m.Call(sku);
        }
        static uint64_t ovr_IAP_ConsumePurchase_Native(::BNM::Types::nint sku) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_IAP_ConsumePurchase_Native"), {"sku"});
            return _m.Call(sku);
        }
        static uint64_t ovr_IAP_GetProductsBySKU(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* skus, int count) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_IAP_GetProductsBySKU"), {"skus", "count"});
            return _m.Call(skus, count);
        }
        static uint64_t ovr_IAP_GetViewerPurchases() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_IAP_GetViewerPurchases"));
            return _m.Call();
        }
        static uint64_t ovr_IAP_GetViewerPurchasesDurableCache() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_IAP_GetViewerPurchasesDurableCache"));
            return _m.Call();
        }
        static uint64_t ovr_IAP_LaunchCheckoutFlow(::BNM::Structures::Mono::String* sku) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_IAP_LaunchCheckoutFlow"), {"sku"});
            return _m.Call(sku);
        }
        static uint64_t ovr_IAP_LaunchCheckoutFlow_Native(::BNM::Types::nint sku) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_IAP_LaunchCheckoutFlow_Native"), {"sku"});
            return _m.Call(sku);
        }
        static ::BNM::Structures::Mono::String* ovr_InstalledApplication_GetApplicationId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_InstalledApplication_GetApplicationId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_InstalledApplication_GetApplicationId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_InstalledApplication_GetApplicationId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_InstalledApplication_GetPackageName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_InstalledApplication_GetPackageName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_InstalledApplication_GetPackageName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_InstalledApplication_GetPackageName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_InstalledApplication_GetStatus(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_InstalledApplication_GetStatus"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_InstalledApplication_GetStatus_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_InstalledApplication_GetStatus_Native"), {"obj"});
            return _m.Call(obj);
        }
        static int ovr_InstalledApplication_GetVersionCode(::BNM::Types::nint obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ovr_InstalledApplication_GetVersionCode"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_InstalledApplication_GetVersionName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_InstalledApplication_GetVersionName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_InstalledApplication_GetVersionName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_InstalledApplication_GetVersionName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_InstalledApplicationArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_InstalledApplicationArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Types::nuint ovr_InstalledApplicationArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_InstalledApplicationArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static void ovr_InviteOptions_AddSuggestedUser(::BNM::Types::nint handle, uint64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_InviteOptions_AddSuggestedUser"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_InviteOptions_ClearSuggestedUsers(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_InviteOptions_ClearSuggestedUsers"), {"handle"});
            _m.Call(handle);
        }
        static ::BNM::Types::nint ovr_InviteOptions_Create() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_InviteOptions_Create"));
            return _m.Call();
        }
        static void ovr_InviteOptions_Destroy(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_InviteOptions_Destroy"), {"handle"});
            _m.Call(handle);
        }
        static bool ovr_InvitePanelResultInfo_GetInvitesSent(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_InvitePanelResultInfo_GetInvitesSent"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_LanguagePack_GetCurrent() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_LanguagePack_GetCurrent"));
            return _m.Call();
        }
        static uint64_t ovr_LanguagePack_SetCurrent(::BNM::Structures::Mono::String* tag) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_LanguagePack_SetCurrent"), {"tag"});
            return _m.Call(tag);
        }
        static uint64_t ovr_LanguagePack_SetCurrent_Native(::BNM::Types::nint tag) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_LanguagePack_SetCurrent_Native"), {"tag"});
            return _m.Call(tag);
        }
        static ::BNM::Structures::Mono::String* ovr_LanguagePackInfo_GetEnglishName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LanguagePackInfo_GetEnglishName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LanguagePackInfo_GetEnglishName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LanguagePackInfo_GetEnglishName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_LanguagePackInfo_GetNativeName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LanguagePackInfo_GetNativeName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LanguagePackInfo_GetNativeName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LanguagePackInfo_GetNativeName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_LanguagePackInfo_GetTag(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LanguagePackInfo_GetTag"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LanguagePackInfo_GetTag_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LanguagePackInfo_GetTag_Native"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_LaunchBlockFlowResult_GetDidBlock(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LaunchBlockFlowResult_GetDidBlock"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_LaunchBlockFlowResult_GetDidCancel(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LaunchBlockFlowResult_GetDidCancel"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_LaunchDetails_GetDeeplinkMessage(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LaunchDetails_GetDeeplinkMessage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LaunchDetails_GetDeeplinkMessage_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LaunchDetails_GetDeeplinkMessage_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_LaunchDetails_GetDestinationApiName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LaunchDetails_GetDestinationApiName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LaunchDetails_GetDestinationApiName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LaunchDetails_GetDestinationApiName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_LaunchDetails_GetLaunchSource(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LaunchDetails_GetLaunchSource"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LaunchDetails_GetLaunchSource_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LaunchDetails_GetLaunchSource_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::LaunchType ovr_LaunchDetails_GetLaunchType(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::LaunchType> _m = GetClass().GetMethod(O("ovr_LaunchDetails_GetLaunchType"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_LaunchDetails_GetLobbySessionID(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LaunchDetails_GetLobbySessionID"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LaunchDetails_GetLobbySessionID_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LaunchDetails_GetLobbySessionID_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_LaunchDetails_GetMatchSessionID(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LaunchDetails_GetMatchSessionID"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LaunchDetails_GetMatchSessionID_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LaunchDetails_GetMatchSessionID_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_LaunchDetails_GetTrackingID(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LaunchDetails_GetTrackingID"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LaunchDetails_GetTrackingID_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LaunchDetails_GetTrackingID_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LaunchDetails_GetUsers(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LaunchDetails_GetUsers"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_LaunchFriendRequestFlowResult_GetDidCancel(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LaunchFriendRequestFlowResult_GetDidCancel"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_LaunchFriendRequestFlowResult_GetDidSendRequest(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LaunchFriendRequestFlowResult_GetDidSendRequest"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LaunchInvitePanelFlowResult_GetInvitedUsers(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LaunchInvitePanelFlowResult_GetInvitedUsers"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_LaunchReportFlowResult_GetDidCancel(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LaunchReportFlowResult_GetDidCancel"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_LaunchReportFlowResult_GetUserReportId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_LaunchReportFlowResult_GetUserReportId"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_LaunchUnblockFlowResult_GetDidCancel(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LaunchUnblockFlowResult_GetDidCancel"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_LaunchUnblockFlowResult_GetDidUnblock(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LaunchUnblockFlowResult_GetDidUnblock"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Leaderboard_Get(::BNM::Structures::Mono::String* leaderboardName) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Leaderboard_Get"), {"leaderboardName"});
            return _m.Call(leaderboardName);
        }
        static uint64_t ovr_Leaderboard_Get_Native(::BNM::Types::nint leaderboardName) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Leaderboard_Get_Native"), {"leaderboardName"});
            return _m.Call(leaderboardName);
        }
        static ::BNM::Structures::Mono::String* ovr_Leaderboard_GetApiName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Leaderboard_GetApiName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Leaderboard_GetApiName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Leaderboard_GetApiName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Leaderboard_GetDestination(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Leaderboard_GetDestination"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Leaderboard_GetEntries(::BNM::Structures::Mono::String* leaderboardName, int limit, ::Oculus_Platform::LeaderboardFilterType filter, ::Oculus_Platform::LeaderboardStartAt startAt) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Leaderboard_GetEntries"), {"leaderboardName", "limit", "filter", "startAt"});
            return _m.Call(leaderboardName, limit, filter, startAt);
        }
        static uint64_t ovr_Leaderboard_GetEntries_Native(::BNM::Types::nint leaderboardName, int limit, ::Oculus_Platform::LeaderboardFilterType filter, ::Oculus_Platform::LeaderboardStartAt startAt) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Leaderboard_GetEntries_Native"), {"leaderboardName", "limit", "filter", "startAt"});
            return _m.Call(leaderboardName, limit, filter, startAt);
        }
        static uint64_t ovr_Leaderboard_GetEntriesAfterRank(::BNM::Structures::Mono::String* leaderboardName, int limit, uint64_t afterRank) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Leaderboard_GetEntriesAfterRank"), {"leaderboardName", "limit", "afterRank"});
            return _m.Call(leaderboardName, limit, afterRank);
        }
        static uint64_t ovr_Leaderboard_GetEntriesAfterRank_Native(::BNM::Types::nint leaderboardName, int limit, uint64_t afterRank) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Leaderboard_GetEntriesAfterRank_Native"), {"leaderboardName", "limit", "afterRank"});
            return _m.Call(leaderboardName, limit, afterRank);
        }
        static uint64_t ovr_Leaderboard_GetEntriesByIds(::BNM::Structures::Mono::String* leaderboardName, int limit, ::Oculus_Platform::LeaderboardStartAt startAt, ::BNM::Structures::Mono::Array<uint64_t>* userIDs, uint32_t userIDLength) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Leaderboard_GetEntriesByIds"), {"leaderboardName", "limit", "startAt", "userIDs", "userIDLength"});
            return _m.Call(leaderboardName, limit, startAt, userIDs, userIDLength);
        }
        static uint64_t ovr_Leaderboard_GetEntriesByIds_Native(::BNM::Types::nint leaderboardName, int limit, ::Oculus_Platform::LeaderboardStartAt startAt, ::BNM::Structures::Mono::Array<uint64_t>* userIDs, uint32_t userIDLength) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Leaderboard_GetEntriesByIds_Native"), {"leaderboardName", "limit", "startAt", "userIDs", "userIDLength"});
            return _m.Call(leaderboardName, limit, startAt, userIDs, userIDLength);
        }
        static uint64_t ovr_Leaderboard_GetID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Leaderboard_GetID"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Leaderboard_GetNextEntries(::BNM::Types::nint handle) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Leaderboard_GetNextEntries"), {"handle"});
            return _m.Call(handle);
        }
        static uint64_t ovr_Leaderboard_GetPreviousEntries(::BNM::Types::nint handle) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Leaderboard_GetPreviousEntries"), {"handle"});
            return _m.Call(handle);
        }
        static uint64_t ovr_Leaderboard_WriteEntry(::BNM::Structures::Mono::String* leaderboardName, int64_t score, ::BNM::Structures::Mono::Array<uint8_t>* extraData, uint32_t extraDataLength, bool forceUpdate) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Leaderboard_WriteEntry"), {"leaderboardName", "score", "extraData", "extraDataLength", "forceUpdate"});
            return _m.Call(leaderboardName, score, extraData, extraDataLength, forceUpdate);
        }
        static uint64_t ovr_Leaderboard_WriteEntry_Native(::BNM::Types::nint leaderboardName, int64_t score, ::BNM::Structures::Mono::Array<uint8_t>* extraData, uint32_t extraDataLength, bool forceUpdate) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Leaderboard_WriteEntry_Native"), {"leaderboardName", "score", "extraData", "extraDataLength", "forceUpdate"});
            return _m.Call(leaderboardName, score, extraData, extraDataLength, forceUpdate);
        }
        static uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric(::BNM::Structures::Mono::String* leaderboardName, int64_t score, int64_t supplementaryMetric, ::BNM::Structures::Mono::Array<uint8_t>* extraData, uint32_t extraDataLength, bool forceUpdate) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Leaderboard_WriteEntryWithSupplementaryMetric"), {"leaderboardName", "score", "supplementaryMetric", "extraData", "extraDataLength", "forceUpdate"});
            return _m.Call(leaderboardName, score, supplementaryMetric, extraData, extraDataLength, forceUpdate);
        }
        static uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native(::BNM::Types::nint leaderboardName, int64_t score, int64_t supplementaryMetric, ::BNM::Structures::Mono::Array<uint8_t>* extraData, uint32_t extraDataLength, bool forceUpdate) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native"), {"leaderboardName", "score", "supplementaryMetric", "extraData", "extraDataLength", "forceUpdate"});
            return _m.Call(leaderboardName, score, supplementaryMetric, extraData, extraDataLength, forceUpdate);
        }
        static ::BNM::Types::nint ovr_LeaderboardArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LeaderboardArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Structures::Mono::String* ovr_LeaderboardArray_GetNextUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LeaderboardArray_GetNextUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LeaderboardArray_GetNextUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LeaderboardArray_GetNextUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_LeaderboardArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_LeaderboardArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_LeaderboardArray_HasNextPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LeaderboardArray_HasNextPage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_LeaderboardEntry_GetDisplayScore(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LeaderboardEntry_GetDisplayScore"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LeaderboardEntry_GetDisplayScore_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LeaderboardEntry_GetDisplayScore_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* ovr_LeaderboardEntry_GetExtraData(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("ovr_LeaderboardEntry_GetExtraData"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LeaderboardEntry_GetExtraData_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LeaderboardEntry_GetExtraData_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint32_t ovr_LeaderboardEntry_GetExtraDataLength(::BNM::Types::nint obj) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ovr_LeaderboardEntry_GetExtraDataLength"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_LeaderboardEntry_GetID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_LeaderboardEntry_GetID"), {"obj"});
            return _m.Call(obj);
        }
        static int ovr_LeaderboardEntry_GetRank(::BNM::Types::nint obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ovr_LeaderboardEntry_GetRank"), {"obj"});
            return _m.Call(obj);
        }
        static int64_t ovr_LeaderboardEntry_GetScore(::BNM::Types::nint obj) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ovr_LeaderboardEntry_GetScore"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LeaderboardEntry_GetSupplementaryMetric(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LeaderboardEntry_GetSupplementaryMetric"), {"obj"});
            return _m.Call(obj);
        }
        static void* ovr_LeaderboardEntry_GetTimestamp(::BNM::Types::nint obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ovr_LeaderboardEntry_GetTimestamp"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_LeaderboardEntry_GetTimestamp_Native(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_LeaderboardEntry_GetTimestamp_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LeaderboardEntry_GetUser(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LeaderboardEntry_GetUser"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LeaderboardEntryArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LeaderboardEntryArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Structures::Mono::String* ovr_LeaderboardEntryArray_GetNextUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LeaderboardEntryArray_GetNextUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LeaderboardEntryArray_GetNextUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LeaderboardEntryArray_GetNextUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_LeaderboardEntryArray_GetPreviousUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LeaderboardEntryArray_GetPreviousUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LeaderboardEntryArray_GetPreviousUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LeaderboardEntryArray_GetPreviousUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_LeaderboardEntryArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_LeaderboardEntryArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_LeaderboardEntryArray_GetTotalCount(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_LeaderboardEntryArray_GetTotalCount"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_LeaderboardEntryArray_HasNextPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LeaderboardEntryArray_HasNextPage"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_LeaderboardEntryArray_HasPreviousPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LeaderboardEntryArray_HasPreviousPage"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_LeaderboardUpdateStatus_GetDidUpdate(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LeaderboardUpdateStatus_GetDidUpdate"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId(::BNM::Types::nint obj, uint32_t index) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static uint32_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize(::BNM::Types::nint obj) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_LinkedAccount_GetAccessToken(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LinkedAccount_GetAccessToken"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LinkedAccount_GetAccessToken_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LinkedAccount_GetAccessToken_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::ServiceProvider ovr_LinkedAccount_GetServiceProvider(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::ServiceProvider> _m = GetClass().GetMethod(O("ovr_LinkedAccount_GetServiceProvider"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_LinkedAccount_GetUserId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LinkedAccount_GetUserId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LinkedAccount_GetUserId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LinkedAccount_GetUserId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LinkedAccountArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LinkedAccountArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Types::nuint ovr_LinkedAccountArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_LinkedAccountArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Livestreaming_IsAllowedForApplication(::BNM::Structures::Mono::String* packageName) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Livestreaming_IsAllowedForApplication"), {"packageName"});
            return _m.Call(packageName);
        }
        static uint64_t ovr_Livestreaming_IsAllowedForApplication_Native(::BNM::Types::nint packageName) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Livestreaming_IsAllowedForApplication_Native"), {"packageName"});
            return _m.Call(packageName);
        }
        static uint64_t ovr_Livestreaming_StartPartyStream() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Livestreaming_StartPartyStream"));
            return _m.Call();
        }
        static uint64_t ovr_Livestreaming_StartStream(::Oculus_Platform::LivestreamingAudience audience, ::Oculus_Platform::LivestreamingMicrophoneStatus micStatus) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Livestreaming_StartStream"), {"audience", "micStatus"});
            return _m.Call(audience, micStatus);
        }
        static uint64_t ovr_Livestreaming_StopPartyStream() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Livestreaming_StopPartyStream"));
            return _m.Call();
        }
        static uint64_t ovr_Livestreaming_StopStream() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Livestreaming_StopStream"));
            return _m.Call();
        }
        static uint64_t ovr_Livestreaming_UpdateMicStatus(::Oculus_Platform::LivestreamingMicrophoneStatus micStatus) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Livestreaming_UpdateMicStatus"), {"micStatus"});
            return _m.Call(micStatus);
        }
        static bool ovr_LivestreamingApplicationStatus_GetStreamingEnabled(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LivestreamingApplicationStatus_GetStreamingEnabled"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::LivestreamingStartStatus ovr_LivestreamingStartResult_GetStreamingResult(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::LivestreamingStartStatus> _m = GetClass().GetMethod(O("ovr_LivestreamingStartResult_GetStreamingResult"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_LivestreamingStatus_GetCommentsVisible(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LivestreamingStatus_GetCommentsVisible"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_LivestreamingStatus_GetIsPaused(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LivestreamingStatus_GetIsPaused"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_LivestreamingStatus_GetLivestreamingEnabled(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LivestreamingStatus_GetLivestreamingEnabled"), {"obj"});
            return _m.Call(obj);
        }
        static int ovr_LivestreamingStatus_GetLivestreamingType(::BNM::Types::nint obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ovr_LivestreamingStatus_GetLivestreamingType"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_LivestreamingStatus_GetMicEnabled(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_LivestreamingStatus_GetMicEnabled"), {"obj"});
            return _m.Call(obj);
        }
        static int ovr_LivestreamingVideoStats_GetCommentCount(::BNM::Types::nint obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ovr_LivestreamingVideoStats_GetCommentCount"), {"obj"});
            return _m.Call(obj);
        }
        static int ovr_LivestreamingVideoStats_GetReactionCount(::BNM::Types::nint obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ovr_LivestreamingVideoStats_GetReactionCount"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_LivestreamingVideoStats_GetTotalViews(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_LivestreamingVideoStats_GetTotalViews"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_LivestreamingVideoStats_GetTotalViews_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_LivestreamingVideoStats_GetTotalViews_Native"), {"obj"});
            return _m.Call(obj);
        }
        static void ovr_Log_NewEvent(::BNM::Types::nint eventName, ::BNM::Structures::Mono::Array<::BNM::Types::nint>* values, ::BNM::Types::nuint length) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Log_NewEvent"), {"eventName", "values", "length"});
            _m.Call(eventName, values, length);
        }
        static ::BNM::Structures::Mono::String* ovr_ManagedInfo_GetDepartment(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetDepartment"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ManagedInfo_GetDepartment_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetDepartment_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ManagedInfo_GetEmail(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetEmail"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ManagedInfo_GetEmail_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetEmail_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ManagedInfo_GetEmployeeNumber(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetEmployeeNumber"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ManagedInfo_GetEmployeeNumber_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetEmployeeNumber_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ManagedInfo_GetExternalId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetExternalId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ManagedInfo_GetExternalId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetExternalId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ManagedInfo_GetLocation(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetLocation"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ManagedInfo_GetLocation_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetLocation_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ManagedInfo_GetManager(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetManager"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ManagedInfo_GetManager_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetManager_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ManagedInfo_GetName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ManagedInfo_GetName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ManagedInfo_GetOrganizationId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetOrganizationId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ManagedInfo_GetOrganizationId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetOrganizationId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ManagedInfo_GetOrganizationName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetOrganizationName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ManagedInfo_GetOrganizationName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetOrganizationName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_ManagedInfo_GetPosition(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetPosition"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ManagedInfo_GetPosition_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ManagedInfo_GetPosition_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Media_ShareToFacebook(::BNM::Structures::Mono::String* postTextSuggestion, ::BNM::Structures::Mono::String* filePath, ::Oculus_Platform::MediaContentType contentType) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Media_ShareToFacebook"), {"postTextSuggestion", "filePath", "contentType"});
            return _m.Call(postTextSuggestion, filePath, contentType);
        }
        static uint64_t ovr_Media_ShareToFacebook_Native(::BNM::Types::nint postTextSuggestion, ::BNM::Types::nint filePath, ::Oculus_Platform::MediaContentType contentType) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Media_ShareToFacebook_Native"), {"postTextSuggestion", "filePath", "contentType"});
            return _m.Call(postTextSuggestion, filePath, contentType);
        }
        static ::BNM::Types::nint ovr_Message_GetAbuseReportRecording(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetAbuseReportRecording"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetAchievementDefinitionArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetAchievementDefinitionArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetAchievementProgressArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetAchievementProgressArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetAchievementUpdate(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetAchievementUpdate"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetAppDownloadProgressResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetAppDownloadProgressResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetAppDownloadResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetAppDownloadResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetApplicationInviteArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetApplicationInviteArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetApplicationVersion(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetApplicationVersion"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetAssetDetails(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetAssetDetails"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetAssetDetailsArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetAssetDetailsArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetAssetFileDeleteResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetAssetFileDeleteResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetAssetFileDownloadCancelResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetAssetFileDownloadCancelResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetAssetFileDownloadResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetAssetFileDownloadResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetAssetFileDownloadUpdate(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetAssetFileDownloadUpdate"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetAvatarEditorResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetAvatarEditorResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetBlockedUserArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetBlockedUserArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetChallenge(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetChallenge"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetChallengeArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetChallengeArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetChallengeEntryArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetChallengeEntryArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetCowatchingState(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetCowatchingState"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetCowatchViewerArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetCowatchViewerArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetCowatchViewerUpdate(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetCowatchViewerUpdate"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetDataStore(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetDataStore"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetDestinationArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetDestinationArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetError(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetError"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetGroupPresenceJoinIntent(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetGroupPresenceJoinIntent"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetGroupPresenceLeaveIntent(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetGroupPresenceLeaveIntent"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetHttpTransferUpdate(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetHttpTransferUpdate"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetInstalledApplicationArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetInstalledApplicationArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetInvitePanelResultInfo(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetInvitePanelResultInfo"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetLaunchBlockFlowResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetLaunchBlockFlowResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetLaunchFriendRequestFlowResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetLaunchFriendRequestFlowResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetLaunchInvitePanelFlowResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetLaunchInvitePanelFlowResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetLaunchReportFlowResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetLaunchReportFlowResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetLaunchUnblockFlowResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetLaunchUnblockFlowResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetLeaderboardArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetLeaderboardArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetLeaderboardEntryArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetLeaderboardEntryArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetLeaderboardUpdateStatus(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetLeaderboardUpdateStatus"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetLinkedAccountArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetLinkedAccountArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetLivestreamingApplicationStatus(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetLivestreamingApplicationStatus"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetLivestreamingStartResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetLivestreamingStartResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetLivestreamingStatus(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetLivestreamingStatus"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetLivestreamingVideoStats(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetLivestreamingVideoStats"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetMicrophoneAvailabilityState(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetMicrophoneAvailabilityState"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetNativeMessage(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetNativeMessage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetNetSyncConnection(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetNetSyncConnection"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetNetSyncSessionArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetNetSyncSessionArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetNetSyncSessionsChangedNotification(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetNetSyncSessionsChangedNotification"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetNetSyncSetSessionPropertyResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetNetSyncSetSessionPropertyResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetNetSyncVoipAttenuationValueArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetNetSyncVoipAttenuationValueArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetOrgScopedID(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetOrgScopedID"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetParty(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetParty"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetPartyID(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetPartyID"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetPartyUpdateNotification(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetPartyUpdateNotification"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetPidArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetPidArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetPlatformInitialize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetPlatformInitialize"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetProductArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetProductArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetPurchase(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetPurchase"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetPurchaseArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetPurchaseArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetPushNotificationResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetPushNotificationResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetRejoinDialogResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetRejoinDialogResult"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Message_GetRequestID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Message_GetRequestID"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetSdkAccountArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetSdkAccountArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetSendInvitesResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetSendInvitesResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetShareMediaResult(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetShareMediaResult"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Message_GetString(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Message_GetString"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetString_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetString_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Message_GetStringForJavascript(::BNM::Types::nint message) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Message_GetStringForJavascript"), {"message"});
            return _m.Call(message);
        }
        static ::BNM::Types::nint ovr_Message_GetStringForJavascript_Native(::BNM::Types::nint message) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetStringForJavascript_Native"), {"message"});
            return _m.Call(message);
        }
        static ::BNM::Types::nint ovr_Message_GetSystemVoipState(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetSystemVoipState"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::Message_MessageType ovr_Message_GetType(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::Message_MessageType> _m = GetClass().GetMethod(O("ovr_Message_GetType"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetUser(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetUser"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetUserAccountAgeCategory(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetUserAccountAgeCategory"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetUserArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetUserArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetUserCapabilityArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetUserCapabilityArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetUserDataStoreUpdateResponse(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetUserDataStoreUpdateResponse"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetUserProof(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetUserProof"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Message_GetUserReportID(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Message_GetUserReportID"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_Message_IsError(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_Message_IsError"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Microphone_Create() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Microphone_Create"));
            return _m.Call();
        }
        static void ovr_Microphone_Destroy(::BNM::Types::nint obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Microphone_Destroy"), {"obj"});
            _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_Microphone_GetNumSamplesAvailable(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_Microphone_GetNumSamplesAvailable"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_Microphone_GetOutputBufferMaxSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_Microphone_GetOutputBufferMaxSize"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_Microphone_GetPCM(::BNM::Types::nint obj, ::BNM::Structures::Mono::Array<int16_t>* outputBuffer, ::BNM::Types::nuint outputBufferNumElements) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_Microphone_GetPCM"), {"obj", "outputBuffer", "outputBufferNumElements"});
            return _m.Call(obj, outputBuffer, outputBufferNumElements);
        }
        static ::BNM::Types::nuint ovr_Microphone_GetPCMFloat(::BNM::Types::nint obj, ::BNM::Structures::Mono::Array<float>* outputBuffer, ::BNM::Types::nuint outputBufferNumElements) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_Microphone_GetPCMFloat"), {"obj", "outputBuffer", "outputBufferNumElements"});
            return _m.Call(obj, outputBuffer, outputBufferNumElements);
        }
        static ::BNM::Types::nuint ovr_Microphone_ReadData(::BNM::Types::nint obj, ::BNM::Structures::Mono::Array<float>* outputBuffer, ::BNM::Types::nuint outputBufferSize) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_Microphone_ReadData"), {"obj", "outputBuffer", "outputBufferSize"});
            return _m.Call(obj, outputBuffer, outputBufferSize);
        }
        static void ovr_Microphone_SetAcceptableRecordingDelayHint(::BNM::Types::nint obj, ::BNM::Types::nuint delayMs) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Microphone_SetAcceptableRecordingDelayHint"), {"obj", "delayMs"});
            _m.Call(obj, delayMs);
        }
        static void ovr_Microphone_Start(::BNM::Types::nint obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Microphone_Start"), {"obj"});
            _m.Call(obj);
        }
        static void ovr_Microphone_Stop(::BNM::Types::nint obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Microphone_Stop"), {"obj"});
            _m.Call(obj);
        }
        static bool ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_MultiplayerErrorOptions_Create() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_MultiplayerErrorOptions_Create"));
            return _m.Call();
        }
        static void ovr_MultiplayerErrorOptions_Destroy(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_MultiplayerErrorOptions_Destroy"), {"handle"});
            _m.Call(handle);
        }
        static void ovr_MultiplayerErrorOptions_SetErrorKey(::BNM::Types::nint handle, ::Oculus_Platform::MultiplayerErrorErrorKey value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_MultiplayerErrorOptions_SetErrorKey"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static uint64_t ovr_NetSync_Connect(::BNM::Types::nint connect_options) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_Connect"), {"connect_options"});
            return _m.Call(connect_options);
        }
        static uint64_t ovr_NetSync_Disconnect(int64_t connection_id) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_Disconnect"), {"connection_id"});
            return _m.Call(connection_id);
        }
        static ::BNM::Types::nuint ovr_NetSync_GetAmbisonicFloatPCM(int64_t connection_id, ::BNM::Structures::Mono::Array<float>* outputBuffer, ::BNM::Types::nuint outputBufferNumElements) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_NetSync_GetAmbisonicFloatPCM"), {"connection_id", "outputBuffer", "outputBufferNumElements"});
            return _m.Call(connection_id, outputBuffer, outputBufferNumElements);
        }
        static ::BNM::Types::nuint ovr_NetSync_GetAmbisonicInt16PCM(int64_t connection_id, ::BNM::Structures::Mono::Array<int16_t>* outputBuffer, ::BNM::Types::nuint outputBufferNumElements) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_NetSync_GetAmbisonicInt16PCM"), {"connection_id", "outputBuffer", "outputBufferNumElements"});
            return _m.Call(connection_id, outputBuffer, outputBufferNumElements);
        }
        static ::BNM::Types::nuint ovr_NetSync_GetAmbisonicInterleavedFloatPCM(int64_t connection_id, ::BNM::Structures::Mono::Array<float>* outputBuffer, ::BNM::Types::nuint outputBufferNumElements) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_NetSync_GetAmbisonicInterleavedFloatPCM"), {"connection_id", "outputBuffer", "outputBufferNumElements"});
            return _m.Call(connection_id, outputBuffer, outputBufferNumElements);
        }
        static ::BNM::Types::nuint ovr_NetSync_GetAmbisonicInterleavedInt16PCM(int64_t connection_id, ::BNM::Structures::Mono::Array<int16_t>* outputBuffer, ::BNM::Types::nuint outputBufferNumElements) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_NetSync_GetAmbisonicInterleavedInt16PCM"), {"connection_id", "outputBuffer", "outputBufferNumElements"});
            return _m.Call(connection_id, outputBuffer, outputBufferNumElements);
        }
        static bool ovr_NetSync_GetListenerPosition(int64_t connection_id, uint64_t sessionId, ::Oculus_Platform::CAPI_ovrNetSyncVec3& position) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_NetSync_GetListenerPosition"), {"connection_id", "sessionId", "position"});
            return _m.Call(connection_id, sessionId, &position);
        }
        static ::BNM::Types::nuint ovr_NetSync_GetMonostreamFloatPCM(int64_t connection_id, uint64_t sessionId, ::BNM::Structures::Mono::Array<float>* outputBuffer, ::BNM::Types::nuint outputBufferNumElements) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_NetSync_GetMonostreamFloatPCM"), {"connection_id", "sessionId", "outputBuffer", "outputBufferNumElements"});
            return _m.Call(connection_id, sessionId, outputBuffer, outputBufferNumElements);
        }
        static ::BNM::Types::nuint ovr_NetSync_GetMonostreamInt16PCM(int64_t connection_id, uint64_t session_id, ::BNM::Structures::Mono::Array<int16_t>* outputBuffer, ::BNM::Types::nuint outputBufferNumElements) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_NetSync_GetMonostreamInt16PCM"), {"connection_id", "session_id", "outputBuffer", "outputBufferNumElements"});
            return _m.Call(connection_id, session_id, outputBuffer, outputBufferNumElements);
        }
        static ::BNM::Types::nuint ovr_NetSync_GetPcmBufferMaxSamples() {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_NetSync_GetPcmBufferMaxSamples"));
            return _m.Call();
        }
        static uint64_t ovr_NetSync_GetSessions(int64_t connection_id) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_GetSessions"), {"connection_id"});
            return _m.Call(connection_id);
        }
        static bool ovr_NetSync_GetVoipAmplitude(int64_t connection_id, uint64_t sessionId, float& amplitude) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_NetSync_GetVoipAmplitude"), {"connection_id", "sessionId", "amplitude"});
            return _m.Call(connection_id, sessionId, &amplitude);
        }
        static uint64_t ovr_NetSync_GetVoipAttenuation(int64_t connection_id) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_GetVoipAttenuation"), {"connection_id"});
            return _m.Call(connection_id);
        }
        static uint64_t ovr_NetSync_GetVoipAttenuationDefault() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_GetVoipAttenuationDefault"));
            return _m.Call();
        }
        static void ovr_NetSync_SetListenerPosition(int64_t connection_id, ::Oculus_Platform::CAPI_ovrNetSyncVec3& position) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_NetSync_SetListenerPosition"), {"connection_id", "position"});
            _m.Call(connection_id, &position);
        }
        static uint64_t ovr_NetSync_SetVoipAttenuation(int64_t connection_id, ::BNM::Structures::Mono::Array<float>* distances, ::BNM::Structures::Mono::Array<float>* decibels, ::BNM::Types::nuint count) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_SetVoipAttenuation"), {"connection_id", "distances", "decibels", "count"});
            return _m.Call(connection_id, distances, decibels, count);
        }
        static uint64_t ovr_NetSync_SetVoipAttenuationModel(int64_t connection_id, ::BNM::Structures::Mono::String* name, ::BNM::Structures::Mono::Array<float>* distances, ::BNM::Structures::Mono::Array<float>* decibels, ::BNM::Types::nuint count) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_SetVoipAttenuationModel"), {"connection_id", "name", "distances", "decibels", "count"});
            return _m.Call(connection_id, name, distances, decibels, count);
        }
        static uint64_t ovr_NetSync_SetVoipAttenuationModel_Native(int64_t connection_id, ::BNM::Types::nint name, ::BNM::Structures::Mono::Array<float>* distances, ::BNM::Structures::Mono::Array<float>* decibels, ::BNM::Types::nuint count) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_SetVoipAttenuationModel_Native"), {"connection_id", "name", "distances", "decibels", "count"});
            return _m.Call(connection_id, name, distances, decibels, count);
        }
        static uint64_t ovr_NetSync_SetVoipChannelCfg(int64_t connection_id, ::BNM::Structures::Mono::String* channel_name, ::BNM::Structures::Mono::String* attnmodel, bool disable_spatialization) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_SetVoipChannelCfg"), {"connection_id", "channel_name", "attnmodel", "disable_spatialization"});
            return _m.Call(connection_id, channel_name, attnmodel, disable_spatialization);
        }
        static uint64_t ovr_NetSync_SetVoipChannelCfg_Native(int64_t connection_id, ::BNM::Types::nint channel_name, ::BNM::Types::nint attnmodel, bool disable_spatialization) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_SetVoipChannelCfg_Native"), {"connection_id", "channel_name", "attnmodel", "disable_spatialization"});
            return _m.Call(connection_id, channel_name, attnmodel, disable_spatialization);
        }
        static uint64_t ovr_NetSync_SetVoipGroup(int64_t connection_id, ::BNM::Structures::Mono::String* group_id) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_SetVoipGroup"), {"connection_id", "group_id"});
            return _m.Call(connection_id, group_id);
        }
        static uint64_t ovr_NetSync_SetVoipGroup_Native(int64_t connection_id, ::BNM::Types::nint group_id) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_SetVoipGroup_Native"), {"connection_id", "group_id"});
            return _m.Call(connection_id, group_id);
        }
        static uint64_t ovr_NetSync_SetVoipListentoChannels(int64_t connection_id, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* listento_channels, ::BNM::Types::nuint count) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_SetVoipListentoChannels"), {"connection_id", "listento_channels", "count"});
            return _m.Call(connection_id, listento_channels, count);
        }
        static uint64_t ovr_NetSync_SetVoipMicSource(int64_t connection_id, ::Oculus_Platform::NetSyncVoipMicSource mic_source) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_SetVoipMicSource"), {"connection_id", "mic_source"});
            return _m.Call(connection_id, mic_source);
        }
        static uint64_t ovr_NetSync_SetVoipSessionMuted(int64_t connection_id, uint64_t session_id, bool muted) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_SetVoipSessionMuted"), {"connection_id", "session_id", "muted"});
            return _m.Call(connection_id, session_id, muted);
        }
        static uint64_t ovr_NetSync_SetVoipSpeaktoChannels(int64_t connection_id, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* speakto_channels, ::BNM::Types::nuint count) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_SetVoipSpeaktoChannels"), {"connection_id", "speakto_channels", "count"});
            return _m.Call(connection_id, speakto_channels, count);
        }
        static uint64_t ovr_NetSync_SetVoipStreamMode(int64_t connection_id, uint64_t sessionId, ::Oculus_Platform::NetSyncVoipStreamMode streamMode) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSync_SetVoipStreamMode"), {"connection_id", "sessionId", "streamMode"});
            return _m.Call(connection_id, sessionId, streamMode);
        }
        static int64_t ovr_NetSyncConnection_GetConnectionId(::BNM::Types::nint obj) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ovr_NetSyncConnection_GetConnectionId"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::NetSyncDisconnectReason ovr_NetSyncConnection_GetDisconnectReason(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::NetSyncDisconnectReason> _m = GetClass().GetMethod(O("ovr_NetSyncConnection_GetDisconnectReason"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_NetSyncConnection_GetSessionId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSyncConnection_GetSessionId"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::NetSyncConnectionStatus ovr_NetSyncConnection_GetStatus(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::NetSyncConnectionStatus> _m = GetClass().GetMethod(O("ovr_NetSyncConnection_GetStatus"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_NetSyncConnection_GetZoneId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_NetSyncConnection_GetZoneId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_NetSyncConnection_GetZoneId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_NetSyncConnection_GetZoneId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_NetSyncOptions_Create() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_NetSyncOptions_Create"));
            return _m.Call();
        }
        static void ovr_NetSyncOptions_Destroy(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_NetSyncOptions_Destroy"), {"handle"});
            _m.Call(handle);
        }
        static void ovr_NetSyncOptions_SetVoipGroup(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_NetSyncOptions_SetVoipGroup"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_NetSyncOptions_SetVoipGroup_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_NetSyncOptions_SetVoipGroup_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_NetSyncOptions_SetVoipStreamDefault(::BNM::Types::nint handle, ::Oculus_Platform::NetSyncVoipStreamMode value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_NetSyncOptions_SetVoipStreamDefault"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_NetSyncOptions_SetZoneId(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_NetSyncOptions_SetZoneId"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_NetSyncOptions_SetZoneId_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_NetSyncOptions_SetZoneId_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static int64_t ovr_NetSyncSession_GetConnectionId(::BNM::Types::nint obj) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ovr_NetSyncSession_GetConnectionId"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_NetSyncSession_GetMuted(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_NetSyncSession_GetMuted"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_NetSyncSession_GetSessionId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSyncSession_GetSessionId"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_NetSyncSession_GetUserId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_NetSyncSession_GetUserId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_NetSyncSession_GetVoipGroup(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_NetSyncSession_GetVoipGroup"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_NetSyncSession_GetVoipGroup_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_NetSyncSession_GetVoipGroup_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_NetSyncSessionArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_NetSyncSessionArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Types::nuint ovr_NetSyncSessionArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_NetSyncSessionArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static int64_t ovr_NetSyncSessionsChangedNotification_GetConnectionId(::BNM::Types::nint obj) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ovr_NetSyncSessionsChangedNotification_GetConnectionId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_NetSyncSessionsChangedNotification_GetSessions(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_NetSyncSessionsChangedNotification_GetSessions"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_NetSyncSetSessionPropertyResult_GetSession(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_NetSyncSetSessionPropertyResult_GetSession"), {"obj"});
            return _m.Call(obj);
        }
        static float ovr_NetSyncVoipAttenuationValue_GetDecibels(::BNM::Types::nint obj) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ovr_NetSyncVoipAttenuationValue_GetDecibels"), {"obj"});
            return _m.Call(obj);
        }
        static float ovr_NetSyncVoipAttenuationValue_GetDistance(::BNM::Types::nint obj) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ovr_NetSyncVoipAttenuationValue_GetDistance"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_NetSyncVoipAttenuationValueArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_NetSyncVoipAttenuationValueArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Types::nuint ovr_NetSyncVoipAttenuationValueArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_NetSyncVoipAttenuationValueArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Notification_MarkAsRead(uint64_t notificationID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Notification_MarkAsRead"), {"notificationID"});
            return _m.Call(notificationID);
        }
        static uint64_t ovr_OrgScopedID_GetID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_OrgScopedID_GetID"), {"obj"});
            return _m.Call(obj);
        }
        static void ovr_Packet_Free(::BNM::Types::nint obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Packet_Free"), {"obj"});
            _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Packet_GetBytes(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Packet_GetBytes"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Packet_GetSenderID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Packet_GetSenderID"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_Packet_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_Packet_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_PaidOffer_GetPrice(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_PaidOffer_GetPrice"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::OfferTerm ovr_PaidOffer_GetSubscriptionTerm(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::OfferTerm> _m = GetClass().GetMethod(O("ovr_PaidOffer_GetSubscriptionTerm"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Party_Create() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Party_Create"));
            return _m.Call();
        }
        static uint64_t ovr_Party_GatherInApplication(uint64_t partyID, uint64_t appID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Party_GatherInApplication"), {"partyID", "appID"});
            return _m.Call(partyID, appID);
        }
        static uint64_t ovr_Party_Get(uint64_t partyID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Party_Get"), {"partyID"});
            return _m.Call(partyID);
        }
        static uint64_t ovr_Party_GetCurrent() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Party_GetCurrent"));
            return _m.Call();
        }
        static uint64_t ovr_Party_GetCurrentForUser(uint64_t userID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Party_GetCurrentForUser"), {"userID"});
            return _m.Call(userID);
        }
        static uint64_t ovr_Party_GetID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Party_GetID"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Party_GetInvitedUsers(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Party_GetInvitedUsers"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Party_GetLeader(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Party_GetLeader"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Party_GetUsers(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Party_GetUsers"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Party_Invite(uint64_t partyID, uint64_t userID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Party_Invite"), {"partyID", "userID"});
            return _m.Call(partyID, userID);
        }
        static uint64_t ovr_Party_Join(uint64_t partyID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Party_Join"), {"partyID"});
            return _m.Call(partyID);
        }
        static uint64_t ovr_Party_Leave(uint64_t partyID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Party_Leave"), {"partyID"});
            return _m.Call(partyID);
        }
        static int ovr_Party_PluginGetSharedMemHandle() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ovr_Party_PluginGetSharedMemHandle"));
            return _m.Call();
        }
        static ::Oculus_Platform::VoipMuteState ovr_Party_PluginGetVoipMicrophoneMuted() {
            static BNM::Method<::Oculus_Platform::VoipMuteState> _m = GetClass().GetMethod(O("ovr_Party_PluginGetVoipMicrophoneMuted"));
            return _m.Call();
        }
        static bool ovr_Party_PluginGetVoipPassthrough() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_Party_PluginGetVoipPassthrough"));
            return _m.Call();
        }
        static ::Oculus_Platform::SystemVoipStatus ovr_Party_PluginGetVoipStatus() {
            static BNM::Method<::Oculus_Platform::SystemVoipStatus> _m = GetClass().GetMethod(O("ovr_Party_PluginGetVoipStatus"));
            return _m.Call();
        }
        static uint64_t ovr_PartyID_GetID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_PartyID_GetID"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::PartyUpdateAction ovr_PartyUpdateNotification_GetAction(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::PartyUpdateAction> _m = GetClass().GetMethod(O("ovr_PartyUpdateNotification_GetAction"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_PartyUpdateNotification_GetPartyId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_PartyUpdateNotification_GetPartyId"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_PartyUpdateNotification_GetSenderId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_PartyUpdateNotification_GetSenderId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_PartyUpdateNotification_GetUpdateTimestamp(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_PartyUpdateNotification_GetUpdateTimestamp"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_PartyUpdateNotification_GetUpdateTimestamp_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_PartyUpdateNotification_GetUpdateTimestamp_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_PartyUpdateNotification_GetUserAlias(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_PartyUpdateNotification_GetUserAlias"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_PartyUpdateNotification_GetUserAlias_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_PartyUpdateNotification_GetUserAlias_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_PartyUpdateNotification_GetUserId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_PartyUpdateNotification_GetUserId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_PartyUpdateNotification_GetUserName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_PartyUpdateNotification_GetUserName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_PartyUpdateNotification_GetUserName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_PartyUpdateNotification_GetUserName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Pid_GetId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Pid_GetId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Pid_GetId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Pid_GetId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_PidArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_PidArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Types::nuint ovr_PidArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_PidArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Platform_InitializeStandaloneOculus(::Oculus_Platform::CAPI_OculusInitParams& init) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Platform_InitializeStandaloneOculus"), {"init"});
            return _m.Call(&init);
        }
        static ::Oculus_Platform::PlatformInitializeResult ovr_PlatformInitialize_GetResult(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::PlatformInitializeResult> _m = GetClass().GetMethod(O("ovr_PlatformInitialize_GetResult"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_PlatformInitializeWithAccessToken(uint64_t appId, ::BNM::Structures::Mono::String* accessToken) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_PlatformInitializeWithAccessToken"), {"appId", "accessToken"});
            return _m.Call(appId, accessToken);
        }
        static uint64_t ovr_PlatformInitializeWithAccessTokenAndOptions(uint64_t appId, ::BNM::Structures::Mono::String* accessToken, ::BNM::Structures::Mono::Array<::Oculus_Platform::CAPI_ovrKeyValuePair>* configOptions, ::BNM::Types::nuint numOptions) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_PlatformInitializeWithAccessTokenAndOptions"), {"appId", "accessToken", "configOptions", "numOptions"});
            return _m.Call(appId, accessToken, configOptions, numOptions);
        }
        static ::BNM::Types::nint ovr_PopMessage() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_PopMessage"));
            return _m.Call();
        }
        static uint32_t ovr_Price_GetAmountInHundredths(::BNM::Types::nint obj) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ovr_Price_GetAmountInHundredths"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Price_GetCurrency(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Price_GetCurrency"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Price_GetCurrency_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Price_GetCurrency_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Price_GetFormatted(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Price_GetFormatted"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Price_GetFormatted_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Price_GetFormatted_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Product_GetBillingPlans(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Product_GetBillingPlans"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Product_GetContentRating(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Product_GetContentRating"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Product_GetCoverUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Product_GetCoverUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Product_GetCoverUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Product_GetCoverUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Product_GetDescription(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Product_GetDescription"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Product_GetDescription_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Product_GetDescription_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Product_GetFormattedPrice(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Product_GetFormattedPrice"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Product_GetFormattedPrice_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Product_GetFormattedPrice_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Product_GetIconUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Product_GetIconUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Product_GetIconUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Product_GetIconUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Product_GetName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Product_GetName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Product_GetName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Product_GetName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Product_GetPrice(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Product_GetPrice"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Product_GetShortDescription(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Product_GetShortDescription"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Product_GetShortDescription_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Product_GetShortDescription_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Product_GetSKU(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Product_GetSKU"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Product_GetSKU_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Product_GetSKU_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::ProductType ovr_Product_GetType(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::ProductType> _m = GetClass().GetMethod(O("ovr_Product_GetType"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ProductArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ProductArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Structures::Mono::String* ovr_ProductArray_GetNextUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_ProductArray_GetNextUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_ProductArray_GetNextUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_ProductArray_GetNextUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_ProductArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_ProductArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_ProductArray_HasNextPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_ProductArray_HasNextPage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Purchase_GetDeveloperPayload(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Purchase_GetDeveloperPayload"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Purchase_GetDeveloperPayload_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Purchase_GetDeveloperPayload_Native"), {"obj"});
            return _m.Call(obj);
        }
        static void* ovr_Purchase_GetExpirationTime(::BNM::Types::nint obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ovr_Purchase_GetExpirationTime"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Purchase_GetExpirationTime_Native(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Purchase_GetExpirationTime_Native"), {"obj"});
            return _m.Call(obj);
        }
        static void* ovr_Purchase_GetGrantTime(::BNM::Types::nint obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ovr_Purchase_GetGrantTime"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Purchase_GetGrantTime_Native(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Purchase_GetGrantTime_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_Purchase_GetPurchaseID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Purchase_GetPurchaseID"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Purchase_GetPurchaseStrID(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Purchase_GetPurchaseStrID"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Purchase_GetPurchaseStrID_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Purchase_GetPurchaseStrID_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Purchase_GetReportingId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Purchase_GetReportingId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Purchase_GetReportingId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Purchase_GetReportingId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_Purchase_GetSKU(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_Purchase_GetSKU"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_Purchase_GetSKU_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Purchase_GetSKU_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::ProductType ovr_Purchase_GetType(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::ProductType> _m = GetClass().GetMethod(O("ovr_Purchase_GetType"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_PurchaseArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_PurchaseArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Structures::Mono::String* ovr_PurchaseArray_GetNextUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_PurchaseArray_GetNextUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_PurchaseArray_GetNextUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_PurchaseArray_GetNextUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_PurchaseArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_PurchaseArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_PurchaseArray_HasNextPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_PurchaseArray_HasNextPage"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_PushNotification_Register() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_PushNotification_Register"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* ovr_PushNotificationResult_GetId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_PushNotificationResult_GetId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_PushNotificationResult_GetId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_PushNotificationResult_GetId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_RejoinDialogResult_GetRejoinSelected(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_RejoinDialogResult_GetRejoinSelected"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_RichPresence_Clear() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_RichPresence_Clear"));
            return _m.Call();
        }
        static uint64_t ovr_RichPresence_GetDestinations() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_RichPresence_GetDestinations"));
            return _m.Call();
        }
        static uint64_t ovr_RichPresence_Set(::BNM::Types::nint richPresenceOptions) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_RichPresence_Set"), {"richPresenceOptions"});
            return _m.Call(richPresenceOptions);
        }
        static uint64_t ovr_RichPresence_SetDestination(::BNM::Structures::Mono::String* api_name) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_RichPresence_SetDestination"), {"api_name"});
            return _m.Call(api_name);
        }
        static uint64_t ovr_RichPresence_SetDestination_Native(::BNM::Types::nint api_name) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_RichPresence_SetDestination_Native"), {"api_name"});
            return _m.Call(api_name);
        }
        static uint64_t ovr_RichPresence_SetIsJoinable(bool is_joinable) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_RichPresence_SetIsJoinable"), {"is_joinable"});
            return _m.Call(is_joinable);
        }
        static uint64_t ovr_RichPresence_SetLobbySession(::BNM::Structures::Mono::String* id) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_RichPresence_SetLobbySession"), {"id"});
            return _m.Call(id);
        }
        static uint64_t ovr_RichPresence_SetLobbySession_Native(::BNM::Types::nint id) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_RichPresence_SetLobbySession_Native"), {"id"});
            return _m.Call(id);
        }
        static uint64_t ovr_RichPresence_SetMatchSession(::BNM::Structures::Mono::String* id) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_RichPresence_SetMatchSession"), {"id"});
            return _m.Call(id);
        }
        static uint64_t ovr_RichPresence_SetMatchSession_Native(::BNM::Types::nint id) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_RichPresence_SetMatchSession_Native"), {"id"});
            return _m.Call(id);
        }
        static ::BNM::Types::nint ovr_RichPresenceOptions_Create() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_RichPresenceOptions_Create"));
            return _m.Call();
        }
        static void ovr_RichPresenceOptions_Destroy(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_RichPresenceOptions_Destroy"), {"handle"});
            _m.Call(handle);
        }
        static void ovr_RichPresenceOptions_SetApiName(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_RichPresenceOptions_SetApiName"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_RichPresenceOptions_SetApiName_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_RichPresenceOptions_SetApiName_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_RichPresenceOptions_SetDeeplinkMessageOverride(::BNM::Types::nint handle, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_RichPresenceOptions_SetDeeplinkMessageOverride"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native(::BNM::Types::nint handle, ::BNM::Types::nint value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_RichPresenceOptions_SetIsJoinable(::BNM::Types::nint handle, bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_RichPresenceOptions_SetIsJoinable"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_RosterOptions_AddSuggestedUser(::BNM::Types::nint handle, uint64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_RosterOptions_AddSuggestedUser"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_RosterOptions_ClearSuggestedUsers(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_RosterOptions_ClearSuggestedUsers"), {"handle"});
            _m.Call(handle);
        }
        static ::BNM::Types::nint ovr_RosterOptions_Create() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_RosterOptions_Create"));
            return _m.Call();
        }
        static void ovr_RosterOptions_Destroy(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_RosterOptions_Destroy"), {"handle"});
            _m.Call(handle);
        }
        static ::Oculus_Platform::SdkAccountType ovr_SdkAccount_GetAccountType(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::SdkAccountType> _m = GetClass().GetMethod(O("ovr_SdkAccount_GetAccountType"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_SdkAccount_GetUserId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_SdkAccount_GetUserId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_SdkAccountArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_SdkAccountArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Types::nuint ovr_SdkAccountArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_SdkAccountArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_SendInvitesResult_GetInvites(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_SendInvitesResult_GetInvites"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_SetDeveloperAccessToken(::BNM::Structures::Mono::String* accessToken) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_SetDeveloperAccessToken"), {"accessToken"});
            return _m.Call(accessToken);
        }
        static ::Oculus_Platform::ShareMediaStatus ovr_ShareMediaResult_GetStatus(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::ShareMediaStatus> _m = GetClass().GetMethod(O("ovr_ShareMediaResult_GetStatus"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_SupplementaryMetric_GetID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_SupplementaryMetric_GetID"), {"obj"});
            return _m.Call(obj);
        }
        static int64_t ovr_SupplementaryMetric_GetMetric(::BNM::Types::nint obj) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ovr_SupplementaryMetric_GetMetric"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::VoipMuteState ovr_SystemVoipState_GetMicrophoneMuted(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::VoipMuteState> _m = GetClass().GetMethod(O("ovr_SystemVoipState_GetMicrophoneMuted"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::SystemVoipStatus ovr_SystemVoipState_GetStatus(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::SystemVoipStatus> _m = GetClass().GetMethod(O("ovr_SystemVoipState_GetStatus"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_TestUser_GetAccessToken(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_TestUser_GetAccessToken"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_TestUser_GetAccessToken_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_TestUser_GetAccessToken_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_TestUser_GetAppAccessArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_TestUser_GetAppAccessArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_TestUser_GetFbAppAccessArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_TestUser_GetFbAppAccessArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_TestUser_GetFriendAccessToken(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_TestUser_GetFriendAccessToken"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_TestUser_GetFriendAccessToken_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_TestUser_GetFriendAccessToken_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_TestUser_GetFriendAppAccessArray(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_TestUser_GetFriendAppAccessArray"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_TestUser_GetUserAlias(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_TestUser_GetUserAlias"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_TestUser_GetUserAlias_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_TestUser_GetUserAlias_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_TestUser_GetUserFbid(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_TestUser_GetUserFbid"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_TestUser_GetUserId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_TestUser_GetUserId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_TestUserAppAccess_GetAccessToken(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_TestUserAppAccess_GetAccessToken"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_TestUserAppAccess_GetAccessToken_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_TestUserAppAccess_GetAccessToken_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_TestUserAppAccess_GetAppId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_TestUserAppAccess_GetAppId"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_TestUserAppAccess_GetUserId(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_TestUserAppAccess_GetUserId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_TestUserAppAccessArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_TestUserAppAccessArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Types::nuint ovr_TestUserAppAccessArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_TestUserAppAccessArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static int ovr_TrialOffer_GetMaxTermCount(::BNM::Types::nint obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ovr_TrialOffer_GetMaxTermCount"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_TrialOffer_GetPrice(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_TrialOffer_GetPrice"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::OfferTerm ovr_TrialOffer_GetTrialTerm(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::OfferTerm> _m = GetClass().GetMethod(O("ovr_TrialOffer_GetTrialTerm"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::OfferType ovr_TrialOffer_GetTrialType(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::OfferType> _m = GetClass().GetMethod(O("ovr_TrialOffer_GetTrialType"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_TrialOfferArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_TrialOfferArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Types::nuint ovr_TrialOfferArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_TrialOfferArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static void ovr_UnityInitGlobals(::BNM::Types::nint loggingCB) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_UnityInitGlobals"), {"loggingCB"});
            _m.Call(loggingCB);
        }
        static bool ovr_UnityInitWrapper(::BNM::Structures::Mono::String* appId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_UnityInitWrapper"), {"appId"});
            return _m.Call(appId);
        }
        static uint64_t ovr_UnityInitWrapperAsynchronous(::BNM::Structures::Mono::String* appId) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_UnityInitWrapperAsynchronous"), {"appId"});
            return _m.Call(appId);
        }
        static bool ovr_UnityInitWrapperStandalone(::BNM::Structures::Mono::String* accessToken, ::BNM::Types::nint loggingCB) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_UnityInitWrapperStandalone"), {"accessToken", "loggingCB"});
            return _m.Call(accessToken, loggingCB);
        }
        static bool ovr_UnityInitWrapperWindows(::BNM::Structures::Mono::String* appId, ::BNM::Types::nint loggingCB) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_UnityInitWrapperWindows"), {"appId", "loggingCB"});
            return _m.Call(appId, loggingCB);
        }
        static uint64_t ovr_UnityInitWrapperWindowsAsynchronous(::BNM::Structures::Mono::String* appId, ::BNM::Types::nint loggingCB) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_UnityInitWrapperWindowsAsynchronous"), {"appId", "loggingCB"});
            return _m.Call(appId, loggingCB);
        }
        static void ovr_UnityResetTestPlatform() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_UnityResetTestPlatform"));
            _m.Call();
        }
        static uint64_t ovr_User_CancelRecordingForReportFlow(::BNM::Structures::Mono::String* recordingUUID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_CancelRecordingForReportFlow"), {"recordingUUID"});
            return _m.Call(recordingUUID);
        }
        static uint64_t ovr_User_CancelRecordingForReportFlow_Native(::BNM::Types::nint recordingUUID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_CancelRecordingForReportFlow_Native"), {"recordingUUID"});
            return _m.Call(recordingUUID);
        }
        static uint64_t ovr_User_Get(uint64_t userID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_Get"), {"userID"});
            return _m.Call(userID);
        }
        static uint64_t ovr_User_GetAccessToken() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_GetAccessToken"));
            return _m.Call();
        }
        static uint64_t ovr_User_GetBlockedUsers() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_GetBlockedUsers"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* ovr_User_GetDisplayName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_User_GetDisplayName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_User_GetDisplayName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_User_GetDisplayName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_User_GetID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_GetID"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_User_GetImageUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_User_GetImageUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_User_GetImageUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_User_GetImageUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_User_GetLinkedAccounts(::BNM::Types::nint userOptions) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_GetLinkedAccounts"), {"userOptions"});
            return _m.Call(userOptions);
        }
        static uint64_t ovr_User_GetLoggedInUser() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_GetLoggedInUser"));
            return _m.Call();
        }
        static uint64_t ovr_User_GetLoggedInUserFriends() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_GetLoggedInUserFriends"));
            return _m.Call();
        }
        static uint64_t ovr_User_GetLoggedInUserManagedInfo() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_GetLoggedInUserManagedInfo"));
            return _m.Call();
        }
        static ::BNM::Types::nint ovr_User_GetManagedInfo(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_User_GetManagedInfo"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_User_GetOculusID(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_User_GetOculusID"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_User_GetOculusID_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_User_GetOculusID_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_User_GetOrgScopedID(uint64_t userID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_GetOrgScopedID"), {"userID"});
            return _m.Call(userID);
        }
        static ::BNM::Structures::Mono::String* ovr_User_GetPresence(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_User_GetPresence"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_User_GetPresence_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_User_GetPresence_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_User_GetPresenceDeeplinkMessage(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_User_GetPresenceDeeplinkMessage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_User_GetPresenceDeeplinkMessage_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_User_GetPresenceDeeplinkMessage_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_User_GetPresenceDestinationApiName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_User_GetPresenceDestinationApiName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_User_GetPresenceDestinationApiName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_User_GetPresenceDestinationApiName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_User_GetPresenceLobbySessionId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_User_GetPresenceLobbySessionId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_User_GetPresenceLobbySessionId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_User_GetPresenceLobbySessionId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_User_GetPresenceMatchSessionId(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_User_GetPresenceMatchSessionId"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_User_GetPresenceMatchSessionId_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_User_GetPresenceMatchSessionId_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::Oculus_Platform::UserPresenceStatus ovr_User_GetPresenceStatus(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::UserPresenceStatus> _m = GetClass().GetMethod(O("ovr_User_GetPresenceStatus"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_User_GetSdkAccounts() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_GetSdkAccounts"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* ovr_User_GetSmallImageUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_User_GetSmallImageUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_User_GetSmallImageUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_User_GetSmallImageUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_User_GetUserCapabilities() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_GetUserCapabilities"));
            return _m.Call();
        }
        static uint64_t ovr_User_GetUserProof() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_GetUserProof"));
            return _m.Call();
        }
        static uint64_t ovr_User_LaunchBlockFlow(uint64_t userID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_LaunchBlockFlow"), {"userID"});
            return _m.Call(userID);
        }
        static uint64_t ovr_User_LaunchFriendRequestFlow(uint64_t userID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_LaunchFriendRequestFlow"), {"userID"});
            return _m.Call(userID);
        }
        static uint64_t ovr_User_LaunchReportFlow(uint64_t userID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_LaunchReportFlow"), {"userID"});
            return _m.Call(userID);
        }
        static uint64_t ovr_User_LaunchReportFlow2(uint64_t optionalUserID, ::BNM::Types::nint abuseReportOptions) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_LaunchReportFlow2"), {"optionalUserID", "abuseReportOptions"});
            return _m.Call(optionalUserID, abuseReportOptions);
        }
        static uint64_t ovr_User_LaunchUnblockFlow(uint64_t userID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_LaunchUnblockFlow"), {"userID"});
            return _m.Call(userID);
        }
        static uint64_t ovr_User_NewEntitledTestUser() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_NewEntitledTestUser"));
            return _m.Call();
        }
        static uint64_t ovr_User_NewTestUser() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_NewTestUser"));
            return _m.Call();
        }
        static uint64_t ovr_User_NewTestUserFriends() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_NewTestUserFriends"));
            return _m.Call();
        }
        static uint64_t ovr_User_StartRecordingForReportFlow() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_StartRecordingForReportFlow"));
            return _m.Call();
        }
        static uint64_t ovr_User_StopRecordingAndLaunchReportFlow(uint64_t optionalUserID, ::BNM::Structures::Mono::String* optionalRecordingUUID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_StopRecordingAndLaunchReportFlow"), {"optionalUserID", "optionalRecordingUUID"});
            return _m.Call(optionalUserID, optionalRecordingUUID);
        }
        static uint64_t ovr_User_StopRecordingAndLaunchReportFlow_Native(uint64_t optionalUserID, ::BNM::Types::nint optionalRecordingUUID) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_StopRecordingAndLaunchReportFlow_Native"), {"optionalUserID", "optionalRecordingUUID"});
            return _m.Call(optionalUserID, optionalRecordingUUID);
        }
        static uint64_t ovr_User_StopRecordingAndLaunchReportFlow2(uint64_t optionalUserID, ::BNM::Structures::Mono::String* optionalRecordingUUID, ::BNM::Types::nint abuseReportOptions) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_StopRecordingAndLaunchReportFlow2"), {"optionalUserID", "optionalRecordingUUID", "abuseReportOptions"});
            return _m.Call(optionalUserID, optionalRecordingUUID, abuseReportOptions);
        }
        static uint64_t ovr_User_StopRecordingAndLaunchReportFlow2_Native(uint64_t optionalUserID, ::BNM::Types::nint optionalRecordingUUID, ::BNM::Types::nint abuseReportOptions) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_StopRecordingAndLaunchReportFlow2_Native"), {"optionalUserID", "optionalRecordingUUID", "abuseReportOptions"});
            return _m.Call(optionalUserID, optionalRecordingUUID, abuseReportOptions);
        }
        static uint64_t ovr_User_TestUserCreateDeviceManifest(::BNM::Structures::Mono::String* deviceID, ::BNM::Structures::Mono::Array<uint64_t>* appIDs, int numAppIDs) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_TestUserCreateDeviceManifest"), {"deviceID", "appIDs", "numAppIDs"});
            return _m.Call(deviceID, appIDs, numAppIDs);
        }
        static uint64_t ovr_User_TestUserCreateDeviceManifest_Native(::BNM::Types::nint deviceID, ::BNM::Structures::Mono::Array<uint64_t>* appIDs, int numAppIDs) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_User_TestUserCreateDeviceManifest_Native"), {"deviceID", "appIDs", "numAppIDs"});
            return _m.Call(deviceID, appIDs, numAppIDs);
        }
        static ::Oculus_Platform::AccountAgeCategory ovr_UserAccountAgeCategory_GetAgeCategory(::BNM::Types::nint obj) {
            static BNM::Method<::Oculus_Platform::AccountAgeCategory> _m = GetClass().GetMethod(O("ovr_UserAccountAgeCategory_GetAgeCategory"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_UserAgeCategory_Get() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_UserAgeCategory_Get"));
            return _m.Call();
        }
        static uint64_t ovr_UserAgeCategory_Report(::Oculus_Platform::AppAgeCategory age_category) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_UserAgeCategory_Report"), {"age_category"});
            return _m.Call(age_category);
        }
        static ::BNM::Types::nint ovr_UserArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_UserArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Structures::Mono::String* ovr_UserArray_GetNextUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_UserArray_GetNextUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_UserArray_GetNextUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_UserArray_GetNextUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_UserArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_UserArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_UserArray_HasNextPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_UserArray_HasNextPage"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_UserCapability_GetDescription(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_UserCapability_GetDescription"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_UserCapability_GetDescription_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_UserCapability_GetDescription_Native"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_UserCapability_GetIsEnabled(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_UserCapability_GetIsEnabled"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_UserCapability_GetName(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_UserCapability_GetName"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_UserCapability_GetName_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_UserCapability_GetName_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ovr_UserCapability_GetReasonCode(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_UserCapability_GetReasonCode"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_UserCapability_GetReasonCode_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_UserCapability_GetReasonCode_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_UserCapabilityArray_GetElement(::BNM::Types::nint obj, ::BNM::Types::nuint index) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_UserCapabilityArray_GetElement"), {"obj", "index"});
            return _m.Call(obj, index);
        }
        static ::BNM::Structures::Mono::String* ovr_UserCapabilityArray_GetNextUrl(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_UserCapabilityArray_GetNextUrl"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_UserCapabilityArray_GetNextUrl_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_UserCapabilityArray_GetNextUrl_Native"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nuint ovr_UserCapabilityArray_GetSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_UserCapabilityArray_GetSize"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_UserCapabilityArray_HasNextPage(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_UserCapabilityArray_HasNextPage"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_UserDataStoreUpdateResponse_GetSuccess(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_UserDataStoreUpdateResponse_GetSuccess"), {"obj"});
            return _m.Call(obj);
        }
        static void ovr_UserOptions_AddServiceProvider(::BNM::Types::nint handle, ::Oculus_Platform::ServiceProvider value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_UserOptions_AddServiceProvider"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_UserOptions_ClearServiceProviders(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_UserOptions_ClearServiceProviders"), {"handle"});
            _m.Call(handle);
        }
        static ::BNM::Types::nint ovr_UserOptions_Create() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_UserOptions_Create"));
            return _m.Call();
        }
        static void ovr_UserOptions_Destroy(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_UserOptions_Destroy"), {"handle"});
            _m.Call(handle);
        }
        static void ovr_UserOptions_SetMaxUsers(::BNM::Types::nint handle, uint32_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_UserOptions_SetMaxUsers"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_UserOptions_SetTimeWindow(::BNM::Types::nint handle, ::Oculus_Platform::TimeWindow value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_UserOptions_SetTimeWindow"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static ::BNM::Structures::Mono::String* ovr_UserProof_GetNonce(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ovr_UserProof_GetNonce"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_UserProof_GetNonce_Native(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_UserProof_GetNonce_Native"), {"obj"});
            return _m.Call(obj);
        }
        static bool ovr_UserReportID_GetDidCancel(::BNM::Types::nint obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ovr_UserReportID_GetDidCancel"), {"obj"});
            return _m.Call(obj);
        }
        static uint64_t ovr_UserReportID_GetID(::BNM::Types::nint obj) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_UserReportID_GetID"), {"obj"});
            return _m.Call(obj);
        }
        static void ovr_Voip_Accept(uint64_t userID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Voip_Accept"), {"userID"});
            _m.Call(userID);
        }
        static ::BNM::Types::nint ovr_Voip_CreateDecoder() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Voip_CreateDecoder"));
            return _m.Call();
        }
        static ::BNM::Types::nint ovr_Voip_CreateEncoder() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_Voip_CreateEncoder"));
            return _m.Call();
        }
        static void ovr_Voip_DestroyDecoder(::BNM::Types::nint decoder) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Voip_DestroyDecoder"), {"decoder"});
            _m.Call(decoder);
        }
        static void ovr_Voip_DestroyEncoder(::BNM::Types::nint encoder) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Voip_DestroyEncoder"), {"encoder"});
            _m.Call(encoder);
        }
        static ::Oculus_Platform::VoipDtxState ovr_Voip_GetIsConnectionUsingDtx(uint64_t peerID) {
            static BNM::Method<::Oculus_Platform::VoipDtxState> _m = GetClass().GetMethod(O("ovr_Voip_GetIsConnectionUsingDtx"), {"peerID"});
            return _m.Call(peerID);
        }
        static ::Oculus_Platform::VoipBitrate ovr_Voip_GetLocalBitrate(uint64_t peerID) {
            static BNM::Method<::Oculus_Platform::VoipBitrate> _m = GetClass().GetMethod(O("ovr_Voip_GetLocalBitrate"), {"peerID"});
            return _m.Call(peerID);
        }
        static uint64_t ovr_Voip_GetMicrophoneAvailability() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Voip_GetMicrophoneAvailability"));
            return _m.Call();
        }
        static ::BNM::Types::nuint ovr_Voip_GetOutputBufferMaxSize() {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_Voip_GetOutputBufferMaxSize"));
            return _m.Call();
        }
        static ::BNM::Types::nuint ovr_Voip_GetPCM(uint64_t senderID, ::BNM::Structures::Mono::Array<int16_t>* outputBuffer, ::BNM::Types::nuint outputBufferNumElements) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_Voip_GetPCM"), {"senderID", "outputBuffer", "outputBufferNumElements"});
            return _m.Call(senderID, outputBuffer, outputBufferNumElements);
        }
        static ::BNM::Types::nuint ovr_Voip_GetPCMFloat(uint64_t senderID, ::BNM::Structures::Mono::Array<float>* outputBuffer, ::BNM::Types::nuint outputBufferNumElements) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_Voip_GetPCMFloat"), {"senderID", "outputBuffer", "outputBufferNumElements"});
            return _m.Call(senderID, outputBuffer, outputBufferNumElements);
        }
        static ::BNM::Types::nuint ovr_Voip_GetPCMSize(uint64_t senderID) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_Voip_GetPCMSize"), {"senderID"});
            return _m.Call(senderID);
        }
        static ::BNM::Types::nuint ovr_Voip_GetPCMWithTimestamp(uint64_t senderID, ::BNM::Structures::Mono::Array<int16_t>* outputBuffer, ::BNM::Types::nuint outputBufferNumElements, ::BNM::Structures::Mono::Array<uint32_t>* timestamp) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_Voip_GetPCMWithTimestamp"), {"senderID", "outputBuffer", "outputBufferNumElements", "timestamp"});
            return _m.Call(senderID, outputBuffer, outputBufferNumElements, timestamp);
        }
        static ::BNM::Types::nuint ovr_Voip_GetPCMWithTimestampFloat(uint64_t senderID, ::BNM::Structures::Mono::Array<float>* outputBuffer, ::BNM::Types::nuint outputBufferNumElements, ::BNM::Structures::Mono::Array<uint32_t>* timestamp) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_Voip_GetPCMWithTimestampFloat"), {"senderID", "outputBuffer", "outputBufferNumElements", "timestamp"});
            return _m.Call(senderID, outputBuffer, outputBufferNumElements, timestamp);
        }
        static ::Oculus_Platform::VoipBitrate ovr_Voip_GetRemoteBitrate(uint64_t peerID) {
            static BNM::Method<::Oculus_Platform::VoipBitrate> _m = GetClass().GetMethod(O("ovr_Voip_GetRemoteBitrate"), {"peerID"});
            return _m.Call(peerID);
        }
        static uint32_t ovr_Voip_GetSyncTimestamp(uint64_t userID) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ovr_Voip_GetSyncTimestamp"), {"userID"});
            return _m.Call(userID);
        }
        static int64_t ovr_Voip_GetSyncTimestampDifference(uint32_t lhs, uint32_t rhs) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ovr_Voip_GetSyncTimestampDifference"), {"lhs", "rhs"});
            return _m.Call(lhs, rhs);
        }
        static ::Oculus_Platform::VoipMuteState ovr_Voip_GetSystemVoipMicrophoneMuted() {
            static BNM::Method<::Oculus_Platform::VoipMuteState> _m = GetClass().GetMethod(O("ovr_Voip_GetSystemVoipMicrophoneMuted"));
            return _m.Call();
        }
        static ::Oculus_Platform::SystemVoipStatus ovr_Voip_GetSystemVoipStatus() {
            static BNM::Method<::Oculus_Platform::SystemVoipStatus> _m = GetClass().GetMethod(O("ovr_Voip_GetSystemVoipStatus"));
            return _m.Call();
        }
        static uint64_t ovr_Voip_ReportAppVoipSessions(::BNM::Structures::Mono::Array<uint64_t>* sessionIDs) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Voip_ReportAppVoipSessions"), {"sessionIDs"});
            return _m.Call(sessionIDs);
        }
        static void ovr_Voip_SetMicrophoneFilterCallback(::Oculus_Platform::CAPI_FilterCallback* cb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Voip_SetMicrophoneFilterCallback"), {"cb"});
            _m.Call(cb);
        }
        static void ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(::Oculus_Platform::CAPI_FilterCallback* cb, ::BNM::Types::nuint bufferSizeElements) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer"), {"cb", "bufferSizeElements"});
            _m.Call(cb, bufferSizeElements);
        }
        static void ovr_Voip_SetMicrophoneMuted(::Oculus_Platform::VoipMuteState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Voip_SetMicrophoneMuted"), {"state"});
            _m.Call(state);
        }
        static void ovr_Voip_SetNewConnectionOptions(::BNM::Types::nint voipOptions) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Voip_SetNewConnectionOptions"), {"voipOptions"});
            _m.Call(voipOptions);
        }
        static void ovr_Voip_SetOutputSampleRate(::Oculus_Platform::VoipSampleRate rate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Voip_SetOutputSampleRate"), {"rate"});
            _m.Call(rate);
        }
        static void ovr_Voip_SetSystemVoipMicrophoneMuted(::Oculus_Platform::VoipMuteState muted) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Voip_SetSystemVoipMicrophoneMuted"), {"muted"});
            _m.Call(muted);
        }
        static void ovr_Voip_SetSystemVoipPassthrough(bool passthrough) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Voip_SetSystemVoipPassthrough"), {"passthrough"});
            _m.Call(passthrough);
        }
        static uint64_t ovr_Voip_SetSystemVoipSuppressed(bool suppressed) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ovr_Voip_SetSystemVoipSuppressed"), {"suppressed"});
            return _m.Call(suppressed);
        }
        static void ovr_Voip_Start(uint64_t userID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Voip_Start"), {"userID"});
            _m.Call(userID);
        }
        static void ovr_Voip_Stop(uint64_t userID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_Voip_Stop"), {"userID"});
            _m.Call(userID);
        }
        static void ovr_VoipDecoder_Decode(::BNM::Types::nint obj, ::BNM::Structures::Mono::Array<uint8_t>* compressedData, uint64_t compressedSize) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_VoipDecoder_Decode"), {"obj", "compressedData", "compressedSize"});
            _m.Call(obj, compressedData, compressedSize);
        }
        static void ovr_VoipDecoder_Decode(::BNM::Types::nint obj, ::BNM::Structures::Mono::Array<uint8_t>* compressedData, ::BNM::Types::nuint compressedSize) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_VoipDecoder_Decode"), {"obj", "compressedData", "compressedSize"});
            _m.Call(obj, compressedData, compressedSize);
        }
        static ::BNM::Types::nuint ovr_VoipDecoder_GetDecodedPCM(::BNM::Types::nint obj, ::BNM::Structures::Mono::Array<float>* outputBuffer, ::BNM::Types::nuint outputBufferSize) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_VoipDecoder_GetDecodedPCM"), {"obj", "outputBuffer", "outputBufferSize"});
            return _m.Call(obj, outputBuffer, outputBufferSize);
        }
        static void ovr_VoipEncoder_AddPCM(::BNM::Types::nint obj, ::BNM::Structures::Mono::Array<float>* inputData, uint32_t inputSize) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_VoipEncoder_AddPCM"), {"obj", "inputData", "inputSize"});
            _m.Call(obj, inputData, inputSize);
        }
        static ::BNM::Types::nuint ovr_VoipEncoder_GetCompressedData(::BNM::Types::nint obj, ::BNM::Structures::Mono::Array<uint8_t>* outputBuffer, ::BNM::Types::nuint intputSize) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_VoipEncoder_GetCompressedData"), {"obj", "outputBuffer", "intputSize"});
            return _m.Call(obj, outputBuffer, intputSize);
        }
        static ::BNM::Types::nuint ovr_VoipEncoder_GetCompressedDataSize(::BNM::Types::nint obj) {
            static BNM::Method<::BNM::Types::nuint> _m = GetClass().GetMethod(O("ovr_VoipEncoder_GetCompressedDataSize"), {"obj"});
            return _m.Call(obj);
        }
        static ::BNM::Types::nint ovr_VoipOptions_Create() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("ovr_VoipOptions_Create"));
            return _m.Call();
        }
        static void ovr_VoipOptions_Destroy(::BNM::Types::nint handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_VoipOptions_Destroy"), {"handle"});
            _m.Call(handle);
        }
        static void ovr_VoipOptions_SetBitrateForNewConnections(::BNM::Types::nint handle, ::Oculus_Platform::VoipBitrate value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_VoipOptions_SetBitrateForNewConnections"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static void ovr_VoipOptions_SetCreateNewConnectionUseDtx(::BNM::Types::nint handle, ::Oculus_Platform::VoipDtxState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ovr_VoipOptions_SetCreateNewConnectionUseDtx"), {"handle", "value"});
            _m.Call(handle, value);
        }
        static ::BNM::Structures::Mono::String* StringFromNative(::BNM::Types::nint pointer) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("StringFromNative"), {"pointer"});
            return _m.Call(pointer);
        }
        static ::BNM::Types::nint StringToNative(::BNM::Structures::Mono::String* s) {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("StringToNative"), {"s"});
            return _m.Call(s);
        }
    };
}
