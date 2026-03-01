#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "OnJoinedInstantiate_SpawnSequence.hpp"

namespace Photon_Pun_UtilityScripts {
    struct OnJoinedInstantiate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "OnJoinedInstantiate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAutoSpawnObjects() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoSpawnObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetClampY() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ClampY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastUsedSpawnPointIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastUsedSpawnPointIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetPrefabsToInstantiate() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("PrefabsToInstantiate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRandomOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("RandomOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun_UtilityScripts::OnJoinedInstantiate_SpawnSequence GetSequence() {
            static BNM::Field<::Photon_Pun_UtilityScripts::OnJoinedInstantiate_SpawnSequence> _field = GetClass().GetField(O("Sequence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpawnedAsActorId() {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnedAsActorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSpawnedObjects() {
            static BNM::Field<void*> _field = GetClass().GetField(O("SpawnedObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetSpawnPoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("SpawnPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSpawnPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("SpawnPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseRandomOffset() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseRandomOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAutoSpawnObjects(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AutoSpawnObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetClampY(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ClampY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastUsedSpawnPointIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastUsedSpawnPointIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrefabsToInstantiate(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("PrefabsToInstantiate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("RandomOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSequence(::Photon_Pun_UtilityScripts::OnJoinedInstantiate_SpawnSequence value) {
            static BNM::Field<::Photon_Pun_UtilityScripts::OnJoinedInstantiate_SpawnSequence> _field = GetClass().GetField(O("Sequence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnedAsActorId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnedAsActorId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnedObjects(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("SpawnedObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnPoints(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("SpawnPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("SpawnPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseRandomOffset(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseRandomOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DespawnObjects(bool localOnly) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DespawnObjects"), {"localOnly"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localOnly);
        }
        ::BNM::Structures::Unity::Vector3 GetRandomOffset_1() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetRandomOffset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* GetSpawnPoint() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetSpawnPoint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetSpawnPoint(::BNM::Structures::Unity::Vector3& spawnPos, ::BNM::Structures::Unity::Quaternion& spawnRot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetSpawnPoint"), {"spawnPos", "spawnRot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&spawnPos, &spawnRot);
        }
        void OnCreatedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreatedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCreateRoomFailed(int16_t returnCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreateRoomFailed"), {"returnCode", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(returnCode, message);
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
        void OnFriendListUpdate(::BNM::Structures::Mono::List<::Photon_Realtime::FriendInfo*>* friendList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFriendListUpdate"), {"friendList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(friendList);
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinRandomFailed(int16_t returnCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinRandomFailed"), {"returnCode", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(returnCode, message);
        }
        void OnJoinRoomFailed(int16_t returnCode, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinRoomFailed"), {"returnCode", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(returnCode, message);
        }
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPreLeavingRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPreLeavingRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SpawnObjects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnObjects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
