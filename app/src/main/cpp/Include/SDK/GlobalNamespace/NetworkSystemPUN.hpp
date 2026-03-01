#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetJoinResult.hpp"
#include "NetworkSystem.hpp"
#include "NetworkSystemPUN_InternalState.hpp"
#include "RPCArgBuffer$1.hpp"
#include "../Photon_Realtime/DisconnectCause.hpp"

namespace GlobalNamespace {
    struct NetworkSystemPUN : ::GlobalNamespace::NetworkSystem {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NetworkSystemPUN");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

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
        ::BNM::Structures::Mono::String* GetGameModeString() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_GameModeString"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetInRoom() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InRoom"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::NetworkSystemPUN_InternalState GetInternalState() {
            static BNM::Method<::GlobalNamespace::NetworkSystemPUN_InternalState> _method = GetClass().GetMethod(O("get_internalState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInternalState(::GlobalNamespace::NetworkSystemPUN_InternalState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_internalState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
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
        int GetLocalPlayerID() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LocalPlayerID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetLowestPingRegionIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_lowestPingRegionIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
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
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetTaskCancelTokens() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_taskCancelTokens"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetworkSystemPUN_InternalState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::NetworkSystemPUN_InternalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFirstRoomJoin() {
            static BNM::Field<bool> _field = GetClass().GetField(O("firstRoomJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* GetMAllNetPlayers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("m_allNetPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* GetMOtherNetPlayers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("m_otherNetPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_PUN::PhotonVoiceNetwork* GetPunVoice() {
            static BNM::Field<::Photon_Voice_PUN::PhotonVoiceNetwork*> _field = GetClass().GetField(O("punVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkRegionInfo*>* GetRegionData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkRegionInfo*>*> _field = GetClass().GetField(O("regionData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRoomTask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("roomTask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetVoiceNetworkObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("VoiceNetworkObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTaskCancelTokens(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_taskCancelTokens"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::NetworkSystemPUN_InternalState value) {
            static BNM::Field<::GlobalNamespace::NetworkSystemPUN_InternalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstRoomJoin(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("firstRoomJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMAllNetPlayers(::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("m_allNetPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMOtherNetPlayers(::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("m_otherNetPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPunVoice(::Photon_Voice_PUN::PhotonVoiceNetwork* value) {
            static BNM::Field<::Photon_Voice_PUN::PhotonVoiceNetwork*> _field = GetClass().GetField(O("punVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRegionData(::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkRegionInfo*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkRegionInfo*>*> _field = GetClass().GetField(O("regionData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomTask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("roomTask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceNetworkObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("VoiceNetworkObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddRemoteVoiceAddedCallback(::BNM::Structures::Mono::Action<::Photon_Voice_Unity::RemoteVoiceLink*>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddRemoteVoiceAddedCallback"), {"callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callback);
        }
        void AddVoice() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddVoice"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* AwaitSceneReady() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("AwaitSceneReady"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* CacheRegionInfo() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CacheRegionInfo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        ::BNM::Structures::Mono::String* get_GameModeString() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_GameModeString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_InRoom() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetworkSystemPUN_InternalState get_internalState() {
            static BNM::Method<::GlobalNamespace::NetworkSystemPUN_InternalState> _m = GetClass().GetMethod(O("get_internalState"));
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
        int get_LocalPlayerID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LocalPlayerID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_lowestPingRegionIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_lowestPingRegionIndex"));
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
        ::Photon_Realtime::AuthenticationValues* GetAuthenticationValues() {
            static BNM::Method<::Photon_Realtime::AuthenticationValues*> _m = GetClass().GetMethod(O("GetAuthenticationValues"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* GetCancellationToken() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetCancellationToken"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetPlayer* GetLocalPlayer() {
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
        bool GetPlayerTutorialCompletion(int playerID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetPlayerTutorialCompletion"), {"playerID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerID);
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
        ::BNM::Structures::Mono::String* GetUserID(::GlobalNamespace::NetPlayer* netPlayer) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetUserID"), {"netPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(netPlayer);
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
        ::BNM::IL2CPP::Il2CppObject* InternalDisconnect() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("InternalDisconnect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        ::BNM::IL2CPP::Il2CppObject* JoinFriendsRoom(::BNM::Structures::Mono::String* userID, int actorIDToFollow, ::BNM::Structures::Mono::String* keyToFollow, ::BNM::Structures::Mono::String* shufflerToFollow) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("JoinFriendsRoom"), {"userID", "actorIDToFollow", "keyToFollow", "shufflerToFollow"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(userID, actorIDToFollow, keyToFollow, shufflerToFollow);
        }
        void JoinPubWithFriends() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinPubWithFriends"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* JoinRandomPublicRoom(::GlobalNamespace::RoomConfig* opts) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("JoinRandomPublicRoom"), {"opts"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(opts);
        }
        void* MakeOrFindRoom(::BNM::Structures::Mono::String* roomName, ::GlobalNamespace::RoomConfig* opts, int regionIndex) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("MakeOrFindRoom"), {"roomName", "opts", "regionIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(roomName, opts, regionIndex);
        }
        void NetDestroy(::GameObject* instance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetDestroy"), {"instance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(instance);
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
        void OnConnectedtoMaster() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConnectedtoMaster"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCreateRoomFailed(int16_t returnCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreateRoomFailed"), {"returnCode", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(returnCode, message);
        }
        void OnDisconnected(::Photon_Realtime::DisconnectCause cause) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnected"), {"cause"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cause);
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinRoomFailed(int16_t returnCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinRoomFailed"), {"returnCode", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(returnCode, message);
        }
        void OnMasterClientSwitched(::Photon_Realtime::Player* newMasterClient) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMasterClientSwitched"), {"newMasterClient"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newMasterClient);
        }
        void OnPlayerEnteredRoom(::Photon_Realtime::Player* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnteredRoom"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
        }
        void OnPlayerLeftRoom(::Photon_Realtime::Player* otherPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherPlayer);
        }
        void ResetSystem() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetSystem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* ReturnToSinglePlayer() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("ReturnToSinglePlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* RoomStringStripped() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("RoomStringStripped"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_internalState(::GlobalNamespace::NetworkSystemPUN_InternalState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_internalState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetAuthenticationValues(::Photon_Realtime::AuthenticationValues* authValues) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAuthenticationValues"), {"authValues"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(authValues);
        }
        void SetMyNickName(::BNM::Structures::Mono::String* id) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMyNickName"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id);
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
        void SetupVoice() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupVoice"));
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
        void* TryCreateRoom(::BNM::Structures::Mono::String* roomName, ::GlobalNamespace::RoomConfig* opts) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TryCreateRoom"), {"roomName", "opts"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(roomName, opts);
        }
        void* TryJoinRoom(::BNM::Structures::Mono::String* roomName, ::GlobalNamespace::RoomConfig* opts) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TryJoinRoom"), {"roomName", "opts"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(roomName, opts);
        }
        void* TryJoinRoomInRegion(::BNM::Structures::Mono::String* roomName, ::GlobalNamespace::RoomConfig* opts, int regionIndex) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("TryJoinRoomInRegion"), {"roomName", "opts", "regionIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(roomName, opts, regionIndex);
        }
        void UpdateNetPlayerList() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNetPlayerList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateZoneInfo(bool roomIsPublic, ::BNM::Structures::Mono::String* zoneName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateZoneInfo"), {"roomIsPublic", "zoneName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(roomIsPublic, zoneName);
        }
        template <typename TP0 = void*>
        ::BNM::IL2CPP::Il2CppObject* WaitForState(TP0 ct, ::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkSystemPUN_InternalState>* desiredStates) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("WaitForState"), {"ct", "desiredStates"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(ct, desiredStates);
        }
        void* WaitForStateCheck(::BNM::Structures::Mono::Array<::GlobalNamespace::NetworkSystemPUN_InternalState>* desiredStates) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("WaitForStateCheck"), {"desiredStates"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(desiredStates);
        }
    };
}
