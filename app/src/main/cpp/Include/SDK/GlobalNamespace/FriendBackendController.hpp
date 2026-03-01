#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FriendBackendController_PrivacyState.hpp"

namespace GlobalNamespace {
    struct FriendBackendController : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FriendBackendController");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>* GetFriendsList() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>*> _method = GetClass().GetMethod(O("get_FriendsList"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::FriendBackendController_PrivacyState GetMyPrivacyState() {
            static BNM::Method<::GlobalNamespace::FriendBackendController_PrivacyState> _method = GetClass().GetMethod(O("get_MyPrivacyState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnAddFriendComplete(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnAddFriendComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnAddFriendComplete(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnAddFriendComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnGetFriendsComplete(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGetFriendsComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnGetFriendsComplete(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGetFriendsComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnRemoveFriendComplete(::BNM::Structures::Mono::Action<::GlobalNamespace::FriendBackendController_Friend*, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnRemoveFriendComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnRemoveFriendComplete(::BNM::Structures::Mono::Action<::GlobalNamespace::FriendBackendController_Friend*, bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnRemoveFriendComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnSetPrivacyStateComplete(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnSetPrivacyStateComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnSetPrivacyStateComplete(::BNM::Structures::Mono::Action<bool>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnSetPrivacyStateComplete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        bool GetAddFriendInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("addFriendInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetAddFriendRequestQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("addFriendRequestQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAddFriendRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("addFriendRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAddFriendTargetIdHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("addFriendTargetIdHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetAddFriendTargetPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("addFriendTargetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFriendListIndexToRemoveFriend() {
            static BNM::Field<int> _field = GetClass().GetField(O("friendListIndexToRemoveFriend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGetFriendsInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("getFriendsInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGetFriendsRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("getFriendsRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::FriendBackendController* GetInstance() {
            static BNM::Field<::GlobalNamespace::FriendBackendController*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>* GetLastFriendsList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>*> _field = GetClass().GetField(O("lastFriendsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FriendBackendController_GetFriendsResponse* GetLastGetFriendsResponse() {
            static BNM::Field<::GlobalNamespace::FriendBackendController_GetFriendsResponse*> _field = GetClass().GetField(O("lastGetFriendsResponse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FriendBackendController_PrivacyState GetLastPrivacyState() {
            static BNM::Field<::GlobalNamespace::FriendBackendController_PrivacyState> _field = GetClass().GetField(O("lastPrivacyState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse* GetLastPrivacyStateResponse() {
            static BNM::Field<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*> _field = GetClass().GetField(O("lastPrivacyStateResponse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxRetriesOnFail() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRetriesOnFail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNetPlayerIndexToAddFriend() {
            static BNM::Field<int> _field = GetClass().GetField(O("netPlayerIndexToAddFriend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, bool>* GetOnAddFriendComplete() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, bool>*> _field = GetClass().GetField(O("OnAddFriendComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<bool>* GetOnGetFriendsComplete() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnGetFriendsComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::FriendBackendController_Friend*, bool>* GetOnRemoveFriendComplete() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::FriendBackendController_Friend*, bool>*> _field = GetClass().GetField(O("OnRemoveFriendComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<bool>* GetOnSetPrivacyStateComplete() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnSetPrivacyStateComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FriendBackendController_PrivacyState GetPrivacyStateToSet() {
            static BNM::Field<::GlobalNamespace::FriendBackendController_PrivacyState> _field = GetClass().GetField(O("privacyStateToSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRemoveFriendInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("removeFriendInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRemoveFriendRequestQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("removeFriendRequestQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRemoveFriendRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("removeFriendRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FriendBackendController_Friend* GetRemoveFriendTarget() {
            static BNM::Field<::GlobalNamespace::FriendBackendController_Friend*> _field = GetClass().GetField(O("removeFriendTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRemoveFriendTargetIdHash() {
            static BNM::Field<int> _field = GetClass().GetField(O("removeFriendTargetIdHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSetPrivacyStateInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("setPrivacyStateInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSetPrivacyStateQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("setPrivacyStateQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSetPrivacyStateRetryCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("setPrivacyStateRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FriendBackendController_PrivacyState GetSetPrivacyStateState() {
            static BNM::Field<::GlobalNamespace::FriendBackendController_PrivacyState> _field = GetClass().GetField(O("setPrivacyStateState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAddFriendInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("addFriendInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAddFriendRequestQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("addFriendRequestQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAddFriendRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("addFriendRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAddFriendTargetIdHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("addFriendTargetIdHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAddFriendTargetPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("addFriendTargetPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendListIndexToRemoveFriend(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("friendListIndexToRemoveFriend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetFriendsInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("getFriendsInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetFriendsRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("getFriendsRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::FriendBackendController* value) {
            static BNM::Field<::GlobalNamespace::FriendBackendController*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetLastFriendsList(::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>*> _field = GetClass().GetField(O("lastFriendsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastGetFriendsResponse(::GlobalNamespace::FriendBackendController_GetFriendsResponse* value) {
            static BNM::Field<::GlobalNamespace::FriendBackendController_GetFriendsResponse*> _field = GetClass().GetField(O("lastGetFriendsResponse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPrivacyState(::GlobalNamespace::FriendBackendController_PrivacyState value) {
            static BNM::Field<::GlobalNamespace::FriendBackendController_PrivacyState> _field = GetClass().GetField(O("lastPrivacyState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPrivacyStateResponse(::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse* value) {
            static BNM::Field<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*> _field = GetClass().GetField(O("lastPrivacyStateResponse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxRetriesOnFail(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRetriesOnFail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetPlayerIndexToAddFriend(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("netPlayerIndexToAddFriend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnAddFriendComplete(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, bool>*> _field = GetClass().GetField(O("OnAddFriendComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGetFriendsComplete(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnGetFriendsComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnRemoveFriendComplete(::BNM::Structures::Mono::Action<::GlobalNamespace::FriendBackendController_Friend*, bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::FriendBackendController_Friend*, bool>*> _field = GetClass().GetField(O("OnRemoveFriendComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSetPrivacyStateComplete(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("OnSetPrivacyStateComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrivacyStateToSet(::GlobalNamespace::FriendBackendController_PrivacyState value) {
            static BNM::Field<::GlobalNamespace::FriendBackendController_PrivacyState> _field = GetClass().GetField(O("privacyStateToSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoveFriendInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("removeFriendInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoveFriendRequestQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("removeFriendRequestQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoveFriendRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("removeFriendRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoveFriendTarget(::GlobalNamespace::FriendBackendController_Friend* value) {
            static BNM::Field<::GlobalNamespace::FriendBackendController_Friend*> _field = GetClass().GetField(O("removeFriendTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoveFriendTargetIdHash(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("removeFriendTargetIdHash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetPrivacyStateInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("setPrivacyStateInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetPrivacyStateQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("setPrivacyStateQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetPrivacyStateRetryCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("setPrivacyStateRetryCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetPrivacyStateState(::GlobalNamespace::FriendBackendController_PrivacyState value) {
            static BNM::Field<::GlobalNamespace::FriendBackendController_PrivacyState> _field = GetClass().GetField(O("setPrivacyStateState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnAddFriendComplete_1(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnAddFriendComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnGetFriendsComplete_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnGetFriendsComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnRemoveFriendComplete_1(::BNM::Structures::Mono::Action<::GlobalNamespace::FriendBackendController_Friend*, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnRemoveFriendComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnSetPrivacyStateComplete_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnSetPrivacyStateComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void AddFriend(::GlobalNamespace::NetPlayer* target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddFriend"), {"target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target);
        }
        void AddFriendComplete(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddFriendComplete"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
        }
        void AddFriendInternal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddFriendInternal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreateTestFriends() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateTestFriends"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>* get_FriendsList() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>*> _m = GetClass().GetMethod(O("get_FriendsList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::FriendBackendController_PrivacyState get_MyPrivacyState() {
            static BNM::Method<::GlobalNamespace::FriendBackendController_PrivacyState> _m = GetClass().GetMethod(O("get_MyPrivacyState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetFriends() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetFriends"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GetFriendsComplete(::GlobalNamespace::FriendBackendController_GetFriendsResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetFriendsComplete"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void GetFriendsInternal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetFriendsInternal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LogNetPlayersInRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogNetPlayersInRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_OnAddFriendComplete_1(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnAddFriendComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnGetFriendsComplete_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnGetFriendsComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnRemoveFriendComplete_1(::BNM::Structures::Mono::Action<::GlobalNamespace::FriendBackendController_Friend*, bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnRemoveFriendComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnSetPrivacyStateComplete_1(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnSetPrivacyStateComplete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void RemoveFriend(::GlobalNamespace::FriendBackendController_Friend* target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveFriend"), {"target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target);
        }
        void RemoveFriendComplete(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveFriendComplete"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
        }
        void RemoveFriendInternal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveFriendInternal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* SendAddFriendRequest(::GlobalNamespace::FriendBackendController_FriendRequestRequest* data, ::BNM::Structures::Mono::Action<bool>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("SendAddFriendRequest"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        ::BNM::Coroutine::IEnumerator* SendGetFriendsRequest(::GlobalNamespace::FriendBackendController_GetFriendsRequest* data, ::BNM::Structures::Mono::Action<::GlobalNamespace::FriendBackendController_GetFriendsResponse*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("SendGetFriendsRequest"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        ::BNM::Coroutine::IEnumerator* SendRemoveFriendRequest(::GlobalNamespace::FriendBackendController_RemoveFriendRequest* data, ::BNM::Structures::Mono::Action<bool>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("SendRemoveFriendRequest"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        ::BNM::Coroutine::IEnumerator* SendSetPrivacyStateRequest(::GlobalNamespace::FriendBackendController_SetPrivacyStateRequest* data, ::BNM::Structures::Mono::Action<::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("SendSetPrivacyStateRequest"), {"data", "callback"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, callback);
        }
        void SetPrivacyState(::GlobalNamespace::FriendBackendController_PrivacyState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPrivacyState"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(state);
        }
        void SetPrivacyStateComplete(::GlobalNamespace::FriendBackendController_SetPrivacyStateResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPrivacyStateComplete"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void SetPrivacyStateInternal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPrivacyStateInternal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TestAddFriend() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestAddFriend"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TestAddFriendCompleteCallback(::GlobalNamespace::NetPlayer* player, bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestAddFriendCompleteCallback"), {"player", "success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, success);
        }
        void TestGetFriends() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestGetFriends"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TestGetFriendsCompleteCallback(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestGetFriendsCompleteCallback"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
        }
        void TestRemoveFriend() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestRemoveFriend"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TestRemoveFriendCompleteCallback(::GlobalNamespace::FriendBackendController_Friend* _friend, bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestRemoveFriendCompleteCallback"), {"friend", "success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_friend, success);
        }
        void TestSetPrivacyState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestSetPrivacyState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TestSetPrivacyStateCompleteCallback(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestSetPrivacyStateCompleteCallback"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
        }
    };
}
