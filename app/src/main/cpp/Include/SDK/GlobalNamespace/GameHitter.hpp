#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameHitData.hpp"
#include "GameHitFx.hpp"
#include "GameHitType.hpp"
#include "GRAttributeType.hpp"

namespace GlobalNamespace {
    struct GameHitter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameHitter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GRAttributes* GetAttributes() {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetComponents() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("components"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAttributeType GetDamageAttribute() {
            static BNM::Field<::GlobalNamespace::GRAttributeType> _field = GetClass().GetField(O("damageAttribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAttributeType GetFlashDamageAttribute() {
            static BNM::Field<::GlobalNamespace::GRAttributeType> _field = GetClass().GetField(O("flashDamageAttribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetHitCooldownEnd() {
            static BNM::Field<double> _field = GetClass().GetField(O("hitCooldownEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameHitFx GetHitFx() {
            static BNM::Field<::GlobalNamespace::GameHitFx> _field = GetClass().GetField(O("hitFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHitOnCollision() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hitOnCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameHitType GetHitType() {
            static BNM::Field<::GlobalNamespace::GameHitType> _field = GetClass().GetField(O("hitType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetKnockbackMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("knockbackMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxImpulseSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxImpulseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinSwingSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("minSwingSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAttributeType GetShieldDamageAttribute() {
            static BNM::Field<::GlobalNamespace::GRAttributeType> _field = GetClass().GetField(O("shieldDamageAttribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttributes(::GlobalNamespace::GRAttributes* value) {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComponents(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("components"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamageAttribute(::GlobalNamespace::GRAttributeType value) {
            static BNM::Field<::GlobalNamespace::GRAttributeType> _field = GetClass().GetField(O("damageAttribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlashDamageAttribute(::GlobalNamespace::GRAttributeType value) {
            static BNM::Field<::GlobalNamespace::GRAttributeType> _field = GetClass().GetField(O("flashDamageAttribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitCooldownEnd(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("hitCooldownEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitFx(::GlobalNamespace::GameHitFx value) {
            static BNM::Field<::GlobalNamespace::GameHitFx> _field = GetClass().GetField(O("hitFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitOnCollision(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hitOnCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHitType(::GlobalNamespace::GameHitType value) {
            static BNM::Field<::GlobalNamespace::GameHitType> _field = GetClass().GetField(O("hitType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnockbackMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("knockbackMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxImpulseSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxImpulseSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinSwingSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minSwingSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldDamageAttribute(::GlobalNamespace::GRAttributeType value) {
            static BNM::Field<::GlobalNamespace::GRAttributeType> _field = GetClass().GetField(O("shieldDamageAttribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyHit(::GlobalNamespace::GameHitData hitData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyHit"), {"hitData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitData);
        }
        void ApplyHitToPlayer(::GlobalNamespace::GRPlayer* player, ::BNM::Structures::Unity::Vector3 hitPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyHitToPlayer"), {"player", "hitPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, hitPosition);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int CalcHitAmount(::GlobalNamespace::GameHitType hitType, ::GlobalNamespace::GameHittable* hittable, ::GlobalNamespace::GameEntity* hitByEntity) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CalcHitAmount"), {"hitType", "hittable", "hitByEntity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hitType, hittable, hitByEntity);
        }
        template <typename T>
        T GetParentEnemy(::Collider* collider) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetParentEnemy"), {"collider"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(collider);
        }
        void OnCollisionEnter(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionEnter"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
        }
        void OnEntityDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityStateChange(int64_t prevState, int64_t nextState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityStateChange"), {"prevState", "nextState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevState, nextState);
        }
        void OnToolUpgraded(::GlobalNamespace::GRTool* tool) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnToolUpgraded"), {"tool"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tool);
        }
        void PlayVibration(float strength, float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayVibration"), {"strength", "duration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(strength, duration);
        }
    };
}
