#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FriendBackendController_PrivacyState.hpp"

namespace GlobalNamespace {
    struct FriendBackendController_GetFriendsResult : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FriendBackendController").GetInnerClass("GetFriendsResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>* GetFriends() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>*> _method = GetClass().GetMethod(O("get_Friends"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFriends(::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Friends"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::FriendBackendController_PrivacyState GetMyPrivacyState() {
            static BNM::Method<::GlobalNamespace::FriendBackendController_PrivacyState> _method = GetClass().GetMethod(O("get_MyPrivacyState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMyPrivacyState(::GlobalNamespace::FriendBackendController_PrivacyState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MyPrivacyState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>* get_Friends() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>*> _m = GetClass().GetMethod(O("get_Friends"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::FriendBackendController_PrivacyState get_MyPrivacyState() {
            static BNM::Method<::GlobalNamespace::FriendBackendController_PrivacyState> _m = GetClass().GetMethod(O("get_MyPrivacyState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Friends(::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Friends"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MyPrivacyState(::GlobalNamespace::FriendBackendController_PrivacyState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MyPrivacyState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
