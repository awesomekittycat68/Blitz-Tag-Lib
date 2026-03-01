#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticTryOnNotifier_Mode.hpp"

namespace GorillaTag {
    struct CosmeticTryOnNotifier : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "CosmeticTryOnNotifier");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::VRRigCollection* GetMVrrigCollection() {
            static BNM::Field<::GlobalNamespace::VRRigCollection*> _field = GetClass().GetField(O("m_vrrigCollection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::CosmeticTryOnNotifier_Mode GetMode() {
            static BNM::Field<::GorillaTag::CosmeticTryOnNotifier_Mode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::StringList* GetUnlockList() {
            static BNM::Field<::GorillaTag::StringList*> _field = GetClass().GetField(O("unlockList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMVrrigCollection(::GlobalNamespace::VRRigCollection* value) {
            static BNM::Field<::GlobalNamespace::VRRigCollection*> _field = GetClass().GetField(O("m_vrrigCollection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::GorillaTag::CosmeticTryOnNotifier_Mode value) {
            static BNM::Field<::GorillaTag::CosmeticTryOnNotifier_Mode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnlockList(::GorillaTag::StringList* value) {
            static BNM::Field<::GorillaTag::StringList*> _field = GetClass().GetField(O("unlockList"));
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
