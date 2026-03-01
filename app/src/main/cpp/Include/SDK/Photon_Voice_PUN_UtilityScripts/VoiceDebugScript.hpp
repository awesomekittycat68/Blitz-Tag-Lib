#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/MonoBehaviourPun.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace Photon_Voice_PUN_UtilityScripts {
    struct VoiceDebugScript : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.PUN.UtilityScripts", "VoiceDebugScript");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetDisableVad() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DisableVad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForceRecordingAndTransmission() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ForceRecordingAndTransmission"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIncreaseLogLevels() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IncreaseLogLevels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalDebug() {
            static BNM::Field<bool> _field = GetClass().GetField(O("LocalDebug"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_PUN::PhotonVoiceView* GetPhotonVoiceView() {
            static BNM::Field<::Photon_Voice_PUN::PhotonVoiceView*> _field = GetClass().GetField(O("photonVoiceView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetTestAudioClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("TestAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTestUsingAudioClip() {
            static BNM::Field<bool> _field = GetClass().GetField(O("TestUsingAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDisableVad(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DisableVad"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceRecordingAndTransmission(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ForceRecordingAndTransmission"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncreaseLogLevels(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IncreaseLogLevels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalDebug(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("LocalDebug"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonVoiceView(::Photon_Voice_PUN::PhotonVoiceView* value) {
            static BNM::Field<::Photon_Voice_PUN::PhotonVoiceView*> _field = GetClass().GetField(O("photonVoiceView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestAudioClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("TestAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestUsingAudioClip(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("TestUsingAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CantHearYou() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CantHearYou"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CantHearYou(::BNM::Structures::Mono::String* roomName, ::BNM::Structures::Mono::String* serverIp, ::BNM::Structures::Mono::String* appVersion, ::Photon_Pun::PhotonMessageInfo photonMessageInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CantHearYou"), {"roomName", "serverIp", "appVersion", "photonMessageInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(roomName, serverIp, appVersion, photonMessageInfo);
        }
        void HeresWhy(::BNM::Structures::Mono::String* why, ::Photon_Pun::PhotonMessageInfo photonMessageInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HeresWhy"), {"why", "photonMessageInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(why, photonMessageInfo);
        }
        void MaxLogs() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MaxLogs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Reply(::BNM::Structures::Mono::String* why, ::Photon_Realtime::Player* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reply"), {"why", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(why, player);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
