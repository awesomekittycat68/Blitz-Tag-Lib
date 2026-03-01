#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../ExitGames_Client_Photon/DebugLevel.hpp"
#include "../Photon_Realtime/ClientState.hpp"
#include "../Photon_Realtime/ConnectionHandler.hpp"
#include "../Photon_Voice/RemoteVoiceOptions.hpp"
#include "../Photon_Voice/VoiceInfo.hpp"
#include "PlaybackDelaySettings.hpp"

namespace Photon_Voice_Unity {
    struct VoiceConnection : ::Photon_Realtime::ConnectionHandler {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "VoiceConnection");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* PlayerPrefsKey = "VoiceCloudBestRegion";
        ::BNM::Structures::Mono::String* GetBestRegionSummaryInPreferences() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_BestRegionSummaryInPreferences"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBestRegionSummaryInPreferences(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BestRegionSummaryInPreferences"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice::LoadBalancingTransport* GetClient() {
            static BNM::Method<::Photon_Voice::LoadBalancingTransport*> _method = GetClass().GetMethod(O("get_Client"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Realtime::ClientState GetClientState() {
            static BNM::Method<::Photon_Realtime::ClientState> _method = GetClass().GetMethod(O("get_ClientState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetFramesLostPercent() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_FramesLostPercent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFramesLostPercent(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FramesLostPercent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetFramesLostPerSecond() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_FramesLostPerSecond"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFramesLostPerSecond(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FramesLostPerSecond"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetFramesReceivedPerSecond() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_FramesReceivedPerSecond"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFramesReceivedPerSecond(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FramesReceivedPerSecond"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetGlobalPlaybackDelay() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_GlobalPlaybackDelay"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetGlobalPlaybackDelay(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_GlobalPlaybackDelay"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetGlobalPlaybackDelayMaxHard() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_GlobalPlaybackDelayMaxHard"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetGlobalPlaybackDelayMaxSoft() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_GlobalPlaybackDelayMaxSoft"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetGlobalPlaybackDelayMinSoft() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_GlobalPlaybackDelayMinSoft"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::ExitGames_Client_Photon::DebugLevel GetGlobalRecordersLogLevel() {
            static BNM::Method<::ExitGames_Client_Photon::DebugLevel> _method = GetClass().GetMethod(O("get_GlobalRecordersLogLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetGlobalRecordersLogLevel(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_GlobalRecordersLogLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::ExitGames_Client_Photon::DebugLevel GetGlobalSpeakersLogLevel() {
            static BNM::Method<::ExitGames_Client_Photon::DebugLevel> _method = GetClass().GetMethod(O("get_GlobalSpeakersLogLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetGlobalSpeakersLogLevel(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_GlobalSpeakersLogLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice_Unity::VoiceLogger* GetLogger() {
            static BNM::Method<::Photon_Voice_Unity::VoiceLogger*> _method = GetClass().GetMethod(O("get_Logger"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLogger(::Photon_Voice_Unity::VoiceLogger* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Logger"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::ExitGames_Client_Photon::DebugLevel GetLogLevel() {
            static BNM::Method<::ExitGames_Client_Photon::DebugLevel> _method = GetClass().GetMethod(O("get_LogLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLogLevel(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LogLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice_Unity::Recorder* GetPrimaryRecorder() {
            static BNM::Method<::Photon_Voice_Unity::Recorder*> _method = GetClass().GetMethod(O("get_PrimaryRecorder"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPrimaryRecorder(::Photon_Voice_Unity::Recorder* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PrimaryRecorder"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GameObject* GetSpeakerPrefab() {
            static BNM::Method<::GameObject*> _method = GetClass().GetMethod(O("get_SpeakerPrefab"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSpeakerPrefab(::GameObject* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SpeakerPrefab"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Voice::VoiceClient* GetVoiceClient() {
            static BNM::Method<::Photon_Voice::VoiceClient*> _method = GetClass().GetMethod(O("get_VoiceClient"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_RemoteVoiceAdded(::BNM::Structures::Mono::Action<::Photon_Voice_Unity::RemoteVoiceLink*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_RemoteVoiceAdded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_RemoteVoiceAdded(::BNM::Structures::Mono::Action<::Photon_Voice_Unity::RemoteVoiceLink*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_RemoteVoiceAdded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_SpeakerLinked(::BNM::Structures::Mono::Action<::Photon_Voice_Unity::Speaker*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_SpeakerLinked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_SpeakerLinked(::BNM::Structures::Mono::Action<::Photon_Voice_Unity::Speaker*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_SpeakerLinked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        bool GetAutoCreateSpeakerIfNotFound() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoCreateSpeakerIfNotFound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Photon_Voice_Unity::RemoteVoiceLink*>* GetCachedRemoteVoices() {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Voice_Unity::RemoteVoiceLink*>*> _field = GetClass().GetField(O("cachedRemoteVoices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCleanedUp() {
            static BNM::Field<bool> _field = GetClass().GetField(O("cleanedUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::LoadBalancingTransport* GetClient_f() {
            static BNM::Field<::Photon_Voice::LoadBalancingTransport*> _field = GetClass().GetField(O("client"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableSupportLogger() {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableSupportLogger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGlobalPlaybackDelay_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("globalPlaybackDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::PlaybackDelaySettings GetGlobalPlaybackDelaySettings() {
            static BNM::Field<::Photon_Voice_Unity::PlaybackDelaySettings> _field = GetClass().GetField(O("globalPlaybackDelaySettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::DebugLevel GetGlobalRecordersLogLevel_f() {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("globalRecordersLogLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::DebugLevel GetGlobalSpeakersLogLevel_f() {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("globalSpeakersLogLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Photon_Voice_Unity::Recorder*>* GetInitializedRecorders() {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Voice_Unity::Recorder*>*> _field = GetClass().GetField(O("initializedRecorders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Photon_Voice_Unity::Speaker*>* GetLinkedSpeakers() {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Voice_Unity::Speaker*>*> _field = GetClass().GetField(O("linkedSpeakers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::VoiceLogger* GetLogger_f() {
            static BNM::Field<::Photon_Voice_Unity::VoiceLogger*> _field = GetClass().GetField(O("logger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::DebugLevel GetLogLevel_f() {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("logLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxDatagrams() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxDatagrams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinimalTimeScaleToDispatchInFixedUpdate() {
            static BNM::Field<float> _field = GetClass().GetField(O("MinimalTimeScaleToDispatchInFixedUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextSendTickCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextSendTickCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextStatsTickCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextStatsTickCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::Recorder* GetPrimaryRecorder_f() {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("primaryRecorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPrimaryRecorderInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("primaryRecorderInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReferenceFramesLost() {
            static BNM::Field<int> _field = GetClass().GetField(O("referenceFramesLost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReferenceFramesReceived() {
            static BNM::Field<int> _field = GetClass().GetField(O("referenceFramesReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::VoiceConnection_ValidateRemoteLinkDelegate* GetRemoteLinkValidator() {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection_ValidateRemoteLinkDelegate*> _field = GetClass().GetField(O("RemoteLinkValidator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::Photon_Voice_Unity::RemoteVoiceLink*>* GetRemoteVoiceAdded() {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Voice_Unity::RemoteVoiceLink*>*> _field = GetClass().GetField(O("RemoteVoiceAdded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSendAsap() {
            static BNM::Field<bool> _field = GetClass().GetField(O("SendAsap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::AppSettings* GetSettings() {
            static BNM::Field<::Photon_Realtime::AppSettings*> _field = GetClass().GetField(O("Settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Func<int, uint8_t, void*, ::Photon_Voice_Unity::Speaker*>* GetSpeakerFactory() {
            static BNM::Field<::BNM::Structures::Mono::Func<int, uint8_t, void*, ::Photon_Voice_Unity::Speaker*>*> _field = GetClass().GetField(O("SpeakerFactory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::Photon_Voice_Unity::Speaker*>* GetSpeakerLinked() {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Voice_Unity::Speaker*>*> _field = GetClass().GetField(O("SpeakerLinked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSpeakerPrefab_f() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("speakerPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStatsReferenceTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("statsReferenceTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStatsResetInterval() {
            static BNM::Field<int> _field = GetClass().GetField(O("statsResetInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::SupportLogger* GetSupportLoggerComponent() {
            static BNM::Field<::Photon_Realtime::SupportLogger*> _field = GetClass().GetField(O("supportLoggerComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUpdateInterval() {
            static BNM::Field<int> _field = GetClass().GetField(O("updateInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAutoCreateSpeakerIfNotFound(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoCreateSpeakerIfNotFound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedRemoteVoices(::BNM::Structures::Mono::List<::Photon_Voice_Unity::RemoteVoiceLink*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Voice_Unity::RemoteVoiceLink*>*> _field = GetClass().GetField(O("cachedRemoteVoices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCleanedUp(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("cleanedUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClient(::Photon_Voice::LoadBalancingTransport* value) {
            static BNM::Field<::Photon_Voice::LoadBalancingTransport*> _field = GetClass().GetField(O("client"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableSupportLogger(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableSupportLogger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlobalPlaybackDelay_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("globalPlaybackDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlobalPlaybackDelaySettings(::Photon_Voice_Unity::PlaybackDelaySettings value) {
            static BNM::Field<::Photon_Voice_Unity::PlaybackDelaySettings> _field = GetClass().GetField(O("globalPlaybackDelaySettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlobalRecordersLogLevel_fs(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("globalRecordersLogLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlobalSpeakersLogLevel_fs(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("globalSpeakersLogLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitializedRecorders(::BNM::Structures::Mono::List<::Photon_Voice_Unity::Recorder*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Voice_Unity::Recorder*>*> _field = GetClass().GetField(O("initializedRecorders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinkedSpeakers(::BNM::Structures::Mono::List<::Photon_Voice_Unity::Speaker*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Voice_Unity::Speaker*>*> _field = GetClass().GetField(O("linkedSpeakers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogger_fs(::Photon_Voice_Unity::VoiceLogger* value) {
            static BNM::Field<::Photon_Voice_Unity::VoiceLogger*> _field = GetClass().GetField(O("logger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogLevel_fs(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("logLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDatagrams(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxDatagrams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinimalTimeScaleToDispatchInFixedUpdate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MinimalTimeScaleToDispatchInFixedUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextSendTickCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextSendTickCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextStatsTickCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextStatsTickCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrimaryRecorder_fs(::Photon_Voice_Unity::Recorder* value) {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("primaryRecorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrimaryRecorderInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("primaryRecorderInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReferenceFramesLost(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("referenceFramesLost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReferenceFramesReceived(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("referenceFramesReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoteLinkValidator(::Photon_Voice_Unity::VoiceConnection_ValidateRemoteLinkDelegate* value) {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection_ValidateRemoteLinkDelegate*> _field = GetClass().GetField(O("RemoteLinkValidator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoteVoiceAdded(::BNM::Structures::Mono::Action<::Photon_Voice_Unity::RemoteVoiceLink*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Voice_Unity::RemoteVoiceLink*>*> _field = GetClass().GetField(O("RemoteVoiceAdded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendAsap(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("SendAsap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSettings(::Photon_Realtime::AppSettings* value) {
            static BNM::Field<::Photon_Realtime::AppSettings*> _field = GetClass().GetField(O("Settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeakerFactory(::BNM::Structures::Mono::Func<int, uint8_t, void*, ::Photon_Voice_Unity::Speaker*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Func<int, uint8_t, void*, ::Photon_Voice_Unity::Speaker*>*> _field = GetClass().GetField(O("SpeakerFactory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeakerLinked(::BNM::Structures::Mono::Action<::Photon_Voice_Unity::Speaker*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Voice_Unity::Speaker*>*> _field = GetClass().GetField(O("SpeakerLinked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeakerPrefab_fs(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("speakerPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatsReferenceTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("statsReferenceTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatsResetInterval(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("statsResetInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSupportLoggerComponent(::Photon_Realtime::SupportLogger* value) {
            static BNM::Field<::Photon_Realtime::SupportLogger*> _field = GetClass().GetField(O("supportLoggerComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateInterval(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("updateInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_RemoteVoiceAdded_1(::BNM::Structures::Mono::Action<::Photon_Voice_Unity::RemoteVoiceLink*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_RemoteVoiceAdded"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_SpeakerLinked_1(::BNM::Structures::Mono::Action<::Photon_Voice_Unity::Speaker*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_SpeakerLinked"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void AddInitializedRecorder(::Photon_Voice_Unity::Recorder* rec) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddInitializedRecorder"), {"rec"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rec);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CalcStatistics() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CalcStatistics"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CleanUp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CleanUp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearRemoteVoicesCache() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearRemoteVoicesCache"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ConnectUsingSettings(::Photon_Realtime::AppSettings* overwriteSettings) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ConnectUsingSettings"), {"overwriteSettings"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(overwriteSettings);
        }
        void DeleteVoiceOnRemoteVoiceRemove(::Photon_Voice_Unity::Speaker* speaker) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteVoiceOnRemoteVoiceRemove"), {"speaker"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(speaker);
        }
        void Dispatch() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* get_BestRegionSummaryInPreferences() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_BestRegionSummaryInPreferences"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::LoadBalancingTransport* get_Client() {
            static BNM::Method<::Photon_Voice::LoadBalancingTransport*> _m = GetClass().GetMethod(O("get_Client"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::ClientState get_ClientState() {
            static BNM::Method<::Photon_Realtime::ClientState> _m = GetClass().GetMethod(O("get_ClientState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_FramesLostPercent() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_FramesLostPercent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_FramesLostPerSecond() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_FramesLostPerSecond"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_FramesReceivedPerSecond() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_FramesReceivedPerSecond"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_GlobalPlaybackDelay() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_GlobalPlaybackDelay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_GlobalPlaybackDelayMaxHard() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_GlobalPlaybackDelayMaxHard"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_GlobalPlaybackDelayMaxSoft() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_GlobalPlaybackDelayMaxSoft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_GlobalPlaybackDelayMinSoft() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_GlobalPlaybackDelayMinSoft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::DebugLevel get_GlobalRecordersLogLevel() {
            static BNM::Method<::ExitGames_Client_Photon::DebugLevel> _m = GetClass().GetMethod(O("get_GlobalRecordersLogLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::DebugLevel get_GlobalSpeakersLogLevel() {
            static BNM::Method<::ExitGames_Client_Photon::DebugLevel> _m = GetClass().GetMethod(O("get_GlobalSpeakersLogLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice_Unity::VoiceLogger* get_Logger() {
            static BNM::Method<::Photon_Voice_Unity::VoiceLogger*> _m = GetClass().GetMethod(O("get_Logger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::ExitGames_Client_Photon::DebugLevel get_LogLevel() {
            static BNM::Method<::ExitGames_Client_Photon::DebugLevel> _m = GetClass().GetMethod(O("get_LogLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice_Unity::Recorder* get_PrimaryRecorder() {
            static BNM::Method<::Photon_Voice_Unity::Recorder*> _m = GetClass().GetMethod(O("get_PrimaryRecorder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GameObject* get_SpeakerPrefab() {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("get_SpeakerPrefab"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::VoiceClient* get_VoiceClient() {
            static BNM::Method<::Photon_Voice::VoiceClient*> _m = GetClass().GetMethod(O("get_VoiceClient"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitRecorder(::Photon_Voice_Unity::Recorder* rec) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitRecorder"), {"rec"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rec);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LinkSpeaker(::Photon_Voice_Unity::Speaker* speaker, ::Photon_Voice_Unity::RemoteVoiceLink* remoteVoice) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkSpeaker"), {"speaker", "remoteVoice"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(speaker, remoteVoice);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnOperationResponseReceived(::ExitGames_Client_Photon::OperationResponse* operationResponse) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOperationResponseReceived"), {"operationResponse"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(operationResponse);
        }
        void OnRemoteVoiceInfo(int channelId, int playerId, uint8_t voiceId, ::Photon_Voice::VoiceInfo voiceInfo, ::Photon_Voice::RemoteVoiceOptions& options) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRemoteVoiceInfo"), {"channelId", "playerId", "voiceId", "voiceInfo", "options"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(channelId, playerId, voiceId, voiceInfo, &options);
        }
        void OnVoiceStateChanged(::Photon_Realtime::ClientState fromState, ::Photon_Realtime::ClientState toState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnVoiceStateChanged"), {"fromState", "toState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fromState, toState);
        }
        void remove_RemoteVoiceAdded_1(::BNM::Structures::Mono::Action<::Photon_Voice_Unity::RemoteVoiceLink*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_RemoteVoiceAdded"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_SpeakerLinked_1(::BNM::Structures::Mono::Action<::Photon_Voice_Unity::Speaker*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_SpeakerLinked"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void RemoveInitializedRecorder(::Photon_Voice_Unity::Recorder* rec) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveInitializedRecorder"), {"rec"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rec);
        }
        void set_BestRegionSummaryInPreferences(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BestRegionSummaryInPreferences"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_FramesLostPercent(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FramesLostPercent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_FramesLostPerSecond(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FramesLostPerSecond"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_FramesReceivedPerSecond(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FramesReceivedPerSecond"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_GlobalPlaybackDelay(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_GlobalPlaybackDelay"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_GlobalRecordersLogLevel(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_GlobalRecordersLogLevel"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_GlobalSpeakersLogLevel(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_GlobalSpeakersLogLevel"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Logger(::Photon_Voice_Unity::VoiceLogger* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Logger"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LogLevel(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LogLevel"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PrimaryRecorder(::Photon_Voice_Unity::Recorder* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PrimaryRecorder"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SpeakerPrefab(::GameObject* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SpeakerPrefab"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetGlobalPlaybackDelaySettings_1(int low, int high, int max) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetGlobalPlaybackDelaySettings"), {"low", "high", "max"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(low, high, max);
        }
        void SetPlaybackDelaySettings(::Photon_Voice_Unity::PlaybackDelaySettings gpds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPlaybackDelaySettings"), {"gpds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gpds);
        }
        template <typename TP2 = void*>
        ::Photon_Voice_Unity::Speaker* SimpleSpeakerFactory(int playerId, uint8_t voiceId, TP2 userData) {
            static BNM::Method<::Photon_Voice_Unity::Speaker*> _m = GetClass().GetMethod(O("SimpleSpeakerFactory"), {"playerId", "voiceId", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerId, voiceId, userData);
        }
        void StartInitializedRecorders() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartInitializedRecorders"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopInitializedRecorders() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopInitializedRecorders"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        bool TryGetFirstVoiceStreamByUserData(TP0 userData, ::Photon_Voice_Unity::RemoteVoiceLink*& remoteVoiceLink) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetFirstVoiceStreamByUserData"), {"userData", "remoteVoiceLink"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userData, &remoteVoiceLink);
        }
        void TryInitializePrimaryRecorder() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryInitializePrimaryRecorder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP1 = void*>
        bool TryLateLinkingUsingUserData(::Photon_Voice_Unity::Speaker* speaker, TP1 userData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryLateLinkingUsingUserData"), {"speaker", "userData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(speaker, userData);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
