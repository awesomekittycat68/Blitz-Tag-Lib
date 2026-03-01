#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderReplicatedTriggerEnter_FunctionalState.hpp"

namespace GorillaTagScripts_Builder {
    struct BuilderReplicatedTriggerEnter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "BuilderReplicatedTriggerEnter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SoundBankPlayer* GetActivateSoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("activateSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetAnimationOnTrigger() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("animationOnTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallMonkeTrigger*>* GetBodyTriggers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallMonkeTrigger*>*> _field = GetClass().GetField(O("bodyTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::BuilderReplicatedTriggerEnter_FunctionalState GetCurrentState() {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderReplicatedTriggerEnter_FunctionalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallHandTrigger*>* GetHandTriggers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallHandTrigger*>*> _field = GetClass().GetField(O("handTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPieceActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPieceActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetKnockbackDirection() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("knockbackDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetKnockbackOnTriggerEnter() {
            static BNM::Field<bool> _field = GetClass().GetField(O("knockbackOnTriggerEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetKnockbackVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("knockbackVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastTriggerTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTriggerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetMyPiece() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("myPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnTriggered() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnTriggered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTriggerCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivateSoundBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("activateSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimationOnTrigger(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("animationOnTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyTriggers(::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallMonkeTrigger*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallMonkeTrigger*>*> _field = GetClass().GetField(O("bodyTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliders(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GorillaTagScripts_Builder::BuilderReplicatedTriggerEnter_FunctionalState value) {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderReplicatedTriggerEnter_FunctionalState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandTriggers(::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallHandTrigger*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts_Builder::BuilderSmallHandTrigger*>*> _field = GetClass().GetField(O("handTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPieceActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPieceActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnockbackDirection(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("knockbackDirection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnockbackOnTriggerEnter(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("knockbackOnTriggerEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKnockbackVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("knockbackVelocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTriggerTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTriggerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyPiece(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("myPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTriggered(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnTriggered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("triggerCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanTrigger() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanTrigger"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void OnBodyTriggerEntered(int playerNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBodyTriggerEntered"), {"playerNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerNumber);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnHandTriggerEntered() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHandTriggerEntered"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void PlayTriggerEffects(::GlobalNamespace::NetPlayer* target) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayTriggerEffects"), {"target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target);
        }
    };
}
