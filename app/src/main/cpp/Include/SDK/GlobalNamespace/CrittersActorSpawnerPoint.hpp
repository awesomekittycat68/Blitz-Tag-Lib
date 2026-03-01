#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersActor.hpp"

namespace GlobalNamespace {
    struct CrittersActorSpawnerPoint : ::GlobalNamespace::CrittersActor {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersActorSpawnerPoint");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnSpawnChanged(::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnSpawnChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnSpawnChanged(::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnSpawnChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>* GetOnSpawnChanged() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("OnSpawnChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersActor* GetSpawnedActor() {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("spawnedActor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpawnedActorID() {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnedActorID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOnSpawnChanged(::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>*> _field = GetClass().GetField(O("OnSpawnChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnedActor(::GlobalNamespace::CrittersActor* value) {
            static BNM::Field<::GlobalNamespace::CrittersActor*> _field = GetClass().GetField(O("spawnedActor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnedActorID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnedActorID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnSpawnChanged_1(::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnSpawnChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        int AddActorDataToList(::BNM::IL2CPP::Il2CppObject*& objList) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AddActorDataToList"), {"objList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&objList);
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void remove_OnSpawnChanged_1(::BNM::Structures::Mono::Action<::GlobalNamespace::CrittersActor*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnSpawnChanged"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SendDataByCrittersActorType(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendDataByCrittersActorType"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream);
        }
        void SetSpawnedActor_1(::GlobalNamespace::CrittersActor* actor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSpawnedActor"), {"actor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actor);
        }
        int TotalActorDataLength() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("TotalActorDataLength"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int UpdateFromRPC(::BNM::Structures::Mono::Array<void*>* data, int startingIndex) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UpdateFromRPC"), {"data", "startingIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, startingIndex);
        }
        void UpdateSpawnedActor(int newSpawnedActorID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSpawnedActor"), {"newSpawnedActorID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newSpawnedActorID);
        }
        bool UpdateSpecificActor(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UpdateSpecificActor"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
    };
}
