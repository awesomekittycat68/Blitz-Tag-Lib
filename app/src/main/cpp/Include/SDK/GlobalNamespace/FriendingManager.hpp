#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FriendingManager_FriendStationData.hpp"
#include "GTZone.hpp"
#include "../Photon_Pun/MonoBehaviourPun.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct FriendingManager : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FriendingManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::FriendingManager_FriendStationData>* GetActiveFriendStationData() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::FriendingManager_FriendStationData>*> _field = GetClass().GetField(O("activeFriendStationData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GlobalNamespace::FriendingStation*>* GetFriendingStations() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GlobalNamespace::FriendingStation*>*> _field = GetClass().GetField(O("friendingStations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::FriendingManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::FriendingManager*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetLocalPlayerZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("localPlayerZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProgressBarDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("progressBarDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRequiredProximityToStation() {
            static BNM::Field<float> _field = GetClass().GetField(O("requiredProximityToStation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveFriendStationData(::BNM::Structures::Mono::List<::GlobalNamespace::FriendingManager_FriendStationData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::FriendingManager_FriendStationData>*> _field = GetClass().GetField(O("activeFriendStationData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendingStations(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GlobalNamespace::FriendingStation*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GlobalNamespace::FriendingStation*>*> _field = GetClass().GetField(O("friendingStations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::FriendingManager* value) {
            static BNM::Field<::GlobalNamespace::FriendingManager*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetLocalPlayerZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("localPlayerZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressBarDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("progressBarDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequiredProximityToStation(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("requiredProximityToStation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AuthorityUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthorityUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckFriendStatusOnFriendListRefresh(::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>* friendList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckFriendStatusOnFriendListRefresh"), {"friendList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(friendList);
        }
        void CheckFriendStatusRequest(::GlobalNamespace::GTZone zone, int actorNumberA, int actorNumberB) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckFriendStatusRequest"), {"zone", "actorNumberA", "actorNumberB"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, actorNumberA, actorNumberB);
        }
        void CheckFriendStatusRequestRPC(::GlobalNamespace::GTZone zone, int actorNumberA, int actorNumberB, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckFriendStatusRequestRPC"), {"zone", "actorNumberA", "actorNumberB", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, actorNumberA, actorNumberB, info);
        }
        void CheckFriendStatusResponse(::GlobalNamespace::GTZone zone, int responderActorNumber, int friendTargetActorNumber, bool friends) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckFriendStatusResponse"), {"zone", "responderActorNumber", "friendTargetActorNumber", "friends"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, responderActorNumber, friendTargetActorNumber, friends);
        }
        void CheckFriendStatusResponseRPC(::GlobalNamespace::GTZone zone, int friendTargetActorNumber, bool friends, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckFriendStatusResponseRPC"), {"zone", "friendTargetActorNumber", "friends", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, friendTargetActorNumber, friends, info);
        }
        void DebugLogFriendingStations() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugLogFriendingStations"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FriendButtonPressedRPC(::GlobalNamespace::GTZone zone, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FriendButtonPressedRPC"), {"zone", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, info);
        }
        void FriendButtonUnpressedRPC(::GlobalNamespace::GTZone zone, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FriendButtonUnpressedRPC"), {"zone", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, info);
        }
        void FriendRequestCallback(::GlobalNamespace::GTZone zone, int localId, int friendId, bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FriendRequestCallback"), {"zone", "localId", "friendId", "success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, localId, friendId, success);
        }
        void FriendRequestCompletedAuthority(::GlobalNamespace::GTZone zone, int playerId, bool succeeded) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FriendRequestCompletedAuthority"), {"zone", "playerId", "succeeded"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, playerId, succeeded);
        }
        void FriendRequestCompletedRPC(::GlobalNamespace::GTZone zone, bool succeeded, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FriendRequestCompletedRPC"), {"zone", "succeeded", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, succeeded, info);
        }
        void NotifyClientsFriendRequestReadyRPC(::GlobalNamespace::GTZone zone, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NotifyClientsFriendRequestReadyRPC"), {"zone", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, info);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void OnPhotonSerializeView(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPhotonSerializeView"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void PlayerEnteredStation(::GlobalNamespace::GTZone zone, ::GlobalNamespace::NetPlayer* netPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerEnteredStation"), {"zone", "netPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, netPlayer);
        }
        void PlayerExitedStation(::GlobalNamespace::GTZone zone, ::GlobalNamespace::NetPlayer* netPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerExitedStation"), {"zone", "netPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, netPlayer);
        }
        void PlayerPressedButton(::GlobalNamespace::GTZone zone, int playerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerPressedButton"), {"zone", "playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, playerId);
        }
        void PlayerUnpressedButton(::GlobalNamespace::GTZone zone, int playerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerUnpressedButton"), {"zone", "playerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, playerId);
        }
        void RegisterFriendingStation(::GlobalNamespace::FriendingStation* friendingStation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterFriendingStation"), {"friendingStation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(friendingStation);
        }
        void SendFriendRequestIfApplicable(::GlobalNamespace::GTZone zone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendFriendRequestIfApplicable"), {"zone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StationNoLongerActiveRPC(::GlobalNamespace::GTZone zone, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StationNoLongerActiveRPC"), {"zone", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone, info);
        }
        void UnregisterFriendingStation(::GlobalNamespace::FriendingStation* friendingStation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterFriendingStation"), {"friendingStation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(friendingStation);
        }
        void UpdateFriendingStations() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFriendingStations"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ValidateState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
