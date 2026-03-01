#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../ExitGames_Client_Photon/DebugLevel.hpp"

namespace Photon_Voice_Fusion {
    struct VoiceNetworkObject : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Fusion", "VoiceNetworkObject");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIgnoreGlobalLogLevel() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IgnoreGlobalLogLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIgnoreGlobalLogLevel(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IgnoreGlobalLogLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsLocal() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLocal"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsNetworkObjectReady() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsNetworkObjectReady"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsPlayer() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsPlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsRecorder() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsRecorder"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsRecorder(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsRecorder"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsRecording() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsRecording"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsSetup() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsSetup"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsSpeaker() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsSpeaker"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsSpeaker(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsSpeaker"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsSpeakerLinked() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsSpeakerLinked"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsSpeaking() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsSpeaking"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
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
        ::Photon_Voice_Unity::Recorder* GetRecorderInUse() {
            static BNM::Method<::Photon_Voice_Unity::Recorder*> _method = GetClass().GetMethod(O("get_RecorderInUse"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRecorderInUse(::Photon_Voice_Unity::Recorder* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RecorderInUse"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetRequiresRecorder() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_RequiresRecorder"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetRequiresSpeaker() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_RequiresSpeaker"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Voice_Unity::Speaker* GetSpeakerInUse() {
            static BNM::Method<::Photon_Voice_Unity::Speaker*> _method = GetClass().GetMethod(O("get_SpeakerInUse"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSpeakerInUse(::Photon_Voice_Unity::Speaker* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SpeakerInUse"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetAutoCreateRecorderIfNotFound() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoCreateRecorderIfNotFound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIgnoreGlobalLogLevel_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ignoreGlobalLogLevel"));
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
        ::Photon_Voice_Unity::Recorder* GetRecorderInUse_f() {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("recorderInUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSetupDebugSpeaker() {
            static BNM::Field<bool> _field = GetClass().GetField(O("SetupDebugSpeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::Speaker* GetSpeakerInUse_f() {
            static BNM::Field<::Photon_Voice_Unity::Speaker*> _field = GetClass().GetField(O("speakerInUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUsePrimaryRecorder() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UsePrimaryRecorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::VoiceConnection* GetVoiceConnection() {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("voiceConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAutoCreateRecorderIfNotFound(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoCreateRecorderIfNotFound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIgnoreGlobalLogLevel_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ignoreGlobalLogLevel"));
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
        void SetRecorderInUse_fs(::Photon_Voice_Unity::Recorder* value) {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("recorderInUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetupDebugSpeaker(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("SetupDebugSpeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeakerInUse_fs(::Photon_Voice_Unity::Speaker* value) {
            static BNM::Field<::Photon_Voice_Unity::Speaker*> _field = GetClass().GetField(O("speakerInUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsePrimaryRecorder(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UsePrimaryRecorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceConnection(::Photon_Voice_Unity::VoiceConnection* value) {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("voiceConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CheckLateLinking() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckLateLinking"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyBackingFieldsToState(bool ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBackingFieldsToState"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyStateToBackingFields() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStateToBackingFields"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_IgnoreGlobalLogLevel() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IgnoreGlobalLogLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsNetworkObjectReady() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsNetworkObjectReady"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsPlayer() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsRecorder() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsRecorder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsRecording() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsRecording"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSetup() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSetup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSpeaker() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSpeaker"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSpeakerLinked() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSpeakerLinked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSpeaking() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSpeaking"));
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
        ::Photon_Voice_Unity::Recorder* get_RecorderInUse() {
            static BNM::Method<::Photon_Voice_Unity::Recorder*> _m = GetClass().GetMethod(O("get_RecorderInUse"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_RequiresRecorder() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_RequiresRecorder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_RequiresSpeaker() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_RequiresSpeaker"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice_Unity::Speaker* get_SpeakerInUse() {
            static BNM::Method<::Photon_Voice_Unity::Speaker*> _m = GetClass().GetMethod(O("get_SpeakerInUse"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* GetUserData() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetUserData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_IgnoreGlobalLogLevel(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IgnoreGlobalLogLevel"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsRecorder(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsRecorder"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsSpeaker(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsSpeaker"), {"value"});
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
        void set_RecorderInUse(::Photon_Voice_Unity::Recorder* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RecorderInUse"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SpeakerInUse(::Photon_Voice_Unity::Speaker* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SpeakerInUse"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Setup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool SetupRecorder() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetupRecorder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool SetupRecorder(::Photon_Voice_Unity::Recorder* recorder) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetupRecorder"), {"recorder"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(recorder);
        }
        void SetupRecorderInUse() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupRecorderInUse"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool SetupSpeaker() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetupSpeaker"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool SetupSpeaker(::Photon_Voice_Unity::Speaker* speaker) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SetupSpeaker"), {"speaker"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(speaker);
        }
        void SetupSpeakerInUse() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupSpeakerInUse"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Spawned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Spawned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
