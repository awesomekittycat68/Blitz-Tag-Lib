#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../ExitGames_Client_Photon/DebugLevel.hpp"
#include "../Photon_Voice/OpusCodec_FrameDuration.hpp"
#include "../Photon_Voice_Unity/Recorder_InputSourceType.hpp"
#include "../Photon_Voice_Unity/Recorder_MicType.hpp"
#include "../POpusCodec_Enums/SamplingRate.hpp"

namespace GorillaNetworking {
    struct SO_NetworkVoiceSettings : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "SO_NetworkVoiceSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAutoConnectAndJoin() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoConnectAndJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAutoLeaveAndDisconnect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoLeaveAndDisconnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAutoStart() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBackgroundTimeout() {
            static BNM::Field<int> _field = GetClass().GetField(O("BackgroundTimeout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBitrate() {
            static BNM::Field<int> _field = GetClass().GetField(O("Bitrate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCreateSpeakerIfNotFound() {
            static BNM::Field<bool> _field = GetClass().GetField(O("CreateSpeakerIfNotFound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDebugEcho() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugEcho"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDelay() {
            static BNM::Field<int> _field = GetClass().GetField(O("Delay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDetect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Detect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEncrypt() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Encrypt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice::OpusCodec_FrameDuration GetFrameDuration() {
            static BNM::Field<::Photon_Voice::OpusCodec_FrameDuration> _field = GetClass().GetField(O("FrameDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::DebugLevel GetGlobalRecordersLogLevel() {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("GlobalRecordersLogLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::DebugLevel GetGlobalSpeakersLogLevel() {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("GlobalSpeakersLogLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::Recorder_InputSourceType GetInputSourceType() {
            static BNM::Field<::Photon_Voice_Unity::Recorder_InputSourceType> _field = GetClass().GetField(O("InputSourceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetInterestGroup() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("InterestGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::DebugLevel GetLogLevel() {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("LogLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::Recorder_MicType GetMicrophoneType() {
            static BNM::Field<::Photon_Voice_Unity::Recorder_MicType> _field = GetClass().GetField(O("MicrophoneType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRecordOnlyWhenEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("RecordOnlyWhenEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRecordOnlyWhenJoined() {
            static BNM::Field<bool> _field = GetClass().GetField(O("RecordOnlyWhenJoined"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReliableMode() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ReliableMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::POpusCodec_Enums::SamplingRate GetSamplingRate() {
            static BNM::Field<::POpusCodec_Enums::SamplingRate> _field = GetClass().GetField(O("SamplingRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStopRecordingWhenPaused() {
            static BNM::Field<bool> _field = GetClass().GetField(O("StopRecordingWhenPaused"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSupportLogger() {
            static BNM::Field<bool> _field = GetClass().GetField(O("SupportLogger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("Threshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTransmitEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("TransmitEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUpdateInterval() {
            static BNM::Field<int> _field = GetClass().GetField(O("UpdateInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseFallback() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseFallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWorkInOfflineMode() {
            static BNM::Field<bool> _field = GetClass().GetField(O("WorkInOfflineMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAutoConnectAndJoin(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoConnectAndJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoLeaveAndDisconnect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoLeaveAndDisconnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoStart(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBackgroundTimeout(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("BackgroundTimeout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBitrate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Bitrate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreateSpeakerIfNotFound(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("CreateSpeakerIfNotFound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugEcho(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DebugEcho"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelay(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Delay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDetect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Detect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEncrypt(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Encrypt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameDuration(::Photon_Voice::OpusCodec_FrameDuration value) {
            static BNM::Field<::Photon_Voice::OpusCodec_FrameDuration> _field = GetClass().GetField(O("FrameDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlobalRecordersLogLevel(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("GlobalRecordersLogLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlobalSpeakersLogLevel(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("GlobalSpeakersLogLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputSourceType(::Photon_Voice_Unity::Recorder_InputSourceType value) {
            static BNM::Field<::Photon_Voice_Unity::Recorder_InputSourceType> _field = GetClass().GetField(O("InputSourceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInterestGroup(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("InterestGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLogLevel(::ExitGames_Client_Photon::DebugLevel value) {
            static BNM::Field<::ExitGames_Client_Photon::DebugLevel> _field = GetClass().GetField(O("LogLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMicrophoneType(::Photon_Voice_Unity::Recorder_MicType value) {
            static BNM::Field<::Photon_Voice_Unity::Recorder_MicType> _field = GetClass().GetField(O("MicrophoneType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecordOnlyWhenEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("RecordOnlyWhenEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecordOnlyWhenJoined(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("RecordOnlyWhenJoined"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReliableMode(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ReliableMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSamplingRate(::POpusCodec_Enums::SamplingRate value) {
            static BNM::Field<::POpusCodec_Enums::SamplingRate> _field = GetClass().GetField(O("SamplingRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStopRecordingWhenPaused(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("StopRecordingWhenPaused"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSupportLogger(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("SupportLogger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("Threshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransmitEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("TransmitEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateInterval(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("UpdateInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseFallback(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseFallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorkInOfflineMode(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("WorkInOfflineMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
