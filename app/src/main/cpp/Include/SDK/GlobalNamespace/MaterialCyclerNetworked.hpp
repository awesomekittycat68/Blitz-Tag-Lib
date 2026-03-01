#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct MaterialCyclerNetworked : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MaterialCyclerNetworked");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetSyncTimeOut() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_SyncTimeOut"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_OnSynchronize(::BNM::Structures::Mono::Action<int, void*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnSynchronize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnSynchronize(::BNM::Structures::Mono::Action<int, void*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnSynchronize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        bool GetMasterClientOnly() {
            static BNM::Field<bool> _field = GetClass().GetField(O("masterClientOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<int, void*>* GetOnSynchronize() {
            static BNM::Field<::BNM::Structures::Mono::Action<int, void*>*> _field = GetClass().GetField(O("OnSynchronize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonView* GetPhotonView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSyncTimeOut_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("syncTimeOut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMasterClientOnly(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("masterClientOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSynchronize(::BNM::Structures::Mono::Action<int, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<int, void*>*> _field = GetClass().GetField(O("OnSynchronize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPhotonView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("photonView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSyncTimeOut(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("syncTimeOut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnSynchronize_1(::BNM::Structures::Mono::Action<int, void*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnSynchronize"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float get_SyncTimeOut() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_SyncTimeOut"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void remove_OnSynchronize_1(::BNM::Structures::Mono::Action<int, void*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnSynchronize"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void RPC_SynchronizePacked(int index, int colourPacked, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_SynchronizePacked"), {"index", "colourPacked", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, colourPacked, info);
        }
        void Synchronize(int materialIndex, ::BNM::Structures::Unity::Color c) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Synchronize"), {"materialIndex", "c"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(materialIndex, c);
        }
    };
}
