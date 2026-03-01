#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RigContainer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RigContainer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetBodyCollider() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_BodyCollider"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCachedNetViewID() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CachedNetViewID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::NetPlayer* GetCreator() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _method = GetClass().GetMethod(O("get_Creator"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCreator(::GlobalNamespace::NetPlayer* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Creator"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetForceMute() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ForceMute"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetForceMute(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ForceMute"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::SphereCollider* GetHeadCollider() {
            static BNM::Method<::SphereCollider*> _method = GetClass().GetMethod(O("get_HeadCollider"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Initialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInitialized(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Initialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::LCKSocialCameraFollower* GetLckCococamFollower() {
            static BNM::Method<::GlobalNamespace::LCKSocialCameraFollower*> _method = GetClass().GetMethod(O("get_LckCococamFollower"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::LCKSocialCameraFollower* GetLCKTabletFollower() {
            static BNM::Method<::GlobalNamespace::LCKSocialCameraFollower*> _method = GetClass().GetMethod(O("get_LCKTabletFollower"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GorillaTag_Audio::LoudSpeakerNetwork*>* GetLoudSpeakerNetworks() {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaTag_Audio::LoudSpeakerNetwork*>*> _method = GetClass().GetMethod(O("get_LoudSpeakerNetworks"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetMuted() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Muted"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMuted(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Muted"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::NetworkView* GetNetView() {
            static BNM::Method<::GlobalNamespace::NetworkView*> _method = GetClass().GetMethod(O("get_netView"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::VRRigReliableState* GetReliableState() {
            static BNM::Method<::GlobalNamespace::VRRigReliableState*> _method = GetClass().GetMethod(O("get_ReliableState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::AudioSource* GetReplacementVoiceSource() {
            static BNM::Method<::AudioSource*> _method = GetClass().GetMethod(O("get_ReplacementVoiceSource"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _method = GetClass().GetMethod(O("get_Rig"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::VRRigEvents* GetRigEvents() {
            static BNM::Method<::GlobalNamespace::VRRigEvents*> _method = GetClass().GetMethod(O("get_RigEvents"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Transform* GetSpeakerHead() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_SpeakerHead"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Voice_PUN::PhotonVoiceView* GetVoice() {
            static BNM::Method<::Photon_Voice_PUN::PhotonVoiceView*> _method = GetClass().GetMethod(O("get_Voice"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetVoice(::Photon_Voice_PUN::PhotonVoiceView* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Voice"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static bool GetAutomuteQueued() {
            static BNM::Field<bool> _field = GetClass().GetField(O("automuteQueued"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetBodyCollider_f() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("bodyCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBPlayerAutoMuted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("bPlayerAutoMuted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableVoice() {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForceMute_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceMute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasManualMute() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasManualMute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SphereCollider* GetHeadCollider_f() {
            static BNM::Field<::SphereCollider*> _field = GetClass().GetField(O("headCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTag_Audio::LoudSpeakerNetwork*>* GetLoudSpeakerNetworks_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Audio::LoudSpeakerNetwork*>*> _field = GetClass().GetField(O("loudSpeakerNetworks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMCachedNetViewID() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_cachedNetViewID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LCKSocialCameraFollower* GetMLckCococamFollower() {
            static BNM::Field<::GlobalNamespace::LCKSocialCameraFollower*> _field = GetClass().GetField(O("m_lckCococamFollower"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LCKSocialCameraFollower* GetMLckTablet() {
            static BNM::Field<::GlobalNamespace::LCKSocialCameraFollower*> _field = GetClass().GetField(O("m_lckTablet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayerChatQuality() {
            static BNM::Field<int> _field = GetClass().GetField(O("playerChatQuality"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* GetPlayersToCheckAutomute() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("playersToCheckAutomute"));
            return _field.Get();
        }
        ::GlobalNamespace::VRRigReliableState* GetReliableState_f() {
            static BNM::Field<::GlobalNamespace::VRRigReliableState*> _field = GetClass().GetField(O("reliableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetReplacementVoiceSource_f() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("replacementVoiceSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* GetRequestedAutomutePlayers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("requestedAutomutePlayers"));
            return _field.Get();
        }
        ::GlobalNamespace::VRRigEvents* GetRigEvents_f() {
            static BNM::Field<::GlobalNamespace::VRRigEvents*> _field = GetClass().GetField(O("rigEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSpeakerHead_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("speakerHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::RigContainer* GetStaticTempRC() {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("staticTempRC"));
            return _field.Get();
        }
        ::Photon_Voice_PUN::PhotonVoiceView* GetVoiceView() {
            static BNM::Field<::Photon_Voice_PUN::PhotonVoiceView*> _field = GetClass().GetField(O("voiceView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetVrrig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("vrrig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetWaitingForAutomuteCallback() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForAutomuteCallback"));
            return _field.Get();
        }
        static void SetAutomuteQueued(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("automuteQueued"));
            _field.Set(value);
        }
        void SetBodyCollider(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("bodyCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBPlayerAutoMuted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("bPlayerAutoMuted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableVoice(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForceMute_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("forceMute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasManualMute(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasManualMute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadCollider(::SphereCollider* value) {
            static BNM::Field<::SphereCollider*> _field = GetClass().GetField(O("headCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoudSpeakerNetworks(::BNM::Structures::Mono::List<::GorillaTag_Audio::LoudSpeakerNetwork*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Audio::LoudSpeakerNetwork*>*> _field = GetClass().GetField(O("loudSpeakerNetworks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMCachedNetViewID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_cachedNetViewID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLckCococamFollower(::GlobalNamespace::LCKSocialCameraFollower* value) {
            static BNM::Field<::GlobalNamespace::LCKSocialCameraFollower*> _field = GetClass().GetField(O("m_lckCococamFollower"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLckTablet(::GlobalNamespace::LCKSocialCameraFollower* value) {
            static BNM::Field<::GlobalNamespace::LCKSocialCameraFollower*> _field = GetClass().GetField(O("m_lckTablet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerChatQuality(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playerChatQuality"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPlayersToCheckAutomute(::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("playersToCheckAutomute"));
            _field.Set(value);
        }
        void SetReliableState(::GlobalNamespace::VRRigReliableState* value) {
            static BNM::Field<::GlobalNamespace::VRRigReliableState*> _field = GetClass().GetField(O("reliableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReplacementVoiceSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("replacementVoiceSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRequestedAutomutePlayers(::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("requestedAutomutePlayers"));
            _field.Set(value);
        }
        void SetRigEvents(::GlobalNamespace::VRRigEvents* value) {
            static BNM::Field<::GlobalNamespace::VRRigEvents*> _field = GetClass().GetField(O("rigEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpeakerHead(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("speakerHead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetStaticTempRC(::GlobalNamespace::RigContainer* value) {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("staticTempRC"));
            _field.Set(value);
        }
        void SetVoiceView(::Photon_Voice_PUN::PhotonVoiceView* value) {
            static BNM::Field<::Photon_Voice_PUN::PhotonVoiceView*> _field = GetClass().GetField(O("voiceView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrrig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("vrrig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetWaitingForAutomuteCallback(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForAutomuteCallback"));
            _field.Set(value);
        }
        void AddLoudSpeakerNetwork(::GorillaTag_Audio::LoudSpeakerNetwork* network) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddLoudSpeakerNetwork"), {"network"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(network);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CancelAutomuteRequest() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelAutomuteRequest"));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* get_BodyCollider() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_BodyCollider"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_CachedNetViewID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CachedNetViewID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetPlayer* get_Creator() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("get_Creator"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_ForceMute() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ForceMute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::SphereCollider* get_HeadCollider() {
            static BNM::Method<::SphereCollider*> _m = GetClass().GetMethod(O("get_HeadCollider"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_Initialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Initialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::LCKSocialCameraFollower* get_LckCococamFollower() {
            static BNM::Method<::GlobalNamespace::LCKSocialCameraFollower*> _m = GetClass().GetMethod(O("get_LckCococamFollower"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::LCKSocialCameraFollower* get_LCKTabletFollower() {
            static BNM::Method<::GlobalNamespace::LCKSocialCameraFollower*> _m = GetClass().GetMethod(O("get_LCKTabletFollower"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GorillaTag_Audio::LoudSpeakerNetwork*>* get_LoudSpeakerNetworks() {
            static BNM::Method<::BNM::Structures::Mono::List<::GorillaTag_Audio::LoudSpeakerNetwork*>*> _m = GetClass().GetMethod(O("get_LoudSpeakerNetworks"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_Muted() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Muted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetworkView* get_netView() {
            static BNM::Method<::GlobalNamespace::NetworkView*> _m = GetClass().GetMethod(O("get_netView"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::VRRigReliableState* get_ReliableState() {
            static BNM::Method<::GlobalNamespace::VRRigReliableState*> _m = GetClass().GetMethod(O("get_ReliableState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::AudioSource* get_ReplacementVoiceSource() {
            static BNM::Method<::AudioSource*> _m = GetClass().GetMethod(O("get_ReplacementVoiceSource"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::VRRig* get_Rig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("get_Rig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::VRRigEvents* get_RigEvents() {
            static BNM::Method<::GlobalNamespace::VRRigEvents*> _m = GetClass().GetMethod(O("get_RigEvents"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* get_SpeakerHead() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_SpeakerHead"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice_PUN::PhotonVoiceView* get_Voice() {
            static BNM::Method<::Photon_Voice_PUN::PhotonVoiceView*> _m = GetClass().GetMethod(O("get_Voice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool GetIsPlayerAutoMuted() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetIsPlayerAutoMuted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitializeNetwork(::GlobalNamespace::NetworkView* netView, ::Photon_Voice_PUN::PhotonVoiceView* voiceView, ::GlobalNamespace::VRRigSerializer* vrRigSerializer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeNetwork"), {"netView", "voiceView", "vrRigSerializer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netView, voiceView, vrRigSerializer);
        }
        void InitializeNetwork_Shared(::GlobalNamespace::NetworkView* netView, ::GlobalNamespace::VRRigSerializer* vrRigSerializer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeNetwork_Shared"), {"netView", "vrRigSerializer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netView, vrRigSerializer);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnMultiPlayerStarted() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMultiPlayerStarted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnReturnedToSinglePlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReturnedToSinglePlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessAutomute() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessAutomute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::BNM::Coroutine::IEnumerator* QueueAutomute(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("QueueAutomute"), {"player"});
            return _m.Call(player);
        }
        static void ReceiveAutomuteSettings(::GlobalNamespace::NetPlayer* player, ::BNM::Structures::Mono::String* score) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReceiveAutomuteSettings"), {"player", "score"});
            _m.Call(player, score);
        }
        static void RefreshAllRigVoices() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshAllRigVoices"));
            _m.Call();
        }
        void RefreshVoiceChat() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshVoiceChat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoveLoudSpeakerNetwork(::GorillaTag_Audio::LoudSpeakerNetwork* network) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveLoudSpeakerNetwork"), {"network"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(network);
        }
        static void RequestAutomuteSettings() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestAutomuteSettings"));
            _m.Call();
        }
        void RigPostEnable(::GlobalNamespace::RigContainer* _) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RigPostEnable"), {"_"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_);
        }
        void set_Creator(::GlobalNamespace::NetPlayer* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Creator"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ForceMute(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ForceMute"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Initialized(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Initialized"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Muted(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Muted"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Voice(::Photon_Voice_PUN::PhotonVoiceView* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Voice"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateAutomuteLevel(::BNM::Structures::Mono::String* autoMuteLevel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAutomuteLevel"), {"autoMuteLevel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(autoMuteLevel);
        }
    };
}
