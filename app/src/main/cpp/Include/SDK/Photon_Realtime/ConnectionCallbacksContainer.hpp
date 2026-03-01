#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DisconnectCause.hpp"

namespace Photon_Realtime {
    struct ConnectionCallbacksContainer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "ConnectionCallbacksContainer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Realtime::LoadBalancingClient* GetClient() {
            static BNM::Field<::Photon_Realtime::LoadBalancingClient*> _field = GetClass().GetField(O("client"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void OnConnected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConnected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnConnectedToMaster() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnConnectedToMaster"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCustomAuthenticationFailed(::BNM::Structures::Mono::String* debugMessage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCustomAuthenticationFailed"), {"debugMessage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(debugMessage);
        }
        void OnCustomAuthenticationResponse(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCustomAuthenticationResponse"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        void OnDisconnected(::Photon_Realtime::DisconnectCause cause) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisconnected"), {"cause"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cause);
        }
        void OnRegionListReceived(::Photon_Realtime::RegionHandler* regionHandler) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRegionListReceived"), {"regionHandler"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(regionHandler);
        }
    };
}
