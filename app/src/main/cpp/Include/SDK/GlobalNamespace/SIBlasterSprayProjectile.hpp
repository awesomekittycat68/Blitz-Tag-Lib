#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SIBlasterSprayProjectile : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIBlasterSprayProjectile");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetKnockbackSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("knockbackSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIGadgetBlasterProjectile* GetProjectile() {
            static BNM::Field<::GlobalNamespace::SIGadgetBlasterProjectile*> _field = GetClass().GetField(O("projectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetUpwardsAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("upwardsAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVerticalOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("verticalOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetKnockbackSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("knockbackSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectile(::GlobalNamespace::SIGadgetBlasterProjectile* value) {
            static BNM::Field<::GlobalNamespace::SIGadgetBlasterProjectile*> _field = GetClass().GetField(O("projectile"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpwardsAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("upwardsAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVerticalOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("verticalOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void LocalProjectileHit(::GlobalNamespace::SIPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalProjectileHit"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void NetworkedProjectileHit(::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NetworkedProjectileHit"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TriggerBlastDirectHitPlayer(::GlobalNamespace::SIPlayer* playerHit) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerBlastDirectHitPlayer"), {"playerHit"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerHit);
        }
    };
}
