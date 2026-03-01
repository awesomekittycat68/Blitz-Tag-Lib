#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"

namespace GlobalNamespace {
    struct FriendSystem_FriendRequestData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FriendSystem").GetInnerClass("FriendRequestData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::FriendSystem_FriendRequestCallback* GetCompletionCallback() {
            static BNM::Field<::GlobalNamespace::FriendSystem_FriendRequestCallback*> _field = GetClass().GetField(O("completionCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLocalTimeSent() {
            static BNM::Field<float> _field = GetClass().GetField(O("localTimeSent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSendingPlayerId() {
            static BNM::Field<int> _field = GetClass().GetField(O("sendingPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTargetPlayerId() {
            static BNM::Field<int> _field = GetClass().GetField(O("targetPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCompletionCallback(::GlobalNamespace::FriendSystem_FriendRequestCallback* value) {
            static BNM::Field<::GlobalNamespace::FriendSystem_FriendRequestCallback*> _field = GetClass().GetField(O("completionCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalTimeSent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("localTimeSent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendingPlayerId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sendingPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetPlayerId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("targetPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
