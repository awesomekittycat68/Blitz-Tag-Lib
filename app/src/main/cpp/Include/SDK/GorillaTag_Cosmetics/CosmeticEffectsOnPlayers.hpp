#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticEffectsOnPlayers_EFFECTTYPE.hpp"
#include "CosmeticEffectsOnPlayers_TargetType.hpp"
#include "../GorillaTag_CosmeticSystem/ECosmeticSelectSide.hpp"

namespace GorillaTag_Cosmetics {
    struct CosmeticEffectsOnPlayers : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "CosmeticEffectsOnPlayers");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_CosmeticSystem::ECosmeticSelectSide GetCosmeticSelectedSide() {
            static BNM::Method<::GorillaTag_CosmeticSystem::ECosmeticSelectSide> _method = GetClass().GetMethod(O("get_CosmeticSelectedSide"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCosmeticSelectedSide(::GorillaTag_CosmeticSystem::ECosmeticSelectSide value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CosmeticSelectedSide"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsSpawned() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsSpawned"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsSpawned(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsSpawned"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>* GetAllEffects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*> _field = GetClass().GetField(O("allEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_EFFECTTYPE, ::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>* GetAllEffectsDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_EFFECTTYPE, ::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*> _field = GetClass().GetField(O("allEffectsDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetMyRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllEffects(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*> _field = GetClass().GetField(O("allEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllEffectsDict(::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_EFFECTTYPE, ::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_EFFECTTYPE, ::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*> _field = GetClass().GetField(O("allEffectsDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyAllEffects() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyAllEffects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ApplyAllEffectsByDistance(::Transform* _transform) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyAllEffectsByDistance"), {"_transform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_transform);
        }
        void ApplyAllEffectsByDistance(::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyAllEffectsByDistance"), {"position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(position);
        }
        void ApplyAllEffectsForRig(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyAllEffectsForRig"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        template <typename TP0 = void*>
        void ApplyInstantKnockbackByDistance(TP0 effect, ::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyInstantKnockbackByDistance"), {"effect", "position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect, position);
        }
        template <typename TP0 = void*>
        void ApplyInstantKnockbackForRig(TP0 effect, ::GlobalNamespace::VRRig* vrRig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyInstantKnockbackForRig"), {"effect", "vrRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect, vrRig);
        }
        template <typename TP0 = void*>
        void ApplySkinByDistance(TP0 effect, ::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplySkinByDistance"), {"effect", "position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect, position);
        }
        template <typename TP0 = void*>
        void ApplySkinForRig(TP0 effect, ::GlobalNamespace::VRRig* vrRig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplySkinForRig"), {"effect", "vrRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect, vrRig);
        }
        template <typename TP0 = void*>
        void ApplyTagWithKnockbackByDistance(TP0 effect, ::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyTagWithKnockbackByDistance"), {"effect", "position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect, position);
        }
        template <typename TP0 = void*>
        void ApplyTagWithKnockbackForRig(TP0 effect, ::GlobalNamespace::VRRig* vrRig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyTagWithKnockbackForRig"), {"effect", "vrRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect, vrRig);
        }
        template <typename TP0 = void*>
        void ApplyVOForRig(TP0 effect, ::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyVOForRig"), {"effect", "rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect, rig);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GorillaTag_CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() {
            static BNM::Method<::GorillaTag_CosmeticSystem::ECosmeticSelectSide> _m = GetClass().GetMethod(O("get_CosmeticSelectedSide"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSpawned() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSpawned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDespawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDespawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSpawn(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawn"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        template <typename TP0 = void*>
        void PlaySfxByDistance(TP0 effect, ::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySfxByDistance"), {"effect", "position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect, position);
        }
        template <typename TP0 = void*>
        void PlaySfxForRig(TP0 effect, ::GlobalNamespace::VRRig* vrRig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlaySfxForRig"), {"effect", "vrRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect, vrRig);
        }
        template <typename TP0 = void*>
        void PlayVFXByDistance(TP0 effect, ::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayVFXByDistance"), {"effect", "position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect, position);
        }
        template <typename TP0 = void*>
        void PlayVFXForRig(TP0 effect, ::GlobalNamespace::VRRig* vrRig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayVFXForRig"), {"effect", "vrRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(effect, vrRig);
        }
        void set_CosmeticSelectedSide(::GorillaTag_CosmeticSystem::ECosmeticSelectSide value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CosmeticSelectedSide"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsSpawned(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsSpawned"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetKnockbackStrengthMultiplier(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetKnockbackStrengthMultiplier"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool ShouldAffectRig(::GlobalNamespace::VRRig* rig, ::GorillaTag_Cosmetics::CosmeticEffectsOnPlayers_TargetType target) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldAffectRig"), {"rig", "target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(rig, target);
        }
    };
}
