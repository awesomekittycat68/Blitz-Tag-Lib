#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetJoinResult.hpp"
#include "NetSystemState.hpp"
#include "NetworkSystemConfig.hpp"
#include "RPCArgBuffer$1.hpp"

namespace GlobalNamespace {
    struct NetworkSystem : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NetworkSystem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* roomCharacters = "ABCDEFGHIJKLMNPQRSTUVWXYZ123456789";
        static constexpr const char* shuffleCharacters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
        ::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* GetAllNetPlayers() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>*> _method = GetClass().GetMethod(O("get_AllNetPlayers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetCurrentPhotonBackend() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_CurrentPhotonBackend"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetCurrentRegion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_CurrentRegion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::RoomConfig* GetCurrentRoom() {
            static BNM::Method<::GlobalNamespace::RoomConfig*> _method = GetClass().GetMethod(O("get_CurrentRoom"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentRoom(::GlobalNamespace::RoomConfig* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentRoom"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetGameModeString() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_GameModeString"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetGroupJoinInProgress() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_groupJoinInProgress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetGroupJoinInProgress(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_groupJoinInProgress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetInRoom() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InRoom"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsMasterClient() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsMasterClient"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsOnline() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsOnline"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::NetPlayer* GetLocalPlayer() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _method = GetClass().GetMethod(O("get_LocalPlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetLocalPlayerID() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LocalPlayerID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Voice_Unity::Recorder* GetLocalRecorder() {
            static BNM::Method<::Photon_Voice_Unity::Recorder*> _method = GetClass().GetMethod(O("get_LocalRecorder"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Voice_Unity::Speaker* GetLocalSpeaker() {
            static BNM::Method<::Photon_Voice_Unity::Speaker*> _method = GetClass().GetMethod(O("get_LocalSpeaker"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::NetPlayer* GetMasterClient() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _method = GetClass().GetMethod(O("get_MasterClient"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::NetSystemState GetNetState() {
            static BNM::Method<::GlobalNamespace::NetSystemState> _method = GetClass().GetMethod(O("get_netState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetNetState(::GlobalNamespace::NetSystemState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_netState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* GetPlayerListOthers() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>*> _method = GetClass().GetMethod(O("get_PlayerListOthers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetRoomName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_RoomName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetRoomPlayerCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_RoomPlayerCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetServerTimestamp() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ServerTimestamp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetSessionIsPrivate() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_SessionIsPrivate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetSessionIsSubscription() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_SessionIsSubscription"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetSimDeltaTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_SimDeltaTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSimTick() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SimTick"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        double GetSimTime() {
            static BNM::Method<double> _method = GetClass().GetMethod(O("get_SimTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetTickRate() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TickRate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Photon_Voice_Unity::VoiceConnection* GetVoiceConnection() {
            static BNM::Method<::Photon_Voice_Unity::VoiceConnection*> _method = GetClass().GetMethod(O("get_VoiceConnection"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetWrongVersion() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_WrongVersion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnCustomAuthenticationResponse(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCustomAuthenticationResponse"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnCustomAuthenticationResponse(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCustomAuthenticationResponse"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnRaiseEvent(::BNM::Structures::Mono::Action<uint8_t, void*, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnRaiseEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnRaiseEvent(::BNM::Structures::Mono::Action<uint8_t, void*, int>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnRaiseEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        bool GetChangingSceneManually() {
            static BNM::Field<bool> _field = GetClass().GetField(O("changingSceneManually"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetworkSystemConfig GetConfig() {
            static BNM::Field<::GlobalNamespace::NetworkSystemConfig> _field = GetClass().GetField(O("config"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentRegionIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRegionIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* GetEmptyArgs() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("EmptyArgs"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetGroupJoinOverrideGameMode() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("groupJoinOverrideGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::NetworkSystem* GetInstance() {
            static BNM::Field<::GlobalNamespace::NetworkSystem*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        bool GetIsWrongVersion() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isWrongVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::Recorder* GetLocalRecorder_f() {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("localRecorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::Speaker* GetLocalSpeaker_f() {
            static BNM::Field<::Photon_Voice_Unity::Speaker*> _field = GetClass().GetField(O("localSpeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::VoiceConnection_ValidateRemoteLinkDelegate* GetMValidateRemoteLink() {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection_ValidateRemoteLinkDelegate*> _field = GetClass().GetField(O("m_validateRemoteLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* GetNetPlayerCache() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("netPlayerCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNonceRefreshed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("nonceRefreshed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*>* GetOnCustomAuthenticationResponse() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*>*> _field = GetClass().GetField(O("OnCustomAuthenticationResponse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::DelegateListProcessor* GetOnJoinedRoomEvent() {
            static BNM::Field<::GorillaTag::DelegateListProcessor*> _field = GetClass().GetField(O("OnJoinedRoomEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::DelegateListProcessor* GetOnMultiplayerStarted() {
            static BNM::Field<::GorillaTag::DelegateListProcessor*> _field = GetClass().GetField(O("OnMultiplayerStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<uint8_t, void*, int>* GetOnRaiseEvent() {
            static BNM::Field<::BNM::Structures::Mono::Action<uint8_t, void*, int>*> _field = GetClass().GetField(O("OnRaiseEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::DelegateListProcessor* GetOnReturnedToSinglePlayer() {
            static BNM::Field<::GorillaTag::DelegateListProcessor*> _field = GetClass().GetField(O("OnReturnedToSinglePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetRegionNames() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("regionNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<::Photon_Voice_Unity::RemoteVoiceLink*>*>* GetRemoteVoiceAddedCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<::Photon_Voice_Unity::RemoteVoiceLink*>*>*> _field = GetClass().GetField(O("remoteVoiceAddedCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetReusableSB() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("reusableSB"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetSceneObjectsToAttach() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("SceneObjectsToAttach"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetShuffleStringBuilder() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("shuffleStringBuilder"));
            return _field.Get();
        }
        ::GlobalNamespace::NetSystemState GetTestState() {
            static BNM::Field<::GlobalNamespace::NetSystemState> _field = GetClass().GetField(O("testState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::SO_NetworkVoiceSettings* GetVoiceSettings() {
            static BNM::Field<::GorillaNetworking::SO_NetworkVoiceSettings*> _field = GetClass().GetField(O("VoiceSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetChangingSceneManually(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("changingSceneManually"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfig(::GlobalNamespace::NetworkSystemConfig value) {
            static BNM::Field<::GlobalNamespace::NetworkSystemConfig> _field = GetClass().GetField(O("config"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentRegionIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRegionIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroupJoinOverrideGameMode(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("groupJoinOverrideGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::NetworkSystem* value) {
            static BNM::Field<::GlobalNamespace::NetworkSystem*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetIsWrongVersion(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isWrongVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalRecorder(::Photon_Voice_Unity::Recorder* value) {
            static BNM::Field<::Photon_Voice_Unity::Recorder*> _field = GetClass().GetField(O("localRecorder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalSpeaker(::Photon_Voice_Unity::Speaker* value) {
            static BNM::Field<::Photon_Voice_Unity::Speaker*> _field = GetClass().GetField(O("localSpeaker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMValidateRemoteLink(::Photon_Voice_Unity::VoiceConnection_ValidateRemoteLinkDelegate* value) {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection_ValidateRemoteLinkDelegate*> _field = GetClass().GetField(O("m_validateRemoteLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetPlayerCache(::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("netPlayerCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNonceRefreshed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("nonceRefreshed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCustomAuthenticationResponse(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*>*> _field = GetClass().GetField(O("OnCustomAuthenticationResponse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnJoinedRoomEvent(::GorillaTag::DelegateListProcessor* value) {
            static BNM::Field<::GorillaTag::DelegateListProcessor*> _field = GetClass().GetField(O("OnJoinedRoomEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnMultiplayerStarted(::GorillaTag::DelegateListProcessor* value) {
            static BNM::Field<::GorillaTag::DelegateListProcessor*> _field = GetClass().GetField(O("OnMultiplayerStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnRaiseEvent(::BNM::Structures::Mono::Action<uint8_t, void*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<uint8_t, void*, int>*> _field = GetClass().GetField(O("OnRaiseEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnReturnedToSinglePlayer(::GorillaTag::DelegateListProcessor* value) {
            static BNM::Field<::GorillaTag::DelegateListProcessor*> _field = GetClass().GetField(O("OnReturnedToSinglePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRegionNames(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("regionNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoteVoiceAddedCallbacks(::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<::Photon_Voice_Unity::RemoteVoiceLink*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Action<::Photon_Voice_Unity::RemoteVoiceLink*>*>*> _field = GetClass().GetField(O("remoteVoiceAddedCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetReusableSB(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("reusableSB"));
            _field.Set(value);
        }
        void SetSceneObjectsToAttach(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("SceneObjectsToAttach"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetShuffleStringBuilder(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("shuffleStringBuilder"));
            _field.Set(value);
        }
        void SetTestState(::GlobalNamespace::NetSystemState value) {
            static BNM::Field<::GlobalNamespace::NetSystemState> _field = GetClass().GetField(O("testState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceSettings(::GorillaNetworking::SO_NetworkVoiceSettings* value) {
            static BNM::Field<::GorillaNetworking::SO_NetworkVoiceSettings*> _field = GetClass().GetField(O("VoiceSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnCustomAuthenticationResponse_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCustomAuthenticationResponse"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnRaiseEvent_1(::BNM::Structures::Mono::Action<uint8_t, void*, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnRaiseEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void AddRemoteVoiceAddedCallback(::BNM::Structures::Mono::Action<::Photon_Voice_Unity::RemoteVoiceLink*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddRemoteVoiceAddedCallback"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback);
        }
        void AddVoiceSettings(::GorillaNetworking::SO_NetworkVoiceSettings* settings) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddVoiceSettings"), {"settings"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(settings);
        }
        void AttachObjectInGame(::GameObject* item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachObjectInGame"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item);
        }
        ::BNM::IL2CPP::Il2CppObject* AwaitSceneReady() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("AwaitSceneReady"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void BroadcastMyRoom(bool create, ::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::String* shuffler) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BroadcastMyRoom"), {"create", "key", "shuffler"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(create, key, shuffler);
        }
        void CallRPC(::MonoBehaviour* component, ::GlobalNamespace::NetworkSystem_RPC* rpcMethod, bool sendToSelf) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallRPC"), {"component", "rpcMethod", "sendToSelf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(component, rpcMethod, sendToSelf);
        }
        void CallRPC(int targetPlayerID, ::MonoBehaviour* component, ::GlobalNamespace::NetworkSystem_RPC* rpcMethod) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallRPC"), {"targetPlayerID", "component", "rpcMethod"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPlayerID, component, rpcMethod);
        }
        void CallRPC(::MonoBehaviour* component, ::GlobalNamespace::NetworkSystem_StringRPC* rpcMethod, ::BNM::Structures::Mono::String* message, bool sendToSelf) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallRPC"), {"component", "rpcMethod", "message", "sendToSelf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(component, rpcMethod, message, sendToSelf);
        }
        void CallRPC(int targetPlayerID, ::MonoBehaviour* component, ::GlobalNamespace::NetworkSystem_StringRPC* rpcMethod, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallRPC"), {"targetPlayerID", "component", "rpcMethod", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPlayerID, component, rpcMethod, message);
        }
        void* ConnectToRoom(::BNM::Structures::Mono::String* roomName, ::GlobalNamespace::RoomConfig* opts, int regionIndex) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ConnectToRoom"), {"roomName", "opts", "regionIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(roomName, opts, regionIndex);
        }
        void CustomAuthenticationResponse(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CustomAuthenticationResponse"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void DetatchSceneObjectInGame(::GameObject* item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DetatchSceneObjectInGame"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item);
        }
        ::GlobalNamespace::NetPlayer* FindPlayer(::Photon_Realtime::Player* punPlayer) {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("FindPlayer"), {"punPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(punPlayer);
        }
        void FinishAuthenticating() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FinishAuthenticating"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* get_AllNetPlayers() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>*> _m = GetClass().GetMethod(O("get_AllNetPlayers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_CurrentPhotonBackend() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_CurrentPhotonBackend"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_CurrentRegion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_CurrentRegion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::RoomConfig* get_CurrentRoom() {
            static BNM::Method<::GlobalNamespace::RoomConfig*> _m = GetClass().GetMethod(O("get_CurrentRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_GameModeString() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_GameModeString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_groupJoinInProgress() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_groupJoinInProgress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_InRoom() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsMasterClient() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsMasterClient"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsOnline() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsOnline"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetPlayer* get_LocalPlayer() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("get_LocalPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LocalPlayerID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LocalPlayerID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice_Unity::Recorder* get_LocalRecorder() {
            static BNM::Method<::Photon_Voice_Unity::Recorder*> _m = GetClass().GetMethod(O("get_LocalRecorder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice_Unity::Speaker* get_LocalSpeaker() {
            static BNM::Method<::Photon_Voice_Unity::Speaker*> _m = GetClass().GetMethod(O("get_LocalSpeaker"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetPlayer* get_MasterClient() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("get_MasterClient"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetSystemState get_netState() {
            static BNM::Method<::GlobalNamespace::NetSystemState> _m = GetClass().GetMethod(O("get_netState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* get_PlayerListOthers() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>*> _m = GetClass().GetMethod(O("get_PlayerListOthers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_RoomName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_RoomName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_RoomPlayerCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_RoomPlayerCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ServerTimestamp() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ServerTimestamp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_SessionIsPrivate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_SessionIsPrivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_SessionIsSubscription() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_SessionIsSubscription"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_SimDeltaTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_SimDeltaTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SimTick() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SimTick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        double get_SimTime() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("get_SimTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TickRate() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TickRate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice_Unity::VoiceConnection* get_VoiceConnection() {
            static BNM::Method<::Photon_Voice_Unity::VoiceConnection*> _m = GetClass().GetMethod(O("get_VoiceConnection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_WrongVersion() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_WrongVersion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::AuthenticationValues* GetAuthenticationValues() {
            static BNM::Method<::Photon_Realtime::AuthenticationValues*> _m = GetClass().GetMethod(O("GetAuthenticationValues"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetPlayer* GetLocalPlayer_1() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("GetLocalPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetMyDefaultName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetMyDefaultName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetMyNickName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetMyNickName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool GetMyTutorialCompletion() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetMyTutorialCompletion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetMyUserID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetMyUserID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetPlayer* GetNetPlayerByID(int playerActorNumber) {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("GetNetPlayerByID"), {"playerActorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerActorNumber);
        }
        ::BNM::Structures::Mono::String* GetNickName(int playerID) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetNickName"), {"playerID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerID);
        }
        ::BNM::Structures::Mono::String* GetNickName(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetNickName"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        int GetOwningPlayerID(::GameObject* obj) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetOwningPlayerID"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        ::GlobalNamespace::NetPlayer* GetPlayer(int PlayerID) {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("GetPlayer"), {"PlayerID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(PlayerID);
        }
        ::GlobalNamespace::NetPlayer* GetPlayer(::Photon_Realtime::Player* punPlayer) {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("GetPlayer"), {"punPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(punPlayer);
        }
        template <typename TP0 = void*>
        ::GlobalNamespace::NetPlayer* GetPlayer(TP0 playerRef) {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("GetPlayer"), {"playerRef"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerRef);
        }
        bool GetPlayerTutorialCompletion(int playerID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetPlayerTutorialCompletion"), {"playerID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerID);
        }
        static ::BNM::Structures::Mono::String* GetRandomRoomName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetRandomRoomName"));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetRandomWeightedRegion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetRandomWeightedRegion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetUserID(int playerID) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetUserID"), {"playerID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerID);
        }
        ::BNM::Structures::Mono::String* GetUserID(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetUserID"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        int GlobalPlayerCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GlobalPlayerCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Initialise() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialise"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool InstantCheckGroupData(::BNM::Structures::Mono::String* userID, ::BNM::Structures::Mono::String* keyToFollow) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("InstantCheckGroupData"), {"userID", "keyToFollow"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userID, keyToFollow);
        }
        bool IsObjectLocallyOwned(::GameObject* obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsObjectLocallyOwned"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        bool IsObjectRoomObject(::GameObject* obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsObjectRoomObject"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        bool IsTotalAuthority() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTotalAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void JoinedNetworkRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinedNetworkRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* JoinFriendsRoom(::BNM::Structures::Mono::String* userID, int actorID, ::BNM::Structures::Mono::String* keyToFollow, ::BNM::Structures::Mono::String* shufflerToFollow) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("JoinFriendsRoom"), {"userID", "actorID", "keyToFollow", "shufflerToFollow"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userID, actorID, keyToFollow, shufflerToFollow);
        }
        void JoinPubWithFriends() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinPubWithFriends"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static int mod(int x, int m) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("mod"), {"x", "m"});
            return _m.Call(x, m);
        }
        void MultiplayerStarted() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MultiplayerStarted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void NetDestroy(::GameObject* instance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetDestroy"), {"instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(instance);
        }
        ::GameObject* NetInstantiate(::GameObject* prefab, bool isRoomObject) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("NetInstantiate"), {"prefab", "isRoomObject"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(prefab, isRoomObject);
        }
        ::GameObject* NetInstantiate(::GameObject* prefab, ::BNM::Structures::Unity::Vector3 position, bool isRoomObject) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("NetInstantiate"), {"prefab", "position", "isRoomObject"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(prefab, position, isRoomObject);
        }
        ::GameObject* NetInstantiate(::GameObject* prefab, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, bool isRoomObject) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("NetInstantiate"), {"prefab", "position", "rotation", "isRoomObject"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(prefab, position, rotation, isRoomObject);
        }
        ::GameObject* NetInstantiate(::GameObject* prefab, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int playerAuthID, bool isRoomObject) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("NetInstantiate"), {"prefab", "position", "rotation", "playerAuthID", "isRoomObject"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(prefab, position, rotation, playerAuthID, isRoomObject);
        }
        ::GameObject* NetInstantiate(::GameObject* prefab, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, bool isRoomObject, uint8_t group, ::BNM::Structures::Mono::Array<void*>* data, ::BNM::IL2CPP::Il2CppObject* callback) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("NetInstantiate"), {"prefab", "position", "rotation", "isRoomObject", "group", "data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(prefab, position, rotation, isRoomObject, group, data, callback);
        }
        template <typename TP1 = void*>
        void NetRaiseEventReliable(uint8_t eventCode, TP1 data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetRaiseEventReliable"), {"eventCode", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventCode, data);
        }
        template <typename TP1 = void*>
        void NetRaiseEventReliable(uint8_t eventCode, TP1 data, ::GlobalNamespace::NetEventOptions* options) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetRaiseEventReliable"), {"eventCode", "data", "options"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventCode, data, options);
        }
        template <typename TP1 = void*>
        void NetRaiseEventUnreliable(uint8_t eventCode, TP1 data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetRaiseEventUnreliable"), {"eventCode", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventCode, data);
        }
        template <typename TP1 = void*>
        void NetRaiseEventUnreliable(uint8_t eventCode, TP1 data, ::GlobalNamespace::NetEventOptions* options) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetRaiseEventUnreliable"), {"eventCode", "data", "options"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventCode, data, options);
        }
        void OnMasterClientSwitchedCallback(::GlobalNamespace::NetPlayer* nMaster) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMasterClientSwitchedCallback"), {"nMaster"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nMaster);
        }
        void PlayerJoined(::GlobalNamespace::NetPlayer* netPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerJoined"), {"netPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netPlayer);
        }
        void PlayerLeft(::GlobalNamespace::NetPlayer* netPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerLeft"), {"netPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netPlayer);
        }
        template <typename TP1 = void*>
        void RaiseEvent(uint8_t eventCode, TP1 data, int source) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RaiseEvent"), {"eventCode", "data", "source"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventCode, data, source);
        }
        ::BNM::IL2CPP::Il2CppObject* RefreshNonce() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("RefreshNonce"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* ReGetNonce() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ReGetNonce"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void RegisterRemoteLinkValidator(::Photon_Voice_Unity::VoiceConnection_ValidateRemoteLinkDelegate* validator) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterRemoteLinkValidator"), {"validator"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(validator);
        }
        void RegisterSceneNetworkItem(::GameObject* item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterSceneNetworkItem"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item);
        }
        void remove_OnCustomAuthenticationResponse_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCustomAuthenticationResponse"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnRaiseEvent_1(::BNM::Structures::Mono::Action<uint8_t, void*, int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnRaiseEvent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        ::BNM::IL2CPP::Il2CppObject* ReturnToSinglePlayer() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("ReturnToSinglePlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* RoomString() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("RoomString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* RoomStringStripped() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("RoomStringStripped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_CurrentRoom(::GlobalNamespace::RoomConfig* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentRoom"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_groupJoinInProgress(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_groupJoinInProgress"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_netState(::GlobalNamespace::NetSystemState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_netState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAuthenticationValues(::Photon_Realtime::AuthenticationValues* authValues) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAuthenticationValues"), {"authValues"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(authValues);
        }
        void SetMyNickName(::BNM::Structures::Mono::String* name) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMyNickName"), {"name"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(name);
        }
        void SetMyTutorialComplete() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMyTutorialComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP1 = void*>
        void SetPlayerObject(::GameObject* playerInstance, TP1 owningPlayerID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPlayerObject"), {"playerInstance", "owningPlayerID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerInstance, owningPlayerID);
        }
        void SetWrongVersion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetWrongVersion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ShouldSpawnLocally(int playerID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldSpawnLocally"), {"playerID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerID);
        }
        bool ShouldUpdateObject(::GameObject* obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldUpdateObject"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        bool ShouldWriteObjectData(::GameObject* obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldWriteObjectData"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        static ::BNM::Structures::Mono::String* ShuffleRoomName(::BNM::Structures::Mono::String* room, ::BNM::Structures::Mono::String* shuffle, bool encode) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ShuffleRoomName"), {"room", "shuffle", "encode"});
            return _m.Call(room, shuffle, encode);
        }
        void SinglePlayerStarted() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SinglePlayerStarted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateNetPlayerList() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNetPlayerList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePlayers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
