#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TagEffectsLibrary_EffectType.hpp"

namespace TagEffects {
    struct TagEffectsLibrary : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("TagEffects", "TagEffectsLibrary");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::TagEffects::TagEffectsLibrary* GetInstance() {
            static BNM::Field<::TagEffects::TagEffectsLibrary*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        static constexpr int OBJECT_QUEUE_LIMIT = 12;
        bool GetDebugMode() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_DebugMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetFistBumpSpeedThreshold() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_FistBumpSpeedThreshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetHighFiveSpeedThreshold() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_HighFiveSpeedThreshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::TagEffects::TagEffectsLibrary* GetInstance_f() {
            static BNM::Field<::TagEffects::TagEffectsLibrary*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        bool GetDebugMode_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::TagEffects::ModeTagEffect*>* GetDefaultTagEffects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::TagEffects::ModeTagEffect*>*> _field = GetClass().GetField(O("defaultTagEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetFistBumpSpeedThreshold_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("fistBumpSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetHighFiveSpeedThreshold_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("highFiveSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::TagEffects::TagEffectsCombo*, ::BNM::Structures::Mono::Array<::TagEffects::TagEffectPack*>*>* GetTagEffectsComboLookUp() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::TagEffects::TagEffectsCombo*, ::BNM::Structures::Mono::Array<::TagEffects::TagEffectPack*>*>*> _field = GetClass().GetField(O("tagEffectsComboLookUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::TagEffects::TagEffectsComboResult*>* GetTagEffectsCombos() {
            static BNM::Field<::BNM::Structures::Mono::Array<::TagEffects::TagEffectsComboResult*>*> _field = GetClass().GetField(O("tagEffectsCombos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* GetTagEffectsPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("tagEffectsPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::TagEffects::TagEffectsLibrary* value) {
            static BNM::Field<::TagEffects::TagEffectsLibrary*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetDebugMode(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultTagEffects(::BNM::Structures::Mono::Array<::TagEffects::ModeTagEffect*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::TagEffects::ModeTagEffect*>*> _field = GetClass().GetField(O("defaultTagEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFistBumpSpeedThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("fistBumpSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighFiveSpeedThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("highFiveSpeedThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagEffectsComboLookUp(::BNM::Structures::Mono::Dictionary<::TagEffects::TagEffectsCombo*, ::BNM::Structures::Mono::Array<::TagEffects::TagEffectPack*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::TagEffects::TagEffectsCombo*, ::BNM::Structures::Mono::Array<::TagEffects::TagEffectPack*>*>*> _field = GetClass().GetField(O("tagEffectsComboLookUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagEffectsCombos(::BNM::Structures::Mono::Array<::TagEffects::TagEffectsComboResult*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::TagEffects::TagEffectsComboResult*>*> _field = GetClass().GetField(O("tagEffectsCombos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagEffectsPool(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, void*>*> _field = GetClass().GetField(O("tagEffectsPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::TagEffects::TagEffectPack* comboLookup(::TagEffects::TagEffectPack* playerCosmeticTagEffectPack, ::TagEffects::TagEffectPack* otherPlayerCosmeticTagEffectPack) {
            static BNM::Method<::TagEffects::TagEffectPack*> _m = GetClass().GetMethod(O("comboLookup"), {"playerCosmeticTagEffectPack", "otherPlayerCosmeticTagEffectPack"});
            return _m.Call(playerCosmeticTagEffectPack, otherPlayerCosmeticTagEffectPack);
        }
        static bool get_DebugMode() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_DebugMode"));
            return _m.Call();
        }
        static float get_FistBumpSpeedThreshold() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_FistBumpSpeedThreshold"));
            return _m.Call();
        }
        static float get_HighFiveSpeedThreshold() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_HighFiveSpeedThreshold"));
            return _m.Call();
        }
        static void NewGameObjectOnDisableDispatcher_OnDisabled(::TagEffects::GameObjectOnDisableDispatcher* goodd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NewGameObjectOnDisableDispatcher_OnDisabled"), {"goodd"});
            _m.Call(goodd);
        }
        static void placeEffects(::GameObject* prefab, ::Transform* target, float scale, bool flipZAxis, bool parentEffect, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("placeEffects"), {"prefab", "target", "scale", "flipZAxis", "parentEffect", "rotation"});
            _m.Call(prefab, target, scale, flipZAxis, parentEffect, rotation);
        }
        static void PlayEffect(::Transform* target, bool isLeftHand, float rigScale, ::TagEffects::TagEffectsLibrary_EffectType effectType, ::TagEffects::TagEffectPack* playerCosmeticTagEffectPack, ::TagEffects::TagEffectPack* otherPlayerCosmeticTagEffectPack, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayEffect"), {"target", "isLeftHand", "rigScale", "effectType", "playerCosmeticTagEffectPack", "otherPlayerCosmeticTagEffectPack", "rotation"});
            _m.Call(target, isLeftHand, rigScale, effectType, playerCosmeticTagEffectPack, otherPlayerCosmeticTagEffectPack, rotation);
        }
        ::BNM::Coroutine::IEnumerator* ReclaimDisabled(::Transform* transform) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ReclaimDisabled"), {"transform"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(transform);
        }
        ::BNM::Coroutine::IEnumerator* RecycleGameObject(::TagEffects::GameObjectOnDisableDispatcher* recycledGameObject, ::Transform* target, float scale, bool flipZAxis, bool parentEffect) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("RecycleGameObject"), {"recycledGameObject", "target", "scale", "flipZAxis", "parentEffect"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(recycledGameObject, target, scale, flipZAxis, parentEffect);
        }
    };
}
