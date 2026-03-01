#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FreeHoverboardManager_DataPerPlayer.hpp"
#include "NetworkSceneObject.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct FreeHoverboardManager : ::GlobalNamespace::NetworkSceneObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FreeHoverboardManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int NumPlayers = 10;
        static constexpr int NumFreeBoardsPerPlayer = 2;
        ::GlobalNamespace::FreeHoverboardManager* GetInstance() {
            static BNM::Method<::GlobalNamespace::FreeHoverboardManager*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::FreeHoverboardManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void* GetFreeBoardPool() {
            static BNM::Field<void*> _field = GetClass().GetField(O("freeBoardPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FreeHoverboardInstance* GetFreeHoverboardPrefab() {
            static BNM::Field<::GlobalNamespace::FreeHoverboardInstance*> _field = GetClass().GetField(O("freeHoverboardPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLocalPlayerLastSpawnedBoardIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("localPlayerLastSpawnedBoardIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>* GetPerPlayerData() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>*> _field = GetClass().GetField(O("perPlayerData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFreeBoardPool(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("freeBoardPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFreeHoverboardPrefab(::GlobalNamespace::FreeHoverboardInstance* value) {
            static BNM::Field<::GlobalNamespace::FreeHoverboardInstance*> _field = GetClass().GetField(O("freeHoverboardPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerLastSpawnedBoardIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("localPlayerLastSpawnedBoardIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPerPlayerData(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>*> _field = GetClass().GetField(O("perPlayerData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DropBoard_RPC(bool boardIndex1, int64_t positionPacked, int rotationPacked, int64_t velocityPacked, int64_t avelocityPacked, int16_t colorPacked, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DropBoard_RPC"), {"boardIndex1", "positionPacked", "rotationPacked", "velocityPacked", "avelocityPacked", "colorPacked", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(boardIndex1, positionPacked, rotationPacked, velocityPacked, avelocityPacked, colorPacked, info);
        }
        static ::GlobalNamespace::FreeHoverboardManager* get_instance() {
            static BNM::Method<::GlobalNamespace::FreeHoverboardManager*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        ::GlobalNamespace::FreeHoverboardManager_DataPerPlayer GetOrCreatePlayerData(int actorNumber) {
            static BNM::Method<::GlobalNamespace::FreeHoverboardManager_DataPerPlayer> _m = GetClass().GetMethod(O("GetOrCreatePlayerData"), {"actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNumber);
        }
        void GrabBoard_RPC(int ownerActorNumber, bool boardIndex1, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabBoard_RPC"), {"ownerActorNumber", "boardIndex1", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ownerActorNumber, boardIndex1, info);
        }
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer* netPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"netPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netPlayer);
        }
        void PreserveMaxHoverboardsConstraint(int actorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PreserveMaxHoverboardsConstraint"), {"actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNumber);
        }
        void SendDropBoardRPC(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 avelocity, ::BNM::Structures::Unity::Color boardColor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendDropBoardRPC"), {"position", "rotation", "velocity", "avelocity", "boardColor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position, rotation, velocity, avelocity, boardColor);
        }
        void SendGrabBoardRPC(::GlobalNamespace::FreeHoverboardInstance* board) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendGrabBoardRPC"), {"board"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(board);
        }
        static void set_instance(::GlobalNamespace::FreeHoverboardManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_instance"), {"value"});
            _m.Call(value);
        }
        void SpawnBoard(::GlobalNamespace::FreeHoverboardManager_DataPerPlayer playerData, int boardIndex, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 avelocity, ::BNM::Structures::Unity::Color boardColor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnBoard"), {"playerData", "boardIndex", "position", "rotation", "velocity", "avelocity", "boardColor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerData, boardIndex, position, rotation, velocity, avelocity, boardColor);
        }
    };
}
