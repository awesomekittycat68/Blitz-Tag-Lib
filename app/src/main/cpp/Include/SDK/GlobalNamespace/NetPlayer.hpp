#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetPlayer_SingleCallRPC.hpp"

namespace GlobalNamespace {
    struct NetPlayer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NetPlayer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetActorNumber() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ActorNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetDefaultName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_DefaultName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetInRoom() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InRoom"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsLocal() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLocal"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsMasterClient() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsMasterClient"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsNull() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsNull"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsValid() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsValid"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetJoinedTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_JoinedTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetJoinedTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_JoinedTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetLeftTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_LeftTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLeftTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LeftTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetNickName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_NickName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetSanitizedNickName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_SanitizedNickName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSanitizedNickName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SanitizedNickName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetUserId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_UserId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void* GetSingleCallRPCStatus() {
            static BNM::Field<void*> _field = GetClass().GetField(O("SingleCallRPCStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSingleCallRPCStatus(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("SingleCallRPCStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CheckSingleCallRPC(::GlobalNamespace::NetPlayer_SingleCallRPC RPCType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckSingleCallRPC"), {"RPCType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(RPCType);
        }
        bool Equals_1(::GlobalNamespace::NetPlayer* myPlayer, ::GlobalNamespace::NetPlayer* other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"myPlayer", "other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(myPlayer, other);
        }
        static ::GlobalNamespace::NetPlayer* Get(::Photon_Realtime::Player* player) {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("Get"), {"player"});
            return _m.Call(player);
        }
        template <typename TP0 = void*>
        static ::GlobalNamespace::NetPlayer* Get(TP0 player) {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("Get"), {"player"});
            return _m.Call(player);
        }
        static ::GlobalNamespace::NetPlayer* Get(int actorNr) {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("Get"), {"actorNr"});
            return _m.Call(actorNr);
        }
        int get_ActorNumber() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ActorNumber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_DefaultName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_DefaultName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_InRoom() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsMasterClient() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsMasterClient"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsNull() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsNull"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_JoinedTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_JoinedTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_LeftTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_LeftTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_NickName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_NickName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_SanitizedNickName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_SanitizedNickName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_UserId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_UserId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::Player* GetPlayerRef() {
            static BNM::Method<::Photon_Realtime::Player*> _m = GetClass().GetMethod(O("GetPlayerRef"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnReturned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReturned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTaken() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTaken"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReceivedSingleCallRPC(::GlobalNamespace::NetPlayer_SingleCallRPC RPCType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReceivedSingleCallRPC"), {"RPCType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(RPCType);
        }
        void set_JoinedTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_JoinedTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LeftTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LeftTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SanitizedNickName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SanitizedNickName"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        ::BNM::Structures::Mono::String* ToStringFull() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToStringFull"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
