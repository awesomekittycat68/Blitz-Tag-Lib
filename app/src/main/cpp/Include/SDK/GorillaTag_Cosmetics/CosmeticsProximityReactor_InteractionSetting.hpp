#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticsProximityReactor_GorillaBodyPart.hpp"
#include "CosmeticsProximityReactor_InteractionMode.hpp"
#include "CosmeticsProximityReactor_TargetType.hpp"

namespace GorillaTag_Cosmetics {
    struct CosmeticsProximityReactor_InteractionSetting : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "CosmeticsProximityReactor").GetInnerClass("InteractionSetting");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCooldownTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::CosmeticsProximityReactor_GorillaBodyPart GetGorillaBodyMask() {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticsProximityReactor_GorillaBodyPart> _field = GetClass().GetField(O("gorillaBodyMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetInteractionKeys() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("interactionKeys"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsMatched() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMatched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastEffectTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastEffectTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::CosmeticsProximityReactor_InteractionMode GetMode() {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticsProximityReactor_InteractionMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnAboveLocal() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onAboveLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnAboveShared() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onAboveShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnBelowLocal() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onBelowLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnBelowShared() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onBelowShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProximityThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("proximityThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::CosmeticsProximityReactor_TargetType GetTargetType() {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticsProximityReactor_TargetType> _field = GetClass().GetField(O("targetType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasBelow() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasBelow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetWhileBelowLocal() {
            static BNM::Field<void*> _field = GetClass().GetField(O("whileBelowLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetWhileBelowShared() {
            static BNM::Field<void*> _field = GetClass().GetField(O("whileBelowShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCooldownTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cooldownTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGorillaBodyMask(::GorillaTag_Cosmetics::CosmeticsProximityReactor_GorillaBodyPart value) {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticsProximityReactor_GorillaBodyPart> _field = GetClass().GetField(O("gorillaBodyMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInteractionKeys(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("interactionKeys"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsMatched(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMatched"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastEffectTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastEffectTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::GorillaTag_Cosmetics::CosmeticsProximityReactor_InteractionMode value) {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticsProximityReactor_InteractionMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnAboveLocal(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onAboveLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnAboveShared(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onAboveShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnBelowLocal(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onBelowLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnBelowShared(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onBelowShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProximityThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("proximityThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetType(::GorillaTag_Cosmetics::CosmeticsProximityReactor_TargetType value) {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticsProximityReactor_TargetType> _field = GetClass().GetField(O("targetType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasBelow(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasBelow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhileBelowLocal(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("whileBelowLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhileBelowShared(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("whileBelowShared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool AcceptsGorillaBodyPart(::GorillaTag_Cosmetics::CosmeticsProximityReactor_GorillaBodyPart kind) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AcceptsGorillaBodyPart"), {"kind"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(kind);
        }
        bool AllowsRig(::GlobalNamespace::VRRig* myRig, ::GlobalNamespace::VRRig* otherRig) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AllowsRig"), {"myRig", "otherRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(myRig, otherRig);
        }
        bool CanPlay(float now) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanPlay"), {"now"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(now);
        }
        void FireAbove(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FireAbove"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        void FireBelow(::GlobalNamespace::VRRig* rig, ::BNM::Structures::Unity::Vector3 contact, float now) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FireBelow"), {"rig", "contact", "now"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, contact, now);
        }
        void FireWhile(::GlobalNamespace::VRRig* rig, ::BNM::Structures::Unity::Vector3 contact) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FireWhile"), {"rig", "contact"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, contact);
        }
        bool IsCosmeticToCosmetic() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCosmeticToCosmetic"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsGorillaBodyToCosmetic() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsGorillaBodyToCosmetic"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool SharesKeyWith(::GorillaTag_Cosmetics::CosmeticsProximityReactor_InteractionSetting* other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SharesKeyWith"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
    };
}
