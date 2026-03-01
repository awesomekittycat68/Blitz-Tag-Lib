#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PlayerTimerManager_PlayerTimerData.hpp"
#include "PlayerTimerManager_RPC.hpp"
#include "../Photon_Pun/MonoBehaviourPunCallbacks.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GorillaTagScripts {
    struct PlayerTimerManager : ::Photon_Pun::MonoBehaviourPunCallbacks {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "PlayerTimerManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTagScripts::PlayerTimerManager* GetInstance() {
            static BNM::Field<::GorillaTagScripts::PlayerTimerManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr float MAX_DURATION_SECONDS = 3599.99f;
        static constexpr int MAX_TIMER_INIT_BYTES = 256;
        bool GetAreTimersInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("areTimersInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>* GetCallLimiters() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>*> _field = GetClass().GetField(O("callLimiters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTagScripts::PlayerTimerManager* GetInstance_f() {
            static BNM::Field<::GorillaTagScripts::PlayerTimerManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        bool GetJoinedRoom() {
            static BNM::Field<bool> _field = GetClass().GetField(O("joinedRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::CallLimiter*>* GetLimiterPool() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CallLimiter*>*> _field = GetClass().GetField(O("limiterPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalPlayerRequestedStart() {
            static BNM::Field<bool> _field = GetClass().GetField(O("localPlayerRequestedStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnLocalTimerStarted() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnLocalTimerStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnTimerStartedForPlayer() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnTimerStartedForPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnTimerStopped() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnTimerStopped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts::PlayerTimerManager_PlayerTimerData>* GetPlayerTimerData() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts::PlayerTimerManager_PlayerTimerData>*> _field = GetClass().GetField(O("playerTimerData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRequestSendTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("requestSendTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetSerializedTimerData() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("serializedTimerData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaTagScripts::PlayerTimerBoard*>* GetTimerBoards() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::PlayerTimerBoard*>*> _field = GetClass().GetField(O("timerBoards"));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetTimerPV() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("timerPV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CallLimiter*>* GetTimerToggleLimiters() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CallLimiter*>*> _field = GetClass().GetField(O("timerToggleLimiters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAreTimersInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("areTimersInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCallLimiters(::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>*> _field = GetClass().GetField(O("callLimiters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaTagScripts::PlayerTimerManager* value) {
            static BNM::Field<::GorillaTagScripts::PlayerTimerManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetJoinedRoom(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("joinedRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLimiterPool(::BNM::Structures::Mono::List<::GlobalNamespace::CallLimiter*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CallLimiter*>*> _field = GetClass().GetField(O("limiterPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerRequestedStart(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("localPlayerRequestedStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLocalTimerStarted(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnLocalTimerStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTimerStartedForPlayer(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnTimerStartedForPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTimerStopped(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnTimerStopped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerTimerData(::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts::PlayerTimerManager_PlayerTimerData>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts::PlayerTimerManager_PlayerTimerData>*> _field = GetClass().GetField(O("playerTimerData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestSendTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("requestSendTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializedTimerData(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("serializedTimerData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTimerBoards(::BNM::Structures::Mono::List<::GorillaTagScripts::PlayerTimerBoard*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::PlayerTimerBoard*>*> _field = GetClass().GetField(O("timerBoards"));
            _field.Set(value);
        }
        void SetTimerPV(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("timerPV"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimerToggleLimiters(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CallLimiter*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::CallLimiter*>*> _field = GetClass().GetField(O("timerToggleLimiters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearOldPlayerData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearOldPlayerData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::CallLimiter* CreateLimiterFromPool() {
            static BNM::Method<::GlobalNamespace::CallLimiter*> _m = GetClass().GetMethod(O("CreateLimiterFromPool"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void DeserializeTimerState(int numBytes, ::BNM::Structures::Mono::Array<uint8_t>* bytes) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeTimerState"), {"numBytes", "bytes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(numBytes, bytes);
        }
        float GetLastDurationForPlayer(int actorNumber) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetLastDurationForPlayer"), {"actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNumber);
        }
        float GetTimeForPlayer(int actorNumber) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetTimeForPlayer"), {"actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNumber);
        }
        void InitTimersMasterRPC(int numBytes, ::BNM::Structures::Mono::Array<uint8_t>* bytes, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitTimersMasterRPC"), {"numBytes", "bytes", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(numBytes, bytes, info);
        }
        bool IsLocalTimerStarted() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLocalTimerStarted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void OnToggleTimerForPlayer(bool startTimer, ::Photon_Realtime::Player* player, int toggleTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnToggleTimerForPlayer"), {"startTimer", "player", "toggleTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(startTimer, player, toggleTime);
        }
        void RegisterTimerBoard(::GorillaTagScripts::PlayerTimerBoard* board) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterTimerBoard"), {"board"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(board);
        }
        void RequestTimerToggle(bool startTimer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestTimerToggle"), {"startTimer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(startTimer);
        }
        void RequestTimerToggleRPC(bool startTimer, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestTimerToggleRPC"), {"startTimer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(startTimer, info);
        }
        void ReturnCallLimiterToPool(::GlobalNamespace::CallLimiter* limiter) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnCallLimiterToPool"), {"limiter"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(limiter);
        }
        int SerializeTimerState() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SerializeTimerState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void TimerToggledMasterRPC(bool startTimer, int toggleTimeStamp, ::Photon_Realtime::Player* player, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TimerToggledMasterRPC"), {"startTimer", "toggleTimeStamp", "player", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(startTimer, toggleTimeStamp, player, info);
        }
        void UnregisterTimerBoard(::GorillaTagScripts::PlayerTimerBoard* board) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterTimerBoard"), {"board"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(board);
        }
        void UpdateAllTimerBoards() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAllTimerBoards"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateTimerBoard(::GorillaTagScripts::PlayerTimerBoard* board) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTimerBoard"), {"board"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(board);
        }
        bool ValidateCallLimits(::GorillaTagScripts::PlayerTimerManager_RPC rpcCall, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateCallLimits"), {"rpcCall", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rpcCall, info);
        }
    };
}
