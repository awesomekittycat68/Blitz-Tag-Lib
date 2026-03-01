#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaSerializerMasterOnly.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"
#include "../Photon_Pun/RpcTarget.hpp"

namespace GlobalNamespace {
    struct GameModeSerializer : ::GlobalNamespace::GorillaSerializerMasterOnly {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameModeSerializer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaGameManager* GetGameModeInstance() {
            static BNM::Method<::GlobalNamespace::GorillaGameManager*> _method = GetClass().GetMethod(O("get_GameModeInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetGameModeKeyInt() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_gameModeKeyInt"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetGameModeKeyInt(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_gameModeKeyInt"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetGameModeKeyInt_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_gameModeKeyInt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CallLimiter* GetBroadcastTagCallLimit() {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("broadcastTagCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::MonoType* GetCurrentGameDataType() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("currentGameDataType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>* GetFusionGameModeOwnerChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("FusionGameModeOwnerChanged"));
            return _field.Get();
        }
        ::GlobalNamespace::FusionGameModeData* GetGameModeData() {
            static BNM::Field<::GlobalNamespace::FusionGameModeData*> _field = GetClass().GetField(O("gameModeData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaGameManager* GetGameModeInstance_f() {
            static BNM::Field<::GlobalNamespace::GorillaGameManager*> _field = GetClass().GetField(O("gameModeInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaGameModes::GameModeType GetGameModeKey() {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("gameModeKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameModeKeyInt_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_gameModeKeyInt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBroadcastTagCallLimit(::GlobalNamespace::CallLimiter* value) {
            static BNM::Field<::GlobalNamespace::CallLimiter*> _field = GetClass().GetField(O("broadcastTagCallLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentGameDataType(::BNM::MonoType* value) {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("currentGameDataType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetFusionGameModeOwnerChanged(::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::NetPlayer*>*> _field = GetClass().GetField(O("FusionGameModeOwnerChanged"));
            _field.Set(value);
        }
        void SetGameModeData(::GlobalNamespace::FusionGameModeData* value) {
            static BNM::Field<::GlobalNamespace::FusionGameModeData*> _field = GetClass().GetField(O("gameModeData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameModeInstance(::GlobalNamespace::GorillaGameManager* value) {
            static BNM::Field<::GlobalNamespace::GorillaGameManager*> _field = GetClass().GetField(O("gameModeInstance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameModeKey(::GorillaGameModes::GameModeType value) {
            static BNM::Field<::GorillaGameModes::GameModeType> _field = GetClass().GetField(O("gameModeKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void BroadcastRoundComplete(::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BroadcastRoundComplete"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void BroadcastTag(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BroadcastTag"), {"taggedPlayer", "taggingPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer, info);
        }
        void CopyBackingFieldsToState(bool ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBackingFieldsToState"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyStateToBackingFields() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStateToBackingFields"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FusionDataRPC(::BNM::Structures::Mono::String* method, ::GlobalNamespace::NetPlayer* targetPlayer, ::BNM::Structures::Mono::Array<void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FusionDataRPC"), {"method", "targetPlayer", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(method, targetPlayer, parameters);
        }
        void FusionDataRPC(::BNM::Structures::Mono::String* method, ::Photon_Pun::RpcTarget target, ::BNM::Structures::Mono::Array<void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FusionDataRPC"), {"method", "target", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(method, target, parameters);
        }
        ::GlobalNamespace::GorillaGameManager* get_GameModeInstance() {
            static BNM::Method<::GlobalNamespace::GorillaGameManager*> _m = GetClass().GetMethod(O("get_GameModeInstance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_gameModeKeyInt() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_gameModeKeyInt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init(int gameModeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"gameModeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameModeType);
        }
        void OnBeforeDespawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBeforeDespawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnFailedSpawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFailedSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool OnSpawnSetupCheck(::GlobalNamespace::PhotonMessageInfoWrapped wrappedInfo, ::GameObject*& outTargetObject, ::BNM::MonoType*& outTargetType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnSpawnSetupCheck"), {"wrappedInfo", "outTargetObject", "outTargetType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(wrappedInfo, &outTargetObject, &outTargetType);
        }
        void OnSuccesfullySpawned(::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccesfullySpawned"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void ReportHit(::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportHit"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void ReportTag(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportTag"), {"taggedPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, info);
        }
        void RPC_BroadcastRoundComplete(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_BroadcastRoundComplete"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void RPC_BroadcastTag(int taggedPlayer, int taggingPlayer, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_BroadcastTag"), {"taggedPlayer", "taggingPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer, info);
        }
        void RPC_ReportHit(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_ReportHit"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        template <typename TP0 = void*>
        void RPC_ReportHit(TP0 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_ReportHit"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        static void RPC_ReportHit$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_ReportHit@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        void RPC_ReportTag(int taggedPlayer, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_ReportTag"), {"taggedPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, info);
        }
        template <typename TP1 = void*>
        void RPC_ReportTag(int taggedPlayer, TP1 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_ReportTag"), {"taggedPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, info);
        }
        static void RPC_ReportTag$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_ReportTag@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        void set_gameModeKeyInt(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_gameModeKeyInt"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
