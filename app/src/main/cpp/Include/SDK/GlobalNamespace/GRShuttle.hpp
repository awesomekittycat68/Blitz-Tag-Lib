#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRPlayer_ShuttleState.hpp"
#include "GRShuttleGroupLoc.hpp"
#include "GRShuttleState.hpp"
#include "GTZone.hpp"

namespace GlobalNamespace {
    struct GRShuttle : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRShuttle");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int InvalidId = -1;
        static constexpr int MAX_DEPTH = 29;
        ::GlobalNamespace::IDCardScanner* GetDepartCardScanner() {
            static BNM::Field<::GlobalNamespace::IDCardScanner*> _field = GetClass().GetField(O("departCardScanner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEmployeeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("employeeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::IDCardScanner* GetEntryCardScanner() {
            static BNM::Field<::GlobalNamespace::IDCardScanner*> _field = GetClass().GetField(O("entryCardScanner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRDoor* GetEntryDoor() {
            static BNM::Field<::GlobalNamespace::GRDoor*> _field = GetClass().GetField(O("entryDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaFriendCollider* GetFriendCollider() {
            static BNM::Field<::GlobalNamespace::GorillaFriendCollider*> _field = GetClass().GetField(O("friendCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetHideOnMove() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("hideOnMove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetInShuttleVolume() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("inShuttleVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::GorillaNetworkJoinTrigger* GetJoinTrigger() {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("joinTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetLandSound() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("landSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastCloseTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastCloseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRShuttleGroupLoc GetLocation() {
            static BNM::Field<::GlobalNamespace::GRShuttleGroupLoc> _field = GetClass().GetField(O("location"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetMoveSound() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("moveSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetSectionFloors() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("sectionFloors"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetShowOnMove() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("showOnMove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBay* GetShuttleBay() {
            static BNM::Field<::GlobalNamespace::GRBay*> _field = GetClass().GetField(O("shuttleBay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShuttleId() {
            static BNM::Field<int> _field = GetClass().GetField(O("shuttleId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetShuttleOwner() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("shuttleOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRShuttleUI* GetShuttleUI() {
            static BNM::Field<::GlobalNamespace::GRShuttleUI*> _field = GetClass().GetField(O("shuttleUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRShuttle* GetSpecificDestinationShuttle() {
            static BNM::Field<::GlobalNamespace::GRShuttle*> _field = GetClass().GetField(O("specificDestinationShuttle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpecificFloor() {
            static BNM::Field<int> _field = GetClass().GetField(O("specificFloor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRShuttleState GetState() {
            static BNM::Field<::GlobalNamespace::GRShuttleState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetStateStartTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetTakeOffSound() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("takeOffSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTargetSection() {
            static BNM::Field<int> _field = GetClass().GetField(O("targetSection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ParticleSystem* GetWindowFx() {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("windowFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDepartCardScanner(::GlobalNamespace::IDCardScanner* value) {
            static BNM::Field<::GlobalNamespace::IDCardScanner*> _field = GetClass().GetField(O("departCardScanner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmployeeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("employeeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntryCardScanner(::GlobalNamespace::IDCardScanner* value) {
            static BNM::Field<::GlobalNamespace::IDCardScanner*> _field = GetClass().GetField(O("entryCardScanner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntryDoor(::GlobalNamespace::GRDoor* value) {
            static BNM::Field<::GlobalNamespace::GRDoor*> _field = GetClass().GetField(O("entryDoor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendCollider(::GlobalNamespace::GorillaFriendCollider* value) {
            static BNM::Field<::GlobalNamespace::GorillaFriendCollider*> _field = GetClass().GetField(O("friendCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHideOnMove(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("hideOnMove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInShuttleVolume(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("inShuttleVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJoinTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger* value) {
            static BNM::Field<::GorillaNetworking::GorillaNetworkJoinTrigger*> _field = GetClass().GetField(O("joinTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLandSound(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("landSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastCloseTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastCloseTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocation(::GlobalNamespace::GRShuttleGroupLoc value) {
            static BNM::Field<::GlobalNamespace::GRShuttleGroupLoc> _field = GetClass().GetField(O("location"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMoveSound(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("moveSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSectionFloors(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("sectionFloors"));
            _field.Set(value);
        }
        void SetShowOnMove(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("showOnMove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShuttleBay(::GlobalNamespace::GRBay* value) {
            static BNM::Field<::GlobalNamespace::GRBay*> _field = GetClass().GetField(O("shuttleBay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShuttleId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shuttleId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShuttleOwner(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("shuttleOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShuttleUI(::GlobalNamespace::GRShuttleUI* value) {
            static BNM::Field<::GlobalNamespace::GRShuttleUI*> _field = GetClass().GetField(O("shuttleUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpecificDestinationShuttle(::GlobalNamespace::GRShuttle* value) {
            static BNM::Field<::GlobalNamespace::GRShuttle*> _field = GetClass().GetField(O("specificDestinationShuttle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpecificFloor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("specificFloor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::GRShuttleState value) {
            static BNM::Field<::GlobalNamespace::GRShuttleState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateStartTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("stateStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTakeOffSound(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("takeOffSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetSection(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("targetSection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindowFx(::ParticleSystem* value) {
            static BNM::Field<::ParticleSystem*> _field = GetClass().GetField(O("windowFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static int CalcTargetShuttleId(int currShuttleId, ::BNM::Structures::Mono::String* ownerUserId) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CalcTargetShuttleId"), {"currShuttleId", "ownerUserId"});
            return _m.Call(currShuttleId, ownerUserId);
        }
        static void CancelPlayerShuttle(::GlobalNamespace::GRPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CancelPlayerShuttle"), {"player"});
            _m.Call(player);
        }
        int ClampTargetSection(int newTargetSection) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ClampTargetSection"), {"newTargetSection"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newTargetSection);
        }
        void CloseDoorLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CloseDoorLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EmergencyOpenDoor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EmergencyOpenDoor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int GetMaxDropFloor() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetMaxDropFloor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::NetPlayer* GetOwner() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("GetOwner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GRShuttleState GetState_1() {
            static BNM::Method<::GlobalNamespace::GRShuttleState> _m = GetClass().GetMethod(O("GetState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetTargetFloor() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTargetFloor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GRShuttle* GetTargetShuttle() {
            static BNM::Method<::GlobalNamespace::GRShuttle*> _m = GetClass().GetMethod(O("GetTargetShuttle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init(int shuttleId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"shuttleId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shuttleId);
        }
        bool IsPlayerOwner(::GlobalNamespace::GRPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerOwner"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool IsPlayerOwner(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerOwner"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        bool IsPodUnlocked() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPodUnlocked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsShuttleInteractableByPlayer(::GlobalNamespace::GRPlayer* player, bool ignoreOwnership) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsShuttleInteractableByPlayer"), {"player", "ignoreOwnership"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, ignoreOwnership);
        }
        void JoinShuttleRoomLocalPlayer(::GlobalNamespace::GRShuttle* sourceShuttle, ::GlobalNamespace::GRShuttle* destShuttle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JoinShuttleRoomLocalPlayer"), {"sourceShuttle", "destShuttle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sourceShuttle, destShuttle);
        }
        void OnArrive() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnArrive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCloseDoor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCloseDoor"));
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
        void OnLaunch() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLaunch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnOpenDoor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnOpenDoor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnShuttleMove() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShuttleMove"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnShuttleMoveActorNr(int actorNr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShuttleMoveActorNr"), {"actorNr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNr);
        }
        void OnTargetLevelDown() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTargetLevelDown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTargetLevelUp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTargetLevelUp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OpenDoorLocal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OpenDoorLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Refresh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Refresh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RequestArrival() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestArrival"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetBay(::GlobalNamespace::GRBay* bay) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBay"), {"bay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bay);
        }
        void SetLocation_1(::GlobalNamespace::GRShuttleGroupLoc location) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLocation"), {"location"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(location);
        }
        void SetOwner(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetOwner"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        static void SetPlayerShuttleState(::GlobalNamespace::GRPlayer* player, ::GlobalNamespace::GRPlayer_ShuttleState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPlayerShuttleState"), {"player", "newState"});
            _m.Call(player, newState);
        }
        void SetReactor_1(::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetReactor"), {"reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reactor);
        }
        void SetState_1(::GlobalNamespace::GRShuttleState newState, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, force);
        }
        void Setup(::GlobalNamespace::GhostReactor* reactor, ::GlobalNamespace::GRShuttleGroupLoc location, int employeeIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"reactor", "location", "employeeIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reactor, location, employeeIndex);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StartMoveFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartMoveFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopMoveFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopMoveFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TargetLevelDown() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TargetLevelDown"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TargetLevelUp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TargetLevelUp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void TeleportLocalPlayer(::GlobalNamespace::GRShuttle* sourceShuttle, ::GlobalNamespace::GRShuttle* destShuttle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TeleportLocalPlayer"), {"sourceShuttle", "destShuttle"});
            _m.Call(sourceShuttle, destShuttle);
        }
        void ToggleDoor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleDoor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleDoorActorNr(int actorNr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleDoorActorNr"), {"actorNr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNr);
        }
        static void TryStartLocalPlayerShuttleMove(int currShuttleId, ::GlobalNamespace::NetPlayer* shuttleOwner) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryStartLocalPlayerShuttleMove"), {"currShuttleId", "shuttleOwner"});
            _m.Call(currShuttleId, shuttleOwner);
        }
        static void UpdateGRPlayerShuttle(::GlobalNamespace::GRPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateGRPlayerShuttle"), {"player"});
            _m.Call(player);
        }
        void UpdateState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
