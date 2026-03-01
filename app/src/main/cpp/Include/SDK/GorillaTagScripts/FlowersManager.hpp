#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GTZone.hpp"
#include "../GlobalNamespace/NetworkComponent.hpp"
#include "FlowersDataStruct.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GorillaTagScripts {
    struct FlowersManager : ::GlobalNamespace::NetworkComponent {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "FlowersManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTagScripts::FlowersManager* get_Instance() {
            static BNM::Method<::GorillaTagScripts::FlowersManager*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        ::GorillaTagScripts::FlowersDataStruct GetData() {
            static BNM::Method<::GorillaTagScripts::FlowersDataStruct> _method = GetClass().GetMethod(O("get_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetData(::GorillaTagScripts::FlowersDataStruct value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Data"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaTagScripts::FlowersManager* GetInstance() {
            static BNM::Method<::GorillaTagScripts::FlowersManager*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GorillaTagScripts::FlowersManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaTagScripts::FlowersDataStruct GetData_f() {
            static BNM::Field<::GorillaTagScripts::FlowersDataStruct> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::Flower*>* GetAllFlowers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::Flower*>*> _field = GetClass().GetField(O("allFlowers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFlowerCheckIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("flowerCheckIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFlowersToCheck() {
            static BNM::Field<int> _field = GetClass().GetField(O("flowersToCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasBeenSerialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasBeenSerialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::SlingshotProjectileHitNotifier*>* GetHitNotifiers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SlingshotProjectileHitNotifier*>*> _field = GetClass().GetField(O("hitNotifiers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::FlowersManager_FlowersInZone*>* GetSections() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::FlowersManager_FlowersInZone*>*> _field = GetClass().GetField(O("sections"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GameObject*, ::BNM::Structures::Mono::List<::GorillaTagScripts::Flower*>*>* GetSectionToFlowersDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, ::BNM::Structures::Mono::List<::GorillaTagScripts::Flower*>*>*> _field = GetClass().GetField(O("sectionToFlowersDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GameObject*, ::GlobalNamespace::GTZone>* GetSectionToZonesDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, ::GlobalNamespace::GTZone>*> _field = GetClass().GetField(O("sectionToZonesDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData_fs(::GorillaTagScripts::FlowersDataStruct value) {
            static BNM::Field<::GorillaTagScripts::FlowersDataStruct> _field = GetClass().GetField(O("_Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlowerCheckIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("flowerCheckIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlowersToCheck(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("flowersToCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasBeenSerialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasBeenSerialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitNotifiers(::BNM::Structures::Mono::Array<::GlobalNamespace::SlingshotProjectileHitNotifier*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SlingshotProjectileHitNotifier*>*> _field = GetClass().GetField(O("hitNotifiers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSections(::BNM::Structures::Mono::List<::GorillaTagScripts::FlowersManager_FlowersInZone*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::FlowersManager_FlowersInZone*>*> _field = GetClass().GetField(O("sections"));
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
        ::GorillaTagScripts::FlowersDataStruct get_Data() {
            static BNM::Method<::GorillaTagScripts::FlowersDataStruct> _m = GetClass().GetMethod(O("get_Data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GorillaTagScripts::FlowersManager* get_Instance_1() {
            static BNM::Method<::GorillaTagScripts::FlowersManager*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        int GetHealthyFlowersInZoneCount(::GlobalNamespace::GTZone zone) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHealthyFlowersInZoneCount"), {"zone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zone);
        }
        void HandleOnZoneChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnZoneChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ProjectileHitReceiver(::GlobalNamespace::SlingshotProjectile* projectile, ::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProjectileHitReceiver"), {"projectile", "collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile, collider);
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
        void set_Data(::GorillaTagScripts::FlowersDataStruct value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void set_Instance(::GorillaTagScripts::FlowersManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Instance"), {"value"});
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WaterFlowers(::Collider* collider) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WaterFlowers"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collider);
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
