#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonMessageInfoWrapped.hpp"

namespace GlobalNamespace {
    struct LckEntitlementsNetworked : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LckEntitlementsNetworked");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::VRRigSerializer* GetMRigNetworkController() {
            static BNM::Field<::GlobalNamespace::VRRigSerializer*> _field = GetClass().GetField(O("m_rigNetworkController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMRigNetworkController(::GlobalNamespace::VRRigSerializer* value) {
            static BNM::Field<::GlobalNamespace::VRRigSerializer*> _field = GetClass().GetField(O("m_rigNetworkController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSuccessfulSpawn(::GlobalNamespace::RigContainer*& rig, ::GlobalNamespace::PhotonMessageInfoWrapped& info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccessfulSpawn"), {"rig", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&rig, &info);
        }
    };
}
