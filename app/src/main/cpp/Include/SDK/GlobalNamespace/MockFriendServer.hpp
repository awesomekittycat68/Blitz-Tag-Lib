#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MockFriendServer_FriendPair.hpp"
#include "MockFriendServer_FriendRequest.hpp"
#include "MockFriendServer_PrivateIdEncryptionPlaceholder.hpp"
#include "../Photon_Pun/MonoBehaviourPun.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct MockFriendServer : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MockFriendServer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetLocalPlayerId() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LocalPlayerId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::MockFriendServer_FriendPair>* GetFriendPairList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MockFriendServer_FriendPair>*> _field = GetClass().GetField(O("friendPairList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetFriendRequestCompletionDelayRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("friendRequestCompletionDelayRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFriendRequestExpirationTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("friendRequestExpirationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::MockFriendServer_FriendRequest>* GetFriendRequests() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MockFriendServer_FriendRequest>*> _field = GetClass().GetField(O("friendRequests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetIndexesToRemove() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("indexesToRemove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::MockFriendServer* GetInstance() {
            static BNM::Field<::GlobalNamespace::MockFriendServer*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::MockFriendServer_PrivateIdEncryptionPlaceholder>* GetPrivateIdLookup() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MockFriendServer_PrivateIdEncryptionPlaceholder>*> _field = GetClass().GetField(O("privateIdLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFriendPairList(::BNM::Structures::Mono::List<::GlobalNamespace::MockFriendServer_FriendPair>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MockFriendServer_FriendPair>*> _field = GetClass().GetField(O("friendPairList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendRequestCompletionDelayRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("friendRequestCompletionDelayRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendRequestExpirationTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("friendRequestExpirationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendRequests(::BNM::Structures::Mono::List<::GlobalNamespace::MockFriendServer_FriendRequest>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MockFriendServer_FriendRequest>*> _field = GetClass().GetField(O("friendRequests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIndexesToRemove(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("indexesToRemove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::MockFriendServer* value) {
            static BNM::Field<::GlobalNamespace::MockFriendServer*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetPrivateIdLookup(::BNM::Structures::Mono::List<::GlobalNamespace::MockFriendServer_PrivateIdEncryptionPlaceholder>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MockFriendServer_PrivateIdEncryptionPlaceholder>*> _field = GetClass().GetField(O("privateIdLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddFriend(int publicIdA, int publicIdB, int privateIdA, int privateIdB) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddFriend"), {"publicIdA", "publicIdB", "privateIdA", "privateIdB"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(publicIdA, publicIdB, privateIdA, privateIdB);
        }
        void AddFriendPairRPC(int publicIdA, int publicIdB, int privateIdA, int privateIdB, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddFriendPairRPC"), {"publicIdA", "publicIdB", "privateIdA", "privateIdB", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(publicIdA, publicIdB, privateIdA, privateIdB, info);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_LocalPlayerId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LocalPlayerId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetFriendList(::BNM::Structures::Mono::List<int>* friendListResult) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetFriendList"), {"friendListResult"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(friendListResult);
        }
        void OnMultiplayerStarted() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMultiplayerStarted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RegisterLocalPlayer(int localPlayerPublicId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterLocalPlayer"), {"localPlayerPublicId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localPlayerPublicId);
        }
        void RegisterLocalPlayerInternal(int publicId, int privateId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterLocalPlayerInternal"), {"publicId", "privateId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(publicId, privateId);
        }
        void RegisterLocalPlayerRPC(int playerPublicId, int playerPrivateId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterLocalPlayerRPC"), {"playerPublicId", "playerPrivateId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerPublicId, playerPrivateId, info);
        }
        void RemoveFriend(int privateIdA, int privateIdB) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveFriend"), {"privateIdA", "privateIdB"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(privateIdA, privateIdB);
        }
        void RequestAddFriend(int targetPlayerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestAddFriend"), {"targetPlayerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPlayerId);
        }
        void RequestAddFriendInternal(int localPlayerPublicId, int otherPlayerPublicId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestAddFriendInternal"), {"localPlayerPublicId", "otherPlayerPublicId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localPlayerPublicId, otherPlayerPublicId);
        }
        void RequestAddFriendRPC(int localPlayerPublicId, int otherPlayerPublicId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestAddFriendRPC"), {"localPlayerPublicId", "otherPlayerPublicId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localPlayerPublicId, otherPlayerPublicId, info);
        }
        void RequestRemoveFriend(int targetPlayerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestRemoveFriend"), {"targetPlayerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPlayerId);
        }
        void RequestRemoveFriendInternal(int localPlayerPublicId, int otherPlayerPublicId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestRemoveFriendInternal"), {"localPlayerPublicId", "otherPlayerPublicId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localPlayerPublicId, otherPlayerPublicId);
        }
        void RequestRemoveFriendRPC(int localPlayerPublicId, int otherPlayerPublicId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestRemoveFriendRPC"), {"localPlayerPublicId", "otherPlayerPublicId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localPlayerPublicId, otherPlayerPublicId, info);
        }
        bool TryLookupPrivateId(int publicId, int& privateId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryLookupPrivateId"), {"publicId", "privateId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(publicId, &privateId);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
