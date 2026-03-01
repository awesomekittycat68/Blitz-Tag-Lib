#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/NetworkComponent.hpp"
#include "../GlobalNamespace/PhotonMessageInfoWrapped.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GorillaTagScripts {
    struct DecorativeItemsManager : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "DecorativeItemsManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTagScripts::DecorativeItemsManager* get_Instance() {
            static BNM::Method<::GorillaTagScripts::DecorativeItemsManager*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GorillaTagScripts::DecorativeItemsManager* GetInstance() {
            static BNM::Field<::GorillaTagScripts::DecorativeItemsManager*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        int GetData() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetData(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaTagScripts::DecorativeItemsManager* GetInstance_pg() {
            static BNM::Method<::GorillaTagScripts::DecorativeItemsManager*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetData_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTagScripts::DecorativeItemsManager* GetInstance_f() {
            static BNM::Field<::GorillaTagScripts::DecorativeItemsManager*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::AttachPoint*>* GetAllHooks() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::AttachPoint*>*> _field = GetClass().GetField(O("allHooks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetArrayIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("arrayIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDecorativeItemsContainer() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("decorativeItemsContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::DecorativeItem*>* GetItemsList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::DecorativeItem*>*> _field = GetClass().GetField(O("itemsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetNonRespawnableHooksContainer() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("nonRespawnableHooksContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::AttachPoint*>* GetRespawnableHooks() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::AttachPoint*>*> _field = GetClass().GetField(O("respawnableHooks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRespawnableHooksContainer() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("respawnableHooksContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShouldRunUpdate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldRunUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasInZone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasInZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ZoneBasedObject* GetZone() {
            static BNM::Field<::GlobalNamespace::ZoneBasedObject*> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaTagScripts::DecorativeItemsManager* value) {
            static BNM::Field<::GorillaTagScripts::DecorativeItemsManager*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetArrayIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("arrayIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDecorativeItemsContainer(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("decorativeItemsContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNonRespawnableHooksContainer(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("nonRespawnableHooksContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRespawnableHooksContainer(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("respawnableHooksContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldRunUpdate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldRunUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasInZone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasInZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZone(::GlobalNamespace::ZoneBasedObject* value) {
            static BNM::Field<::GlobalNamespace::ZoneBasedObject*> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
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
        int get_Data() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GorillaTagScripts::DecorativeItemsManager* get_Instance_1() {
            static BNM::Method<::GorillaTagScripts::DecorativeItemsManager*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        ::GorillaTagScripts::AttachPoint* getCurrentAttachPointByPosition(::BNM::Structures::Unity::Vector3 _attachPoint) {
            static BNM::Method<::GorillaTagScripts::AttachPoint*> _m = GetClass().GetMethod(O("getCurrentAttachPointByPosition"), {"_attachPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(_attachPoint);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnRequestToRespawn(::GorillaTagScripts::DecorativeItem* item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRequestToRespawn"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item);
        }
        ::Transform* RandomSpawn() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("RandomSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void RespawnItemRPC(int index, ::BNM::Structures::Unity::Vector3 _transformPos, ::BNM::Structures::Unity::Quaternion _transformRot, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RespawnItemRPC"), {"index", "_transformPos", "_transformRot", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, _transformPos, _transformRot, info);
        }
        void RespawnItemShared(int index, ::BNM::Structures::Unity::Vector3 _transformPos, ::BNM::Structures::Unity::Quaternion _transformRot, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RespawnItemShared"), {"index", "_transformPos", "_transformRot", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, _transformPos, _transformRot, info);
        }
        template <typename TP3 = void*>
        void RPC_RespawnItem(int index, ::BNM::Structures::Unity::Vector3 _transformPos, ::BNM::Structures::Unity::Quaternion _transformRot, TP3 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_RespawnItem"), {"index", "_transformPos", "_transformRot", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, _transformPos, _transformRot, info);
        }
        static void RPC_RespawnItem$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_RespawnItem@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        void set_Data(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SpawnItem(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnItem"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int UpdateListPerFrame() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UpdateListPerFrame"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
