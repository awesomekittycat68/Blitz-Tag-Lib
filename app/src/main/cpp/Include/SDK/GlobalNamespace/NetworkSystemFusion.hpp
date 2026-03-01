#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetJoinResult.hpp"
#include "NetworkSystem.hpp"
#include "NetworkSystemFusion_InternalState.hpp"
#include "RPCArgBuffer$1.hpp"

namespace GlobalNamespace {
    struct NetworkSystemFusion : ::GlobalNamespace::NetworkSystem {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NetworkSystemFusion");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* playerPropertiesPath = "P_FusionProperties";
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
        ::GlobalNamespace::NetPlayer* GetMasterClient() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _method = GetClass().GetMethod(O("get_MasterClient"));
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
        ::BNM::IL2CPP::Il2CppObject* GetRunner() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_runner"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRunner(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_runner"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
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
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetCachedNetSceneObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("cachedNetSceneObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCachedPlayfabAuth() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("cachedPlayfabAuth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FusionCallbackHandler* GetCallbackHandler() {
            static BNM::Field<::GlobalNamespace::FusionCallbackHandler*> _field = GetClass().GetField(O("callbackHandler"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Voice_Unity::VoiceConnection* GetFusionVoice() {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("FusionVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FusionInternalRPCs* GetInternalRPCProvider() {
            static BNM::Field<::GlobalNamespace::FusionInternalRPCs*> _field = GetClass().GetField(O("internalRPCProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetworkSystemFusion_InternalState GetInternalState() {
            static BNM::Field<::GlobalNamespace::NetworkSystemFusion_InternalState> _field = GetClass().GetField(O("internalState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsProcessingQueue() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isProcessingQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLastConnectAttemptWasFull() {
            static BNM::Field<bool> _field = GetClass().GetField(O("lastConnectAttempt_WasFull"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomObjectProvider* GetMyObjectProvider() {
            static BNM::Field<::GlobalNamespace::CustomObjectProvider*> _field = GetClass().GetField(O("myObjectProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetObjectsThatNeedCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("objectsThatNeedCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FusionRegionCrawler* GetRegionCrawler() {
            static BNM::Field<::GlobalNamespace::FusionRegionCrawler*> _field = GetClass().GetField(O("regionCrawler"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRegistrationQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("registrationQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetVolatileNetObj() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("volatileNetObj"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCachedNetSceneObjects(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("cachedNetSceneObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedPlayfabAuth(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("cachedPlayfabAuth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCallbackHandler(::GlobalNamespace::FusionCallbackHandler* value) {
            static BNM::Field<::GlobalNamespace::FusionCallbackHandler*> _field = GetClass().GetField(O("callbackHandler"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFusionVoice(::Photon_Voice_Unity::VoiceConnection* value) {
            static BNM::Field<::Photon_Voice_Unity::VoiceConnection*> _field = GetClass().GetField(O("FusionVoice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInternalRPCProvider(::GlobalNamespace::FusionInternalRPCs* value) {
            static BNM::Field<::GlobalNamespace::FusionInternalRPCs*> _field = GetClass().GetField(O("internalRPCProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInternalState(::GlobalNamespace::NetworkSystemFusion_InternalState value) {
            static BNM::Field<::GlobalNamespace::NetworkSystemFusion_InternalState> _field = GetClass().GetField(O("internalState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsProcessingQueue(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isProcessingQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastConnectAttemptWasFull(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("lastConnectAttempt_WasFull"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyObjectProvider(::GlobalNamespace::CustomObjectProvider* value) {
            static BNM::Field<::GlobalNamespace::CustomObjectProvider*> _field = GetClass().GetField(O("myObjectProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectsThatNeedCallbacks(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("objectsThatNeedCallbacks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRegionCrawler(::GlobalNamespace::FusionRegionCrawler* value) {
            static BNM::Field<::GlobalNamespace::FusionRegionCrawler*> _field = GetClass().GetField(O("regionCrawler"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRegistrationQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("registrationQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolatileNetObj(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("volatileNetObj"));
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
        void AttachCallbackTargets() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachCallbackTargets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void AttachObjectInGame(::GameObject* item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachObjectInGame"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item);
        }
        void AttachSceneObjects(bool onlyCached) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachSceneObjects"), {"onlyCached"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(onlyCached);
        }
        ::BNM::IL2CPP::Il2CppObject* AwaitAuth() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("AwaitAuth"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        ::BNM::IL2CPP::Il2CppObject* AwaitJoiningPlayerClientReady(TP0 player) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("AwaitJoiningPlayerClientReady"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        ::BNM::IL2CPP::Il2CppObject* AwaitSceneReady() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("AwaitSceneReady"));
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
        template <typename TP0 = void*>
        ::BNM::IL2CPP::Il2CppObject* CloseRunner(TP0 reason) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CloseRunner"), {"reason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reason);
        }
        template <typename TP0 = void*>
        void* Connect(TP0 mode, ::BNM::Structures::Mono::String* targetSessionName, ::GlobalNamespace::RoomConfig* opts) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Connect"), {"mode", "targetSessionName", "opts"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(mode, targetSessionName, opts);
        }
        void* ConnectToRoom(::BNM::Structures::Mono::String* roomName, ::GlobalNamespace::RoomConfig* opts, int regionIndex) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ConnectToRoom"), {"roomName", "opts", "regionIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(roomName, opts, regionIndex);
        }
        void CreateRegionCrawler() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateRegionCrawler"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FinishAuthenticating() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FinishAuthenticating"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        ::GlobalNamespace::NetPlayer* get_MasterClient() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("get_MasterClient"));
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
        ::BNM::IL2CPP::Il2CppObject* get_runner() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_runner"));
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
        void* GetPlayerRef(int playerID) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetPlayerRef"), {"playerID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(playerID);
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
        void* MakeOrJoinRoom(::BNM::Structures::Mono::String* roomName, ::GlobalNamespace::RoomConfig* opts) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("MakeOrJoinRoom"), {"roomName", "opts"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(roomName, opts);
        }
        void MigrateHost(::BNM::IL2CPP::Il2CppObject* runner, ::BNM::IL2CPP::Il2CppObject* hostMigrationToken) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MigrateHost"), {"runner", "hostMigrationToken"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(runner, hostMigrationToken);
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
        template <typename TP1 = void*>
        void NetRaiseEventReliable(uint8_t eventCode, TP1 data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetRaiseEventReliable"), {"eventCode", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventCode, data);
        }
        template <typename TP1 = void*>
        void NetRaiseEventReliable(uint8_t eventCode, TP1 data, ::GlobalNamespace::NetEventOptions* opts) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetRaiseEventReliable"), {"eventCode", "data", "opts"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventCode, data, opts);
        }
        template <typename TP1 = void*>
        void NetRaiseEventUnreliable(uint8_t eventCode, TP1 data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetRaiseEventUnreliable"), {"eventCode", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventCode, data);
        }
        template <typename TP1 = void*>
        void NetRaiseEventUnreliable(uint8_t eventCode, TP1 data, ::GlobalNamespace::NetEventOptions* opts) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetRaiseEventUnreliable"), {"eventCode", "data", "opts"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventCode, data, opts);
        }
        void OnDisconnectedFromSession() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnectedFromSession"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void OnFusionPlayerJoined(TP0 player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFusionPlayerJoined"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        template <typename TP0 = void*>
        void OnFusionPlayerLeft(TP0 player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFusionPlayerLeft"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void OnJoinedSession() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedSession"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void OnJoinFailed(TP0 reason) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinFailed"), {"reason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reason);
        }
        void OnMasterSwitch(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMasterSwitch"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void OnRunnerShutDown() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRunnerShutDown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessRegistrationQueue() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessRegistrationQueue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void RegisterForNetworkCallbacks(TP0 callbacks) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterForNetworkCallbacks"), {"callbacks"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(callbacks);
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
        void set_runner(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_runner"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
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
        void UpdateNetPlayerList() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNetPlayerList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
