#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "XSceneRef.hpp"

namespace GlobalNamespace {
    struct PhotonViewXSceneRef : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PhotonViewXSceneRef");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Pun::PhotonView* GetPhotonView() {
            static BNM::Method<::Photon_Pun::PhotonView*> _method = GetClass().GetMethod(O("get_photonView"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::XSceneRef GetReference() {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("reference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetReference(::GlobalNamespace::XSceneRef value) {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("reference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::Photon_Pun::PhotonView* get_photonView() {
            static BNM::Method<::Photon_Pun::PhotonView*> _m = GetClass().GetMethod(O("get_photonView"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
