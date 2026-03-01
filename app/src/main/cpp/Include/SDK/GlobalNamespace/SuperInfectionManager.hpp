#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTZone.hpp"
#include "SnapJointType.hpp"
#include "SuperInfectionManager_AuthorityToClientRPC.hpp"
#include "SuperInfectionManager_ClientToAuthorityRPC.hpp"
#include "SuperInfectionManager_ClientToClientRPC.hpp"
#include "XSceneRef.hpp"
#include "ZoneClearReason.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct SuperInfectionManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SuperInfectionManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[GT/SuperInfectionManager]  ";
        static constexpr const char* preErr = "[GT/SuperInfectionManager]  ERROR!!!  ";
        static constexpr float rpcProximityCheckRange = 3.0f;
        static ::GlobalNamespace::SuperInfectionManager* GetActiveSuperInfectionManager() {
            static BNM::Field<::GlobalNamespace::SuperInfectionManager*> _field = GetClass().GetField(O("activeSuperInfectionManager"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SnapJointType, ::BNM::Structures::Mono::List<::GlobalNamespace::SuperInfectionSnapPoint*>*>* GetAllSnapPoints() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SnapJointType, ::BNM::Structures::Mono::List<::GlobalNamespace::SuperInfectionSnapPoint*>*>*> _field = GetClass().GetField(O("allSnapPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntityManager* GetGameEntityManager() {
            static BNM::Field<::GlobalNamespace::GameEntityManager*> _field = GetClass().GetField(O("gameEntityManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPendingZoneInit() {
            static BNM::Field<bool> _field = GetClass().GetField(O("PendingZoneInit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetPhotonView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIProgression* GetProgression() {
            static BNM::Field<::GlobalNamespace::SIProgression*> _field = GetClass().GetField(O("progression"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GlobalNamespace::SuperInfectionManager*>* GetSiManagerByZone() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GlobalNamespace::SuperInfectionManager*>*> _field = GetClass().GetField(O("siManagerByZone"));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreeSO* GetTechTreeSO() {
            static BNM::Field<::GlobalNamespace::SITechTreeSO*> _field = GetClass().GetField(O("techTreeSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetTempRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetTempRigs2() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs2"));
            return _field.Get();
        }
        ::GlobalNamespace::TestSpawnGadget* GetTestSpawner() {
            static BNM::Field<::GlobalNamespace::TestSpawnGadget*> _field = GetClass().GetField(O("testSpawner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SuperInfection* GetZoneSuperInfection() {
            static BNM::Field<::GlobalNamespace::SuperInfection*> _field = GetClass().GetField(O("zoneSuperInfection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::XSceneRef GetZoneSuperInfectionRef() {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("zoneSuperInfectionRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetActiveSuperInfectionManager(::GlobalNamespace::SuperInfectionManager* value) {
            static BNM::Field<::GlobalNamespace::SuperInfectionManager*> _field = GetClass().GetField(O("activeSuperInfectionManager"));
            _field.Set(value);
        }
        void SetGameEntityManager(::GlobalNamespace::GameEntityManager* value) {
            static BNM::Field<::GlobalNamespace::GameEntityManager*> _field = GetClass().GetField(O("gameEntityManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingZoneInit(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("PendingZoneInit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgression(::GlobalNamespace::SIProgression* value) {
            static BNM::Field<::GlobalNamespace::SIProgression*> _field = GetClass().GetField(O("progression"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSiManagerByZone(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GlobalNamespace::SuperInfectionManager*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GlobalNamespace::SuperInfectionManager*>*> _field = GetClass().GetField(O("siManagerByZone"));
            _field.Set(value);
        }
        void SetTechTreeSO(::GlobalNamespace::SITechTreeSO* value) {
            static BNM::Field<::GlobalNamespace::SITechTreeSO*> _field = GetClass().GetField(O("techTreeSO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            _field.Set(value);
        }
        static void SetTempRigs2(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs2"));
            _field.Set(value);
        }
        void SetTestSpawner(::GlobalNamespace::TestSpawnGadget* value) {
            static BNM::Field<::GlobalNamespace::TestSpawnGadget*> _field = GetClass().GetField(O("testSpawner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneSuperInfection(::GlobalNamespace::SuperInfection* value) {
            static BNM::Field<::GlobalNamespace::SuperInfection*> _field = GetClass().GetField(O("zoneSuperInfection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneSuperInfectionRef(::GlobalNamespace::XSceneRef value) {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("zoneSuperInfectionRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void _OnStartGameMode(::GorillaGameModes::GameModeType newGameModeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnStartGameMode"), {"newGameModeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newGameModeType);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CallRPC(::GlobalNamespace::SuperInfectionManager_ClientToAuthorityRPC clientToAuthorityRPC, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallRPC"), {"clientToAuthorityRPC", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clientToAuthorityRPC, data);
        }
        void CallRPC(::GlobalNamespace::SuperInfectionManager_ClientToClientRPC clientToClientRPC, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallRPC"), {"clientToClientRPC", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clientToClientRPC, data);
        }
        void CallRPC(::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC authorityToClientRPC, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallRPC"), {"authorityToClientRPC", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(authorityToClientRPC, data);
        }
        void CallRPC(::GlobalNamespace::SuperInfectionManager_AuthorityToClientRPC authorityToClientRPC, int actorNr, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallRPC"), {"authorityToClientRPC", "actorNr", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(authorityToClientRPC, actorNr, data);
        }
        void ClearPlayerGadgets(::GlobalNamespace::SIPlayer* siPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearPlayerGadgets"), {"siPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(siPlayer);
        }
        void DeserializeZoneEntityData(::BNM::IL2CPP::Il2CppObject* reader, ::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeZoneEntityData"), {"reader", "entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reader, entity);
        }
        ::GlobalNamespace::SuperInfectionSnapPoint* FindNearestSnapPoint(::GlobalNamespace::SnapJointType jointType, ::BNM::Structures::Unity::Vector3 origin, float maxDist, bool includeOccupied) {
            static BNM::Method<::GlobalNamespace::SuperInfectionSnapPoint*> _m = GetClass().GetMethod(O("FindNearestSnapPoint"), {"jointType", "origin", "maxDist", "includeOccupied"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(jointType, origin, maxDist, includeOccupied);
        }
        void* GetFactoryItems() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetFactoryItems"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* GetPoints(::GlobalNamespace::SnapJointType jointType) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetPoints"), {"jointType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(jointType);
        }
        static ::GlobalNamespace::SuperInfectionManager* GetSIManagerForZone(::GlobalNamespace::GTZone targetZone) {
            static BNM::Method<::GlobalNamespace::SuperInfectionManager*> _m = GetClass().GetMethod(O("GetSIManagerForZone"), {"targetZone"});
            return _m.Call(targetZone);
        }
        static bool IsSuperGameMode() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSuperGameMode"));
            return _m.Call();
        }
        bool IsZoneReady() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsZoneReady"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnCreateGameEntity(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreateGameEntity"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
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
        void OnEnableZoneSuperInfection(::GlobalNamespace::SuperInfection* zone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnableZoneSuperInfection"), {"zone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zone);
        }
        void OnEntityRemoved(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityRemoved"), {"entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entity);
        }
        void OnZoneClear(::GlobalNamespace::ZoneClearReason reason) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneClear"), {"reason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reason);
        }
        void OnZoneCreate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneCreate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnZoneInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProcessAuthorityToClientRPC(int authorityToClientRPCEnum, ::BNM::Structures::Mono::Array<void*>* data, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessAuthorityToClientRPC"), {"authorityToClientRPCEnum", "data", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(authorityToClientRPCEnum, data, info);
        }
        void ProcessClientToAuthorityRPC(int clientToAuthorityRPCEnum, ::BNM::Structures::Mono::Array<void*>* data, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessClientToAuthorityRPC"), {"clientToAuthorityRPCEnum", "data", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clientToAuthorityRPCEnum, data, info);
        }
        void ProcessClientToClientRPC(int clientToClientRPCEnum, ::BNM::Structures::Mono::Array<void*>* data, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessClientToClientRPC"), {"clientToClientRPCEnum", "data", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clientToClientRPCEnum, data, info);
        }
        int64_t ProcessMigratedGameEntityCreateData(::GlobalNamespace::GameEntity* entity, int64_t createData) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ProcessMigratedGameEntityCreateData"), {"entity", "createData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(entity, createData);
        }
        void ReadDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void RegisterSnapPoint(::GlobalNamespace::SuperInfectionSnapPoint* snapPoint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterSnapPoint"), {"snapPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(snapPoint);
        }
        void SerializeZoneEntityData(::BNM::IL2CPP::Il2CppObject* writer, ::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeZoneEntityData"), {"writer", "entity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer, entity);
        }
        bool ShouldClearZone() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldClearZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SIAuthorityToClientRPC(int authorityToClientRPCEnum, ::BNM::Structures::Mono::Array<void*>* data, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SIAuthorityToClientRPC"), {"authorityToClientRPCEnum", "data", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(authorityToClientRPCEnum, data, info);
        }
        void SIClientToAuthorityRPC(int clientToAuthorityRPCEnum, ::BNM::Structures::Mono::Array<void*>* data, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SIClientToAuthorityRPC"), {"clientToAuthorityRPCEnum", "data", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clientToAuthorityRPCEnum, data, info);
        }
        void SIClientToClientRPC(int clientToClientRPCEnum, ::BNM::Structures::Mono::Array<void*>* data, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SIClientToClientRPC"), {"clientToClientRPCEnum", "data", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(clientToClientRPCEnum, data, info);
        }
        void TestSpawnGadget() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TestSpawnGadget"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UnregisterSnapPoint(::GlobalNamespace::SuperInfectionSnapPoint* snapPoint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterSnapPoint"), {"snapPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(snapPoint);
        }
        bool ValidateMigratedGameEntity(int netId, int entityTypeId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int64_t createData, int actorNr) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateMigratedGameEntity"), {"netId", "entityTypeId", "position", "rotation", "createData", "actorNr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(netId, entityTypeId, position, rotation, createData, actorNr);
        }
        void WriteDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
    };
}
