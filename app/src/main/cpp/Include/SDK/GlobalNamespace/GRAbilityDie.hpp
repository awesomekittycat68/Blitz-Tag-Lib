#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRAbilityBase.hpp"

namespace GlobalNamespace {
    struct GRAbilityDie : ::GlobalNamespace::GRAbilityBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRAbilityDie");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>* GetAnimData() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>*> _field = GetClass().GetField(O("animData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDelayDeath() {
            static BNM::Field<float> _field = GetClass().GetField(O("delayDeath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDelayRespawn() {
            static BNM::Field<float> _field = GetClass().GetField(O("delayRespawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDestroyDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("destroyDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableAllCollidersWhenDead() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableAllCollidersWhenDead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableAllRenderersWhenDead() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableAllRenderersWhenDead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetDisableCollidersWhenDead() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("disableCollidersWhenDead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDoKnockback() {
            static BNM::Field<bool> _field = GetClass().GetField(O("doKnockback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameAbilityEvents* GetEvents() {
            static BNM::Field<::GlobalNamespace::GameAbilityEvents*> _field = GetClass().GetField(O("events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFxDeath() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fxDeath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetGroundLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("groundLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Renderer*>* GetHideWhenDead() {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("hideWhenDead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInstigatingActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("instigatingActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsDead() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLootSpawnMarker() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lootSpawnMarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBreakableItemSpawnConfig* GetLootTable() {
            static BNM::Field<::GlobalNamespace::GRBreakableItemSpawnConfig*> _field = GetClass().GetField(O("lootTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReported() {
            static BNM::Field<bool> _field = GetClass().GetField(O("reported"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetSoundDeath() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundDeath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetSoundOnHide() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundOnHide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSpawnOnGround() {
            static BNM::Field<bool> _field = GetClass().GetField(O("spawnOnGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityInterpolatedMovement* GetStaggerMovement() {
            static BNM::Field<::GlobalNamespace::GRAbilityInterpolatedMovement*> _field = GetClass().GetField(O("staggerMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTotalDeathDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("totalDeathDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimData(::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>*> _field = GetClass().GetField(O("animData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelayDeath(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("delayDeath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelayRespawn(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("delayRespawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestroyDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("destroyDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableAllCollidersWhenDead(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableAllCollidersWhenDead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableAllRenderersWhenDead(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableAllRenderersWhenDead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableCollidersWhenDead(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("disableCollidersWhenDead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoKnockback(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("doKnockback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEvents(::GlobalNamespace::GameAbilityEvents* value) {
            static BNM::Field<::GlobalNamespace::GameAbilityEvents*> _field = GetClass().GetField(O("events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFxDeath(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fxDeath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroundLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("groundLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHideWhenDead(::BNM::Structures::Mono::List<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("hideWhenDead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstigatingActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("instigatingActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsDead(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLootSpawnMarker(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lootSpawnMarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLootTable(::GlobalNamespace::GRBreakableItemSpawnConfig* value) {
            static BNM::Field<::GlobalNamespace::GRBreakableItemSpawnConfig*> _field = GetClass().GetField(O("lootTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReported(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("reported"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundDeath(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundDeath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundOnHide(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundOnHide"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnOnGround(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("spawnOnGround"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStaggerMovement(::GlobalNamespace::GRAbilityInterpolatedMovement* value) {
            static BNM::Field<::GlobalNamespace::GRAbilityInterpolatedMovement*> _field = GetClass().GetField(O("staggerMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalDeathDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("totalDeathDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DestroySelf() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroySelf"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Die() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Die"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Disable(::BNM::Structures::Mono::List<::Collider*>* colliders, bool disable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Disable"), {"colliders", "disable"});
            _m.Call(colliders, disable);
        }
        static void Hide(::BNM::Structures::Mono::List<::Renderer*>* renderers, bool hide) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Hide"), {"renderers", "hide"});
            _m.Call(renderers, hide);
        }
        bool IsDone() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsDone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnStop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnStop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUpdateShared(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateShared"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void ReportDeathStat() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReportDeathStat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetInstigatingPlayerIndex(int actorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstigatingPlayerIndex"), {"actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(actorNumber);
        }
        void SetStaggerVelocity(::BNM::Structures::Unity::Vector3 vel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStaggerVelocity"), {"vel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(vel);
        }
        void Setup(::GlobalNamespace::GameAgent* agent, ::BNM::IL2CPP::Il2CppObject* anim, ::AudioSource* audioSource, ::Transform* root, ::Transform* head, ::GlobalNamespace::GRSenseLineOfSight* lineOfSight) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"agent", "anim", "audioSource", "root", "head", "lineOfSight"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(agent, anim, audioSource, root, head, lineOfSight);
        }
    };
}
