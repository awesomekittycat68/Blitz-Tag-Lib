#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Audio {
    struct LoudSpeakerNetwork : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Audio", "LoudSpeakerNetwork");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::AudioSource*>* GetSpeakerSources() {
            static BNM::Method<::BNM::Structures::Mono::Array<::AudioSource*>*> _method = GetClass().GetMethod(O("get_SpeakerSources"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCurrentSpeakerActor() {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentSpeakerActor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Photon_Voice_Unity::Speaker*>* GetCurrentSpeakers() {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Voice_Unity::Speaker*>*> _field = GetClass().GetField(O("_currentSpeakers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Audio::GTRecorder* GetLocalRecorder() {
            static BNM::Field<::GorillaTag_Audio::GTRecorder*> _field = GetClass().GetField(O("_localRecorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RigContainer* GetRigContainer() {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("_rigContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::AudioSource*>* GetSpeakerSources_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioSource*>*> _field = GetClass().GetField(O("_speakerSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReparentLocalSpeaker() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ReparentLocalSpeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentSpeakerActor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentSpeakerActor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSpeakers(::BNM::Structures::Mono::List<::Photon_Voice_Unity::Speaker*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Voice_Unity::Speaker*>*> _field = GetClass().GetField(O("_currentSpeakers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalRecorder(::GorillaTag_Audio::GTRecorder* value) {
            static BNM::Field<::GorillaTag_Audio::GTRecorder*> _field = GetClass().GetField(O("_localRecorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigContainer(::GlobalNamespace::RigContainer* value) {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("_rigContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeakerSources(::BNM::Structures::Mono::Array<::AudioSource*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::AudioSource*>*> _field = GetClass().GetField(O("_speakerSources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReparentLocalSpeaker(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ReparentLocalSpeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddSpeaker(::Photon_Voice_Unity::Speaker* speaker) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSpeaker"), {"speaker"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(speaker);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BroadcastLoudSpeakerNetwork(int actorNumber, bool isLocal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BroadcastLoudSpeakerNetwork"), {"actorNumber", "isLocal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNumber, isLocal);
        }
        ::BNM::Structures::Mono::Array<::AudioSource*>* get_SpeakerSources() {
            static BNM::Method<::BNM::Structures::Mono::Array<::AudioSource*>*> _m = GetClass().GetMethod(O("get_SpeakerSources"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool GetParentRigContainer(::GlobalNamespace::RigContainer*& rigContainer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetParentRigContainer"), {"rigContainer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&rigContainer);
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
        void RemoveSpeaker(::Photon_Voice_Unity::Speaker* speaker) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveSpeaker"), {"speaker"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(speaker);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartBroadcastSpeakerOutput(::GlobalNamespace::VRRig* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartBroadcastSpeakerOutput"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void StopBroadcastLoudSpeakerNetwork(int actorNumber, bool isLocal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopBroadcastLoudSpeakerNetwork"), {"actorNumber", "isLocal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNumber, isLocal);
        }
        void StopBroadcastSpeakerOutput(::GlobalNamespace::VRRig* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopBroadcastSpeakerOutput"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
    };
}
