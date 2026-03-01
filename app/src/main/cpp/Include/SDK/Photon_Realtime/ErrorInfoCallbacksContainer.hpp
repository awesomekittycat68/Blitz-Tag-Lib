#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct ErrorInfoCallbacksContainer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "ErrorInfoCallbacksContainer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Realtime::LoadBalancingClient* GetClient() {
            static BNM::Field<::Photon_Realtime::LoadBalancingClient*> _field = GetClass().GetField(O("client"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetClient(::Photon_Realtime::LoadBalancingClient* value) {
            static BNM::Field<::Photon_Realtime::LoadBalancingClient*> _field = GetClass().GetField(O("client"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnErrorInfo(::Photon_Realtime::ErrorInfo* errorInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnErrorInfo"), {"errorInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(errorInfo);
        }
    };
}
