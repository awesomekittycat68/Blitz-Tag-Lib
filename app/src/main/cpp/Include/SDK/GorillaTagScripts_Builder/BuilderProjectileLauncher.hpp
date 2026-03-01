#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/SlingshotProjectile_AOEKnockbackConfig.hpp"
#include "BuilderProjectileLauncher_FunctionalState.hpp"

namespace GorillaTagScripts_Builder {
    struct BuilderProjectileLauncher : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "BuilderProjectileLauncher");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts_Builder::BuilderProjectile*>* GetAllProjectiles() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts_Builder::BuilderProjectile*>*> _field = GetClass().GetField(O("allProjectiles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::BuilderProjectileLauncher_FunctionalState GetCurrentState() {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderProjectileLauncher_FunctionalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFireCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("fireCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGravityMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig GetKnockbackConfig() {
            static BNM::Field<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig> _field = GetClass().GetField(O("knockbackConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastFireTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastFireTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::BuilderProjectile*>* GetLaunchedProjectiles() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::BuilderProjectile*>*> _field = GetClass().GetField(O("launchedProjectiles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLaunchPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("launchPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetLaunchSound() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("launchSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLaunchVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("launchVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetMyPiece() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("myPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetProjectilePrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProjectileScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("projectileScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllProjectiles(::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts_Builder::BuilderProjectile*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts_Builder::BuilderProjectile*>*> _field = GetClass().GetField(O("allProjectiles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GorillaTagScripts_Builder::BuilderProjectileLauncher_FunctionalState value) {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderProjectileLauncher_FunctionalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fireCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGravityMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gravityMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnockbackConfig(::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig value) {
            static BNM::Field<::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig> _field = GetClass().GetField(O("knockbackConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastFireTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastFireTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchedProjectiles(::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::BuilderProjectile*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::BuilderProjectile*>*> _field = GetClass().GetField(O("launchedProjectiles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("launchPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchSound(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("launchSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaunchVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("launchVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyPiece(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("myPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectilePrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("projectilePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("projectileScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void FunctionalPieceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FunctionalPieceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsStateValid(uint8_t state) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsStateValid"), {"state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(state);
        }
        void LaunchProjectile(int timeStamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LaunchProjectile"), {"timeStamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(timeStamp);
        }
        void OnPieceActivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceActivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPieceCreate(int pieceType, int pieceId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceCreate"), {"pieceType", "pieceId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceType, pieceId);
        }
        void OnPieceDeactivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceDeactivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPieceDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPiecePlacementDeserialized() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPiecePlacementDeserialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnStateChanged(uint8_t newState, ::GlobalNamespace::NetPlayer* instigator, int timeStamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateChanged"), {"newState", "instigator", "timeStamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, instigator, timeStamp);
        }
        void OnStateRequest(uint8_t newState, ::GlobalNamespace::NetPlayer* instigator, int timeStamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStateRequest"), {"newState", "instigator", "timeStamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, instigator, timeStamp);
        }
        void RegisterProjectile(::GorillaTagScripts_Builder::BuilderProjectile* projectile) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterProjectile"), {"projectile"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile);
        }
        void UnRegisterProjectile(::GorillaTagScripts_Builder::BuilderProjectile* projectile) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnRegisterProjectile"), {"projectile"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(projectile);
        }
    };
}
