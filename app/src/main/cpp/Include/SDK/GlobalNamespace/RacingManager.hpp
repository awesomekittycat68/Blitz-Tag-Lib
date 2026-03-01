#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetworkSceneObject.hpp"
#include "RacingManager_RaceSetup.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct RacingManager : ::GlobalNamespace::NetworkSceneObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RacingManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MinPlayersInRace = 1;
        static constexpr float ResultsDuration = 10.0f;
        ::GlobalNamespace::RacingManager* GetInstance() {
            static BNM::Method<::GlobalNamespace::RacingManager*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::RacingManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::RacingManager_Race*>* GetRaces() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::RacingManager_Race*>*> _field = GetClass().GetField(O("races"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::RacingManager_RaceSetup>* GetRaceSetups() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::RacingManager_RaceSetup>*> _field = GetClass().GetField(O("raceSetups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRaces(::BNM::Structures::Mono::Array<::GlobalNamespace::RacingManager_Race*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::RacingManager_Race*>*> _field = GetClass().GetField(O("races"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaceSetups(::BNM::Structures::Mono::Array<::GlobalNamespace::RacingManager_RaceSetup>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::RacingManager_RaceSetup>*> _field = GetClass().GetField(O("raceSetups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Button_StartRace(int raceId, int laps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Button_StartRace"), {"raceId", "laps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(raceId, laps);
        }
        static ::GlobalNamespace::RacingManager* get_instance() {
            static BNM::Method<::GlobalNamespace::RacingManager*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsActorLockedIntoAnyRace(int actorNumber) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsActorLockedIntoAnyRace"), {"actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNumber);
        }
        void OnCheckpointPassed(int raceId, int checkpointIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCheckpointPassed"), {"raceId", "checkpointIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(raceId, checkpointIndex);
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
        void OnPlayerJoined(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerJoined"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void OnRoomJoin() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoomJoin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PassCheckpoint_RPC(uint8_t raceId, uint8_t checkpointIndex, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PassCheckpoint_RPC"), {"raceId", "checkpointIndex", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(raceId, checkpointIndex, info);
        }
        void RaceBeginCountdown_RPC(uint8_t raceId, uint8_t laps, double startTime, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RaceBeginCountdown_RPC"), {"raceId", "laps", "startTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(raceId, laps, startTime, info);
        }
        void RaceEnded_RPC(uint8_t raceId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RaceEnded_RPC"), {"raceId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(raceId, info);
        }
        void RaceLockInParticipants_RPC(uint8_t raceId, ::BNM::Structures::Mono::Array<int>* participantActorNumbers, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RaceLockInParticipants_RPC"), {"raceId", "participantActorNumbers", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(raceId, participantActorNumbers, info);
        }
        void RegisterVisual(::GlobalNamespace::RaceVisual* visual) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterVisual"), {"visual"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(visual);
        }
        void RequestRaceStart_RPC(int raceId, int laps, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestRaceStart_RPC"), {"raceId", "laps", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(raceId, laps, info);
        }
        static void set_instance(::GlobalNamespace::RacingManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_instance"), {"value"});
            _m.Call(value);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
