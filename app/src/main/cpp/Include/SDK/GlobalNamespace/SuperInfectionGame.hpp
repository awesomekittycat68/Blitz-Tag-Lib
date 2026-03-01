#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ESuperInfectionGameState.hpp"
#include "GorillaTagManager.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct SuperInfectionGame : ::GlobalNamespace::GorillaTagManager {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SuperInfectionGame");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ESuperInfectionGameState GetGameState() {
            static BNM::Method<::GlobalNamespace::ESuperInfectionGameState> _method = GetClass().GetMethod(O("get_gameState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetGameState(::GlobalNamespace::ESuperInfectionGameState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_gameState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::SuperInfectionGame* GetInstance() {
            static BNM::Method<::GlobalNamespace::SuperInfectionGame*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::SuperInfectionGame* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::ESuperInfectionGameState GetGameStatePrevious() {
            static BNM::Field<::GlobalNamespace::ESuperInfectionGameState> _field = GetClass().GetField(O("_gameState_previous"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMySuperExampleSerializedField() {
            static BNM::Field<int> _field = GetClass().GetField(O("_mySuperExampleSerializedField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameStatePrevious(::GlobalNamespace::ESuperInfectionGameState value) {
            static BNM::Field<::GlobalNamespace::ESuperInfectionGameState> _field = GetClass().GetField(O("_gameState_previous"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMySuperExampleSerializedField(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_mySuperExampleSerializedField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void _OnGameStateChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnGameStateChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* GameModeName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GameModeName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GameModeNameRoomLabel() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GameModeNameRoomLabel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaGameModes::GameModeType GameType() {
            static BNM::Method<::GorillaGameModes::GameModeType> _m = GetClass().GetMethod(O("GameType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::ESuperInfectionGameState get_gameState() {
            static BNM::Method<::GlobalNamespace::ESuperInfectionGameState> _m = GetClass().GetMethod(O("get_gameState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::SuperInfectionGame* get_instance() {
            static BNM::Method<::GlobalNamespace::SuperInfectionGame*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        void HandleTagBroadcast(::GlobalNamespace::NetPlayer* taggedPlayer, ::GlobalNamespace::NetPlayer* taggingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleTagBroadcast"), {"taggedPlayer", "taggingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, taggingPlayer);
        }
        void InfectionRoundEnd() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InfectionRoundEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InfectionRoundStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InfectionRoundStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InfrequentUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InfrequentUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool LocalCanTag(::GlobalNamespace::NetPlayer* myPlayer, ::GlobalNamespace::NetPlayer* otherPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("LocalCanTag"), {"myPlayer", "otherPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(myPlayer, otherPlayer);
        }
        int MyMatIndex(::GlobalNamespace::NetPlayer* forPlayer) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("MyMatIndex"), {"forPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(forPlayer);
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
        void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnteredRoom"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
        }
        void OnSerializeRead(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSerializeRead"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void OnSerializeWrite(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSerializeWrite"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void set_gameState(::GlobalNamespace::ESuperInfectionGameState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_gameState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void set_instance(::GlobalNamespace::SuperInfectionGame* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_instance"), {"value"});
            _m.Call(value);
        }
        void StartPlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopPlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePlayerAppearance(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerAppearance"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
    };
}
