#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GTZone.hpp"
#include "../GlobalNamespace/NetJoinResult.hpp"
#include "JoinType.hpp"

namespace GorillaNetworking {
    struct PhotonNetworkController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "PhotonNetworkController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GTZone GetCurrentRoomZone() {
            static BNM::Method<::GlobalNamespace::GTZone> _method = GetClass().GetMethod(O("get_CurrentRoomZone"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetFriendIDList() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _method = GetClass().GetMethod(O("get_FriendIDList"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFriendIDList(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FriendIDList"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GorillaGeoHideShowTrigger* GetStartGeoTrigger() {
            static BNM::Method<::GlobalNamespace::GorillaGeoHideShowTrigger*> _method = GetClass().GetMethod(O("get_StartGeoTrigger"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetStartGeoTrigger(::GlobalNamespace::GorillaGeoHideShowTrigger* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_StartGeoTrigger"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetStartLevel() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_StartLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetStartLevel(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_StartLevel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GTZone GetStartZone() {
            static BNM::Method<::GlobalNamespace::GTZone> _method = GetClass().GetMethod(O("get_StartZone"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetStartZone(::GlobalNamespace::GTZone value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_StartZone"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::GorillaNetworking::GorillaNetworkJoinTrigger*>* GetAllJoinTriggers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::GorillaNetworkJoinTrigger*>*> _field = GetClass().GetField(O("allJoinTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAttemptingToConnect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("attemptingToConnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAutoJoinGameMode() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("autoJoinGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAutoJoinRoom() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("autoJoinRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAutoJoinRoomCap() {
            static BNM::Field<int> _field = GetClass().GetField(O("autoJoinRoomCap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCurrentGameType() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentGameType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaNetworkJoinTrigger* GetCurrentJoinTrigger() {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("currentJoinTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::JoinType GetCurrentJoinType() {
            static BNM::Field<::GorillaNetworking::JoinType> _field = GetClass().GetField(O("currentJoinType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentRegionIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRegionIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetCustomRoomID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("customRoomID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDeferredJoin() {
            static BNM::Field<bool> _field = GetClass().GetField(O("deferredJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableAFKKick() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableAFKKick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetDisableOnStartup() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("disableOnStartup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDisconnectTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("disconnectTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetEnableOnStartup() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("enableOnStartup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetFriendIDList_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("friendIDList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFriendToFollow() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("friendToFollow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHeadLeftHandDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("headLeftHandDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetHeadQuat() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("headQuat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHeadRightHandDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("headRightHandDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIncrementCounter() {
            static BNM::Field<int> _field = GetClass().GetField(O("incrementCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetInitialGameMode() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("initialGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaNetworking::PhotonNetworkController* GetInstance() {
            static BNM::Field<::GorillaNetworking::PhotonNetworkController*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        bool GetIsPrivate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPrivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetKeyStr() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("keyStr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetKeyToFollow() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("keyToFollow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastHeadLeftHandDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastHeadLeftHandDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetLastHeadQuat() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("lastHeadQuat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastHeadRightHandDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastHeadRightHandDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLastRoomToJoin() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("LastRoomToJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::SkinnedMeshRenderer*>* GetOfflineVRRig() {
            static BNM::Field<::BNM::Structures::Mono::Array<::SkinnedMeshRenderer*>*> _field = GetClass().GetField(O("offlineVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPartyJoinDeferredUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("partyJoinDeferredUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPauseTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("pauseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPhotonVoiceObjectPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("photonVoiceObjectPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetPingInRegion() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("pingInRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlatformTag() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("platformTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, bool>* GetPlayerCosmeticsLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, bool>*> _field = GetClass().GetField(O("playerCosmeticsLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPlayerOffset() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("playerOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetPlayersInRegion() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("playersInRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::PlayFabAuthenticator* GetPlayFabAuthenticator() {
            static BNM::Field<::GorillaNetworking::PlayFabAuthenticator*> _field = GetClass().GetField(O("playFabAuthenticator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaNetworkJoinTrigger* GetPrivateTrigger() {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("privateTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRoomCosmeticsInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("roomCosmeticsInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRoomToJoin() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("roomToJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetServerRegions() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("serverRegions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetShuffler() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("shuffler"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaGeoHideShowTrigger* GetStartGeoTrigger_f() {
            static BNM::Field<::GlobalNamespace::GorillaGeoHideShowTrigger*> _field = GetClass().GetField(O("startGeoTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetStartLevel_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("startLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetStartZone_f() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("startZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTestPlayerPrefab() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("testPlayerPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTimeWhenApplicationPaused() {
            static BNM::Field<void*> _field = GetClass().GetField(O("timeWhenApplicationPaused"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUpdatedName() {
            static BNM::Field<bool> _field = GetClass().GetField(O("updatedName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllJoinTriggers(::BNM::Structures::Mono::List<::GorillaNetworking::GorillaNetworkJoinTrigger*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaNetworking::GorillaNetworkJoinTrigger*>*> _field = GetClass().GetField(O("allJoinTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttemptingToConnect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("attemptingToConnect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoJoinGameMode(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("autoJoinGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoJoinRoom(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("autoJoinRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoJoinRoomCap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("autoJoinRoomCap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentGameType(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentGameType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentJoinTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger* value) {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("currentJoinTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentJoinType(::GorillaNetworking::JoinType value) {
            static BNM::Field<::GorillaNetworking::JoinType> _field = GetClass().GetField(O("currentJoinType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentRegionIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRegionIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomRoomID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("customRoomID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeferredJoin(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("deferredJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableAFKKick(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableAFKKick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableOnStartup(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("disableOnStartup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisconnectTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("disconnectTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableOnStartup(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("enableOnStartup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendIDList_fs(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("friendIDList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendToFollow(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("friendToFollow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadLeftHandDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("headLeftHandDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadQuat(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("headQuat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadRightHandDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("headRightHandDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncrementCounter(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("incrementCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialGameMode(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("initialGameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaNetworking::PhotonNetworkController* value) {
            static BNM::Field<::GorillaNetworking::PhotonNetworkController*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetIsPrivate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPrivate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKeyStr(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("keyStr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKeyToFollow(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("keyToFollow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHeadLeftHandDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastHeadLeftHandDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHeadQuat(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("lastHeadQuat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastHeadRightHandDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastHeadRightHandDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRoomToJoin(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("LastRoomToJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOfflineVRRig(::BNM::Structures::Mono::Array<::SkinnedMeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::SkinnedMeshRenderer*>*> _field = GetClass().GetField(O("offlineVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPartyJoinDeferredUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("partyJoinDeferredUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPauseTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pauseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonVoiceObjectPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("photonVoiceObjectPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPingInRegion(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("pingInRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlatformTag(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("platformTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerCosmeticsLookup(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, bool>*> _field = GetClass().GetField(O("playerCosmeticsLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerOffset(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("playerOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayersInRegion(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("playersInRegion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayFabAuthenticator(::GorillaNetworking::PlayFabAuthenticator* value) {
            static BNM::Field<::GorillaNetworking::PlayFabAuthenticator*> _field = GetClass().GetField(O("playFabAuthenticator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrivateTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger* value) {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("privateTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomCosmeticsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("roomCosmeticsInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomToJoin(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("roomToJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetServerRegions(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("serverRegions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShuffler(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("shuffler"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartGeoTrigger_fs(::GlobalNamespace::GorillaGeoHideShowTrigger* value) {
            static BNM::Field<::GlobalNamespace::GorillaGeoHideShowTrigger*> _field = GetClass().GetField(O("startGeoTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartLevel_fs(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("startLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartZone_fs(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("startZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestPlayerPrefab(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("testPlayerPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeWhenApplicationPaused(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("timeWhenApplicationPaused"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdatedName(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("updatedName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AttemptToAutoJoinRoomCallback(::GlobalNamespace::NetJoinResult obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptToAutoJoinRoomCallback"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void AttemptToAutoJoinSpecificRoom(::BNM::Structures::Mono::String* roomID, ::GorillaNetworking::JoinType roomJoinType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptToAutoJoinSpecificRoom"), {"roomID", "roomJoinType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(roomID, roomJoinType);
        }
        void AttemptToFollowIntoPub(::BNM::Structures::Mono::String* userIDToFollow, int actorNumberToFollow, ::BNM::Structures::Mono::String* newKeyStr, ::BNM::Structures::Mono::String* shufflerStr, ::GorillaNetworking::JoinType joinType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptToFollowIntoPub"), {"userIDToFollow", "actorNumberToFollow", "newKeyStr", "shufflerStr", "joinType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(userIDToFollow, actorNumberToFollow, newKeyStr, shufflerStr, joinType);
        }
        void AttemptToJoinPublicRoom(::GorillaNetworking::GorillaNetworkJoinTrigger* triggeredTrigger, ::GorillaNetworking::JoinType roomJoinType, ::BNM::Structures::Mono::List<void*>* additionalCustomProperties, bool filterSubscribed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptToJoinPublicRoom"), {"triggeredTrigger", "roomJoinType", "additionalCustomProperties", "filterSubscribed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(triggeredTrigger, roomJoinType, additionalCustomProperties, filterSubscribed);
        }
        void AttemptToJoinPublicRoomAsync(::GorillaNetworking::GorillaNetworkJoinTrigger* triggeredTrigger, ::GorillaNetworking::JoinType roomJoinType, ::BNM::Structures::Mono::List<void*>* additionalCustomProperties, bool filterSubscribed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptToJoinPublicRoomAsync"), {"triggeredTrigger", "roomJoinType", "additionalCustomProperties", "filterSubscribed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(triggeredTrigger, roomJoinType, additionalCustomProperties, filterSubscribed);
        }
        void AttemptToJoinRankedPublicRoom(::GorillaNetworking::GorillaNetworkJoinTrigger* triggeredTrigger, ::GorillaNetworking::JoinType roomJoinType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptToJoinRankedPublicRoom"), {"triggeredTrigger", "roomJoinType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(triggeredTrigger, roomJoinType);
        }
        void AttemptToJoinRankedPublicRoomAsync(::GorillaNetworking::GorillaNetworkJoinTrigger* triggeredTrigger, ::BNM::Structures::Mono::String* mmrTier, ::BNM::Structures::Mono::String* platform, ::GorillaNetworking::JoinType roomJoinType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptToJoinRankedPublicRoomAsync"), {"triggeredTrigger", "mmrTier", "platform", "roomJoinType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(triggeredTrigger, mmrTier, platform, roomJoinType);
        }
        void AttemptToJoinSpecificRoom(::BNM::Structures::Mono::String* roomID, ::GorillaNetworking::JoinType roomJoinType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptToJoinSpecificRoom"), {"roomID", "roomJoinType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(roomID, roomJoinType);
        }
        ::BNM::IL2CPP::Il2CppObject* AttemptToJoinSpecificRoomAsync(::BNM::Structures::Mono::String* roomID, ::GorillaNetworking::JoinType roomJoinType, ::BNM::Structures::Mono::Action<::GlobalNamespace::NetJoinResult>* callback) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("AttemptToJoinSpecificRoomAsync"), {"roomID", "roomJoinType", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(roomID, roomJoinType, callback);
        }
        void AttemptToJoinSpecificRoomWithCallback(::BNM::Structures::Mono::String* roomID, ::GorillaNetworking::JoinType roomJoinType, ::BNM::Structures::Mono::Action<::GlobalNamespace::NetJoinResult>* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttemptToJoinSpecificRoomWithCallback"), {"roomID", "roomJoinType", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(roomID, roomJoinType, callback);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearDeferredJoin() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearDeferredJoin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* CurrentState() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("CurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void DeferJoining(float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeferJoining"), {"duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(duration);
        }
        ::BNM::Coroutine::IEnumerator* DisableOnStart() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DisableOnStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void DisconnectCleanup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisconnectCleanup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::GTZone get_CurrentRoomZone() {
            static BNM::Method<::GlobalNamespace::GTZone> _m = GetClass().GetMethod(O("get_CurrentRoomZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* get_FriendIDList() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("get_FriendIDList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GorillaGeoHideShowTrigger* get_StartGeoTrigger() {
            static BNM::Method<::GlobalNamespace::GorillaGeoHideShowTrigger*> _m = GetClass().GetMethod(O("get_StartGeoTrigger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_StartLevel() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_StartLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GTZone get_StartZone() {
            static BNM::Method<::GlobalNamespace::GTZone> _m = GetClass().GetMethod(O("get_StartZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetRegionWithLowestPing() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetRegionWithLowestPing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnApplicationFocus(bool focus) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationFocus"), {"focus"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(focus);
        }
        void OnApplicationPause(bool pause) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationPause"), {"pause"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pause);
        }
        void OnApplicationQuit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationQuit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisconnected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::GTZone ParseZoneFromGameMode(::BNM::Structures::Mono::String* gameMode) {
            static BNM::Method<::GlobalNamespace::GTZone> _m = GetClass().GetMethod(O("ParseZoneFromGameMode"), {"gameMode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gameMode);
        }
        ::BNM::Structures::Mono::String* RandomRoomName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("RandomRoomName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void RegisterJoinTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger* trigger) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterJoinTrigger"), {"trigger"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(trigger);
        }
        ::BNM::Structures::Mono::String* ReturnRoomName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ReturnRoomName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* SendPartyFollowCommands() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("SendPartyFollowCommands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_FriendIDList(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FriendIDList"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_StartGeoTrigger(::GlobalNamespace::GorillaGeoHideShowTrigger* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_StartGeoTrigger"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_StartLevel(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_StartLevel"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_StartZone(::GlobalNamespace::GTZone value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_StartZone"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int TotalUsers() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("TotalUsers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UpdateCurrentJoinTrigger() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCurrentJoinTrigger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateTriggerScreens() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTriggerScreens"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
