#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/BuilderDropZone_DropType.hpp"
#include "../GlobalNamespace/BuilderPiece_State.hpp"
#include "BuilderTableNetworking_RPC.hpp"
#include "../Photon_Pun/MonoBehaviourPunCallbacks.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GorillaTagScripts {
    struct BuilderTableNetworking : ::Photon_Pun::MonoBehaviourPunCallbacks {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "BuilderTableNetworking");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MAX_TABLE_BYTES = 1048576;
        static constexpr int MAX_TABLE_CHUNK_BYTES = 1000;
        static constexpr float DELAY_CLIENT_TABLE_CREATION_TIME = 1.0f;
        static constexpr float SEND_INIT_DATA_COOLDOWN = 0.0f;
        static constexpr int PIECE_SYNC_BYTES = 128;
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
        ::BNM::Structures::Mono::List<::Photon_Realtime::Player*>* GetArmShelfRequests() {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("armShelfRequests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>* GetCallLimiters() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>*> _field = GetClass().GetField(O("callLimiters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTable* GetCurrTable() {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("currTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* GetLocalClientTableInit() {
            static BNM::Field<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*> _field = GetClass().GetField(O("localClientTableInit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* GetLocalValidationTable() {
            static BNM::Field<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*> _field = GetClass().GetField(O("localValidationTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>* GetMasterClientTableInit() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*> _field = GetClass().GetField(O("masterClientTableInit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>* GetMasterClientTableValidators() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*> _field = GetClass().GetField(O("masterClientTableValidators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextLocalCommandId() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextLocalCommandId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetTablePhotonView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("tablePhotonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetArmShelfRequests(::BNM::Structures::Mono::List<::Photon_Realtime::Player*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Realtime::Player*>*> _field = GetClass().GetField(O("armShelfRequests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCallLimiters(::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CallLimiter*>*> _field = GetClass().GetField(O("callLimiters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrTable(::GorillaTagScripts::BuilderTable* value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("currTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalClientTableInit(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* value) {
            static BNM::Field<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*> _field = GetClass().GetField(O("localClientTableInit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalValidationTable(::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* value) {
            static BNM::Field<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*> _field = GetClass().GetField(O("localValidationTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMasterClientTableInit(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*> _field = GetClass().GetField(O("masterClientTableInit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMasterClientTableValidators(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*>*> _field = GetClass().GetField(O("masterClientTableValidators"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextLocalCommandId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextLocalCommandId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTablePhotonView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("tablePhotonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ArmShelfCreatedRPC(int pieceIdLeft, int pieceIdRight, int pieceType, ::Photon_Realtime::Player* owningPlayer, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ArmShelfCreatedRPC"), {"pieceIdLeft", "pieceIdRight", "pieceType", "owningPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceIdLeft, pieceIdRight, pieceType, owningPlayer, info);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckForFreedPlot(int pieceId, ::Photon_Realtime::Player* grabbedByPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckForFreedPlot"), {"pieceId", "grabbedByPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceId, grabbedByPlayer);
        }
        int CreateLocalCommandId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CreateLocalCommandId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* CreatePlayerTableInit(::Photon_Realtime::Player* player) {
            static BNM::Method<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*> _m = GetClass().GetMethod(O("CreatePlayerTableInit"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        void CreateSerializedTableForNewPlayerInit(::Photon_Realtime::Player* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateSerializedTableForNewPlayerInit"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
        }
        void CreateShelfPiece(int pieceType, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int materialType, ::GlobalNamespace::BuilderPiece_State state, int shelfID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateShelfPiece"), {"pieceType", "position", "rotation", "materialType", "state", "shelfID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceType, position, rotation, materialType, state, shelfID);
        }
        void DestroyPlayerTableInit(::Photon_Realtime::Player* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyPlayerTableInit"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        bool DoesTableInitExist(::Photon_Realtime::Player* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesTableInitExist"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        void FunctionalPieceStateChangeMaster(int pieceID, uint8_t state, ::Photon_Realtime::Player* instigator, int timeStamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FunctionalPieceStateChangeMaster"), {"pieceID", "state", "instigator", "timeStamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceID, state, instigator, timeStamp);
        }
        void FunctionalPieceStateChangeRPC(int pieceID, uint8_t state, ::Photon_Realtime::Player* caller, int timeStamp, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FunctionalPieceStateChangeRPC"), {"pieceID", "state", "caller", "timeStamp", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceID, state, caller, timeStamp, info);
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* GetLocalTableInit() {
            static BNM::Method<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*> _m = GetClass().GetMethod(O("GetLocalTableInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState* GetPlayerTableInit(::Photon_Realtime::Player* player) {
            static BNM::Method<::GorillaTagScripts::BuilderTableNetworking_PlayerTableInitState*> _m = GetClass().GetMethod(O("GetPlayerTableInit"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        ::GorillaTagScripts::BuilderTable* GetTable() {
            static BNM::Method<::GorillaTagScripts::BuilderTable*> _m = GetClass().GetMethod(O("GetTable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsPrivateMasterClient() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPrivateMasterClient"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LoadSharedBlocksFailedMaster(::BNM::Structures::Mono::String* mapID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadSharedBlocksFailedMaster"), {"mapID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapID);
        }
        void LoadSharedBlocksMapRPC(::BNM::Structures::Mono::String* mapID, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadSharedBlocksMapRPC"), {"mapID", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapID, info);
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
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLoadSharedBlocksFailed(::BNM::Structures::Mono::String* mapID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLoadSharedBlocksFailed"), {"mapID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapID);
        }
        void OnMasterClientSwitched(::Photon_Realtime::Player* newMasterClient) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMasterClientSwitched"), {"newMasterClient"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newMasterClient);
        }
        void OnPlayerLeftRoom(::Photon_Realtime::Player* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void OnSharedBlocksLoadStarted(::BNM::Structures::Mono::String* mapID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSharedBlocksLoadStarted"), {"mapID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapID);
        }
        void OnSharedBlocksOutOfBounds(::BNM::Structures::Mono::String* mapID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSharedBlocksOutOfBounds"), {"mapID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapID);
        }
        void PieceCreatedByShelfRPC(int pieceType, int pieceId, int64_t packedPosition, int packedRotation, int materialType, uint8_t state, int shelfID, ::Photon_Realtime::Player* creatingPlayer, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PieceCreatedByShelfRPC"), {"pieceType", "pieceId", "packedPosition", "packedRotation", "materialType", "state", "shelfID", "creatingPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceType, pieceId, packedPosition, packedRotation, materialType, state, shelfID, creatingPlayer, info);
        }
        void PieceCreatedRPC(int pieceType, int pieceId, int64_t packedPosition, int packedRotation, int materialType, ::Photon_Realtime::Player* creatingPlayer, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PieceCreatedRPC"), {"pieceType", "pieceId", "packedPosition", "packedRotation", "materialType", "creatingPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceType, pieceId, packedPosition, packedRotation, materialType, creatingPlayer, info);
        }
        void PieceDestroyedRPC(int pieceId, int64_t packedPosition, int packedRotation, bool playFX, int16_t recyclerID, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PieceDestroyedRPC"), {"pieceId", "packedPosition", "packedRotation", "playFX", "recyclerID", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceId, packedPosition, packedRotation, playFX, recyclerID, info);
        }
        void PieceDroppedRPC(int localCommandId, int pieceId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity, ::Photon_Realtime::Player* droppedByPlayer, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PieceDroppedRPC"), {"localCommandId", "pieceId", "position", "rotation", "velocity", "angVelocity", "droppedByPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId, pieceId, position, rotation, velocity, angVelocity, droppedByPlayer, info);
        }
        void PieceEnteredDropZone(::GlobalNamespace::BuilderPiece* piece, ::GlobalNamespace::BuilderDropZone_DropType dropType, int dropZoneId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PieceEnteredDropZone"), {"piece", "dropType", "dropZoneId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, dropType, dropZoneId);
        }
        void PieceEnteredDropZoneRPC(int pieceId, int64_t position, int rotation, int dropZoneId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PieceEnteredDropZoneRPC"), {"pieceId", "position", "rotation", "dropZoneId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceId, position, rotation, dropZoneId, info);
        }
        void PieceGrabbedRPC(int localCommandId, int pieceId, bool isLeftHand, int64_t packedPosRot, ::Photon_Realtime::Player* grabbedByPlayer, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PieceGrabbedRPC"), {"localCommandId", "pieceId", "isLeftHand", "packedPosRot", "grabbedByPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId, pieceId, isLeftHand, packedPosRot, grabbedByPlayer, info);
        }
        void PiecePlacedRPC(int localCommandId, int pieceId, int attachPieceId, int placement, int parentPieceId, int attachIndex, int parentAttachIndex, ::Photon_Realtime::Player* placedByPlayer, int timeStamp, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PiecePlacedRPC"), {"localCommandId", "pieceId", "attachPieceId", "placement", "parentPieceId", "attachIndex", "parentAttachIndex", "placedByPlayer", "timeStamp", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId, pieceId, attachPieceId, placement, parentPieceId, attachIndex, parentAttachIndex, placedByPlayer, timeStamp, info);
        }
        void PlayerEnterBuilder() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerEnterBuilder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayerEnterBuilderRPC(::Photon_Realtime::Player* player, bool entered, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerEnterBuilderRPC"), {"player", "entered", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, entered, info);
        }
        void PlayerExitBuilder() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerExitBuilder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlotClaimedRPC(int pieceId, ::Photon_Realtime::Player* claimingPlayer, bool claimed, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlotClaimedRPC"), {"pieceId", "claimingPlayer", "claimed", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceId, claimingPlayer, claimed, info);
        }
        void RequestBlocksTerminalControl(bool locked) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestBlocksTerminalControl"), {"locked"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(locked);
        }
        void RequestBlocksTerminalControlRPC(bool lockedStatus, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestBlocksTerminalControlRPC"), {"lockedStatus", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lockedStatus, info);
        }
        void RequestCreateArmShelfForPlayer(::Photon_Realtime::Player* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestCreateArmShelfForPlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void RequestCreatePiece(int newPieceType, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int materialType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestCreatePiece"), {"newPieceType", "position", "rotation", "materialType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPieceType, position, rotation, materialType);
        }
        void RequestCreatePieceRPC(int newPieceType, int64_t packedPosition, int packedRotation, int materialType, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestCreatePieceRPC"), {"newPieceType", "packedPosition", "packedRotation", "materialType", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPieceType, packedPosition, packedRotation, materialType, info);
        }
        void RequestDropPiece(::GlobalNamespace::BuilderPiece* piece, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDropPiece"), {"piece", "position", "rotation", "velocity", "angVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, position, rotation, velocity, angVelocity);
        }
        void RequestDropPieceRPC(int localCommandId, int pieceId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity, ::Photon_Realtime::Player* droppedByPlayer, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDropPieceRPC"), {"localCommandId", "pieceId", "position", "rotation", "velocity", "angVelocity", "droppedByPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId, pieceId, position, rotation, velocity, angVelocity, droppedByPlayer, info);
        }
        void RequestFailedRPC(int localCommandId, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestFailedRPC"), {"localCommandId", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId, info);
        }
        void RequestFunctionalPieceStateChange(int pieceID, uint8_t state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestFunctionalPieceStateChange"), {"pieceID", "state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceID, state);
        }
        void RequestFunctionalPieceStateChangeRPC(int pieceID, uint8_t state, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestFunctionalPieceStateChangeRPC"), {"pieceID", "state", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceID, state, info);
        }
        void RequestGrabPiece(::GlobalNamespace::BuilderPiece* piece, bool isLefHand, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestGrabPiece"), {"piece", "isLefHand", "localPosition", "localRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, isLefHand, localPosition, localRotation);
        }
        void RequestGrabPieceRPC(int localCommandId, int pieceId, bool isLeftHand, int64_t packedPosRot, ::Photon_Realtime::Player* grabbedByPlayer, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestGrabPieceRPC"), {"localCommandId", "pieceId", "isLeftHand", "packedPosRot", "grabbedByPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId, pieceId, isLeftHand, packedPosRot, grabbedByPlayer, info);
        }
        void RequestLoadSharedBlocksMap(::BNM::Structures::Mono::String* mapID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestLoadSharedBlocksMap"), {"mapID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapID);
        }
        void RequestPaintPiece(int pieceID, int materialType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPaintPiece"), {"pieceID", "materialType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceID, materialType);
        }
        void RequestPlacePiece(::GlobalNamespace::BuilderPiece* piece, ::GlobalNamespace::BuilderPiece* attachPiece, int8_t bumpOffsetX, int8_t bumpOffsetZ, uint8_t twist, ::GlobalNamespace::BuilderPiece* parentPiece, int attachIndex, int parentAttachIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPlacePiece"), {"piece", "attachPiece", "bumpOffsetX", "bumpOffsetZ", "twist", "parentPiece", "attachIndex", "parentAttachIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, attachPiece, bumpOffsetX, bumpOffsetZ, twist, parentPiece, attachIndex, parentAttachIndex);
        }
        void RequestPlacePieceRPC(int localCommandId, int pieceId, int attachPieceId, int placement, int parentPieceId, int attachIndex, int parentAttachIndex, ::Photon_Realtime::Player* placedByPlayer, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPlacePieceRPC"), {"localCommandId", "pieceId", "attachPieceId", "placement", "parentPieceId", "attachIndex", "parentAttachIndex", "placedByPlayer", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId, pieceId, attachPieceId, placement, parentPieceId, attachIndex, parentAttachIndex, placedByPlayer, info);
        }
        void RequestRecyclePiece(int pieceId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, bool playFX, int recyclerID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestRecyclePiece"), {"pieceId", "position", "rotation", "playFX", "recyclerID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceId, position, rotation, playFX, recyclerID);
        }
        void RequestShelfSelection(int shelfID, int groupID, bool isConveyor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestShelfSelection"), {"shelfID", "groupID", "isConveyor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shelfID, groupID, isConveyor);
        }
        void RequestShelfSelectionRPC(int shelfId, int setId, bool isConveyor, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestShelfSelectionRPC"), {"shelfId", "setId", "isConveyor", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shelfId, setId, isConveyor, info);
        }
        void ResetSerializedTableForAllPlayers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetSerializedTableForAllPlayers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendNextTableData(::Photon_Realtime::Player* requestingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendNextTableData"), {"requestingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(requestingPlayer);
        }
        void SendTableDataRPC(int numBytes, ::BNM::Structures::Mono::Array<uint8_t>* bytes, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendTableDataRPC"), {"numBytes", "bytes", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(numBytes, bytes, info);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetBlocksTerminalDriverRPC(int driver, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBlocksTerminalDriverRPC"), {"driver", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(driver, info);
        }
        void SetTable(::GorillaTagScripts::BuilderTable* table) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTable"), {"table"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(table);
        }
        void SharedBlocksOutOfBoundsMaster(::BNM::Structures::Mono::String* mapID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SharedBlocksOutOfBoundsMaster"), {"mapID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapID);
        }
        void SharedTableEventRPC(uint8_t eventType, ::BNM::Structures::Mono::String* mapID, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SharedTableEventRPC"), {"eventType", "mapID", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventType, mapID, info);
        }
        void ShelfSelectionChangedRPC(int shelfId, int setId, bool isConveyor, ::Photon_Realtime::Player* caller, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShelfSelectionChangedRPC"), {"shelfId", "setId", "isConveyor", "caller", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shelfId, setId, isConveyor, caller, info);
        }
        void StartBuildTableRPC(int totalBytes, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartBuildTableRPC"), {"totalBytes", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(totalBytes, info);
        }
        void StartCreatingSerializedTable(::Photon_Realtime::Player* newPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartCreatingSerializedTable"), {"newPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPlayer);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateNewPlayerInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateNewPlayerInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ValidateCallLimits(::GorillaTagScripts::BuilderTableNetworking_RPC rpcCall, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateCallLimits"), {"rpcCall", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rpcCall, info);
        }
        bool ValidateMasterClientIsReady(::Photon_Realtime::Player* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateMasterClientIsReady"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
    };
}
