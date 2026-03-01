#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    struct CosmeticCameraDisableNotifier : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "CosmeticCameraDisableNotifier");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Camera* GetCosmeticCamera() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("_cosmeticCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRigCollection* GetVrrigCollection() {
            static BNM::Field<::GlobalNamespace::VRRigCollection*> _field = GetClass().GetField(O("_vrrigCollection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCosmeticCamera(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("_cosmeticCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrrigCollection(::GlobalNamespace::VRRigCollection* value) {
            static BNM::Field<::GlobalNamespace::VRRigCollection*> _field = GetClass().GetField(O("_vrrigCollection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayerEnteredTryOnSpace(::GlobalNamespace::RigContainer* playerRig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerEnteredTryOnSpace"), {"playerRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerRig);
        }
        void PlayerLeftTryOnSpace(::GlobalNamespace::RigContainer* playerRig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerLeftTryOnSpace"), {"playerRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerRig);
        }
    };
}
