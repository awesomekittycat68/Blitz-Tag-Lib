#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TalkingCosmeticType.hpp"

namespace GorillaTag_Cosmetics {
    struct VoiceBroadcastCosmeticWearable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "VoiceBroadcastCosmeticWearable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetHeadDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("headDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHeadDistanceActivation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("headDistanceActivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastToggleTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastToggleTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnStartListening() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onStartListening"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnStopListening() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onStopListening"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetPlayerHeadCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("playerHeadCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::TalkingCosmeticType GetTalkingCosmeticType() {
            static BNM::Field<::GorillaTag_Cosmetics::TalkingCosmeticType> _field = GetClass().GetField(O("talkingCosmeticType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetToggleCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("toggleCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetToggleState() {
            static BNM::Field<bool> _field = GetClass().GetField(O("toggleState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::VoiceBroadcastCosmetic*>* GetVoiceBroadcasters() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::VoiceBroadcastCosmetic*>*> _field = GetClass().GetField(O("voiceBroadcasters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHeadDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("headDistance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadDistanceActivation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("headDistanceActivation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastToggleTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastToggleTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnStartListening(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onStartListening"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnStopListening(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onStopListening"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerHeadCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("playerHeadCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTalkingCosmeticType(::GorillaTag_Cosmetics::TalkingCosmeticType value) {
            static BNM::Field<::GorillaTag_Cosmetics::TalkingCosmeticType> _field = GetClass().GetField(O("talkingCosmeticType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("toggleCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleState(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("toggleState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceBroadcasters(::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::VoiceBroadcastCosmetic*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::VoiceBroadcastCosmetic*>*> _field = GetClass().GetField(O("voiceBroadcasters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnCosmeticStartListening() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCosmeticStartListening"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCosmeticStopListening() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCosmeticStopListening"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
