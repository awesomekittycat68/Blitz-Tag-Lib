#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RCCosmeticNetworkSync_SyncedState.hpp"
#include "../Photon_Pun/MonoBehaviourPun.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GorillaTag_Cosmetics {
    struct RCCosmeticNetworkSync : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "RCCosmeticNetworkSync");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_Cosmetics::RCRemoteHoldable* GetRcRemote() {
            static BNM::Field<::GorillaTag_Cosmetics::RCRemoteHoldable*> _field = GetClass().GetField(O("rcRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::RCCosmeticNetworkSync_SyncedState GetSyncedState() {
            static BNM::Field<::GorillaTag_Cosmetics::RCCosmeticNetworkSync_SyncedState> _field = GetClass().GetField(O("syncedState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRcRemote(::GorillaTag_Cosmetics::RCRemoteHoldable* value) {
            static BNM::Field<::GorillaTag_Cosmetics::RCRemoteHoldable*> _field = GetClass().GetField(O("rcRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSyncedState(::GorillaTag_Cosmetics::RCCosmeticNetworkSync_SyncedState value) {
            static BNM::Field<::GorillaTag_Cosmetics::RCCosmeticNetworkSync_SyncedState> _field = GetClass().GetField(O("syncedState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DestroyThis() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyThis"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HitRCVehicleRPC(::BNM::Structures::Unity::Vector3 hitVelocity, bool isProjectile, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HitRCVehicleRPC"), {"hitVelocity", "isProjectile", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitVelocity, isProjectile, info);
        }
        void OnPhotonInstantiate(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPhotonInstantiate"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void OnPhotonSerializeView(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPhotonSerializeView"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
    };
}
