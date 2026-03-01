#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRAbilityAttackSimple_State.hpp"
#include "GRAbilityBase.hpp"

namespace GlobalNamespace {
    struct GRAbilityAttackSimple : ::GlobalNamespace::GRAbilityBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRAbilityAttackSimple");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAdjustByAnimationSpeed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("adjustByAnimationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAllowMovement() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAnimNameString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("animNameString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AnimationData* GetAttackAnimData() {
            static BNM::Field<::GlobalNamespace::AnimationData*> _field = GetClass().GetField(O("attackAnimData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAttackDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("attackDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCoolDown() {
            static BNM::Field<float> _field = GetClass().GetField(O("coolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetDamageTrigger() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("damageTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameAbilityEvents* GetEvents() {
            static BNM::Field<::GlobalNamespace::GameAbilityEvents*> _field = GetClass().GetField(O("events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxTurnSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTurnSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AnimationData* GetOutroAnimData() {
            static BNM::Field<::GlobalNamespace::AnimationData*> _field = GetClass().GetField(O("outroAnimData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("range"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetSoundAttack() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetSoundOutro() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundOutro"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AbilitySound* GetSoundTell() {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundTell"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRAbilityAttackSimple_State GetState() {
            static BNM::Field<::GlobalNamespace::GRAbilityAttackSimple_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AnimationData* GetTellAnimData() {
            static BNM::Field<::GlobalNamespace::AnimationData*> _field = GetClass().GetField(O("tellAnimData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTellDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("tellDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeMult() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAdjustByAnimationSpeed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("adjustByAnimationSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllowMovement(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allowMovement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimNameString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("animNameString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttackAnimData(::GlobalNamespace::AnimationData* value) {
            static BNM::Field<::GlobalNamespace::AnimationData*> _field = GetClass().GetField(O("attackAnimData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttackDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("attackDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoolDown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("coolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamageTrigger(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("damageTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEvents(::GlobalNamespace::GameAbilityEvents* value) {
            static BNM::Field<::GlobalNamespace::GameAbilityEvents*> _field = GetClass().GetField(O("events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxTurnSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTurnSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutroAnimData(::GlobalNamespace::AnimationData* value) {
            static BNM::Field<::GlobalNamespace::AnimationData*> _field = GetClass().GetField(O("outroAnimData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("range"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundAttack(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundAttack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundOutro(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundOutro"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundTell(::GlobalNamespace::AbilitySound* value) {
            static BNM::Field<::GlobalNamespace::AbilitySound*> _field = GetClass().GetField(O("soundTell"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::GRAbilityAttackSimple_State value) {
            static BNM::Field<::GlobalNamespace::GRAbilityAttackSimple_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTellAnimData(::GlobalNamespace::AnimationData* value) {
            static BNM::Field<::GlobalNamespace::AnimationData*> _field = GetClass().GetField(O("tellAnimData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTellDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tellDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeMult(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void EnableList(::BNM::Structures::Mono::List<::GameObject*>* objs, bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableList"), {"objs", "enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(objs, enable);
        }
        ::BNM::Structures::Mono::String* GetAnimName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetAnimName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetRange_1() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetRange"));
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
        void OnUpdateShared(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateShared"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void PlayState(::GlobalNamespace::GRAbilityAttackSimple_State newState, ::GlobalNamespace::AnimationData* animData, ::GlobalNamespace::AbilitySound* sound, bool damageEnabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayState"), {"newState", "animData", "sound", "damageEnabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, animData, sound, damageEnabled);
        }
        void SetTargetPlayer(::GlobalNamespace::NetPlayer* targetPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTargetPlayer"), {"targetPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(targetPlayer);
        }
        void Setup(::GlobalNamespace::GameAgent* agent, ::BNM::IL2CPP::Il2CppObject* anim, ::AudioSource* audioSource, ::Transform* root, ::Transform* head, ::GlobalNamespace::GRSenseLineOfSight* lineOfSight) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"agent", "anim", "audioSource", "root", "head", "lineOfSight"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(agent, anim, audioSource, root, head, lineOfSight);
        }
    };
}
