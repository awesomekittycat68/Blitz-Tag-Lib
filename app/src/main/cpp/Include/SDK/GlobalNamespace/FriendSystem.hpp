#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FriendSystem_FriendRemovalData.hpp"
#include "FriendSystem_FriendRequestData.hpp"
#include "FriendSystem_PlayerPrivacy.hpp"
#include "GTZone.hpp"

namespace GlobalNamespace {
    struct FriendSystem : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FriendSystem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::FriendSystem_PlayerPrivacy GetLocalPlayerPrivacy() {
            static BNM::Method<::GlobalNamespace::FriendSystem_PlayerPrivacy> _method = GetClass().GetMethod(O("get_LocalPlayerPrivacy"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnFriendListRefresh(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnFriendListRefresh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnFriendListRefresh(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnFriendListRefresh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        float GetFriendRequestExpirationTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("friendRequestExpirationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetIndexesToRemove() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("indexesToRemove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::FriendSystem* GetInstance() {
            static BNM::Field<::GlobalNamespace::FriendSystem*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        float GetLastFriendsListRefresh() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastFriendsListRefresh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FriendSystem_PlayerPrivacy GetLocalPlayerPrivacy_f() {
            static BNM::Field<::GlobalNamespace::FriendSystem_PlayerPrivacy> _field = GetClass().GetField(O("localPlayerPrivacy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>*>* GetOnFriendListRefresh() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>*>*> _field = GetClass().GetField(O("OnFriendListRefresh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::FriendSystem_FriendRemovalData>* GetPendingFriendRemovals() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::FriendSystem_FriendRemovalData>*> _field = GetClass().GetField(O("pendingFriendRemovals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::FriendSystem_FriendRequestData>* GetPendingFriendRequests() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::FriendSystem_FriendRequestData>*> _field = GetClass().GetField(O("pendingFriendRequests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFriendRequestExpirationTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("friendRequestExpirationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIndexesToRemove(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("indexesToRemove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::FriendSystem* value) {
            static BNM::Field<::GlobalNamespace::FriendSystem*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetLastFriendsListRefresh(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastFriendsListRefresh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerPrivacy(::GlobalNamespace::FriendSystem_PlayerPrivacy value) {
            static BNM::Field<::GlobalNamespace::FriendSystem_PlayerPrivacy> _field = GetClass().GetField(O("localPlayerPrivacy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnFriendListRefresh(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>*>*> _field = GetClass().GetField(O("OnFriendListRefresh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingFriendRemovals(::BNM::Structures::Mono::List<::GlobalNamespace::FriendSystem_FriendRemovalData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::FriendSystem_FriendRemovalData>*> _field = GetClass().GetField(O("pendingFriendRemovals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingFriendRequests(::BNM::Structures::Mono::List<::GlobalNamespace::FriendSystem_FriendRequestData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::FriendSystem_FriendRequestData>*> _field = GetClass().GetField(O("pendingFriendRequests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnFriendListRefresh_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnFriendListRefresh"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CheckFriendshipWithPlayer(int targetActorNumber) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckFriendshipWithPlayer"), {"targetActorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetActorNumber);
        }
        ::GlobalNamespace::FriendSystem_PlayerPrivacy get_LocalPlayerPrivacy() {
            static BNM::Method<::GlobalNamespace::FriendSystem_PlayerPrivacy> _m = GetClass().GetMethod(O("get_LocalPlayerPrivacy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasPendingFriendRequest(::GlobalNamespace::GTZone zone, int senderId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasPendingFriendRequest"), {"zone", "senderId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zone, senderId);
        }
        void OnAddFriendReturned(::GlobalNamespace::NetPlayer* targetPlayer, bool succeeded) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAddFriendReturned"), {"targetPlayer", "succeeded"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPlayer, succeeded);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGetFriendsReturned(bool succeeded) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetFriendsReturned"), {"succeeded"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(succeeded);
        }
        void OnRemoveFriendReturned(::GlobalNamespace::FriendBackendController_Friend* _friend, bool succeeded) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRemoveFriendReturned"), {"friend", "succeeded"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_friend, succeeded);
        }
        void RefreshFriendsList() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshFriendsList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_OnFriendListRefresh_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnFriendListRefresh"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void RemoveFriend(::GlobalNamespace::FriendBackendController_Friend* _friend, ::GlobalNamespace::FriendSystem_FriendRemovalCallback* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveFriend"), {"friend", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_friend, callback);
        }
        void SendFriendRequest(::GlobalNamespace::NetPlayer* targetPlayer, ::GlobalNamespace::GTZone stationZone, ::GlobalNamespace::FriendSystem_FriendRequestCallback* callback) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendFriendRequest"), {"targetPlayer", "stationZone", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPlayer, stationZone, callback);
        }
        void SetLocalPlayerPrivacy_1(::GlobalNamespace::FriendSystem_PlayerPrivacy privacyState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLocalPlayerPrivacy"), {"privacyState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(privacyState);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
