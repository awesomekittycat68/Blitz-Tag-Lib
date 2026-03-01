#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameHitData.hpp"
#include "GameHitFx.hpp"
#include "GRAttributeType.hpp"
#include "GRToolClub_State.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct GRToolClub : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRToolClub");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GRAttributes* GetAttributes() {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilityHaptic* GetCloseHaptic() {
            static BNM::Field<::GlobalNamespace::AbilityHaptic*> _field = GetClass().GetField(O("closeHaptic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDullLight() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("dullLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetExtendAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("extendAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExtendedAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("extendedAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetExtendedCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("extendedCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExtendVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("extendVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExtensionTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("extensionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameHitter* GetGameHitter() {
            static BNM::Field<::GlobalNamespace::GameHitter*> _field = GetClass().GetField(O("gameHitter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetHumAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("humAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::ParticleSystem*>* GetHumParticleEffects() {
            static BNM::Field<::BNM::Structures::Mono::List<::ParticleSystem*>*> _field = GetClass().GetField(O("humParticleEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetIdleCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("idleCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::MeshAndMaterials*>* GetMeshAndMaterials() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MeshAndMaterials*>*> _field = GetClass().GetField(O("meshAndMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinHitSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("minHitSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAttributeType GetNoPowerAttribute() {
            static BNM::Field<::GlobalNamespace::GRAttributeType> _field = GetClass().GetField(O("noPowerAttribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameHitFx GetNoPowerFx() {
            static BNM::Field<::GlobalNamespace::GameHitFx> _field = GetClass().GetField(O("noPowerFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilityHaptic* GetOpenHaptic() {
            static BNM::Field<::GlobalNamespace::AbilityHaptic*> _field = GetClass().GetField(O("openHaptic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAttributeType GetPoweredAttribute() {
            static BNM::Field<::GlobalNamespace::GRAttributeType> _field = GetClass().GetField(O("poweredAttribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameHitFx GetPoweredImpactFx() {
            static BNM::Field<::GlobalNamespace::GameHitFx> _field = GetClass().GetField(O("poweredImpactFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRetractableSection() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("retractableSection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRetractableSectionMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("retractableSectionMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRetractableSectionMin() {
            static BNM::Field<float> _field = GetClass().GetField(O("retractableSectionMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetRetractAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("retractAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRetractVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("retractVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRigidBody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolClub_State GetState() {
            static BNM::Field<::GlobalNamespace::GRToolClub_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRTool* GetTool() {
            static BNM::Field<::GlobalNamespace::GRTool*> _field = GetClass().GetField(O("tool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameHitFx GetUpgrade1ImpactVFX() {
            static BNM::Field<::GlobalNamespace::GameHitFx> _field = GetClass().GetField(O("upgrade1ImpactVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameHitFx GetUpgrade2ImpactVFX() {
            static BNM::Field<::GlobalNamespace::GameHitFx> _field = GetClass().GetField(O("upgrade2ImpactVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameHitFx GetUpgrade3ImpactVFX() {
            static BNM::Field<::GlobalNamespace::GameHitFx> _field = GetClass().GetField(O("upgrade3ImpactVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttributes(::GlobalNamespace::GRAttributes* value) {
            static BNM::Field<::GlobalNamespace::GRAttributes*> _field = GetClass().GetField(O("attributes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCloseHaptic(::GlobalNamespace::AbilityHaptic* value) {
            static BNM::Field<::GlobalNamespace::AbilityHaptic*> _field = GetClass().GetField(O("closeHaptic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDullLight(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("dullLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtendAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("extendAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtendedAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("extendedAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtendedCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("extendedCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtendVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("extendVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtensionTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("extensionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameHitter(::GlobalNamespace::GameHitter* value) {
            static BNM::Field<::GlobalNamespace::GameHitter*> _field = GetClass().GetField(O("gameHitter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHumAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("humAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHumParticleEffects(::BNM::Structures::Mono::List<::ParticleSystem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::ParticleSystem*>*> _field = GetClass().GetField(O("humParticleEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdleCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("idleCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshAndMaterials(::BNM::Structures::Mono::List<::GlobalNamespace::MeshAndMaterials*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MeshAndMaterials*>*> _field = GetClass().GetField(O("meshAndMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinHitSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minHitSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoPowerAttribute(::GlobalNamespace::GRAttributeType value) {
            static BNM::Field<::GlobalNamespace::GRAttributeType> _field = GetClass().GetField(O("noPowerAttribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoPowerFx(::GlobalNamespace::GameHitFx value) {
            static BNM::Field<::GlobalNamespace::GameHitFx> _field = GetClass().GetField(O("noPowerFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpenHaptic(::GlobalNamespace::AbilityHaptic* value) {
            static BNM::Field<::GlobalNamespace::AbilityHaptic*> _field = GetClass().GetField(O("openHaptic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoweredAttribute(::GlobalNamespace::GRAttributeType value) {
            static BNM::Field<::GlobalNamespace::GRAttributeType> _field = GetClass().GetField(O("poweredAttribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPoweredImpactFx(::GlobalNamespace::GameHitFx value) {
            static BNM::Field<::GlobalNamespace::GameHitFx> _field = GetClass().GetField(O("poweredImpactFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetractableSection(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("retractableSection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetractableSectionMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("retractableSectionMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetractableSectionMin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("retractableSectionMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetractAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("retractAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRetractVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("retractVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigidBody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::GRToolClub_State value) {
            static BNM::Field<::GlobalNamespace::GRToolClub_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTool(::GlobalNamespace::GRTool* value) {
            static BNM::Field<::GlobalNamespace::GRTool*> _field = GetClass().GetField(O("tool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade1ImpactVFX(::GlobalNamespace::GameHitFx value) {
            static BNM::Field<::GlobalNamespace::GameHitFx> _field = GetClass().GetField(O("upgrade1ImpactVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade2ImpactVFX(::GlobalNamespace::GameHitFx value) {
            static BNM::Field<::GlobalNamespace::GameHitFx> _field = GetClass().GetField(O("upgrade2ImpactVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade3ImpactVFX(::GlobalNamespace::GameHitFx value) {
            static BNM::Field<::GlobalNamespace::GameHitFx> _field = GetClass().GetField(O("upgrade3ImpactVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnableImpactVFXForCurrentUpgradeLevel() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableImpactVFXForCurrentUpgradeLevel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void GetDebugTextLines(::BNM::IL2CPP::Il2CppObject*& strings) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetDebugTextLines"), {"strings"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&strings);
        }
        bool IsButtonHeld() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsButtonHeld"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void OnSuccessfulHit(::GlobalNamespace::GameHitData hitData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccessfulHit"), {"hitData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hitData);
        }
        void OnToolUpgraded(::GlobalNamespace::GRTool* tool) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnToolUpgraded"), {"tool"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tool);
        }
        void OnUpdateAuthority(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateAuthority"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void OnUpdateRemote(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateRemote"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void OnUpdateShared(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateShared"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void SetExtendedAmount_1(float newExtendedAmount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetExtendedAmount"), {"newExtendedAmount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newExtendedAmount);
        }
        void SetState_1(::GlobalNamespace::GRToolClub_State newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
