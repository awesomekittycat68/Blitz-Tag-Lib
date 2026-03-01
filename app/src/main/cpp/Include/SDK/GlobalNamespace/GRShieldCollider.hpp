#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityId.hpp"

namespace GlobalNamespace {
    struct GRShieldCollider : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRShieldCollider");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float BLOCK_SAME_HITTABLE_COOLDOWN = 1.0f;
        float GetKnockbackVelocity() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_KnockbackVelocity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GRToolDirectionalShield* GetShieldTool() {
            static BNM::Method<::GlobalNamespace::GRToolDirectionalShield*> _method = GetClass().GetMethod(O("get_ShieldTool"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetKnockbackVelocity_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("knockbackVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntityId GetLastBlockHittableEntityId() {
            static BNM::Field<::GlobalNamespace::GameEntityId> _field = GetClass().GetField(O("lastBlockHittableEntityId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastBlockHittableTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastBlockHittableTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolDirectionalShield* GetShieldTool_f() {
            static BNM::Field<::GlobalNamespace::GRToolDirectionalShield*> _field = GetClass().GetField(O("shieldTool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetKnockbackVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("knockbackVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastBlockHittableEntityId(::GlobalNamespace::GameEntityId value) {
            static BNM::Field<::GlobalNamespace::GameEntityId> _field = GetClass().GetField(O("lastBlockHittableEntityId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastBlockHittableTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastBlockHittableTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldTool(::GlobalNamespace::GRToolDirectionalShield* value) {
            static BNM::Field<::GlobalNamespace::GRToolDirectionalShield*> _field = GetClass().GetField(O("shieldTool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BlockHittable(::BNM::Structures::Unity::Vector3 enemyPosition, ::BNM::Structures::Unity::Vector3 enemyAttackDirection, ::GlobalNamespace::GameHittable* hittable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BlockHittable"), {"enemyPosition", "enemyAttackDirection", "hittable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enemyPosition, enemyAttackDirection, hittable);
        }
        float get_KnockbackVelocity() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_KnockbackVelocity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GRToolDirectionalShield* get_ShieldTool() {
            static BNM::Method<::GlobalNamespace::GRToolDirectionalShield*> _m = GetClass().GetMethod(O("get_ShieldTool"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnEnemyBlocked(::BNM::Structures::Unity::Vector3 enemyPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnemyBlocked"), {"enemyPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enemyPosition);
        }
    };
}
