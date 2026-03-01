#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Voice_Unity/VoiceComponent.hpp"

namespace Photon_Voice_PUN {
    struct PhotonVoiceView : ::Photon_Voice_Unity::VoiceComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.PUN", "PhotonVoiceView");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsPhotonViewReady() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsPhotonViewReady"));
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
        bool GetOnEnableCalledOnce() {
            static BNM::Field<bool> _field = GetClass().GetField(O("onEnableCalledOnce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetPhotonView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
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
        void SetAutoCreateRecorderIfNotFound(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoCreateRecorderIfNotFound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnEnableCalledOnce(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("onEnableCalledOnce"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
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
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckLateLinking() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckLateLinking"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_IsPhotonViewReady() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsPhotonViewReady"));
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
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
