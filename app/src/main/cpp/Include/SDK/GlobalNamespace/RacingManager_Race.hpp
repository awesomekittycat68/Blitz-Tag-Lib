#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RacingManager_RacerData.hpp"
#include "RacingManager_RacingState.hpp"

namespace GlobalNamespace {
    struct RacingManager_Race : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RacingManager").GetInnerClass("Race");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::RacingManager_RacingState GetRacingState() {
            static BNM::Method<::GlobalNamespace::RacingManager_RacingState> _method = GetClass().GetMethod(O("get_racingState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRacingState(::GlobalNamespace::RacingManager_RacingState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_racingState"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        double GetAbortRaceAtTimestamp() {
            static BNM::Field<double> _field = GetClass().GetField(O("abortRaceAtTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetActorsInStartZone() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("actorsInStartZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetActorsInStartZone2() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("actorsInStartZone2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDqBaseDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("dqBaseDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDqInterval() {
            static BNM::Field<float> _field = GetClass().GetField(O("dqInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasLockedInParticipants() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasLockedInParticipants"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsInstanceLoaded() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isInstanceLoaded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextStartZoneUpdateTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextStartZoneUpdateTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNextTickTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("nextTickTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumCheckpoints() {
            static BNM::Field<int> _field = GetClass().GetField(O("numCheckpoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumCheckpointsToWin() {
            static BNM::Field<int> _field = GetClass().GetField(O("numCheckpointsToWin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumLapsSelected() {
            static BNM::Field<int> _field = GetClass().GetField(O("numLapsSelected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::Collider*>* GetOverlapColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("overlapColliders"));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetPhotonView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetPlayerLayerMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("playerLayerMask"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, int>* GetPlayerLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, int>*> _field = GetClass().GetField(O("playerLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::String*>* GetPlayerNamesInStartZone() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("playerNamesInStartZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRaceIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("raceIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::RacingManager_RacerData>* GetRacers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RacingManager_RacerData>*> _field = GetClass().GetField(O("racers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetRaceStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("raceStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetRaceStartZone() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("raceStartZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RaceVisual* GetRaceVisual() {
            static BNM::Field<::GlobalNamespace::RaceVisual*> _field = GetClass().GetField(O("raceVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetResultsEndTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("resultsEndTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetStringBuilder() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("stringBuilder"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetTimesStringBuilder() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("timesStringBuilder"));
            return _field.Get();
        }
        void SetAbortRaceAtTimestamp(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("abortRaceAtTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActorsInStartZone(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("actorsInStartZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActorsInStartZone2(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("actorsInStartZone2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDqBaseDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dqBaseDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDqInterval(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dqInterval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasLockedInParticipants(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasLockedInParticipants"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsInstanceLoaded(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isInstanceLoaded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextStartZoneUpdateTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextStartZoneUpdateTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextTickTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("nextTickTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumCheckpoints(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numCheckpoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumCheckpointsToWin(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numCheckpointsToWin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumLapsSelected(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numLapsSelected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOverlapColliders(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("overlapColliders"));
            _field.Set(value);
        }
        void SetPhotonView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPlayerLayerMask(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playerLayerMask"));
            _field.Set(value);
        }
        void SetPlayerLookup(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, int>*> _field = GetClass().GetField(O("playerLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerNamesInStartZone(::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("playerNamesInStartZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaceIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("raceIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRacers(::BNM::Structures::Mono::List<::GlobalNamespace::RacingManager_RacerData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::RacingManager_RacerData>*> _field = GetClass().GetField(O("racers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaceStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("raceStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaceStartZone(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("raceStartZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaceVisual(::GlobalNamespace::RaceVisual* value) {
            static BNM::Field<::GlobalNamespace::RaceVisual*> _field = GetClass().GetField(O("raceVisual"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResultsEndTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("resultsEndTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetStringBuilder(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("stringBuilder"));
            _field.Set(value);
        }
        static void SetTimesStringBuilder(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("timesStringBuilder"));
            _field.Set(value);
        }
        void BeginCountdown(double startTime, int laps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BeginCountdown"), {"startTime", "laps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(startTime, laps);
        }
        void Button_StartRace(int laps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Button_StartRace"), {"laps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(laps);
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::RacingManager_RacingState get_racingState() {
            static BNM::Method<::GlobalNamespace::RacingManager_RacingState> _m = GetClass().GetMethod(O("get_racingState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Host_RequestRaceStart(int laps, int requestedByActorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Host_RequestRaceStart"), {"laps", "requestedByActorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(laps, requestedByActorNumber);
        }
        bool IsActorLockedIntoRace(int actorNumber) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsActorLockedIntoRace"), {"actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNumber);
        }
        void LockInParticipants(::BNM::Structures::Mono::Array<int>* participantActorNumbers, bool isProvisional) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LockInParticipants"), {"participantActorNumbers", "isProvisional"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(participantActorNumbers, isProvisional);
        }
        void OnRacerOrderChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRacerOrderChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PassCheckpoint(::Photon_Realtime::Player* player, int checkpointIndex, double time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PassCheckpoint"), {"player", "checkpointIndex", "time"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, checkpointIndex, time);
        }
        void RaceCountdownEnds() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RaceCountdownEnds"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RaceEnded() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RaceEnded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshStartingPlayerList() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshStartingPlayerList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RegisterVisual(::GlobalNamespace::RaceVisual* visual) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterVisual"), {"visual"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(visual);
        }
        void SendStateToNewPlayer(::GlobalNamespace::NetPlayer* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendStateToNewPlayer"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
        }
        void set_racingState(::GlobalNamespace::RacingManager_RacingState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_racingState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float TickWithNextDelay() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("TickWithNextDelay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool UpdateActorsInStartZone() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateActorsInStartZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
