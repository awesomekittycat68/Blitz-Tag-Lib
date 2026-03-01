#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Voice_Unity/VoiceComponent.hpp"

namespace Photon_Voice_Unity_UtilityScripts {
    struct SaveIncomingStreamToFile : ::Photon_Voice_Unity::VoiceComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity.UtilityScripts", "SaveIncomingStreamToFile");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetMuteLocalSpeaker() {
            static BNM::Field<bool> _field = GetClass().GetField(O("muteLocalSpeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::VoiceConnection* GetVoiceConnection() {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("voiceConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMuteLocalSpeaker(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("muteLocalSpeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceConnection(::Photon_Voice_Unity::VoiceConnection* value) {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("voiceConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* GetFilePath(::Photon_Voice_Unity::RemoteVoiceLink* remoteVoiceLink) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetFilePath"), {"remoteVoiceLink"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(remoteVoiceLink);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnRemoteVoiceAdded(::Photon_Voice_Unity::RemoteVoiceLink* remoteVoiceLink) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRemoteVoiceAdded"), {"remoteVoiceLink"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(remoteVoiceLink);
        }
        void OnSpeakerLinked(::Photon_Voice_Unity::Speaker* speaker) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpeakerLinked"), {"speaker"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(speaker);
        }
    };
}
