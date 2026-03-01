#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PrefabType.hpp"

namespace GlobalNamespace {
    struct PhotonPrefabPool : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PhotonPrefabPool");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GameObject*>* GetMInvalidCreatePool() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("m_invalidCreatePool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMMInvalidCreatePoolLookup() {
            static BNM::Field<void*> _field = GetClass().GetField(O("m_m_invalidCreatePoolLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNetInstantiedObjects() {
            static BNM::Field<void*> _field = GetClass().GetField(O("netInstantiedObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::PrefabType>* GetNetworkPrefabs() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::PrefabType>*> _field = GetClass().GetField(O("networkPrefabs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::PrefabType>* GetNetworkPrefabsData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::PrefabType>*> _field = GetClass().GetField(O("networkPrefabsData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetObjectsQueued() {
            static BNM::Field<void*> _field = GetClass().GetField(O("objectsQueued"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetObjectsWaiting() {
            static BNM::Field<void*> _field = GetClass().GetField(O("objectsWaiting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetQueueBeingProcssed() {
            static BNM::Field<void*> _field = GetClass().GetField(O("queueBeingProcssed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Photon_Pun::PhotonView*>* GetTempViews() {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Pun::PhotonView*>*> _field = GetClass().GetField(O("tempViews"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWaiting() {
            static BNM::Field<bool> _field = GetClass().GetField(O("waiting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMInvalidCreatePool(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("m_invalidCreatePool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMMInvalidCreatePoolLookup(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("m_m_invalidCreatePoolLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetInstantiedObjects(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("netInstantiedObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkPrefabs(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::PrefabType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::PrefabType>*> _field = GetClass().GetField(O("networkPrefabs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkPrefabsData(::BNM::Structures::Mono::Array<::GlobalNamespace::PrefabType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::PrefabType>*> _field = GetClass().GetField(O("networkPrefabsData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectsQueued(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("objectsQueued"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectsWaiting(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("objectsWaiting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueueBeingProcssed(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("queueBeingProcssed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempViews(::BNM::Structures::Mono::List<::Photon_Pun::PhotonView*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Pun::PhotonView*>*> _field = GetClass().GetField(O("tempViews"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaiting(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("waiting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckVOIPSettings(::Photon_Voice_Unity::RemoteVoiceLink* voiceLink) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckVOIPSettings"), {"voiceLink"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(voiceLink);
        }
        void OnLeftRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLeftRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ViewIDError() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ViewIDError"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
