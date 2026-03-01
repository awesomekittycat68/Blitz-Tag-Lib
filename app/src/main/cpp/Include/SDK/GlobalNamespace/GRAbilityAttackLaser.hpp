#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRAbilityAttackLaser_State.hpp"
#include "GRAbilityBase.hpp"

namespace GlobalNamespace {
    struct GRAbilityAttackLaser : ::GlobalNamespace::GRAbilityBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRAbilityAttackLaser");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>* GetAnimData() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>*> _field = GetClass().GetField(O("animData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAnimNameString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("animNameString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAttackDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("attackDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAttackMoveSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("attackMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCoolDown() {
            static BNM::Field<float> _field = GetClass().GetField(O("coolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDamageCollider() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("damageCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDamageTrigger() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("damageTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDoNotFaceTarget() {
            static BNM::Field<bool> _field = GetClass().GetField(O("doNotFaceTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetInitialPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("initialPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetInitialVel() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("initialVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::Monkeye_LazerFX* GetLaserFx() {
            static BNM::Field<::GlobalNamespace::Monkeye_LazerFX*> _field = GetClass().GetField(O("laserFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetLaserOrigins() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("laserOrigins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastAnimIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastAnimIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxLaserRange() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLaserRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxTurnSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTurnSpeed"));
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
        ::GlobalNamespace::GRAbilityAttackLaser_State GetState() {
            static BNM::Field<::GlobalNamespace::GRAbilityAttackLaser_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTarget() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTargetPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("targetPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTellDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("tellDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::Monkeye_LazerFX* GetTellLaserFx() {
            static BNM::Field<::GlobalNamespace::Monkeye_LazerFX*> _field = GetClass().GetField(O("tellLaserFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimData(::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AnimationData*>*> _field = GetClass().GetField(O("animData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnimNameString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("animNameString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttackDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("attackDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttackMoveSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("attackMoveSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoolDown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("coolDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamageCollider(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("damageCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDamageTrigger(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("damageTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoNotFaceTarget(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("doNotFaceTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("initialPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialVel(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("initialVel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaserFx(::GlobalNamespace::Monkeye_LazerFX* value) {
            static BNM::Field<::GlobalNamespace::Monkeye_LazerFX*> _field = GetClass().GetField(O("laserFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLaserOrigins(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("laserOrigins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastAnimIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastAnimIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLaserRange(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxLaserRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxTurnSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxTurnSpeed"));
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
        void SetState(::GlobalNamespace::GRAbilityAttackLaser_State value) {
            static BNM::Field<::GlobalNamespace::GRAbilityAttackLaser_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("targetPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTellDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tellDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTellLaserFx(::GlobalNamespace::Monkeye_LazerFX* value) {
            static BNM::Field<::GlobalNamespace::Monkeye_LazerFX*> _field = GetClass().GetField(O("tellLaserFx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
