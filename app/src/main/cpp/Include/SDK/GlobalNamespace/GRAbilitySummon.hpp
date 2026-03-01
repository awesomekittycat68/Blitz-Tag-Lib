#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRAbilityBase.hpp"
#include "GRAbilitySummon_State.hpp"

namespace GlobalNamespace {
    struct GRAbilitySummon : ::GlobalNamespace::GRAbilityBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRAbilitySummon");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>* GetAnimData() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>*> _field = GetClass().GetField(O("animData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAnimSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("animSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetChargeTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCoolDown() {
            static BNM::Field<float> _field = GetClass().GetField(O("coolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDesiredSpawnDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("desiredSpawnDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetEntityPrefabToSpawn() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entityPrefabToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFxOnSpawn() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fxOnSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFxStartSummon() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fxStartSummon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastAnimIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastAnimIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetLookAtTarget() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lookAtTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinSpawnDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("minSpawnDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("range"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSpawned() {
            static BNM::Field<bool> _field = GetClass().GetField(O("spawned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSpawnedCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnedCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpawnHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilitySummon_State GetState() {
            static BNM::Field<::GlobalNamespace::GRAbilitySummon_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSummonConeAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("summonConeAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRAbilitySummon_SummonMarker*>* GetSummonMarkers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRAbilitySummon_SummonMarker*>*> _field = GetClass().GetField(O("summonMarkers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetSummonSound() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("summonSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetSummonSpawnAudioClip() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("summonSpawnAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimData(::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>*> _field = GetClass().GetField(O("animData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("animSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChargeTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("chargeTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoolDown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("coolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDesiredSpawnDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("desiredSpawnDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntityPrefabToSpawn(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("entityPrefabToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFxOnSpawn(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fxOnSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFxStartSummon(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fxStartSummon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastAnimIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastAnimIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookAtTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("lookAtTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinSpawnDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minSpawnDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("range"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawned(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("spawned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnedCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("spawnedCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::GRAbilitySummon_State value) {
            static BNM::Field<::GlobalNamespace::GRAbilitySummon_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummonConeAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("summonConeAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummonMarkers(::BNM::Structures::Mono::List<::GlobalNamespace::GRAbilitySummon_SummonMarker*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRAbilitySummon_SummonMarker*>*> _field = GetClass().GetField(O("summonMarkers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummonSound(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("summonSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummonSpawnAudioClip(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("summonSpawnAudioClip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool DoSpawn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ForceSpawn() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ForceSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetRange_1() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetRange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* GetSpawnLocation() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetSpawnLocation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsCoolDownOver() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCoolDownOver"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void OnThink(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnThink"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void OnUpdateShared(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateShared"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void SetLookAtTarget_1(::Transform* transform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLookAtTarget"), {"transform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(transform);
        }
        void SetState_1(::GlobalNamespace::GRAbilitySummon_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void Setup(::GlobalNamespace::GameAgent* agent, ::BNM::IL2CPP::Il2CppObject* anim, ::AudioSource* audioSource, ::Transform* root, ::Transform* head, ::GlobalNamespace::GRSenseLineOfSight* lineOfSight) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"agent", "anim", "audioSource", "root", "head", "lineOfSight"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(agent, anim, audioSource, root, head, lineOfSight);
        }
        void UpdateState(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateState"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
    };
}
