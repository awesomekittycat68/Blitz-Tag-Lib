#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRElevator_ButtonType.hpp"
#include "GRElevatorManager_DestinationVideo.hpp"
#include "GRElevatorManager_ElevatorLocation.hpp"
#include "GRElevatorManager_ElevatorSystemState.hpp"
#include "GRElevatorManager_RPC.hpp"
#include "GRShuttleGroupLoc.hpp"
#include "NetworkComponent.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GRElevatorManager : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRElevatorManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GRElevatorManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::GRElevatorManager*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        bool GetInPrivateRoom() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InPrivateRoom"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
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
        static ::GlobalNamespace::GRElevatorManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GRElevatorManager*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetActorIds() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("actorIds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRElevator*>* GetAllElevators() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRElevator*>*> _field = GetClass().GetField(O("allElevators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRShuttle*>* GetAllShuttles() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRShuttle*>*> _field = GetClass().GetField(O("allShuttles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetCorrectionRaycastHit() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("correctionRaycastHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCorrectionRaycastMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("correctionRaycastMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCosmeticsInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("cosmeticsInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRElevatorManager_ElevatorLocation GetCurrentLocation() {
            static BNM::Field<::GlobalNamespace::GRElevatorManager_ElevatorLocation> _field = GetClass().GetField(O("currentLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRElevatorManager_ElevatorSystemState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::GRElevatorManager_ElevatorSystemState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRElevatorManager_ElevatorLocation GetDestination() {
            static BNM::Field<::GlobalNamespace::GRElevatorManager_ElevatorLocation> _field = GetClass().GetField(O("destination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDestinationButtonlastPressedDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("destinationButtonlastPressedDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetDestinationButtonLastPressedTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("destinationButtonLastPressedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDestinationVideoPlayer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("DestinationVideoPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetDestinationVideoPlayerAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("DestinationVideoPlayerAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GRElevatorManager_DestinationVideo>* GetDestinationVideos() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GRElevatorManager_DestinationVideo>*> _field = GetClass().GetField(O("DestinationVideos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDoorMaxClosingDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("doorMaxClosingDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDoorsFullyClosedDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("doorsFullyClosedDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetDoorsFullyClosedTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("doorsFullyClosedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRElevatorManager_ElevatorLocation, ::GlobalNamespace::GRElevator*>* GetElevatorByLocation() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRElevatorManager_ElevatorLocation, ::GlobalNamespace::GRElevator*>*> _field = GetClass().GetField(O("elevatorByLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetJustTeleported() {
            static BNM::Field<bool> _field = GetClass().GetField(O("justTeleported"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastLowestActorNr() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastLowestActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRElevatorManager_ElevatorLocation GetLastTeleportSource() {
            static BNM::Field<::GlobalNamespace::GRElevatorManager_ElevatorLocation> _field = GetClass().GetField(O("lastTeleportSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRShuttle* GetMainDrillShuttle() {
            static BNM::Field<::GlobalNamespace::GRShuttle*> _field = GetClass().GetField(O("mainDrillShuttle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRShuttle* GetMainStagingShuttle() {
            static BNM::Field<::GlobalNamespace::GRShuttle*> _field = GetClass().GetField(O("mainStagingShuttle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetMaxDoorClosingTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("maxDoorClosingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetPhotonView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRElevatorManager_GRShuttleGroup*>* GetShuttleGroups() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRElevatorManager_GRShuttleGroup*>*> _field = GetClass().GetField(O("shuttleGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTimeLastTeleported() {
            static BNM::Field<double> _field = GetClass().GetField(O("timeLastTeleported"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWaitForZoneLoadFallbackMaxTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("waitForZoneLoadFallbackMaxTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWaitForZoneLoadFallbackTimer() {
            static BNM::Field<float> _field = GetClass().GetField(O("waitForZoneLoadFallbackTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWaitingForRemoteTeleport() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForRemoteTeleport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::GRElevatorManager* value) {
            static BNM::Field<::GlobalNamespace::GRElevatorManager*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetActorIds(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("actorIds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllElevators(::BNM::Structures::Mono::List<::GlobalNamespace::GRElevator*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRElevator*>*> _field = GetClass().GetField(O("allElevators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllShuttles(::BNM::Structures::Mono::List<::GlobalNamespace::GRShuttle*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRShuttle*>*> _field = GetClass().GetField(O("allShuttles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCorrectionRaycastHit(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("correctionRaycastHit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCorrectionRaycastMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("correctionRaycastMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmeticsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("cosmeticsInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentLocation(::GlobalNamespace::GRElevatorManager_ElevatorLocation value) {
            static BNM::Field<::GlobalNamespace::GRElevatorManager_ElevatorLocation> _field = GetClass().GetField(O("currentLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::GRElevatorManager_ElevatorSystemState value) {
            static BNM::Field<::GlobalNamespace::GRElevatorManager_ElevatorSystemState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestination(::GlobalNamespace::GRElevatorManager_ElevatorLocation value) {
            static BNM::Field<::GlobalNamespace::GRElevatorManager_ElevatorLocation> _field = GetClass().GetField(O("destination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestinationButtonlastPressedDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("destinationButtonlastPressedDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestinationButtonLastPressedTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("destinationButtonLastPressedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestinationVideoPlayer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("DestinationVideoPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestinationVideoPlayerAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("DestinationVideoPlayerAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestinationVideos(::BNM::Structures::Mono::Array<::GlobalNamespace::GRElevatorManager_DestinationVideo>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GRElevatorManager_DestinationVideo>*> _field = GetClass().GetField(O("DestinationVideos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorMaxClosingDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("doorMaxClosingDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorsFullyClosedDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("doorsFullyClosedDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorsFullyClosedTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("doorsFullyClosedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetElevatorByLocation(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRElevatorManager_ElevatorLocation, ::GlobalNamespace::GRElevator*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GRElevatorManager_ElevatorLocation, ::GlobalNamespace::GRElevator*>*> _field = GetClass().GetField(O("elevatorByLocation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJustTeleported(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("justTeleported"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLowestActorNr(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastLowestActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTeleportSource(::GlobalNamespace::GRElevatorManager_ElevatorLocation value) {
            static BNM::Field<::GlobalNamespace::GRElevatorManager_ElevatorLocation> _field = GetClass().GetField(O("lastTeleportSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainDrillShuttle(::GlobalNamespace::GRShuttle* value) {
            static BNM::Field<::GlobalNamespace::GRShuttle*> _field = GetClass().GetField(O("mainDrillShuttle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainStagingShuttle(::GlobalNamespace::GRShuttle* value) {
            static BNM::Field<::GlobalNamespace::GRShuttle*> _field = GetClass().GetField(O("mainStagingShuttle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDoorClosingTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("maxDoorClosingTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShuttleGroups(::BNM::Structures::Mono::List<::GlobalNamespace::GRElevatorManager_GRShuttleGroup*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRElevatorManager_GRShuttleGroup*>*> _field = GetClass().GetField(O("shuttleGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeLastTeleported(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("timeLastTeleported"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitForZoneLoadFallbackMaxTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("waitForZoneLoadFallbackMaxTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitForZoneLoadFallbackTimer(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("waitForZoneLoadFallbackTimer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitingForRemoteTeleport(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waitingForRemoteTeleport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ActivateElevating() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateElevating"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ActivateTeleport(::GlobalNamespace::GRElevatorManager_ElevatorLocation start, ::GlobalNamespace::GRElevatorManager_ElevatorLocation destination, int lowestActorNumber, double photonServerTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateTeleport"), {"start", "destination", "lowestActorNumber", "photonServerTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(start, destination, lowestActorNumber, photonServerTime);
        }
        int AddPlayer(::GlobalNamespace::NetPlayer* netPlayer) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AddPlayer"), {"netPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(netPlayer);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckInitializationState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckInitializationState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CloseAllElevators() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CloseAllElevators"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        static void DeregisterElevator(::GlobalNamespace::GRElevator* elevator) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeregisterElevator"), {"elevator"});
            _m.Call(elevator);
        }
        void DisableVideoScreens(::BNM::IL2CPP::Il2CppObject* source) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableVideoScreens"), {"source"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(source);
        }
        static void ElevatorButtonPressed(::GlobalNamespace::GRElevator_ButtonType type, ::GlobalNamespace::GRElevatorManager_ElevatorLocation location) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ElevatorButtonPressed"), {"type", "location"});
            _m.Call(type, location);
        }
        void ElevatorButtonPressedInternal(::GlobalNamespace::GRElevator_ButtonType type, ::GlobalNamespace::GRElevatorManager_ElevatorLocation location) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ElevatorButtonPressedInternal"), {"type", "location"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type, location);
        }
        bool get_InPrivateRoom() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InPrivateRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* getClipForDestination(::GlobalNamespace::GRElevatorManager_ElevatorLocation destination) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("getClipForDestination"), {"destination"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(destination);
        }
        ::GlobalNamespace::GRShuttle* GetDrillShuttleForPlayer(int actorNumber) {
            static BNM::Method<::GlobalNamespace::GRShuttle*> _m = GetClass().GetMethod(O("GetDrillShuttleForPlayer"), {"actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNumber);
        }
        ::GlobalNamespace::GRShuttle* GetPlayerShuttle(::GlobalNamespace::GRShuttleGroupLoc shuttleGroupLoc, int shuttleIndex) {
            static BNM::Method<::GlobalNamespace::GRShuttle*> _m = GetClass().GetMethod(O("GetPlayerShuttle"), {"shuttleGroupLoc", "shuttleIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(shuttleGroupLoc, shuttleIndex);
        }
        static ::GlobalNamespace::GRShuttle* GetShuttle(int shuttleId) {
            static BNM::Method<::GlobalNamespace::GRShuttle*> _m = GetClass().GetMethod(O("GetShuttle"), {"shuttleId"});
            return _m.Call(shuttleId);
        }
        ::GlobalNamespace::GRShuttle* GetShuttleById(int shuttleId) {
            static BNM::Method<::GlobalNamespace::GRShuttle*> _m = GetClass().GetMethod(O("GetShuttleById"), {"shuttleId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(shuttleId);
        }
        ::GlobalNamespace::GRShuttle* GetShuttleForPlayer(int actorNumber, ::GlobalNamespace::GRShuttleGroupLoc shuttleGroupLoc) {
            static BNM::Method<::GlobalNamespace::GRShuttle*> _m = GetClass().GetMethod(O("GetShuttleForPlayer"), {"actorNumber", "shuttleGroupLoc"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNumber, shuttleGroupLoc);
        }
        ::GlobalNamespace::GRShuttle* GetStagingShuttleForPlayer(int actorNumber) {
            static BNM::Method<::GlobalNamespace::GRShuttle*> _m = GetClass().GetMethod(O("GetStagingShuttleForPlayer"), {"actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNumber);
        }
        double GetTime() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("GetTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool InControlOfElevator() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("InControlOfElevator"));
            return _m.Call();
        }
        void InitShuttles(::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitShuttles"), {"reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reactor);
        }
        static bool IsPlayerInShuttle(int actorNr, ::GlobalNamespace::GRShuttle* currShuttle, ::GlobalNamespace::GRShuttle* targetShuttle) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerInShuttle"), {"actorNr", "currShuttle", "targetShuttle"});
            return _m.Call(actorNr, currShuttle, targetShuttle);
        }
        static void JoinPublicRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinPublicRoom"));
            _m.Call();
        }
        void LeadElevatorJoin() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LeadElevatorJoin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void LeadElevatorJoin(::GlobalNamespace::GorillaFriendCollider* sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider* destinationFriendCollider, ::GorillaNetworking::GorillaNetworkJoinTrigger* destinationJoinTrigger) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LeadElevatorJoin"), {"sourceFriendCollider", "destinationFriendCollider", "destinationJoinTrigger"});
            _m.Call(sourceFriendCollider, destinationFriendCollider, destinationJoinTrigger);
        }
        static void LeadShuttleJoin(::GlobalNamespace::GorillaFriendCollider* sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider* destinationFriendCollider, ::GorillaNetworking::GorillaNetworkJoinTrigger* destinationJoinTrigger, int targetLevel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LeadShuttleJoin"), {"sourceFriendCollider", "destinationFriendCollider", "destinationJoinTrigger", "targetLevel"});
            _m.Call(sourceFriendCollider, destinationFriendCollider, destinationJoinTrigger, targetLevel);
        }
        static int LowestActorNumberInElevator() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("LowestActorNumberInElevator"));
            return _m.Call();
        }
        static int LowestActorNumberInElevator(::GlobalNamespace::GorillaFriendCollider* sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider* destinationFriendCollider) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("LowestActorNumberInElevator"), {"sourceFriendCollider", "destinationFriendCollider"});
            return _m.Call(sourceFriendCollider, destinationFriendCollider);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayerAdded(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerAdded"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void OnPlayerRemoved(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerRemoved"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void OnReachedDestination() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReachedDestination"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OpenElevator(::GlobalNamespace::GRElevatorManager_ElevatorLocation location) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OpenElevator"), {"location"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(location);
        }
        void PlayDestinationVideo(::GlobalNamespace::GRElevatorManager_ElevatorLocation destination) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayDestinationVideo"), {"destination"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(destination);
        }
        void ProcessElevatorButtonPress(::GlobalNamespace::GRElevator_ButtonType type, ::GlobalNamespace::GRElevatorManager_ElevatorLocation location) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessElevatorButtonPress"), {"type", "location"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type, location);
        }
        void ProcessElevatorSystemState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessElevatorSystemState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReadDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReadDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void RefreshTeleportingPlayersJoinTime() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshTeleportingPlayersJoinTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void RegisterElevator(::GlobalNamespace::GRElevator* elevator) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterElevator"), {"elevator"});
            _m.Call(elevator);
        }
        void RemoteActivateTeleport(int elevatorStartLocation, int elevatorDestinationLocation, int lowestActorNumber, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteActivateTeleport"), {"elevatorStartLocation", "elevatorDestinationLocation", "lowestActorNumber", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(elevatorStartLocation, elevatorDestinationLocation, lowestActorNumber, info);
        }
        void RemoteElevatorButtonPress(int elevatorButtonPressed, int elevatorLocation, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteElevatorButtonPress"), {"elevatorButtonPressed", "elevatorLocation", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(elevatorButtonPressed, elevatorLocation, info);
        }
        void RemovePlayer(::GlobalNamespace::NetPlayer* netPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePlayer"), {"netPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netPlayer);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* TeleportDelay(::GlobalNamespace::GRElevatorManager_ElevatorLocation start, ::GlobalNamespace::GRElevatorManager_ElevatorLocation destination, int lowestActorNumber, double sentServerTime) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("TeleportDelay"), {"start", "destination", "lowestActorNumber", "sentServerTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(start, destination, lowestActorNumber, sentServerTime);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateElevatorState(::GlobalNamespace::GRElevatorManager_ElevatorSystemState newState, ::GlobalNamespace::GRElevatorManager_ElevatorLocation location) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateElevatorState"), {"newState", "location"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, location);
        }
        void UpdateUI() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateUI"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool ValidElevatorNetworking(int actorNr) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidElevatorNetworking"), {"actorNr"});
            return _m.Call(actorNr);
        }
        static bool ValidShuttleNetworking(int actorNr) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidShuttleNetworking"), {"actorNr"});
            return _m.Call(actorNr);
        }
        void WriteDataFusion() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataFusion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
    };
}
